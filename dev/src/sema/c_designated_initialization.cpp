#include "sema/analyzer.h"

#include <algorithm>
#include <functional>

#include "sema/aggregates.h"
#include "sema/c_initializer.h"
#include "sema/c_initializer_intervals.h"

namespace sema {
namespace {

const DataMember* NextInitializableMember(const DataMember* member)
{
	while (member != nullptr && member->bit_field && member->variable->name == nullptr)
		member = member->next;
	return member;
}

struct SubobjectKey
{
	uint32_t group;
	uint64_t index;

	bool operator==(const SubobjectKey& other) const { return group == other.group && index == other.index; }
};

struct SubobjectHash
{
	uint64_t operator()(const SubobjectKey& key) const
	{
		return key.index ^ (uint64_t(key.group) * 0x9e3779b97f4a7c15ull);
	}
};

struct PatchPath
{
	uint64_t index, limit;
	uint32_t suffix;

	bool operator==(const PatchPath& other) const
	{
		return index == other.index && limit == other.limit && suffix == other.suffix;
	}
};

struct PatchPathHash
{
	uint64_t operator()(const PatchPath& path) const
	{
		return path.index ^ (path.limit * 0xc2b2ae3d27d4eb4full) ^ (path.suffix * 0x9e3779b97f4a7c15ull);
	}
};

struct PatchEnd
{
	uint64_t path;
	uint64_t limit;
};

// The two furthest endpoints with distinct coverage paths suffice to
// detect an earlier write whose subobjects a winning patch would discard.
void ExtendPatchEnds(PatchEnd& furthest, PatchEnd& other, PatchEnd write)
{
	if (write.path == furthest.path)
		furthest.limit = std::max(furthest.limit, write.limit);
	else if (write.limit > furthest.limit)
	{
		other = furthest;
		furthest = write;
	}
	else if (write.limit > other.limit)
		other = write;
}

} // namespace

class Analyzer::CInitializerBuilder
{
public:
	explicit CInitializerBuilder(Analyzer& analyzer, Scope* scope) : analyzer_(analyzer), scope_(scope) {}

	bool has_flexible_elements() const { return has_flexible_elements_; }

	const CInitializer* build(const syntax::BracedInitList& list, const Type* type, bool static_flexible)
	{
		location_ = list.location;
		if (!IsSubaggregate(type))
			analyzer_.error(list.location, "a C designator requires an array or complete record");
		if (const ClassEntity* record = ClassOf(type))
			if (!analyzer_.require_complete(record))
				analyzer_.error(list.location, "a C designator requires an array or complete record");
		const size_t first = analyzer_.deferred_uses_.size();
		const uint32_t saved = analyzer_.deferring_;
		analyzer_.deferring_ = ++analyzer_.unevaluated_;
		new_node(type, kNone, 0, nullptr);
		braced(0, list);
		--analyzer_.unevaluated_;
		analyzer_.deferring_ = saved;
		if (analyzer_.failed())
		{
			analyzer_.deferred_uses_.resize(first);
			return nullptr;
		}
		check_flexible(list, static_flexible);
		std::vector<uint8_t> live(analyzer_.deferred_uses_.size() - first);
		const CInitializer* plan = freeze(0, first, live);
		size_t kept = first;
		for (size_t i = 0; i < live.size(); ++i)
			if (live[i] != 0)
				analyzer_.deferred_uses_[kept++] = analyzer_.deferred_uses_[first + i];
		analyzer_.deferred_uses_.resize(kept);
		if (!analyzer_.deferring())
		{
			if (analyzer_.unevaluated_ == 0)
				analyzer_.replay_uses(first);
			analyzer_.deferred_uses_.resize(first);
		}
		return plan;
	}

private:
	enum : uint32_t
	{
		kNone = UINT32_MAX
	};

	struct Node
	{
		const Type* type;
		const syntax::Expr* value;
		const DataMember* member;
		uint64_t index;
		uint64_t count;
		size_t uses_begin, uses_end;
		uint32_t parent, group, first, next, child_count;
		bool starts_value;
		bool has_spans;
		bool repeat_value;
		bool in_range;
	};

	uint32_t new_node(const Type* type, uint32_t parent, uint64_t index, const DataMember* member)
	{
		const uint32_t id = static_cast<uint32_t>(nodes_.size());
		const bool in_range = parent != kNone && (nodes_[parent].in_range || nodes_[parent].repeat_value);
		nodes_.push_back(Node{
			type, nullptr, member, index, 0, 0, 0, parent, ++group_, kNone, kNone, 0, false, false, false, in_range });
		return id;
	}

	void reset(uint32_t node)
	{
		Node& target = nodes_[node];
		target.value = nullptr;
		target.count = 0;
		target.uses_begin = target.uses_end = 0;
		target.group = ++group_;
		target.first = kNone;
		target.child_count = 0;
		target.starts_value = true;
		target.has_spans = false;
	}

	uint32_t child(uint32_t parent, uint64_t index, const DataMember* member)
	{
		const Type* type = nodes_[parent].type;
		const ClassEntity* record = ClassOf(type);
		if (record != nullptr && record->key == TokenKind::KW_UNION && nodes_[parent].first != kNone &&
			nodes_[nodes_[parent].first].index != index)
			reset(parent);
		const SubobjectKey key{ nodes_[parent].group, index };
		const bool reuse = !nodes_[parent].has_spans;
		if (reuse)
			if (const uint32_t* existing = children_.find(key))
				return *existing;
		const Type* child_type = member != nullptr ? member->variable->type : type->element;
		const uint32_t id = new_node(child_type, parent, index, member);
		Node& owner = nodes_[parent];
		nodes_[id].next = owner.first;
		owner.first = id;
		++owner.child_count;
		owner.count = std::max(owner.count, index + 1);
		if (reuse)
			children_.insert(key, id);
		return id;
	}

