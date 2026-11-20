#include "sema/analyzer.h"

#include <cstring>

#include "sema/constant_interpreter.h"
#include "sema/instantiation_context.h"

namespace sema {

bool Analyzer::structural_class_type(const Type* type)
{
	const ClassEntity* cls = ClassOf(type);
	if (cls == nullptr || !literal_type(type))
		return false;
	for (const BaseClass* base = cls->bases; base != nullptr; base = base->next)
		if (base->access != Access::Public || !structural_class_type(base->base->type))
			return false;
	for (const DataMember* member = cls->members; member != nullptr; member = member->next)
	{
		if (member->variable->kind != EntityKind::Variable)
			continue;
		const VariableEntity* variable = static_cast<const VariableEntity*>(member->variable);
		if (member->access != Access::Public || variable->is_mutable)
			return false;
		const Type* element = variable->type;
		while (element->kind == TypeKind::Array)
			element = element->element;
		if (!IsScalar(element) && element->kind != TypeKind::LValueReference && !structural_class_type(element))
			return false;
	}
	return true;
}

namespace {

// A missing array tail or a class's trailing zero subobjects have the
// same value as explicit zeros. A union's active member still matters.
bool ZeroSubobject(const Type* value)
{
	const ClassEntity* cls = ClassOf(value->element);
	return (cls == nullptr || cls->key != TokenKind::KW_UNION) && value->bound == 0 && value->param_count == 0 &&
		value->entity == nullptr;
}

template<typename Float, typename Bits>
uint64_t FloatingBits(long double value)
{
	const Float rounded = static_cast<Float>(value);
	Bits bits;
	std::memcpy(&bits, &rounded, sizeof(bits));
	return bits;
}

} // namespace

const Type* Analyzer::structural_value(const ConstValue& value)
{
	const Type* type = value.type->unqualified->canonical;
	if (value.kind == ValueKind::Integer && HeldAsConstant(value))
		return types_.value(type, value.bits);
	if (value.kind == ValueKind::Floating)
	{
		if (type->fundamental == FundamentalType::Float)
			return types_.value(type, FloatingBits<float, uint32_t>(value.floating));
		if (type->fundamental == FundamentalType::Double)
			return types_.value(type, FloatingBits<double, uint64_t>(value.floating));
		return nullptr;
	}
	if (value.kind == ValueKind::Pointer || value.kind == ValueKind::MemberPointer)
		return structural_address(value);
	if (value.kind != ValueKind::Class && value.kind != ValueKind::Array)
		return nullptr;
	const ClassEntity* cls = ClassOf(type);
	const bool union_value = cls != nullptr && cls->key == TokenKind::KW_UNION;
	TypeList elements;
	if (union_value)
	{
		if (value.extra != 0)
		{
			const Type* active = structural_value(value.elements[value.extra - 1]);
			if (active == nullptr)
				return nullptr;
			elements.push_back(active);
		}
	}
	else
	{
		const DataMember* member = cls != nullptr ? cls->members : nullptr;
		for (uint32_t i = 0; i < value.count; ++i)
		{
			if (cls != nullptr && i >= cls->base_count)
			{
				if (member->bit_field && member->variable->name == nullptr)
				{
					member = member->next;
					continue;
				}
				member = member->next;
			}
			const Type* element = structural_value(value.elements[i]);
			if (element == nullptr)
				return nullptr;
			elements.push_back(element);
		}
		while (!elements.empty() && ZeroSubobject(elements.back()))
			elements.pop_back();
	}
	return types_.aggregate_value(type, elements.data(), static_cast<uint32_t>(elements.size()), value.extra);
}

const Type* Analyzer::class_template_argument(const syntax::Expr& expr, Scope* scope, const Type* target)
{
	// An overload candidate can initialize its argument after ADL. Any
	// constructor resolution then runs inside the call's own resolution.
	ScratchContext scratch(*this);
	BodyContext context = BodyContext();
	BodyContext* saved_body = body_;
	Scope* saved_expression_scope = expression_scope_;
	const NamePrefix saved_prefix = last_prefix_;
	if (body_ == nullptr)
		body_ = &context;
	const syntax::Initializer initializer{ syntax::InitializerKind::Assign, const_cast<syntax::Expr*>(&expr),
		syntax::Slice<syntax::Expr*>(), expr.location };
	if (target == nullptr)
		target = expr.facts->type->unqualified;
	else if (DeducedClassParameter(target))
	{
		syntax::Expr* element = const_cast<syntax::Expr*>(&expr);
		target = deduce_class_type(static_cast<ClassEntity*>(target->entity),
			syntax::Slice<syntax::Expr*>{ &element, 1 }, scope, expr.location, true, nullptr);
	}
	const bool structural = target != nullptr && structural_class_type(target);
	VariableEntity source = VariableEntity();
	const ConstValue* value = nullptr;
	if (structural && !failed())
	{
		source.kind = EntityKind::Variable;
		source.type = types_.qualified(target, kConst);
		source.is_constexpr = true;
		source.constructor = initialize_object(source.type, initializer, scope, expr.location);
		if (!failed())
		{
			ConstantInterpreter interpreter(*this);
			if (!interpreter.initialize(&source, &initializer, value))
				value = nullptr;
		}
	}
	body_ = saved_body;
	expression_scope_ = saved_expression_scope;
	last_prefix_ = saved_prefix;
	if (failed())
		return nullptr;
	const Type* argument = value != nullptr ? structural_value(*value) : nullptr;
	if (argument == nullptr)
	{
		substitution_error(expr.location, "a class template argument must be a structural constant expression");
		return nullptr;
	}
	if (parameter_object_index_.find(argument) == PointerMap::kMissing)
	{
		while (scope->parent != nullptr)
			scope = scope->parent;
		TemplateParameterObject* object = new_entity<TemplateParameterObject>(
			EntityKind::Variable, nullptr, scope, source.type);
		object->argument = argument;
		object->defined = true;
		object->is_constexpr = true;
		object->is_inline = true;
		object->template_parameter_object = true;
		object->constant = ConstantState::Object;
		set_evaluated(object, value);
		parameter_object_index_.set(argument, static_cast<uint32_t>(parameter_objects_.size()));
		parameter_objects_.push_back(object);
	}
	return argument;
}

const syntax::Expr* Analyzer::template_argument_object_use(const Type* argument, uint32_t location)
{
	Entity* entity = argument->entity;
	syntax::IdExpr* use = arena_.allocate_array<syntax::IdExpr>(1);
	*use = syntax::IdExpr();
	use->location = location;
	use->kind = syntax::ExprKind::Id;
	use->name = implicit_name(entity->name, location);
	ExprFacts* facts = new_facts(*use, entity->type, ValueCategory::LValue);
	facts->entity = entity;
	facts->flags = kImplicit;
	return use;
}

Binding* Analyzer::parameter_object_binding(
	const TemplateParameterEntity* parameter, const Type* argument, Scope*, const Identifier* name)
{
	VariableEntity* object = parameter_objects_[parameter_object_index_.find(argument)];
	Binding* binding = new_binding(BindingKind::Variable, name, object, object->type);
	binding->dependent = dependent_type(parameter->value_type) || DeducedClassParameter(parameter->value_type);
	binding->value_dependent = true;
	return binding;
}

} // namespace sema
