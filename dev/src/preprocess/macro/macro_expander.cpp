#include "preprocess/macro/macro_expander.h"

#include <algorithm>
#include <cstdio>
#include <cstring>

#include "lex/gnu_builtins.h"
#include "lex/text_literal.h"
#include "preprocess/lexer/pp_lexer.h"
#include "preprocess/preprocess_error.h"
#include "preprocess/source/source_buffer.h"

namespace {

bool IsPunctuatorToken(const PPToken& token, TokenKind kind)
{
	return token.kind == PPTokenKind::PreprocessingOpOrPunc && IsPunctuator(token.punctuator, kind);
}

bool IsTextLiteral(PPTokenKind kind)
{
	return kind == PPTokenKind::CharacterLiteral || kind == PPTokenKind::UserDefinedCharacterLiteral ||
		kind == PPTokenKind::StringLiteral || kind == PPTokenKind::UserDefinedStringLiteral;
}

// An identifier-like preprocessing-op-or-punc (`and`, `new`, ...).
bool IsIdentifierLikeOperator(const PPToken& token)
{
	return token.kind == PPTokenKind::PreprocessingOpOrPunc && token.length != 0 && token.spelling[0] >= 'a' &&
		token.spelling[0] <= 'z';
}

// __has_cpp_attribute and (gnu) __has_attribute answer 1 for the attributes
// this implementation implements and 0 for every other name: the standard
// attribute no_unique_address, and the GNU and Clang attributes the parser
// accepts and applies (syntax/parser_specifiers.cpp). A header that probes
// for an attribute then uses it, so claiming not to have one that is
// implemented sends the header down a fallback path instead. `__name__`
// spells the same attribute.
bool IsReportedAttribute(const char* spelling, uint32_t length, bool gnu)
{
	if (length > 4 && std::memcmp(spelling, "__", 2) == 0 && std::memcmp(spelling + length - 2, "__", 2) == 0)
	{
		spelling += 2;
		length -= 4;
	}
	static const char* const kStandard[] = { "no_unique_address", "noreturn" };
	static const char* const kGnu[] = { "always_inline", "noinline", "noreturn", "deprecated", "pure", "const", "used",
		"weak", "packed", "aligned", "section", "visibility", "vector_size", "gnu_inline", "abi_tag", "may_alias",
		"using_if_exists", "exclude_from_explicit_instantiation", "mode", "returns_nonnull", "malloc", "naked",
		"ext_vector_type", "cold", "alias", "overloadable", "unavailable", "constructor", "destructor" };
	const char* const* reported = gnu ? kGnu : kStandard;
	const unsigned count = gnu ? sizeof(kGnu) / sizeof(kGnu[0]) : sizeof(kStandard) / sizeof(kStandard[0]);
	for (unsigned i = 0; i < count; ++i)
	{
		if (std::strlen(reported[i]) == length && std::memcmp(spelling, reported[i], length) == 0)
			return true;
	}
	return false;
}

PPToken EndToken()
{
	PPToken token = PPToken();
	token.kind = PPTokenKind::EndOfFile;
	token.spelling = "";
	return token;
}

PPToken Placemark(const PPToken& head, uint8_t flags = 0)
{
	PPToken token = PPToken();
	token.kind = PPTokenKind::Placemarker;
	token.flags = flags & kLeadingSpace;
	token.spelling = "";
	token.begin = head.begin;
	token.end = head.end;
	return token;
}

} // namespace

MacroExpander::MacroExpander(Arena& arena, IdentifierTable& identifiers, const PreprocessorNames& names,
	ExpansionEnvironment& environment, MacroExpansionState& state)
	: arena_(arena), identifiers_(identifiers), names_(names), environment_(environment), input_(nullptr),
	  controlling_expression_(false), binary_exponents_(false), digit_separators_(false), hosted_recursion_(false),
	  pending_space_(false), building_head_(EndToken()), building_serial_(0), building_chain_(0), read_serial_(0),
	  read_chain_(0), read_root_(0), read_disabled_(0), current_(EndToken()), state_(state)
{}

// ---- rescanning ---------------------------------------------------------------

const PPToken& MacroExpander::next()
{
	for (;;)
	{
		if (!read(current_, true))
		{
			// The argument being replaced has ended.
			finish_argument();
			continue;
		}
		if (current_.kind == PPTokenKind::Identifier && start_expansion())
			continue;
		if (invocations_.empty())
			return current_;
		// A token of the argument being replaced.
		expanded_tokens_.push_back(current_);
	}
}

bool MacroExpander::start_expansion()
{
	// Returns whether current_ began an expansion; otherwise it is a
	// replaced token, possibly now painted, a number or a string.
	Identifier* identifier = current_.identifier;
	if (controlling_expression_ && identifier == names_.defined && !embed_operand_)
	{
		replace_defined();
		return false;
	}
	MacroDefinition* macro = identifier->macro;
	if (macro == nullptr || (current_.flags & kPainted) != 0)
		return false;
	// The names disabled where the token was read apply to every token of an
	// argument being replaced, but in an expansion only to its own tokens:
	// substituted ones carry just their sets.
	// GNU scanning checks the active name before looking for `(`,
	// while the final token's replacement context is still open.
	const uint32_t disabled = hosted_recursion_ || (read_serial_ != 0 && (current_.flags & kArgument) != 0)
		? 0
		: read_disabled_;
	const bool hidden_by_set = hosted_recursion_ ? macro->name->macro_open_serial != 0 : hidden(current_, *macro);
	if (hidden_by_set || (disabled != 0 && disabled_here(*macro, disabled)))
	{
		if (!hosted_recursion_ && hidden_by_set && (current_.flags & (kArgument | kReplacedArgument)) == kArgument)
			++state_.counters.raw_operands_hidden;
		current_.flags |= kPainted;
		return false;
	}
	if (macro->builtin != BuiltinMacro::None)
	{
		replace_builtin(*macro);
		return false;
	}
	const PPToken head = current_;
	const uint32_t context_disabled = read_disabled_;
	const uint32_t head_serial = read_serial_;
	// Read from an argument being replaced (its barrier is the top), not an
	// expansion or the input.
	const bool from_argument = read_serial_ == 0 && !contexts_.empty();
	if (!macro->function_like)
	{
		const Nesting nesting = nesting_of(head, from_argument, false);
		const bool passes = passes_disabled(head, nesting.parent);
		push_expansion(*macro, head, nesting, passes ? context_disabled : 0,
			passes ? begin_inherited(head, head_serial, from_argument) : 0, nullptr);
		return true;
	}
	// A function-like macro name is replaced only when the next token is
	// `(` ([cpp.replace] 16.3p10).
	if (!peek_is_left_paren())
		return false;
	begin_invocation(*macro, head, context_disabled, begin_inherited(head, head_serial, from_argument), from_argument);
	return true;
}

bool MacroExpander::hidden(const PPToken& token, const MacroDefinition& macro) const
{
	// Whether the token's hide set holds the macro's name. A replacement-list
	// token read from its own context C, the top of the stack, carries C's
	// chain. Every open context between C's root and C is on that chain
	// (another one would have been popped before the next link's name was
	// read), so the macro is on the chain exactly when its newest open
	// context is at or above the root: no walk of the set. The same holds
	// while C is open below the top, for macros whose newest open context
	// is not above C. A chain with an ended context has no root.
	if (read_serial_ != 0 && read_root_ != 0 && token.origin == read_serial_ && token.hide_set == read_chain_)
		return in_open_chain(macro, read_root_);
	const Context* origin = token.origin != 0 && token.hide_set != 0 ? find_open_context(token.origin) : nullptr;
	if (origin != nullptr && origin->expansion.root != 0 && macro.name->macro_open_serial <= origin->serial &&
		origin->expansion.chain == token.hide_set)
	{
		return in_open_chain(macro, origin->expansion.root);
	}
	return hide_sets_.contains(token.hide_set, macro.name);
}

