#include "sema/analyzer.h"

#include <algorithm>
#include <functional>

#include "sema/aggregates.h"
#include "sema/c_initializer.h"

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

struct ArrayWrite
{
	uint64_t first, limit;
	uint32_t node;
};

// Sweep in index order. The heap orders active writes by source order,
// retaining a write until it can no longer win any later span.
std::vector<ArrayWrite> WinningSpans(std::vector<ArrayWrite>& writes)
{
	std::sort(writes.begin(), writes.end(), [](const ArrayWrite& a, const ArrayWrite& b) { return a.first < b.first; });
	const auto earlier = [](const ArrayWrite& a, const ArrayWrite& b) { return a.node < b.node; };
	std::vector<ArrayWrite> active;
	std::vector<ArrayWrite> result;
	size_t next = 0;
	uint64_t index = 0;
	while (next != writes.size() || !active.empty())
	{
		if (active.empty())
			index = writes[next].first;
		while (next != writes.size() && writes[next].first <= index)
		{
			active.push_back(writes[next++]);
			std::push_heap(active.begin(), active.end(), earlier);
		}
		while (!active.empty() && active.front().limit <= index)
		{
			std::pop_heap(active.begin(), active.end(), earlier);
			active.pop_back();
		}
		if (active.empty())
			continue;
		const ArrayWrite& winner = active.front();
		const uint64_t limit = next == writes.size() ? winner.limit : std::min(winner.limit, writes[next].first);
		if (!result.empty() && result.back().node == winner.node && result.back().limit == index)
			result.back().limit = limit;
		else
			result.push_back(ArrayWrite{ index, limit, winner.node });
		index = limit;
	}
	return result;
}

} // namespace

class Analyzer::CInitializerBuilder
{
public:
	explicit CInitializerBuilder(Analyzer& analyzer, Scope* scope) : analyzer_(analyzer), scope_(scope) {}

