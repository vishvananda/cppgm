#pragma once

#include <cstdint>
#include <iosfwd>
#include <vector>

#include "lex/identifier_table.h"
#include "lex/token_spelling.h"
#include "preprocess/lexer/pp_token.h"
#include "support/memory/arena.h"

// Macros whose replacement the preprocessor computes when they are
// replaced: __FILE__, __LINE__ ([cpp.predefined] 16.8), __COUNTER__ and the
// __has_cpp_attribute and GNU __has_attribute operators (course extensions,
// directives.md, PA12's attribute); in hosted mode also the GNU and Clang
// probes __has_include, __has_include_next, __has_builtin, __has_feature,
// __has_extension, __has_warning, __has_declspec_attribute,
// __has_constexpr_builtin, __has_rmw_builtin, __building_module and
// __is_identifier.
enum class BuiltinMacro : uint8_t
{
	None,
	File,
	BaseFile,
	Line,
	Counter,
	HasCppAttribute,
	HasCAttribute,
	HasAttribute,
	HasInclude,
	HasIncludeNext,
	HasEmbed,
	HasBuiltin,
	HasFeature,
	HasExtension,
	HasWarning,
	HasDeclspecAttribute,
	HasConstexprBuiltin,
	HasRmwBuiltin,
	BuildingModule,
	IsIdentifier
};

// What a replacement-list token becomes when the macro is replaced.
enum class ReplacementRole : uint8_t
{
	// Copied.
	Token,
	// A parameter replaced by its macro-replaced argument ([cpp.subst]
	// 16.3.1p1).
	Parameter,
	// A parameter next to ##, replaced by its argument as written
	// ([cpp.concat] 16.3.3p2).
	RawParameter,
	// The # operator; `parameter` names its operand, which follows with
	// role StringizedParameter and produces nothing itself ([cpp.stringize]
	// 16.3.2).
	Stringize,
	StringizedParameter,
	// The ## operator ([cpp.concat] 16.3.3).
	Paste,
	// A ## between `,` and __VA_ARGS__: if the variable arguments are empty,
	// the comma is removed; otherwise they follow the comma as written,
	// unpasted (GNU extension, pinned by the course fixture for variadic
	// comma pasting; the details follow the course reference).
	CommaPaste,
	// The optional operand's closing parenthesis is at `parameter`.
	VaOpt,
	// A # followed by an optional operand.
	StringizeVaOpt
};

struct ReplacementToken
{
	PPToken token;
	ReplacementRole role;
	uint32_t parameter;
};

// MacroDefinition::parameter_uses bits.
enum : uint8_t
{
	kParameterExpanded = 1,
	kParameterRaw = 2
};

// A macro definition ([cpp.replace] 16.3), allocated in the translation
// unit's arena. The replacement list is analyzed once, when the definition
// is parsed, so replacing the macro only substitutes and pastes.
struct MacroDefinition
{
	const Identifier* name;
	uint32_t location;
	// The sparse written spellings in the owning definition parser.
	uint32_t written_first;
	const ReplacementToken* body;
	uint32_t body_size;
	uint32_t written_count;
	// A variadic macro's last parameter is __VA_ARGS__.
	Identifier* const* parameters;
	const uint8_t* parameter_uses;
	uint16_t parameter_count;
	bool function_like;
	bool variadic;
	bool has_va_opt;
	bool has_paste;
	BuiltinMacro builtin;
};

// Writes the stored source definition for -dM. Dynamic builtin macros have
// no source replacement list and are omitted.
void WriteMacroDefinition(std::ostream& out, const MacroDefinition& macro);

// A builtin macro's definition.
MacroDefinition* MakeBuiltinMacro(Arena& arena, const Identifier* name, BuiltinMacro builtin);

// The tokens of a #define directive after the macro name, ending with the
// directive's new-line.
class DefinitionTokens
{
public:
	virtual const PPToken& next() = 0;
	virtual TokenSpelling written_macro_spelling() = 0;
	// Whether __VA_ARGS__ may be read: only in the replacement list of a
	// variadic macro (16.3p5).
	virtual void allow_va_args(bool allow) = 0;
	virtual void check_va_opt(uint32_t location) const = 0;

protected:
	~DefinitionTokens() {}
};

// Parses the rest of a #define directive (16.3p1-p10 and the course grammar
// in macros.md); in hosted mode also GNU named variadic parameters
// (`identifier ...`, which hosted headers use). Scratch vectors are reused
// between definitions. Throws PreprocessError for an ill-formed definition.
class MacroDefinitionParser
{
public:
	MacroDefinitionParser(Arena& arena, Identifier* va_args, bool hosted)
		: arena_(arena), va_args_(va_args), hosted_(hosted)
	{}

	MacroDefinition* parse(DefinitionTokens& tokens, const PPToken& name);
	bool same_definition(const MacroDefinition& a, const MacroDefinition& b) const;

private:
	struct WrittenSpelling
	{
		const char* text;
		uint32_t length;
		uint32_t slot;
	};

	void parse_parameters(DefinitionTokens& tokens, const PPToken& open);
	void read_replacement_list(DefinitionTokens& tokens, PPToken token, uint8_t flags);
	void record_spelling(DefinitionTokens& tokens, uint32_t slot);
	bool mark_va_opt(const DefinitionTokens& tokens);
	void assign_function_like_roles();
	void assign_paste_roles(bool function_like);
	MacroDefinition* finish(const PPToken& name, bool function_like, bool has_va_opt, uint32_t written_first);

	Arena& arena_;
	Identifier* va_args_;
	bool hosted_;
	std::vector<ReplacementToken> body_;
	std::vector<Identifier*> parameters_;
	std::vector<WrittenSpelling> written_;
	bool variadic_ = false;
};
