#include "preprocess/preprocessor.h"

#include <iostream>

#include <algorithm>
#include <cstring>
#include <iterator>
#include <sstream>

#include "lex/text_literal.h"
#include "lex/gnu_builtins.h"
#include "preprocess/lexer/pp_lexer.h"

namespace {

bool IsPunctuatorToken(const PPToken& token, TokenKind kind)
{
	return token.kind == PPTokenKind::PreprocessingOpOrPunc && IsPunctuator(token.punctuator, kind);
}

void AppendQuoted(std::string& text, const std::string& contents)
{
	text.push_back('"');
	for (char c : contents)
	{
		if (c == '"' || c == '\\')
			text.push_back('\\');
		text.push_back(c);
	}
	text.push_back('"');
}

// The predefined macros with fixed values (directives.md), as #define
// directives the translation unit reads first. __x86_64__ and __linux__
// describe the target, as the course reference defines them.
const char* CxxVersionMacro(uint8_t edition)
{
	switch (edition)
	{
	case 20:
		return "202002L";
	case 17:
		return "201703L";
	case 14:
		return "201402L";
	default:
		return "201103L";
	}
}

const char* CVersionMacro(CEdition edition)
{
	switch (edition)
	{
	case CEdition::C90:
		return nullptr;
	case CEdition::C95:
		return "199409L";
	case CEdition::C99:
		return "199901L";
	case CEdition::C11:
		return "201112L";
	case CEdition::C17:
		return "201710L";
	case CEdition::C23:
		return "202311L";
	}
	return "";
}

std::string PredefinedText(const PreprocessorOptions& options, const FeatureModes& modes)
{
	std::string text = "#define __CPPGM__ 201303L\n";
	if (options.assembler)
		text += "#define __ASSEMBLER__ 1\n";
	if (options.language == SourceLanguage::C)
	{
		// C23 5.2.4.2.1 fixes the boolean width at one value bit.
		text += "#define __STDC__ 1\n#define __BOOL_WIDTH__ 1\n";
		text += "#define __BITINT_MAXWIDTH__ " + std::to_string(target_model::bit_int_max_width) + '\n';
		if (const char* version = CVersionMacro(options.c_edition))
		{
			text += "#define __STDC_VERSION__ ";
			text += version;
			text += '\n';
		}
		if (options.c_edition >= CEdition::C23)
			text +=
				"#define __CHAR8_TYPE__ unsigned char\n"
				"#define __STDC_EMBED_NOT_FOUND__ 0\n#define __STDC_EMBED_FOUND__ 1\n#define __STDC_EMBED_EMPTY__ 2\n";
		if (options.hosted)
			text += options.c_edition < CEdition::C99 ? "#define __GNUC_GNU_INLINE__ 1\n"
													  : "#define __GNUC_STDC_INLINE__ 1\n";
	}
	else
		text += std::string("#define __cplusplus ") + CxxVersionMacro(options.cxx_edition) + "\n";
	// Like Clang, advertise the lack of <threads.h> for Darwin targets.
	if (target_model::is_darwin(options.target))
		text += "#define __STDC_NO_THREADS__ 1\n";
	if (options.strict)
		text += "#define __STRICT_ANSI__ 1\n";
	const bool freestanding = options.language == SourceLanguage::C ? options.c_freestanding
																	: options.target == target_model::Target::Wasm32;
	text += freestanding ? "#define __STDC_HOSTED__ 0\n" : "#define __STDC_HOSTED__ 1\n";
	text += "#define __x86_64__ 1\n#define __linux__ 1\n";
	text += "#define __CPPGM_AUTHOR__ ";
	AppendQuoted(text, options.author);
	text += "\n#define __DATE__ ";
	AppendQuoted(text, options.date);
	text += "\n#define __TIME__ ";
	AppendQuoted(text, options.time);
	text += "\n";
	if (options.language != SourceLanguage::C)
	{
		text += LanguageFeatureMacros(modes);
		if (options.hosted && modes.exceptions)
			text += "#define __EXCEPTIONS 1\n";
		if (options.hosted && modes.rtti)
			text += "#define __GXX_RTTI 1\n";
	}
	if (options.hosted)
		text += "#define __FLT_EVAL_METHOD__ 0\n";

	if (options.plain_char_unsigned)
		text += "#define __CHAR_UNSIGNED__ 1\n";
	if (options.popcnt)
		text += "#define __POPCNT__ 1\n";
	if (options.sse && (options.hosted || options.sse_level != 0))
		text += "#define __SSE__ 1\n";
	if (options.sse2 && (options.hosted || options.sse_level != 0))
		text += "#define __SSE2__ 1\n";
	const char* features[] = { "__SSE3__", "__SSSE3__", "__SSE4_1__", "__SSE4_2__" };
	for (unsigned i = 0; i < options.sse_level; ++i)
		text += std::string("#define ") + features[i] + " 1\n";
	if (options.cxx_edition >= 17)
		text += "#define __STDCPP_DEFAULT_NEW_ALIGNMENT__ " +
			std::to_string(target_model::default_new_alignment(options.target)) +
			"UL\n#define __cpp_aligned_new 201606L\n"
			"#define __cpp_deduction_guides 201703L\n";
	return text;
}

// __FILE__'s spelling: the name as a character string literal, with `"`,
// `\` and control characters escaped.
std::string FileLiteral(const std::string& name)
{
	std::string text(1, '"');
	for (char c : name)
	{
		const unsigned char byte = static_cast<unsigned char>(c);
		if (c == '"' || c == '\\')
		{
			text.push_back('\\');
			text.push_back(c);
		}
		else if (byte < 0x20 || byte == 0x7F)
		{
			const char octal[] = { '\\', static_cast<char>('0' + (byte >> 6)),
				static_cast<char>('0' + ((byte >> 3) & 7)), static_cast<char>('0' + (byte & 7)) };
			text.append(octal, sizeof octal);
		}
		else
		{
			text.push_back(c);
		}
	}
	text.push_back('"');
	return text;
}

} // namespace