bool MacroExpander::disabled_here(const MacroDefinition& macro, uint32_t disabled) const
{
	// Whether the macro is in the set disabled for the token just read. For
	// an argument's own tokens the set is often the chain of the expansion
	// the invocation is nested in, open below the barrier: the macro is on
	// it exactly when its newest open context not above that expansion is
	// at or above the root, the test of hidden(); a context of the macro
	// opened inside the argument leaves the set to decide.
	const Context& from = contexts_.back();
	if (from.macro == nullptr && from.barrier.disabled_top != 0 && disabled == from.disabled &&
		macro.name->macro_open_serial <= from.barrier.disabled_top)
	{
		return in_open_chain(macro, from.barrier.disabled_root);
	}
	return hide_sets_.contains(disabled, macro.name);
}

template<bool HeaderOperand>
bool MacroExpander::read(PPToken& token, bool keep_shared)
{
	// False at the end of the argument being replaced.
	for (;;)
	{
		if (contexts_.empty())
		{
			token = HeaderOperand ? input_->next_header_operand() : input_->next();
			read_serial_ = 0;
			read_disabled_ = 0;
			break;
		}
		Context& context = contexts_.back();
		if (context.cursor < context.end)
		{
			if (context.has_shared)
			{
				const PPToken& next = context_tokens_[context.cursor];
				if (next.kind == PPTokenKind::SharedExpansion &&
					(!keep_shared || invocations_.empty() || next.origin != state_.binding_revision))
					materialize_context(context);
			}
			token = tokens_of(context)[context.cursor++];
			if (context.macro != nullptr)
			{
				read_serial_ = context.serial;
				read_chain_ = context.expansion.chain;
				read_root_ = context.expansion.root;
				read_disabled_ = context.disabled;
			}
			else
			{
				read_serial_ = 0;
				read_disabled_ = (token.flags & kFromArgument) != 0 ? context.barrier.outer : context.disabled;
			}
			break;
		}
		if (context.macro == nullptr)
		{
			token = EndToken();
			return false;
		}
		pop_context();
	}
	if (pending_space_)
	{
		token.flags |= kLeadingSpace;
		pending_space_ = false;
	}
	return true;
}

bool MacroExpander::peek_is_left_paren()
{
	// Exhausted contexts are popped on the way, as the read that follows
	// would pop them.
	for (;;)
	{
		if (contexts_.empty())
			return IsPunctuatorToken(input_->peek(), TokenKind::OP_LPAREN);
		Context& context = contexts_.back();
		if (context.cursor < context.end)
		{
			const PPToken& next = tokens_of(context)[context.cursor];
			return next.kind == PPTokenKind::SharedExpansion ? IsPunctuator(next.punctuator, TokenKind::OP_LPAREN)
															 : IsPunctuatorToken(next, TokenKind::OP_LPAREN);
		}
		if (context.macro == nullptr)
			return false;
		pop_context();
	}
}

void MacroExpander::pop_context()
{
	Context& context = contexts_.back();
	if (context.macro != nullptr)
	{
		context.macro->name->macro_open_serial = context.expansion.previous_open;
		context_tokens_.resize(context.begin);
	}
	contexts_.pop_back();
	if (contexts_.empty() && invocations_.empty())
		shared_tokens_.clear();
}

const MacroExpander::Context* MacroExpander::find_open_context(uint32_t serial) const
{
	// Serials never decrease up the stack, and the barriers pushed after the
	// expansion with this serial have serials no smaller, so that expansion,
	// if still open, is the lowest context whose serial is not below it. The
	// one sought is usually within a few contexts of the top; below those a
	// search keeps stacked argument barriers from costing a walk per lookup.
	const std::size_t size = contexts_.size();
	std::size_t below = size;
	for (std::size_t steps = 0; below != 0 && steps != kTopProbe; ++steps)
	{
		const Context& context = contexts_[below - 1];
		if (context.serial < serial)
			return nullptr;
		if (context.serial == serial && context.macro != nullptr)
			return &context;
		--below;
	}
	auto found = std::lower_bound(contexts_.begin(), contexts_.begin() + below, serial,
		[](const Context& context, uint32_t value) { return context.serial < value; });
	return found != contexts_.begin() + below && found->macro != nullptr && found->serial == serial ? &*found : nullptr;
}

MacroExpander::Nesting MacroExpander::nesting_of(const PPToken& head, bool from_argument, bool function_like) const
{
	if (hosted_recursion_)
		return Nesting{ 0, 0 };
	// An invocation is nested in the context that produced its name token if
	// it begins there: the name is an object-like macro's or its `(` comes
	// from that context. That is whether the context is still open (for a
	// function-like macro, when its `(` is found); a name substituted for a
	// parameter is never nested. The expansion's chain extends that
	// context's chain, which names only the contexts it is nested in: a
	// set a placemarker paste merged into the name token hides that token
	// alone.
	if ((head.flags & kArgument) != 0 || head.origin == 0)
		return Nesting{ 0, 0 };
	if (const Context* context = find_open_context(head.origin))
		return Nesting{ context->serial, context->expansion.chain };
	// A name read from an argument being replaced, collected from a context
	// that has ended since: it began there if the collection says so, and
	// its token carries that context's chain.
	if (from_argument)
	{
		const Context& barrier = contexts_.back();
		if (!function_like || (argument_tokens_[barrier.cursor].flags & kFollowsInContext) != 0)
			return Nesting{ head.origin, head.hide_set };
	}
	return Nesting{ 0, 0 };
}

uint32_t MacroExpander::begin_inherited(const PPToken& head, uint32_t head_serial, bool from_argument) const
{
	if (hosted_recursion_)
		return 0;
	// What an invocation inherits comes from the context it begins in, the
	// top of the stack once its `(` is found; a name substituted as written
	// into that expansion inherits nothing, and one collected into the
	// argument from an enclosing argument inherits what is disabled there.
	if (contexts_.empty())
		return 0;
	const Context& top = contexts_.back();
	if (top.macro == nullptr)
		return from_argument && (head.flags & kFromArgument) != 0 ? top.barrier.outer : top.inherited;
	if (top.serial == head_serial && (head.flags & (kArgument | kReplacedArgument)) == kArgument)
		return 0;
	return top.inherited;
}

uint32_t MacroExpander::chain_root(uint32_t parent) const
{
	// A nested expansion shares its parent's root while every context on the
	// chain is open. The parent can end while the arguments are collected;
	// the chain is then only a set (root 0: no open-context test). An open
	// parent is the top: what the arguments' replacement pushed is gone.
	if (parent == 0)
		return building_serial_;
	const Context* top = contexts_.empty() ? nullptr : &contexts_.back();
	return top != nullptr && top->macro != nullptr && top->serial == parent ? top->expansion.root : 0;
}

// ---- invocation -----------------------------------------------------------------
//
// An invocation's arguments are collected, then each argument used as a
// plain parameter is macro-replaced once, as if it were the rest of the
// file, and copied at each use (16.3.1p1). Replacement reads the argument
// through a barrier context and appends what next() produces to
// expanded_tokens_; invocations inside the argument start their own
// arguments on the stack invocations_, so nesting costs no native stack.

