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

CInitializerResets::CInitializerResets(const std::vector<CArrayWrite>& spans, uint64_t extent)
{
	if (spans.empty())
		return;
	edges_.push_back(0);
	std::vector<uint32_t> ranks;
	for (const CArrayWrite& span : spans)
	{
		if (edges_.back() < span.first)
		{
			edges_.push_back(span.first);
			ranks.push_back(0);
		}
		edges_.push_back(span.limit);
		ranks.push_back(span.rank);
	}
	if (edges_.back() < extent)
	{
		edges_.push_back(extent);
		ranks.push_back(0);
	}
	leaves_ = 1;
	while (leaves_ < ranks.size())
		leaves_ *= 2;
	bounds_.resize(2 * leaves_);
	for (size_t i = 0; i < ranks.size(); ++i)
		bounds_[leaves_ + i] = { ranks[i], ranks[i] };
	for (size_t i = leaves_ - 1; i != 0; --i)
	{
		const RankBounds left = bounds_[2 * i];
		const RankBounds right = bounds_[2 * i + 1];
		bounds_[i] = { std::min(left.min, right.min), std::max(left.max, right.max) };
	}
}

void CInitializerResets::clip(const CArrayWrite& write, std::vector<CArrayWrite>& retained) const
{
	if (leaves_ == 0)
		AppendSpan(retained, write);
	else
		clip(1, 0, leaves_, write, retained);
}

void CInitializerResets::clip(
	size_t node, size_t lo, size_t hi, const CArrayWrite& write, std::vector<CArrayWrite>& retained) const
{
	const size_t extent = edges_.size() - 1;
	if (lo >= extent || bounds_[node].min > write.rank)
		return;
	const uint64_t first = std::max(write.first, edges_[lo]);
	const uint64_t limit = std::min(write.limit, edges_[std::min(hi, extent)]);
	if (first >= limit)
		return;
	if (bounds_[node].max <= write.rank)
	{
		AppendSpan(retained, CArrayWrite{ first, limit, write.value, write.rank });
		return;
	}
	const size_t middle = lo + (hi - lo) / 2;
	clip(2 * node, lo, middle, write, retained);
	clip(2 * node + 1, middle, hi, write, retained);
}

} // namespace sema
