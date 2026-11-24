#include "sema/analyzer.h"

#include "sema/c_initializer.h"
#include "sema/constant_interpreter.h"
#include "support/small_list.h"

namespace sema {

namespace {

using PendingBounds = SmallList<const syntax::Expr*, 8>;

void AppendBounds(const RuntimeTypeEvaluation* evaluation, PendingBounds& pending)
{
	for (const RuntimeTypeEvaluation* step = evaluation; step != nullptr; step = step->next)
	{
		switch (step->kind)
		{
		case RuntimeTypeEvaluation::Kind::ArrayBound:
			pending.push_back(step->array->runtime_bound);
			break;
		case RuntimeTypeEvaluation::Kind::Operand:
			pending.push_back(step->operand);
			break;
		case RuntimeTypeEvaluation::Kind::Sequence:
			AppendBounds(step->sequence, pending);
			break;
		case RuntimeTypeEvaluation::Kind::Repeated:
			AppendBounds(step->repeated->sequence, pending);
			for (const syntax::Expr* bound : step->repeated->bounds)
				pending.push_back(bound);
			break;
		}
	}
}

bool KnownBoundCondition(const syntax::Expr& expr, bool& truth)
{
	const syntax::Expr* condition = CInitializerOperand(&expr);
	const ExprFacts* facts = condition->facts;
	if ((condition->kind != syntax::ExprKind::Literal && (facts->flags & kFolded) == 0) ||
		!IsIntegralOrUnscopedEnum(facts->type))
		return false;
	truth = facts->value != 0;
	return true;
}

} // namespace

bool ConstantInterpreter::c_static_initializer_operands(const syntax::Expr& expr, bool legacy_initializer)
{
	// GCC accepts a variably modified cast when the bound contributes only
	// type information to the relocation. Inspect the typed evaluation
	// plan for operations that cannot occur in a C constant expression.
	using syntax::ExprKind;
	PendingBounds pending;
	if (legacy_initializer)
		pending.push_back(&expr);
	else
		AppendBounds(analyzer_.graph_.runtime_bounds(&expr), pending);
	while (!pending.empty())
	{
		const syntax::Expr* bound = CInitializerOperand(pending.back());
		pending.pop_back();
		switch (bound->kind)
		{
		case ExprKind::Id:
		case ExprKind::Literal:
		case ExprKind::KeywordLiteral:
		case ExprKind::TypeTrait:
			break;
		case ExprKind::Sizeof:
			AppendBounds(analyzer_.graph_.runtime_bounds(bound), pending);
			if ((bound->facts->flags & kRuntimeSizeOperand) != 0)
				if (const syntax::Expr* operand = static_cast<const syntax::SizeofExpr*>(bound)->operand)
					pending.push_back(operand);
			break;
		case ExprKind::Generic:
			pending.push_back(static_cast<const syntax::GenericExpr*>(bound)->selected);
			break;
		case ExprKind::Cast:
			AppendBounds(analyzer_.graph_.runtime_bounds(bound), pending);
			pending.push_back(static_cast<const syntax::CastExpr*>(bound)->operand);
			break;
		case ExprKind::FunctionalCast:
		{
			const auto* literal = static_cast<const syntax::FunctionalCastExpr*>(bound);
			AppendBounds(analyzer_.graph_.runtime_bounds(bound), pending);
			if (literal->braced != nullptr)
				pending.push_back(literal->braced);
			else
				for (const syntax::Expr* operand : literal->arguments)
					pending.push_back(operand);
			break;
		}
		case ExprKind::BracedInit:
			for (const syntax::Expr* operand : static_cast<const syntax::BracedInitList*>(bound)->elements)
				pending.push_back(operand);
			break;
		case ExprKind::Member:
			pending.push_back(static_cast<const syntax::MemberExpr*>(bound)->base);
			break;
		case ExprKind::Subscript:
		{
			const auto* subscript = static_cast<const syntax::SubscriptExpr*>(bound);
			pending.push_back(subscript->base);
			pending.push_back(subscript->index);
			break;
		}
		case ExprKind::Unary:
		{
			const auto* unary = static_cast<const syntax::UnaryExpr*>(bound);
			if (unary->op == TokenKind::OP_INC || unary->op == TokenKind::OP_DEC)
				return false;
			pending.push_back(unary->operand);
			break;
		}
		case ExprKind::Binary:
		{
			const auto* binary = static_cast<const syntax::BinaryExpr*>(bound);
			if (binary->op == TokenKind::OP_COMMA)
				return false;
			pending.push_back(binary->left);
			bool truth = false;
			if (!legacy_initializer && (binary->op == TokenKind::OP_LAND || binary->op == TokenKind::OP_LOR) &&
				KnownBoundCondition(*binary->left, truth) && truth == (binary->op == TokenKind::OP_LOR))
				break;
			pending.push_back(binary->right);
			break;
		}
		case ExprKind::Conditional:
		{
			const auto* choice = static_cast<const syntax::ConditionalExpr*>(bound);
			pending.push_back(choice->condition);
			bool truth = false;
			if (!legacy_initializer && KnownBoundCondition(*choice->condition, truth))
				pending.push_back(truth ? choice->then_expr : choice->else_expr);
			else
			{
				pending.push_back(choice->then_expr);
				pending.push_back(choice->else_expr);
			}
			break;
		}
		case ExprKind::Call:
			if (legacy_initializer && bound->facts->entity != nullptr &&
				bound->facts->entity->kind == EntityKind::Function &&
				static_cast<const FunctionEntity*>(bound->facts->entity)->builtin != BuiltinFunction::None)
				break;
			// Fall through.
		case ExprKind::BuiltinTrait:
			if ((bound->facts->flags & kFolded) == 0)
				return false;
			break;
		default:
			return false;
		}
	}
	return true;
}

const ConstValue* Analyzer::checked_c_static_value(const syntax::Expr& expr) const
{
	const uint32_t index = c_static_value_index_.find(CInitializerOperand(&expr));
	return index == PointerMap::kMissing ? nullptr : c_static_values_[index];
}

void Analyzer::c_initialize_compound_literal(const syntax::FunctionalCastExpr& expr, const Type* type, Scope* scope)
{
	expr.compound_static = scope == graph_.global;
	const bool saved_static = c_static_initializer_;
	const CLegacyInitializer saved_legacy = c_legacy_initializer_;
	c_static_initializer_ = expr.compound_static;
	c_legacy_initializer_ = expr.compound_static && c_before_c99_ && c_pedantic_ && !expr.quiet_c_extensions
		? CLegacyInitializer::Static
		: CLegacyInitializer::None;
	const ClassEntity* record = ClassOf(type);
	if (expr.compound_static && hosted_ && record != nullptr &&
		(record->c_contains_flexible_array || record->c_contains_nested_flexible_array))
		c_designated_list(*expr.braced, type, scope, true);
	else
		list_initialize(*expr.braced, type, scope);
	if (expr.compound_static && !failed())
		check_c_static_initializer(*expr.braced);
	c_static_initializer_ = saved_static;
	c_legacy_initializer_ = saved_legacy;
}

void Analyzer::check_c_static_initializer(const syntax::Expr& expr)
{
	if (!semantic())
		return;
	const syntax::Expr* value = CInitializerOperand(&expr);
	if (value->kind == syntax::ExprKind::BracedInit)
	{
		const auto* list = static_cast<const syntax::BracedInitList*>(value);
		// The designated initializer builder checked the written values,
		// including those a later initializer overrides.
		if (CInitializerOf(list) == nullptr)
			for (const syntax::Expr* element : list->elements)
				check_c_static_initializer(*element);
		return;
	}
	const ExprFacts* facts = value->facts;
	if (facts == nullptr || facts->type == nullptr || value->kind == syntax::ExprKind::Literal ||
		(facts->flags & kFolded) != 0)
		return;
	if (value->kind == syntax::ExprKind::FunctionalCast)
	{
		const auto* literal = static_cast<const syntax::FunctionalCastExpr*>(value);
		if (literal->compound_static && (facts->type->kind == TypeKind::Array || ClassOf(facts->type) != nullptr))
			return; // Its own checked initializer supplies the aggregate's bytes.
	}
	if (checked_c_static_value(*value) != nullptr)
		return;
	ConstantInterpreter interpreter(*this);
	const bool automatic = c_legacy_initializer_ == CLegacyInitializer::AutomaticAggregate;
	const char* message = automatic ? "a nonconstant automatic aggregate initializer requires C99"
									: "a forbidden operator in a C90 constant initializer";
	if (c_legacy_initializer_ != CLegacyInitializer::None && !interpreter.c_static_initializer_operands(*value, true))
	{
		require_c_extension(value->location, CEdition::C99, message);
		if (automatic)
			return;
	}
	const ConstValue* checked = interpreter.evaluate_c_initializer(*value);
	if (automatic)
	{
		if (checked == nullptr)
			require_c_extension(value->location, CEdition::C99, message);
		return;
	}
	if (checked == nullptr)
		error(value->location, "a C static initializer requires a constant expression");
	c_static_value_index_.set(value, static_cast<uint32_t>(c_static_values_.size()));
	c_static_values_.push_back(checked);
}

const ConstValue* ConstantInterpreter::evaluate_c_initializer(const syntax::Expr& expr)
{
	++analyzer_.graph_.constant_evaluations;
	c_constant_expression_ = true;
	c_static_initializer_ = true;
	const syntax::Expr* value = &expr;
	const Type* address_integer = nullptr;
	if (expr.kind == syntax::ExprKind::Cast && (expr.facts->flags & kRuntimeTypeEvaluation) == 0)
	{
		const auto& cast = static_cast<const syntax::CastExpr&>(expr);
		const Type* source = cast.operand->facts->type;
		IntegralKind kind;
		// Preserve relocations for the supported address-to-integer
		// initializer extension. The destination integer must hold the
		// target pointer, except for a known absolute address.
		if ((source->kind == TypeKind::Array || source->kind == TypeKind::Function ||
				source->kind == TypeKind::Pointer) &&
			IntegralKindOf(expr.facts->type, kind) && kind.bits != 1)
		{
			value = cast.operand;
			address_integer = expr.facts->type->unqualified;
		}
	}
	if (expr.kind == syntax::ExprKind::FunctionalCast && (expr.facts->flags & kRuntimeTypeEvaluation) == 0)
	{
		const auto& literal = static_cast<const syntax::FunctionalCastExpr&>(expr);
		if (literal.compound_static)
			value = literal.braced;
	}
	ConstValue result;
	if (!rvalue(*value, result) || !complete(result) || incomplete_class_)
		return nullptr;
	if (address_integer != nullptr)
	{
		if (result.kind != ValueKind::Pointer)
			return nullptr;
		const unsigned pointer_bits = target_model::data_layout(analyzer_.types_.target()).pointer_bytes * 8;
		if (result.root == RootKind::Null || result.root == RootKind::AbsoluteAddress)
		{
			const auto word = pointer_bits == 32 ? FundamentalType::UnsignedInt : FundamentalType::UnsignedLongLongInt;
			result = IntegerValue(analyzer_.types_.fundamental(word), static_cast<uint64_t>(result.address.offset));
			if (!convert_scalar(result, address_integer, expr.location))
				return nullptr;
		}
		else
		{
			IntegralKind kind;
			IntegralKindOf(address_integer, kind);
			if (kind.bits < pointer_bits)
				return nullptr;
		}
	}
	return publish(result, expr.location);
}

} // namespace sema