	uint32_t member_child(uint32_t parent, const DataMember* member)
	{
		return member == nullptr ? kNone : child(parent, member->ordinal, member);
	}

	uint32_t array_child(uint32_t parent, uint64_t index)
	{
		const Type* type = nodes_[parent].type;
		return index >= uint64_t(INT64_MAX) || (type->has_array_bound() && index >= type->bound)
			? kNone
			: child(parent, index, nullptr);
	}

	uint32_t first_child(uint32_t parent)
	{
		const Type* type = nodes_[parent].type;
		if (type->kind == TypeKind::Array)
			return array_child(parent, 0);
		const ClassEntity* record = ClassOf(type);
		return member_child(parent, record != nullptr ? NextInitializableMember(record->members) : nullptr);
	}

	uint32_t successor(uint32_t node, uint32_t root)
	{
		while (node != root)
		{
			const Node target = nodes_[node];
			const Type* type = nodes_[target.parent].type;
			const ClassEntity* record = ClassOf(type);
			if (type->kind == TypeKind::Array)
			{
				const uint64_t index = array_limit(node);
				if (index < uint64_t(INT64_MAX) && (!type->has_array_bound() || index < type->bound))
					return child(last_element_parent(target.parent, root), index, nullptr);
			}
			else if (record->key != TokenKind::KW_UNION)
				if (const DataMember* next = NextInitializableMember(target.member->next))
					return member_child(last_element_parent(target.parent, root), next);
			node = target.parent;
		}
		return kNone;
	}

	uint32_t last_element_parent(uint32_t parent, uint32_t root)
	{
		if (parent == root || (!nodes_[parent].in_range && !nodes_[parent].repeat_value))
			return parent;
		SmallList<uint32_t, 8> suffix;
		uint32_t base = parent;
		for (; base != root && (nodes_[base].in_range || nodes_[base].repeat_value); base = nodes_[base].parent)
			suffix.push_back(base);
		while (!suffix.empty())
		{
			const uint32_t id = suffix.back();
			suffix.pop_back();
			const Node step = nodes_[id];
			base = step.parent == base && !step.repeat_value ? id : child(base, array_limit(id) - 1, step.member);
		}
		return base;
	}

	uint32_t named_child(uint32_t parent, const Identifier* name, uint32_t location)
	{
		const ClassEntity* record = ClassOf(nodes_[parent].type);
		if (record == nullptr)
			analyzer_.error(location, "a member designator requires a record");
		const LookupResult found = analyzer_.names_.own(record->scope, name, LookupFilter::Ordinary);
		if (found.binding == nullptr || found.binding->kind != BindingKind::Variable)
			analyzer_.error(location, "a C designator names no record member");
		const auto* variable = static_cast<const VariableEntity*>(found.binding->entity);
		SmallList<const DataMember*, 4> path;
		while (variable->owner != record->scope)
		{
			const auto* anonymous = static_cast<const ClassEntity*>(variable->owner->entity);
			if (variable->data_member == nullptr || !anonymous->anonymous || anonymous->storage == nullptr)
				analyzer_.error(location, "a C designator names no record member");
			path.push_back(variable->data_member);
			variable = static_cast<const VariableEntity*>(anonymous->storage->entity);
		}
		if (variable->data_member == nullptr)
			analyzer_.error(location, "a C designator names no record member");
		parent = member_child(parent, variable->data_member);
		for (size_t i = path.size(); i != 0; --i)
			parent = member_child(parent, path[i - 1]);
		return parent;
	}

	uint64_t array_limit(uint32_t node)
	{
		return nodes_[node].repeat_value ? *range_limits_.find(node) : nodes_[node].index + 1;
	}

	uint64_t subscript(const Type* type, const syntax::Expr& index)
	{
		if (type->kind != TypeKind::Array)
			analyzer_.error(index.location, "an array designator requires an array");
		Constant value;
		if (analyzer_.typed(index, scope_) == nullptr ||
			!analyzer_.integer_constant_expression(index, scope_, value, false))
			analyzer_.error(index.location, "a C array designator requires an integer constant expression");
		IntegralKind kind;
		if (IntegralKindOf(value.type, kind) && kind.is_signed && static_cast<int64_t>(value.bits) < 0)
			analyzer_.error(index.location, "a C array designator has a negative index");
		if (value.bits >= uint64_t(INT64_MAX) || (type->has_array_bound() && value.bits >= type->bound))
			analyzer_.error(index.location, "a C designator is outside its aggregate");
		return value.bits;
	}

	uint32_t indexed_child(uint32_t parent, const syntax::CDesignator& step)
	{
		const Type* type = nodes_[parent].type;
		const uint64_t first = subscript(type, *step.index);
		if (step.range_end == nullptr)
			return child(parent, first, nullptr);
		const uint64_t last = subscript(type, *step.range_end);
		if (last < first)
			analyzer_.error(step.location, "a C range designator has a decreasing interval");
		if (last == first)
			return child(parent, first, nullptr);
		check_repeated_element(type->element, step.location);
		// Keep preceding point initializers. From this point on every write
		// has its own node, ordered by its ID even when intervals overlap.
		nodes_[parent].has_spans = true;
		nodes_[parent].count = std::max(nodes_[parent].count, last + 1);
		const uint32_t result = child(parent, first, nullptr);
		range_limits_.insert(result, last + 1);
		nodes_[result].repeat_value = true;
		return result;
	}

