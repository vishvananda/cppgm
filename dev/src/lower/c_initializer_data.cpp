#include "lower/program_lowering.h"

#include <algorithm>
#include <deque>
#include <iterator>
#include <map>
#include <set>
#include <utility>

#include "lowir/literals.h"
#include "sema/aggregates.h"
#include "sema/c_initializer.h"
#include "sema/c_initializer_intervals.h"
#include "sema/constant_c_array.h"
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
	const Placements* repeated = nullptr;
	uint64_t stride = 0;
	uint64_t bit_first = 0, bit_limit = 0;

	bool has_items() const { return !items.empty() || (repeated != nullptr && !repeated->empty()); }

	bool has_data() const
	{
		return has_items() ||
			std::any_of(bits.begin(), bits.end(), [](const ByteWrite& byte) { return byte.value != 0; });
	}

	void append(Placements& output) const
	{
		output.insert(output.end(), items.begin(), items.end());
		if (repeated != nullptr)
			for (uint64_t offset = first; offset < limit; offset += stride)
				for (StaticPlacement placement : *repeated)
				{
					placement.offset += offset;
					output.push_back(placement);
				}
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
		if (field.first < field.limit)
		{
			if (enter)
			{
				fields_[field.first] = &field;
				if (field.has_items())
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
			field.second->append(output);
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

struct DataColumn
{
	uint64_t first, limit, index;
};

// A zero replacement can affect only column positions that some source
// supplies with data. Drop all other positions before composing layers.
class StaticDataColumns
{
public:
	explicit StaticDataColumns(std::vector<DataColumn>&& ranges) : columns_(std::move(ranges))
	{
		std::sort(columns_.begin(), columns_.end(),
			[](const DataColumn& a, const DataColumn& b) { return a.first < b.first; });
		size_t count = 0;
		uint64_t index = 0;
		for (DataColumn column : columns_)
		{
			if (count != 0 && column.first <= columns_[count - 1].limit)
			{
				auto& previous = columns_[count - 1];
				previous.limit = std::max(previous.limit, column.limit);
				index = previous.index + (previous.limit - previous.first);
			}
			else
			{
				column.index = index;
				index += column.limit - column.first;
				columns_[count++] = column;
			}
		}
		columns_.resize(count);
	}

	uint64_t project(uint64_t bit) const
	{
		const auto after = std::upper_bound(columns_.begin(), columns_.end(), bit,
			[](uint64_t value, const DataColumn& column) { return value < column.first; });
		if (after == columns_.begin())
			return 0;
		const auto& column = *std::prev(after);
		return column.index + (std::min(bit, column.limit) - column.first);
	}

	uint64_t physical_bit(uint64_t index) const
	{
		const auto after = std::upper_bound(columns_.begin(), columns_.end(), index,
			[](uint64_t value, const DataColumn& column) { return value < column.index; });
		const auto& column = *std::prev(after);
		return column.first + (index - column.index);
	}

private:
	std::vector<DataColumn> columns_;
};

struct StaticLayer
{
	const Placements* items;
	const FieldData* field;
	uint64_t first, limit;
	bool has_data;
};

struct StaticLayerStorage
{
	std::deque<Placements> bases, cells;
	std::deque<FieldData> fields;
};

constexpr uint32_t kZeroStaticLayer = 0;
constexpr uint32_t kUnwrittenStaticLayer = UINT32_MAX;

void AppendMaskedByte(ByteWrite byte, uint64_t first, uint64_t limit, FieldData& out)
{
	const uint64_t at = byte.offset * 8;
	const uint64_t lo = std::max(first, at);
	const uint64_t hi = std::min(limit, at + 8);
	if (lo >= hi)
		return;
	const auto mask = static_cast<uint8_t>((0xffu << (lo - at)) & (0xffu >> (at + 8 - hi)));
	byte.mask &= mask;
	byte.value &= byte.mask;
	if (byte.value != 0)
		out.bits.push_back(byte);
}

bool AppendItemSlice(const StaticPlacement& entry, uint64_t first, uint64_t limit, FieldData& out)
{
	if (first <= 8 * entry.offset && 8 * (entry.offset + entry.size) <= limit)
	{
		out.items.push_back(entry);
		return true;
	}
	if (entry.item.kind != lowir::DataItemKind::Scalar || entry.size > 16)
		return false;
	const auto bits = entry.item.constant.bits;
	for (uint64_t i = 0; i != entry.size; ++i)
	{
		const auto value = static_cast<uint8_t>((i < 8 ? bits.low : bits.high) >> (8 * (i % 8)));
		AppendMaskedByte({ entry.offset + i, 0xff, value }, first, limit, out);
	}
	return true;
}

bool AppendPlacementsSlice(const Placements& items, uint64_t offset, uint64_t first, uint64_t limit, FieldData& out)
{
	auto item = std::upper_bound(items.begin(), items.end(), first - 8 * offset,
		[](uint64_t bit, const StaticPlacement& entry) { return bit < 8 * (entry.offset + entry.size); });
	for (; item != items.end() && (offset + item->offset) * 8 < limit; ++item)
	{
		StaticPlacement placement = *item;
		placement.offset += offset;
		if (!AppendItemSlice(placement, first, limit, out))
			return false;
	}
	return true;
}

bool SliceRepeatedCells(const FieldData& source, uint64_t first, uint64_t limit, FieldData& out)
{
	const uint64_t origin = 8 * source.first;
	const uint64_t stride = 8 * source.stride;
	const uint64_t left = first - (first - origin) % stride;
	const uint64_t right = limit - (limit - origin) % stride;
	const uint64_t begin = first == left ? first : std::min(limit, left + stride);
	// Keep the interior cells repeated. Only the two boundary cells can
	// be cut by a write to an individual field or bit-field.
	if (first < begin && !AppendPlacementsSlice(*source.repeated, left / 8, first, begin, out))
		return false;
	if (begin < right)
	{
		out.first = begin / 8;
		out.limit = right / 8;
		out.repeated = source.repeated;
		out.stride = source.stride;
	}
	if (begin <= right && right < limit)
		return AppendPlacementsSlice(*source.repeated, right / 8, right, limit, out);
	return true;
}

bool SliceStaticLayer(const StaticLayer& source, uint64_t first, uint64_t limit, FieldData& out)
{
	if (source.field != nullptr && source.field->repeated != nullptr)
	{
		if (!SliceRepeatedCells(*source.field, first, limit, out))
			return false;
	}
	else
	{
		if (!AppendPlacementsSlice(*source.items, 0, first, limit, out))
			return false;
		if (source.field != nullptr)
			for (ByteWrite byte : source.field->bits)
				AppendMaskedByte(byte, first, limit, out);
	}
	if (out.repeated == nullptr && !out.items.empty())
	{
		out.first = out.items.front().offset;
		out.limit = out.items.back().offset + out.items.back().size;
	}
	return true;
}

} // namespace

class ProgramLowering::CArrayImages
{
public:
	struct History
	{
		struct Extent
		{
			uint64_t row, row_limit, column, column_limit;

			void include(const Extent& other)
			{
				row = std::min(row, other.row);
				row_limit = std::max(row_limit, other.row_limit);
				column = std::min(column, other.column);
				column_limit = std::max(column_limit, other.column_limit);
			}

			bool covered_by(const sema::CArrayRectangle& write) const
			{
				return write.row <= row && row_limit <= write.row_limit && write.column <= column &&
					column_limit <= write.column_limit;
			}
		};

		struct Block
		{
			std::vector<sema::CArrayRectangle> writes;
			uint32_t before, layers;
			Extent extent;

			const sema::CArrayRectangle* single_write() const { return writes.size() == 1 ? writes.data() : nullptr; }
		};

		uint32_t append(const sema::CArrayConstant& layer, uint32_t before, std::vector<sema::CArrayRectangle> writes)
		{
			Block block{ std::move(writes), before, 1, { UINT64_MAX, 0, UINT64_MAX, 0 } };
			for (const auto& write : block.writes)
				block.extent.include({ write.row, write.row_limit, write.column, write.column_limit });
			// Keep power-of-two blocks of consecutive writes. Siblings
			// share their preceding blocks even when emitted out of order.
			// A zero write still masks data from any earlier block.
			std::vector<sema::CArrayRectangle> combined;
			while (block.before != PointerMap::kMissing && blocks[block.before].layers == block.layers)
			{
				const auto& older = blocks[block.before];
				const auto* covering = block.single_write();
				if (!older.writes.empty() && (covering == nullptr || !older.extent.covered_by(*covering)))
				{
					combined.assign(older.writes.begin(), older.writes.end());
					combined.insert(combined.end(), block.writes.begin(), block.writes.end());
					block.writes = sema::WinningInitializerRectangles(combined, kUnwrittenStaticLayer);
					block.extent.include(older.extent);
				}
				block.before = older.before;
				block.layers += older.layers;
			}
			const uint32_t index = static_cast<uint32_t>(blocks.size());
			blocks.push_back(std::move(block));
			indices.set(&layer, index);
			return index;
		}

		std::vector<sema::CArrayRectangle> visible(uint32_t index) const
		{
			SmallList<uint32_t, 32> order;
			order.push_back(index);
			size_t count = blocks[index].writes.size();
			const auto* covering = blocks[index].single_write();
			// A write can also cover an older block of a different size.
			for (index = blocks[index].before; index != PointerMap::kMissing; index = blocks[index].before)
			{
				if (covering != nullptr && blocks[index].extent.covered_by(*covering))
					continue;
				order.push_back(index);
				count += blocks[index].writes.size();
			}
			std::vector<sema::CArrayRectangle> writes;
			writes.reserve(count);
			for (size_t i = order.size(); i != 0; --i)
			{
				const auto& block = blocks[order[i - 1]].writes;
				writes.insert(writes.end(), block.begin(), block.end());
			}
			return sema::WinningInitializerRectangles(writes, kZeroStaticLayer);
		}

		PointerMap indices;
		PointerMap prefixes;
		StaticLayerStorage storage;
		std::vector<StaticLayer> sources{ StaticLayer{} };
		std::vector<Block> blocks;
	};

	PointerMap types;
	std::vector<std::unique_ptr<History>> histories;
};

void ProgramLowering::DeleteCArrayImages::operator()(CArrayImages* images) const
{
	delete images;
}

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
		std::deque<Placements> cells;
		std::deque<FieldData> fields;
		std::vector<RecordDataEvent> events;
		if (!base_events(plan, width, bases, events))
			return false;
		const bool has_base = !events.empty();
		const bool layered = plan.projection == sema::CInitializerProjection::NestedFields;
		const bool ready = plan.projection == sema::CInitializerProjection::Rectangles
			? rectangle_events(plan, has_base, cells, fields, events)
			: field_events(plan, has_base || layered, fields, events);
		if (!ready)
			return false;
		if (layered)
			return emit_layered(events, width, plan.type->bound, out);
		return emit_rows(events, width, plan.type->bound, out);
	}

	bool record(const sema::CInitializer& plan, StaticData& out)
	{
		const auto* record = sema::ClassOf(plan.type);
		if (record == nullptr || record->key == TokenKind::KW_UNION)
			return false;
		Placements base;
		const auto* source = sema::CInitializerOf(sema::StaticCompoundInitializer(plan.value));
		const uint64_t width = source != nullptr ? lowering_.c_initializer_size(*source)
												 : lowering_.size_of(plan.type, 0);
		sample_.items.clear();
		if (!record_value(plan.type, *plan.value, sample_) ||
			!CollectPlacements(sample_, 0, width, pointer_bytes_, base))
			return false;
		return record_members(plan, base, lowering_.c_initializer_size(plan), true, out);
	}

	bool constant_array(const sema::Type* type, const sema::CArrayConstant& array_value, StaticData& out)
	{
		if (array_value.previous == nullptr && array_value.patches == nullptr)
			return this->array(*array_value.initializer, out);
		const uint64_t width = lowering_.size_of(type->element, 0);
		if (width > UINT64_MAX / 8)
			return false;
		if (!lowering_.c_array_images_)
			lowering_.c_array_images_.reset(new CArrayImages);
		auto& images = *lowering_.c_array_images_;
		const uint32_t entry = images.types.find(type);
		if (entry == PointerMap::kMissing)
		{
			images.types.set(type, static_cast<uint32_t>(images.histories.size()));
			images.histories.emplace_back();
			return emit_single_array(array_value, type, width, out);
		}
		auto& history = images.histories[entry];
		if (!history)
			history.reset(new CArrayImages::History);
		return emit_shared_array(array_value, type, width, *history, out);
	}

private:
	bool emit_single_array(const sema::CArrayConstant& array, const sema::Type* type, uint64_t width, StaticData& out)
	{
		// A single image can compose its history in one sweep. Allocate
		// shared blocks only when another emitted image has this type.
		std::vector<const sema::CArrayConstant*> layers;
		for (const auto* current = &array; current != nullptr; current = current->previous)
			layers.push_back(current);
		StaticLayerStorage storage;
		PointerMap saved;
		std::vector<RecordDataEvent> events;
		for (auto i = layers.rbegin(); i != layers.rend(); ++i)
			if (!prepare_layer(**i, type, width, storage, saved, events))
				return false;
		return emit_layered(events, width, type->bound, out);
	}

	bool emit_shared_array(const sema::CArrayConstant& array, const sema::Type* type, uint64_t width,
		CArrayImages::History& history, StaticData& out)
	{
		std::vector<const sema::CArrayConstant*> layers;
		uint32_t block = PointerMap::kMissing;
		for (const auto* current = &array; current != nullptr; current = current->previous)
		{
			block = history.indices.find(current);
			if (block != PointerMap::kMissing)
				break;
			layers.push_back(current);
		}
		std::vector<RecordDataEvent> events;
		for (auto i = layers.rbegin(); i != layers.rend(); ++i)
		{
			events.clear();
			if (!prepare_layer(**i, type, width, history.storage, history.prefixes, events))
				return false;
			std::vector<sema::CArrayRectangle> writes;
			collect_writes(events, width, history.sources, writes, nullptr);
			block = history.append(**i, block, std::move(writes));
		}
		return render_layered(history.visible(block), history.sources, width, type->bound, out);
	}

	bool prepare_layer(const sema::CArrayConstant& layer, const sema::Type* type, uint64_t width,
		StaticLayerStorage& storage, PointerMap& saved, std::vector<RecordDataEvent>& events)
	{
		const auto add_value = [&](uint64_t first, uint64_t limit, const sema::ConstValue& value) {
			uint32_t entry = saved.find(&value);
			if (entry == PointerMap::kMissing)
			{
				entry = static_cast<uint32_t>(storage.bases.size());
				storage.bases.emplace_back();
				sample_.items.clear();
				if (!lowering_.constant_data(type->element, value, sample_, 0) ||
					!CollectPlacements(sample_, 0, width, pointer_bytes_, storage.bases[entry]))
					return false;
				saved.set(&value, entry);
			}
			events.push_back({ first, &storage.bases[entry], nullptr, true });
			events.push_back({ limit, &storage.bases[entry], nullptr, false });
			return true;
		};
		if (layer.prefix != nullptr)
			for (uint32_t index = 0; index < layer.prefix->count; ++index)
				if (!add_value(index, uint64_t(index) + 1, layer.prefix->elements[index]))
					return false;
		if (layer.initializer != nullptr)
		{
			const auto& plan = *layer.initializer;
			const bool inherited = layer.previous != nullptr;
			if (plan.value != nullptr || !base_events(plan, width, storage.bases, events, inherited) ||
				!layer_events(plan, inherited, storage.cells, storage.fields, events))
				return false;
		}
		return sema::VisitCArrayPatches(layer.patches, 0, type->bound, add_value);
	}

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
			if (!prepare_field(child.member, *child.initializer, 0, fields.back()))
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
		const auto* literal = sema::StaticCompoundInitializer(value);
		if (record != nullptr && record->key != TokenKind::KW_UNION && literal != nullptr)
		{
			const auto* source = sema::CInitializerOf(literal);
			if (source == nullptr)
			{
				uint32_t next = 0;
				if (lowering_.static_aggregate(type, literal, next, out, nullptr, true))
					return true;
			}
			else if (CStaticData(lowering_).record_members(
						 *source, {}, lowering_.c_initializer_size(*source), false, out))
				return true;
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
		std::vector<RecordDataEvent>& events, bool inherited = false)
	{
		PointerMap saved;
		const bool point_updates = inherited && plan.projection == sema::CInitializerProjection::None;
		for (const auto& span : plan.children)
		{
			if (point_updates && !span.initializer->replaces_value())
				continue;
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
			if (inherited || !bases[entry].empty())
			{
				events.push_back({ span.index, &bases[entry], nullptr, true });
				events.push_back({ span.limit, &bases[entry], nullptr, false });
			}
		}
		return true;
	}

	bool layer_events(const sema::CInitializer& plan, bool inherited, std::deque<Placements>& cells,
		std::deque<FieldData>& fields, std::vector<RecordDataEvent>& events)
	{
		if (plan.projection == sema::CInitializerProjection::Rectangles)
			return rectangle_events(plan, true, cells, fields, events);
		if (plan.projection != sema::CInitializerProjection::None)
			return field_events(plan, true, fields, events);
		if (inherited)
			for (const auto& row : plan.children)
				if (!row.initializer->replaces_value() && !point_events(*row.initializer, row, 0, fields, events))
					return false;
		return true;
	}

	bool point_events(const sema::CInitializer& plan, const sema::CInitializerChild& row, uint64_t offset,
		std::deque<FieldData>& fields, std::vector<RecordDataEvent>& events)
	{
		const bool array = plan.type->kind == sema::TypeKind::Array;
		const uint64_t stride = array ? lowering_.size_of(plan.type->element, 0) : 0;
		for (const auto& subobject : plan.children)
		{
			const auto* member = array ? nullptr : subobject.member;
			const uint64_t position = array ? offset + stride * subobject.index : offset;
			if (subobject.initializer->replaces_value())
			{
				fields.emplace_back();
				if (!prepare_field(member, *subobject.initializer, position, fields.back()))
					return false;
				events.push_back({ row.index, nullptr, &fields.back(), true });
				events.push_back({ row.limit, nullptr, &fields.back(), false });
				continue;
			}
			const uint64_t base = member == nullptr
				? position
				: position + lowering_.member_offset(static_cast<const sema::VariableEntity*>(member->variable), 0);
			if (!point_events(*subobject.initializer, row, base, fields, events))
				return false;
		}
		return true;
	}

	bool field_events(const sema::CInitializer& plan, bool has_base, std::deque<FieldData>& fields,
		std::vector<RecordDataEvent>& events)
	{
		PointerMap saved;
		for (const auto& lane : plan.field_spans())
		{
			if (lane.kind != sema::CInitializerFieldKind::Value)
			{
				if (lane.kind == sema::CInitializerFieldKind::ResetVariant)
				{
					fields.emplace_back();
					auto& field = fields.back();
					field.first = lane.offset;
					field.limit = lane.offset + lowering_.size_of(lane.owner, 0);
					for (const auto& span : lane.spans())
					{
						events.push_back({ span.index, nullptr, &field, true });
						events.push_back({ span.limit, nullptr, &field, false });
					}
				}
				continue;
			}
			for (const auto& span : lane.spans())
			{
				uint32_t entry = saved.find(span.initializer);
				if (entry == PointerMap::kMissing)
				{
					entry = static_cast<uint32_t>(fields.size());
					fields.emplace_back();
					if (!prepare_field(lane.member, *span.initializer, lane.offset, fields.back()))
						return false;
					saved.set(span.initializer, entry);
				}
				if (has_base || fields[entry].has_data())
				{
					events.push_back({ span.index, nullptr, &fields[entry], true });
					events.push_back({ span.limit, nullptr, &fields[entry], false });
				}
			}
		}
		return true;
	}

	bool rectangle_events(const sema::CInitializer& plan, bool has_base, std::deque<Placements>& cells,
		std::deque<FieldData>& fields, std::vector<RecordDataEvent>& events)
	{
		const uint64_t stride = lowering_.size_of(plan.type->element->element, 0);
		PointerMap saved;
		for (const auto& rectangle : plan.rectangles())
		{
			uint32_t entry = saved.find(rectangle.initializer);
			if (entry == PointerMap::kMissing)
			{
				entry = static_cast<uint32_t>(cells.size());
				cells.emplace_back();
				sample_.items.clear();
				if (!source_value(*rectangle.initializer, sample_) ||
					!CollectPlacements(sample_, 0, stride, pointer_bytes_, cells.back()))
					return false;
				saved.set(rectangle.initializer, entry);
			}
			if (stride == 0 || (!has_base && cells[entry].empty()))
				continue;
			fields.emplace_back();
			FieldData& field = fields.back();
			field.first = rectangle.column * stride;
			field.limit = rectangle.column_limit * stride;
			field.stride = stride;
			field.repeated = &cells[entry];
			events.push_back({ rectangle.row, nullptr, &field, true });
			events.push_back({ rectangle.row_limit, nullptr, &field, false });
		}
		return true;
	}

	bool prepare_field(const sema::DataMember* member, const sema::CInitializer& plan, uint64_t offset, FieldData& out)
	{
		const auto* variable = member == nullptr ? nullptr : static_cast<const sema::VariableEntity*>(member->variable);
		if (member != nullptr && member->bit_field)
			return prepare_bits(*member, variable, plan.value, offset, out);
		const uint64_t size = lowering_.c_initializer_size(plan);
		out.first = variable == nullptr ? offset : offset + lowering_.member_offset(variable, 0);
		out.limit = out.first + size;
		sample_.items.clear();
		return source_value(plan, sample_) && CollectPlacements(sample_, out.first, size, pointer_bytes_, out.items);
	}

	bool prepare_bits(const sema::DataMember& member, const sema::VariableEntity* variable, const syntax::Expr* expr,
		uint64_t parent_offset, FieldData& out)
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
		const uint64_t bit = 8 * parent_offset + lowering_.member_bit_offset(variable, 0);
		out.bit_first = bit;
		out.bit_limit = bit + member.width;
		auto& bytes = out.bits;
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

	bool emit_layered(const std::vector<RecordDataEvent>& events, uint64_t width, uint64_t count, StaticData& out)
	{
		if (width > UINT64_MAX / 8)
			return false;
		std::vector<StaticLayer> sources{ StaticLayer{} };
		std::vector<DataColumn> occupied;
		std::vector<sema::CArrayRectangle> writes;
		collect_writes(events, width, sources, writes, &occupied);
		const StaticDataColumns columns(std::move(occupied));
		size_t retained = 0;
		for (auto write : writes)
		{
			write.column = columns.project(write.column);
			write.column_limit = columns.project(write.column_limit);
			if (write.column < write.column_limit)
				writes[retained++] = write;
		}
		writes.resize(retained);
		auto rectangles = sema::WinningInitializerRectangles(writes, kZeroStaticLayer);
		for (auto& rectangle : rectangles)
		{
			rectangle.column = columns.physical_bit(rectangle.column);
			rectangle.column_limit = columns.physical_bit(rectangle.column_limit - 1) + 1;
		}
		return render_layered(rectangles, sources, width, count, out);
	}

	static void collect_writes(const std::vector<RecordDataEvent>& events, uint64_t width,
		std::vector<StaticLayer>& sources, std::vector<sema::CArrayRectangle>& writes,
		std::vector<DataColumn>* occupied)
	{
		PointerMap saved;
		for (size_t i = 0; i < events.size(); i += 2)
		{
			const auto& enter = events[i];
			const void* key = enter.field != nullptr ? static_cast<const void*>(enter.field) : enter.base;
			uint32_t source = saved.find(key);
			if (source == PointerMap::kMissing)
			{
				source = static_cast<uint32_t>(sources.size());
				sources.push_back(static_layer(enter, width));
				if (occupied != nullptr)
					collect_occupied(sources.back(), *occupied);
				saved.set(key, source);
			}
			const auto& layer = sources[source];
			if (layer.first < layer.limit)
				writes.push_back({ enter.index, events[i + 1].index, layer.first, layer.limit,
					layer.has_data ? source : kZeroStaticLayer });
		}
	}

	bool render_layered(const std::vector<sema::CArrayRectangle>& rectangles, const std::vector<StaticLayer>& sources,
		uint64_t width, uint64_t count, StaticData& out)
	{
		std::deque<FieldData> fields;
		std::vector<RecordDataEvent> visible;
		for (const auto& rectangle : rectangles)
		{
			fields.emplace_back();
			FieldData& field = fields.back();
			if (!SliceStaticLayer(sources[rectangle.value], rectangle.column, rectangle.column_limit, field))
				return false;
			if (!field.has_data())
				fields.pop_back();
			else
			{
				visible.push_back({ rectangle.row, nullptr, &field, true });
				visible.push_back({ rectangle.row_limit, nullptr, &field, false });
			}
		}
		return emit_rows(visible, width, count, out);
	}

	static StaticLayer static_layer(const RecordDataEvent& event, uint64_t width)
	{
		const FieldData* field = event.field;
		const Placements* items = field == nullptr ? event.base : &field->items;
		if (field == nullptr)
			return { items, nullptr, 0, width * 8, !items->empty() };
		const bool has_data = field->has_data();
		if (!field->bits.empty())
			return { items, field, field->bit_first, field->bit_limit, has_data };
		return { items, field, field->first * 8, field->limit * 8, has_data };
	}

	static void collect_occupied(const StaticLayer& layer, std::vector<DataColumn>& occupied)
	{
		for (const auto& placement : *layer.items)
			occupied.push_back({ placement.offset * 8, (placement.offset + placement.size) * 8, 0 });
		if (layer.has_data && layer.field != nullptr &&
			(layer.field->repeated != nullptr || !layer.field->bits.empty()))
			occupied.push_back({ layer.first, layer.limit, 0 });
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
	{
		out.kind = StaticValue::Kind::Integer;
		out.bits = value.bits;
		out.high = value.high;
		// ConstValue uses the high half only for wide integers. StaticValue
		// holds a sign-extended integer for conversion to any real format.
		sema::IntegralKind kind;
		if ((value.bits >> 63) != 0 && sema::IntegralKindOf(value.type, kind) && kind.bits <= 64 && kind.is_signed)
			out.high = UINT64_MAX;
		return true;
	}
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

uint64_t ProgramLowering::c_initializer_size(const sema::CInitializer& plan)
{
	const uint64_t extent = plan.storage_extent();
	return extent != 0 ? extent : size_of(plan.type, 0);
}

bool ProgramLowering::c_array_placements(
	const sema::ConstValue& value, uint64_t offset, std::vector<StaticPlacement>& out)
{
	StaticData data;
	return static_c_array(value.type, *value.c_array, data) &&
		CollectPlacements(data, offset, size_of(value.type, 0), program_.pointer_type().pointer_bytes(), out);
}

bool ProgramLowering::static_c_initializer(const sema::CInitializer& plan, StaticData& out)
{
	if (plan.projection != sema::CInitializerProjection::None)
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
	return static_c_array(type, sema::CArrayConstant{ &plan, nullptr, nullptr, nullptr, nullptr }, out);
}

bool ProgramLowering::static_c_array(const sema::Type* type, const sema::CArrayConstant& array, StaticData& out)
{
	const sema::CInitializer* plan = array.initializer;
	if (array.has_layers())
		return CStaticData(*this).constant_array(type, array, out);
	std::vector<uint64_t> scratch;
	sema::StringCodeUnits units;
	if (plan != nullptr && plan->value != nullptr)
	{
		const auto* literal = sema::CInitializerString(plan->value);
		if (literal == nullptr)
			return false;
		units = sema::ReadStringCodeUnits(*literal, scratch);
		if (!units)
			return false;
	}
	const sema::Type* element = type->element;
	const uint64_t stride = size_of(element, 0);
	PointerMap saved_items;
	std::vector<StaticData> repeated;
	uint64_t next = 0;
	const auto fill = [&](uint64_t limit) {
		if (array.prefix != nullptr)
			for (; next < limit && next < array.prefix->count; ++next)
				if (!constant_data(element, array.prefix->elements[next], out, 0))
					return false;
		for (; next < limit && next < units.size(); ++next)
		{
			lowir::DataItem item = lowir::DataItem();
			item.kind = lowir::DataItemKind::Scalar;
			item.type = storage_type(element);
			item.constant = { lowir::ValueKind::Integer, lowir::TypeKind::Void,
				lowir::integer_literal(static_cast<int64_t>(units[static_cast<size_t>(next)])) };
			append_item(item, out);
		}
		if (next < limit)
			append_zero((limit - next) * stride, out);
		next = limit;
		return true;
	};
	const auto emit_source = [&](const sema::CInitializer& child, uint64_t count) {
		if (!child.repeat_value)
			return static_c_initializer(child, out);
		uint32_t saved = saved_items.find(&child);
		if (saved == PointerMap::kMissing)
		{
			saved = static_cast<uint32_t>(repeated.size());
			repeated.emplace_back();
			if (!static_c_initializer(child, repeated.back()))
				return false;
			const auto& items = repeated.back().items;
			if (std::all_of(items.begin(), items.end(), IsZeroItem))
				repeated.back().items.clear();
			saved_items.set(&child, saved);
		}
		append_c_initializer_repeat(repeated[saved], count, stride, out);
		return true;
	};
	const auto entries = plan != nullptr ? plan->children : syntax::Slice<const sema::CInitializerChild>{};
	uint32_t entry = 0;
	const auto emit_before = [&](uint64_t end) {
		while (entry < entries.size && next < end)
		{
			const auto& child = entries[entry];
			if (child.limit <= next)
			{
				++entry;
				continue;
			}
			if (child.index >= end)
				break;
			const uint64_t start = std::max(next, child.index);
			const uint64_t limit = std::min(end, child.limit);
			if (!fill(start) || !emit_source(*child.initializer, limit - start))
				return false;
			next = limit;
		}
		return fill(end);
	};
	const auto emit_patch = [&](uint64_t first, uint64_t limit, const sema::ConstValue& value) {
		if (!emit_before(first))
			return false;
		next = limit;
		if (limit - first == 1)
			return constant_data(element, value, out, 0);
		StaticData sample;
		if (!constant_data(element, value, sample, 0))
			return false;
		if (std::all_of(sample.items.begin(), sample.items.end(), IsZeroItem))
			sample.items.clear();
		append_c_initializer_repeat(sample, limit - first, stride, out);
		return true;
	};
	// The base and patches are in storage order, so each source span is
	// visited once even when several writes intersect it.
	return sema::VisitCArrayPatches(array.patches, 0, type->bound, emit_patch) && emit_before(type->bound);
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
