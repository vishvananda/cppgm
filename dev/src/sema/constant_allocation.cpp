#include <cstring>

#include "lex/identifier_table.h"
#include "sema/analyzer.h"
#include "sema/constant_interpreter.h"
#include "sema/constant_storage.h"

namespace sema {

ConstAllocation* ConstantInterpreter::allocation_at(const ConstPlace& place, uint32_t location)
{
	if (storage_ != nullptr && place.object < storage_->heap.size())
	{
		ConstAllocation& allocation = storage_->heap[place.object];
		if (allocation.value != nullptr && allocation.generation == place.generation)
			return &allocation;
	}
	fail(location, "an access to a constant allocation whose lifetime has ended");
	return nullptr;
}

bool ConstantInterpreter::allocation_value(const syntax::NewExpr& expr, ConstValue& out)
{
	if (expr.has_placement && cxx20_)
		return placement_value(expr, out);
	const auto* allocation = static_cast<const FunctionEntity*>(expr.facts->entity);
	const Type* signature = allocation->type->canonical;
	if (!analyzer_.cxx20_ || allocation->owner != analyzer_.graph_.global || expr.has_placement ||
		signature->variadic || signature->param_count != (expr.implicit_alignment != 0 ? 2u : 1u))
		return fail(expr.location, "constant allocation requires a replaceable global allocation function");

	const Type* pointer = expr.facts->type->unqualified;
	const Type* element = pointer->element;
	const Type* type = element;
	uint64_t count = 1;
	if (expr.count != nullptr)
	{
		ConstValue bound;
		if (!operand(*expr.count, bound))
			return false;
		if (bound.kind != ValueKind::Integer || WideOf(bound) > kValueBudget)
			return fail(expr.location, "an array allocation exceeds the constant evaluation storage budget");
		count = bound.bits;
		type = analyzer_.types_.array(element, count, nullptr);
	}
	ConstPlace place;
	const auto kind = expr.count != nullptr ? ConstAllocationKind::Array : ConstAllocationKind::Object;
	if (!allocate_storage(type, kind, place, expr.location) ||
		(count != 0 && !construct(type, place, expr.initializer, expr.constructor, expr.location)))
		return false;
	if (count == 0 && expr.initializer != nullptr && expr.initializer->kind == syntax::InitializerKind::Braced &&
		!static_cast<const syntax::BracedInitList*>(expr.initializer->expression)->elements.empty())
		return fail(expr.location, "an array allocation has more initializers than elements");
	place.type = element;
	place.flags = count == 0 ? kPastEnd : 0;
	out = PointerTo(place, pointer);
	return true;
}

bool ConstantInterpreter::allocate_storage(
	const Type* type, ConstAllocationKind kind, ConstPlace& place, uint32_t location)
{
	const uint64_t values = kind == ConstAllocationKind::Allocator ? type->bound + 1 : leaves(type, 0);
	ConstantStorage& storage = class_storage();
	if (values > kValueBudget - storage.heap_values)
		return fail(location, "constant allocation exceeds the constant evaluation storage budget");

	// Allocation storage survives every lexical region and call within
	// this evaluation. The generation identifies the allocated object
	// independently of the would-be runtime allocator address.
	const uint32_t index = static_cast<uint32_t>(storage.heap.size());
	const uint32_t generation = ++stacks_.generation;
	place = ConstPlace{};
	place.root = RootKind::Allocation;
	place.object = index;
	place.generation = generation;
	place.type = type;
	mutable_root(place);
	retain_mutable_allocation();
	auto* value = static_cast<ConstValue*>(storage.mutable_arena.allocate(sizeof(ConstValue), alignof(ConstValue)));
	if (kind == ConstAllocationKind::Allocator)
	{
		// [allocator.members]: the enclosing array is alive. Its typed
		// elements have storage but do not begin their lifetimes here.
		*value = ConstValue{};
		value->kind = ValueKind::Array;
		value->type = type;
		value->count = static_cast<uint32_t>(type->bound);
		value->elements = storage.mutable_arena.allocate_array<ConstValue>(value->count);
		for (uint32_t i = 0; i < value->count; ++i)
		{
			ConstValue& element = value->elements[i];
			element = ConstValue{};
			element.kind = ValueKind::OutsideLifetime;
			element.type = type->element;
		}
	}
	else
		*value = skeleton(type, true);
	storage.heap.push_back(ConstAllocation{ value, type, generation, kind });
	storage.heap_values += values;
	++storage.live_allocations;
	return true;
}

bool ConstantInterpreter::deallocate_value(const syntax::DeleteExpr& expr)
{
	if (!analyzer_.cxx20_)
		return fail(expr.location, "constant deallocation requires C++20");
	ConstValue pointer;
	if (!operand(*expr.operand, pointer))
		return false;
	if (pointer.kind != ValueKind::Pointer)
		return fail(expr.location, "constant deallocation requires a pointer");
	if (pointer.root == RootKind::Null)
		return true;
	const auto* function = static_cast<const FunctionEntity*>(expr.facts->entity);
	if (pointer.root != RootKind::Allocation || pointer.address.offset != 0 || (pointer.flags & kInvalidView) != 0 ||
		function->owner != analyzer_.graph_.global)
		return fail(expr.location, "constant deallocation requires a pointer returned by constant allocation");
	const Type* pointed = pointer.type->element;
	ConstAllocation* allocation = allocation_at(PlaceOf(pointer, pointed), expr.location);
	if (allocation == nullptr)
		return false;
	const auto kind = expr.array ? ConstAllocationKind::Array : ConstAllocationKind::Object;
	if (allocation->kind != kind)
		return fail(expr.location, "constant allocation and deallocation use different forms of new and delete");
	const Type* allocated = expr.array ? allocation->type->element : allocation->type;
	if (allocated->unqualified != pointed->unqualified)
		return fail(expr.location, "constant deallocation through an unrelated pointer type");
	ConstPlace object = PlaceOf(pointer, allocation->type);
	object.flags &= ~kPastEnd;
	if (!destroy(object, expr.location))
		return false;
	// The destructor can add an allocation and move the table's entries.
	allocation = allocation_at(object, expr.location);
	if (allocation == nullptr)
		return false;
	allocation->value = nullptr;
	--storage_->live_allocations;
	return true;
}

const Type* ConstantInterpreter::allocator_element(TokenKind operation) const
{
	if (!cxx20_ || frames_.size() == first_frame_)
		return nullptr;
	const FunctionEntity* caller = frames_.back().function;
	if (caller == nullptr || caller->name == nullptr || caller->owner->kind != ScopeKind::Class)
		return nullptr;
	const bool allocate = operation == TokenKind::KW_NEW;
	const char* member = allocate ? "allocate" : "deallocate";
	if (std::strcmp(caller->name->spelling, member) != 0 ||
		caller->type->canonical->param_count != (allocate ? 1u : 2u))
		return nullptr;
	const auto* owner = static_cast<const ClassEntity*>(caller->owner->entity);
	const ClassTemplateFacts* specialization = owner->templ;
	if (specialization == nullptr || specialization->role != TemplateRole::Specialization ||
		specialization->argument_count != 1)
		return nullptr;
	const ClassEntity* primary = specialization->pattern;
	return primary != nullptr && primary->name != nullptr && std::strcmp(primary->name->spelling, "allocator") == 0 &&
			analyzer_.in_std(primary)
		? specialization->arguments[0]
		: nullptr;
}

bool ConstantInterpreter::allocator_operation(
	const FunctionEntity* function, const Argument* arguments, uint32_t count, Result& result, uint32_t location)
{
	const Type* element = allocator_element(function->operator_token);
	const Type* signature = function->type->canonical;
	if (element == nullptr || !analyzer_.literal_type(element) || function->operator_array ||
		function->primary != nullptr || function->templated || signature->variadic || count != signature->param_count ||
		count == 0 || count > 2 || (count == 2 && signature->params[1]->unqualified != analyzer_.alignment_type()))
		return fail(location, "a call of a function that is not constexpr");
	ConstValue argument;
	if (!arguments[0].valued)
	{
		if (arguments[0].expr == nullptr || !converted(*arguments[0].expr, arguments[0].conversion, argument))
			return false;
	}
	else
		argument = arguments[0].value;
	if (count == 2)
	{
		// Evaluate the optional alignment argument for its side effects.
		ConstValue alignment;
		if (!arguments[1].valued &&
			(arguments[1].expr == nullptr || !converted(*arguments[1].expr, arguments[1].conversion, alignment)))
			return false;
	}
	if (function->operator_token == TokenKind::KW_NEW)
	{
		const uint64_t size = size_of(element, location);
		if (argument.kind != ValueKind::Integer || size == 0 || WideOf(argument) / size > kValueBudget ||
			WideOf(argument) % size != 0)
			return fail(location, "invalid size for a constant allocator allocation");
		const uint64_t bound = argument.bits / size;
		const Type* array = analyzer_.types_.array(element, bound, nullptr);
		ConstPlace place;
		if (!allocate_storage(array, ConstAllocationKind::Allocator, place, location))
			return false;
		place.type = element;
		place.flags = bound == 0 ? kPastEnd : 0;
		result.value = PointerTo(place, signature->element);
		return true;
	}
	if (argument.kind != ValueKind::Pointer || argument.root != RootKind::Allocation || argument.address.offset != 0 ||
		(argument.flags & kInvalidView) != 0)
		return fail(location, "constant allocator deallocation requires the original storage pointer");
	ConstAllocation* allocation = allocation_at(PlaceOf(argument, element), location);
	if (allocation == nullptr)
		return false;
	if (allocation->kind != ConstAllocationKind::Allocator || allocation->type->element != element)
		return fail(location, "constant allocator deallocation through an unrelated element type");
	ConstValue size;
	if (!read(locals_[frames_.back().first_local + 1].place, size, location))
		return false;
	if (size.kind != ValueKind::Integer || WideOf(size) != allocation->type->bound)
		return fail(location, "constant allocator deallocation with a different element count");
	allocation->value = nullptr;
	--storage_->live_allocations;
	return true;
}

bool ConstantInterpreter::allocator_cast(const ConstValue& value, const Type* target, uint32_t location)
{
	const Type* element = allocator_element(TokenKind::KW_NEW);
	if (element == nullptr || target->element->unqualified != element->unqualified ||
		value.root != RootKind::Allocation || value.address.offset != 0)
		return false;
	const ConstAllocation* allocation = allocation_at(PlaceOf(value, element), location);
	return allocation != nullptr && allocation->kind == ConstAllocationKind::Allocator &&
		allocation->type->element == element;
}

bool ConstantInterpreter::placement_value(const syntax::NewExpr& expr, ConstValue& out)
{
	const auto* allocation = static_cast<const FunctionEntity*>(expr.facts->entity);
	const Type* signature = allocation->type->canonical;
	const FunctionEntity* caller = frames_.size() > first_frame_ ? frames_.back().function : nullptr;
	const Type* pointer = expr.facts->type->unqualified;
	const Type* element = pointer->element;
	if (caller == nullptr || caller->name == nullptr || std::strcmp(caller->name->spelling, "construct_at") != 0 ||
		!analyzer_.in_std(caller) || caller->type->canonical->param_count == 0 ||
		caller->type->canonical->params[0]->unqualified != pointer || element->cv != 0 ||
		allocation->owner != analyzer_.graph_.global || allocation->primary != nullptr || allocation->templated ||
		signature->variadic || signature->param_count != 2 || expr.placement.size != 1 ||
		signature->params[1]->unqualified->kind != TypeKind::Pointer || !IsVoid(signature->params[1]->element))
		return fail(expr.location, "placement new outside constant std::construct_at");
	// [specialized.construct] and LWG 3436: bounded array overloads
	// may use placement array-new with a single array element.
	if (expr.count != nullptr)
	{
		ConstValue count;
		if (!operand(*expr.count, count))
			return false;
		if (element->kind != TypeKind::Array || count.kind != ValueKind::Integer || WideOf(count) != 1)
			return fail(expr.location, "invalid array construction in constant std::construct_at");
	}
	ConstValue address;
	if (!operand(*expr.placement[0], address))
		return false;
	if (address.kind != ValueKind::Pointer ||
		(address.root != RootKind::Allocation &&
			!(address.root == RootKind::Object && address.count >= first_object_) &&
			!(address.root == RootKind::Variable && address.address.entity == constructing_)))
		return fail(expr.location, "std::construct_at requires storage within the constant evaluation");
	ConstPlace place = PlaceOf(address, element);
	const Type* root = nullptr;
	if (!root_type(place, root, expr.location))
		return false;
	if ((root->cv & kConst) != 0)
		return fail(expr.location, "constructing an object in constant storage with const-qualified type");
	ConstValue* slot = nullptr;
	if (!locate(place, true, slot, expr.location))
		return false;
	mutable_root(place);
	retain_mutable_allocation();
	*slot = skeleton(element, true);
	if (!construct(element, place, expr.initializer, expr.constructor, expr.location))
		return false;
	out = PointerTo(place, pointer);
	return true;
}

} // namespace sema
