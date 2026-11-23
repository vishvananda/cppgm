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

// Each version indexes the latest whole-object reset along a typed
// destination path. Siblings share their ancestor's untouched intervals.
class CInitializerResets
{
public:
	explicit CInitializerResets(const std::vector<CArrayWrite>& writes);

	uint32_t root(const std::vector<CArrayWrite>& spans);
	uint32_t add(uint32_t root, const CArrayWrite& write);
	void clip(uint32_t root, const CArrayWrite& write, std::vector<CArrayWrite>& retained) const;

private:
	struct Node
	{
		uint32_t left, right, floor, min, max;
	};

	uint32_t root(const std::vector<CArrayWrite>& spans, size_t& next, size_t lo, size_t hi);
	uint32_t add(uint32_t node, size_t lo, size_t hi, const CArrayWrite& write);
	uint32_t save(Node node);
	void clip(uint32_t node, size_t lo, size_t hi, const CArrayWrite& write, uint32_t floor,
		std::vector<CArrayWrite>& retained) const;

	std::vector<uint64_t> edges_;
	std::vector<Node> nodes_;
};

} // namespace sema