void MacroExpander::begin_invocation(
	MacroDefinition& macro, const PPToken& head, uint32_t context_disabled, uint32_t inherited, bool from_argument)
{
	Arguments arguments;
	arguments.bounds = static_cast<uint32_t>(argument_bounds_.size());
	arguments.expanded = static_cast<uint32_t>(expanded_bounds_.size());
	arguments.token_mark = static_cast<uint32_t>(argument_tokens_.size());
	arguments.expanded_mark = static_cast<uint32_t>(expanded_tokens_.size());
	// While an argument is replaced, the names inherited where the name token
	// was read stay disabled, along with the chain of an invocation nested
	// there. A substituted function name's set applies to its replacement,
	// not to the arguments it collects after that expansion has ended.
	const Nesting nesting = nesting_of(head, from_argument, true);
	arguments.disabled = hide_sets_.merge(nesting.parent != 0 ? head.hide_set : 0, inherited);
	arguments.outer = arguments.disabled;
	arguments.disabled_top = 0;
	arguments.disabled_root = 0;
	if (!collect_nested_arguments(macro, arguments))
	{
		PPToken left_paren;
		read(left_paren);
		collect_arguments(macro, head, arguments);
	}
	// The set is the parent's chain; the parent is below the barriers while
	// it outlasted the collection.
	if (nesting.parent != 0 && arguments.disabled == nesting.chain)
	{
		const Context* parent = find_open_context(nesting.parent);
		if (parent != nullptr && parent->expansion.root != 0)
		{
			arguments.disabled_top = parent->serial;
			arguments.disabled_root = parent->expansion.root;
		}
	}
	check_argument_count(macro, head, arguments);
	invocations_.push_back(
		Invocation{ &macro, head, nesting, passes_disabled(head, nesting.parent) ? context_disabled : 0,
			passes_disabled(head, nesting.parent) ? inherited : 0, arguments, 0, 0, pending_space_ });
	telemetry::note_peak(state_.counters.peak_invocations, invocations_.size());
	if (macro.has_va_opt)
	{
		expanded_bounds_.resize(arguments.expanded + 2u * arguments.count, UINT32_MAX);
		advance_optional_arguments();
		return;
	}
	advance_arguments();
}

void MacroExpander::collect_arguments(const MacroDefinition& macro, const PPToken& head, Arguments& arguments)
{
	// Arguments are separated by commas outside nested parentheses; the
	// variable arguments take the rest, commas included (16.3p11-p12). The
	// tokens are copied, and each nested `(` and comma is linked to the next
	// comma or `)` at its level, so an invocation inside the argument can
	// later take its arguments without scanning or copying them.
	const uint32_t variable = macro.variadic ? macro.parameter_count - 1u : UINT32_MAX;
	uint32_t index = 0;
	uint32_t depth = 0;
	uint32_t start = arguments.token_mark;
	link_stack_.clear();
	uint32_t previous_serial = 0;
	PPToken token;
	for (;;)
	{
		if (!read(token) || token.kind == PPTokenKind::EndOfFile)
		{
			if (token.kind == PPTokenKind::EndOfFile && environment_.continue_macro_arguments())
			{
				previous_serial = 0;
				continue;
			}
			throw PreprocessError(head.begin, "unterminated macro invocation");
		}
		// A raw operand can outlive the replacement that supplied it. Retain
		// its disablement before collecting the rest pops that context.
		if (hosted_recursion_ && token.kind == PPTokenKind::Identifier && token.identifier->macro != nullptr &&
			token.identifier->macro_open_serial != 0)
			token.flags |= kPainted;
		if (read_serial_ != 0 && read_serial_ == previous_serial)
			token.flags |= kFollowsInContext;
		previous_serial = read_serial_;
		if (read_serial_ == 0 && !contexts_.empty())
		{
			// Read from the argument being replaced below the expansions the
			// invocation began in: what is disabled there stays disabled.
			arguments.outer = hide_sets_.merge(arguments.outer, read_disabled_);
			token.flags |= kFromArgument;
		}
		const uint32_t position = static_cast<uint32_t>(argument_tokens_.size());
		if (token.kind == PPTokenKind::PreprocessingOpOrPunc)
		{
			if (IsPunctuator(token.punctuator, TokenKind::OP_LPAREN))
			{
				++depth;
				link_stack_.push_back(position);
			}
			else if (IsPunctuator(token.punctuator, TokenKind::OP_RPAREN))
			{
				if (depth == 0)
					break;
				--depth;
				argument_links_[link_stack_.back()] = position;
				link_stack_.pop_back();
			}
			else if (IsPunctuator(token.punctuator, TokenKind::OP_COMMA))
			{
				if (depth != 0)
				{
					argument_links_[link_stack_.back()] = position;
					link_stack_.back() = position;
				}
				else if (index != variable)
				{
					argument_bounds_.push_back(start);
					argument_bounds_.push_back(position);
					start = position;
					++index;
					continue;
				}
			}
		}
		argument_tokens_.push_back(token);
		argument_links_.push_back(UINT32_MAX);
	}
	argument_bounds_.push_back(start);
	argument_bounds_.push_back(static_cast<uint32_t>(argument_tokens_.size()));
	arguments.count = index + 1;
	state_.counters.argument_tokens += argument_tokens_.size() - arguments.token_mark;
}

bool MacroExpander::collect_nested_arguments(const MacroDefinition& macro, Arguments& arguments)
{
	// An invocation read from an argument being replaced takes its
	// arguments as ranges of that argument by following the links, without
	// copying: collection changes no token, and what is disabled is decided
	// as each one is read.
	if (contexts_.empty())
		return false;
	Context& context = contexts_.back();
	if (context.macro != nullptr)
		return false;
	++state_.counters.nested_collections;
	arguments.outer = hide_sets_.merge(arguments.disabled, context.barrier.outer);
	const uint32_t variable = macro.variadic ? macro.parameter_count - 1u : UINT32_MAX;
	const uint32_t open = context.cursor;
	uint32_t index = 0;
	uint32_t start = open + 1;
	uint32_t at = argument_links_[open];
	while (!IsPunctuatorToken(argument_tokens_[at], TokenKind::OP_RPAREN))
	{
		if (index != variable)
		{
			argument_bounds_.push_back(start);
			argument_bounds_.push_back(at);
			start = at + 1;
			++index;
		}
		at = argument_links_[at];
	}
	argument_bounds_.push_back(start);
	argument_bounds_.push_back(at);
	arguments.count = index + 1;
	context.cursor = at + 1;
	return true;
}

void MacroExpander::check_argument_count(const MacroDefinition& macro, const PPToken& head, Arguments& arguments)
{
	const uint32_t parameters = macro.parameter_count;
	if (parameters == 0)
	{
		// `()` is one empty argument, which a macro without parameters takes.
		if (arguments.count != 1 || argument_bounds_[arguments.bounds] != argument_bounds_[arguments.bounds + 1])
			throw PreprocessError(head.begin, "too many macro arguments");
		arguments.count = 0;
	}
	else if (arguments.count + 1 == parameters && macro.variadic)
	{
		// The omitted variable argument has an empty token range.
		environment_.check_variadic_omission(head, macro.location);
		const uint32_t end = argument_bounds_.back();
		argument_bounds_.push_back(end);
		argument_bounds_.push_back(end);
		arguments.count = parameters;
	}
	else if (arguments.count != parameters)
	{
		throw PreprocessError(
			head.begin, arguments.count < parameters ? "too few macro arguments" : "too many macro arguments");
	}
}

void MacroExpander::advance_arguments()
{
	// Starts replacing the next argument used as a plain parameter, or
	// completes the invocation when none is left.
	Invocation& invocation = invocations_.back();
	const Arguments& arguments = invocation.arguments;
	while (invocation.argument < arguments.count)
	{
		const uint32_t i = invocation.argument;
		if ((invocation.macro->parameter_uses[i] & kParameterExpanded) != 0)
		{
			++state_.counters.argument_expansions;
			expanded_bounds_.push_back(static_cast<uint32_t>(expanded_tokens_.size()));
			const uint32_t begin = argument_bounds_[arguments.bounds + 2 * i];
			const uint32_t end = argument_bounds_[arguments.bounds + 2 * i + 1];
			push_barrier(arguments, begin, end);
			pending_space_ = false;
			return;
		}
		expanded_bounds_.push_back(0);
		expanded_bounds_.push_back(0);
		++invocation.argument;
	}
	complete_invocation();
}

bool MacroExpander::request_argument(Invocation& invocation, uint32_t parameter)
{
	const Arguments& arguments = invocation.arguments;
	uint32_t& first = expanded_bounds_[arguments.expanded + 2u * parameter];
	if (first != UINT32_MAX)
		return false;
	first = static_cast<uint32_t>(expanded_tokens_.size());
	invocation.argument = parameter;
	++state_.counters.argument_expansions;
	const uint32_t raw = arguments.bounds + 2u * parameter;
	push_barrier(arguments, argument_bounds_[raw], argument_bounds_[raw + 1]);
	pending_space_ = false;
	return true;
}

