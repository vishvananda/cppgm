#pragma once

#include <cstdint>

#include "ir_symbol_model.h"

// The x86-64 psABI classification (3.2.3) of an object of at most 16 bytes:
// the classes of its fields merged into its two eightbytes, then the
// classes= value (ir_model::ObjectClassFlag) that states them. The source
// lowering merges the fields of a C++ type; the LowIR library those of a
// record type.
namespace lowir {

// The psABI's classes while an object's fields are merged into its eightbytes.
enum AbiClass : uint8_t
{
	AC_NO_CLASS,
	AC_INTEGER,
	AC_SSE,
	AC_X87,
	AC_X87UP,
	AC_MEMORY,
	AC_SSEUP
};

static_assert(static_cast<unsigned>(AC_NO_CLASS) == ir_model::EB_NONE &&
		static_cast<unsigned>(AC_INTEGER) == ir_model::EB_INTEGER && static_cast<unsigned>(AC_SSE) == ir_model::EB_SSE,
	"merged classes below MEMORY's are eightbyte classes");

// Step 4(c): the class of an eightbyte holding fields of classes `a` and `b`
// (SSEUP only beside SSEUP or NO_CLASS; else as SSE).
inline uint8_t merged_class(uint8_t a, uint8_t b)
{
	if (a == b || b == AC_NO_CLASS)
		return a;
	if (a == AC_NO_CLASS)
		return b;
	if (a == AC_SSEUP)
		a = AC_SSE;
	if (b == AC_SSEUP)
		b = AC_SSE;
	if (a == b)
		return a;
	if (a == AC_MEMORY || b == AC_MEMORY)
		return AC_MEMORY;
	if (a == AC_INTEGER || b == AC_INTEGER)
		return AC_INTEGER;
	if (a == AC_X87 || a == AC_X87UP || b == AC_X87 || b == AC_X87UP)
		return AC_MEMORY;
	return AC_SSE;
}

// Step 5: the classes= value of an object whose eightbytes have the merged
// classes `first` and `second`. MEMORY if either is, or an X87UP not after
// X87; an X87 pair (one long double) is a class of its own.
inline uint8_t object_classes_value(uint8_t first, uint8_t second)
{
	// An SSEUP eightbyte after anything but SSE is SSE (step 5(d)).
	if (second == AC_SSEUP && first != AC_SSE)
		second = AC_SSE;
	if (first == AC_X87 && second == AC_X87UP)
		return ir_model::OC_STATED | ir_model::OC_X87;
	if (first <= AC_SSE && (second <= AC_SSE || second == AC_SSEUP))
		return static_cast<uint8_t>(ir_model::OC_STATED | first |
			((second == AC_SSEUP ? static_cast<uint8_t>(ir_model::EB_SSEUP) : second) << 2));
	return ir_model::OC_STATED | ir_model::OC_MEMORY;
}

// A SysV object result returned through a hidden destination consumes one
// integer argument register. A complex long double returns in the x87 pair.
inline bool sysv_object_result_in_memory(uint64_t bytes, uint8_t classes)
{
	return !(classes & ir_model::OC_COMPLEX_X87) && (bytes == 0 || bytes > 16 || (classes & ir_model::OC_MEMORY));
}

} // namespace lowir