bool Preprocessor::MacroQuery::is_defined(const char* spelling, uint32_t length) const
{
	return identifiers_.intern(spelling, length)->macro != nullptr;
}

static SourceTranslation TranslationOptions(const PreprocessorOptions& options)
{
	SourceTranslation translation;
	translation.c_line_endings = options.language == SourceLanguage::C;
	translation.spaced_splices = translation.c_line_endings;
	const SourceOption choice = options.source_lex.trigraphs;
	translation.trigraphs = choice == SourceOption::Default
		? !translation.c_line_endings || (options.strict && options.c_edition < CEdition::C23)
		: choice == SourceOption::Enabled;
	return translation;
}

Preprocessor::Preprocessor(const PreprocessorOptions& options, const std::string& path, std::istream* input)
	: identifiers_(arena_, options.language, options.cxx_edition >= 20, options.c_edition, options.gnu_c()),
	  names_(identifiers_, options.language == SourceLanguage::C), files_(TranslationOptions(options)),
	  source_(files_, identifiers_, arena_, names_, *this),
	  expander_(arena_, identifiers_, names_, *this, macro_state_), directive_expander_(&expander_),
	  macro_query_(identifiers_), evaluator_(macro_query_, options.literals, options.plain_char_unsigned),
	  definition_parser_(arena_, names_.va_args, options.hosted), predefined_(nullptr), command_line_begin_(0),
	  command_line_end_(0), host_predefines_begin_(0), host_predefines_end_(0), builtin_begin_(0), builtin_end_(0),
	  embed_paths_(options.embed_paths), missing_headers_note_(options.missing_headers_note), hosted_(options.hosted),
	  assembler_(options.assembler), modes_(options.modes), wasm_attributes_(target_model::is_wasm(options.target)),
	  directives_(0), skipped_directives_(0), includes_(0), guarded_skips_(0), finished_(false), pack_(0),
	  extension_warnings_(options.language == SourceLanguage::Cxx && options.strict &&
				  options.extension_warnings == ExtensionWarnings::Disabled
			  ? ExtensionWarnings::Pedantic
			  : options.extension_warnings),
	  splice_errors_(options.source_lex.splice_errors == SourceOption::Default
			  ? options.source_lex.warnings_as_errors
			  : options.source_lex.splice_errors == SourceOption::Enabled),
	  warn_system_headers_(options.warn_system_headers), warnings_as_errors_(options.source_lex.warnings_as_errors),
	  suppress_warnings_(options.source_lex.suppress_warnings)
{
	modes_.language = options.cxx_edition;
	modes_.c_edition = options.c_edition;
	modes_.pedantic_errors = options.extension_warnings == ExtensionWarnings::Errors;
	expander_.set_input(&source_);
	source_.set_hosted(hosted_);
	source_.set_keep_comments(options.keep_comments);
	source_.set_assembler(assembler_);
	source_.set_report_splices(options.source_lex.warn_spaced_splices && !options.source_lex.suppress_warnings);
	source_.set_conditional_escapes(options.gnu_c());
	source_.set_cxx_edition(options.cxx_edition);
	expander_.set_conditional_escapes(options.gnu_c());
	expander_.set_cxx_edition(options.cxx_edition);
	const bool unicode_literal_prefixes = options.language != SourceLanguage::C || !options.strict ||
		options.c_edition >= CEdition::C11;
	source_.set_unicode_literal_prefixes(unicode_literal_prefixes);
	expander_.set_unicode_literal_prefixes(unicode_literal_prefixes);
	const CEdition c_edition = options.language == SourceLanguage::C ? options.c_edition : CEdition::C17;
	source_.set_c_edition(c_edition);
	expander_.set_c_edition(c_edition);
	const bool iso_c = options.language == SourceLanguage::C && options.strict;
	source_.set_line_comments(!options.iso_c_before_c99());
	const bool digraphs = !iso_c || options.c_edition >= CEdition::C95;
	source_.set_digraphs(digraphs);
	expander_.set_digraphs(digraphs);
	evaluator_.set_conditional_escapes(options.gnu_c());
	evaluator_.set_short_wchar(options.short_wchar);
	evaluator_.set_cxx_edition(
		options.language == SourceLanguage::C && options.c_edition >= CEdition::C23 ? 20 : options.cxx_edition);
	evaluator_.set_true_keyword(options.language != SourceLanguage::C || options.c_edition >= CEdition::C23);
	if (options.diagnose_pre_c23_binary_literals())
		evaluator_.set_binary_literal_diagnostics(*this);
	const bool separators = HasNumberSyntax(options.literals, number_syntax::Separators);
	const bool exponents = HasNumberSyntax(options.literals, number_syntax::HexFloat) && !options.iso_c_before_c99();
	source_.set_number_syntax(separators, exponents);
	expander_.set_binary_exponents(exponents);
	expander_.set_digit_separators(separators);
	expander_.set_hosted_recursion(hosted_);
	expander_.set_assembler(assembler_);
	SourceFile* primary = input == nullptr
		? files_.open_primary(path)
		: files_.add_text(path, std::string(std::istreambuf_iterator<char>(*input), {}));
	if (primary == nullptr)
		throw PreprocessError(0, "cannot open the source file");
	source_.enter(primary, path, 0);
	define_builtin_macros();
	// The predefined definitions, then the command line's, are read as if
	// included at the start of the primary source file.
	if (!options.command_line.empty())
	{
		source_.enter(files_.add_text("<command-line>", options.command_line), "<command-line>", 0);
		command_line_begin_ = source_.current_inclusion().base;
		command_line_end_ = command_line_begin_ + source_.current_inclusion().file->buffer().size() + 1;
	}
	if (!options.builtin_declarations.empty())
	{
		source_.enter(files_.add_text("<built-in>", options.builtin_declarations), "<built-in>", 0);
		builtin_begin_ = source_.current_inclusion().base;
		builtin_end_ = builtin_begin_ + static_cast<uint32_t>(source_.current_inclusion().file->buffer().size()) + 1;
	}
	const std::string own = PredefinedText(options, modes_);
	predefined_ = files_.add_text("<predefined>", own + options.host_predefines);
	source_.enter(predefined_, "<predefined>", 0);
	if (!options.host_predefines.empty())
	{
		host_predefines_begin_ = source_.current_inclusion().base + static_cast<uint32_t>(own.size());
		host_predefines_end_ = source_.current_inclusion().base + static_cast<uint32_t>(predefined_->buffer().size()) +
			1;
	}
	angle_paths_ = options.quote_include_paths.size();
	system_paths_ = angle_paths_ + options.include_paths.size();
	include_paths_.reserve(system_paths_ + options.system_include_paths.size());
	include_paths_.insert(include_paths_.end(), options.quote_include_paths.begin(), options.quote_include_paths.end());
	include_paths_.insert(include_paths_.end(), options.include_paths.begin(), options.include_paths.end());
	include_paths_.insert(
		include_paths_.end(), options.system_include_paths.begin(), options.system_include_paths.end());
}

