#include "syntax/generic_parameters.h"

#include <string>

#include "lex/identifier_table.h"
#include "support/small_list.h"

namespace syntax {
namespace {

template<typename T>
T* Copy(Arena& arena, const T* node)
{
	return new (arena.allocate(sizeof(T), alignof(T))) T(*node);
}

bool Placeholder(const DeclSpecifier& specifier)
{
	return (specifier.kind == DeclSpecKind::Keyword && specifier.keyword == TokenKind::KW_AUTO) ||
		specifier.kind == DeclSpecKind::ConstrainedAuto;
}

Name* ParameterName(Arena& arena, const Identifier* identifier, uint32_t location)
{
	NameComponent component = NameComponent();
	component.kind = NameComponentKind::Identifier;
	component.identifier = identifier;
	Name* name = new (arena.allocate(sizeof(Name), alignof(Name))) Name();
	name->components = Slice<NameComponent>{ arena.copy_array(&component, 1), 1 };
	name->location = location;
	return name;
}

} // namespace

const DeclaratorSuffix* OwnFunctionSuffix(const Declarator* declarator)
{
	const DeclaratorSuffix* own = nullptr;
	for (; declarator != nullptr; declarator = declarator->nested)
	{
		if (!declarator->suffixes.empty())
			own = &declarator->suffixes[0];
		else if (!declarator->pointers.empty())
			own = nullptr;
	}
	return own != nullptr && own->kind == DeclaratorSuffixKind::Function ? own : nullptr;
}

bool HasInventedFunctionParameter(const ParameterDeclaration& parameter)
{
	for (const DeclSpecifier& specifier : parameter.specifiers)
		if (Placeholder(specifier))
			return true;
	return false;
}

bool HasInventedFunctionParameters(const ParameterClause* parameters)
{
	if (parameters != nullptr)
		for (const ParameterDeclaration* parameter : parameters->parameters)
			if (HasInventedFunctionParameter(*parameter))
				return true;
	return false;
}

InventedFunctionParameters InventFunctionParameters(Arena& arena, IdentifierTable& identifiers,
	const ParameterClause* parameters, const TemplateParameterList* head, uint32_t site)
{
	InventedFunctionParameters result;
	if (parameters == nullptr)
		return result;
	SmallList<TemplateParameter*, 4> invented;
	ParameterDeclaration** normalized = nullptr;
	const uint32_t explicit_count = head == nullptr ? 0 : head->parameters.size;
	for (uint32_t i = 0; i < parameters->parameters.size; ++i)
	{
		const ParameterDeclaration& parameter = *parameters->parameters[i];
		for (uint32_t j = 0; j < parameter.specifiers.size; ++j)
		{
			const DeclSpecifier& specifier = parameter.specifiers[j];
			if (!Placeholder(specifier))
				continue;
			if (specifier.kind == DeclSpecKind::ConstrainedAuto && specifier.keyword != TokenKind::KW_AUTO)
			{
				result.invalid_location = specifier.location + 1;
				return result;
			}
			if (normalized == nullptr)
				normalized = arena.copy_array(parameters->parameters.data, parameters->parameters.size);
			TemplateParameter type = TemplateParameter();
			type.kind = specifier.kind == DeclSpecKind::ConstrainedAuto ? TemplateParameterKind::ConstrainedType
																		: TemplateParameterKind::Type;
			type.key = TokenKind::KW_TYPENAME;
			type.location = specifier.location;
			for (const Declarator* d = parameter.declarator; d != nullptr; d = d->nested)
				type.pack = type.pack || d->pack != PackPosition::None;
			const std::string spelling = " auto:" + std::to_string(site) + ":" +
				std::to_string(explicit_count + invented.size());
			type.name = identifiers.intern(spelling.data(), static_cast<uint32_t>(spelling.size()));
			if (type.kind == TemplateParameterKind::ConstrainedType)
			{
				DeclSpecifier constraint = specifier;
				constraint.kind = DeclSpecKind::Name;
				type.specifiers = Slice<DeclSpecifier>{ arena.copy_array(&constraint, 1), 1 };
			}
			invented.push_back(Copy(arena, &type));
			ParameterDeclaration* copy = Copy(arena, &parameter);
			copy->specifiers.data = arena.copy_array(parameter.specifiers.data, parameter.specifiers.size);
			copy->specifiers[j].kind = DeclSpecKind::Name;
			copy->specifiers[j].name = ParameterName(arena, type.name, specifier.location);
			normalized[i] = copy;
			break;
		}
	}
	if (invented.empty())
		return result;
	result.head = new (arena.allocate(sizeof(TemplateParameterList), alignof(TemplateParameterList)))
		TemplateParameterList();
	result.head->location = head == nullptr ? site : head->location;
	result.head->parameters.size = explicit_count + static_cast<uint32_t>(invented.size());
	result.head->parameters.data = arena.allocate_array<TemplateParameter*>(result.head->parameters.size);
	for (uint32_t i = 0; i < explicit_count; ++i)
		result.head->parameters[i] = head->parameters[i];
	for (uint32_t i = 0; i < invented.size(); ++i)
		result.head->parameters[explicit_count + i] = invented[i];
	result.parameters = Copy(arena, parameters);
	result.parameters->parameters.data = normalized;
	return result;
}

Declarator* WithFunctionParameters(
	Arena& arena, const Declarator* declarator, const DeclaratorSuffix* suffix, ParameterClause* parameters)
{
	if (declarator == nullptr)
		return nullptr;
	Declarator* nested = WithFunctionParameters(arena, declarator->nested, suffix, parameters);
	DeclaratorSuffix* suffixes = nullptr;
	for (uint32_t i = 0; i < declarator->suffixes.size; ++i)
		if (&declarator->suffixes[i] == suffix)
		{
			suffixes = arena.copy_array(declarator->suffixes.data, declarator->suffixes.size);
			suffixes[i].parameters = parameters;
			break;
		}
	if (suffixes == nullptr && nested == declarator->nested)
		return const_cast<Declarator*>(declarator);
	Declarator* result = Copy(arena, declarator);
	result->nested = nested;
	if (suffixes != nullptr)
		result->suffixes.data = suffixes;
	return result;
}

} // namespace syntax
