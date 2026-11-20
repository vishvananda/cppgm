#pragma once

#include "syntax/ast_names.h"

// Syntax tree type syntax: decl-specifiers, type-ids, declarators,
// initializers and template parameters (see syntax/ast.h).
namespace syntax {

enum class DeclSpecKind : uint8_t
{
	// A keyword: storage class, function specifier, typedef, friend,
	// constexpr, cv-qualifier or simple type keyword.
	Keyword,
	// GCC's __constinit declaration specifier, independent of the type.
	Constinit,
	// C11's _Atomic qualifier; _Atomic(type-name) uses the shared transform.
	AtomicQualifier,
	// A named type: type-name, qualified type name or typename-specifier.
	Name,
	Decltype,
	// C++14's placeholder, whose deduction uses decltype rather than auto.
	DecltypeAuto,
	// A class-specifier with a body.
	Class,
	// An elaborated-type-specifier `class-key name` (also written alone as
	// a class declaration).
	Elaborated,
	// An enum-specifier, with or without a body.
	Enum,
	// GNU vector_size(N) or Clang ext_vector_type(N) in a decl-specifier-seq
	// (hosted compilations): the type the others give is a vector's lane
	// type; `operand` counts bytes (keyword KW_SIZEOF) or lanes (any other).
	Vector,
	// GNU mode(identifier), applied to the complete declared type.
	Mode,
	// A type-constraint followed by auto or decltype(auto). `name` holds
	// the constraint; `keyword` distinguishes the two placeholders.
	ConstrainedAuto
};

struct DeclSpecifier
{
	DeclSpecKind kind;
	// Keyword: the keyword; Elaborated: the class-key.
	TokenKind keyword;
	uint32_t location;
	union
	{
		// Name, Elaborated.
		Name* name;
		const Identifier* mode;
		// Decltype; Keyword: the condition of C++20 explicit(bool), or null.
		Expr* operand;
		ClassSpecifier* class_specifier;
		EnumSpecifier* enum_specifier;
	};
};

// An attribute later stages use (the others are parsed and dropped): an
// alignment-specifier (7.6.2, alignas(expression) or alignas(type-id), and
// GNU aligned(N)), and GNU noinline and packed.
enum class AttributeKind : uint8_t
{
	Alignas,
	NoInline,
	Packed,
	// A GNU asm label `asm ( string-literal )` after a declarator: the
	// literal (`expression`) spells the declared entity's symbol name.
	AsmLabel,
	// GNU weak: the declared function or variable's symbol is weak.
	Weak,
	// GNU section ( string-literal ): the object's ELF section, the literal
	// in `expression` (pa27).
	Section,
	// GNU visibility (string-literal) changes symbol visibility independently of linkage.
	Visibility,
	// GNU abi_tag ( string-literal, ... ): one node per argument, its
	// literal in `expression` (pa28).
	AbiTag,
	// GNU may_alias on a type: accesses through it may read any object.
	MayAlias,
	// GNU pure and const (pa28): the declared function reads memory only,
	// or accesses none (its call effects).
	Pure,
	Const,
	// Clang using_if_exists: a using-declaration whose name is not
	// found introduces nothing.
	UsingIfExists,
	// [[no_unique_address]]: a potentially-overlapping member.
	NoUniqueAddress,
	// GNU vector_size(bytes) and Clang ext_vector_type(lanes) after a
	// declarator: the declared type's lane type is a vector's (in a
	// decl-specifier-seq they become DeclSpecKind::Vector specifiers).
	VectorSize,
	ExtVectorType,
	// Clang's exclude_from_explicit_instantiation.
	ExcludeFromExplicitInstantiation,
	// GNU always_inline.
	AlwaysInline,
	// GNU gnu_inline: an inline function's definition serves inlining
	// only; it is never emitted on its own (ProgramLowering::demand_entry).
	GnuInline,
	// GNU used: the function is emitted and kept even when nothing
	// in the unit refers to it.
	Used,
	// [[noreturn]] and GNU noreturn: calls of the function do not return.
	NoReturn,
	// GNU returns_nonnull: every normally returned pointer is non-null.
	ReturnsNonNull,
	// GNU malloc without arguments: the returned storage does not alias.
	Malloc,
	// GNU cold (pa33): the function is unlikely to run.
	Cold,
	// GNU mode(identifier): its machine-mode keyword, never an expression.
	Mode,
	// Optional shared assembly: a body owns its ABI and frame.
	Naked,
	WasmImportModule,
	WasmImportName,
	WasmExportName,
	// GNU alias("object_name"): another linking identity for a definition.
	ObjectAlias,
	// GNU constructor[(priority)]: run the function before program entry.
	Startup
};

struct TypeId;

struct Attribute
{
	AttributeKind kind;
	// Alignas: GNU aligned(N) rather than an alignment-specifier.
	bool gnu;
	// After a decl-specifier or an array declarator's `]`, where an
	// attribute-specifier-seq appertains to the type (7.1p1, 8.3.4p1).
	bool on_type;
	// Spelled as an attribute-specifier `[[...]]` (7.6.1), not GNU's.
	bool standard;
	// After the class-key of an elaborated-type-specifier: the class's
	// (a declaration of it alone takes them), not the declaration's.
	bool on_class;
	// AbiTag: an argument after the first of its attribute.
	bool continued;
	// An alignment-specifier pack expansion (7.6.2, 14.5.3).
	bool pack;
	Expr* expression;
	union
	{
		TypeId* type;
		const Identifier* mode;
	};
	uint32_t location;
	Attribute* next;
};

// type-specifier-seq abstract-declarator?
struct TypeId
{
	Slice<DeclSpecifier> specifiers;
	Declarator* declarator;
	uint32_t location;
};

struct PtrOperator
{
	// OP_STAR, OP_AMP, OP_LAND, or OP_COLON2 for a pointer to member.
	TokenKind kind;
	// Spelled as an alternative token (`bitand`, `and`).
	bool alternative;
	// Pointer to member: the nested-name-specifier, as a name.
	Name* class_name;
	// The cv-qualifier-seq in source order.
	Slice<TokenKind> cv;
	bool atomic;
};

enum class FunctionQualifierKind : uint8_t
{
	Cv,
	Ref,
	Noexcept,
	Throw,
	Virt,
	TrailingReturn,
	Requires
};

// One suffix of a function declarator after its parameter clause, in
// source order (cv- and ref-qualifiers, exception specifications,
// virt-specifiers, trailing return type).
struct FunctionQualifier
{
	FunctionQualifierKind kind;
	// Cv: KW_CONST or KW_VOLATILE; Ref: OP_AMP or OP_LAND.
	TokenKind token;
	// Noexcept with a parenthesized constant expression.
	bool has_operand;
	uint32_t location;
	// Virt: `final` or `override`.
	const Identifier* virt;
	// Noexcept: its optional operand; Requires: its constraint-expression.
	Expr* noexcept_operand;
	// Throw: the dynamic-exception-specification's type-ids.
	Slice<TypeId*> throw_types;
	TypeId* trailing;
};

struct ParameterClause
{
	bool c_identifier_list = false;
	Slice<ParameterDeclaration*> parameters;
	// Ends with `...` (C varargs), with or without a preceding comma.
	bool ellipsis;
	// The ellipsis directly follows the last parameter (`int...`).
	bool ellipsis_without_comma;
	// A source default-argument obligation, retained by template copies.
	bool has_defaults = false;
	uint32_t location;
	// Set by the analysis of a template definition: a sole unnamed
	// parameter's type depends on a template parameter, so an
	// instantiation's void one is no empty list (8.3.5p4); a copy of the
	// clause keeps the fact.
	mutable bool dependent_sole = false;
};

enum class DeclaratorSuffixKind : uint8_t
{
	Function,
	Array
};

struct DeclaratorSuffix
{
	DeclaratorSuffixKind kind;
	ParameterClause* parameters;
	Slice<FunctionQualifier> qualifiers;
	// Array: the bound, null for `[]`.
	Expr* bound;
	// C's outermost array parameter adjusts to a pointer with these cv
	// qualifiers. `static` states a minimum bound supplied by every call.
	uint8_t array_cv;
	bool array_static;
};

inline const Expr* RequiresClause(const DeclaratorSuffix* suffix)
{
	if (suffix != nullptr && suffix->kind == DeclaratorSuffixKind::Function)
		for (const FunctionQualifier& qualifier : suffix->qualifiers)
			if (qualifier.kind == FunctionQualifierKind::Requires)
				return qualifier.noexcept_operand;
	return nullptr;
}

// A declarator's pack ellipsis, which precedes its name (8p4).
enum class PackPosition : uint8_t
{
	None,
	BeforeName
};

// ptr-operator* (declarator-id | `(` declarator `)`)? suffix*, flattened as
// written. A declarator without a declarator-id is abstract when it came
// from the abstract-declarator grammar (type-ids, some parameters).
struct Declarator
{
	bool abstract;
	PackPosition pack;
	uint32_t location;
	Slice<PtrOperator> pointers;
	Name* name;
	Declarator* nested;
	Slice<DeclaratorSuffix> suffixes;
	// The attributes after the declarator-id, which appertain to the
	// declared entity (8.3p1), then those after its array suffixes
	// (`on_type`, 8.3.4p1), then a GNU asm label and the attributes after
	// it.
	Attribute* attributes;
};

// The written declarator-id, through any parenthesized declarators.
inline const Name* NameOfDeclarator(const Declarator* declarator)
{
	for (; declarator != nullptr; declarator = declarator->nested)
		if (declarator->name != nullptr)
			return declarator->name;
	return nullptr;
}

enum class InitializerKind : uint8_t
{
	// `=` initializer-clause (an expression or braced-init-list).
	Assign,
	// braced-init-list.
	Braced,
	// `(` expression-list? `)`.
	Parenthesized,
	// `= default`, `= delete`.
	Default,
	Delete
};

struct Initializer
{
	Initializer() = default;
	Initializer(InitializerKind kind, Expr* expression, Slice<Expr*> arguments, uint32_t location)
		: kind(kind), location(location), expression(expression), arguments(arguments)
	{}