Preprocessor::~Preprocessor() = default;

void Preprocessor::dump_macros(std::ostream& out) const
{
	std::vector<const MacroDefinition*> macros;
	identifiers_.current_macros(macros);
	std::sort(macros.begin(), macros.end(), [](const MacroDefinition* a, const MacroDefinition* b) {
		return std::strcmp(a->name->spelling, b->name->spelling) < 0;
	});
	for (const MacroDefinition* macro : macros)
		WriteMacroDefinition(out, *macro);
}

void Preprocessor::trace_includes(std::ostream& out) const
{
	std::vector<size_t> depths(files_.inclusion_count());
	for (uint32_t i = 0; i < depths.size(); ++i)
	{
		const SourceInclusion& inclusion = files_.inclusion(i);
		if (inclusion.parent == kNoInclusion)
			continue;
		const size_t depth = depths[inclusion.parent] + 1;
		depths[i] = depth;
		out << std::string(depth, '.') << ' ' << inclusion.file->path() << '\n';
	}
}

std::vector<std::string> Preprocessor::dependency_headers(bool include_system) const
{
	std::vector<std::string> headers;
	std::unordered_set<std::string> seen;
	for (uint32_t i = 0; i < files_.inclusion_count(); ++i)
	{
		const SourceInclusion& inclusion = files_.inclusion(i);
		// Dependencies use how the file was reached. A later pragma keeps
		// this file in the rule and marks its subsequent includes as system.
		if (inclusion.parent == kNoInclusion || (!include_system && inclusion.is_system(inclusion.base)))
			continue;
		const std::string& path = inclusion.file->path();
		if (seen.insert(path).second)
			headers.push_back(path);
	}
	for (const auto& dependency : embed_dependencies_)
		if ((include_system || !dependency.second) && seen.insert(dependency.first).second)
			headers.push_back(dependency.first);
	return headers;
}

