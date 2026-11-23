#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace sema {

struct CArrayWrite
{
	uint64_t first, limit;
	uint32_t value, rank;
};

std::vector<CArrayWrite> WinningInitializerSpans(std::vector<CArrayWrite>& writes);

struct CArrayRectangle
{
	uint64_t row, row_limit, column, column_limit;
	uint32_t value;
};

// Input writes run in source order. A write carrying no_value masks older
// writes in its rectangle without contributing a value to the result.
std::vector<CArrayRectangle> WinningInitializerRectangles(
	const std::vector<CArrayRectangle>& writes, uint32_t no_value);

// Index disjoint whole-object writes so an independent member update
// skips entire regions whose resets are uniformly older or newer.
class CInitializerResets
{
public:
	CInitializerResets(const std::vector<CArrayWrite>& spans, uint64_t extent);

	void clip(const CArrayWrite& write, std::vector<CArrayWrite>& retained) const;

private:
	struct RankBounds
	{
		uint32_t min, max;
	};

	void clip(size_t node, size_t lo, size_t hi, const CArrayWrite& write, std::vector<CArrayWrite>& retained) const;

	std::vector<uint64_t> edges_;
	std::vector<RankBounds> bounds_;
	size_t leaves_ = 0;
};

} // namespace sema
