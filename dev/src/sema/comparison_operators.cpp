#include "sema/analyzer.h"

namespace sema {

ExprFacts* Analyzer::overloaded_comparison(const syntax::Expr& expr, TokenKind op,
	const syntax::Slice<syntax::Expr*>& operands, Scope* scope, bool class_operand)
{
	candidates_.clear();
	sequences_.clear();
	++graph_.resolutions;
	syntax::Expr* reverse[2] = { operands[1], operands[0] };
	const syntax::Slice<syntax::Expr*> reversed = { reverse, 2 };
	const bool relational = op == TokenKind::OP_LT || op == TokenKind::OP_LE || op == TokenKind::OP_GT ||
		op == TokenKind::OP_GE;
	const TokenKind rewriting = relational ? TokenKind::OP_SPACESHIP : op == TokenKind::OP_NE ? TokenKind::OP_EQ : op;
	const auto collect = [&](TokenKind token, const syntax::Slice<syntax::Expr*>& arguments, uint8_t kind) {
		operator_candidates(operator_key(token), arguments, false, scope);
		graph_.candidates += operator_set_.size();
		const uint32_t first_candidate = static_cast<uint32_t>(candidates_.size());
		const bool same_enum = operator_function_candidates(token, arguments, false, false, class_operand, kind);
		if (class_operand)
			class_builtin_candidates(token, arguments, false);
		else
		{
			const Type* parameters[2] = { nullptr, nullptr };
			if (builtin_operator(token, arguments, false, same_enum, parameters) == 2)
			{
				const uint32_t first = static_cast<uint32_t>(sequences_.size());
				sequences_.resize(first + 2);
				if (implicit_sequence(*arguments[0], parameters[0], sequences_[first]) &&
					implicit_sequence(*arguments[1], parameters[1], sequences_[first + 1]))
					candidates_.push_back(Candidate{ nullptr, first, false, kind, false });
				else
					sequences_.resize(first);
			}
		}
		for (uint32_t i = first_candidate; i < candidates_.size(); ++i)
		{
			Candidate& candidate = candidates_[i];
			candidate.comparison = kind;
			// All ranking slots refer to the written operand order.
			if ((kind & 2) != 0)
				std::swap(sequences_[candidate.first], sequences_[candidate.first + 1]);
		}
	};
	collect(op, operands, 0);
	if (relational || op == TokenKind::OP_NE)
		collect(rewriting, operands, 1);
	if (op == TokenKind::OP_EQ || op == TokenKind::OP_NE || relational || op == TokenKind::OP_SPACESHIP)
		collect(rewriting, reversed, 3);
	if (failed() || candidates_.empty())
		return nullptr;
	size_t best = 0;
	for (size_t i = 1; i < candidates_.size(); ++i)
		if (compare_candidates(candidates_[i], candidates_[best], 2, false) > 0)
			best = i;
	for (size_t i = 0; i < candidates_.size(); ++i)
		if (i != best && compare_candidates(candidates_[best], candidates_[i], 2, false) <= 0)
		{
			substitution_error(expr.location, "ambiguous overloaded comparison");
			return nullptr;
		}
	const Candidate chosen = candidates_[best];
	if (chosen.comparison != 0)
		return rewritten_comparison(expr, op, operands, chosen, scope);
	if (chosen.function != nullptr)
		return selected_operator(expr, op, operands, chosen, scope);
	// A selected builtin applies its class conversion functions once.
	const FunctionEntity* converters[2] = {};
	for (unsigned i = 0; i < 2; ++i)
		if (sequences_[chosen.first + i].rank == ConversionRank::UserDefined)
			converters[i] = sequences_[chosen.first + i].constructor;
	for (unsigned i = 0; i < 2; ++i)
		if (converters[i] != nullptr && !converters[i]->constructor)
			convert_class_operand(*operands[i], converters[i]);
	return nullptr;
}

ExprFacts* Analyzer::rewritten_comparison(const syntax::Expr& expr, TokenKind op,
	const syntax::Slice<syntax::Expr*>& operands, const Candidate& chosen, Scope* scope)
{
	const bool reversed = (chosen.comparison & 2) != 0;
	syntax::Expr* pair[2] = { operands[reversed ? 1 : 0], operands[reversed ? 0 : 1] };
	const syntax::Slice<syntax::Expr*> arguments = { pair, 2 };
	if (reversed)
		std::swap(sequences_[chosen.first], sequences_[chosen.first + 1]);
	const TokenKind selected_op = op == TokenKind::OP_EQ || op == TokenKind::OP_NE ? TokenKind::OP_EQ
																				   : TokenKind::OP_SPACESHIP;
	syntax::BinaryExpr* call = new (arena_.allocate(sizeof(syntax::BinaryExpr), alignof(syntax::BinaryExpr)))
		syntax::BinaryExpr();
	call->kind = syntax::ExprKind::Binary;
	call->location = expr.location;
	call->op = selected_op;
	call->left = pair[0];
	call->right = pair[1];
	if (chosen.function != nullptr)
	{
		if (selected_operator(*call, selected_op, arguments, chosen, scope) == nullptr)
			return nullptr;
	}
	else if (three_way_comparison(*call, scope) == nullptr)
		return nullptr;
	facts_of(*call)->flags |= kImplicit;
	syntax::Expr* replacement = call;
	if ((op == TokenKind::OP_EQ || op == TokenKind::OP_NE) &&
		call->facts->type->unqualified != types_.fundamental(FundamentalType::Bool))
	{
		substitution_error(expr.location, "a rewritten equality comparison requires operator== returning bool");
		return nullptr;
	}
	if (op == TokenKind::OP_NE)
	{
		syntax::UnaryExpr* negate = new (arena_.allocate(sizeof(syntax::UnaryExpr), alignof(syntax::UnaryExpr)))
			syntax::UnaryExpr();
		negate->kind = syntax::ExprKind::Unary;
		negate->location = expr.location;
		negate->op = TokenKind::OP_LNOT;
		negate->operand = call;
		replacement = negate;
	}
	else if (op != TokenKind::OP_EQ)
	{
		syntax::BinaryExpr* compare = new (arena_.allocate(sizeof(syntax::BinaryExpr), alignof(syntax::BinaryExpr)))
			syntax::BinaryExpr();
		compare->kind = syntax::ExprKind::Binary;
		compare->location = expr.location;
		compare->op = op;
		syntax::Expr* zero = implicit_constant(types_.fundamental(FundamentalType::Int), 0, expr.location);
		facts_of(*zero)->flags |= kNullLiteral;
		compare->left = reversed ? zero : call;
		compare->right = reversed ? call : zero;
		replacement = compare;
	}
	ExprFacts* result = typed(*replacement, scope);
	if (result == nullptr)
		return nullptr;
	ExprFacts* facts = new_facts(expr, result->type, result->category);
	facts->flags = kRewrittenComparison;
	facts->replacement = replacement;
	return facts;
}

} // namespace sema