	void check_repeated_element(const Type* element, uint32_t location)
	{
		if (!IsSubaggregate(element) || analyzer_.c_static_initializer_)
			return;
		const Type* leaf = element;
		while (leaf->kind == TypeKind::Array)
			leaf = leaf->element;
		const ClassEntity* record = ClassOf(leaf);
		if (record != nullptr && record->layout != FactState::Done)
		{
			uint64_t size = 0;
			uint64_t alignment = 0;
			if (!analyzer_.type_size(leaf, size, alignment, location))
				return;
		}
		if ((element->cv & kAtomic) != 0 || (element->kind == TypeKind::Array && (leaf->cv & kVolatile) != 0) ||
			(record != nullptr && record->contains_volatile))
			analyzer_.error(location,
				"range initialization of atomic aggregates or aggregates with volatile subobjects is not yet "
				"supported");
	}

	void braced(uint32_t root, const syntax::BracedInitList& list)
	{
		analyzer_.check_stack(list.location);
		reset(root);
		uint32_t previous = kNone;
		const syntax::CDesignatedEntry* designation = list.c_designators.begin();
		for (uint32_t i = 0; i < list.elements.size && !analyzer_.failed(); ++i)
		{
			uint32_t destination;
			if (designation != list.c_designators.end() && designation->element == i)
			{
				destination = root;
				for (const syntax::CDesignator& step : designation->path)
					destination = step.index == nullptr ? named_child(destination, step.member, step.location)
														: indexed_child(destination, step);
				++designation;
			}
			else
				destination = previous == kNone ? first_child(root) : successor(previous, root);
			const syntax::Expr* value = list.elements[i];
			if (destination == kNone)
				analyzer_.error(value->location, "too many initializers for the aggregate");
			previous = clause(destination, *value);
		}
	}

	const Type* completed_type(const Node& node)
	{
		return node.type->kind == TypeKind::Array && !node.type->has_array_bound() && node.count != 0
			? analyzer_.types_.array(node.type->element, node.count)
			: node.type;
	}

	uint32_t clause(uint32_t destination, const syntax::Expr& value)
	{
		const size_t before = analyzer_.deferred_uses_.size();
		if (value.kind == syntax::ExprKind::BracedInit)
		{
			const auto& list = static_cast<const syntax::BracedInitList&>(value);
			const Type* type = nodes_[destination].type;
			const syntax::Expr* element = list.elements.size == 1 ? list.elements[0] : nullptr;
			const bool string_list = type->kind == TypeKind::Array && IsCharacterArrayElement(type->element) &&
				element != nullptr && !list.has_c_designators &&
				CInitializerOperand(element)->kind == syntax::ExprKind::Literal &&
				analyzer_.typed(*element, scope_) != nullptr && InitializesSubaggregate(type, *element);
			if (IsSubaggregate(type) && !string_list)
			{
				braced(destination, list);
				analyzer_.new_facts(list, completed_type(nodes_[destination]), ValueCategory::LValue);
				return destination;
			}
			analyzer_.list_initialize(list, type, scope_);
			retain(destination, value, before);
			if (type->kind == TypeKind::Array && !type->has_array_bound() && value.facts != nullptr)
				nodes_[destination].count = value.facts->type->bound;
			return destination;
		}
		if (analyzer_.typed(value, scope_) == nullptr)
			return destination;
		const Type* type = nodes_[destination].type;
		while (IsSubaggregate(type) && !InitializesSubaggregate(type, value))
		{
			destination = first_child(destination);
			if (destination == kNone)
				analyzer_.error(value.location, "brace elision of an aggregate with no elements");
			type = nodes_[destination].type;
		}
		syntax::Initializer view = syntax::Initializer();
		view.kind = syntax::InitializerKind::Assign;
		view.expression = const_cast<syntax::Expr*>(&value);
		view.location = value.location;
		analyzer_.initialize_object(type, view, scope_, value.location);
		retain(destination, value, before);
		if (type->kind == TypeKind::Array && !type->has_array_bound())
			nodes_[destination].count = value.facts->type->bound;
		return destination;
	}

	void retain(uint32_t destination, const syntax::Expr& value, size_t before)
	{
		if (!analyzer_.failed() &&
			(analyzer_.c_static_initializer_ ||
				analyzer_.c_legacy_initializer_ == Analyzer::CLegacyInitializer::AutomaticAggregate))
			analyzer_.check_c_static_initializer(value);
		reset(destination);
		Node& node = nodes_[destination];
		node.value = &value;
		node.uses_begin = before;
		node.uses_end = analyzer_.deferred_uses_.size();
	}

	static bool flexible_member(const DataMember* member)
	{
		return member != nullptr && member->variable->type->kind == TypeKind::Array &&
			!member->variable->type->has_array_bound();
	}

	static bool flexible_string(const Node& node)
	{
		if (node.value == nullptr || !IsCharacterArrayElement(node.type->element))
			return false;
		const syntax::Expr* value = CInitializerOperand(node.value);
		if (value->kind == syntax::ExprKind::BracedInit)
		{
			const auto& list = static_cast<const syntax::BracedInitList&>(*value);
			if (list.elements.size != 1 || list.has_c_designators)
				return false;
			value = CInitializerOperand(list.elements[0]);
		}
		return value->kind == syntax::ExprKind::Literal && value->facts->type->kind == TypeKind::Array;
	}

	static uint64_t compound_extent(const Node& node)
	{
		if (node.value == nullptr || node.type->kind != TypeKind::Class)
			return 0;
		const CInitializer* source = CInitializerOf(StaticCompoundInitializer(node.value));
		return source != nullptr ? source->storage_extent() : 0;
	}

	bool in_array(uint32_t id, std::vector<uint8_t>& array_ancestors)
	{
		if (array_ancestors.empty())
		{
			array_ancestors.resize(nodes_.size());
			for (size_t i = 1; i < nodes_.size(); ++i)
			{
				const uint32_t parent = nodes_[i].parent;
				array_ancestors[i] = array_ancestors[parent] || nodes_[parent].type->kind == TypeKind::Array;
			}
		}
		return array_ancestors[id];
	}

