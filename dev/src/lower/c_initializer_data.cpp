#include "lower/program_lowering.h"

#include <algorithm>
#include <deque>
#include <iterator>
#include <map>
#include <set>

#include "lowir/literals.h"
#include "sema/aggregates.h"
#include "sema/c_initializer.h"
#include "sema/constant_interpreter.h"
#include "sema/constant_values.h"
#include "support/small_list.h"

namespace lower {
namespace {

bool IsZeroItem(const lowir::DataItem& item)
{
	return item.kind == lowir::DataItemKind::Zero ||
		(item.kind == lowir::DataItemKind::Scalar && item.constant.bits.low == 0 && item.constant.bits.high == 0);
}

using Placements = std::vector<StaticPlacement>;

bool CollectPlacements(const StaticData& data, uint64_t first, uint64_t size, uint8_t pointer_bytes, Placements& out)
{
	uint64_t offset = 0;
	for (const lowir::DataItem& item : data.items)
	{
		uint64_t alignment;
		const uint64_t width = DataItemBytes(item, alignment, pointer_bytes);
		if (width > size - offset)
			return false;
		if (!IsZeroItem(item))
			out.push_back({ first + offset, width, item });
		offset += width;
	}
	return offset == size;
}

StaticPlacement BytePlacement(uint64_t offset, uint8_t value)
{
	lowir::DataItem item = {};
	item.kind = lowir::DataItemKind::Scalar;
	item.type = lowir::Type::scalar(lowir::TypeKind::U8);
	item.constant = { lowir::ValueKind::Integer, lowir::TypeKind::Void, lowir::integer_literal(value) };
	return { offset, 1, item };
}

struct ByteWrite
{
	uint64_t offset;
	uint8_t mask, value;
};

struct FieldData
{
	uint64_t first = 0, limit = 0;
	Placements items;
	SmallList<ByteWrite, 4> bits;

	bool has_data() const
	{
		return !items.empty() ||
			std::any_of(bits.begin(), bits.end(), [](const ByteWrite& byte) { return byte.value != 0; });
	}
};

// Active replacement ranges suppress nonzero pieces of the base. Keep the
// nonzero replacements indexed separately so unrelated zero writes do not
// have to be revisited for each output row.
class ActiveRecordData
{
public:
	void change(const FieldData& field, bool enter)
	{
		if (!field.bits.empty())
		{
			for (const ByteWrite& source : field.bits)
				change_bits(source, enter);
		}
		else if (field.first < field.limit)
		{
			if (enter)
			{
				fields_[field.first] = &field;
				if (!field.items.empty())
					nonzero_fields_[field.first] = &field;
			}
			else
			{
				fields_.erase(field.first);
				nonzero_fields_.erase(field.first);
			}
		}
	}

	bool render(const Placements& base, Placements& output) const
	{
		output.clear();
		if (!keep_base(base, output))
			return false;
		for (const auto& field : nonzero_fields_)
			output.insert(output.end(), field.second->items.begin(), field.second->items.end());
		for (uint64_t offset : nonzero_bits_)
		{
			const auto next = after(base, offset);
			if (next == base.begin() || (next - 1)->offset + (next - 1)->size <= offset)
				output.push_back(BytePlacement(offset, bits_.find(offset)->second.value));
		}
		std::sort(output.begin(), output.end(),
			[](const StaticPlacement& a, const StaticPlacement& b) { return a.offset < b.offset; });
		return true;
	}

private:
	struct MaskedByte
	{
		uint8_t mask, value;
	};

	static Placements::const_iterator after(const Placements& base, uint64_t offset)
	{
		return std::upper_bound(base.begin(), base.end(), offset,
			[](uint64_t address, const StaticPlacement& entry) { return address < entry.offset; });
	}

