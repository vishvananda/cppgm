// Directive execution ([cpp] 16): conditional inclusion, macro definition,
// source file inclusion, line control, pragmas and errors.

#include "preprocess/preprocessor.h"

#include <algorithm>
#include <cstring>

#include "lex/string_concatenation.h"
#include "lex/text_literal.h"

namespace {

// Nesting of included files beyond this is an error; recursive inclusion
// without a guard would otherwise not end.
const std::size_t kMaxIncludeDepth = 200;

// The largest line number #line may specify ([cpp.line] 16.4p3).
const uint64_t kMaxLineNumber = 2147483647;

bool IsPunctuatorToken(const PPToken& token, TokenKind kind)
{
	return token.kind == PPTokenKind::PreprocessingOpOrPunc && IsPunctuator(token.punctuator, kind);
}

// The characters of an ordinary string literal without ud-suffix, decoded
// as phase 5 does; false for any other token.
bool DecodeOrdinaryString(const PPToken& token, std::string& text)
{
	TextLiteralParts parts;
	if (token.kind != PPTokenKind::StringLiteral || !SplitTextLiteral(token.spelling, token.length, parts) ||
		parts.prefix != EncodingPrefix::None || parts.raw)
	{
		return false;
	}
	StringLiteralSequence sequence;
	sequence.clear();
	sequence.add(token.spelling, token.length);
	if (!sequence.concatenate())
		return false;
	// The code units end with the terminating null.
	text.assign(reinterpret_cast<const char*>(sequence.data()), sequence.size() - 1);
	return true;
}

// `name` in `directory` (an -I directory, with or without its slash).
std::string joined_path(const std::string& directory, const std::string& name)
{
	if (directory.empty() || directory[directory.size() - 1] == '/')
		return directory + name;
	return directory + "/" + name;
}

} // namespace

void Preprocessor::run_directive()
{
	++directives_;
	source_.begin_directive();
	const PPToken directive = source_.next_in_line();
	const IdentifierRole role = directive.kind == PPTokenKind::Identifier ? RoleOf(directive.identifier)
																		  : IdentifierRole::None;
	track_guard(role);
	// A `#` alone on its line is the null directive.
	if (directive.kind == PPTokenKind::NewLine)
		return;
	switch (role)
	{
	case IdentifierRole::If:
	case IdentifierRole::Ifdef:
	case IdentifierRole::Ifndef:
		run_conditional(role, directive);
		return;
	case IdentifierRole::Elif:
	case IdentifierRole::Else:
	case IdentifierRole::Endif:
		run_elif_else_endif(role, directive);
		return;
	case IdentifierRole::Include:
		run_include(directive, false);
		return;
	case IdentifierRole::IncludeNext:
		if (!hosted_)
			throw PreprocessError(directive.begin, "invalid preprocessing directive");
		run_include(directive, true);
		return;
	case IdentifierRole::Warning:
		// GCC's #warning: a diagnostic, not an error (hosted mode).
		if (!hosted_)
			throw PreprocessError(directive.begin, "invalid preprocessing directive");
		source_.skip_line();
		return;
	case IdentifierRole::Define:
		run_define(directive);
		return;
	case IdentifierRole::Undef:
		run_undef(directive);
		return;
	case IdentifierRole::Line:
		run_line(directive);
		return;
	case IdentifierRole::Error:
		throw PreprocessError(directive.begin, "#error");
	case IdentifierRole::Pragma:
		run_pragma_directive();
		return;
	default:
		if (assembler_)
		{
			source_.skip_line();
			return;
		}
		// A non-directive is an error in a group that is not skipped
		// (directives.md).
		throw PreprocessError(directive.begin, "invalid preprocessing directive");
	}
}

// ---- conditional inclusion ----------------------------------------------------------------

void Preprocessor::run_conditional(IdentifierRole role, const PPToken& directive)
{
	bool taken;
	if (role == IdentifierRole::If)
	{
		taken = evaluate_condition(directive);
	}
	else
	{
		const PPToken name = source_.next_in_line();
		if (name.kind != PPTokenKind::Identifier)
			throw PreprocessError(directive.begin, "#ifdef and #ifndef require an identifier");
		expect_end_of_directive(directive);
		taken = (name.identifier->macro != nullptr) == (role == IdentifierRole::Ifdef);
		// The first thing in the file: a whole-file guard if its #endif ends
		// the file.
		SourceFrame& frame = source_.current();
		if (role == IdentifierRole::Ifndef && frame.guard_state == GuardState::Start)
		{
			frame.guard_state = GuardState::Open;
			frame.guard = name.identifier;
			frame.guard_depth = conditionals_.size();
		}
	}
	conditionals_.push_back(Conditional{ directive.begin, taken, false });
	if (!taken)
		skip_group();
}

