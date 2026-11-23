#pragma once

#include <cstdint>
#include <functional>
#include <iosfwd>
#include <map>
#include <string>
#include <unordered_set>
#include <vector>

#include "lex/identifier_table.h"
#include "lex/source_language.h"
#include "preprocess/expr/controlling_expression.h"
#include "preprocess/macro/feature_probes.h"
#include "preprocess/macro/macro_definition.h"
#include "preprocess/macro/macro_expander.h"
#include "preprocess/preprocess_error.h"
#include "preprocess/preprocessor_names.h"
#include "preprocess/source/source_files.h"
#include "preprocess/source/source_stack.h"
#include "preprocess/tokens/pp_token_cursor.h"
#include "support/flat_map.h"
#include "support/memory/arena.h"
#include "support/telemetry.h"
#include "target_model.h"

enum class ExtensionWarnings : uint8_t
{
	Disabled,
	Pedantic,
	Errors
};

enum class SourceOption : uint8_t
{
	Default,
	Enabled,
	Disabled
};

struct SourceLexOptions
{
	SourceOption trigraphs = SourceOption::Default;
	SourceOption splice_errors = SourceOption::Default;
	bool warnings_as_errors = false;
	bool suppress_warnings = false;
	bool warn_spaced_splices = true;
};

// Values of the predefined macros that come from outside the translation
// unit ([cpp.predefined] 16.8, directives.md).
struct PreprocessorOptions
{
	SourceLanguage language = SourceLanguage::Cxx;
	target_model::Target target = target_model::Target::Linux;
	bool c_freestanding = false;
	bool atomics_enabled = true;
	// __CPPGM_AUTHOR__'s string contents.
	std::string author;
	// __DATE__ ("Mmm dd yyyy") and __TIME__ ("hh:mm:ss") contents, taken
	// once per process.
	std::string date;
	std::string time;
	// Directories searched for an included file after the including file's
	// directory and before the working directory (-I, in order).
	std::vector<std::string> include_paths;
	// Directories searched only for quoted includes, before the -I chain.
	std::vector<std::string> quote_include_paths;
	// Hosted mode (cppgm's -E, -c and link modes, PA26/PA30): the system
	// directories searched after include_paths by both #include forms
	// (-isystem, then the host's standard directories unless -nostdinc),
	// the host compiler's predefined macros and builtin declarations (text
	// read after this implementation's own predefined macros), the GNU and
	// Clang probes (macro/macro_definition.h), answered for `modes`, and
	// the directives #include_next and #warning.
	bool hosted = false;
	// GNU assembler-with-cpp: unknown hash directives are assembly comments.
	bool assembler = false;
	// The literal forms read (see ClassifyNumber): the compiler's GCC
	// dialect, or C++11's alone (the standalone PA2-PA4 tools).
	NumberDialect literals = NumberDialect::Cxx11;
	// The target's plain-char representation (-funsigned-char); distinct
	// from the explicitly signed and unsigned character types.
	bool plain_char_unsigned = false;
	bool popcnt = false;   // explicit -mpopcnt target capability
	uint8_t sse_level = 0; // beyond SSE2: SSE3, SSSE3, SSE4.1, SSE4.2
	std::vector<std::string> system_include_paths;
	// Lines that follow the error of an `#include <...>` that finds no file,
	// when the standard directories are not on this system; else empty.
	std::string missing_headers_note;
	std::string host_predefines;
	// The builtin declarations a hosted translation unit is compiled with
	// (`__builtin_va_list` ...), source text read after the predefined
	// macros: part of what is compiled, not of what -E writes.
	std::string builtin_declarations;
	FeatureModes modes;
	// The decoded language edition used by the frontend, or zero for C.
	uint8_t cxx_edition = 11;
	CEdition c_edition = CEdition::C17;
	// The strict ISO dialect (-std=c++11, c++14, c++17): the host's
	// predefined macros for it (__STRICT_ANSI__) instead of the GNU
	// dialect's (gnu++11 ..., and the default).
	bool strict = false;
	ExtensionWarnings extension_warnings = ExtensionWarnings::Disabled;
	bool warn_system_headers = false;
	SourceLexOptions source_lex;
	bool diagnose_cxx_extensions() const { return strict || extension_warnings != ExtensionWarnings::Disabled; }
	bool gnu_c() const { return language == SourceLanguage::C && !strict; }
	// -D and -U as #define and #undef lines, then each -include file as an
	// #include "file" line, read after the predefined macros; a source
	// #define may replace their definitions.
	std::string command_line;
};