void Preprocessor::define_builtin_macros()
{
	names_.file->macro = MakeBuiltinMacro(arena_, names_.file, BuiltinMacro::File);
	names_.line->macro = MakeBuiltinMacro(arena_, names_.line, BuiltinMacro::Line);
	names_.counter->macro = MakeBuiltinMacro(arena_, names_.counter, BuiltinMacro::Counter);
	names_.has_cpp_attribute->macro = MakeBuiltinMacro(arena_, names_.has_cpp_attribute, BuiltinMacro::HasCppAttribute);
	names_.has_attribute->macro = MakeBuiltinMacro(arena_, names_.has_attribute, BuiltinMacro::HasAttribute);
	if (modes_.language == 0)
	{
		const auto define_c_probe = [this](const char* spelling, uint32_t length, BuiltinMacro probe) {
			Identifier* name = identifiers_.intern(spelling, length);
			name->role = static_cast<uint8_t>(IdentifierRole::ReservedMacroName);
			name->macro = MakeBuiltinMacro(arena_, name, probe);
		};
		define_c_probe("__has_c_attribute", sizeof("__has_c_attribute") - 1, BuiltinMacro::HasCAttribute);
		if (modes_.c_edition >= CEdition::C23)
			define_c_probe("__has_embed", sizeof("__has_embed") - 1, BuiltinMacro::HasEmbed);
	}
	if (!hosted_)
		return;
	constexpr char base_file[] = "__BASE_FILE__";
	Identifier* name = identifiers_.intern(base_file, sizeof(base_file) - 1);
	name->macro = MakeBuiltinMacro(arena_, name, BuiltinMacro::BaseFile);
	static const struct
	{
		const char* spelling;
		BuiltinMacro probe;
	} kHostedProbes[] = { { "__has_include", BuiltinMacro::HasInclude },
		{ "__has_include_next", BuiltinMacro::HasIncludeNext }, { "__has_builtin", BuiltinMacro::HasBuiltin },
		{ "__has_feature", BuiltinMacro::HasFeature }, { "__has_extension", BuiltinMacro::HasExtension },
		{ "__has_warning", BuiltinMacro::HasWarning },
		{ "__has_declspec_attribute", BuiltinMacro::HasDeclspecAttribute },
		{ "__has_constexpr_builtin", BuiltinMacro::HasConstexprBuiltin },
		{ "__has_rmw_builtin", BuiltinMacro::HasRmwBuiltin }, { "__building_module", BuiltinMacro::BuildingModule },
		{ "__is_identifier", BuiltinMacro::IsIdentifier } };
	for (const auto& probe : kHostedProbes)
	{
		Identifier* name = identifiers_.intern(probe.spelling, static_cast<uint32_t>(std::strlen(probe.spelling)));
		name->macro = MakeBuiltinMacro(arena_, name, probe.probe);
	}
}