	void change_bits(const ByteWrite& source, bool enter)
	{
		auto& byte = bits_[source.offset];
		if (enter)
		{
			byte.mask |= source.mask;
			byte.value |= source.value;
		}
		else
		{
			byte.mask &= static_cast<uint8_t>(~source.mask);
			byte.value &= static_cast<uint8_t>(~source.mask);
		}
		if (byte.value != 0)
			nonzero_bits_.insert(source.offset);
		else
			nonzero_bits_.erase(source.offset);
		if (byte.mask == 0)
			bits_.erase(source.offset);
	}

	bool keep_base(const Placements& base, Placements& output) const
	{
		for (auto item = base.begin(); item != base.end();)
		{
			const auto next_field = fields_.upper_bound(item->offset);
			const uint64_t limit = next_field == fields_.begin() ? 0 : std::prev(next_field)->second->limit;
			if (item->offset < limit)
			{
				// A complete member replacement can hide a large nonzero
				// subaggregate. Skip its items by offset in one search.
				item = std::lower_bound(item, base.end(), limit,
					[](const StaticPlacement& entry, uint64_t address) { return entry.offset < address; });
				if ((item - 1)->offset + (item - 1)->size > limit)
					return false;
				continue;
			}
			if (next_field != fields_.end() && next_field->first < item->offset + item->size)
				return false;
			if (!keep_item(*item++, output))
				return false;
		}
		return true;
	}

	bool keep_item(const StaticPlacement& entry, Placements& output) const
	{
		auto patch = bits_.lower_bound(entry.offset);
		if (patch == bits_.end() || patch->first >= entry.offset + entry.size)
		{
			output.push_back(entry);
			return true;
		}
		if (entry.item.kind != lowir::DataItemKind::Scalar || entry.size > 16)
			return false;
		const lowir::Literal bits = entry.item.constant.bits;
		for (uint64_t i = 0; i != entry.size; ++i)
		{
			const uint64_t address = entry.offset + i;
			uint8_t value = static_cast<uint8_t>((i < 8 ? bits.low : bits.high) >> (8 * (i % 8)));
			if (patch != bits_.end() && patch->first == address)
			{
				value = static_cast<uint8_t>((value & ~patch->second.mask) | patch->second.value);
				++patch;
			}
			if (value != 0)
				output.push_back(BytePlacement(address, value));
		}
		return true;
	}

	std::map<uint64_t, const FieldData*> fields_, nonzero_fields_;
	std::map<uint64_t, MaskedByte> bits_;
	std::set<uint64_t> nonzero_bits_;
};

struct RecordDataEvent
{
	uint64_t index;
	const Placements* base;
	const FieldData* field;
	bool enter;
};

} // namespace

class ProgramLowering::CStaticData
{
public:
	explicit CStaticData(ProgramLowering& lowering)
		: lowering_(lowering), pointer_bytes_(lowering.program_.pointer_type().pointer_bytes())
	{}

	bool array(const sema::CInitializer& plan, StaticData& out)
	{
		if (plan.value != nullptr)
			return false;
		const uint64_t width = lowering_.size_of(plan.type->element, 0);
		std::deque<Placements> bases;
		std::deque<FieldData> fields;
		std::vector<RecordDataEvent> events;
		if (!base_events(plan, width, bases, events) || !field_events(plan, !events.empty(), fields, events))
			return false;
		return emit_rows(events, width, plan.type->bound, out);
	}

	bool record(const sema::CInitializer& plan, StaticData& out)
	{
		const auto* record = sema::ClassOf(plan.type);
		if (record == nullptr || record->key == TokenKind::KW_UNION)
			return false;
		Placements base;
		const uint64_t width = lowering_.size_of(plan.type, 0);
		sample_.items.clear();
		if (!record_value(plan.type, *plan.value, sample_) ||
			!CollectPlacements(sample_, 0, width, pointer_bytes_, base))
			return false;
		return record_members(plan, base, width, true, out);
	}

private:
	bool record_members(
		const sema::CInitializer& plan, const Placements& base, uint64_t width, bool inherited, StaticData& out)
	{
		std::deque<FieldData> fields;
		ActiveRecordData active;
		for (const auto& child : plan.children)
		{
			if (inherited && !child.initializer->starts_value)
				return false;
			fields.emplace_back();
			if (!prepare_field(*child.member, *child.initializer, fields.back()))
				return false;
			active.change(fields.back(), true);
		}
		return render_row(active, base, width, out);
	}

