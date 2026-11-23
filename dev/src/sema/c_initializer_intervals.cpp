#include "sema/c_initializer_intervals.h"

#include <algorithm>

namespace sema {
namespace {

void AppendSpan(std::vector<CArrayWrite>& spans, const CArrayWrite& write)
{
	if (!spans.empty() && spans.back().value == write.value && spans.back().rank == write.rank &&
		spans.back().limit == write.first)
		spans.back().limit = write.limit;
	else
		spans.push_back(write);
}

} // namespace

std::vector<CArrayWrite> WinningInitializerSpans(std::vector<CArrayWrite>& writes)
{
	if (writes.size() < 2)
		return writes;
	std::sort(
		writes.begin(), writes.end(), [](const CArrayWrite& a, const CArrayWrite& b) { return a.first < b.first; });
	const auto earlier = [](const CArrayWrite& a, const CArrayWrite& b) { return a.rank < b.rank; };
	std::vector<CArrayWrite> active;
	std::vector<CArrayWrite> result;
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
		const CArrayWrite& winner = active.front();
		const uint64_t limit = next == writes.size() ? winner.limit : std::min(winner.limit, writes[next].first);
		AppendSpan(result, CArrayWrite{ index, limit, winner.value, winner.rank });
		index = limit;
	}
	return result;
}

CInitializerResets::CInitializerResets(const std::vector<CArrayWrite>& writes, uint64_t extent) : nodes_(1)
{
	edges_.reserve(writes.size() * 2 + (extent == 0 ? 0 : 2));
	if (extent != 0)
	{
		edges_.push_back(0);
		edges_.push_back(extent);
	}
	for (const auto& write : writes)
	{
		edges_.push_back(write.first);
		edges_.push_back(write.limit);
	}
	std::sort(edges_.begin(), edges_.end());
	edges_.erase(std::unique(edges_.begin(), edges_.end()), edges_.end());
}

uint32_t CInitializerResets::root(const std::vector<CArrayWrite>& spans)
{
	size_t next = 0;
	return spans.empty() ? 0 : root(spans, next, 0, edges_.size() - 1);
}

uint32_t CInitializerResets::root(const std::vector<CArrayWrite>& spans, size_t& next, size_t lo, size_t hi)
{
	while (next != spans.size() && spans[next].limit <= edges_[lo])
		++next;
	if (next == spans.size() || edges_[hi] <= spans[next].first)
		return 0;
	if (spans[next].first <= edges_[lo] && edges_[hi] <= spans[next].limit)
	{
		const uint32_t rank = spans[next].rank;
		return save({ 0, 0, rank, rank, rank });
	}
	const size_t mid = lo + (hi - lo) / 2;
	const uint32_t left = root(spans, next, lo, mid);
	const uint32_t right = root(spans, next, mid, hi);
	return save({ left, right, 0, std::min(nodes_[left].min, nodes_[right].min),
		std::max(nodes_[left].max, nodes_[right].max) });
}

uint32_t CInitializerResets::add(uint32_t root, const CArrayWrite& write)
{
	return add(root, 0, edges_.size() - 1, write);
}

uint32_t CInitializerResets::add(uint32_t node, size_t lo, size_t hi, const CArrayWrite& write)
{
	Node next = nodes_[node];
	if (next.min >= write.rank || edges_[hi] <= write.first || write.limit <= edges_[lo])
		return node;
	if (write.first <= edges_[lo] && edges_[hi] <= write.limit)
	{
		// Applying the same rank everywhere needs no visit to the
		// descendants. A uniform replacement also drops their links.
		if (next.max <= write.rank)
			next = { 0, 0, write.rank, write.rank, write.rank };
		else
			next.floor = next.min = write.rank;
	}
	else
	{
		const size_t middle = lo + (hi - lo) / 2;
		next.left = add(next.left, lo, middle, write);
		next.right = add(next.right, middle, hi, write);
		next.min = std::max(next.floor, std::min(nodes_[next.left].min, nodes_[next.right].min));
		next.max = std::max(next.floor, std::max(nodes_[next.left].max, nodes_[next.right].max));
	}
	return save(next);
}

uint32_t CInitializerResets::save(Node node)
{
	const auto result = static_cast<uint32_t>(nodes_.size());
	nodes_.push_back(node);
	return result;
}

void CInitializerResets::clip(uint32_t root, const CArrayWrite& write, std::vector<CArrayWrite>& retained) const
{
	if (root == 0)
		AppendSpan(retained, write);
	else
		clip(root, 0, edges_.size() - 1, write, 0, retained);
}

void CInitializerResets::clip(uint32_t node, size_t lo, size_t hi, const CArrayWrite& write, uint32_t floor,
	std::vector<CArrayWrite>& retained) const
{
	const Node& active = nodes_[node];
	if (std::max(floor, active.min) > write.rank)
		return;
	const uint64_t first = std::max(write.first, edges_[lo]);
	const uint64_t limit = std::min(write.limit, edges_[hi]);
	if (first >= limit)
		return;
	if (std::max(floor, active.max) <= write.rank)
	{
		AppendSpan(retained, { first, limit, write.value, write.rank });
		return;
	}
	const size_t middle = lo + (hi - lo) / 2;
	floor = std::max(floor, active.floor);
	clip(active.left, lo, middle, write, floor, retained);
	clip(active.right, middle, hi, write, floor, retained);
}

} // namespace sema
