#include "sema/analyzer.h"

#include "sema/constant_floating.h"
#include "sema/constant_interpreter.h"
#include "sema/string_literals.h"
#include "support/small_list.h"

#include <cmath>

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

bool CArithmetic(const Type* type)
{
	return IsArithmetic(type) || IsComplex(type);
}

bool CObjectConstant(const syntax::Expr* expr)
{
	using syntax::ExprKind;
	while (expr->kind == ExprKind::Member)
	{
		const auto* member = static_cast<const syntax::MemberExpr*>(expr);
		if (member->op != TokenKind::OP_DOT)
			return false;
		expr = WithoutParentheses(member->base);
	}
	if (expr->kind == ExprKind::FunctionalCast)
		return static_cast<const syntax::FunctionalCastExpr*>(expr)->compound_has(
			syntax::FunctionalCastExpr::Constexpr);
	if (expr->kind != ExprKind::Id || expr->facts->entity == nullptr)
		return false;
	const Entity* entity = expr->facts->entity;
	return entity->kind == EntityKind::Variable && static_cast<const VariableEntity*>(entity)->is_constexpr;
}

bool CIntegerFits(const ConstValue& value, IntegralKind destination)
{
	const bool signed_source = IsSignedConstant(Constant{ value.bits, value.type });
	const uint64_t high = IsWideIntegral(value.type)            ? value.high
		: signed_source && static_cast<int64_t>(value.bits) < 0 ? UINT64_MAX
																: 0;
	const bool negative = signed_source && static_cast<int64_t>(high) < 0;
	if (negative && !destination.is_signed)
		return false;
	const WideBits original = (static_cast<WideBits>(high) << 64) | value.bits;
	const WideBits converted = ConvertWideIntegral(original, destination);
	return original == converted && (negative || !destination.is_signed || static_cast<__int128>(converted) >= 0);
}

bool CStringFits(const syntax::LiteralExpr& literal, const Type* destination)
{
	const Type* source = literal.facts->type->element;
	const Type* element = destination->element;
	if (source->unqualified == element->unqualified)
		return true;
	IntegralKind from, to;
	if (!IntegralKindOf(source, from) || !IntegralKindOf(element, to))
		return false;
	std::vector<uint64_t> scratch;
	const StringCodeUnits units = ReadStringCodeUnits(literal, scratch);
	for (size_t i = 0; i < units.size(); ++i)
		if (!Representable(Constant{ ConvertIntegral(units[i], from), source }, to))
			return false;
	return true;
}

bool SameCArithmeticValue(const ConstValue& left, const ConstValue& right)
{
	if (left.kind != right.kind)
		return false;
	if (left.kind == ValueKind::Floating)
		return left.floating == right.floating || (std::isnan(left.floating) && std::isnan(right.floating));
	if (left.kind == ValueKind::Array && IsComplex(left.type))
		return SameCArithmeticValue(left.elements[0], right.elements[0]) &&
			SameCArithmeticValue(left.elements[1], right.elements[1]);
	return left.bits == right.bits && left.high == right.high;
}

} // namespace