	void check_flexible(const syntax::BracedInitList& list, bool static_flexible)
	{
		std::vector<uint8_t> array_ancestors;
		for (uint32_t i = 1; i < nodes_.size(); ++i)
		{
			const Node& node = nodes_[i];
			if (node.count != 0 && flexible_member(node.member))
			{
				if (!static_flexible || node.member->next != nullptr)
					analyzer_.error(list.location,
						"a flexible array member initialized outside the initializer of an object of static storage "
						"duration");
				analyzer_.check_c_flexible_initializer(list.location);
				// Initializing an array element must preserve its stride.
				if (node.parent != 0 &&
					(node.child_count != 0 || !flexible_string(node) || in_array(i, array_ancestors)))
					analyzer_.error(list.location, "initialization of a flexible array member in a nested context");
			}
			else if (compound_extent(node) != 0)
			{
				if (!static_flexible || in_array(i, array_ancestors))
					analyzer_.error(list.location, "initialization of a flexible array member in a nested context");
			}
			else
				continue;
			has_flexible_elements_ = true;
		}
	}

	uint64_t checked_size(const Type* type)
	{
		uint64_t size = 0, alignment = 0;
		if (!analyzer_.type_size(type, size, alignment, location_))
			analyzer_.error(location_, "invalid object size in a flexible array initializer");
		return size;
	}

	uint64_t record_storage_extent(uint32_t id, const Node& node, syntax::Slice<const CInitializerChild> entries)
	{
		uint64_t ordinary = 0;
		uint64_t extent = compound_extent(node);
		const bool is_union = ClassOf(node.type)->key == TokenKind::KW_UNION;
		for (const CInitializerChild& entry : entries)
		{
			const auto& child = *entry.initializer;
			const bool flexible = flexible_member(entry.member) && child.type->has_array_bound();
			const uint64_t child_extent = flexible ? checked_size(child.type) : child.storage_extent();
			if (child_extent == 0)
				continue;
			if (ordinary == 0)
				ordinary = checked_size(node.type);
			// At the root preserve GNU's extension of a direct flexible
			// member past the declared size, including any tail padding.
			const uint64_t offset = id == 0 && flexible ? ordinary : entry.member->offset / 8;
			if (child_extent > uint64_t(INT64_MAX) - offset)
				analyzer_.error(location_, "a flexible array initializer exceeds the maximum object size");
			const uint64_t end = offset + child_extent;
			analyzer_.check_class_size(end, location_);
			if (!is_union)
			{
				const DataMember* next = entry.member->next;
				while (next != nullptr && next->bit_field && next->width == 0)
					next = next->next;
				if (next != nullptr && end > next->offset / 8)
					analyzer_.error(location_, "a nested flexible array initializer overlaps a following member");
			}
			extent = std::max(extent, std::max(ordinary, end));
		}
		return extent;
	}

	const CInitializer* freeze(uint32_t id, size_t first, std::vector<uint8_t>& live, bool inherited = false)
	{
		const Node& node = nodes_[id];
		inherited = node.value != nullptr || (inherited && !node.starts_value);
		for (size_t i = node.uses_begin; i < node.uses_end; ++i)
			live[i - first] = 1;
		if (node.has_spans)
		{
			syntax::Slice<const CInitializerFieldSpans> fields = {};
			syntax::Slice<const CInitializerRectangle> rectangles = {};
			bool nested = false;
			const auto entries = freeze_spans(node, first, live, inherited, fields, rectangles, nested);
			CInitializer* plan;
			CInitializerProjection projection = CInitializerProjection::None;
			if (fields.empty() && rectangles.empty())
				plan = analyzer_.arena_.allocate_array<CInitializer>(1);
			else
			{
				auto* projected = analyzer_.arena_.allocate_array<CInitializerWithSpans>(1);
				if (rectangles.empty())
				{
					projection = nested ? CInitializerProjection::NestedFields : CInitializerProjection::Fields;
					projected->fields = fields;
				}
				else
				{
					projection = CInitializerProjection::Rectangles;
					projected->regions = rectangles;
				}
				plan = projected;
			}
			*plan = CInitializer{ completed_type(node), node.value, entries, node.starts_value, true, node.repeat_value,
				projection, false };
			return plan;
		}
		auto* entries = analyzer_.arena_.allocate_array<CInitializerChild>(node.child_count);
		const bool array = node.type->kind == TypeKind::Array;
		uint32_t count = 0;
		for (uint32_t sub = node.first; sub != kNone; sub = nodes_[sub].next)
		{
			const Node& child = nodes_[sub];
			auto& entry = entries[count++];
			entry = CInitializerChild{ freeze(sub, first, live, inherited), { child.member }, child.index };
			if (array)
				entry.limit = child.index + 1;
		}
		if (count > 1)
			std::sort(entries, entries + count,
				[](const CInitializerChild& left, const CInitializerChild& right) { return left.index < right.index; });
		const syntax::Slice<const CInitializerChild> children{ entries, count };
		const Type* type = completed_type(node);
		const uint64_t extent = has_flexible_elements_ && ClassOf(type) != nullptr
			? record_storage_extent(id, node, children)
			: 0;
		CInitializer* plan;
		if (extent == 0)
			plan = analyzer_.arena_.allocate_array<CInitializer>(1);
		else
		{
			auto* expanded = analyzer_.arena_.allocate_array<CInitializerWithStorageExtent>(1);
			expanded->extent = extent;
			plan = expanded;
		}
		*plan = CInitializer{ type, node.value, children, node.starts_value, false, node.repeat_value,
			CInitializerProjection::None, extent != 0 };
		return plan;
	}

