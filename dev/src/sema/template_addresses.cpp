#include "sema/analyzer.h"

#include "lex/identifier_table.h"
#include "sema/constant_interpreter.h"

// Non-type template arguments of pointer, reference and pointer to member
// type (14.3.2):
// the argument's form, the object or function it designates, its conversion
// to its parameter's type (14.3.2p5), and the name of a parameter an
// instantiation binds to one. An argument is an interned TypeKind::Value
// (see sema/semantic_types.h), so specializations compare such arguments by
// pointer as they compare integral values.
namespace sema {

namespace {

const syntax::Expr* WithoutParentheses(const syntax::Expr* expr)
{
	while (expr->kind == syntax::ExprKind::Paren)
		expr = static_cast<const syntax::ParenExpr*>(expr)->inner;
	return expr;
}

bool IsNullptrType(const Type* type)
{
	return type->kind == TypeKind::Fundamental && type->fundamental == FundamentalType::NullptrT;
}

// 14.3.2p1: an object of static storage duration with external or internal
// linkage (a namespace-scope variable, a static data member, a block-scope
// extern declaration), or a function that is no non-static member.
bool LinkedEntity(const Entity* entity)
{
	if (entity->kind == EntityKind::Function)
	{
		const FunctionEntity* function = static_cast<const FunctionEntity*>(entity);
		return !function->member || function->is_static;
	}
	const VariableEntity* variable = static_cast<const VariableEntity*>(entity);
	if (variable->member || variable->is_thread_local || variable->owner == nullptr)
		return false;
	const ScopeKind owner = variable->owner->kind;
	return owner == ScopeKind::Namespace || owner == ScopeKind::Class || variable->is_extern;
}

bool LocalStaticAddress(const Entity* entity)
{
	if (entity->kind != EntityKind::Variable)
		return false;
	const VariableEntity* variable = static_cast<const VariableEntity*>(entity);
	return variable->is_static && !variable->member && !variable->is_thread_local && !variable->predefined_name;
}

const Entity* NamedAddressConstant(const ConstValue& value)
{
	if (value.kind != ValueKind::Pointer || (value.root != RootKind::Variable && value.root != RootKind::Function) ||
		value.address.offset != 0 || (value.flags & (kPastEnd | kInvalidView)) != 0)
		return nullptr;
	const Entity* entity = static_cast<const Entity*>(value.address.entity);
	if (entity == nullptr || !LinkedEntity(entity))
		return nullptr;
	if (value.root == RootKind::Function)
		return entity;
	// Reject C++17 subobject pointers even at offset zero. The permitted
	// array-to-pointer conversion designates the first array element.
	const Type* object = entity->type->unqualified;
	const Type* pointee = value.type->element->unqualified;
	return pointee == object || (object->kind == TypeKind::Array && pointee == object->element->unqualified) ? entity
																											 : nullptr;
}

bool DescribeSubobject(Analyzer& analyzer, const Type* type, const SubobjectAddress& address, int64_t start,
	const UnionSelection* const* variants, size_t remaining, SmallList<SubobjectNameStep, 4>& out, uint32_t depth)
{
	if (depth > 128 || start > address.offset)
		return false;
	if (start == address.offset && type->unqualified == address.referent && remaining == 0)
		return true;
	uint64_t size = 0, alignment = 0;
	if (!analyzer.object_layout(type, size, alignment) ||
		(static_cast<uint64_t>(address.offset - start) >= size && start != address.offset))
		return false;
	const size_t prefix = out.size();
	if (type->kind == TypeKind::Array)
	{
		uint64_t stride = 0;
		if (!analyzer.object_layout(type->element, stride, alignment) || stride == 0)
			return false;
		const uint64_t index = static_cast<uint64_t>(address.offset - start) / stride;
		if (index >= type->bound)
			return false;
		out.push_back(SubobjectNameStep{ nullptr, index });
		if (DescribeSubobject(analyzer, type->element, address, start + static_cast<int64_t>(index * stride), variants,
				remaining, out, depth + 1))
			return true;
		out.resize(prefix);
		return false;
	}
	const ClassEntity* cls = ClassOf(type);
	if (cls == nullptr)
		return false;
	for (const BaseClass* base = cls->bases; base != nullptr; base = base->next)
	{
		if (DescribeSubobject(analyzer, base->base->type, address, start + static_cast<int64_t>(base->offset), variants,
				remaining, out, depth + 1))
			return true;
	}
	const bool is_union = cls->key == TokenKind::KW_UNION;
	const UnionSelection* selected = remaining != 0 ? variants[remaining - 1] : nullptr;
	if (is_union &&
		(selected == nullptr || selected->offset != start || selected->member->variable->owner->entity != cls))
		return false;
	for (const DataMember* member = is_union ? selected->member : cls->members; member != nullptr;
		member = is_union ? nullptr : member->next)
	{
		if (member->bit_field || member->variable->type->is_reference())
			continue;
		if (member->variable->name != nullptr)
			out.push_back(SubobjectNameStep{ member, 0 });
		const int64_t offset = start + static_cast<int64_t>(member->offset / 8);
		if (DescribeSubobject(analyzer, member->variable->type, address, offset, variants,
				remaining - (is_union ? 1 : 0), out, depth + 1))
			return true;
		out.resize(prefix);
	}
	return false;
}

} // namespace

bool AddressParameterType(const Type* type)
{
	type = type->unqualified;
	return type->kind == TypeKind::Pointer || type->kind == TypeKind::LValueReference ||
		type->kind == TypeKind::MemberPointer || IsNullptrType(type);
}

bool AddressArgument(const Type* argument)
{
	return argument->kind == TypeKind::Value && AddressParameterType(argument->element);
}

const Type* Analyzer::structural_address(const ConstValue& value)
{
	const Type* type = value.type->unqualified->canonical;
	if (value.kind == ValueKind::MemberPointer)
	{
		if (value.address.offset != 0)
			return nullptr;
		Entity* member = const_cast<Entity*>(static_cast<const Entity*>(value.address.entity));
		return types_.address(type, member);
	}
	if (value.root == RootKind::Null)
		return types_.address(type, nullptr);
	// Otherwise the published constant must designate actual storage or
	// a function. Temporary, typeid and string objects cannot escape in
	// a structural argument's pointer or reference (C++20 [temp.arg.nontype]).
	return constant_template_address(value);
}

const Type* Analyzer::constant_template_address(const ConstValue& value)
{
	if (value.kind != ValueKind::Pointer || (value.flags & kInvalidView) != 0 ||
		(value.root != RootKind::Variable && value.root != RootKind::Function))
		return nullptr;
	Entity* entity = const_cast<Entity*>(static_cast<const Entity*>(value.address.entity));
	if (entity == nullptr)
		return nullptr;
	const Type* type = value.type->unqualified->canonical;
	if (value.root == RootKind::Function)
	{
		if (!LinkedEntity(entity) || static_cast<const FunctionEntity*>(entity)->is_consteval)
			return nullptr;
		note_argument_demand(entity);
		return types_.address(type, entity);
	}
	const VariableEntity* variable = static_cast<const VariableEntity*>(entity);
	if (variable->predefined_name || (!LinkedEntity(entity) && !LocalStaticAddress(entity)))
		return nullptr;
	if (variable->templ != nullptr)
		demand_variable(variable);
	note_argument_demand(entity);
	const Type* referent = type->element->unqualified;
	const bool erased = IsVoid(referent);
	if (erased)
	{
		referent = ErasedReferent(value);
		if (referent == nullptr)
			return nullptr;
	}
	const UnionSelection* variant = reinterpret_cast<const UnionSelection*>(static_cast<uintptr_t>(value.high));
	const bool one_past = (value.flags & kPastEnd) != 0;
	const SubobjectAddress address{ referent, variant, value.address.offset, one_past, entity->type->unqualified,
		nullptr, kUndescribedSubobject };
	if (!erased && address.whole_object())
		return types_.address(type, entity);
	return subobject_template_address(type, entity, address);
}

const Type* Analyzer::subobject_template_address(const Type* type, Entity* root, SubobjectAddress address)
{
	const Type* argument = types_.subobject_address(type, root, address);
	const SubobjectAddress* description = SubobjectOf(argument);
	if (description->name_path_size != kUndescribedSubobject)
		return argument;
	SmallList<const UnionSelection*, 4> variants;
	for (const UnionSelection* variant = address.variant; variant != nullptr; variant = variant->outer)
		variants.push_back(variant);
	SubobjectAddress element = address;
	if (address.one_past)
	{
		uint64_t size = 0, alignment = 0;
		if (object_layout(address.referent, size, alignment))
			element.offset -= static_cast<int64_t>(size);
	}
	SmallList<SubobjectNameStep, 4> path;
	if (DescribeSubobject(*this, address.storage, element, 0, variants.data(), variants.size(), path, 0))
	{
		description->name_path = arena_.copy_array(path.data(), path.size());
		description->name_path_size = static_cast<uint32_t>(path.size());
	}
	else
		description->name_path_size = kUnnamedSubobjectPath;
	return argument;
}

bool Analyzer::NamesLinkedObject(const syntax::Expr& expr)
{
	// An id-expression (parenthesized or not) naming an object of integral
	// or enumeration type that a reference parameter's argument may
	// designate (14.3.2p1).
	const syntax::Expr* named = WithoutParentheses(&expr);
	const Entity* entity = named->kind == syntax::ExprKind::Id && named->facts != nullptr ? named->facts->entity
																						  : nullptr;
	if (entity == nullptr || entity->kind != EntityKind::Variable || entity->type->is_reference() ||
		!LinkedEntity(entity))
		return false;
	const Type* type = entity->type->unqualified;
	return IsIntegralType(type) || type->kind == TypeKind::Enum || type->kind == TypeKind::Class;
}

ConstValue ArgumentPointer(const Type* argument)
{
	// The null pointer, or the address of the argument's object (an array's
	// first element when it decayed, 4.2) or function, at offset zero.
	ConstValue value = ConstValue();
	value.kind = ValueKind::Pointer;
	value.type = argument->element;
	const Entity* entity = argument->entity;
	if (value.type->kind == TypeKind::MemberPointer)
	{
		value = NullMemberPointer(argument->element);
		value.address.entity = entity;
		return value;
	}
	value.root = entity == nullptr             ? RootKind::Null
		: entity->kind == EntityKind::Function ? RootKind::Function
											   : RootKind::Variable;
	value.address.entity = entity;
	if (const SubobjectAddress* subobject = SubobjectOf(argument))
	{
		value.address.offset = subobject->offset;
		value.high = reinterpret_cast<uintptr_t>(subobject->variant);
		if (value.type->kind == TypeKind::Pointer && IsVoid(value.type->element))
			SetErasedReferent(value, subobject->referent);
		if (subobject->one_past)
			value.flags |= kPastEnd;
	}
	return value;
}

const Type* Analyzer::address_argument(const syntax::Expr& expr, const Type* target)
{
	// 14.3.2p1: the argument of a pointer or reference parameter (typed as a
	// constant expression's operand) is `&` id-expression or an
	// id-expression naming an object or a function (a set of overloaded
	// functions resolved by the parameter's type `target`, 13.4), a
	// parameter an instantiation bound to one, or a constant expression
	// evaluating to a null pointer. Its own value, which converted_value
	// converts to the parameter's type (an integral one is left for it to
	// reject); null for a substitution's failure.
	ExprFacts* facts = facts_of(expr);
	if ((facts->flags & kOverloadSet) != 0)
	{
		FunctionEntity* function = target != nullptr ? select_overloaded(facts, target, expr.location) : nullptr;
		if (function == nullptr)
		{
			substitution_error(expr.location, "no overloaded function matches the template parameter's type");
			return nullptr;
		}
		resolve_overloaded(expr, function);
	}
	const syntax::Expr* e = WithoutParentheses(&expr);
	const bool address = e->kind == syntax::ExprKind::Unary &&
		static_cast<const syntax::UnaryExpr*>(e)->op == TokenKind::OP_AMP && (e->facts->flags & kOperatorCall) == 0;
	const syntax::Expr* named = address ? WithoutParentheses(static_cast<const syntax::UnaryExpr*>(e)->operand) : e;
	const Entity* entity = named->kind == syntax::ExprKind::Id && named->facts != nullptr ? named->facts->entity
																						  : nullptr;
	if (entity != nullptr && entity->kind == EntityKind::Function &&
		static_cast<const FunctionEntity*>(entity)->is_consteval)
	{
		substitution_error(expr.location, "an immediate function address is not a constant template argument");
		return nullptr;
	}
	if (!address && entity != nullptr && entity->kind == EntityKind::Enumerator &&
		static_cast<const EnumeratorEntity*>(entity)->argument != nullptr)
		return static_cast<const EnumeratorEntity*>(entity)->argument;
	// An object of pointer or std::nullptr_t type named without `&` is no
	// pointer parameter's designation (only a reference parameter's) but a
	// constant expression, valid when it evaluates to a null pointer value.
	const Type* named_type = entity != nullptr && entity->kind == EntityKind::Variable ? named->facts->type->unqualified
																					   : nullptr;
	if (!address && named_type != nullptr &&
		(named_type->kind == TypeKind::Pointer || IsNullptrType(named_type) ||
			named_type->kind == TypeKind::MemberPointer) &&
		(target == nullptr || !target->is_reference()))
		entity = nullptr;
	if (cxx20_ && entity != nullptr && entity->kind == EntityKind::Variable)
	{
		const VariableEntity* variable = static_cast<const VariableEntity*>(entity);
		if (variable->type->is_reference() || variable->member || variable->predefined_name)
			entity = nullptr;
	}
	// A pointer to member expressed as `&X::m` (5.3.1p3), which designates
	// the member.
	if (address && e->facts->type != nullptr && e->facts->type->unqualified->kind == TypeKind::MemberPointer)
	{
		if (entity == nullptr || (entity->kind != EntityKind::Variable && entity->kind != EntityKind::Function))
		{
			substitution_error(e->location, "a pointer to member template argument designates no member");
			return nullptr;
		}
		note_argument_demand(entity);
		return types_.address(e->facts->type->unqualified->canonical, const_cast<Entity*>(entity));
	}
	if (entity != nullptr && (entity->kind == EntityKind::Variable || entity->kind == EntityKind::Function))
	{
		const char* failure = nullptr;
		if (!LinkedEntity(entity) && !(cxx20_ && LocalStaticAddress(entity)))
			failure = "a template argument designates no object of static storage duration with linkage";
		else if (!address && entity->type->is_reference())
			failure = "a reference named as a template argument (14.3.2p1 names an object)";
		if (failure != nullptr)
		{
			substitution_error(named->location, failure);
			return nullptr;
		}
		Entity* designated = const_cast<Entity*>(entity);
		// 3.2p2: the object a pointer or reference parameter's argument
		// designates is odr-used (no lvalue-to-rvalue conversion reads it;
		// an integral one named for an unknown parameter may yet be read):
		// an instance's static data member is then defined (14.7.1p2), its
		// initializer run.
		const VariableEntity* variable = entity->kind == EntityKind::Variable
			? static_cast<const VariableEntity*>(entity)
			: nullptr;
		const bool readable = !address && target == nullptr && variable != nullptr &&
			(IsIntegralType(variable->type->unqualified) || variable->type->unqualified->kind == TypeKind::Enum);
		if (variable != nullptr && !readable && variable->templ != nullptr)
			demand_variable(variable);
		note_argument_demand(entity);
		if (address)
			return types_.address(e->facts->type->unqualified->canonical, designated);
		return types_.address(types_.reference(named->facts->type, false)->canonical, designated);
	}
	if (address && !cxx20_)
	{
		substitution_error(
			e->location, "a template argument's address of something that is no named object or function");
		return nullptr;
	}
	ConstantInterpreter interpreter(*this);
	ConstValue value;
	const bool reference = cxx20_ && target != nullptr && target->is_reference() &&
		facts->category == ValueCategory::LValue;
	if (!(reference ? interpreter.evaluate_designation(expr, value) : interpreter.evaluate(expr, false, value)))
	{
		substitution_error(interpreter.failure() != nullptr ? interpreter.failure_location() : expr.location,
			interpreter.failure() != nullptr ? interpreter.failure()
											 : "a template argument that is not a constant expression");
		return nullptr;
	}
	if (value.kind == ValueKind::Integer)
		return types_.value(value.type->unqualified, value.bits);
	if (value.kind == ValueKind::Pointer && value.root == RootKind::Null)
		return types_.address(value.type->unqualified->canonical, nullptr);
	if (value.kind == ValueKind::MemberPointer && value.address.entity == nullptr)
		return types_.address(value.type->unqualified->canonical, nullptr);
	if (cxx20_)
	{
		if (const Type* designated = constant_template_address(value))
			return designated;
	}
	else if (const Entity* designated = cxx17_ ? NamedAddressConstant(value) : nullptr)
	{
		if (designated->kind == EntityKind::Variable &&
			static_cast<const VariableEntity*>(designated)->templ != nullptr)
			demand_variable(static_cast<const VariableEntity*>(designated));
		note_argument_demand(designated);
		return types_.address(value.type->unqualified->canonical, const_cast<Entity*>(designated));
	}
	// N4268 (C++17): a member-pointer argument can be a constant
	// expression, including a constexpr variable or call. Preserve the
	// canonical member identity when no this-adjustment is required.
	if (cxx17_ && value.kind == ValueKind::MemberPointer && value.address.offset == 0)
	{
		const Entity* member = static_cast<const Entity*>(value.address.entity);
		note_argument_demand(member);
		return types_.address(value.type->unqualified->canonical, const_cast<Entity*>(member));
	}
	substitution_error(expr.location, "a template argument that designates no named object or function");
	return nullptr;
}

void Analyzer::note_argument_demand(const Entity* entity)
{
	// 3.2p2: a function a template argument designates is odr-used where
	// the argument appears (in a template's instantiation, not its
	// definition, 14.7.1); no lowered code names it, so it is listed by the
	// definition whose body names it (none outside a body) for the
	// lowering to demand where that is emitted.
	if (entity == nullptr || entity->kind != EntityKind::Function || unevaluated_ != 0 || template_depth_ != 0)
		return;
	// Each (context, function) is listed once, found by one probe.
	const FunctionEntity* function = static_cast<const FunctionEntity*>(entity);
	const FunctionEntity* context = body_ != nullptr ? body_->function : nullptr;
	const EntityPair key = EntityPair{ context, function };
	if (argument_demanded_.find(key) != nullptr)
		return;
	argument_demanded_.insert(key, true);
	const uint32_t head = argument_demand_head(context);
	argument_demands_.push_back(ArgumentDemand{ function, head });
	const uint32_t index = static_cast<uint32_t>(argument_demands_.size());
	if (context == nullptr)
		top_argument_demand_head_ = index;
	else
		argument_demand_heads_.set(context, index);
}

uint32_t Analyzer::argument_demand_head(const FunctionEntity* context) const
{
	// (A PointerMap marks its empty slots with the null key.)
	if (context == nullptr)
		return top_argument_demand_head_;
	const uint32_t head = argument_demand_heads_.find(context);
	return head == PointerMap::kMissing ? 0 : head;
}

const Type* Analyzer::converted_address(const Type* target, const Type* argument, bool fatal, uint32_t location)
{
	// 14.3.2p5 for a parameter of pointer, reference or std::nullptr_t type
	// `target` (unqualified): an object pointer takes qualification
	// conversions (4.4) and the array-to-pointer conversion (4.2), a
	// function pointer the function-to-pointer conversion (4.3), either
	// the null pointer conversion of a std::nullptr_t value (4.10); a
	// reference binds directly to an lvalue whose type it may qualify
	// further. No integer converts (not even a null pointer constant), nor
	// does such an argument to an integral or enumeration type (5.19p3).
	target = target->canonical;
	const Type* source = argument->element;
	Entity* entity = argument->entity;
	const char* failure = nullptr;
	if (entity != nullptr && entity->kind == EntityKind::Function &&
		static_cast<const FunctionEntity*>(entity)->is_consteval)
		failure = "an immediate function address is not a constant template argument";
	else if (!AddressArgument(argument))
		failure = "an integral template argument given for a pointer or reference parameter";
	else if (!AddressParameterType(target))
		failure = "a pointer or reference template argument given for an integral or enumeration parameter";
	else if (IsNullptrType(target))
	{
		if (entity != nullptr || !IsNullptrType(source))
			failure = "a std::nullptr_t template parameter's argument is not nullptr";
	}
	else if (target->kind == TypeKind::MemberPointer)
	{
		// A converted constant expression permits qualification and function
		// pointer conversions, as well as a null member pointer conversion
		// from std::nullptr_t (N4659 [expr.const]).
		const bool convertible = source == target ||
			(source->kind == TypeKind::MemberPointer &&
				(target->element->kind == TypeKind::Function
						? source->owner == target->owner &&
							conversions_.function_conversion(source->element, target->element)
						: ConversionRules::qualification_convertible(source, target)));
		if (!(entity == nullptr && IsNullptrType(source)) && !convertible)
			failure = "a template argument does not convert to its pointer to member parameter's type";
	}
	else if (target->kind == TypeKind::LValueReference)
	{
		const Type* referred = target->element;
		if (entity == nullptr || !source->is_reference())
			failure = "a reference template parameter's argument names no object or function";
		else if (source->element->unqualified != referred->unqualified || (source->element->cv & ~referred->cv) != 0)
			failure = "a reference template parameter's argument of another type";
	}
	else if (entity == nullptr)
	{
		if (!IsNullptrType(source) && source != target &&
			!(source->kind == TypeKind::Pointer &&
				(ConversionRules::qualification_convertible(source, target) ||
					conversions_.function_conversion(source->element, target->element))))
			failure = "a null pointer template argument of another pointer type";
	}
	else
	{
		const Type* pointer = source;
		if (source->is_reference())
		{
			const Type* referred = source->element;
			pointer = referred->kind == TypeKind::Array ? types_.pointer(referred->element)
				: referred->kind == TypeKind::Function  ? types_.pointer(referred)
														: nullptr;
		}
		if (pointer == nullptr)
			failure = "a pointer template parameter's argument is an object without `&`";
		else if (pointer->canonical != target &&
			(target->element->kind == TypeKind::Function
					? !conversions_.function_conversion(pointer->element, target->element)
					: !ConversionRules::qualification_convertible(pointer->canonical, target)))
			failure = "a template argument does not convert to its pointer parameter's type";
	}
	if (failure != nullptr)
	{
		if (fatal)
			error(location, failure);
		return nullptr;
	}
	if (cxx20_ && target->kind == TypeKind::Pointer && source->is_reference() &&
		source->element->kind == TypeKind::Array)
	{
		// The array-to-pointer conversion selects element zero. A direct
		// subscript and a computed pointer designate the same element.
		const SubobjectAddress* array = SubobjectOf(argument);
		return subobject_template_address(target, entity,
			SubobjectAddress{ source->element->element->unqualified, array != nullptr ? array->variant : nullptr,
				array != nullptr ? array->offset : 0, false, entity->type->unqualified, nullptr,
				kUndescribedSubobject });
	}
	if (source->kind != TypeKind::MemberPointer)
		if (const SubobjectAddress* subobject = SubobjectOf(argument))
			return types_.subobject_address(target, entity, *subobject);
	return types_.address(target, entity);
}

ExprFacts* Analyzer::argument_name(const syntax::Expr& expr, const EnumeratorEntity* constant)
{
	// A pointer parameter's name in an instantiation is a prvalue of its
	// argument (14.1p6); a reference parameter's designates the object or
	// function its argument names (an lvalue of the parameter's referred
	// type, which the reference binds directly, 14.3.2p5).
	const Type* argument = constant->argument;
	const Type* type = argument->element;
	if (!type->is_reference())
	{
		ExprFacts* facts = new_facts(expr, type, ValueCategory::PRValue);
		facts->entity = constant;
		if (argument->entity == nullptr)
			facts->flags |= kFolded;
		return facts;
	}
	ExprFacts* facts = new_facts(expr, type->element, ValueCategory::LValue);
	if (SubobjectOf(argument) != nullptr)
	{
		ConstValue* value = arena_.allocate_array<ConstValue>(1);
		*value = ArgumentPointer(argument);
		facts->entity = constant;
		facts->flags |= kImmediateValue;
		facts->immediate = value;
		return facts;
	}
	facts->entity = argument->entity;
	if (argument->entity->kind == EntityKind::Function && !callee_name_)
		odr_use(static_cast<FunctionEntity*>(argument->entity));
	return facts;
}

} // namespace sema