	bool record_value(const sema::Type* type, const syntax::Expr& expr, StaticData& out)
	{
		const syntax::Expr* value = sema::CInitializerOperand(&expr);
		const auto* record = sema::ClassOf(type);
		const size_t start = out.items.size();
		if (record != nullptr && record->key != TokenKind::KW_UNION && value->kind == syntax::ExprKind::FunctionalCast)
		{
			const auto& literal = static_cast<const syntax::FunctionalCastExpr&>(*value);
			if (literal.compound_static)
			{
				const auto* source = sema::CInitializerOf(literal.braced);
				if (source == nullptr)
				{
					uint32_t next = 0;
					if (lowering_.static_aggregate(type, literal.braced, next, out, nullptr, true))
						return true;
				}
				else if (CStaticData(lowering_).record_members(*source, {}, lowering_.size_of(type, 0), false, out))
					return true;
				out.items.resize(start);
			}
		}
		else if (lowering_.static_element(type, *value, out))
			return true;
		out.items.resize(start);
		// Some layouts already need the constant writer for a single
		// record. Keep that fallback at the source value's own extent.
		sema::ConstantInterpreter interpreter(*lowering_.analyzer_);
		const sema::ConstValue* constant = interpreter.evaluate_c_initializer(*value);
		return constant != nullptr && lowering_.constant_data(type, *constant, out, value->location);
	}

	bool source_value(const sema::CInitializer& plan, StaticData& out)
	{
		if (plan.value != nullptr && plan.children.empty() && sema::ClassOf(plan.type) != nullptr)
			return record_value(plan.type, *plan.value, out);
		return lowering_.static_c_initializer(plan, out);
	}

	bool base_events(const sema::CInitializer& plan, uint64_t width, std::deque<Placements>& bases,
		std::vector<RecordDataEvent>& events)
	{
		PointerMap saved;
		for (const auto& span : plan.children)
		{
			uint32_t entry = saved.find(span.initializer);
			if (entry == PointerMap::kMissing)
			{
				entry = static_cast<uint32_t>(bases.size());
				bases.emplace_back();
				sample_.items.clear();
				if (!source_value(*span.initializer, sample_) ||
					!CollectPlacements(sample_, 0, width, pointer_bytes_, bases.back()))
					return false;
				saved.set(span.initializer, entry);
			}
			if (!bases[entry].empty())
			{
				events.push_back({ span.index, &bases[entry], nullptr, true });
				events.push_back({ span.limit, &bases[entry], nullptr, false });
			}
		}
		return true;
	}

	bool field_events(const sema::CInitializer& plan, bool has_base, std::deque<FieldData>& fields,
		std::vector<RecordDataEvent>& events)
	{
		PointerMap saved;
		for (const auto& lane : plan.field_spans())
			for (const auto& span : lane.spans)
			{
				uint32_t entry = saved.find(span.initializer);
				if (entry == PointerMap::kMissing)
				{
					entry = static_cast<uint32_t>(fields.size());
					fields.emplace_back();
					if (!prepare_field(*lane.member, *span.initializer, fields.back()))
						return false;
					saved.set(span.initializer, entry);
				}
				if (has_base || fields[entry].has_data())
				{
					events.push_back({ span.index, nullptr, &fields[entry], true });
					events.push_back({ span.limit, nullptr, &fields[entry], false });
				}
			}
		return true;
	}

