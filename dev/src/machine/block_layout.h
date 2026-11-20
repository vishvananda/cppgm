#pragma once

#include <algorithm>
#include <cstdint>
#include <vector>

// Target-independent pieces of code placement over a function's blocks,
// numbered with the entry as block 0 and successors in CSR form: the loops
// a depth-first walk finds, an estimate of each block's executions, and the
// rotation of a loop's blocks so that the cheapest block heads the loop's
// run in a block order. A backend states the branch odds and what a block
// costs before the block that follows it.
namespace machine {

constexpr uint32_t kNoBlock = 0xffffffffu;

struct PlacementGraph
{
	std::vector<uint32_t> succ_first, succs; // successor slots by block
	uint32_t size() const { return succ_first.empty() ? 0 : static_cast<uint32_t>(succ_first.size() - 1); }
};

// Back edges go to a block on the walk's stack from the entry. A natural
// loop holds its header and the blocks reaching a back edge's source without
// passing the header. A loop whose walk reaches the entry (a cycle entered in
// two places) is not kept.
struct PlacementLoops
{
	std::vector<uint8_t> back;            // per successor slot
	std::vector<uint32_t> post;           // reachable blocks in postorder
	std::vector<uint32_t> innermost;      // per block: its smallest loop or kNoBlock
	std::vector<uint32_t> header, parent; // per loop; parent is the smallest loop holding the header's loop
	std::vector<uint32_t> first, members; // per loop: its blocks (CSR), ascending
	bool contains(uint32_t loop, uint32_t block) const
	{
		for (uint32_t l = innermost[block]; l != kNoBlock; l = parent[l])
			if (l == loop)
				return true;
		return false;
	}
	bool is_header(uint32_t block) const { return innermost[block] != kNoBlock && header[innermost[block]] == block; }
	uint32_t count() const { return static_cast<uint32_t>(header.size()); }
};

void find_placement_loops(const PlacementGraph& graph, PlacementLoops& loops);

// The entry's 2^20 spread in reverse postorder over forward edges by each
// slot's share (per mille of its block's executions), a loop header taking
// eight times its inflow. Unreachable blocks weigh 0.
void placement_frequencies(const PlacementGraph& graph, const PlacementLoops& loops,
	const std::vector<uint32_t>& shares, std::vector<uint64_t>& frequency);

// Chains the blocks along their heaviest edges (slot_weight per successor
// slot; 0 never falls through) loop by loop, smallest first. A loop's
// chains join into one run: the chains that end in a jump to the header,
// the header's chain, then the loop's other chains. The part up to the
// other chains then rotates to the cut that costs least: `cost(b, next)` prices block b followed by
// `next` (kNoBlock: no block), and a cut also prices the loop's heaviest
// entering block before the run and the run's last block before its
// heaviest exit. An enclosing loop treats the run as one unit, entered at
// its header from a block that falls into the run. The function's chains
// follow the entry's in block order. Back edges, edges into block 0 and
// edges closing a cycle never join; ties keep the order. A cut never splits
// an inner loop's run. O(edges log edges + loops * run length), with runs
// of at most kMaxRotatedRun blocks rotated.
constexpr uint32_t kMaxRotatedRun = 1024;

class LoopChains
{
public:
	LoopChains(const PlacementGraph& graph, const PlacementLoops& loops) : graph_(graph), loops_(loops) {}

	template<typename Cost>
	void order(const std::vector<uint64_t>& slot_weight, Cost cost, std::vector<uint32_t>& order)
	{
		prepare(slot_weight);
		for (uint32_t l = loops_.count(); l-- > 0;)
		{
			join(l);
			if (run_head_[l] != kNoBlock)
				rotate(l, cost);
		}
		join(loops_.count());
		emit(order);
	}

private:
	struct Edge
	{
		uint64_t weight;
		uint32_t from, to, level;
	};

	void prepare(const std::vector<uint64_t>& slot_weight);
	void join(uint32_t level);
	bool link(uint32_t from, uint32_t to, uint32_t level);
	void emit(std::vector<uint32_t>& order) const;
	uint32_t unit(uint32_t l, uint32_t b) const;
	uint32_t below(uint32_t l, uint32_t b) const;

	// Rotate the header's chain within the run; the loop's other chains
	// stay after it.
	template<typename Cost>
	void rotate(uint32_t l, Cost& cost)
	{
		run_.clear();
		for (uint32_t b = run_head_[l]; b != side_head_[l]; b = next_[b])
			run_.push_back(b);
		const uint32_t k = static_cast<uint32_t>(run_.size());
		if (k < 2 || k > kMaxRotatedRun)
			return;
		const uint32_t above = entering_[l], side = side_head_[l];
		auto before = [&](uint32_t b, uint32_t next) { return b == kNoBlock ? 0 : cost(b, next); };
		auto after = [&](uint32_t b) { return cost(b, side != kNoBlock ? side : below(l, b)); };
		// link_cost_[i]: the cost of run_[i] before run_[i + 1].
		link_cost_.assign(k, 0);
		uint64_t inside = 0;
		for (uint32_t i = 0; i + 1 < k; ++i)
			inside += link_cost_[i] = cost(run_[i], run_[i + 1]);
		const uint64_t wrap = cost(run_[k - 1], run_[0]);
		uint64_t best = inside + before(above, run_[0]) + after(run_[k - 1]);
		uint32_t cut = 0;
		for (uint32_t j = 1; j < k; ++j)
		{
			if (unit(l, run_[j - 1]) == unit(l, run_[j]))
				continue;
			const uint64_t total = inside - link_cost_[j - 1] + wrap + before(above, run_[j]) + after(run_[j - 1]);
			if (total < best)
			{
				best = total;
				cut = j;
			}
		}
		if (cut == 0)
			return;
		const uint32_t whole = tail_[run_head_[l]];
		std::rotate(run_.begin(), run_.begin() + cut, run_.end());
		const uint32_t last = side != kNoBlock ? whole : run_.back();
		for (uint32_t i = 0; i < k; ++i)
		{
			prev_[run_[i]] = i ? run_[i - 1] : kNoBlock;
			next_[run_[i]] = i + 1 < k ? run_[i + 1] : side;
		}
		if (side != kNoBlock)
			prev_[side] = run_.back();
		run_head_[l] = run_.front();
		head_[last] = run_.front();
		tail_[run_.front()] = last;
	}

	const PlacementGraph& graph_;
	const PlacementLoops& loops_;
	std::vector<Edge> edges_;                         // by level
	std::vector<uint32_t> level_first_;               // each level's first edge
	std::vector<uint64_t> weight_;                    // per slot
	std::vector<uint32_t> next_, prev_, head_, tail_; // head_ valid at a chain's last block, tail_ at its first
	std::vector<uint32_t> run_head_, side_head_;      // per loop: its run, the first block after the header's chain
	std::vector<uint32_t> entering_;                  // per loop: its heaviest entering block
	std::vector<uint32_t> run_, heads_, sides_;
	std::vector<uint64_t> link_cost_;
};

} // namespace machine
