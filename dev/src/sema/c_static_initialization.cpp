#include "sema/analyzer.h"

#include "preprocess/preprocessor.h"
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
		case ExprKind::Selection:
			pending.push_back(static_cast<const syntax::SelectionExpr*>(bound)->selected);
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
			{
				const syntax::Expr* selected = truth ? choice->then_expr : choice->else_expr;
				if (selected != nullptr)
					pending.push_back(selected);
			}
			else
			{
				if (choice->then_expr != nullptr)
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

void Analyzer::record_c_static_value(const syntax::Expr& expr, const ConstValue* value)
{
	c_static_value_index_.set(&expr, static_cast<uint32_t>(c_static_values_.size()));
	c_static_values_.push_back(value);
}

const ConstValue* Analyzer::c_compound_constant(const syntax::FunctionalCastExpr& expr)
{
	if (const ConstValue* stored = checked_c_static_value(*expr.braced))
		return stored;
	ConstantInterpreter interpreter(*this);
	const ConstValue* stored = interpreter.evaluate_c_compound_initializer(*expr.braced);
	if (stored != nullptr)
		record_c_static_value(*expr.braced, stored);
	return stored;
}

enum class RegisterObject : uint8_t
{
	None,
	Declared,
	CompoundLiteral
};

static RegisterObject CRegisterObject(const syntax::Expr* expr)
{
	using syntax::ExprKind;
	for (;;)
	{
		switch (expr->kind)
		{
		case ExprKind::Paren:
			expr = static_cast<const syntax::ParenExpr*>(expr)->inner;
			break;
		case ExprKind::Selection:
			expr = static_cast<const syntax::SelectionExpr*>(expr)->selected;
			break;
		case ExprKind::Member:
		{
			const auto* member = static_cast<const syntax::MemberExpr*>(expr);
			if (member->op != TokenKind::OP_DOT)
				return RegisterObject::None;
			expr = member->base;
			break;
		}
		case ExprKind::Subscript:
		{
			const auto* subscript = static_cast<const syntax::SubscriptExpr*>(expr);
			expr = (expr->facts->flags & kCommuted) != 0 ? subscript->index : subscript->base;
			if (expr->facts->type->kind != TypeKind::Array)
				return RegisterObject::None;
			break;
		}
		case ExprKind::Id:
		{
			const Entity* entity = expr->facts->entity;
			return entity != nullptr && entity->c_register_storage ? RegisterObject::Declared : RegisterObject::None;
		}
		case ExprKind::FunctionalCast:
			return static_cast<const syntax::FunctionalCastExpr*>(expr)->compound_has(
					   syntax::FunctionalCastExpr::Register)
				? RegisterObject::CompoundLiteral
				: RegisterObject::None;
		default:
			return RegisterObject::None;
		}
	}
}

void Analyzer::check_c_register_address(const syntax::Expr& expr, uint32_t location)
{
	switch (CRegisterObject(&expr))
	{
	case RegisterObject::Declared:
		error(location, "taking the address of a register object or its subobject");
		break;
	case RegisterObject::CompoundLiteral:
		error(location, "taking the address of a register compound literal");
		break;
	case RegisterObject::None:
		break;
	}
}

ExprFacts* Analyzer::c_compound_literal(const syntax::FunctionalCastExpr& expr, Scope* scope)
{
	const RuntimeTypeEvaluation* runtime_type = nullptr;
	const Type* type = type_id(*expr.compound_type, scope, false, &runtime_type);
	if (type == nullptr || failed())
		return nullptr;
	if (type->runtime_array())
		error(expr.location, "a C compound literal cannot have variable length array type");
	if (IsVoid(type) || type->kind == TypeKind::Function)
		error(expr.location, "C compound literal requires an object type");
	using Literal = syntax::FunctionalCastExpr;
	const bool file_scope = scope == graph_.global;
	const bool thread = expr.compound_has(Literal::ThreadLocal);
	const bool constant = expr.compound_has(Literal::Constexpr);
	const bool explicit_static = expr.compound_has(Literal::Static);
	if (expr.compound_has(Literal::Register) && (file_scope || explicit_static || thread))
		error(expr.location, "invalid register storage class for a compound literal");
	if (thread && (constant || (!file_scope && !explicit_static)))
		error(expr.location, "invalid thread storage class for a compound literal");
	if (constant)
	{
		check_c_constexpr_type(type, expr.location);
		type = types_.qualified(type, kConst);
	}
	expr.compound_static = !thread && (file_scope || explicit_static);
	expr.compound_static_copy = false;
	const bool persistent = expr.compound_static || thread;
	if (c_inline_constraint_ != nullptr)
		note_c_inline_object(type, scope, persistent, expr.location);
	const bool saved_static = c_static_initializer_;
	const bool saved_constexpr = c_constexpr_initializer_;
	const CLegacyInitializer saved_legacy = c_legacy_initializer_;
	c_static_initializer_ = persistent;
	c_constexpr_initializer_ = constant;
	c_legacy_initializer_ = expr.compound_static && c_before_c99_ && c_pedantic_ && !expr.quiet_c_extensions
		? CLegacyInitializer::Static
		: CLegacyInitializer::None;
	const ClassEntity* record = ClassOf(type);
	if (persistent && hosted_ && record != nullptr &&
		(record->c_contains_flexible_array || record->c_contains_nested_flexible_array))
		c_designated_list(*expr.braced, type, scope, true);
	else
		list_initialize(*expr.braced, type, scope);
	if ((persistent || constant) && !failed())
		check_c_static_initializer(*expr.braced, constant ? type : nullptr);
	if (constant && IsComplex(type) && !failed() && c_compound_constant(expr) == nullptr)
		error(expr.location, "a C constexpr compound initializer cannot be evaluated");
	c_static_initializer_ = saved_static;
	c_constexpr_initializer_ = saved_constexpr;
	c_legacy_initializer_ = saved_legacy;
	if (failed())
		return nullptr;
	ExprFacts* facts = new_facts(expr, expr.braced->facts->type, ValueCategory::LValue);
	if (runtime_type != nullptr)
	{
		graph_.set_runtime_bounds(&expr, runtime_type);
		facts->flags |= kRuntimeTypeEvaluation;
	}
	return facts;
}

void Analyzer::check_c_static_initializer(
	const syntax::Expr& expr, const Type* constexpr_type, const DataMember* member, bool unchecked_designators)
{
	if (!semantic())
		return;
	const syntax::Expr* value = CInitializerOperand(&expr);
	if (value->kind == syntax::ExprKind::BracedInit)
	{
		const auto* list = static_cast<const syntax::BracedInitList*>(value);
		// The designated initializer builder checked the written values,
		// including those a later initializer overrides.
		if (unchecked_designators || CInitializerOf(list) == nullptr)
			for (const syntax::Expr* element : list->elements)
				check_c_static_initializer(*element, constexpr_type, member, unchecked_designators);
		return;
	}
	const ExprFacts* facts = value->facts;
	if (constexpr_type != nullptr)
	{
		ConstantInterpreter interpreter(*this);
		const ConstValue* checked = nullptr;
		if (!interpreter.check_c_constexpr_initializer(*value, constexpr_type, member, checked))
			error(value->location, "a C constexpr initializer requires an exactly representable constant");
		if (checked != nullptr)
			record_c_static_value(*value, checked);
		return;
	}
	if (facts == nullptr || facts->type == nullptr || value->kind == syntax::ExprKind::Literal ||
		(facts->flags & kFolded) != 0)
		return;
	if (value->kind == syntax::ExprKind::Cast && CInitializerOf(value) != nullptr)
	{
		check_c_static_initializer(*static_cast<const syntax::CastExpr*>(value)->operand);
		return;
	}
	if (value->kind == syntax::ExprKind::FunctionalCast)
	{
		const auto* literal = static_cast<const syntax::FunctionalCastExpr*>(value);
		if ((literal->compound_static || literal->compound_has(syntax::FunctionalCastExpr::Constexpr)) &&
			(facts->type->kind == TypeKind::Array || ClassOf(facts->type) != nullptr))
			return; // Its own checked initializer supplies the aggregate's bytes.
		if (c_static_initializer_ && ClassOf(facts->type) != nullptr && literal->compound_type != nullptr &&
			!literal->compound_has(syntax::FunctionalCastExpr::ThreadLocal) && !literal->compound_static_copy)
		{
			const char* message = "a block-scope compound literal initializing static storage is a GNU C extension";
			if (!literal->quiet_c_extensions && positions_ != nullptr &&
				!positions_->allow_gnu_c_extension(value->location, message))
				error(value->location, message);
			// Type analysis retained the literal's own automatic lifetime.
			// Copying its fields needs constant values, not its address.
			check_c_static_initializer(*literal->braced, nullptr, nullptr, true);
			literal->compound_static_copy = true;
			return;
		}
		if (literal->compound_static_copy)
			return;
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
	record_c_static_value(*value, checked);
}

const ConstValue* ConstantInterpreter::evaluate_c_initializer(const syntax::Expr& expr)
{
	++analyzer_.graph_.constant_evaluations;
	c_constant_expression_ = true;
	c_static_initializer_ = true;
	const syntax::Expr* value = &expr;
	if (expr.kind == syntax::ExprKind::FunctionalCast && (expr.facts->flags & kRuntimeTypeEvaluation) == 0)
	{
		const auto& literal = static_cast<const syntax::FunctionalCastExpr&>(expr);
		if (literal.compound_static || literal.compound_static_copy)
			value = literal.braced;
	}
	ConstValue result;
	if (!rvalue(*value, result) || !complete(result) || incomplete_class_)
		return nullptr;
	return publish(result, expr.location);
}

} // namespace sema