const PPToken& Preprocessor::next()
{
	for (;;)
	{
		const PPToken& token = expander_.next();
		if (token.kind == PPTokenKind::EndOfFile)
		{
			if (source_.at_directive())
			{
				run_directive();
				continue;
			}
			if (!finished_)
			{
				finished_ = true;
				report_spaced_splices(source_.current());
				if (!conditionals_.empty())
					throw PreprocessError(conditionals_.back().location, "unterminated conditional directive");
			}
			return token;
		}
		// `_Pragma ( string-literal )` is recognized in the text after all
		// macro replacement and removed once executed (directives.md).
		if (token.kind == PPTokenKind::Identifier && token.identifier == names_.pragma_operator)
		{
			run_pragma_operator(token);
			continue;
		}
		return token;
	}
}

void Preprocessor::run_pragma_operator(const PPToken& pragma)
{
	const uint32_t location = pragma.begin;
	if (!IsPunctuatorToken(expander_.next(), TokenKind::OP_LPAREN))
		throw PreprocessError(location, "_Pragma requires a parenthesized string literal");
	const PPToken literal = expander_.next();
	TextLiteralParts parts;
	if (literal.kind != PPTokenKind::StringLiteral || !SplitTextLiteral(literal.spelling, literal.length, parts))
		throw PreprocessError(location, "_Pragma requires a parenthesized string literal");
	if (!IsPunctuatorToken(expander_.next(), TokenKind::OP_RPAREN))
		throw PreprocessError(location, "_Pragma requires a parenthesized string literal");

	// Destringizing drops the prefix and quotes and replaces `\"` and `\\`
	// with the characters they escape ([cpp.pragma.op] 16.9p1).
	std::string text;
	for (uint32_t i = parts.body_begin; i < parts.body_end; ++i)
	{
		const char c = literal.spelling[i];
		if (!parts.raw && c == '\\' && i + 1 < parts.body_end &&
			(literal.spelling[i + 1] == '"' || literal.spelling[i + 1] == '\\'))
		{
			text.push_back(literal.spelling[++i]);
			continue;
		}
		text.push_back(c);
	}
	run_pragma(text.data(), static_cast<uint32_t>(text.size()), location);
}

