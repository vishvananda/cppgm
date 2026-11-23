#include "sema/analyzer.h"

#include "sema/constant_interpreter.h"
#include "support/small_list.h"

namespace sema {

namespace {

const syntax::Expr* WithoutParentheses(const syntax::Expr* expr)
{
	while (expr->kind == syntax::ExprKind::Paren)
		expr = static_cast<const syntax::ParenExpr*>(expr)->inner;
	return expr;
}

bool BuiltinIntegerConstantCandidate(const ExprFacts& facts)
{
	if ((facts.flags & (kFolded | kIntrinsic)) != 0)
		return true;
	return facts.entity != nullptr && facts.entity->kind == EntityKind::Function &&
		static_cast<const FunctionEntity*>(facts.entity)->builtin != BuiltinFunction::None;
}

} // namespace

// C11 6.6p6 and DR 489: check the forms of operands even in a branch the
// evaluator skips. The value evaluator handles 6.6p3 on the evaluated path.
bool Analyzer::c_integer_constant_operands(const syntax::Expr& root)
{
	using syntax::Expr;
	using syntax::ExprKind;
	SmallList<const Expr*, 8> pending;
	pending.push_back(&root);
	while (!pending.empty())
	{
		const Expr* expr = WithoutParentheses(pending.back());
		pending.pop_back();
		const ExprFacts* facts = expr->facts;
		if (facts == nullptr || facts->type == nullptr || !IsIntegralOrUnscopedEnum(facts->type))
			return false;
		switch (expr->kind)
		{
		case ExprKind::Literal:
		case ExprKind::TypeTrait:
			break;
		case ExprKind::Sizeof:
			if ((facts->flags & kRuntimeSize) != 0)
				return false;
			break;
		case ExprKind::Id:
			if (facts->entity == nullptr || facts->entity->kind != EntityKind::Enumerator)
				return false;
			break;
		case ExprKind::Generic:
			pending.push_back(static_cast<const syntax::GenericExpr*>(expr)->selected);
			break;
		case ExprKind::Cast:
		{
			const Expr* operand = WithoutParentheses(static_cast<const syntax::CastExpr*>(expr)->operand);
			if (operand->kind != ExprKind::Literal || !IsFloating(operand->facts->type))
				pending.push_back(operand);
			break;
		}
		case ExprKind::Unary:
		{
			const auto* unary = static_cast<const syntax::UnaryExpr*>(expr);
			if (unary->op != TokenKind::OP_PLUS && unary->op != TokenKind::OP_MINUS &&
				unary->op != TokenKind::OP_LNOT && unary->op != TokenKind::OP_COMPL)
				return false;
			pending.push_back(unary->operand);
			break;
		}
		case ExprKind::Binary:
		{
			const auto* binary = static_cast<const syntax::BinaryExpr*>(expr);
			pending.push_back(binary->left);
			pending.push_back(binary->right);
			break;
		}
		case ExprKind::Conditional:
		{
			const auto* conditional = static_cast<const syntax::ConditionalExpr*>(expr);
			pending.push_back(conditional->condition);
			pending.push_back(conditional->then_expr);
			pending.push_back(conditional->else_expr);
			break;
		}
		case ExprKind::BuiltinTrait:
			if (static_cast<const syntax::BuiltinTraitExpr*>(expr)->trait == GnuTrait::BitCast)
				break;
			// Fall through.
		case ExprKind::Call:
			// Preserve the compiler's constant-valued builtin extensions.
			if (!BuiltinIntegerConstantCandidate(*facts))
				return false;
			break;
		default:
			return false;
		}
	}
	return true;
}

bool Analyzer::integer_constant_expression(const syntax::Expr& expr, Scope* scope, Constant& value, bool required)
{
	if (!c_source_ || !semantic())
		return constant_value(expr, scope, value, required);
	if (deferred_reserved_call() || failed())
		return false;
	const syntax::Expr* direct = WithoutParentheses(&expr);
	const ExprFacts* facts = direct->facts;
	if (facts != nullptr && facts->type != nullptr && IsIntegralOrUnscopedEnum(facts->type) &&
		(direct->kind == syntax::ExprKind::Literal ||
			(direct->kind == syntax::ExprKind::Sizeof && (facts->flags & kRuntimeSize) == 0)))
	{
		value = facts->constant();
		return true;
	}
	if (c_integer_constant_operands(expr))
	{
		ConstantInterpreter interpreter(*this);
		ConstValue result;
		if (interpreter.evaluate_c_constant(expr, false, result) && result.kind == ValueKind::Integer &&
			HeldAsConstant(result))
		{
			value = Constant{ result.bits, result.type };
			return true;
		}
		if (required && interpreter.failure() != nullptr)
			error(interpreter.failure_location(), interpreter.failure());
	}
	if (required)
		error(expr.location, "a C integer constant expression is required");
	return false;
}

bool Analyzer::note_c_null_constant(const syntax::Expr& expr)
{
	ExprFacts* facts = facts_of(expr);
	if ((facts->flags & kNullLiteral) != 0)
		return true;
	if (!IsIntegralOrUnscopedEnum(facts->type))
		return false;
	Constant value;
	if (!integer_constant_expression(expr, nullptr, value, false) || value.bits != 0)
		return false;
	facts->flags |= kNullLiteral;
	return true;
}

} // namespace sema