void Preprocessor::run_elif_else_endif(IdentifierRole role, const PPToken& directive)
{
	// This directive ends a group that was taken, so the rest of the section
	// is skipped; an #elif condition is not evaluated (16.1p6).
	Conditional& conditional = innermost_conditional(directive);
	if (role == IdentifierRole::Endif)
	{
		expect_end_of_directive(directive);
		conditionals_.pop_back();
		return;
	}
	if (conditional.in_else)
		throw PreprocessError(directive.begin, "#elif or #else after #else");
	if (role == IdentifierRole::Else)
	{
		conditional.in_else = true;
		expect_end_of_directive(directive);
	}
	else
	{
		source_.skip_line();
	}
	skip_group();
}

Preprocessor::Conditional& Preprocessor::innermost_conditional(const PPToken& directive)
{
	// The section shall have begun in the same file.
	if (conditionals_.size() <= source_.current().conditional_depth)
		throw PreprocessError(directive.begin, "#elif, #else or #endif without #if");
	return conditionals_.back();
}

void Preprocessor::skip_group()
{
	// Only directive names are examined, to find the nested sections and the
	// directive that ends this group; their order is still checked
	// (directives.md).
	skipped_sections_.clear();
	for (;;)
	{
		if (!source_.skip_to_directive())
			throw PreprocessError(conditionals_.back().location, "unterminated conditional directive");
		++skipped_directives_;
		// Any token may follow `#` in a skipped group, __VA_ARGS__ included.
		source_.allow_va_args(true);
		const PPToken name = source_.next_in_line();
		source_.allow_va_args(false);
		if (name.kind == PPTokenKind::NewLine)
			continue;
		if (name.kind != PPTokenKind::Identifier)
		{
			source_.skip_line();
			continue;
		}
		if (skip_group_directive(name))
			return;
	}
}

bool Preprocessor::skip_group_directive(const PPToken& name)
{
	// Returns whether the skipped group ends here and a group is taken.
	std::vector<bool>& nested = skipped_sections_;
	const IdentifierRole role = RoleOf(name.identifier);
	switch (role)
	{
	case IdentifierRole::If:
	case IdentifierRole::Ifdef:
	case IdentifierRole::Ifndef:
		nested.push_back(false);
		break;
	case IdentifierRole::Elif:
	case IdentifierRole::Else:
		if (nested.empty())
			break;
		if (nested.back())
			throw PreprocessError(name.begin, "#elif or #else after #else");
		nested.back() = role == IdentifierRole::Else;
		source_.skip_line();
		return false;
	case IdentifierRole::Endif:
		if (nested.empty())
			break;
		nested.pop_back();
		source_.skip_line();
		return false;
	case IdentifierRole::Include:
	case IdentifierRole::IncludeNext:
		// Keep `<...>` one token, as in a group that is not skipped.
		source_.request_header_name();
		source_.skip_line();
		return false;
	default:
		source_.skip_line();
		return false;
	}
	if (role == IdentifierRole::If || role == IdentifierRole::Ifdef || role == IdentifierRole::Ifndef)
	{
		source_.skip_line();
		return false;
	}

	// A directive of the section being skipped.
	track_guard(role);
	Conditional& conditional = conditionals_.back();
	if (role == IdentifierRole::Endif)
	{
		expect_end_of_directive(name);
		conditionals_.pop_back();
		return true;
	}
	if (conditional.in_else)
		throw PreprocessError(name.begin, "#elif or #else after #else");
	if (role == IdentifierRole::Else)
	{
		conditional.in_else = true;
		expect_end_of_directive(name);
	}
	else if (conditional.taken)
	{
		source_.skip_line();
		return false;
	}
	else if (!evaluate_condition(name))
	{
		return false;
	}
	if (conditional.taken)
		return false;
	conditional.taken = true;
	return true;
}