	bool prepare_field(const sema::DataMember& member, const sema::CInitializer& plan, FieldData& out)
	{
		const auto* variable = static_cast<const sema::VariableEntity*>(member.variable);
		if (member.bit_field)
			return prepare_bits(member, variable, plan.value, out.bits);
		const uint64_t size = lowering_.size_of(plan.type, 0);
		out.first = lowering_.member_offset(variable, 0);
		out.limit = out.first + size;
		sample_.items.clear();
		return source_value(plan, sample_) && CollectPlacements(sample_, out.first, size, pointer_bytes_, out.items);
	}

	bool prepare_bits(const sema::DataMember& member, const sema::VariableEntity* variable, const syntax::Expr* expr,
		SmallList<ByteWrite, 4>& bytes)
	{
		if (expr != nullptr && expr->kind == syntax::ExprKind::BracedInit)
		{
			const auto& init = static_cast<const syntax::BracedInitList&>(*expr);
			expr = init.elements.empty() ? nullptr : init.elements[0];
		}
		StaticValue value = {};
		if (member.width > 128 ||
			(expr != nullptr &&
				(!lowering_.static_converted(*expr, variable->type->unqualified, value) ||
					value.kind != StaticValue::Kind::Integer)))
			return false;
		const uint64_t bit = lowering_.member_bit_offset(variable, 0);
		for (uint64_t k = 0; k < member.width; ++k)
		{
			const uint64_t offset = (bit + k) / 8;
			if (bytes.empty() || bytes.back().offset != offset)
				bytes.push_back({ offset, 0, 0 });
			const auto mask = static_cast<uint8_t>(1u << ((bit + k) % 8));
			bytes.back().mask |= mask;
			if (((k < 64 ? value.bits : value.high) >> (k % 64)) & 1)
				bytes.back().value |= mask;
		}
		return true;
	}

	bool emit_rows(std::vector<RecordDataEvent>& events, uint64_t width, uint64_t count, StaticData& out)
	{
		std::sort(events.begin(), events.end(), [](const RecordDataEvent& a, const RecordDataEvent& b) {
			return a.index == b.index ? !a.enter && b.enter : a.index < b.index;
		});
		ActiveRecordData active;
		const Placements empty;
		const Placements* base = &empty;
		StaticData row;
		size_t event = 0;
		uint64_t index = 0;
		while (index < count)
		{
			while (event != events.size() && events[event].index == index)
			{
				const RecordDataEvent& change = events[event++];
				if (change.field != nullptr)
					active.change(*change.field, change.enter);
				else
					base = change.enter ? change.base : &empty;
			}
			const uint64_t limit = event == events.size() ? count : events[event].index;
			row.items.clear();
			if (!render_row(active, *base, width, row))
				return false;
			if (visible_.empty())
				row.items.clear();
			lowering_.append_c_initializer_repeat(row, limit - index, width, out);
			index = limit;
		}
		return true;
	}

	bool render_row(const ActiveRecordData& active, const Placements& base, uint64_t width, StaticData& out)
	{
		if (!active.render(base, visible_))
			return false;
		uint64_t position = 0;
		for (const StaticPlacement& entry : visible_)
		{
			if (entry.offset < position || entry.offset + entry.size > width)
				return false;
			lowering_.append_zero(entry.offset - position, out);
			lowering_.append_item(entry.item, out);
			position = entry.offset + entry.size;
		}
		lowering_.append_zero(width - position, out);
		return true;
	}

