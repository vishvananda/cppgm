#include "sema/constant_interpreter.h"

#include <algorithm>

#include "sema/aggregates.h"
#include "sema/analyzer.h"
#include "sema/c_initializer.h"
#include "sema/constant_c_array.h"
#include "sema/constant_storage.h"
#include "sema/string_literals.h"

namespace sema {

namespace {

const CArrayPatch* AssignPatch(Arena& arena, const CArrayPatch* source, const CArrayPatch* value, uint64_t first,
	uint64_t limit, uint64_t lo, uint64_t hi)
{
	if (lo <= first && limit <= hi)
		return value;
	const uint64_t mid = first + (limit - first) / 2;
	const bool split = source != nullptr && source->value == nullptr;
	const auto* lower = split ? source->lower : source;
	const auto* upper = split ? source->upper : source;
	if (lo < mid)
		lower = AssignPatch(arena, lower, value, first, mid, lo, hi);
	if (hi > mid)
		upper = AssignPatch(arena, upper, value, mid, limit, lo, hi);
	if (lower == upper && (lower == nullptr || lower->value != nullptr))
		return lower;
	auto* node = arena.allocate_array<CArrayPatch>(1);
	*node = CArrayPatch{ nullptr, lower, upper };
	return node;
}

const ConstValue* PatchedElement(const CArrayPatch* patch, uint64_t limit, uint64_t index)
{
	uint64_t first = 0;
	while (patch != nullptr && patch->value == nullptr)
	{
		const uint64_t mid = first + (limit - first) / 2;
		if (index < mid)
		{
			patch = patch->lower;
			limit = mid;
		}
		else
		{
			patch = patch->upper;
			first = mid;
		}
	}
	return patch != nullptr ? patch->value : nullptr;
}

ConstValue StoreArray(Arena& arena, const Type* type, const CArrayConstant& array)
{
	auto* saved = arena.allocate_array<CArrayConstant>(1);
	*saved = array;
	ConstValue result{};
	result.kind = ValueKind::CArrayInitializer;
	result.type = type;
	result.c_array = saved;
	return result;
}

} // namespace

bool ConstantInterpreter::scalar_array(const Type* type)
{
	if (type->kind != TypeKind::Array)
		return false;
	while (type->kind == TypeKind::Array)
		type = type->element;
	return IsScalar(type) || IsComplex(type) || LaneVector(type);
}

ConstValue ConstantInterpreter::array_prefix(const Type* type)
{
	ConstValue value = ConstValue();
	value.kind = ValueKind::Array;
	value.type = type;
	value.flags = kArrayPrefix;
	return value;
}

ConstantInterpreter::StorageView ConstantInterpreter::descend_c_array(
	const ConstValue& array, int64_t offset, const Type* wanted, uint32_t depth)
{
	const Type* type = array.type->element;
	const uint64_t stride = size_of(type, 0);
	if (offset < 0 || stride == 0)
		return StorageView();
	const uint64_t index = static_cast<uint64_t>(offset) / stride;
	if (index >= array.type->bound)
		return StorageView();
	const StorageView selected = c_array_element(*array.c_array, array.type, index, 0);
	if (!selected)
		return StorageView();
	return descend(
		selected.value, type, static_cast<int64_t>(static_cast<uint64_t>(offset) % stride), wanted, false, depth + 1);
}

ConstantInterpreter::StorageView ConstantInterpreter::c_array_element(
	const CArrayConstant& array, const Type* type, uint64_t index, uint32_t location)
{
	if (const auto* value = PatchedElement(array.patches, type->bound, index))
		return StorageView(const_cast<ConstValue*>(value));
	const Type* element = type->element;
	if (array.prefix != nullptr && index < array.prefix->count)
		return StorageView(&array.prefix->elements[index]);
	if (array.initializer == nullptr)
		return StorageView(nullptr, element);
	const CInitializer& plan = *array.initializer;
	const auto* end = plan.children.end();
	const auto* child = std::upper_bound(plan.children.begin(), end, index,
		[](uint64_t index, const CInitializerChild& entry) { return index < entry.limit; });
	if (child != end && child->index <= index)
	{
		ConstPlace object;
		ConstValue* value = nullptr;
		const bool saved = c_constexpr_initializer_;
		c_constexpr_initializer_ = true;
		const bool initialized = new_object(element, object, location, ObjectStorage::Prefix) &&
			c_initialize(*child->initializer, object, location) && locate(object, false, value, location);
		c_constexpr_initializer_ = saved;
		return StorageView(initialized ? value : nullptr);
	}
	if (const auto* literal = CInitializerString(plan.value))
	{
		std::vector<uint64_t> scratch;
		const StringCodeUnits units = ReadStringCodeUnits(*literal, scratch);
		if (index < units.size())
		{
			IntegralKind kind;
			if (!IntegralKindOf(element, kind))
				return StorageView();
			ConstValue* value = arena_.allocate_array<ConstValue>(1);
			*value = IntegerValue(element->unqualified, ConvertIntegral(units[index], kind));
			return StorageView(value);
		}
	}
	return StorageView(nullptr, element);
}

ConstantInterpreter::CArrayInitialization ConstantInterpreter::prepare_c_array(
	const CInitializer& plan, const ConstPlace& target, uint32_t location, bool inherited)
{
	inherited = inherited && plan.value == nullptr;
	const bool ordinary = plan.projection == CInitializerProjection::None;
	// Retain the typed plan when the value would mostly consist of implicit
	// elements. Preserve the inexpensive path for small and dense arrays.
	const auto sparse = [&] {
		if (!c_constexpr_initializer_ || !ordinary || plan.children.empty())
			return false;
		const uint64_t count = leaves(plan.type, 0);
		return count > kArrayExpansionBytes / sizeof(ConstValue) || count >= 32 + uint64_t(plan.children.size) * 4;
	};
	const bool save_plan = !inherited && sparse() &&
		(plan.value == nullptr || CInitializerString(plan.value) != nullptr);
	if (!inherited && !save_plan && plan.value == nullptr)
		return CArrayInitialization::InPlace;
	ConstValue* storage = nullptr;
	if (!locate(target, true, storage, location))
		return CArrayInitialization::Failed;
	const bool retained = storage->kind == ValueKind::CArrayInitializer;
	if (!inherited)
	{
		if (save_plan)
		{
			*storage = StoreArray(analyzer_.arena_, plan.type, CArrayConstant{ &plan, nullptr, nullptr });
			return CArrayInitialization::Stored;
		}
		if (retained && plan.value != nullptr)
			*storage = array_prefix(plan.type);
		return CArrayInitialization::InPlace;
	}
	if (ordinary &&
		(retained || (storage->kind == ValueKind::Array && (storage->flags & kArrayTailZero) != 0 && sparse())))
		return patch_c_array(*storage, plan, location) ? CArrayInitialization::Stored : CArrayInitialization::Failed;
	return CArrayInitialization::InPlace;
}

bool ConstantInterpreter::expand_c_array(ConstValue& array, uint32_t location)
{
	// The existing GNU projection operations write through addressable
	// evaluation storage. Materialize only if it fits their storage budget.
	ConstValue dense = array_prefix(array.type);
	dense.flags |= kArrayTailZero;
	if (!expand_array(dense, array.type, location))
		return false;
	const uint32_t owner = mutable_owner_;
	const uint32_t generation = mutable_generation_;
	for (uint32_t i = 0; i < dense.count; ++i)
	{
		const Region frame = region();
		const StorageView prior = c_array_element(*array.c_array, array.type, i, location);
		mutable_owner_ = owner;
		mutable_generation_ = generation;
		if (!prior)
			return false;
		if (prior.value != nullptr)
			copy_into(dense.elements[i], *prior.value);
		if (!release(frame))
			return false;
	}
	array = dense;
	return true;
}

bool ConstantInterpreter::patch_c_array(ConstValue& array, const CInitializer& plan, uint32_t location)
{
	CArrayConstant updated{};
	if (array.kind == ValueKind::CArrayInitializer)
		updated = *array.c_array;
	else if (array.count != 0)
	{
		updated.prefix = publish(array, location);
		if (updated.prefix == nullptr)
			return false;
	}
	Arena& arena = analyzer_.arena_;
	PointerMap repeated;
	std::vector<const CArrayPatch*> values;
	for (const CInitializerChild& child : plan.children)
	{
		const uint32_t prior = child.initializer->repeat_value ? repeated.find(child.initializer)
															   : PointerMap::kMissing;
		const CArrayPatch* patch;
		if (prior == PointerMap::kMissing)
		{
			const ConstValue* value = evaluate_c_array_patch(updated, child, plan.type, location);
			if (value == nullptr)
				return false;
			auto* leaf = arena.allocate_array<CArrayPatch>(1);
			*leaf = CArrayPatch{ value, nullptr, nullptr };
			patch = leaf;
			if (child.initializer->repeat_value)
			{
				repeated.set(child.initializer, static_cast<uint32_t>(values.size()));
				values.push_back(leaf);
			}
		}
		else
			patch = values[prior];
		updated.patches = AssignPatch(arena, updated.patches, patch, 0, plan.type->bound, child.index, child.limit);
	}
	array = StoreArray(arena, plan.type, updated);
	return true;
}

const ConstValue* ConstantInterpreter::evaluate_c_array_patch(
	const CArrayConstant& source, const CInitializerChild& child, const Type* type, uint32_t location)
{
	const Region frame = region();
	ConstPlace object;
	ConstValue* value = nullptr;
	if (!new_object(type->element, object, location, ObjectStorage::Prefix) || !locate(object, true, value, location))
		return nullptr;
	const CInitializer& plan = *child.initializer;
	const bool inherited = !plan.starts_value && plan.value == nullptr;
	if (inherited)
	{
		const StorageView base = c_array_element(source, type, child.index, location);
		if (!base)
			return nullptr;
		mutable_root(object);
		if (base.value != nullptr)
			copy_into(*value, *base.value);
		else
			zero_into(*value);
	}
	if (!c_initialize(plan, object, location, inherited) || !complete(*value))
		return nullptr;
	const ConstValue* result = publish(*value, location);
	return release(frame) ? result : nullptr;
}

bool ConstantInterpreter::zero_array_tail(const Type* type, uint32_t depth)
{
	while (type->kind == TypeKind::Array)
		type = type->element;
	if (type->is_reference() || depth > 64)
		return false;
	const ClassEntity* cls = ClassOf(type);
	if (cls == nullptr)
		return true;
	if (!IsAggregateClass(cls))
		return cls->default_constructor != nullptr && cls->default_constructor->trivial &&
			!cls->default_constructor->deleted;
	if (zero_array_classes_.find(cls) != PointerMap::kMissing)
		return true;
	for (const BaseClass* base = cls->bases; base != nullptr; base = base->next)
		if (!zero_array_tail(base->base->type, depth + 1))
			return false;
	for (const DataMember* member = cls->members; member != nullptr; member = member->next)
	{
		if (member->variable->kind != EntityKind::Variable || (member->bit_field && member->variable->name == nullptr))
			continue;
		if (static_cast<const VariableEntity*>(member->variable)->member_initializer != nullptr)
			return false;
		const bool zero = zero_array_tail(member->variable->type, depth + 1);
		if (!zero)
			return false;
		if (cls->key == TokenKind::KW_UNION)
			break;
	}
	zero_array_classes_.set(cls, 1);
	return true;
}

const DataMember* ConstantInterpreter::first_zero_member(const ClassEntity* cls)
{
	for (const DataMember* member = cls->members; member != nullptr; member = member->next)
		if (member->variable->kind == EntityKind::Variable && (!member->bit_field || member->variable->name != nullptr))
			return member;
	return nullptr;
}

bool ConstantInterpreter::expand_array(ConstValue& array, const Type* type, uint32_t location)
{
	// Writes and representation queries may need actual storage. Keep the
	// existing evaluation budget when turning a prefix into a dense value.
	if (leaves(type, 0) > kArrayExpansionBytes / sizeof(ConstValue))
		return fail(location, "constant evaluation exceeds its storage budget");
	retain_mutable_allocation();
	ConstValue dense = skeleton(type, true);
	if (steps_ >= step_limit_)
		return fail(location, "constant evaluation exceeds its storage budget");
	for (uint32_t i = 0; i < dense.count; ++i)
	{
		if (i < array.count)
			copy_into(dense.elements[i], array.elements[i]);
		else if ((array.flags & kArrayTailZero) != 0)
			zero_into(dense.elements[i]);
	}
	array = dense;
	return true;
}

ConstValue* ConstantInterpreter::zero_storage(const Type* type)
{
	// A read creates only its value. Its address remains the original
	// place's root/offset, retaining distinct object and element identities.
	if (!step(0))
		return nullptr;
	ConstValue* zero = static_cast<ConstValue*>(arena_.allocate(sizeof(ConstValue), alignof(ConstValue)));
	// The layout projection already proved this subtree zero. Request its
	// zero template directly rather than constructing an unknown one first.
	if (type->unqualified->kind == TypeKind::Complex)
	{
		// Two scalar parts are cheaper than a template lookup and live in
		// this read's scratch region; copying them preserves the place's
		// original identity and never leaves a caller pointing into scratch.
		*zero = skeleton(type);
		zero_into(*zero);
	}
	else
		*zero = prefix_value(type, 0, true);
	if (steps_ >= step_limit_)
		return nullptr;
	return zero;
}

bool ConstantInterpreter::aggregate_array(
	const Type* type, const ConstPlace& target, const syntax::BracedInitList& list, uint32_t& next, uint32_t location)
{
	ConstValue* value = nullptr;
	if (!locate(target, true, value, location))
		return false;
	const bool prefix = (value->flags & kArrayPrefix) != 0;
	uint64_t count = type->bound;
	if (prefix)
	{
		const uint64_t remaining = next < list.elements.size ? list.elements.size - next : 0;
		count = std::min(count, remaining);
		const uint64_t capacity = std::min(type->bound, remaining + 1);
		if (capacity > kValueBudget || capacity > step_limit_ - steps_)
			return fail(location, "constant evaluation exceeds its storage budget");
		value->count = 0;
		// Outside a call, scratch already spans the whole initialization.
		// Inside a call, a root array is also allocated before its elements'
		// calls. A caller-owned member needs storage surviving this call.
		Arena* storage = &arena_;
		if (frames_.size() != first_frame_)
		{
			const Type* root = nullptr;
			if (!root_type(target, root, location))
				return false;
			if (target.offset != 0 || root->unqualified != type->unqualified)
			{
				retain_mutable_allocation();
				storage = &class_storage().mutable_arena;
			}
		}
		value->elements = storage->allocate_array<ConstValue>(static_cast<uint32_t>(capacity));
	}
	const uint64_t size = size_of(type->element, location);
	auto initialize = [&](uint64_t index) {
		if (prefix && index >= value->count)
		{
			value->elements[index] = prefix_skeleton(type->element, 0);
			value->count = static_cast<uint32_t>(index + 1);
			if (steps_ >= step_limit_)
				return fail(location, "constant evaluation exceeds its storage budget");
		}
		ConstPlace place = target;
		place.offset += static_cast<int64_t>(index * size);
		place.type = type->element;
		return aggregate_element(type->element, place, list, next, location);
	};
	uint64_t made = 0;
	while (made < count)
	{
		if (!initialize(made))
			return false;
		++made;
		if (prefix && next >= list.elements.size)
			break;
	}
	if (prefix)
	{
		if (made < type->bound && !zero_array_tail(type->element, 0))
		{
			// Try one omitted object before allocating the remaining extent.
			// A runtime default/argument fails softly in this small prefix.
			if (!initialize(made++))
				return false;
			value->count = static_cast<uint32_t>(made);
			mutable_root(target);
			if (!expand_array(*value, type, location))
				return false;
			while (made < type->bound)
				if (!initialize(made++))
					return false;
			return true;
		}
		value->count = static_cast<uint32_t>(made);
		value->flags |= kArrayTailZero;
	}
	return true;
}

} // namespace sema