void Preprocessor::track_guard(IdentifierRole role)
{
	// Called for each directive of the file in groups that are not skipped,
	// and for the #elif, #else and #endif of a section being skipped.
	SourceFrame& frame = source_.current();
	switch (frame.guard_state)
	{
	case GuardState::Start:
		// An #ifndef is examined by run_conditional.
		if (role != IdentifierRole::Ifndef)
			frame.guard_state = GuardState::None;
		return;
	case GuardState::Open:
		if (conditionals_.size() == frame.guard_depth + 1)
		{
			if (role == IdentifierRole::Endif)
				frame.guard_state = GuardState::Closed;
			else if (role == IdentifierRole::Elif || role == IdentifierRole::Else)
				frame.guard_state = GuardState::None;
		}
		return;
	case GuardState::Closed:
		frame.guard_state = GuardState::None;
		return;
	case GuardState::None:
		return;
	}
}

bool Preprocessor::evaluate_condition(const PPToken& directive)
{
	// The rest of the line is macro-replaced, `defined` and
	// __has_cpp_attribute are evaluated, and the PA3 evaluator computes the
	// value ([cpp.cond] 16.1p4).
	class ReplacedLine final : public PPTokenCursor
	{
	public:
		ReplacedLine(MacroExpander& expander, const SourcePositions& positions)
			: expander_(expander), positions_(positions), end_(PPToken())
		{}
		const PPToken& next() override
		{
			const PPToken& token = expander_.next();
			if (token.kind != PPTokenKind::EndOfFile)
			{
				if ((token.spelling_flags & kC23LiteralUcn) != 0)
					positions_.diagnose_c23_literal_ucn(token.begin);
				return token;
			}
			end_.kind = PPTokenKind::NewLine;
			end_.spelling = "";
			return end_;
		}

	private:
		MacroExpander& expander_;
		const SourcePositions& positions_;
		PPToken end_;
	};

	source_.begin_line_input(nullptr);
	directive_expander_->set_controlling_expression(true);
	ReplacedLine line(*directive_expander_, *this);
	const ControllingExpressionResult result = evaluator_.evaluate(line);
	directive_expander_->set_controlling_expression(false);
	source_.end_line_input();
	if (result.status == ControllingExpressionStatus::Empty)
		throw PreprocessError(directive.begin, "missing controlling expression");
	if (result.status == ControllingExpressionStatus::Invalid)
		throw PreprocessError(directive.begin, "invalid controlling expression");
	return result.value.bits != 0;
}

void Preprocessor::expect_end_of_directive(const PPToken& directive)
{
	if (source_.next_in_line().kind != PPTokenKind::NewLine)
		throw PreprocessError(directive.begin, "extra tokens at the end of the directive");
}

// ---- macro definition --------------------------------------------------------------------

Identifier* Preprocessor::read_macro_name(const PPToken& directive)
{
	const PPToken name = source_.next_in_line();
	if (name.kind != PPTokenKind::Identifier)
		throw PreprocessError(directive.begin, "a macro name must be an identifier");
	// Defining or undefining `defined` or a predefined macro name has
	// undefined behavior ([cpp.predefined] 16.8p4), diagnosed here; the
	// predefined definitions themselves are read first.
	const IdentifierRole role = RoleOf(name.identifier);
	if (role == IdentifierRole::Defined ||
		(role == IdentifierRole::ReservedMacroName && source_.current().file != predefined_))
		throw PreprocessError(name.begin, "this name cannot be defined or undefined");
	return name.identifier;
}

void Preprocessor::run_define(const PPToken& directive)
{
	Identifier* identifier = read_macro_name(directive);
	PPToken name = PPToken();
	name.kind = PPTokenKind::Identifier;
	name.identifier = identifier;
	name.spelling = identifier->spelling;
	name.length = identifier->length;
	name.begin = directive.begin;
	if (modes_.language == 0 && extension_warnings_ != ExtensionWarnings::Disabled && !warn_system_headers_ &&
		in_system_header(directive.begin))
		name.flags |= kQuietSystemMacro;
	LineTokens tokens(*this);
	MacroDefinition* macro = definition_parser_.parse(tokens, name);
	// A macro may be redefined only identically (16.3p2); a command-line
	// definition or a host compiler's predefined one yields to a later one,
	// the command line's or the source's (as the host compilers do).
	if (identifier->macro != nullptr)
	{
		const uint32_t defined_at = identifier->macro->location;
		if ((defined_at >= command_line_begin_ && defined_at < command_line_end_) ||
			(defined_at >= host_predefines_begin_ && defined_at < host_predefines_end_))
		{
			bind_macro(identifier, macro);
			return;
		}
		if (!definition_parser_.same_definition(*identifier->macro, *macro))
		{
			// GNU system headers may replace a source's fallback definition;
			// their macro-redefinition diagnostic is suppressed. Keep the
			// ordinary source and non-hosted rules strict (16.3p2).
			if (!hosted_ || !in_system_header(directive.begin))
				throw PreprocessError(directive.begin, "macro redefined differently");
			bind_macro(identifier, macro);
		}
		return;
	}
	bind_macro(identifier, macro);
}

