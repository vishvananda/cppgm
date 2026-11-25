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
	if (writes.empty())
		return {};
	if (writes.size() == 1)
		return { writes.front() };
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

std::vector<CUnionSelectionSpan> WinningUnionSelections(const std::vector<CArrayWrite>& writes)
{
	if (writes.size() == 1)
		return { { writes.front(), 0 } };
	struct Choice
	{
		uint32_t member, rank;
	};
	struct Choices
	{
		Choice newest, different;
		void add(Choice choice)
		{
			if (choice.rank > newest.rank)
			{
				if (choice.member != newest.member)
					different = newest;
				newest = choice;
			}
			else if (choice.rank > different.rank && choice.member != newest.member)
				different = choice;
		}
	};
	std::vector<uint64_t> edges;
	edges.reserve(writes.size() * 2);
	for (const auto& write : writes)
	{
		edges.push_back(write.first);
		edges.push_back(write.limit);
	}
	if (edges.empty())
		return {};
	std::sort(edges.begin(), edges.end());
	edges.erase(std::unique(edges.begin(), edges.end()), edges.end());
	const size_t leaves = edges.size() - 1;
	std::vector<Choices> tree(leaves * 2);
	// Each write is added to a disjoint cover of its intervals. Two
	// distinct members per node suffice when combining any two covers.
	for (const auto& write : writes)
	{
		size_t first = leaves + (std::lower_bound(edges.begin(), edges.end(), write.first) - edges.begin());
		size_t limit = leaves + (std::lower_bound(edges.begin(), edges.end(), write.limit) - edges.begin());
		while (first < limit)
		{
			if ((first & 1) != 0)
				tree[first++].add({ write.value, write.rank });
			if ((limit & 1) != 0)
				tree[--limit].add({ write.value, write.rank });
			first /= 2;
			limit /= 2;
		}
	}
	for (size_t i = 1; i < leaves; ++i)
	{
		const auto& choices = tree[i];
		if (choices.newest.rank == 0)
			continue;
		tree[i * 2].add(choices.newest);
		tree[i * 2].add(choices.different);
		tree[i * 2 + 1].add(choices.newest);
		tree[i * 2 + 1].add(choices.different);
	}
	std::vector<CUnionSelectionSpan> result;
	for (size_t i = 0; i < leaves; ++i)
	{
		const auto& choices = tree[leaves + i];
		const Choice winner = choices.newest;
		if (winner.rank == 0)
			continue;
		const uint32_t different = choices.different.rank;
		if (!result.empty() && result.back().selection.value == winner.member &&
			result.back().selection.rank == winner.rank && result.back().selection.limit == edges[i] &&
			result.back().different == different)
			result.back().selection.limit = edges[i + 1];
		else
			result.push_back({ { edges[i], edges[i + 1], winner.member, winner.rank }, different });
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

uint32_t CInitializerResets::restrict_to(uint32_t root, const std::vector<CArrayWrite>& spans)
{
	const uint32_t blocked = save({ 0, 0, UINT32_MAX, UINT32_MAX, UINT32_MAX });
	size_t next = 0;
	return spans.empty() ? blocked : restrict_to(root, 0, edges_.size() - 1, spans, next, blocked);
}

uint32_t CInitializerResets::restrict_to(
	uint32_t node, size_t lo, size_t hi, const std::vector<CArrayWrite>& spans, size_t& next, uint32_t blocked)
{
	while (next != spans.size() && spans[next].limit <= edges_[lo])
		++next;
	if (next == spans.size() || edges_[hi] <= spans[next].first)
		return blocked;
	const CArrayWrite& allowed = spans[next];
	if (allowed.first <= edges_[lo] && edges_[hi] <= allowed.limit)
		return add(node, lo, hi, allowed);
	Node result = nodes_[node];
	const size_t mid = lo + (hi - lo) / 2;
	result.left = restrict_to(result.left, lo, mid, spans, next, blocked);
	result.right = restrict_to(result.right, mid, hi, spans, next, blocked);
	result.min = std::max(result.floor, std::min(nodes_[result.left].min, nodes_[result.right].min));
	result.max = std::max(result.floor, std::max(nodes_[result.left].max, nodes_[result.right].max));
	return save(result);
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