	syntax::Slice<const CInitializerChild> freeze_spans(const Node& node, size_t first, std::vector<uint8_t>& live,
		bool inherited, syntax::Slice<const CInitializerFieldSpans>& fields,
		syntax::Slice<const CInitializerRectangle>& rectangles, bool& nested)
	{
		std::vector<CArrayWrite> writes;
		writes.reserve(node.child_count);
		for (uint32_t sub = node.first; sub != kNone; sub = nodes_[sub].next)
			writes.push_back(CArrayWrite{ nodes_[sub].index, array_limit(sub), sub, sub });
		auto spans = WinningInitializerSpans(writes);
		if (IsSubaggregate(node.type->element) && !independent_spans(writes, spans, inherited))
		{
			if (node.type->element->kind == TypeKind::Array)
				return freeze_rectangular_spans(node, writes, first, live, inherited, rectangles);
			fields = freeze_field_spans(node, writes, spans, first, live, inherited, nested);
		}
		return freeze_interval_values(spans, first, live, inherited, node.type->element);
	}

	syntax::Slice<const CInitializerChild> freeze_interval_values(const std::vector<CArrayWrite>& spans, size_t first,
		std::vector<uint8_t>& live, bool inherited, const Type* zero_type = nullptr, bool row_bases = false)
	{
		auto* entries = analyzer_.arena_.allocate_array<CInitializerChild>(spans.size());
		FlatMap<uint32_t, const CInitializer*, std::hash<uint32_t>> frozen;
		uint32_t count = 0;
		for (const CArrayWrite& span : spans)
		{
			const CInitializer* const* reused = frozen.find(span.value);
			const CInitializer* value;
			if (reused == nullptr)
			{
				if (span.value == kNone)
					value = empty_span(zero_type);
				else if (row_bases)
					value = freeze_row_value(span.value, first, live);
				else
					value = freeze(span.value, first, live, inherited);
				if (spans.size() > 1)
					frozen.insert(span.value, value);
			}
			else
				value = *reused;
			auto& entry = entries[count++];
			entry = CInitializerChild{ value, { nullptr }, span.first };
			entry.limit = span.limit;
		}
		return { entries, count };
	}

	const CInitializer* empty_span(const Type* type)
	{
		auto* plan = analyzer_.arena_.allocate_array<CInitializer>(1);
		*plan = CInitializer{ type, nullptr, {}, true, false, true, CInitializerProjection::None, false };
		return plan;
	}

	const CInitializer* freeze_row_value(uint32_t id, size_t first, std::vector<uint8_t>& live)
	{
		const Node& row = nodes_[id];
		for (size_t i = row.uses_begin; i < row.uses_end; ++i)
			live[i - first] = 1;
		auto* plan = analyzer_.arena_.allocate_array<CInitializer>(1);
		*plan = CInitializer{ row.type, row.value, {}, true, false, true, CInitializerProjection::None, false };
		return plan;
	}

	void rectangle_writes(const Node& node, std::vector<CArrayWrite>& writes, std::vector<CArrayWrite>& whole,
		std::vector<CArrayRectangle>& input)
	{
		const Type* row = node.type->element;
		if (!analyzer_.c_static_initializer_ && qualified_container(node))
			analyzer_.error(location_, "overlapping range initialization of qualified arrays is not yet supported");
		std::sort(
			writes.begin(), writes.end(), [](const CArrayWrite& a, const CArrayWrite& b) { return a.rank < b.rank; });
		SmallList<uint32_t, 8> columns;
		for (const CArrayWrite& write : writes)
		{
			const Node& element = nodes_[write.value];
			if (element.starts_value)
			{
				whole.push_back(write);
				if (row->bound != 0)
					input.push_back({ write.first, write.limit, 0, row->bound, kNone });
			}
			for (uint32_t id = element.first; id != kNone; id = nodes_[id].next)
				columns.push_back(id);
			while (!columns.empty())
			{
				const uint32_t id = columns.back();
				columns.pop_back();
				if (!nodes_[id].starts_value)
					analyzer_.error(
						location_, "a partial overwrite below two ranged array dimensions is not yet supported");
				input.push_back({ write.first, write.limit, nodes_[id].index, array_limit(id), id });
			}
		}
	}

	syntax::Slice<const CInitializerChild> freeze_rectangular_spans(const Node& node, std::vector<CArrayWrite>& writes,
		size_t first, std::vector<uint8_t>& live, bool inherited,
		syntax::Slice<const CInitializerRectangle>& rectangles)
	{
		std::vector<CArrayWrite> whole;
		std::vector<CArrayRectangle> input;
		rectangle_writes(node, writes, whole, input);
		const auto regions = WinningInitializerRectangles(input, kNone);
		auto* entries = analyzer_.arena_.allocate_array<CInitializerRectangle>(regions.size());
		FlatMap<uint32_t, const CInitializer*, std::hash<uint32_t>> frozen;
		uint32_t count = 0;
		for (const CArrayRectangle& region : regions)
		{
			const auto* saved = frozen.find(region.value);
			const auto* plan = saved != nullptr ? *saved : freeze(region.value, first, live, false);
			if (saved == nullptr)
				frozen.insert(region.value, plan);
			entries[count++] = { plan, region.row, region.row_limit, region.column, region.column_limit };
		}
		rectangles = { entries, count };
		auto spans = WinningInitializerSpans(whole);
		if (!inherited)
			spans.erase(std::remove_if(spans.begin(), spans.end(),
							[&](const CArrayWrite& span) { return nodes_[span.value].value == nullptr; }),
				spans.end());
		return freeze_interval_values(spans, first, live, inherited, node.type->element, true);
	}