	ProgramLowering& lowering_;
	uint8_t pointer_bytes_;
	StaticData sample_;
	Placements visible_;
};

bool ProgramLowering::static_c_value(const sema::ConstValue& value, StaticValue& out, uint32_t location)
{
	out = StaticValue();
	switch (value.kind)
	{
	case sema::ValueKind::Integer:
		out.kind = StaticValue::Kind::Integer;
		out.bits = value.bits;
		out.high = value.high;
		return true;
	case sema::ValueKind::Floating:
		out.kind = StaticValue::Kind::Floating;
		out.floating = value.floating;
		return true;
	case sema::ValueKind::Binary128:
		out.kind = StaticValue::Kind::Soft;
		out.bits = value.bits;
		out.high = value.high;
		return true;
	case sema::ValueKind::Pointer:
		if (value.root == sema::RootKind::Null)
		{
			out.kind = StaticValue::Kind::Null;
			return true;
		}
		if (value.root == sema::RootKind::AbsoluteAddress)
		{
			out.kind = StaticValue::Kind::Integer;
			out.bits = static_cast<uint64_t>(value.address.offset);
			return true;
		}
		lowir::DataItem item;
		if (!constant_item(value.type, value, item, location))
			return false;
		out.kind = StaticValue::Kind::Address;
		out.symbol = item.address;
		out.offset = item.amount;
		return true;
	default:
		return false;
	}
}

bool ProgramLowering::static_c_initializer(const sema::CInitializer& plan, StaticData& out)
{
	if (plan.has_field_spans)
		return CStaticData(*this).array(plan, out);
	const sema::Type* type = plan.type;
	if (plan.value != nullptr && plan.children.empty())
		return static_element(type, *plan.value, out);
	if (type->kind != sema::TypeKind::Array)
	{
		if (plan.value != nullptr)
			return CStaticData(*this).record(plan, out);
		uint32_t next = 0;
		return static_aggregate(type, nullptr, next, out, &plan);
	}

	std::vector<uint64_t> units;
	if (plan.value != nullptr)
	{
		const syntax::Expr* literal = sema::CInitializerOperand(plan.value);
		if (literal->kind == syntax::ExprKind::BracedInit)
			literal = sema::CInitializerOperand(static_cast<const syntax::BracedInitList*>(literal)->elements[0]);
		sema::StringLiteralFacts facts;
		if (literal->kind != syntax::ExprKind::Literal ||
			!sema::StringLiteralUnits(static_cast<const syntax::LiteralExpr*>(literal)->spelling, facts, units))
			return false;
	}
	const uint64_t stride = size_of(type->element, 0);
	PointerMap saved_items;
	std::vector<StaticData> repeated;
	uint64_t next = 0;
	const auto fill = [&](uint64_t limit) {
		for (; next < limit && next < units.size(); ++next)
		{
			lowir::DataItem item = lowir::DataItem();
			item.kind = lowir::DataItemKind::Scalar;
			item.type = storage_type(type->element);
			item.constant = { lowir::ValueKind::Integer, lowir::TypeKind::Void,
				lowir::integer_literal(static_cast<int64_t>(units[static_cast<size_t>(next)])) };
			append_item(item, out);
		}
		if (next < limit)
			append_zero((limit - next) * stride, out);
		next = limit;
	};
	for (const auto& child : plan.children)
	{
		fill(child.index);
		if (!child.initializer->repeat_value)
		{
			if (!static_c_initializer(*child.initializer, out))
				return false;
		}
		else
		{
			uint32_t saved = saved_items.find(child.initializer);
			if (saved == PointerMap::kMissing)
			{
				saved = static_cast<uint32_t>(repeated.size());
				repeated.emplace_back();
				if (!static_c_initializer(*child.initializer, repeated.back()))
					return false;
				const auto& items = repeated.back().items;
				if (std::all_of(items.begin(), items.end(), IsZeroItem))
					repeated.back().items.clear();
				saved_items.set(child.initializer, saved);
			}
			append_c_initializer_repeat(repeated[saved], child.limit - child.index, stride, out);
		}
		next = child.limit;
	}
	fill(type->bound);
	return true;
}

void ProgramLowering::append_c_initializer_repeat(
	const StaticData& value, uint64_t count, uint64_t width, StaticData& out)
{
	if (value.items.empty())
		append_zero(count * width, out);
	else
		for (uint64_t i = 0; i < count; ++i)
			for (const lowir::DataItem& item : value.items)
				append_item(item, out);
}

} // namespace lower