void Preprocessor::run_pragma(const char* text, uint32_t length, uint32_t location)
{
	// The characters are processed through translation phase 3 and executed
	// as a #pragma directive ([cpp.pragma] 16.6).
	const SourceBuffer buffer = SourceBuffer::ForTokenText(std::string(text, length));
	PPLexerOptions options;
	options.header_names_on_request = true;
	options.token_text = true;
	PPLexer lexer(buffer, options);
	auto operand = [&lexer]() {
		const PPToken* next;
		do
			next = &lexer.next();
		while (next->kind == PPTokenKind::WhitespaceSequence);
		return *next;
	};
	try
	{
		for (;;)
		{
			const PPToken& token = lexer.next();
			if (token.kind == PPTokenKind::WhitespaceSequence)
				continue;
			if (token.kind == PPTokenKind::Identifier && token.length == 4 &&
				std::memcmp(token.spelling, "once", 4) == 0)
				mark_once();
			else if (token.kind == PPTokenKind::Identifier && token.length == 4 &&
				std::memcmp(token.spelling, "pack", 4) == 0)
			{
				std::vector<PPToken> operands;
				for (const PPToken* operand = &lexer.next(); operand->kind != PPTokenKind::EndOfFile;
					operand = &lexer.next())
				{
					if (operand->kind != PPTokenKind::WhitespaceSequence && operand->kind != PPTokenKind::NewLine)
						operands.push_back(*operand);
				}
				apply_pack_pragma(operands);
			}
			else if (c_stdc_pragma(token))
			{
				const CFloatPragma pragma = c_float_pragma(operand());
				if (pragma != CFloatPragma::None)
				{
					const PPToken mode = operand();
					const PPTokenKind end = operand().kind;
					apply_c_float_pragma(
						pragma, mode, end == PPTokenKind::EndOfFile || end == PPTokenKind::NewLine, location);
				}
			}
			else if (language_pragma_family(token))
			{
				const PPToken name = operand();
				if (visibility_pragma_name(name))
				{
					PPToken operands[5];
					unsigned count = 0;
					for (; count < 5; ++count)
					{
						operands[count] = operand();
						if (operands[count].kind == PPTokenKind::EndOfFile ||
							operands[count].kind == PPTokenKind::NewLine)
							break;
					}
					apply_visibility_pragma(operands, count);
					return;
				}
				const PPToken action = operand();
				const PPToken warning = operand();
				apply_language_pragma(location, name, action, warning);
			}
			else
			{
				const MacroPragma pragma = macro_pragma(token);
				if (pragma != MacroPragma::None)
				{
					const PPToken open = operand();
					const PPToken name = operand();
					const PPToken close = operand();
					apply_macro_pragma(pragma, open, name, close);
				}
			}
			return;
		}
	}
	catch (const SourceError&)
	{
		// An unrecognizable pragma is ignored.
	}
}

void Preprocessor::mark_once()
{
	const SourceFile& file = *source_.current().file;
	if (file.has_identity())
		once_files_.insert(file.identity());
}

// ---- ExpansionEnvironment and SourceFrameObserver ---------------------------------------

namespace {

// The line control state in force at a location of the inclusion (none:
// the latest).
const SourceLineState* EarlierState(const SourceInclusion& inclusion, uint32_t location)
{
	const auto after = std::upper_bound(inclusion.earlier.begin(), inclusion.earlier.end(), location,
		[](uint32_t value, const SourceLineState& state) { return value < state.until; });
	return after != inclusion.earlier.end() ? &*after : nullptr;
}

} // namespace

std::string Preprocessor::file_of(uint32_t location) const
{
	const SourceInclusion& inclusion = files_.inclusion_at(location);
	const SourceLineState* state = EarlierState(inclusion, location);
	return state != nullptr ? state->presumed_name : inclusion.presumed_name;
}

bool Preprocessor::in_system_header(uint32_t location) const
{
	return files_.inclusion_at(location).is_system(location);
}

bool Preprocessor::allow_cxx_extension(
	uint32_t location, uint8_t edition, const char* message, bool suppressible_in_headers) const
{
	if (extension_warnings_ == ExtensionWarnings::Disabled)
		return true;
	return suppressible_in_headers && allow_extension(location, extension_group(edition), message);
}

bool Preprocessor::allow_c_extension(uint32_t location, CEdition edition, const char* message) const
{
	return modes_.c_edition >= edition || allow_gnu_c_extension(location, message);
}

bool Preprocessor::allow_gnu_c_extension(uint32_t location, const char* message) const
{
	return extension_warnings_ == ExtensionWarnings::Disabled || allow_extension(location, 0, message);
}

void Preprocessor::check_variadic_omission(const PPToken& invocation, uint32_t definition) const
{
	if (modes_.language != 0 || modes_.c_edition >= CEdition::C23 || extension_warnings_ == ExtensionWarnings::Disabled)
		return;
	if (!warn_system_headers_ && ((invocation.flags & kQuietSystemMacro) != 0 || in_system_header(definition)))
		return;
	const char* message = "omitting a variadic macro argument requires C23";
	if (!allow_c_extension(invocation.begin, CEdition::C23, message))
		throw PreprocessError(invocation.begin, message);
}

void Preprocessor::diagnose_c23_literal_ucn(uint32_t location) const
{
	const char* message = "a universal character name for a basic or control character in a literal requires C23";
	if (!allow_c_extension(location, CEdition::C23, message))
		throw PreprocessError(location, message);
}

void Preprocessor::diagnose_c90_hex_float(uint32_t location) const
{
	const char* message = "hexadecimal floating constants require C99";
	if (!allow_c_extension(location, CEdition::C99, message))
		throw PreprocessError(location, message);
}

