#include "syntax/parser.h"

namespace syntax {

Expr* Parser::parse_generic_selection()
{
	require_c_extension(location(), CEdition::C11, "_Generic is a C11 extension");
	GenericExpr* expr = make<GenericExpr>(ExprKind::Generic, location());
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

} // namespace syntax