void Preprocessor::run_undef(const PPToken& directive)
{
	Identifier* identifier = read_macro_name(directive);
	expect_end_of_directive(directive);
	bind_macro(identifier, nullptr);
}

void Preprocessor::bind_macro(Identifier* name, MacroDefinition* definition)
{
	if (name->macro == definition)
		return;
	name->macro = definition;
	++macro_state_.binding_revision;
}

// ---- source file inclusion -----------------------------------------------------------------

void Preprocessor::run_include(const PPToken& directive, bool next)
{
	// `#include <h-chars>` or `"q-chars"`, or other tokens that macro
	// replacement turns into a string literal or `< ... >` ([cpp.include]
	// 16.2p2-p4).
	source_.request_header_name();
	const PPToken first = source_.next_in_line();
	std::string name;
	bool angle = false;
	if (first.kind == PPTokenKind::HeaderName)
	{
		name.assign(first.spelling + 1, first.length - 2);
		angle = first.spelling[0] == '<';
		expect_end_of_directive(directive);
	}
	else if (first.kind == PPTokenKind::NewLine)
	{
		throw PreprocessError(directive.begin, "#include requires a file name");
	}
	else
	{
		name = read_replaced_include_name(directive, first, angle);
	}
	include_file(directive, name, angle, next);
}

std::string Preprocessor::read_replaced_include_name(const PPToken& directive, const PPToken& first, bool& angle)
{
	source_.begin_line_input(&first);
	read_replaced_line(line_tokens_);
	source_.end_line_input();

	std::string name;
	if (line_tokens_.size() == 1 && DecodeOrdinaryString(line_tokens_[0], name))
		return name;
	// The spellings between `<` and `>` form the name, with a space for each
	// white-space separation (the implementation-defined combination of
	// 16.2p4).
	if (line_tokens_.size() >= 2 && IsPunctuatorToken(line_tokens_.front(), TokenKind::OP_LT) &&
		IsPunctuatorToken(line_tokens_.back(), TokenKind::OP_GT))
	{
		angle = true;
		for (std::size_t i = 1; i + 1 < line_tokens_.size(); ++i)
		{
			if (i != 1 && (line_tokens_[i].flags & kLeadingSpace) != 0)
				name.push_back(' ');
			name.append(line_tokens_[i].spelling, line_tokens_[i].length);
		}
		return name;
	}
	throw PreprocessError(directive.begin, "#include requires a header name or string literal");
}

SourceFile* Preprocessor::find_include(
	const std::string& name, bool angle, bool next, std::string& path, int32_t& index)
{
	// The course search: the directory of __FILE__ (the working directory
	// for a name without one), then the working directory (directives.md).
	// The -I directories come after the includer's directory for a quoted
	// name and before it for an angle-bracket one, as host compilers search
	// them; hosted mode's system directories follow the -I directories.
	// #include_next (GNU) searches the directories after the one the
	// current file was found in, or all of them for a file not found in
	// one, and nothing else.
	SourceFile* file = nullptr;
	index = -1;
	const size_t start = angle ? angle_paths_ : 0;
	if (next)
	{
		const int32_t found_in = source_.current().search_index;
		for (size_t i = found_in < 0 ? start : static_cast<size_t>(found_in) + 1;
			file == nullptr && i < include_paths_.size(); ++i)
		{
			if ((file = files_.open(path = joined_path(include_paths_[i], name))) != nullptr)
				index = static_cast<int32_t>(i);
		}
		return file;
	}
	const std::string current = source_.current_inclusion().presumed_name;
	const std::size_t slash = current.rfind('/');
	size_t i = start;
	if (angle)
	{
		for (; file == nullptr && i < include_paths_.size(); ++i)
		{
			if ((file = files_.open(path = joined_path(include_paths_[i], name))) != nullptr)
				index = static_cast<int32_t>(i);
		}
	}
	if (file == nullptr)
		file = files_.open(path = slash != std::string::npos ? current.substr(0, slash + 1) + name : name);
	for (; file == nullptr && i < include_paths_.size(); ++i)
	{
		if ((file = files_.open(path = joined_path(include_paths_[i], name))) != nullptr)
			index = static_cast<int32_t>(i);
	}
	if (file == nullptr)
	{
		path = name;
		file = files_.open(path);
	}
	return file;
}

