#include "machine/shrink_region.h"

#include <algorithm>

namespace machine {

void framed_blocks(const ShrinkGraph& graph, std::vector<uint8_t>& framed)
{
	const uint32_t n = static_cast<uint32_t>(graph.needs.size());
	framed = graph.needs;
	std::vector<uint32_t> work;
	for (uint32_t b = 0; b < n; ++b)
		if (framed[b])
			work.push_back(b);
	while (!work.empty())
	{
		const uint32_t b = work.back();
		work.pop_back();
		for (uint32_t s : graph.succs[b])
			if (s < n && !framed[s])
			{
				framed[s] = 1;
				work.push_back(s);
			}
	}
}

bool shrink_region(const ShrinkGraph& graph, const std::vector<uint8_t>& framed, ShrinkPlan mode, uint32_t copy_budget,
	uint32_t minimal_budget, ShrinkRegion& out)
{
	const uint32_t n = static_cast<uint32_t>(graph.needs.size());
	const bool wide = mode == ShrinkPlan::Wide;
	uint32_t budget = copy_budget;
	auto copyable = [&](uint32_t b) {
		return wide ? !graph.needs[b] && !graph.tabled[b] && graph.counts[b] <= budget : graph.short_return[b] != 0;
	};
	auto& region = out.region;
	auto& copied = out.copied;
	auto& exits = out.exits;
	region.assign(n, 0);
	copied.assign(n, 0);
	exits.clear();
	region[0] = 1;
	std::vector<uint32_t> work(1, 0);
	bool returns = false;
	while (!work.empty())
	{
		const uint32_t b = work.back();
		work.pop_back();
		returns = returns || graph.returns[b];
		for (uint32_t s : graph.succs[b])
		{
			if (s >= n || (mode == ShrinkPlan::Minimal && s == 0))
				return false;
			if (mode == ShrinkPlan::Minimal)
			{
				if (copied[s])
					continue;
				const bool short_return = graph.short_return[s] != 0;
				if (short_return || (!graph.needs[s] && !graph.tabled[s] && graph.counts[s] <= minimal_budget))
				{
					if (!short_return)
						minimal_budget -= graph.counts[s];
					copied[s] = 1;
					work.push_back(s);
				}
				else if (std::find(exits.begin(), exits.end(), s) == exits.end())
					exits.push_back(s);
			}
			else if (framed[s] && (copied[s] || copyable(s)))
			{
				if (!copied[s])
				{
					copied[s] = 1;
					budget -= graph.counts[s];
					work.push_back(s);
				}
			}
			else if (framed[s])
			{
				if (std::find(exits.begin(), exits.end(), s) == exits.end())
					exits.push_back(s);
			}
			else if (!region[s])
			{
				region[s] = 1;
				work.push_back(s);
			}
		}
	}
	return returns && !exits.empty();
}

void exit_reaching(const ShrinkGraph& graph, const ShrinkRegion& region, std::vector<uint8_t>& to_exit)
{
	const uint32_t n = static_cast<uint32_t>(graph.needs.size());
	to_exit.assign(n, 0);
	for (bool grew = true; grew;)
	{
		grew = false;
		for (uint32_t b = 0; b < n; ++b)
		{
			if ((!region.region[b] && !region.copied[b]) || to_exit[b])
				continue;
			for (uint32_t s : graph.succs[b])
				if (s >= n || (!region.region[s] && !region.copied[s]) || to_exit[s])
				{
					to_exit[b] = 1;
					grew = true;
					break;
				}
		}
	}
}

} // namespace machine
