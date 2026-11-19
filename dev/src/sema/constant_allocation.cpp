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
	const uint64_t values = leaves(type, 0);
	ConstantStorage& storage = class_storage();
	if (values > kValueBudget - storage.heap_values)
		return fail(expr.location, "constant allocation exceeds the constant evaluation storage budget");

	// Allocation storage survives every lexical region and call within
	// this evaluation. The generation identifies the allocated object
	// independently of the would-be runtime allocator address.
	const uint32_t index = static_cast<uint32_t>(storage.heap.size());
	const uint32_t generation = ++stacks_.generation;
	ConstPlace place{};
	place.root = RootKind::Allocation;
	place.object = index;
	place.generation = generation;
	place.type = type;
	mutable_root(place);
	retain_mutable_allocation();
	auto* value = static_cast<ConstValue*>(storage.mutable_arena.allocate(sizeof(ConstValue), alignof(ConstValue)));
	*value = skeleton(type, true);
	storage.heap.push_back(ConstAllocation{ value, type, generation, expr.count != nullptr });
	storage.heap_values += values;
	++storage.live_allocations;
	if (count != 0 && !construct(type, place, expr.initializer, expr.constructor, expr.location))
		return false;
	if (count == 0 && expr.initializer != nullptr && expr.initializer->kind == syntax::InitializerKind::Braced &&
		!static_cast<const syntax::BracedInitList*>(expr.initializer->expression)->elements.empty())
		return fail(expr.location, "an array allocation has more initializers than elements");
	place.type = element;
	place.flags = count == 0 ? kPastEnd : 0;
	out = PointerTo(place, pointer);
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
	if (allocation->array != expr.array)
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

} // namespace sema