// Check operand forms even in a branch the evaluator skips (C11 DR 489).
// C23 adds named constants to both the integer and arithmetic forms.
bool Analyzer::c_integer_constant_operands(const syntax::Expr& root, bool arithmetic) const
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
		if (facts == nullptr || facts->type == nullptr ||
			(!IsIntegralOrUnscopedEnum(facts->type) && !(arithmetic && CArithmetic(facts->type))))
			return false;
		switch (expr->kind)
		{
		case ExprKind::Literal:
		case ExprKind::KeywordLiteral:
		case ExprKind::TypeTrait:
			break;
		case ExprKind::Sizeof:
			if ((facts->flags & kRuntimeSize) != 0)
				return false;
			break;
		case ExprKind::Id:
			if (facts->entity != nullptr && facts->entity->kind == EntityKind::Enumerator)
				break;
			// Fall through.
		case ExprKind::Member:
		case ExprKind::FunctionalCast:
			if (!CObjectConstant(expr))
				return false;
			break;
		case ExprKind::Generic:
			pending.push_back(static_cast<const syntax::GenericExpr*>(expr)->selected);
			break;
		case ExprKind::Cast:
		{
			const Expr* operand = WithoutParentheses(static_cast<const syntax::CastExpr*>(expr)->operand);
			if (arithmetic || !CArithmetic(operand->facts->type) ||
				(operand->kind != ExprKind::Literal && !CObjectConstant(operand)))
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
			if (c_before_c99_ && binary->op == TokenKind::OP_COMMA)
				return false;
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

bool ConstantInterpreter::check_c_constexpr_initializer(
	const syntax::Expr& expr, const Type* to, const DataMember* member, const ConstValue*& checked)
{
	const Type* from = expr.facts->type;
	if (to->kind == TypeKind::Array)
		return expr.kind == syntax::ExprKind::Literal && from->kind == TypeKind::Array &&
			CStringFits(static_cast<const syntax::LiteralExpr&>(expr), to);
	IntegralKind integer;
	const bool integer_target = IntegralKindOf(to, integer);
	if (integer_target && member != nullptr && member->bit_field)
		integer.bits = static_cast<unsigned>(member->width);
	if (integer_target && expr.kind == syntax::ExprKind::Literal && IsIntegralOrUnscopedEnum(from))
	{
		ConstValue value = IntegerValue(from, expr.facts->value);
		if (IsWideIntegral(from) && static_cast<const syntax::LiteralExpr&>(expr).bit_int)
			value.high = static_cast<const syntax::LiteralExpr&>(expr).integer_high_bits();
		return CIntegerFits(value, integer);
	}
	const bool pointer_target = to->kind == TypeKind::Pointer ||
		(to->kind == TypeKind::Fundamental && to->fundamental == FundamentalType::NullptrT);
	const bool arithmetic_target = !integer_target && CArithmetic(to);
	if (integer_target && !analyzer_.c_integer_constant_operands(expr))
		return false;
	if (arithmetic_target &&
		((IsFloating(to) && IsComplex(from)) || !analyzer_.c_integer_constant_operands(expr, true)))
		return false;
	if (pointer_target && IsIntegralOrUnscopedEnum(from) && !analyzer_.c_integer_constant_operands(expr))
		return false;
	if (!integer_target && !arithmetic_target && !pointer_target && !CObjectConstant(&expr))
		return false;
	++analyzer_.graph_.constant_evaluations;
	c_constant_expression_ = true;
	c_constexpr_initializer_ = true;
	ConstValue value;
	if (!rvalue(expr, value) || !complete(value) || incomplete_class_)
		return false;
	if (integer_target)
	{
		if (value.kind != ValueKind::Integer || !CIntegerFits(value, integer))
			return false;
	}
	else if (pointer_target)
	{
		if ((value.kind != ValueKind::Pointer || value.root != RootKind::Null) &&
			(value.kind != ValueKind::Integer || (value.bits | value.high) != 0))
			return false;
	}
	else if (arithmetic_target && from->unqualified != to->unqualified)
	{
		const Type* component = IsComplex(to) ? to->element : to;
		if (IsFloating(from) && from->unqualified != component->unqualified && ConstantFloatingSignaling(value))
			return false;
		ConstValue round_trip = value;
		if (!convert_scalar(round_trip, to, expr.location) || !convert_scalar(round_trip, from, expr.location) ||
			!SameCArithmeticValue(value, round_trip))
			return false;
	}
	if (expr.kind != syntax::ExprKind::Literal && expr.kind != syntax::ExprKind::KeywordLiteral)
	{
		checked = publish(value, expr.location);
		return checked != nullptr;
	}
	return true;
}

bool Analyzer::integer_constant_expression(
	const syntax::Expr& expr, Scope* scope, Constant& value, bool required, uint64_t* high)
{
	if (!c_source_ || !semantic())
	{
		if (!constant_value(expr, scope, value, required))
			return false;
		if (high != nullptr)
			*high = static_cast<int64_t>(value.bits) < 0 && IsSignedConstant(value) ? UINT64_MAX : 0;
		return true;
	}
	if (deferred_reserved_call() || failed())
		return false;
	const syntax::Expr* direct = WithoutParentheses(&expr);
	const ExprFacts* facts = direct->facts;
	if (facts != nullptr && facts->type != nullptr && IsIntegralOrUnscopedEnum(facts->type) &&
		((direct->kind == syntax::ExprKind::Literal &&
			 (facts->type->kind != TypeKind::BitInt || facts->type->bound <= 64)) ||
			(direct->kind == syntax::ExprKind::Sizeof && (facts->flags & kRuntimeSize) == 0) ||
			direct->kind == syntax::ExprKind::KeywordLiteral))
	{
		value = facts->constant();
		if (high != nullptr)
			*high = static_cast<int64_t>(value.bits) < 0 && IsSignedConstant(value) ? UINT64_MAX : 0;
		return true;
	}
	if (c23_ && direct->kind == syntax::ExprKind::Id && facts != nullptr && facts->entity != nullptr &&
		facts->entity->kind == EntityKind::Variable)
	{
		const auto* variable = static_cast<const VariableEntity*>(facts->entity);
		if (variable->is_constexpr && variable->constant == ConstantState::Value)
		{
			value = variable->value;
			if (high != nullptr)
				*high = IsSignedConstant(value) && static_cast<int64_t>(value.bits) < 0 ? UINT64_MAX : 0;
			return true;
		}
	}
	if (c_integer_constant_operands(expr))
	{
		ConstantInterpreter interpreter(*this);
		ConstValue result;
		if (interpreter.evaluate_c_constant(expr, false, result) && result.kind == ValueKind::Integer &&
			(high != nullptr || HeldAsConstant(result)))
		{
			value = Constant{ result.bits, result.type };
			if (high != nullptr)
				*high = IsWideIntegral(value.type)                                    ? result.high
					: IsSignedConstant(value) && static_cast<int64_t>(value.bits) < 0 ? UINT64_MAX
																					  : 0;
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