bool MacroExpander::has_variable_tokens(const MacroDefinition& macro, const Arguments& arguments) const
{
	const uint32_t range = arguments.expanded + 2u * (macro.parameter_count - 1);
	return expanded_bounds_[range] != expanded_bounds_[range + 1];
}

void MacroExpander::advance_optional_arguments()
{
	// An inactive operand uses none of its parameters. Demand arguments
	// from the parsed replacement list, making each expansion once. An
	// optional operand first needs the expanded variable argument.
	Invocation& invocation = invocations_.back();
	const MacroDefinition& macro = *invocation.macro;
	uint32_t& cursor = invocation.replacement;
	while (cursor < macro.body_size)
	{
		const ReplacementToken& token = macro.body[cursor];
		if (token.role == ReplacementRole::VaOpt)
		{
			if (request_argument(invocation, macro.parameter_count - 1))
				return;
			cursor = has_variable_tokens(macro, invocation.arguments) ? cursor + 2 : token.parameter + 1;
		}
		else
		{
			++cursor;
			if (token.role == ReplacementRole::Parameter && request_argument(invocation, token.parameter))
				return;
		}
	}
	complete_invocation();
}

void MacroExpander::push_barrier(const Arguments& arguments, uint32_t begin, uint32_t end)
{
	Context context;
	context.begin = begin;
	context.cursor = begin;
	context.end = end;
	context.serial = state_.serial;
	context.macro = nullptr;
	context.disabled = arguments.disabled;
	context.inherited = arguments.disabled;
	context.barrier.outer = arguments.outer;
	context.barrier.disabled_top = arguments.disabled_top;
	context.barrier.disabled_root = arguments.disabled_root;
	context.has_shared = false;
	contexts_.push_back(context);
}

void MacroExpander::finish_argument()
{
	// Contexts above the barrier were popped by the read that reached it.
	contexts_.pop_back();
	const Invocation& invocation = invocations_.back();
	if (invocation.macro->has_va_opt)
	{
		expanded_bounds_[invocation.arguments.expanded + 2u * invocation.argument + 1] = static_cast<uint32_t>(
			expanded_tokens_.size());
		advance_optional_arguments();
		return;
	}
	expanded_bounds_.push_back(static_cast<uint32_t>(expanded_tokens_.size()));
	++invocations_.back().argument;
	advance_arguments();
}

void MacroExpander::complete_invocation()
{
	// The expansion is pushed while the invocation's record still holds its
	// arguments; the record goes after.
	const Invocation& invocation = invocations_.back();
	pending_space_ = invocation.pending_space;
	push_expansion(*invocation.macro, invocation.head, invocation.nesting, invocation.list_disabled,
		invocation.inherited, &invocation.arguments);
	const Arguments& arguments = invocation.arguments;
	argument_tokens_.resize(arguments.token_mark);
	argument_links_.resize(arguments.token_mark);
	argument_bounds_.resize(arguments.bounds);
	expanded_tokens_.resize(arguments.expanded_mark);
	expanded_bounds_.resize(arguments.expanded);
	invocations_.pop_back();
}

// ---- substitution -----------------------------------------------------------------

void MacroExpander::push_expansion(MacroDefinition& macro, const PPToken& head, const Nesting& nesting,
	uint32_t disabled, uint32_t inherited, const Arguments* arguments)
{
	++state_.counters.invocations;
	// No context or hide set can be observed when the replacement is empty.
	if (macro.body_size == 0)
	{
		pending_space_ = pending_space_ || (head.flags & kLeadingSpace) != 0;
		return;
	}
	const uint32_t begin = static_cast<uint32_t>(context_tokens_.size());
	// The arguments are hidden from the name token's set if the name is an
	// argument token.
	const uint32_t argument_hide_set = arguments != nullptr && !hosted_recursion_
		? hide_sets_.add((head.flags & kArgument) != 0 ? head.hide_set : 0, macro.name)
		: 0;
	// Serials are not reused, so they order contexts and name each one for
	// the translation unit.
	if (state_.serial == UINT32_MAX)
		throw PreprocessError(head.begin, "too many macro invocations in one translation unit");
	building_head_ = head;
	building_serial_ = ++state_.serial;
	building_chain_ = hosted_recursion_ ? 0 : hide_sets_.add(nesting.chain, macro.name);
	building_can_share_ = invocations_.size() > 1 && arguments != nullptr && !macro.has_va_opt && !macro.has_paste &&
		!controlling_expression_;
	building_has_shared_ = false;
	bool has_placemarkers = false;
	bool first_item_emitted = substitute_list(
		macro, arguments, argument_hide_set, 0, macro.body_size, has_placemarkers);
	// The first item's token, with the ones pasted to it, stands where the
	// macro name stood.
	first_item_emitted = first_item_emitted && context_tokens_[begin].kind != PPTokenKind::Placemarker;
	if (has_placemarkers)
		remove_placemarkers(begin);

	const uint32_t end = static_cast<uint32_t>(context_tokens_.size());
	state_.counters.produced_tokens += end - begin;
	if (building_has_shared_)
		for (uint32_t i = begin; i < end; ++i)
			if (context_tokens_[i].kind == PPTokenKind::SharedExpansion)
			{
				const uint32_t saved = context_tokens_[i].length - 1u;
				state_.counters.produced_tokens += saved;
				state_.counters.shared_replacement_tokens += saved;
			}
	if (begin == end)
	{
		if ((head.flags & kLeadingSpace) != 0)
			pending_space_ = true;
		return;
	}
	// The expansion takes the place of the macro name, and its white space:
	// the first item's token takes the name's instead of its own; after
	// items that produced nothing, the first token keeps its own too.
	PPToken& first = context_tokens_[begin];
	const uint8_t own = first_item_emitted ? 0 : first.flags;
	first.flags = static_cast<uint8_t>(
		(first.flags & ~(kLeadingSpace | kStartOfLine)) | ((head.flags | own) & (kLeadingSpace | kStartOfLine)));
	Context context;
	context.begin = begin;
	context.cursor = begin;
	context.end = end;
	context.serial = building_serial_;
	context.macro = &macro;
	context.disabled = disabled;
	context.inherited = inherited;
	context.expansion.chain = building_chain_;
	context.expansion.root = chain_root(nesting.parent);
	context.expansion.previous_open = macro.name->macro_open_serial;
	context.has_shared = building_has_shared_;
	contexts_.push_back(context);
	macro.name->macro_open_serial = building_serial_;
	telemetry::note_peak(state_.counters.peak_contexts, contexts_.size());
	telemetry::note_peak(state_.counters.peak_context_tokens, context_tokens_.size());
}

