#include "sema/c_initializer_intervals.h"

#include <algorithm>
#include <iterator>
#include <map>
#include <utility>

namespace sema {
namespace {

class VisibleColumns
{
public:
	VisibleColumns(uint64_t first, uint64_t limit, uint32_t no_value) : no_value_(no_value)
	{
		columns_.emplace(first, Open{ 0, no_value });
		columns_.emplace(limit, Open{ 0, no_value });
	}

	void assign(uint64_t first, uint64_t limit, uint64_t row, uint32_t value)
	{
		auto begin = split(first);
		const auto end = split(limit);
		for (auto current = begin; current != end; ++current)
		{
			const Open open = current->second;
			if (open.value != no_value_ && open.row < row)
				append({ open.row, row, current->first, std::next(current)->first, open.value });
		}
		columns_.erase(std::next(begin), end);
		begin->second = Open{ value == no_value_ ? 0 : row, value };
		if (begin != columns_.begin() && same(std::prev(begin)->second, begin->second))
		{
			columns_.erase(begin);
			begin = std::prev(end);
		}
		if (std::next(end) != columns_.end() && same(begin->second, end->second))
			columns_.erase(end);
	}

	std::vector<CArrayRectangle> take() { return std::move(result_); }

private:
	struct Open
	{
		uint64_t row;
		uint32_t value;
	};

	static bool same(Open left, Open right) { return left.row == right.row && left.value == right.value; }

	std::map<uint64_t, Open>::iterator split(uint64_t index)
	{
		auto after = columns_.lower_bound(index);
		return after->first == index ? after : columns_.emplace_hint(after, index, std::prev(after)->second);
	}

	void append(const CArrayRectangle& rectangle)
	{
		if (!result_.empty())
		{
			CArrayRectangle& previous = result_.back();
			if (previous.value == rectangle.value && previous.row == rectangle.row &&
				previous.row_limit == rectangle.row_limit && previous.column_limit == rectangle.column)
			{
				previous.column_limit = rectangle.column_limit;
				return;
			}
		}
		result_.push_back(rectangle);
	}

	const uint32_t no_value_;
	std::map<uint64_t, Open> columns_;
	std::vector<CArrayRectangle> result_;
};

struct ColumnRanks
{
	uint32_t local, earliest, latest;
};

struct ColumnNode
{
	std::vector<uint32_t> ranks;
	ColumnRanks before = {}, current = {};
	size_t generation = 0;
};

struct RectangleEvent
{
	uint64_t row;
	uint32_t rank;
	bool enter;
};

// Maintain the maximum source rank per column while sweeping row endpoints.
// Keep the old summaries only on touched paths. Comparing a row's completed
// update to those summaries skips unchanged winners and hidden writes.
class RectangleSweep
{
public:
	RectangleSweep(const std::vector<CArrayRectangle>& writes, uint32_t no_value)
		: writes_(writes), no_value_(no_value), active_(writes.size() + 1)
	{
		edges_.reserve(writes.size() * 2);
		for (const CArrayRectangle& write : writes)
		{
			edges_.push_back(write.column);
			edges_.push_back(write.column_limit);
		}
		std::sort(edges_.begin(), edges_.end());
		edges_.erase(std::unique(edges_.begin(), edges_.end()), edges_.end());
		cells_.resize(4 * (edges_.size() - 1));
	}

