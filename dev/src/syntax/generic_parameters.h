#pragma once

#include "syntax/ast_types.h"

class IdentifierTable;
class Arena;

namespace syntax {

// The owning function suffix, rather than a function in a return type or
// pointer declarator. Shared by declaration analysis and abbreviation.
const DeclaratorSuffix* OwnFunctionSuffix(const Declarator* declarator);
bool HasInventedFunctionParameter(const ParameterDeclaration& parameter);
bool HasInventedFunctionParameters(const ParameterClause* parameters);

struct InventedFunctionParameters
{
	TemplateParameterList* head = nullptr;
	ParameterClause* parameters = nullptr;
	uint32_t invalid_location = 0;
};

// Normalize only a signature: append the invented type parameters to the
// written head and share the remaining syntax, including the whole body.
InventedFunctionParameters InventFunctionParameters(Arena& arena, IdentifierTable& identifiers,
	const ParameterClause* parameters, const TemplateParameterList* head, uint32_t site);
Declarator* WithFunctionParameters(
	Arena& arena, const Declarator* declarator, const DeclaratorSuffix* suffix, ParameterClause* parameters);

} // namespace syntax