	const CInitializer* build(const syntax::BracedInitList& list, const Type* type)
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
		check_flexible(list);
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
	};

	uint32_t new_node(const Type* type, uint32_t parent, uint64_t index, const DataMember* member)
	{
		const uint32_t id = static_cast<uint32_t>(nodes_.size());
		nodes_.push_back(
			Node{ type, nullptr, member, index, 0, 0, 0, parent, ++group_, kNone, kNone, 0, false, false, false });
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
			uint32_t next = kNone;
			if (type->kind == TypeKind::Array)
				next = array_child(target.parent, array_limit(node));
			else if (record->key != TokenKind::KW_UNION)
				next = member_child(target.parent, NextInitializableMember(target.member->next));
			if (next != kNone)
				return next;
			node = target.parent;
		}
		return kNone;
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

	uint32_t indexed_child(uint32_t parent, const syntax::CDesignator& step, bool terminal)
	{
		const Type* type = nodes_[parent].type;
		const uint64_t first = subscript(type, *step.index);
		if (step.range_end == nullptr)
			return child(parent, first, nullptr);
		const uint64_t last = subscript(type, *step.range_end);
		if (last < first)
			analyzer_.error(step.location, "a C range designator has a decreasing interval");
		if (!terminal)
			analyzer_.error(step.location, "C range designators currently require a whole array element");
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
					destination = step.index == nullptr
						? named_child(destination, step.member, step.location)
						: indexed_child(destination, step, &step + 1 == designation->path.end());
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
			if (nodes_[destination].repeat_value)
				analyzer_.error(value.location, "a C range initializer currently requires a whole aggregate value");
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
		if (!analyzer_.failed() && analyzer_.c_static_initializer_)
			analyzer_.check_c_static_initializer(value);
		reset(destination);
		Node& node = nodes_[destination];
		node.value = &value;
		node.uses_begin = before;
		node.uses_end = analyzer_.deferred_uses_.size();
	}

	void check_flexible(const syntax::BracedInitList& list)
	{
		for (uint32_t i = 1; i < nodes_.size(); ++i)
		{
			const Node& node = nodes_[i];
			if (node.member == nullptr || node.member->variable->type->kind != TypeKind::Array ||
				node.member->variable->type->has_array_bound() || node.count == 0)
				continue;
			if (!analyzer_.hosted_ || node.member->next != nullptr || node.parent != 0 ||
				&list != analyzer_.flexible_list_)
				analyzer_.error(list.location,
					"a flexible array member initialized outside the initializer of an object of static storage "
					"duration");
			analyzer_.flexible_given_ = true;
		}
	}

	const CInitializer* freeze(uint32_t id, size_t first, std::vector<uint8_t>& live)
	{
		const Node& node = nodes_[id];
		for (size_t i = node.uses_begin; i < node.uses_end; ++i)
			live[i - first] = 1;
		if (node.has_spans)
		{
			const auto entries = freeze_spans(node, first, live);
			auto* plan = analyzer_.arena_.allocate_array<CInitializer>(1);
			*plan = CInitializer{ completed_type(node), node.value, entries, node.starts_value, true,
				node.repeat_value };
			return plan;
		}
		auto* entries = analyzer_.arena_.allocate_array<CInitializerChild>(node.child_count);
		const bool array = node.type->kind == TypeKind::Array;
		uint32_t count = 0;
		for (uint32_t sub = node.first; sub != kNone; sub = nodes_[sub].next)
		{
			const Node& child = nodes_[sub];
			auto& entry = entries[count++];
			entry = CInitializerChild{ freeze(sub, first, live), { child.member }, child.index };
			if (array)
				entry.limit = child.index + 1;
		}
		if (count > 1)
			std::sort(entries, entries + count,
				[](const CInitializerChild& left, const CInitializerChild& right) { return left.index < right.index; });
		auto* plan = analyzer_.arena_.allocate_array<CInitializer>(1);
		*plan = CInitializer{ completed_type(node), node.value, { entries, count }, node.starts_value, false,
			node.repeat_value };
		return plan;
	}

	syntax::Slice<const CInitializerChild> freeze_spans(const Node& node, size_t first, std::vector<uint8_t>& live)
	{
		std::vector<ArrayWrite> writes;
		writes.reserve(node.child_count);
		for (uint32_t sub = node.first; sub != kNone; sub = nodes_[sub].next)
			writes.push_back(ArrayWrite{ nodes_[sub].index, array_limit(sub), sub });
		const auto spans = WinningSpans(writes);
		if (IsSubaggregate(node.type->element))
			check_aggregate_spans(writes, spans);
		auto* entries = analyzer_.arena_.allocate_array<CInitializerChild>(spans.size());
		FlatMap<uint32_t, const CInitializer*, std::hash<uint32_t>> frozen;
		uint32_t count = 0;
		for (const ArrayWrite& span : spans)
		{
			const CInitializer* const* reused = frozen.find(span.node);
			const CInitializer* value = reused != nullptr ? *reused : freeze(span.node, first, live);
			if (reused == nullptr)
				frozen.insert(span.node, value);
			auto& entry = entries[count++];
			entry = CInitializerChild{ value, { nullptr }, span.first };
			entry.limit = span.limit;
		}
		return { entries, count };
	}

	void check_aggregate_spans(const std::vector<ArrayWrite>& writes, const std::vector<ArrayWrite>& spans)
	{
		// A partial update needs to compose with older coverage rather than
		// replace the whole element. The second largest end in the prefix
		// tells whether another write covered the winning point.
		size_t next = 0;
		uint64_t largest_end = 0;
		uint64_t second_end = 0;
		for (const ArrayWrite& span : spans)
		{
			if (nodes_[span.node].starts_value)
				continue;
			while (next != writes.size() && writes[next].first <= span.first)
			{
				const uint64_t end = writes[next++].limit;
				second_end = std::max(second_end, std::min(largest_end, end));
				largest_end = std::max(largest_end, end);
			}
			if (second_end > span.first)
				analyzer_.error(
					location_, "a partial overwrite of an aggregate range initializer is not yet supported");
		}
	}

	Analyzer& analyzer_;
	Scope* scope_;
	std::vector<Node> nodes_;
	FlatMap<SubobjectKey, uint32_t, SubobjectHash> children_;
	FlatMap<uint32_t, uint64_t, std::hash<uint32_t>> range_limits_;
	uint32_t group_ = 0;
	uint32_t location_ = 0;
};

void Analyzer::c_designated_list(const syntax::BracedInitList& list, const Type* type, Scope* scope)
{
	const CInitializer* plan = CInitializerBuilder(*this, scope).build(list, type);
	if (plan == nullptr)
		return;
	ExprFacts* facts = new_facts(list, plan->type, ValueCategory::LValue);
	facts->flags |= kCInitializer;
	if (&list == flexible_list_ && flexible_given_)
		facts->flags |= kFlexibleElements;
	facts->c_initializer = plan;
}

} // namespace sema