bool Preprocessor::can_include(const std::string& name, bool angle, bool next)
{
	std::string path;
	int32_t index;
	return find_include(name, angle, next, path, index) != nullptr;
}

void Preprocessor::include_file(const PPToken& directive, const std::string& name, bool angle, bool next)
{
	// The path found becomes the new __FILE__.
	std::string path;
	int32_t index;
	SourceFile* file = find_include(name, angle, next, path, index);
	if (file == nullptr && angle && !missing_headers_note_.empty())
		throw PreprocessError(directive.begin, ("include file not found\n" + missing_headers_note_).c_str());
	if (file == nullptr)
		throw PreprocessError(directive.begin, "include file not found");
	if (once_files_.count(file->identity()) != 0)
		return;
	// Its guard is defined, so the whole file would be skipped.
	if (file->guard() != nullptr && file->guard()->macro != nullptr)
	{
		++guarded_skips_;
		return;
	}
	if (source_.depth() > kMaxIncludeDepth)
		throw PreprocessError(directive.begin, "#include nested too deeply");
	++includes_;
	const bool system = source_.current_inclusion().is_system(directive.begin) ||
		(index >= 0 && static_cast<size_t>(index) >= system_paths_);
	source_.enter(file, path, conditionals_.size(), index, directive.begin);
	SourceInclusion& inclusion = source_.current_inclusion();
	if (system)
		inclusion.system_from = inclusion.base;
	if (ignored_extension_groups_ != 0)
	{
		source_.current().extension_warnings_on_entry = ignored_extension_groups_;
		extension_group_changes_[inclusion.base] = ignored_extension_groups_;
	}
}

// ---- line control, pragmas ---------------------------------------------------------------------

void Preprocessor::run_line(const PPToken& directive)
{
	// After macro replacement: digit-sequence, optionally followed by an
	// ordinary string literal ([cpp.line] 16.4p3-p5).
	source_.begin_line_input(nullptr);
	read_replaced_line(line_tokens_);
	source_.end_line_input();
	const uint32_t new_line = source_.directive_location();

	if (line_tokens_.empty() || line_tokens_.size() > 2 || line_tokens_[0].kind != PPTokenKind::PPNumber)
		throw PreprocessError(directive.begin, "#line requires a line number");
	const PPToken& digits = line_tokens_[0];
	uint64_t number = 0;
	for (uint32_t i = 0; i < digits.length; ++i)
	{
		const char c = digits.spelling[i];
		if (c < '0' || c > '9')
			throw PreprocessError(directive.begin, "#line requires a digit sequence");
		number = number * 10 + static_cast<uint64_t>(c - '0');
		if (number > kMaxLineNumber)
			throw PreprocessError(directive.begin, "#line number out of range");
	}
	if (number == 0)
		throw PreprocessError(directive.begin, "#line number out of range");
	std::string name;
	if (line_tokens_.size() == 2 && !DecodeOrdinaryString(line_tokens_[1], name))
		throw PreprocessError(directive.begin, "#line requires an ordinary string literal");

	// The source line after the directive has the given number.
	SourceInclusion& inclusion = source_.current_inclusion();
	const int64_t next_physical = inclusion.file->physical_line(new_line - inclusion.base) + 1;
	inclusion.earlier.push_back(SourceLineState{ new_line, inclusion.line_delta, inclusion.presumed_name });
	inclusion.line_delta = static_cast<int64_t>(number) - next_physical;
	if (line_tokens_.size() == 2)
	{
		inclusion.presumed_name = name;
		inclusion.file_literal = nullptr;
	}
}

namespace {

bool PragmaWord(const PPToken& token, const char* word)
{
	const size_t length = std::strlen(word);
	return token.kind == PPTokenKind::Identifier && token.length == length &&
		std::memcmp(token.spelling, word, length) == 0;
}

} // namespace