	InitializerKind kind;
	// The typed backing object of a by-value array decomposition.
	mutable bool array_copy = false;
	uint32_t location;
	// Assign: the clause; Braced: the list.
	Expr* expression;
	Slice<Expr*> arguments;
	// The typed operand for an element constructor.
	mutable const Expr* array_element = nullptr;
};

struct ParameterDeclaration
{
	Slice<DeclSpecifier> specifiers;
	Declarator* declarator;
	Initializer* default_argument;
	uint32_t location;
	// A requires-expression parameter's type can remain dependent for
	// lookup after substitution supplies its concrete type.
	mutable bool requirement_type_dependent = false;
};

enum class TemplateParameterKind : uint8_t
{
	Type,
	NonType,
	Template,
	ConstrainedType
};

struct TemplateParameter
{
	TemplateParameterKind kind;
	// Type and Template: KW_CLASS or KW_TYPENAME.
	TokenKind key;
	bool pack;
	uint32_t location;
	const Identifier* name;
	// Template: the template template-parameter's own parameters.
	TemplateParameterList* parameters;
	// Type and Template: the default template argument.
	TypeId* default_type;
	// NonType: parameter-declaration parts. ConstrainedType: one Name
	// specifier holding its type-constraint, with no extra ordinary fields.
	Slice<DeclSpecifier> specifiers;
	Declarator* declarator;
	Expr* default_value;
};

struct TemplateParameterList
{
	Slice<TemplateParameter*> parameters;
	uint32_t location;
};

inline const Name* TypeParameterConstraint(const TemplateParameter& parameter)
{
	if (parameter.kind == TemplateParameterKind::ConstrainedType)
		return parameter.specifiers[0].name;
	if (parameter.kind == TemplateParameterKind::NonType)
	{
		for (const DeclSpecifier& specifier : parameter.specifiers)
			if (specifier.kind == DeclSpecKind::ConstrainedAuto)
				return specifier.name;
	}
	return nullptr;
}

inline bool IsParameterPack(const TemplateParameter& parameter)
{
	if (parameter.pack)
		return true;
	for (const Declarator* declarator = parameter.kind == TemplateParameterKind::NonType ? parameter.declarator
																						 : nullptr;
		declarator != nullptr; declarator = declarator->nested)
		if (declarator->pack != PackPosition::None)
			return true;
	return false;
}

} // namespace syntax