template<bool optional>
bool MacroExpander::substitute_list(const MacroDefinition& macro, const Arguments* arguments,
	uint32_t argument_hide_set, uint32_t first, uint32_t last, bool& has_placemarkers)
{
	const size_t begin = context_tokens_.size();
	const PPToken& head = building_head_;
	bool paste = false;
	bool comma_paste = false;
	bool first_item_emitted = false;
	for (uint32_t i = first; i < last; ++i)
	{
		const ReplacementToken& replacement = macro.body[i];
		switch (replacement.role)
		{
		case ReplacementRole::Token:
		{
			PPToken token = replacement.token;
			token.begin = head.begin;
			token.end = head.end;
			token.hide_set = building_chain_;
			token.origin = building_serial_;
			emit(token, paste);
			break;
		}
		case ReplacementRole::Parameter:
		{
			const uint32_t index = arguments->expanded + 2u * replacement.parameter;
			const uint32_t argument_begin = expanded_bounds_[index];
			const uint32_t argument_end = expanded_bounds_[index + 1];
			if (optional && argument_begin == argument_end)
			{
				// The entire optional operand can later be pasted. An
				// empty parameter at its edge still supplies that edge.
				has_placemarkers = true;
				emit(Placemark(head, replacement.token.flags), paste);
			}
			else
				substitute(expanded_tokens_, argument_begin, argument_end, replacement, argument_hide_set, true, paste);
			break;
		}
		case ReplacementRole::RawParameter:
		{
			const uint32_t raw_begin = argument_bounds_[arguments->bounds + 2u * replacement.parameter];
			const uint32_t raw_end = argument_bounds_[arguments->bounds + 2u * replacement.parameter + 1];
			if (comma_paste)
			{
				// Empty variable arguments remove the comma, and are still a
				// placemarker for a ## that follows.
				comma_paste = false;
				if (raw_begin == raw_end)
					context_tokens_.pop_back();
			}
			if (raw_begin == raw_end)
			{
				has_placemarkers = true;
				emit(Placemark(head), paste);
				break;
			}
			substitute(argument_tokens_, raw_begin, raw_end, replacement, 0, false, paste);
			break;
		}
		case ReplacementRole::Stringize:
		{
			const uint32_t raw_begin = argument_bounds_[arguments->bounds + 2u * replacement.parameter];
			const uint32_t raw_end = argument_bounds_[arguments->bounds + 2u * replacement.parameter + 1];
			emit(stringize(argument_tokens_, raw_begin, raw_end, replacement, head), paste);
			break;
		}
		case ReplacementRole::StringizedParameter:
			break;
		case ReplacementRole::Paste:
			paste = true;
			break;
		case ReplacementRole::CommaPaste:
			comma_paste = true;
			break;
		case ReplacementRole::VaOpt:
		case ReplacementRole::StringizeVaOpt:
			first_item_emitted |= i == first;
			i = substitute_optional(macro, *arguments, argument_hide_set, i, paste, has_placemarkers);
			continue;
		}
		if (i == first)
			first_item_emitted = context_tokens_.size() != begin;
	}
	return first_item_emitted;
}

uint32_t MacroExpander::substitute_optional(const MacroDefinition& macro, const Arguments& arguments,
	uint32_t argument_hide_set, uint32_t index, bool& paste, bool& has_placemarkers)
{
	const ReplacementToken& op = macro.body[index];
	const bool stringify = op.role == ReplacementRole::StringizeVaOpt;
	const uint32_t open = index + stringify;
	const uint32_t close = macro.body[open].parameter;
	const uint32_t begin = static_cast<uint32_t>(context_tokens_.size());
	if (has_variable_tokens(macro, arguments))
		substitute_list<true>(macro, &arguments, argument_hide_set, open + 2, close, has_placemarkers);
	if (stringify)
	{
		const PPToken literal = stringize<true>(
			context_tokens_, begin, static_cast<uint32_t>(context_tokens_.size()), op, building_head_);
		context_tokens_.resize(begin);
		emit(literal, paste);
	}
	else if (begin == context_tokens_.size())
	{
		has_placemarkers = true;
		emit(Placemark(building_head_, op.token.flags), paste);
	}
	else
	{
		PPToken& first = context_tokens_[begin];
		first.flags = static_cast<uint8_t>((first.flags & ~kLeadingSpace) | (op.token.flags & kLeadingSpace));
		if (paste)
		{
			if (paste_tokens(context_tokens_[begin - 1], first))
				context_tokens_.erase(context_tokens_.begin() + begin);
			paste = false;
		}
	}
	return close;
}

void MacroExpander::substitute(const std::vector<PPToken>& source, uint32_t begin, uint32_t end,
	const ReplacementToken& parameter, uint32_t hide_set, bool replace_hide_set, bool& paste)
{
	const uint32_t count = end - begin;
	const uint8_t flags = parameter.token.flags;
	if (replace_hide_set && building_can_share_ && !paste && count != 0 && (count >= 32 || !shared_tokens_.empty()) &&
		state_.binding_revision <= UINT32_MAX)
		share_argument(begin, end, flags, hide_set);
	else if (replace_hide_set && !shared_tokens_.empty())
		copy_argument<true>(source, begin, end, flags, hide_set, true, paste);
	else
		copy_argument<false>(source, begin, end, flags, hide_set, replace_hide_set, paste);
}

template<bool has_shared>
void MacroExpander::copy_argument(const std::vector<PPToken>& source, uint32_t begin, uint32_t end, uint8_t flags,
	uint32_t hide_set, bool replace_hide_set, bool& paste)
{
	for (uint32_t i = begin; i < end; ++i)
	{
		PPToken token = source[i];
		if (has_shared && token.kind == PPTokenKind::SharedExpansion)
		{
			token.hide_set = hide_set;
			token.flags &= static_cast<uint8_t>(~kStartOfLine);
			if (i == begin)
				token.flags = static_cast<uint8_t>((token.flags & ~kLeadingSpace) | (flags & kLeadingSpace));
			if (paste)
			{
				materialized_tokens_.clear();
				append_shared(materialized_tokens_, token);
				for (const PPToken& materialized : materialized_tokens_)
					emit(materialized, paste);
			}
			else
				append_shared(context_tokens_, token);
			continue;
		}
		// A macro-replaced argument's hide set is the macro plus, for an
		// argument name token, that token's set; used as written, a token
		// substituted that way loses that macro again (course reference).
		if (replace_hide_set)
		{
			token.hide_set = hide_set;
			token.origin = 0;
		}
		else if ((token.flags & kReplacedArgument) != 0)
			token.hide_set = hide_sets_.without_last(token.hide_set);
		token.flags = static_cast<uint8_t>(
			(token.flags & ~(kStartOfLine | kReplacedArgument | kFollowsInContext | kFromArgument)) | kArgument |
			(replace_hide_set ? kReplacedArgument : 0));
		// The argument takes the place of the parameter, and its white space.
		if (i == begin)
			token.flags = static_cast<uint8_t>((token.flags & ~kLeadingSpace) | (flags & kLeadingSpace));
		emit(token, paste);
	}
}

void MacroExpander::share_argument(uint32_t begin, uint32_t end, uint8_t flags, uint32_t hide_set)
{
	// Unpainted bound names and outdated ranges need ordinary rescanning.
	// Inert prefixes and suffixes can be forwarded around those boundaries.
	bool paste = false;
	for (uint32_t i = begin; i < end;)
	{
		const uint32_t first = i;
		uint64_t length = 0;
		bool existing = false;
		for (; i < end; ++i)
		{
			const PPToken& token = expanded_tokens_[i];
			if (token.kind == PPTokenKind::SharedExpansion)
			{
				if (token.origin != state_.binding_revision)
					break;
				existing = true;
				length += token.length;
			}
			else
			{
				if (token.kind == PPTokenKind::Identifier && (token.flags & kPainted) == 0 &&
					token.identifier->macro != nullptr)
					break;
				++length;
			}
		}
		const uint32_t count = i - first;
		const uint8_t spacing = first == begin ? flags : expanded_tokens_[first].flags;
		if ((existing || count >= 32) && length <= UINT32_MAX && count <= UINT32_MAX - shared_tokens_.size())
			emit_shared(first, i, static_cast<uint32_t>(length), spacing, hide_set);
		else
			copy_argument<true>(expanded_tokens_, first, i, spacing, hide_set, true, paste);
		if (i == end)
			break;
		const uint8_t boundary = i == begin ? flags : expanded_tokens_[i].flags;
		copy_argument<true>(expanded_tokens_, i, i + 1, boundary, hide_set, true, paste);
		++i;
	}
}

void MacroExpander::emit_shared(uint32_t begin, uint32_t end, uint32_t length, uint8_t flags, uint32_t hide_set)
{
	const PPToken& first = expanded_tokens_[begin];
	PPToken shared = first;
	if (end - begin != 1 || first.kind != PPTokenKind::SharedExpansion)
	{
		shared = PPToken();
		shared.kind = PPTokenKind::SharedExpansion;
		shared.punctuator = first.punctuator;
		shared.begin = static_cast<uint32_t>(shared_tokens_.size());
		shared.end = shared.begin + (end - begin);
		shared.length = length;
		shared.origin = static_cast<uint32_t>(state_.binding_revision);
		shared_tokens_.insert(shared_tokens_.end(), expanded_tokens_.begin() + begin, expanded_tokens_.begin() + end);
	}
	shared.flags = flags & kLeadingSpace;
	shared.hide_set = hide_set;
	context_tokens_.push_back(shared);
	building_has_shared_ = true;
}

