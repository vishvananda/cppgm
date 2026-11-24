#include "sema/constant_interpreter.h"

#include <algorithm>

#include "sema/aggregates.h"
#include "sema/analyzer.h"
#include "sema/c_initializer.h"
#include "sema/constant_c_array.h"
#include "sema/constant_storage.h"
#include "sema/string_literals.h"
#include "support/small_list.h"

namespace sema {

namespace {

const CInitializerChild* ArraySpan(syntax::Slice<const CInitializerChild> spans, uint64_t index)
{
	if (spans.empty())
		return nullptr;
	const auto* end = spans.end();
	const auto* span = std::upper_bound(
		spans.begin(), end, index, [](uint64_t index, const CInitializerChild& entry) { return index < entry.limit; });
	return span != end && span->index <= index ? span : nullptr;
}

bool MayContainUnion(const Type* type)
{
	while (type->kind == TypeKind::Array)
		type = type->element;
	return ClassOf(type) != nullptr;
}

bool MayChangeVariant(const CInitializerFieldSpans& lane)
{
	if (lane.kind != CInitializerFieldKind::Value)
		return lane.kind != CInitializerFieldKind::PreserveVariant;
	return MayContainUnion(lane.spans()[0].initializer->type);
}

struct UnionEffects
{
	bool preserves, changes;
};

UnionEffects ArrayUnionEffects(const CInitializer& plan)
{
	UnionEffects result{ false, !plan.children.empty() || plan.projection == CInitializerProjection::Rectangles };
	for (const auto& lane : plan.field_spans())
		if (lane.kind == CInitializerFieldKind::PreserveVariant)
			result.preserves = true;
		else if (!result.changes)
			result.changes = MayChangeVariant(lane);
	return result;
}

bool ProvesVariantRanges(const CArrayConstant* source, const CInitializer& plan)
{
	if (source == nullptr || source->same_variants == nullptr)
		return false;
	// This source preserved the same active members that it checked. Reuse
	// those checks when the next copy requires a subset of the same ranges.
	const auto proven = source->initializer->field_spans();
	const auto* prior = proven.begin();
	for (const auto& lane : plan.field_spans())
	{
		if (lane.kind != CInitializerFieldKind::PreserveVariant)
			continue;
		while (prior != proven.end() &&
			(prior->kind != CInitializerFieldKind::PreserveVariant || prior->owner != lane.owner ||
				prior->offset != lane.offset || prior->member != lane.member))
			++prior;
		if (prior == proven.end())
			return false;
		for (const auto& span : lane.spans())
		{
			const auto* covering = ArraySpan(prior->spans(), span.index);
			if (covering == nullptr || covering->limit < span.limit)
				return false;
		}
		++prior;
	}
	return true;
}

bool CanKeepPointUpdate(const CInitializer& plan, bool inherited, bool& changes_variant)
{
	if (plan.projection != CInitializerProjection::None || plan.has_storage_extent ||
		(plan.value != nullptr && !plan.children.empty()))
		return false;
	if (inherited && plan.replaces_value())
	{
		changes_variant |= MayContainUnion(plan.type);
		inherited = false;
	}
	if (plan.children.empty())
		return true;
	const auto* record = ClassOf(plan.type);
	if (inherited && record != nullptr && record->key == TokenKind::KW_UNION)
		return false;
	for (const auto& child : plan.children)
		if ((inherited && plan.type->kind == TypeKind::Array && child.limit - child.index != 1) ||
			!CanKeepPointUpdate(*child.initializer, inherited, changes_variant))
			return false;
	return true;
}

bool KeepPointUpdates(const CInitializer& plan, bool& changes_variant)
{
	const auto needs_source = [](const CInitializerChild& child) { return !child.initializer->replaces_value(); };
	if (plan.children.empty() || std::none_of(plan.children.begin(), plan.children.end(), needs_source))
		return false;
	for (const auto& entry : plan.children)
		if ((needs_source(entry) && entry.limit - entry.index != 1) ||
			!CanKeepPointUpdate(*entry.initializer, true, changes_variant))
			return false;
	return true;
}

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
	if (array.has_layers())
		return c_projected_element(array, type, index, location);
	if (const auto* child = ArraySpan(plan.children, index))
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

ConstantInterpreter::StorageView ConstantInterpreter::c_projected_element(
	const CArrayConstant& array, const Type* type, uint64_t index, uint32_t location, bool check_variants)
{
	const Type* element = type->element;
	SmallList<const CInitializer*, 8> layers;
	const CInitializer* whole = nullptr;
	StorageView source(nullptr, element);
	for (const CArrayConstant* current = &array; current != nullptr; current = current->previous)
	{
		if (check_variants)
			current = current->variant_source();
		if (const ConstValue* patch = PatchedElement(current->patches, type->bound, index))
		{
			source = StorageView(const_cast<ConstValue*>(patch));
			break;
		}
		const CInitializer* plan = current->initializer;
		if (!current->has_layers())
		{
			source = c_array_element(*current, type, index, location);
			break;
		}
		const auto* child = ArraySpan(plan->children, index);
		const bool projected = plan->projection != CInitializerProjection::None;
		if (projected)
			layers.push_back(plan);
		if (child == nullptr)
			continue;
		if (projected || child->initializer->replaces_value())
		{
			whole = child->initializer;
			break;
		}
		layers.push_back(child->initializer);
	}
	if (!source || (layers.empty() && whole == nullptr))
		return source;
	ConstPlace row;
	ConstValue* value = nullptr;
	if (!new_object(element, row, location, ObjectStorage::Prefix) || !locate(row, true, value, location))
		return StorageView();
	const bool saved = c_constexpr_initializer_;
	c_constexpr_initializer_ = true;
	const bool initialized = [&] {
		if (whole != nullptr)
		{
			if (!c_initialize(*whole, row, location))
				return false;
		}
		else if (source.value != nullptr)
			copy_into(*value, *source.value);
		else
			zero_into(*value);
		while (!layers.empty())
		{
			const CInitializer& plan = *layers.back();
			layers.pop_back();
			const bool applied = plan.projection == CInitializerProjection::None
				? c_initialize(plan, row, location, true)
				: c_projected_row(plan, row, index, location);
			if (!applied)
				return false;
		}
		return complete(*value);
	}();
	c_constexpr_initializer_ = saved;
	return StorageView(initialized ? value : nullptr);
}

bool ConstantInterpreter::check_c_array_variants(const CArrayConstant& array, uint32_t location)
{
	const CInitializer& plan = *array.initializer;
	struct Span
	{
		uint64_t first, limit;
	};
	SmallList<Span, 8> required;
	SmallList<uint64_t, 16> edges;
	for (const auto& lane : plan.field_spans())
		if (lane.kind == CInitializerFieldKind::PreserveVariant)
			for (const auto& span : lane.spans())
			{
				required.push_back({ span.index, span.limit });
				edges.push_back(span.index);
				edges.push_back(span.limit);
			}
	if (required.empty())
		return true;
	std::sort(required.begin(), required.end(), [](const Span& a, const Span& b) { return a.first < b.first; });
	const auto bounds = std::minmax_element(edges.begin(), edges.end());
	const uint64_t first = *bounds.first, limit = *bounds.second;
	const auto add_span = [&](uint64_t lo, uint64_t hi) {
		if (lo < limit && first < hi)
		{
			edges.push_back(std::max(first, lo));
			edges.push_back(std::min(limit, hi));
		}
	};
	const auto add_patch = [&](uint64_t lo, uint64_t hi, const ConstValue&) {
		add_span(lo, hi);
		return true;
	};
	// Between these boundaries every row has the same active-member
	// selections. Only visit runs where a PreserveVariant lane needs them.
	for (const auto* version = &array; version != nullptr; version = version->previous)
	{
		version = version->variant_source();
		VisitCArrayPatches(version->patches, 0, plan.type->bound, add_patch);
		if (version->prefix != nullptr)
			for (uint64_t i = first, end = std::min<uint64_t>(version->prefix->count, limit); i <= end; ++i)
				edges.push_back(i);
		if (const auto* init = version->initializer)
		{
			for (const auto& child : init->children)
				add_span(child.index, child.limit);
			for (const auto& lane : init->field_spans())
				if (MayChangeVariant(lane))
					for (const auto& span : lane.spans())
						add_span(span.index, span.limit);
		}
	}
	std::sort(edges.begin(), edges.end());
	const uint64_t* edge = edges.begin();
	const uint64_t* end = std::unique(edges.begin(), edges.end());
	const uint32_t owner = mutable_owner_;
	const uint32_t generation = mutable_generation_;
	for (const auto& span : required)
	{
		while (edge != end && *edge < span.first)
			++edge;
		while (edge != end && *edge < span.limit)
		{
			const Region frame = region();
			const auto value = c_projected_element(array, plan.type, *edge++, location, true);
			mutable_owner_ = owner;
			mutable_generation_ = generation;
			if (!value || !release(frame))
				return false;
		}
	}
	return true;
}

bool ConstantInterpreter::c_projected_row(
	const CInitializer& plan, const ConstPlace& row, uint64_t index, uint32_t location)
{
	if (plan.projection == CInitializerProjection::Rectangles)
	{
		SmallList<CInitializerChild, 8> cells;
		for (const auto& region : plan.rectangles())
			if (region.row <= index && index < region.row_limit)
			{
				CInitializerChild cell{ region.initializer, { nullptr }, region.column };
				cell.limit = region.column_limit;
				cells.push_back(cell);
			}
		if (cells.empty())
			return true;
		ConstValue* value = nullptr;
		const syntax::Slice<const CInitializerChild> columns{ cells.data(), static_cast<uint32_t>(cells.size()) };
		return locate(row, true, value, location) && patch_c_array(*value, row.type, columns, location);
	}
	for (const auto& lane : plan.field_spans())
	{
		const auto* span = ArraySpan(lane.spans(), index);
		if (span == nullptr)
			continue;
		ConstPlace field = row;
		field.offset += static_cast<int64_t>(lane.offset);
		if (lane.kind != CInitializerFieldKind::Value)
		{
			if (!c_select_variant_at(lane, field, location))
				return false;
			continue;
		}
		field.type = lane.member == nullptr ? span->initializer->type : lane.owner;
		if (lane.member != nullptr &&
			!member_slot(field, static_cast<const VariableEntity*>(lane.member->variable), field, location))
			return false;
		if (!c_initialize(*span->initializer, field, location))
			return false;
	}
	return true;
}

ConstantInterpreter::CArrayInitialization ConstantInterpreter::prepare_c_array(
	const CInitializer& plan, const ConstPlace& target, uint32_t location, bool inherited)
{
	inherited = inherited && plan.value == nullptr;
	const bool ordinary = plan.projection == CInitializerProjection::None;
	const bool projected = !ordinary && c_constexpr_initializer_ && plan.value == nullptr &&
		leaves(plan.type, 0) > kArrayExpansionBytes / sizeof(ConstValue);
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
	if (!inherited && !save_plan && !projected && plan.value == nullptr)
		return CArrayInitialization::InPlace;
	ConstValue* storage = nullptr;
	if (!locate(target, true, storage, location))
		return CArrayInitialization::Failed;
	const bool retained = storage->kind == ValueKind::CArrayInitializer;
	if (projected)
	{
		const CArrayConstant* previous = nullptr;
		if (inherited)
		{
			if (retained)
				previous = storage->c_array;
			else if (storage->kind == ValueKind::Array && complete(*storage))
			{
				const ConstValue* prefix = storage->count == 0 ? nullptr : publish(*storage, location);
				if (storage->count != 0 && prefix == nullptr)
					return CArrayInitialization::Failed;
				previous =
					StoreArray(analyzer_.arena_, plan.type, { nullptr, prefix, nullptr, nullptr, nullptr }).c_array;
			}
			else
				return CArrayInitialization::InPlace;
		}
		CArrayConstant next{ &plan, nullptr, nullptr, previous, nullptr };
		const auto effects = ArrayUnionEffects(plan);
		if (effects.preserves && (effects.changes || !ProvesVariantRanges(previous, plan)) &&
			!check_c_array_variants(next, location))
			return CArrayInitialization::Failed;
		if (previous != nullptr && !effects.changes)
			next.same_variants = previous->variant_source();
		*storage = StoreArray(analyzer_.arena_, plan.type, next);
		return CArrayInitialization::Stored;
	}
	if (!inherited)
	{
		if (save_plan)
		{
			*storage = StoreArray(analyzer_.arena_, plan.type, { &plan, nullptr, nullptr, nullptr, nullptr });
			return CArrayInitialization::Stored;
		}
		if (retained && plan.value != nullptr)
			*storage = array_prefix(plan.type);
		return CArrayInitialization::InPlace;
	}
	// Keep the typed subobject write when the source already contains sparse
	// layers. Each update can be retained without reading the older row.
	bool changes_variant = false;
	if (ordinary && retained && c_constexpr_initializer_ && storage->c_array->has_layers() &&
		KeepPointUpdates(plan, changes_variant))
	{
		const auto* source = storage->c_array;
		const auto* variant_source = changes_variant ? nullptr : source->variant_source();
		*storage = StoreArray(analyzer_.arena_, plan.type, { &plan, nullptr, nullptr, source, variant_source });
		return CArrayInitialization::Stored;
	}
	if (ordinary &&
		(retained || (storage->kind == ValueKind::Array && (storage->flags & kArrayTailZero) != 0 && sparse())))
		return patch_c_array(*storage, plan.type, plan.children, location) ? CArrayInitialization::Stored
																		   : CArrayInitialization::Failed;
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

bool ConstantInterpreter::patch_c_array(
	ConstValue& array, const Type* type, syntax::Slice<const CInitializerChild> children, uint32_t location)
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
	updated.same_variants = nullptr;
	Arena& arena = analyzer_.arena_;
	PointerMap repeated;
	std::vector<const CArrayPatch*> values;
	for (const CInitializerChild& child : children)
	{
		const uint32_t prior = child.initializer->repeat_value ? repeated.find(child.initializer)
															   : PointerMap::kMissing;
		const CArrayPatch* patch;
		if (prior == PointerMap::kMissing)
		{
			const ConstValue* value = evaluate_c_array_patch(updated, child, type, location);
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
		updated.patches = AssignPatch(arena, updated.patches, patch, 0, type->bound, child.index, child.limit);
	}
	array = StoreArray(arena, type, updated);
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
