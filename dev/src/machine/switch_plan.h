#pragma once

#include <cstdint>
#include <utility>
#include <vector>

namespace machine {

struct CaseCluster
{
	int64_t lo, hi;
	uint32_t target;
};

// Native case clusters compete with a bounded indirect branch table: a
// dense switch of more targets, or of at least kNativeSwitchClusters runs
// (unless they all go to one target within 64 values, a bit test), jumps
// through a table. Six keeps the compares of a switch of up to five runs;
// four is LLVM's smallest jump table.
constexpr uint32_t kNativeSwitchTargets = 5;
constexpr uint32_t kNativeSwitchClusters = 6;
// Native case tests (runs of consecutive values per target) of at least
// kNativeSearchRuns with kNativeSearchGaps gaps between them (values the
// fallback takes) search by halves; consecutive runs, an enumeration's,
// keep their order.
constexpr uint32_t kNativeSearchRuns = 4;
constexpr uint32_t kNativeSearchGaps = 2;
bool native_table(const std::vector<std::pair<int64_t, uint32_t>>& cases, uint32_t clusters, uint32_t targets);

// Canonical integer values and logical destinations; physical branches remain
// the consumer's responsibility. Repeated values retain their first target.
void cluster_switch_cases(std::vector<std::pair<int64_t, uint32_t>>& cases, std::vector<CaseCluster>& clusters,
	std::vector<uint32_t>& targets, uint32_t target_limit);

bool dense_switch(const std::vector<std::pair<int64_t, uint32_t>>& cases, uint32_t maximum_entries, uint32_t spread,
	uint32_t minimum_cases);

} // namespace machine