// The presumed file name and line of a translation unit's location (16.4,
// 16.8), which later phases report (the source-location builtins).
class SourcePositions
{
public:
	virtual std::string file_of(uint32_t location) const = 0;
	virtual uint64_t line_of(uint32_t location) const = 0;
	// The 1-based byte column in its physical line.
	virtual uint64_t column_of(uint32_t location) const = 0;
	// Whether the location is in a system header.
	virtual bool in_system_header(uint32_t location) const = 0;
	// Called only for recognized syntax that predates its introducing edition.
	virtual bool allow_cxx_extension(
		uint32_t location, uint8_t edition, const char* message, bool suppressible_in_headers = true) const = 0;
	virtual bool allow_c_extension(uint32_t location, CEdition edition, const char* message) const = 0;
	virtual bool allow_gnu_c_extension(uint32_t location, const char* message) const = 0;
	virtual void diagnose_c23_literal_ucn(uint32_t location) const = 0;

protected:
	~SourcePositions() {}
};

// Work counters of one translation unit (spec §9 telemetry).
struct PreprocessorCounters
{
	telemetry::Counter source_tokens;
	telemetry::Counter directives;
	telemetry::Counter skipped_directives;
	telemetry::Counter includes;
	telemetry::Counter guarded_skips;
	telemetry::Counter files;
	telemetry::Counter source_bytes;
	telemetry::Counter identifiers;
	telemetry::Counter arena_bytes;
	MacroExpansionCounters expansion;
};