	std::vector<CArrayRectangle> run()
	{
		std::vector<RectangleEvent> events;
		std::vector<ColumnInterval> columns;
		events.reserve(writes_.size() * 2);
		columns.reserve(writes_.size());
		for (const CArrayRectangle& write : writes_)
		{
			columns.push_back({ edge(write.column), edge(write.column_limit) });
			const auto rank = static_cast<uint32_t>(columns.size());
			events.push_back({ write.row, rank, true });
			events.push_back({ write.row_limit, rank, false });
		}
		std::sort(events.begin(), events.end(), [](RectangleEvent a, RectangleEvent b) { return a.row < b.row; });
		VisibleColumns visible(edges_.front(), edges_.back(), no_value_);
		const size_t count = edges_.size() - 1;
		for (size_t i = 0; i != events.size();)
		{
			const uint64_t row = events[i].row;
			++generation_;
			do
			{
				const RectangleEvent event = events[i++];
				active_[event.rank] = event.enter;
				change(1, 0, count, columns[event.rank - 1], event);
			} while (i != events.size() && events[i].row == row);
			collect(1, 0, count, 0, 0, row, visible);
		}
		return visible.take();
	}

private:
	struct ColumnInterval
	{
		size_t first, limit;
	};

	size_t edge(uint64_t value) const { return std::lower_bound(edges_.begin(), edges_.end(), value) - edges_.begin(); }

	void change(size_t node, size_t lo, size_t hi, ColumnInterval range, RectangleEvent event)
	{
		auto& cell = cells_[node];
		if (cell.generation != generation_)
		{
			cell.before = cell.current;
			cell.generation = generation_;
		}
		if (range.first <= lo && hi <= range.limit)
		{
			auto& heap = cell.ranks;
			if (event.enter)
			{
				heap.push_back(event.rank);
				std::push_heap(heap.begin(), heap.end());
			}
			while (!heap.empty() && !active_[heap.front()])
			{
				std::pop_heap(heap.begin(), heap.end());
				heap.pop_back();
			}
			cell.current.local = heap.empty() ? 0 : heap.front();
		}
		else
		{
			const size_t mid = lo + (hi - lo) / 2;
			if (range.first < mid)
				change(2 * node, lo, mid, range, event);
			if (mid < range.limit)
				change(2 * node + 1, mid, hi, range, event);
		}
		refresh(node, hi - lo == 1);
	}

	void refresh(size_t node, bool leaf)
	{
		auto& current = cells_[node].current;
		current.earliest = current.latest = current.local;
		if (!leaf)
		{
			const auto& left = cells_[2 * node].current;
			const auto& right = cells_[2 * node + 1].current;
			current.earliest = std::max(current.local, std::min(left.earliest, right.earliest));
			current.latest = std::max(current.local, std::max(left.latest, right.latest));
		}
	}

	uint32_t value(uint32_t rank) const { return rank == 0 ? no_value_ : writes_[rank - 1].value; }

	void collect(
		size_t node, size_t lo, size_t hi, uint32_t before, uint32_t after, uint64_t row, VisibleColumns& visible) const
	{
		const auto& cell = cells_[node];
		const bool changed = cell.generation == generation_;
		const ColumnRanks old = changed ? cell.before : cell.current;
		const ColumnRanks now = cell.current;
		const uint32_t old_first = std::max(before, old.earliest);
		const uint32_t new_first = std::max(after, now.earliest);
		if (!changed && old_first == new_first)
			return;
		if (old_first == std::max(before, old.latest) && new_first == std::max(after, now.latest))
		{
			if (value(old_first) != value(new_first))
				visible.assign(edges_[lo], edges_[hi], row, value(new_first));
			return;
		}
		const size_t mid = lo + (hi - lo) / 2;
		collect(2 * node, lo, mid, std::max(before, old.local), std::max(after, now.local), row, visible);
		collect(2 * node + 1, mid, hi, std::max(before, old.local), std::max(after, now.local), row, visible);
	}

	const std::vector<CArrayRectangle>& writes_;
	const uint32_t no_value_;
	std::vector<uint8_t> active_;
	std::vector<uint64_t> edges_;
	std::vector<ColumnNode> cells_;
	size_t generation_ = 0;
};

} // namespace

std::vector<CArrayRectangle> WinningInitializerRectangles(const std::vector<CArrayRectangle>& writes, uint32_t no_value)
{
	return writes.empty() ? std::vector<CArrayRectangle>() : RectangleSweep(writes, no_value).run();
}

} // namespace sema