	bool qualified_container(const Node& node)
	{
		for (const Node* owner = &node; owner != nullptr;
			owner = owner->parent == kNone ? nullptr : &nodes_[owner->parent])
			if ((owner->type->cv & (kVolatile | kAtomic)) != 0)
				return true;
		return false;
	}

	struct FieldPath
	{
		const Type* type;
		const DataMember* member;
		uint64_t offset, index;
		uint32_t parent, first, next, selections;
		std::vector<CArrayWrite> writes;
	};

	struct FieldPaths
	{
		std::vector<FieldPath> paths;
		FlatMap<SubobjectKey, uint32_t, SubobjectHash> children;
		std::vector<std::vector<CArrayWrite>> variants;
	};

	bool expand_fields(const Node& value)
	{
		if (value.value != nullptr || value.has_spans)
			return false;
		if (value.type->kind == TypeKind::Array)
			return true;
		return ClassOf(value.type) != nullptr;
	}

	uint32_t field_path(FieldPaths& fields, uint32_t parent, const Node& child)
	{
		const SubobjectKey key{ parent, child.index };
		if (const uint32_t* saved = fields.children.find(key))
			return *saved;
		const FieldPath& owner = fields.paths[parent];
		uint64_t offset = UINT64_MAX;
		if (child.member == nullptr)
		{
			uint64_t size = 0, alignment = 0;
			if (!analyzer_.type_size(child.type, size, alignment, location_))
				analyzer_.error(location_, "a C range designator names an element without a layout");
			offset = owner.offset + size * child.index;
		}
		const auto id = static_cast<uint32_t>(fields.paths.size());
		fields.paths.push_back(
			{ child.type, child.member, offset, child.index, parent, kNone, owner.first, kNone, {} });
		fields.paths[parent].first = id;
		fields.children.insert(key, id);
		return id;
	}

	void collect_field_write(FieldPaths& fields, uint32_t path, const CArrayWrite& write)
	{
		const Node& value = nodes_[write.value];
		if (value.starts_value)
			fields.paths[path].writes.push_back(write);
		if (!expand_fields(value))
		{
			if (!value.starts_value)
				analyzer_.error(
					location_, "a partial overwrite through an overlapping nested range is not yet supported");
			return;
		}
		if (value.first == kNone)
			return;
		analyzer_.check_stack(location_);
		FieldPath& current = fields.paths[path];
		if (current.offset == UINT64_MAX)
		{
			uint64_t offset = 0;
			if (!analyzer_.member_offset(static_cast<const VariableEntity*>(current.member->variable), offset))
				analyzer_.error(location_, "a C range designator names a member without a layout");
			current.offset = fields.paths[current.parent].offset + offset;
		}
		const ClassEntity* record = ClassOf(value.type);
		if (record != nullptr && record->key == TokenKind::KW_UNION && current.selections == kNone)
		{
			current.selections = static_cast<uint32_t>(fields.variants.size());
			fields.variants.emplace_back();
		}
		const uint32_t selections = current.selections;
		for (uint32_t id = value.first; id != kNone; id = nodes_[id].next)
		{
			const auto child = field_path(fields, path, nodes_[id]);
			if (selections != kNone)
				fields.variants[selections].push_back({ write.first, write.limit, child, write.rank });
			collect_field_write(fields, child, { write.first, write.limit, id, write.rank });
		}
	}

	bool retain_field_values(std::vector<CArrayWrite>& spans, bool inherited)
	{
		bool has_value = false;
		size_t count = 0;
		for (CArrayWrite span : spans)
		{
			if (expand_fields(nodes_[span.value]))
			{
				if (!inherited)
					continue;
				span.value = kNone;
			}
			else
				has_value = true;
			spans[count++] = span;
		}
		spans.resize(count);
		return inherited || has_value;
	}

	struct FieldFreeze
	{
		FieldPaths& fields;
		CInitializerResets& resets;
		std::vector<CInitializerFieldSpans>& lanes;
		std::vector<CArrayWrite> retained;
		size_t first;
		std::vector<uint8_t>& live;
		bool nested;
	};

	void freeze_field_path(
		FieldFreeze& build, uint32_t id, uint32_t ancestors, bool inherited, bool layered, bool through_union)
	{
		FieldPath& path = build.fields.paths[id];
		if (path.first != kNone)
			analyzer_.check_stack(location_);
		std::vector<CArrayWrite> sorted;
		const auto& winners = path.writes.size() <= 1 ? path.writes : (sorted = WinningInitializerSpans(path.writes));
		auto& retained = build.retained;
		retained.clear();
		uint32_t version = ancestors;
		for (const auto& winner : winners)
		{
			build.resets.clip(ancestors, winner, retained);
			if (path.first != kNone)
				version = build.resets.add(version, winner);
		}
		const bool child_inherits = retain_field_values(retained, inherited);
		if (!retained.empty())
		{
			const FieldPath& owner = build.fields.paths[path.parent];
			const uint64_t offset = path.member != nullptr ? owner.offset : path.offset;
			build.nested |= layered;
			const auto spans = freeze_interval_values(retained, build.first, build.live, false, path.type);
			build.lanes.push_back({ path.member, owner.type, offset, spans.data, spans.size,
				CInitializerFieldKind::Value, through_union });
			layered = true;
		}
		freeze_field_children(build, id, version, child_inherits, layered, through_union);
	}

	void variant_lane(
		FieldFreeze& build, uint32_t id, const std::vector<CArrayWrite>& spans, CInitializerFieldKind kind)
	{
		if (spans.empty())
			return;
		const FieldPath& path = build.fields.paths[id];
		const FieldPath& owner = build.fields.paths[path.parent];
		auto* entries = analyzer_.arena_.allocate_array<CInitializerChild>(spans.size());
		uint32_t count = 0;
		for (const auto& span : spans)
		{
			if (count == 0 || entries[count - 1].limit != span.first)
				entries[count++] = { nullptr, { nullptr }, span.first };
			entries[count - 1].limit = span.limit;
		}
		build.lanes.push_back({ path.member, owner.type, owner.offset, entries, count, kind, true });
	}