void MacroExpander::append_shared(std::vector<PPToken>& output, const PPToken& root)
{
	// Apply the outer substitution's hide set to the range once. Spacing
	// overrides affect only a range's first token and compose on descent.
	const uint8_t spacing = kLeadingSpace | kStartOfLine;
	const uint8_t reset = spacing | kReplacedArgument | kFollowsInContext | kFromArgument;
	shared_reads_.clear();
	shared_reads_.push_back(SharedRead{ root.begin, root.end, static_cast<uint8_t>(root.flags & spacing), true });
	while (!shared_reads_.empty())
	{
		SharedRead& frame = shared_reads_.back();
		if (frame.cursor == frame.end)
		{
			shared_reads_.pop_back();
			continue;
		}
		const PPToken& entry = shared_tokens_[frame.cursor++];
		const uint8_t leading = frame.first ? frame.first_spacing : entry.flags & kLeadingSpace;
		frame.first = false;
		if (entry.kind == PPTokenKind::SharedExpansion)
		{
			shared_reads_.push_back(SharedRead{ entry.begin, entry.end, leading, true });
			continue;
		}
		PPToken token = entry;
		token.flags = static_cast<uint8_t>((token.flags & ~reset) | leading | kArgument | kReplacedArgument);
		token.hide_set = root.hide_set;
		token.origin = 0;
		output.push_back(token);
	}
}

void MacroExpander::materialize_context(Context& context)
{
	// This is the top replacement context. Replace its unread suffix
	// once, retaining the context's active macro and source provenance.
	materialized_tokens_.clear();
	for (uint32_t i = context.cursor; i < context.end; ++i)
	{
		const PPToken& token = context_tokens_[i];
		if (token.kind == PPTokenKind::SharedExpansion)
			append_shared(materialized_tokens_, token);
		else
			materialized_tokens_.push_back(token);
	}
	context_tokens_.resize(context.cursor);
	context_tokens_.insert(context_tokens_.end(), materialized_tokens_.begin(), materialized_tokens_.end());
	context.end = static_cast<uint32_t>(context_tokens_.size());
	context.has_shared = false;
}

void MacroExpander::emit(const PPToken& token, bool& paste)
{
	if (!paste)
	{
		context_tokens_.push_back(token);
		return;
	}
	paste = false;
	PPToken right = token;
	if (!paste_tokens(context_tokens_.back(), right))
		context_tokens_.push_back(right);
}

template<bool has_placemarkers>
PPToken MacroExpander::stringize(const std::vector<PPToken>& tokens, uint32_t begin, uint32_t end,
	const ReplacementToken& operator_token, const PPToken& head)
{
	// White space between the argument's tokens becomes one space; `"` and
	// `\` in character and string literals are escaped (16.3.2p2).
	++state_.counters.stringizes;
	scratch_.assign(1, '"');
	for (uint32_t i = begin; i < end; ++i)
	{
		const PPToken& token = tokens[i];
		if (has_placemarkers && token.kind == PPTokenKind::Placemarker)
			continue;
		if ((has_placemarkers ? scratch_.size() > 1 : i != begin) && (token.flags & kLeadingSpace) != 0)
			scratch_.push_back(' ');
		if (!IsTextLiteral(token.kind))
		{
			scratch_.append(token.spelling, token.length);
			continue;
		}
		for (uint32_t k = 0; k < token.length; ++k)
		{
			const char c = token.spelling[k];
			if (c == '"' || c == '\\')
				scratch_.push_back('\\');
			scratch_.push_back(c);
		}
	}
	scratch_.push_back('"');

	PPToken token = PPToken();
	token.kind = PPTokenKind::StringLiteral;
	token.flags = operator_token.token.flags & kLeadingSpace;
	token.begin = head.begin;
	token.end = head.end;
	token.spelling = arena_.copy_string(scratch_.data(), scratch_.size());
	token.length = static_cast<uint32_t>(scratch_.size());
	return token;
}

bool MacroExpander::paste_tokens(PPToken& left, PPToken& right)
{
	// A placemarker operand leaves the other operand as it is (16.3.3p3).
	// Either way the result is a token of the replacement list again: it
	// carries the context's chain, the operand also its own hide set.
	const PPToken& head = building_head_;
	if (left.kind == PPTokenKind::Placemarker || right.kind == PPTokenKind::Placemarker)
	{
		PPToken result = left.kind == PPTokenKind::Placemarker ? right : left;
		result.flags |= left.flags & kLeadingSpace;
		result.flags &= static_cast<uint8_t>(~(kArgument | kReplacedArgument | kFollowsInContext | kFromArgument));
		if (result.kind != PPTokenKind::Placemarker)
			result.hide_set = hide_sets_.merge(building_chain_, result.hide_set);
		result.origin = building_serial_;
		left = result;
		return true;
	}

	// The spellings are joined and lexed again; they shall form exactly one
	// preprocessing token (16.3.3p3; an error under the course rules).
	++state_.counters.pastes;
	scratch_.assign(left.spelling, left.length);
	scratch_.append(right.spelling, right.length);
	const SourceBuffer text = SourceBuffer::ForTokenText(scratch_);
	PPLexerOptions options;
	options.cxx_edition = cxx_edition_;
	options.c_source = identifiers_.language() == SourceLanguage::C;
	options.unicode_literal_prefixes = unicode_literal_prefixes_;
	options.c_edition = c_edition_;
	options.digraphs = digraphs_;
	options.conditional_escapes = conditional_escapes_;
	options.header_names_on_request = true;
	options.token_text = true;
	options.binary_exponents = binary_exponents_;
	options.gnu_escapes = options.c_source || binary_exponents_;
	options.keyword_macros = hosted_recursion_;
	options.dollar_identifiers = hosted_recursion_ && !assembler_;
	options.digit_separators = digit_separators_;
	PPLexer lexer(text, options);
	PPToken result = PPToken();
	const auto invalid = [&](const char* message) {
		if (!assembler_)
			throw PreprocessError(head.begin, message);
		// GNU assembly constructs such as . ## section need neither a
		// C token nor a separator. Both operands remain available for rescan.
		right.flags &= static_cast<uint8_t>(~(kLeadingSpace | kStartOfLine));
		return false;
	};
	try
	{
		const PPToken& token = lexer.next();
		if (token.kind == PPTokenKind::WhitespaceSequence || token.kind == PPTokenKind::NewLine ||
			token.end != scratch_.size())
		{
			return invalid("token pasting does not form one preprocessing token");
		}
		result.kind = token.kind;
		result.punctuator = token.punctuator;
		result.spelling_flags = token.spelling_flags;
		if (token.kind == PPTokenKind::Identifier)
		{
			result.identifier = identifiers_.intern(token.spelling, token.length);
			result.spelling = result.identifier->spelling;
			if (VariadicMacroName(result.identifier))
				throw PreprocessError(head.begin,
					result.identifier == names_.va_args ? "__VA_ARGS__ formed by token pasting"
														: "__VA_OPT__ formed by token pasting");
		}
		else
		{
			result.spelling = arena_.copy_string(token.spelling, token.length);
		}
		result.length = token.length;
	}
	catch (const SourceError&)
	{
		return invalid("token pasting does not form a valid preprocessing token");
	}
	result.flags = (left.flags & (kLeadingSpace | kStartOfLine)) | (left.flags & right.flags & kQuietSystemMacro);
	result.begin = head.begin;
	result.end = head.end;
	result.hide_set = building_chain_;
	result.origin = building_serial_;
	left = result;
	return true;
}

