#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace machine {

// Per-slot counts with range add and range maximum (a segment tree with
// pending adds): the registers live values of one class need at a slot.
// Beside them, the registers assigned over ranges (an add's `regs`): the
// set whose ranges meet a query range.
class PressureTree
{
public:
	void build(const std::vector<int32_t>& base);
	// Bottom-up over the canonical nodes of [first, last]. A left-side
	// node's ancestors are those of the leaf before `first`, a right-side
	// node's those of the leaf after `last`: each side's maximum takes
	// their pending adds as it climbs, then the shared ones to the root.
	int32_t max(uint32_t first, uint32_t last) const;
	void add(uint32_t first, uint32_t last, int32_t delta, uint32_t regs = 0);
	// Only the register sets over `slots` slots, without counts: `add_regs`
	// and `regs` then work, `max` and `add` do not.
	void build_regs(size_t slots);
	void add_regs(uint32_t first, uint32_t last, uint32_t regs);
	// The registers some add's range meeting [first, last] carried: those
	// below the range's canonical nodes and those covering their ancestors
	// (any node meeting the range lies within one of them or holds one).
	uint32_t regs(uint32_t first, uint32_t last) const;

private:
	int32_t query(size_t node, size_t lo, size_t hi, size_t first, size_t last) const;
	void update(size_t node, size_t lo, size_t hi, size_t first, size_t last, int32_t delta, uint32_t regs);
	uint32_t regs_of(size_t node, size_t lo, size_t hi, size_t first, size_t last) const;

	size_t size_ = 1;
	std::vector<int32_t> max_;
	std::vector<int32_t> add_;
	std::vector<uint32_t> cover_; // per node: the registers of adds covering it whole
	std::vector<uint32_t> below_; // per node: cover_ over its subtree
};

} // namespace machine