	void freeze_union_children(
		FieldFreeze& build, const FieldPath& owner, uint32_t ancestors, bool inherited, bool layered)
	{
		auto selections = WinningUnionSelections(build.fields.variants[owner.selections]);
		const auto& paths = build.fields.paths;
		std::sort(
			selections.begin(), selections.end(), [&](const CUnionSelectionSpan& a, const CUnionSelectionSpan& b) {
				if (a.selection.value == b.selection.value)
					return a.selection.first < b.selection.first;
				return paths[a.selection.value].index < paths[b.selection.value].index;
			});
		std::vector<CArrayWrite> allowed, clipped, preserve, clear;
		for (size_t next = 0; next != selections.size();)
		{
			allowed.clear();
			const uint32_t child = selections[next].selection.value;
			do
			{
				const auto& choice = selections[next++];
				clipped.clear();
				build.resets.clip(ancestors, choice.selection, clipped);
				for (auto span : clipped)
				{
					span.rank = choice.different;
					allowed.push_back(span);
				}
			} while (next != selections.size() && selections[next].selection.value == child);
			if (allowed.empty())
				continue;
			if (inherited)
			{
				preserve.clear();
				clear.clear();
				split_union_resets(build.resets, ancestors, allowed, clipped, preserve, clear);
				variant_lane(build, child, preserve, CInitializerFieldKind::PreserveVariant);
				variant_lane(build, child, clear, CInitializerFieldKind::ResetVariant);
				build.nested |= !clear.empty();
			}
			else
				variant_lane(build, child, allowed, CInitializerFieldKind::SelectVariant);
			const uint32_t version = build.resets.restrict_to(ancestors, allowed);
			freeze_field_path(build, child, version, inherited, layered, true);
		}
	}

	static void split_union_resets(const CInitializerResets& resets, uint32_t ancestors,
		const std::vector<CArrayWrite>& allowed, std::vector<CArrayWrite>& clipped, std::vector<CArrayWrite>& preserve,
		std::vector<CArrayWrite>& clear)
	{
		// A later whole-object value supersedes a switch made before it.
		// Otherwise the switch clears inherited bytes before patching.
		for (const auto& span : allowed)
		{
			clipped.clear();
			if (span.rank != 0)
				resets.clip(ancestors, span, clipped);
			uint64_t first = span.first;
			for (const auto& reset : clipped)
			{
				if (first != reset.first)
					preserve.push_back({ first, reset.first, span.value, 0 });
				clear.push_back(reset);
				first = reset.limit;
			}
			if (first != span.limit)
				preserve.push_back({ first, span.limit, span.value, 0 });
		}
	}

	void freeze_field_children(
		FieldFreeze& build, uint32_t parent, uint32_t ancestors, bool inherited, bool layered, bool through_union)
	{
		const auto& paths = build.fields.paths;
		const FieldPath& owner = paths[parent];
		if (owner.selections != kNone)
		{
			freeze_union_children(build, owner, ancestors, inherited, layered);
			return;
		}
		SmallList<uint32_t, 8> sorted;
		for (auto child = owner.first; child != kNone; child = paths[child].next)
			sorted.push_back(child);
		std::sort(
			sorted.begin(), sorted.end(), [&](uint32_t a, uint32_t b) { return paths[a].index < paths[b].index; });
		for (uint32_t id : sorted)
			freeze_field_path(build, id, ancestors, inherited, layered, through_union);
	}

	struct DirectMemberWrite
	{
		const DataMember* member;
		CArrayWrite write;
	};

	bool direct_field_writes(
		const std::vector<CArrayWrite>& writes, std::vector<CArrayWrite>& whole, std::vector<DirectMemberWrite>& direct)
	{
		for (const auto& write : writes)
		{
			const Node& value = nodes_[write.value];
			if (value.starts_value)
				whole.push_back(write);
			if (value.value != nullptr)
				continue;
			for (uint32_t id = value.first; id != kNone; id = nodes_[id].next)
			{
				const Node& field = nodes_[id];
				if (!field.starts_value)
					return false;
				direct.push_back({ field.member, { write.first, write.limit, id, write.rank } });
			}
		}
		return true;
	}

	void freeze_direct_fields(std::vector<DirectMemberWrite>& direct, const Type* owner, CInitializerResets& resets,
		uint32_t version, size_t first, std::vector<uint8_t>& live, std::vector<CInitializerFieldSpans>& lanes)
	{
		std::sort(direct.begin(), direct.end(), [](const DirectMemberWrite& a, const DirectMemberWrite& b) {
			return a.member->ordinal < b.member->ordinal;
		});
		std::vector<CArrayWrite> writes, retained;
		for (size_t begin = 0; begin != direct.size();)
		{
			const DataMember* member = direct[begin].member;
			writes.clear();
			retained.clear();
			do
				writes.push_back(direct[begin++].write);
			while (begin != direct.size() && direct[begin].member == member);
			std::vector<CArrayWrite> sorted;
			const auto& winners = writes.size() == 1 ? writes : (sorted = WinningInitializerSpans(writes));
			for (const auto& winner : winners)
				resets.clip(version, winner, retained);
			if (!retained.empty())
			{
				const auto spans = freeze_interval_values(retained, first, live, false);
				lanes.push_back({ member, owner, 0, spans.data, spans.size, CInitializerFieldKind::Value, false });
			}
		}
	}

