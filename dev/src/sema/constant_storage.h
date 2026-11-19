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

// Storage taken only when an evaluation needs class templates, allocations
// or objects with destructors.
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
	struct Destruction
	{
		ConstPlace place;
		uint32_t location;
		// A reference member or list view in this object extended the
		// temporary. The child follows it if that object is itself extended.
		uint32_t owner;
		bool retained;
	};
	std::vector<Destruction> destructions;
	std::vector<Destruction> temporaries;
	bool has_dependent_temporaries = false;
	std::vector<ConstAllocation> heap;
	uint64_t heap_values = 0;
	uint32_t live_allocations = 0;
};

} // namespace sema
