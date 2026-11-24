#pragma once

#include <cstdint>

#include "sema/c_initializer.h"

namespace sema {

struct ConstValue;

// A leaf assigns one value to its interval. Internal nodes subdivide
// their interval at its midpoint and null children preserve the source.
struct CArrayPatch
{
	const ConstValue* value;
	const CArrayPatch* lower;
	const CArrayPatch* upper;
};

struct CArrayConstant
{
	const CInitializer* initializer;
	const ConstValue* prefix;
	const CArrayPatch* patches;
	// A subobject update retains the unchanged values of the source array.
	const CArrayConstant* previous;

	bool has_layers() const
	{
		return previous != nullptr ||
			(initializer != nullptr && initializer->projection != CInitializerProjection::None);
	}
};

template<class Visitor>
bool VisitCArrayPatches(const CArrayPatch* patch, uint64_t first, uint64_t limit, Visitor& visit)
{
	if (patch == nullptr)
		return true;
	if (patch->value != nullptr)
		return visit(first, limit, *patch->value);
	const uint64_t mid = first + (limit - first) / 2;
	return VisitCArrayPatches(patch->lower, first, mid, visit) && VisitCArrayPatches(patch->upper, mid, limit, visit);
}

} // namespace sema