void Preprocessor::diagnose_c23_binary_literal(const PPToken& token) const
{
	const char* message = "binary integer constants require C23";
	if ((token.flags & kQuietSystemMacro) == 0 && !allow_c_extension(token.begin, CEdition::C23, message))
		throw PreprocessError(token.begin, message);
}

void Preprocessor::LineTokens::check_va_opt(uint32_t location) const
{
	if (preprocessor_.modes_.language == 0)
	{
		if (!preprocessor_.allow_c_extension(location, CEdition::C23, "__VA_OPT__ is a C23 extension"))
			throw PreprocessError(location, "__VA_OPT__ requires C23");
	}
	else if (preprocessor_.modes_.language < 20 &&
		!preprocessor_.allow_cxx_extension(location, 20, "__VA_OPT__ is a C++20 extension", true))
		throw PreprocessError(location, "__VA_OPT__ requires C++20");
}

bool Preprocessor::allow_extension(uint32_t location, uint8_t group, const char* message) const
{
	const SourceInclusion& inclusion = files_.inclusion_at(location);
	if (!warn_system_headers_ && inclusion.is_system(location))
		return true;
	if (group != 0)
	{
		const auto after = extension_group_changes_.upper_bound(location);
		if (after != extension_group_changes_.begin())
		{
			const auto state = std::prev(after);
			if (state->first >= inclusion.base && (state->second & group) != 0)
				return true;
		}
	}
	if (extension_warnings_ == ExtensionWarnings::Errors)
		return false;
	std::cerr << describe(location, message) << '\n';
	return true;
}

uint64_t Preprocessor::line_of(uint32_t location) const
{
	const SourceInclusion& inclusion = files_.inclusion_at(location);
	const SourceLineState* state = EarlierState(inclusion, location);
	const int64_t line = inclusion.file->physical_line(location - inclusion.base) +
		(state != nullptr ? state->line_delta : inclusion.line_delta);
	return line < 1 ? 1 : static_cast<uint64_t>(line);
}

uint64_t Preprocessor::column_of(uint32_t location) const
{
	const SourceInclusion& inclusion = files_.inclusion_at(location);
	uint32_t offset = location - inclusion.base;
	if (offset > inclusion.file->buffer().size())
		offset = static_cast<uint32_t>(inclusion.file->buffer().size());
	return inclusion.file->physical_column(offset);
}

uint64_t Preprocessor::presumed_line(uint32_t location)
{
	const SourceInclusion& inclusion = files_.inclusion_at(location);
	const int64_t line = inclusion.file->physical_line(location - inclusion.base) + inclusion.line_delta;
	return line < 1 ? 1 : static_cast<uint64_t>(line);
}

TokenSpelling Preprocessor::presumed_file_literal(uint32_t location)
{
	SourceInclusion& inclusion = files_.inclusion_at(location);
	if (inclusion.file_literal == nullptr)
	{
		const std::string literal = FileLiteral(inclusion.presumed_name);
		inclusion.file_literal = arena_.copy_string(literal.data(), literal.size());
		inclusion.file_literal_length = static_cast<uint32_t>(literal.size());
	}
	return TokenSpelling{ inclusion.file_literal, inclusion.file_literal_length };
}

TokenSpelling Preprocessor::base_file_literal()
{
	if (base_file_literal_.text == nullptr)
	{
		// The first inclusion is the primary input, even while a forced
		// include is being read. Its physical name is untouched by #line.
		const std::string literal = FileLiteral(files_.inclusion(0).file->path());
		base_file_literal_ = TokenSpelling{ arena_.copy_string(literal.data(), literal.size()),
			static_cast<uint32_t>(literal.size()) };
	}
	return base_file_literal_;
}

bool Preprocessor::has_feature(const char* spelling, uint32_t length, bool extension)
{
	return IsProvidedFeature(spelling, length, modes_, extension);
}