void MacroExpander::remove_placemarkers(uint32_t begin)
{
	uint32_t out = begin;
	while (out < context_tokens_.size() && context_tokens_[out].kind != PPTokenKind::Placemarker)
		++out;
	if (out == context_tokens_.size())
		return;
	uint8_t space = context_tokens_[out].flags & kLeadingSpace;
	for (uint32_t i = out + 1; i < context_tokens_.size(); ++i)
	{
		if (context_tokens_[i].kind == PPTokenKind::Placemarker)
			space |= context_tokens_[i].flags & kLeadingSpace;
		else
		{
			context_tokens_[out] = context_tokens_[i];
			context_tokens_[out++].flags |= space;
			space = 0;
		}
	}
	context_tokens_.resize(out);
}

// ---- builtin macros and controlling-expression operators ---------------------------

void MacroExpander::replace_builtin(const MacroDefinition& macro)
{
	switch (macro.builtin)
	{
	case BuiltinMacro::Line:
	{
		char digits[24];
		const int length = std::snprintf(
			digits, sizeof digits, "%llu", static_cast<unsigned long long>(environment_.presumed_line(current_.begin)));
		set_number(arena_.copy_string(digits, static_cast<std::size_t>(length)), static_cast<uint32_t>(length));
		return;
	}
	case BuiltinMacro::Counter:
	{
		char digits[24];
		const int length = std::snprintf(
			digits, sizeof digits, "%llu", static_cast<unsigned long long>(state_.counter++));
		set_number(arena_.copy_string(digits, static_cast<std::size_t>(length)), static_cast<uint32_t>(length));
		return;
	}
	case BuiltinMacro::File:
	case BuiltinMacro::BaseFile:
	{
		const TokenSpelling literal = macro.builtin == BuiltinMacro::File
			? environment_.presumed_file_literal(current_.begin)
			: environment_.base_file_literal();
		current_.kind = PPTokenKind::StringLiteral;
		current_.identifier = nullptr;
		current_.spelling = literal.text;
		current_.length = literal.length;
		current_.hide_set = 0;
		return;
	}
	case BuiltinMacro::HasCppAttribute:
	case BuiltinMacro::HasAttribute:
		// An operator of controlling expressions; elsewhere an identifier.
		if (controlling_expression_)
			replace_has_attribute(macro.builtin);
		return;
	case BuiltinMacro::HasCAttribute:
		if (!controlling_expression_)
			throw PreprocessError(current_.begin, "__has_c_attribute is only allowed in a preprocessing condition");
		replace_has_attribute(macro.builtin);
		return;
	case BuiltinMacro::HasInclude:
	case BuiltinMacro::HasIncludeNext:
		if (controlling_expression_)
			replace_has_include(macro.builtin == BuiltinMacro::HasIncludeNext);
		return;
	case BuiltinMacro::HasEmbed:
		if (!controlling_expression_)
			throw PreprocessError(current_.begin, "__has_embed is only allowed in a preprocessing condition");
		replace_has_embed();
		return;
	case BuiltinMacro::HasBuiltin:
		if (controlling_expression_)
			replace_has_builtin();
		return;
	case BuiltinMacro::HasFeature:
	case BuiltinMacro::HasExtension:
	case BuiltinMacro::HasDeclspecAttribute:
	case BuiltinMacro::HasConstexprBuiltin:
	case BuiltinMacro::HasRmwBuiltin:
	case BuiltinMacro::BuildingModule:
	case BuiltinMacro::IsIdentifier:
		if (controlling_expression_)
			replace_identifier_probe(macro.builtin);
		return;
	case BuiltinMacro::HasWarning:
		if (controlling_expression_)
			replace_has_warning();
		return;
	case BuiltinMacro::None:
		return;
	}
}

void MacroExpander::replace_defined()
{
	// `defined identifier` or `defined ( identifier )`; the identifier is not
	// macro-replaced (16.1p1, p4). An identifier-like operator such as `and`
	// names no macro (course fixture); other operands are errors. `defined`
	// produced by macro replacement is evaluated the same way.
	const PPToken defined = current_;
	PPToken operand;
	read(operand);
	const bool parenthesized = IsPunctuatorToken(operand, TokenKind::OP_LPAREN);
	if (parenthesized)
		read(operand);
	bool is_defined = false;
	if (operand.kind == PPTokenKind::Identifier)
		is_defined = operand.identifier->macro != nullptr;
	else if (!IsIdentifierLikeOperator(operand))
		throw PreprocessError(defined.begin, "`defined` requires an identifier");
	if (parenthesized)
	{
		PPToken close;
		read(close);
		if (!IsPunctuatorToken(close, TokenKind::OP_RPAREN))
			throw PreprocessError(defined.begin, "missing `)` after `defined`");
	}
	current_ = defined;
	set_number(is_defined ? "1" : "0", 1);
}

void MacroExpander::replace_has_attribute(BuiltinMacro probe)
{
	// C23 forms the attribute token after rescanning its operand. The
	// course C++ and GNU queries read the operand as written.
	const bool c = probe == BuiltinMacro::HasCAttribute;
	const bool gnu = probe == BuiltinMacro::HasAttribute;
	const PPToken operator_token = current_;
	PPToken token;
	read(token);
	if (!IsPunctuatorToken(token, TokenKind::OP_LPAREN))
		throw PreprocessError(operator_token.begin,
			c ? "expected `(` after __has_c_attribute" : "expected `(` after __has_cpp_attribute");
	const auto next_operand = [&] {
		read(token);
		if (c)
			token = expand_probe_token(token);
	};
	next_operand();
	if (token.kind != PPTokenKind::Identifier && !IsIdentifierLikeOperator(token))
		throw PreprocessError(operator_token.begin, "expected an attribute name");
	const auto name_is = [&](const char* spelling) {
		return token.length == std::strlen(spelling) && std::memcmp(token.spelling, spelling, token.length) == 0;
	};
	const bool gnu_namespace = name_is("gnu") || name_is("__gnu__");
	const bool clang_namespace = name_is("clang");
	const char* answer = "0";
	// C23's supported standard attribute is noreturn (6.7.13.7).
	if (c)
	{
		if (name_is("noreturn") || name_is("__noreturn__") || name_is("_Noreturn") || name_is("___Noreturn__"))
			answer = "202311L";
	}
	else if (IsReportedAttribute(token.spelling, token.length, gnu) ||
		(gnu && environment_.has_target_attribute(token.spelling, token.length)))
	{
		const bool no_unique = name_is("no_unique_address") || name_is("__no_unique_address__");
		answer = gnu ? "1" : no_unique ? "201803" : "200809";
	}
	next_operand();
	if (IsPunctuatorToken(token, TokenKind::OP_COLON2))
	{
		next_operand();
		if (token.kind != PPTokenKind::Identifier && !IsIdentifierLikeOperator(token))
			throw PreprocessError(operator_token.begin, "expected an attribute name");
		const bool reported = !gnu &&
			((gnu_namespace && IsReportedAttribute(token.spelling, token.length, true)) ||
				((gnu_namespace || clang_namespace) &&
					environment_.has_target_attribute(token.spelling, token.length)));
		answer = reported ? "1" : "0";
		next_operand();
	}
	if (!IsPunctuatorToken(token, TokenKind::OP_RPAREN))
		throw PreprocessError(operator_token.begin, "expected `)` after the attribute name");
	current_ = operator_token;
	set_number(answer, static_cast<uint32_t>(std::strlen(answer)));
}