bool Preprocessor::language_pragma_family(const PPToken& token)
{
	return PragmaWord(token, "GCC") || PragmaWord(token, "clang");
}

void Preprocessor::run_language_pragma(uint32_t location)
{
	const PPToken name = source_.next_in_line();
	if (name.kind == PPTokenKind::NewLine)
		return;
	const PPToken action = source_.next_in_line();
	if (action.kind == PPTokenKind::NewLine)
	{
		apply_language_pragma(location, name, action, action);
		return;
	}
	const PPToken warning = source_.next_in_line();
	apply_language_pragma(location, name, action, warning);
	if (warning.kind != PPTokenKind::NewLine)
		source_.skip_line();
}

void Preprocessor::apply_language_pragma(
	uint32_t location, const PPToken& name, const PPToken& action, const PPToken& warning)
{
	if (PragmaWord(name, "system_header"))
	{
		SourceInclusion& inclusion = files_.inclusion_at(location);
		if (inclusion.parent != kNoInclusion)
			inclusion.system_from = std::min(inclusion.system_from, location);
		return;
	}
	if (extension_warnings_ == ExtensionWarnings::Disabled || !PragmaWord(name, "diagnostic"))
		return;

	const uint8_t previous = ignored_extension_groups_;
	if (PragmaWord(action, "push"))
		saved_extension_groups_.push_back(previous);
	else if (PragmaWord(action, "pop") && !saved_extension_groups_.empty())
	{
		ignored_extension_groups_ = saved_extension_groups_.back();
		saved_extension_groups_.pop_back();
	}
	else if (PragmaWord(action, "ignored"))
	{
		std::string option;
		if (DecodeOrdinaryString(warning, option))
		{
			if (option == "-Wc++14-extensions")
				ignored_extension_groups_ |= extension_group(14);
			else if (option == "-Wc++17-extensions")
				ignored_extension_groups_ |= extension_group(17);
			else if (option == "-Wc++20-extensions")
				ignored_extension_groups_ |= extension_group(20);
			else if (option == "-Wc++23-extensions")
				ignored_extension_groups_ |= extension_group(23);
		}
	}
	if (ignored_extension_groups_ != previous)
		extension_group_changes_[location] = ignored_extension_groups_;
}

void Preprocessor::run_pragma_directive()
{
	const PPToken& first = source_.next_in_line();
	if (first.kind == PPTokenKind::NewLine)
		return;
	if (first.kind == PPTokenKind::Identifier && RoleOf(first.identifier) == IdentifierRole::Once)
		mark_once();
	else if (first.kind == PPTokenKind::Identifier && first.length == 4 && std::memcmp(first.spelling, "pack", 4) == 0)
	{
		run_pack_pragma(first);
		return;
	}
	else if (language_pragma_family(first))
	{
		run_language_pragma(first.begin);
		return;
	}
	else
	{
		const MacroPragma pragma = macro_pragma(first);
		if (pragma != MacroPragma::None)
		{
			run_macro_pragma(pragma);
			return;
		}
	}
	source_.skip_line();
}

Preprocessor::MacroPragma Preprocessor::macro_pragma(const PPToken& token)
{
	if (token.kind == PPTokenKind::Identifier)
	{
		if (token.length == 10 && std::memcmp(token.spelling, "push_macro", 10) == 0)
			return MacroPragma::Push;
		if (token.length == 9 && std::memcmp(token.spelling, "pop_macro", 9) == 0)
			return MacroPragma::Pop;
	}
	return MacroPragma::None;
}

void Preprocessor::run_macro_pragma(MacroPragma pragma)
{
	PPToken operands[3];
	for (PPToken& operand : operands)
	{
		operand = source_.next_in_line();
		if (operand.kind == PPTokenKind::NewLine)
			return;
	}
	apply_macro_pragma(pragma, operands[0], operands[1], operands[2]);
	source_.skip_line();
}

