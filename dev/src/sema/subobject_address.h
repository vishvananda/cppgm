#pragma once

#include "sema/semantic_types.h"

namespace sema {

struct DataMember;

// An overlapping union member on the way from the storage root to the
// designated object. The type table interns links from outermost to innermost.
struct UnionSelection
{
	const UnionSelection* outer;
	const DataMember* member;
	int64_t offset;

	bool operator==(const UnionSelection& other) const;
};

// One named field or an array index on the path through the storage root.
struct SubobjectNameStep
{
	const DataMember* member;
	uint64_t index;
};

enum : uint32_t
{
	kUndescribedSubobject = uint32_t(-1),
	kUnnamedSubobjectPath = uint32_t(-2)
};

// A C++20 template argument's designation within its storage root. The
// referent type and union selections also specify its Itanium encoding.
struct SubobjectAddress
{
	const Type* referent;
	const UnionSelection* variant;
	int64_t offset;
	bool one_past;
	const Type* storage;
	// The path used when a specialization's function name is requested.
	mutable const SubobjectNameStep* name_path;
	mutable uint32_t name_path_size;

	bool whole_object() const { return referent == storage && variant == nullptr && offset == 0 && !one_past; }
	bool operator==(const SubobjectAddress& other) const;
};

// Used on pointer and reference template arguments. An entire object or
// function has no subobject descriptor.
inline const SubobjectAddress* SubobjectOf(const Type* argument)
{
	return reinterpret_cast<const SubobjectAddress*>(static_cast<uintptr_t>(argument->bound));
}

} // namespace sema