void MacroExpander::replace_has_include(bool next)
{
	// `__has_include ( header-name )` (GNU, C++17's 16.1p1): a string
	// literal, or the tokens `<` ... `>` spelled as #include combines them.
	// A directly written header is not replaced; other operands are rescanned
	// with the ordinary macro machinery, as for a computed #include.
	const PPToken operator_token = current_;
	PPToken token;
	read(token);
	if (!IsPunctuatorToken(token, TokenKind::OP_LPAREN))
		throw PreprocessError(operator_token.begin, "expected `(` after __has_include");
	const bool c_source = identifiers_.language() == SourceLanguage::C;
	if (c_source)
		read<true>(token);
	else
		read(token);
	const bool expand = c_source
		? token.kind != PPTokenKind::HeaderName
		: token.kind != PPTokenKind::StringLiteral && !IsPunctuatorToken(token, TokenKind::OP_LT);
	if (expand)
		token = expand_probe_token(token);
	std::string name;
	bool angle = false;
	TextLiteralParts parts;
	if (token.kind == PPTokenKind::HeaderName)
	{
		name.assign(token.spelling + 1, token.length - 2);
		angle = token.spelling[0] == '<';
	}
	else if (token.kind == PPTokenKind::StringLiteral && SplitTextLiteral(token.spelling, token.length, parts) &&
		parts.prefix == EncodingPrefix::None && !parts.raw)
	{
		name.assign(token.spelling + parts.body_begin, parts.body_end - parts.body_begin);
	}
	else if (IsPunctuatorToken(token, TokenKind::OP_LT))
	{
		angle = true;
		bool first = true;
		for (read(token);; read(token), first = false)
		{
			if (expand)
				token = expand_probe_token(token);
			if (IsPunctuatorToken(token, TokenKind::OP_GT))
				break;
			if (token.kind == PPTokenKind::EndOfFile || token.kind == PPTokenKind::NewLine)
				throw PreprocessError(operator_token.begin, "missing `>` in __has_include");
			if ((c_source || !first) && (token.flags & kLeadingSpace) != 0)
				name.push_back(' ');
			name.append(token.spelling, token.length);
		}
		if (c_source && name.find('>') != std::string::npos)
			throw PreprocessError(operator_token.begin, "invalid angle header name in __has_include");
	}
	else
	{
		throw PreprocessError(operator_token.begin, "expected a header name after __has_include");
	}
	if (c_source && name.empty())
		throw PreprocessError(operator_token.begin, "empty header name in __has_include");
	read(token);
	if (c_source || expand)
		token = expand_probe_token(token);
	if (!IsPunctuatorToken(token, TokenKind::OP_RPAREN))
		throw PreprocessError(operator_token.begin, "expected `)` after the header name");
	const bool found = environment_.can_include(name, angle, next);
	current_ = operator_token;
	set_number(found ? "1" : "0", 1);
}

void MacroExpander::replace_has_embed()
{
	const PPToken query = current_;
	PPToken token;
	read(token);
	if (!IsPunctuatorToken(token, TokenKind::OP_LPAREN))
		throw PreprocessError(query.begin, "expected `(` after __has_embed");
	const bool previous = set_embed_operand(true);
	read<true>(token);
	std::vector<PPToken> operand;
	size_t depth = 0;
	bool angle_name = false;
	for (;;)
	{
		token = expand_probe_token(token);
		if (token.kind == PPTokenKind::EndOfFile || token.kind == PPTokenKind::NewLine)
			throw PreprocessError(query.begin, "expected `)` after the __has_embed operand");
		if (angle_name)
		{
			angle_name = !IsPunctuatorToken(token, TokenKind::OP_GT);
		}
		else if (operand.empty() && IsPunctuatorToken(token, TokenKind::OP_LT))
		{
			angle_name = true;
		}
		else if (IsPunctuatorToken(token, TokenKind::OP_RPAREN))
		{
			if (depth == 0)
				break;
			--depth;
		}
		else if (IsPunctuatorToken(token, TokenKind::OP_LPAREN))
		{
			++depth;
		}
		operand.push_back(token);
		read(token);
	}
	set_embed_operand(previous);
	const unsigned answer = environment_.has_embed(operand, query.begin);
	current_ = query;
	set_number(answer == 2 ? "2" : answer == 1 ? "1" : "0", 1);
}

PPToken MacroExpander::expand_probe_token(PPToken token)
{
	const std::size_t depth = invocations_.size();
	for (;;)
	{
		current_ = token;
		if (current_.kind == PPTokenKind::Identifier && start_expansion())
		{
			// Continue rescanning the expansion it opened.
		}
		else if (invocations_.size() == depth)
		{
			return current_;
		}
		else
		{
			expanded_tokens_.push_back(current_);
		}
		while (!read(token))
		{
			if (invocations_.size() == depth)
				return token;
			finish_argument();
		}
	}
}

uint32_t ExpansionEnvironment::builtin_version(const char* spelling, uint32_t length, uint32_t)
{
	return ProvidedBuiltinVersion(spelling, length);
}

void MacroExpander::replace_has_builtin()
{
	// `__has_builtin ( identifier )` (GNU): whether the identifier names a
	// builtin function, trait or type this implementation provides.
	const PPToken operator_token = current_;
	const PPToken operand = read_probe_operand(operator_token);
	if (operand.kind != PPTokenKind::Identifier && !IsIdentifierLikeOperator(operand))
		throw PreprocessError(operator_token.begin, "expected an identifier after __has_builtin");
	const uint32_t provided = operand.kind == PPTokenKind::Identifier
		? environment_.builtin_version(operand.spelling, operand.length, operator_token.begin)
		: 0;
	current_ = operator_token;
	set_number(provided == 201802 ? "201802" : provided ? "1" : "0", provided == 201802 ? 6 : 1);
}

void MacroExpander::replace_identifier_probe(BuiltinMacro probe)
{
	// A probe answers for its whole family: `__has_feature` and
	// `__has_extension` by the features this implementation provides;
	// `__is_identifier ( token )` (Clang) whether the token is an identifier
	// the parser reads as one, not a keyword, a GNU keyword spelling or a
	// trait; the guarantees this implementation does not make -- Microsoft
	// declspec attributes, constant evaluation or read-modify-write forms
	// promised for builtins, Clang modules -- are never present.
	const PPToken operator_token = current_;
	const PPToken operand = read_probe_operand(operator_token);
	bool answer = false;
	if (probe == BuiltinMacro::IsIdentifier)
	{
		GnuTrait trait;
		answer = operand.kind == PPTokenKind::Identifier && operand.identifier->keyword == 0 &&
			!IsGnuKeyword(operand.spelling, operand.length) && !FindGnuTrait(operand.spelling, operand.length, trait);
	}
	else
	{
		if (operand.kind != PPTokenKind::Identifier && !IsIdentifierLikeOperator(operand))
			throw PreprocessError(operator_token.begin, "expected an identifier operand");
		if (probe == BuiltinMacro::HasFeature || probe == BuiltinMacro::HasExtension)
			answer = environment_.has_feature(operand.spelling, operand.length, probe == BuiltinMacro::HasExtension);
	}
	current_ = operator_token;
	set_number(answer ? "1" : "0", 1);
}

void MacroExpander::replace_has_warning()
{
	// `__has_warning ( string-literal )` (Clang): no warning option is
	// recognized.
	const PPToken operator_token = current_;
	const PPToken operand = read_probe_operand(operator_token);
	if (operand.kind != PPTokenKind::StringLiteral)
		throw PreprocessError(operator_token.begin, "expected a string literal after __has_warning");
	current_ = operator_token;
	set_number("0", 1);
}

PPToken MacroExpander::read_probe_operand(const PPToken& probe)
{
	PPToken token;
	read(token);
	if (!IsPunctuatorToken(token, TokenKind::OP_LPAREN))
		throw PreprocessError(probe.begin, "expected `(` after the probe");
	PPToken operand;
	read(operand);
	if (operand.kind == PPTokenKind::EndOfFile || operand.kind == PPTokenKind::NewLine)
		throw PreprocessError(probe.begin, "expected an operand of the probe");
	read(token);
	if (!IsPunctuatorToken(token, TokenKind::OP_RPAREN))
		throw PreprocessError(probe.begin, "expected `)` after the probe's operand");
	return operand;
}

void MacroExpander::set_number(const char* spelling, uint32_t length)
{
	current_.kind = PPTokenKind::PPNumber;
	current_.identifier = nullptr;
	current_.punctuator = kNoPunctuator;
	current_.spelling = spelling;
	current_.length = length;
	current_.hide_set = 0;
	current_.flags &= static_cast<uint8_t>(kLeadingSpace | kStartOfLine);
}