void Preprocessor::apply_macro_pragma(
	MacroPragma pragma, const PPToken& open, const PPToken& name, const PPToken& close)
{
	if (!IsPunctuatorToken(open, TokenKind::OP_LPAREN) || name.kind != PPTokenKind::StringLiteral ||
		!IsPunctuatorToken(close, TokenKind::OP_RPAREN))
		return;
	TextLiteralParts parts;
	if (!SplitTextLiteral(name.spelling, name.length, parts) || parts.prefix != EncodingPrefix::None || parts.raw ||
		parts.suffix_begin != name.length || parts.body_begin == parts.body_end)
		return;
	Identifier* identifier = identifiers_.intern(name.spelling + parts.body_begin, parts.body_end - parts.body_begin);
	SavedMacro** top = saved_macros_.find(identifier->id);
	if (pragma == MacroPragma::Push)
	{
		SavedMacro* saved = free_saved_macros_;
		if (saved != nullptr)
			free_saved_macros_ = saved->next;
		else
			saved = arena_.allocate_array<SavedMacro>(1);
		*saved = SavedMacro{ identifier->macro, top != nullptr ? *top : nullptr };
		if (top != nullptr)
			*top = saved;
		else
			saved_macros_.insert(identifier->id, saved);
	}
	else if (top != nullptr && *top != nullptr)
	{
		SavedMacro* saved = *top;
		bind_macro(identifier, saved->binding);
		*top = saved->next;
		saved->next = free_saved_macros_;
		free_saved_macros_ = saved;
	}
}

void Preprocessor::run_pack_pragma(const PPToken& directive)
{
	(void)directive;
	std::vector<PPToken> operands;
	for (;;)
	{
		const PPToken& token = source_.next_in_line();
		if (token.kind == PPTokenKind::NewLine || token.kind == PPTokenKind::EndOfFile)
			break;
		operands.push_back(token);
	}
	apply_pack_pragma(operands);
}

void Preprocessor::apply_pack_pragma(const std::vector<PPToken>& operands)
{
	// The GCC/MSVC `#pragma pack(n)`, `pack(push[, n])`, `pack(pop)` and
	// `pack()` (or the same through _Pragma): the maximum member alignment
	// of the classes defined later; `pack(show)` only reports it (an
	// ill-formed one is ignored, [cpp.pragma] 16.6).
	bool push = false, pop = false, has_value = false;
	uint32_t value = 0;
	for (const PPToken& token : operands)
	{
		if (token.kind == PPTokenKind::Identifier && token.length == 4 && std::memcmp(token.spelling, "push", 4) == 0)
			push = true;
		else if (token.kind == PPTokenKind::Identifier && token.length == 3 &&
			std::memcmp(token.spelling, "pop", 3) == 0)
			pop = true;
		else if (token.kind == PPTokenKind::Identifier && token.length == 4 &&
			std::memcmp(token.spelling, "show", 4) == 0)
			return;
		else if (token.kind == PPTokenKind::PPNumber)
		{
			value = 0;
			for (uint32_t i = 0; i < token.length && token.spelling[i] >= '0' && token.spelling[i] <= '9'; ++i)
				value = value * 10 + static_cast<uint32_t>(token.spelling[i] - '0');
			has_value = true;
		}
	}
	if (push)
		pack_stack_.push_back(pack_);
	if (pop)
	{
		if (!pack_stack_.empty())
		{
			pack_ = pack_stack_.back();
			pack_stack_.pop_back();
		}
		if (!has_value)
			return;
	}
	if (has_value && value != 0 && (value & (value - 1)) != 0)
		return;
	if (has_value || (!push && !pop))
		pack_ = value;
}

bool Preprocessor::continue_macro_arguments()
{
	if (!hosted_ || !source_.at_directive())
		return false;
	// The text expander is still collecting raw arguments. A directive's
	// controlling expression or computed include needs independent rescan
	// contexts, with the same definitions and translation-unit state.
	MacroExpander directive(arena_, identifiers_, names_, *this, macro_state_);
	directive.set_input(&source_);
	directive.set_binary_exponents(source_.binary_exponents());
	directive.set_digit_separators(source_.digit_separators());
	directive.set_hosted_recursion(hosted_);
	struct Restore
	{
		MacroExpander*& slot;
		MacroExpander* previous;
		~Restore() { slot = previous; }
	} restore{ directive_expander_, directive_expander_ };
	directive_expander_ = &directive;
	run_directive();
	return true;
}

void Preprocessor::read_replaced_line(std::vector<PPToken>& tokens)
{
	tokens.clear();
	for (;;)
	{
		const PPToken& token = directive_expander_->next();
		if (token.kind == PPTokenKind::EndOfFile)
			return;
		tokens.push_back(token);
	}
}