	syntax::Slice<const CInitializerFieldSpans> freeze_field_spans(const Node& node,
		const std::vector<CArrayWrite>& writes, std::vector<CArrayWrite>& spans, size_t first,
		std::vector<uint8_t>& live, bool inherited, bool& nested)
	{
		const Type* type = node.type->element;
		const ClassEntity* record = ClassOf(type);
		if (record == nullptr ||
			(!analyzer_.c_static_initializer_ &&
				((type->cv & (kVolatile | kAtomic)) != 0 || qualified_container(node))))
			analyzer_.error(
				location_, "overlapping range initialization of these record elements is not yet supported");
		std::vector<CInitializerFieldSpans> lanes;
		std::vector<CArrayWrite> whole;
		std::vector<DirectMemberWrite> direct;
		if (record->key != TokenKind::KW_UNION && direct_field_writes(writes, whole, direct))
		{
			spans = WinningInitializerSpans(whole);
			CInitializerResets resets(spans, node.count);
			const uint32_t version = resets.root(spans);
			retain_field_values(spans, inherited);
			freeze_direct_fields(direct, type, resets, version, first, live, lanes);
		}
		else
			freeze_nested_fields(writes, spans, type, first, live, inherited, lanes, nested);
		auto* entries = analyzer_.arena_.allocate_array<CInitializerFieldSpans>(lanes.size());
		if (!lanes.empty())
			std::copy(lanes.begin(), lanes.end(), entries);
		return { entries, static_cast<uint32_t>(lanes.size()) };
	}

	void freeze_nested_fields(const std::vector<CArrayWrite>& writes, std::vector<CArrayWrite>& spans, const Type* type,
		size_t first, std::vector<uint8_t>& live, bool inherited, std::vector<CInitializerFieldSpans>& lanes,
		bool& nested)
	{
		FieldPaths fields;
		fields.paths.push_back({ type, nullptr, 0, 0, kNone, kNone, kNone, kNone, {} });
		for (const auto& write : writes)
			collect_field_write(fields, 0, write);
		spans = WinningInitializerSpans(fields.paths[0].writes);
		CInitializerResets resets(writes);
		const uint32_t version = resets.root(spans);
		const bool child_inherits = retain_field_values(spans, inherited);
		FieldFreeze build{ fields, resets, lanes, {}, first, live, false };
		freeze_field_children(build, 0, version, child_inherits, false, false);
		nested = build.nested;
	}

	uint32_t patch_path(uint32_t id)
	{
		const Node& node = nodes_[id];
		if (node.starts_value)
			return 0;
		if (node.first == kNone || (node.child_count != 1 && !node.has_spans))
			return kNone;
		if (const uint32_t* path = node_paths_.find(id))
			return *path;
		const PatchPath key = patch_step(node.first);
		const uint32_t path = key.suffix != kNone && uniform_patch(key, nodes_[node.first].next)
			? intern_patch_path(key)
			: kNone;
		node_paths_.insert(id, path);
		return path;
	}

	PatchPath patch_step(uint32_t id) { return PatchPath{ nodes_[id].index, array_limit(id), patch_path(id) }; }

	bool uniform_patch(const PatchPath& first, uint32_t id)
	{
		for (; id != kNone; id = nodes_[id].next)
			if (!(patch_step(id) == first))
				return false;
		return true;
	}

	uint32_t intern_patch_path(const PatchPath& key)
	{
		const uint32_t* found = patch_paths_.find(key);
		const uint32_t path = found != nullptr ? *found : static_cast<uint32_t>(patch_paths_.size() + 1);
		if (found == nullptr)
			patch_paths_.insert(key, path);
		return path;
	}

	uint64_t write_path(uint32_t id)
	{
		const uint32_t path = patch_path(id);
		// Patches without a single coverage path have not been compared.
		return path == kNone ? uint64_t(kNone) + id : path;
	}

	bool independent_spans(
		const std::vector<CArrayWrite>& writes, const std::vector<CArrayWrite>& spans, bool inherited)
	{
		size_t next = 0;
		PatchEnd furthest = {}, other = {};
		for (const CArrayWrite& span : spans)
		{
			if (nodes_[span.value].starts_value)
				continue;
			if (inherited && nodes_[span.value].repeat_value)
				return false;
			while (next != writes.size() && writes[next].first < span.limit)
			{
				const CArrayWrite& write = writes[next++];
				ExtendPatchEnds(furthest, other, PatchEnd{ write_path(write.value), write.limit });
			}
			const uint64_t different = write_path(span.value) == furthest.path ? other.limit : furthest.limit;
			if (different > span.first)
				return false;
		}
		return true;
	}

	Analyzer& analyzer_;
	Scope* scope_;
	std::vector<Node> nodes_;
	FlatMap<SubobjectKey, uint32_t, SubobjectHash> children_;
	FlatMap<uint32_t, uint64_t, std::hash<uint32_t>> range_limits_;
	FlatMap<uint32_t, uint32_t, std::hash<uint32_t>> node_paths_;
	FlatMap<PatchPath, uint32_t, PatchPathHash> patch_paths_;
	uint32_t group_ = 0;
	uint32_t location_ = 0;
	bool has_flexible_elements_ = false;
};

void Analyzer::c_designated_list(
	const syntax::BracedInitList& list, const Type* type, Scope* scope, bool static_flexible)
{
	CInitializerBuilder builder(*this, scope);
	const CInitializer* plan = builder.build(list, type, static_flexible);
	if (plan == nullptr)
		return;
	ExprFacts* facts = new_facts(list, plan->type, ValueCategory::LValue);
	facts->flags |= kCInitializer;
	if (builder.has_flexible_elements())
		facts->flags |= kFlexibleElements;
	facts->c_initializer = plan;
}

} // namespace sema
