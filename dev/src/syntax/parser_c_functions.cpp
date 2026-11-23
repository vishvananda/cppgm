#include "syntax/parser.h"

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
	Scope* function = function_scope_;
	Scope* outer = scopes_.enter(function);
	std::vector<bool> declared(clause->parameters.size, false);
	bool parsed = true;
	while (!at(TokenKind::OP_LBRACE))
	{
		Decl* declaration = parse_declaration(DeclContext::Block);
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
			const Name* name = declarator_name(init.declarator);
			uint32_t index = 0;
			for (; name != nullptr && index < clause->parameters.size; ++index)
				if (declarator_name(clause->parameters[index]->declarator)->last().identifier ==
					name->last().identifier)
					break;
			if (name == nullptr || index == clause->parameters.size || declared[index] || init.initializer != nullptr)
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
	return parsed;
}

} // namespace syntax