uint32_t Preprocessor::builtin_version(const char* spelling, uint32_t length, uint32_t location)
{
	// Native GCC-compatible system headers can select their GCC fallback
	// independently of probing this Clang-only builtin. Keep the two
	// decisions consistent. Direct uses still name the supported builtin.
	constexpr char noop[] = "__builtin_coro_noop";
	if (!wasm_attributes_ && length == sizeof(noop) - 1 && std::memcmp(spelling, noop, length) == 0 &&
		in_system_header(location) && macro_query_.is_defined("__GNUC__", sizeof("__GNUC__") - 1) &&
		!macro_query_.is_defined("__clang__", sizeof("__clang__") - 1))
		return 0;
	const bool c_source = modes_.language == 0;
	return ProvidedBuiltinVersion(spelling, length, wasm_attributes_, modes_.language >= 20, c_source,
		c_source && modes_.c_edition >= CEdition::C23);
}

bool Preprocessor::has_target_attribute(const char* spelling, uint32_t length)
{
	return wasm_attributes_ &&
		target_model::wasm_function_attribute(spelling, length) != target_model::WasmFunctionAttribute::None;
}

void Preprocessor::leaving_file(const SourceFrame& frame)
{
	report_spaced_splices(frame);
	// Each if-section is contained in one file ([cpp.cond] 16.1).
	if (conditionals_.size() != frame.conditional_depth)
		throw PreprocessError(conditionals_.back().location, "unterminated conditional directive");
	if (frame.guard_state == GuardState::Closed)
		frame.file->set_guard(frame.guard);
	if (frame.extension_warnings_on_entry != ignored_extension_groups_)
	{
		const uint32_t included_at = files_.inclusion(frame.inclusion).included_at;
		if (included_at != kNoLocation)
			extension_group_changes_[included_at + 1] = ignored_extension_groups_;
	}
}

void Preprocessor::report_spaced_splices(const SourceFrame& frame) const
{
	// The directives in this inclusion have established presumed locations
	// and system-header status by the time its physical offsets are reported.
	const SourceInclusion& inclusion = files_.inclusion(frame.inclusion);
	for (const uint32_t offset : frame.spaced_splices)
	{
		const uint32_t location = frame.base + offset;
		if (!warn_system_headers_ && inclusion.is_system(location))
			continue;
		if (splice_errors_)
			throw PreprocessError(location, "backslash and newline separated by space [-Wbackslash-newline-escape]");
		std::cerr << describe(
						 location, "warning: backslash and newline separated by space [-Wbackslash-newline-escape]")
				  << '\n';
	}
}

// ---- reporting ------------------------------------------------------------------------------

std::string Preprocessor::describe(const PreprocessError& error) const
{
	return describe(error.location(), error.what());
}

std::string Preprocessor::describe(uint32_t location, const char* message) const
{
	if (files_.inclusion_count() == 0)
		return message;
	// The presumed name and line in force there (16.4: what __FILE__ and
	// __LINE__ would give), and the byte column.
	const SourceInclusion* inclusion = &files_.inclusion_at(location);
	uint32_t offset = location - inclusion->base;
	if (offset > inclusion->file->buffer().size())
		offset = inclusion->file->buffer().size();
	location = inclusion->base + offset;
	std::ostringstream text;
	text << file_of(location) << ":" << line_of(location) << ":" << inclusion->file->physical_column(offset) << ": "
		 << message;
	// The #include directives that brought the location in, innermost
	// first.
	while (inclusion->parent != kNoInclusion)
	{
		const uint32_t directive = inclusion->included_at;
		text << "\nnote: included from " << file_of(directive) << ":" << line_of(directive);
		inclusion = &files_.inclusion(inclusion->parent);
	}
	return text.str();
}

std::string Preprocessor::describe(const SourceError& error) const
{
	// A lexical error comes from the file being read, at an offset in its
	// image.
	const SourceFrame& frame = source_.current();
	const uint32_t size = frame.file->buffer().size();
	return describe(frame.base + (error.offset() < size ? error.offset() : size), error.what());
}

PreprocessorCounters Preprocessor::counters() const
{
	PreprocessorCounters counters;
	counters.source_tokens = source_.tokens_read();
	counters.directives = directives_;
	counters.skipped_directives = skipped_directives_;
	counters.includes = includes_;
	counters.guarded_skips = guarded_skips_;
	counters.files = files_.file_count();
	counters.source_bytes = files_.bytes_read();
	counters.identifiers = identifiers_.size();
	counters.arena_bytes = arena_.bytes_reserved();
	counters.expansion = expander_.counters();
	return counters;
}
