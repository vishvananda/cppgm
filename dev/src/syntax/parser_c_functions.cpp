#include "syntax/parser.h"

#include "support/pointer_map.h"

#include <vector>

namespace syntax {

ParameterDeclaration* Parser::parse_c_identifier_parameter()
{
	if (!at_identifier() || !(at(TokenKind::OP_COMMA, 1) || at(TokenKind::OP_RPAREN, 1)))
	{
		fail();
		return nullptr;
	}
	ParameterDeclaration* parameter = make<ParameterDeclaration>();
	*parameter = ParameterDeclaration();
	parameter->location = location();
	parameter->declarator = parse_declarator(DeclaratorMode::Parameter);
	const Name* name = declarator_name(parameter->declarator);
	if (name == nullptr)
		return nullptr;
	scopes_.declare(scopes_.current(), name->last().identifier, NameBinding{ NameCategory::Value, false, nullptr });
	return parameter;
}

bool Parser::parse_c_parameter_declarations(Declarator* declarator)
{
	ParameterClause* clause = nullptr;
	for (const Declarator* part = declarator; part != nullptr; part = part->nested)
		for (const auto& suffix : part->suffixes)
			if (suffix.kind == DeclaratorSuffixKind::Function && suffix.parameters->c_identifier_list)
				clause = suffix.parameters;
	if (clause == nullptr || at(TokenKind::OP_SEMICOLON))
		return true;
	const char* missing_declaration = "a C identifier-list definition requires a declaration for each parameter";
	if (at(TokenKind::OP_LBRACE))
	{
		require_gnu_c_extension(clause->parameters[0]->location, missing_declaration);
		return true;
	}
	PointerMap positions;
	for (uint32_t index = 0; index < clause->parameters.size; ++index)
	{
		const Name* name = declarator_name(clause->parameters[index]->declarator);
		const Identifier* identifier = name->last().identifier;
		if (positions.find(identifier) != PointerMap::kMissing)
			throw ParseError(name->location, "duplicate name in a C identifier list");
		positions.set(identifier, index);
	}
	Scope* function = function_scope_;
	Scope* outer = scopes_.enter(function);
	std::vector<bool> declared(clause->parameters.size, false);
	bool parsed = true;
	while (!at(TokenKind::OP_LBRACE))
	{
		Decl* declaration = parse_declaration(DeclContext::CParameter);
		function_scope_ = function;
		if (declaration == nullptr || declaration->kind != DeclKind::Simple)
		{
			parsed = false;
			break;
		}
		const auto& simple = static_cast<const SimpleDecl&>(*declaration);
		for (const Attribute* attr = simple.attributes; attr != nullptr; attr = attr->next)
			if (attr->kind == AttributeKind::Alignas && !attr->gnu)
				throw ParseError(attr->location, "an alignment specifier on a parameter");
		if (simple.declarators.empty())
			parsed = false;
		for (const auto& init : simple.declarators)
		{
			if (init.declarator->c_prototype_star)
				throw ParseError(init.declarator->location, "[*] is allowed only in C function prototype scope");
			const Name* name = declarator_name(init.declarator);
			const uint32_t index = name != nullptr ? positions.find(name->last().identifier) : PointerMap::kMissing;
			if (index == PointerMap::kMissing || declared[index] || init.initializer != nullptr)
			{
				parsed = false;
				break;
			}
			declared[index] = true;
			clause->parameters[index]->specifiers = simple.specifiers;
			clause->parameters[index]->declarator = init.declarator;
		}
		if (!parsed)
			break;
	}
	scopes_.set_current(outer);
	function_scope_ = function;
	if (!parsed)
		fail();
	else
		for (uint32_t index = 0; index < clause->parameters.size; ++index)
			if (!declared[index])
				require_gnu_c_extension(clause->parameters[index]->location, missing_declaration);
	return parsed;
}

} // namespace syntax
