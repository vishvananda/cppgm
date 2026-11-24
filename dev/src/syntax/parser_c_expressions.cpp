#include "syntax/parser.h"

namespace syntax {

Expr* Parser::parse_generic_selection()
{
	require_c_extension(tok(), CEdition::C11, "_Generic is a C11 extension");
	GenericExpr* expr = make<GenericExpr>(ExprKind::Selection, location());
	expr->selection = SelectionKind::Generic;
	next();
	if (!expect(TokenKind::OP_LPAREN))
		return nullptr;
	expr->control = parse_assignment_expression();
	if (expr->control == nullptr || !expect(TokenKind::OP_COMMA))
		return nullptr;
	ListFrame<GenericAssociation> associations(generic_associations_);
	do
	{
		GenericAssociation association = {};
		if (!accept(TokenKind::KW_DEFAULT))
		{
			association.type = parse_type_id(
				DeclaratorMode::Abstract, false, nullptr, TypeIdContext::CGenericAssociation);
			if (association.type == nullptr)
				return nullptr;
		}
		if (!expect(TokenKind::OP_COLON))
			return nullptr;
		association.expression = parse_assignment_expression();
		if (association.expression == nullptr)
			return nullptr;
		associations.push(association);
	} while (accept(TokenKind::OP_COMMA));
	if (!expect(TokenKind::OP_RPAREN))
		return nullptr;
	expr->associations = associations.take(arena_);
	return expr;
}

Expr* Parser::parse_choose_expression()
{
	ChooseExpr* expr = make<ChooseExpr>(ExprKind::Selection, location());
	expr->selection = SelectionKind::Choose;
	next();
	if (!expect(TokenKind::OP_LPAREN))
		return nullptr;
	expr->control = parse_assignment_expression();
	if (expr->control == nullptr || !expect(TokenKind::OP_COMMA))
		return nullptr;
	expr->then_expr = parse_assignment_expression();
	if (expr->then_expr == nullptr || !expect(TokenKind::OP_COMMA))
		return nullptr;
	expr->else_expr = parse_assignment_expression();
	if (expr->else_expr == nullptr || !expect(TokenKind::OP_RPAREN))
		return nullptr;
	return expr;
}

} // namespace syntax