// Translation phase 4 of one translation unit ([cpp] 16, preproc handout):
// a pull cursor of fully macro-replaced preprocessing tokens with the
// directives executed. White space is carried as token flags; identifiers
// are interned; every token's spelling stays valid for the translation unit.
// All preprocessing state (macros, conditionals, #pragma once files,
// __COUNTER__) belongs to this object, so each primary source file starts
// fresh. Throws PreprocessError, and SourceError for a lexical error (see
// describe()).
class Preprocessor final : public PPTokenCursor,
						   public SourcePositions,
						   private ExpansionEnvironment,
						   private SourceFrameObserver
{
public:
	Preprocessor(const PreprocessorOptions& options, const std::string& path, std::istream* input = nullptr);
	~Preprocessor();

	const PPToken& next() override;

	// After consuming the entire translation unit, write its active
	// fixed macros including definitions read in included headers.
	void dump_macros(std::ostream& out) const;

	// The headers entered during preprocessing, with one dot per level.
	void trace_includes(std::ostream& out) const;

	// Physical header paths in include order, once per path. The
	// user-only form omits system headers and all their descendants.
	std::vector<std::string> dependency_headers(bool include_system) const;

	// `file:line:column: message` for an error from this translation unit:
	// the presumed file name and line at its location (16.4), its 1-based
	// byte column, and then for each file that included the location,
	// innermost first, a line `note: included from file:line` naming the
	// #include directive.
	std::string describe(const PreprocessError& error) const;
	std::string describe(const SourceError& error) const;
	// The same for a later phase's error at a translation-unit location.
	std::string describe(uint32_t location, const char* message) const;

	// SourcePositions.
	std::string file_of(uint32_t location) const override;
	uint64_t line_of(uint32_t location) const override;
	uint64_t column_of(uint32_t location) const override;
	bool in_system_header(uint32_t location) const override;
	bool allow_cxx_extension(
		uint32_t location, uint8_t edition, const char* message, bool suppressible_in_headers) const override;
	bool allow_c_extension(uint32_t location, CEdition edition, const char* message) const override;
	bool allow_gnu_c_extension(uint32_t location, const char* message) const override;
	void diagnose_c23_literal_ucn(uint32_t location) const override;

	// The translation unit's interned identifiers, shared with the parser.
	IdentifierTable& identifiers() { return identifiers_; }

	// The member alignment `#pragma pack` sets for the classes defined from
	// here on (0 for the natural alignment), which a consumer of the tokens
	// reads as it takes each one.
	const uint32_t* pack_state() const { return &pack_; }

	// The location range of the built-in declarations (hosted mode), read
	// before the primary source file's tokens (empty without them).
	uint32_t builtin_begin() const { return builtin_begin_; }
	uint32_t builtin_end() const { return builtin_end_; }

	PreprocessorCounters counters() const;

private:
	// One open if-section ([cpp.cond] 16.1).
	struct Conditional
	{
		uint32_t location;
		// A group of the section was taken; later groups are skipped
		// without evaluating their conditions (16.1p6).
		bool taken;
		bool in_else;
	};

	class MacroQuery final : public MacroDefinitionQuery
	{
	public:
		explicit MacroQuery(IdentifierTable& identifiers) : identifiers_(identifiers) {}
		bool is_defined(const char* spelling, uint32_t length) const override;

	private:
		IdentifierTable& identifiers_;
	};

	class LineTokens final : public DefinitionTokens
	{
	public:
		explicit LineTokens(Preprocessor& preprocessor) : preprocessor_(preprocessor)
		{
			if (preprocessor_.modes_.language == 0)
				preprocessor_.source_.current().lexer->capture_macro_spelling(&preprocessor_.macro_spelling_);
		}
		~LineTokens()
		{
			if (preprocessor_.modes_.language == 0)
				preprocessor_.source_.current().lexer->capture_macro_spelling(nullptr);
		}
		const PPToken& next() override { return preprocessor_.source_.next_in_line(); }
		TokenSpelling written_macro_spelling() override
		{
			return preprocessor_.source_.current().lexer->written_macro_spelling();
		}
		void allow_va_args(bool allow) override { preprocessor_.source_.allow_va_args(allow); }
		void check_va_opt(uint32_t location) const override;

	private:
		Preprocessor& preprocessor_;
	};

	// ExpansionEnvironment.
	uint64_t presumed_line(uint32_t location) override;
	TokenSpelling presumed_file_literal(uint32_t location) override;
	bool can_include(const std::string& name, bool angle, bool next) override;
	bool has_feature(const char* spelling, uint32_t length, bool extension) override;
	uint32_t builtin_version(const char* spelling, uint32_t length, uint32_t location) override;
	bool has_target_attribute(const char* spelling, uint32_t length) override;
	bool continue_macro_arguments() override;
	// SourceFrameObserver.
	void leaving_file(const SourceFrame& frame) override;
	void report_spaced_splices(const SourceFrame& frame) const;

	void define_builtin_macros();
	void run_pragma_operator(const PPToken& pragma);
	void run_pragma(const char* text, uint32_t length, uint32_t location);
	void mark_once();

	// Directives (preprocessor_directives.cpp).
	void run_directive();
	void run_conditional(IdentifierRole role, const PPToken& directive);
	void run_elif_else_endif(IdentifierRole role, const PPToken& directive);
	void track_guard(IdentifierRole role);
	void skip_group();
	bool skip_group_directive(const PPToken& name);
	bool evaluate_condition(const PPToken& directive);
	void expect_end_of_directive(const PPToken& directive);
	Conditional& innermost_conditional(const PPToken& directive);
	void run_define(const PPToken& directive);
	void run_undef(const PPToken& directive);
	void bind_macro(Identifier* name, MacroDefinition* definition);
	Identifier* read_macro_name(const PPToken& directive);
	void run_include(const PPToken& directive, bool next);
	// The name a replaced #include line spells; `angle` set for `< ... >`.
	std::string read_replaced_include_name(const PPToken& directive, const PPToken& first, bool& angle);
	void include_file(const PPToken& directive, const std::string& name, bool angle, bool next);
	// The file an #include (#include_next with `next`) of the name finds,
	// with its path and search directory index (-1 for none), or null.
	SourceFile* find_include(const std::string& name, bool angle, bool next, std::string& path, int32_t& index);
	[[noreturn]] void run_error(const PPToken& directive);
	void run_line(const PPToken& directive);
	void run_pragma_directive();
	void run_language_pragma(uint32_t location);
	void apply_language_pragma(uint32_t location, const PPToken& name, const PPToken& action, const PPToken& warning);
	static bool language_pragma_family(const PPToken& token);
	static uint8_t extension_group(uint8_t edition) { return static_cast<uint8_t>(1u << ((edition - 11) / 3)); }
	bool allow_extension(uint32_t location, uint8_t group, const char* message) const;
	void run_pack_pragma(const PPToken& directive);
	void apply_pack_pragma(const std::vector<PPToken>& operands);
	enum class MacroPragma : uint8_t
	{
		None,
		Push,
		Pop
	};
	static MacroPragma macro_pragma(const PPToken& name);
	void run_macro_pragma(MacroPragma pragma);
	void apply_macro_pragma(MacroPragma pragma, const PPToken& open, const PPToken& name, const PPToken& close);
	void read_replaced_line(std::vector<PPToken>& tokens);

	Arena arena_;
	IdentifierTable identifiers_;
	PreprocessorNames names_;
	SourceFiles files_;
	SourceStack source_;
	MacroExpansionState macro_state_;
	MacroExpander expander_;
	MacroExpander* directive_expander_;
	MacroQuery macro_query_;
	ControllingExpressionEvaluator evaluator_;
	MacroDefinitionParser definition_parser_;
	PPLexer::MacroSpellingScratch macro_spelling_;
	SourceFile* predefined_;
	// The location ranges of the command-line definitions and of the host
	// compiler's predefined macros (hosted mode), which later definitions
	// replace.
	uint32_t command_line_begin_;
	uint32_t command_line_end_;
	uint32_t host_predefines_begin_;
	uint32_t host_predefines_end_;
	uint32_t builtin_begin_;
	uint32_t builtin_end_;
	// Quote-only directories, then the -I and system directories.
	// Includes retain the index in this combined chain for #include_next.
	std::vector<std::string> include_paths_;
	size_t angle_paths_;
	size_t system_paths_;
	std::string missing_headers_note_;
	bool hosted_;
	bool assembler_;
	FeatureModes modes_;
	bool wasm_attributes_;
	std::vector<Conditional> conditionals_;
	// The sections nested in a group being skipped: whether each is in its
	// #else group.
	std::vector<bool> skipped_sections_;
	std::unordered_set<FileIdentity, FileIdentityHash> once_files_;
	std::vector<PPToken> line_tokens_;
	telemetry::Counter directives_;
	telemetry::Counter skipped_directives_;
	telemetry::Counter includes_;
	telemetry::Counter guarded_skips_;
	bool finished_;
	// #pragma pack: the packing in effect and the pushed ones.
	uint32_t pack_;
	std::vector<uint32_t> pack_stack_;
	// Each name has its own stack. An undefined binding is saved as nullptr.
	struct SavedMacro
	{
		MacroDefinition* binding;
		SavedMacro* next;
	};
	FlatMap<uint32_t, SavedMacro*, std::hash<uint32_t>> saved_macros_;
	SavedMacro* free_saved_macros_ = nullptr;
	ExtensionWarnings extension_warnings_;
	bool splice_errors_;
	bool warn_system_headers_;
	uint8_t ignored_extension_groups_ = 0;
	std::vector<uint8_t> saved_extension_groups_;
	// A sparse location history, with inherited settings recorded on entry
	// and a changed setting recorded at resumption of an including file.
	std::map<uint32_t, uint8_t> extension_group_changes_;
};
