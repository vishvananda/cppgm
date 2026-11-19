#pragma once

#include <vector>

#include "sema/constant_values.h"
#include "support/memory/arena.h"
#include "support/pointer_map.h"

namespace sema {

struct ConstAllocation
{
	ConstValue* value;
	const Type* type;
	uint32_t generation;
	bool array;
};

// Allocated only when an evaluation actually needs shared class/part
// templates or storage that a callee writes into a caller's object.
struct ConstantStorage
{
	Arena immutable_arena;
	Arena mutable_arena;
	PointerMap classes[2];
	std::vector<ConstValue> values;
	PointerMap complete;
	struct Allocation
	{
		uint32_t object;
		uint32_t generation;
		Arena::Mark mark;
	};
	std::vector<Allocation> allocations;
	std::vector<ConstAllocation> heap;
	uint64_t heap_values = 0;
	uint32_t live_allocations = 0;
};

} // namespace sema
