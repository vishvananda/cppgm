#pragma once

#include <cstdint>
#include <vector>

namespace machine {

// The frameless region of shrink-wrapping, shared by the x86 and AArch64
// backends. A block needs the frame when it has a call, a frame access or
// an instruction the target cannot run before its prologue. The blocks a
// frame-needing block reaches are framed: they never return to the region.
struct ShrinkGraph
{
	std::vector<std::vector<uint32_t>> succs;
	std::vector<uint8_t> needs, tabled, returns;
	std::vector<uint32_t> counts;
	// A block that needs no frame, has at most the cap's instructions and
	// ends in a return.
	std::vector<uint8_t> short_return;
};

enum class ShrinkPlan
{
	// Framed joins on the way to a return are copied within a budget.
	Wide,
	// Only short return blocks are copied.
	Narrow,
	// The entry with copies of the short returns it enters and of other
	// frameless blocks within the minimal budget; any other successor
	// is an exit.
	Minimal
};

struct ShrinkRegion
{
	std::vector<uint8_t> region, copied;
	std::vector<uint32_t> exits; // distinct framed targets, in visiting order
};

// Blocks a frame-needing block reaches (it never returns to the region).
void framed_blocks(const ShrinkGraph& graph, std::vector<uint8_t>& framed);

// The region the entry (block 0) reaches through blocks not framed under
// one plan, copying framed blocks the plan allows. Fails when the region
// has no return or no exit, or an edge leaves the function's blocks.
bool shrink_region(const ShrinkGraph& graph, const std::vector<uint8_t>& framed, ShrinkPlan mode, uint32_t copy_budget,
	uint32_t minimal_budget, ShrinkRegion& out);

// The region's blocks (originals and copies) an exit is still reachable from.
void exit_reaching(const ShrinkGraph& graph, const ShrinkRegion& region, std::vector<uint8_t>& to_exit);

} // namespace machine
