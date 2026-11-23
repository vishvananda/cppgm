#pragma once

#include <cstddef>
#include <cstdint>

#include "types/fundamental_type.h"

// A decoded literal's count includes the terminating null. Its little-endian
// code units follow the header in the same arena allocation.
struct StringLiteralValue
{
	uint32_t count;
	FundamentalType element;
	uint8_t width;
	bool numeric_escapes;

	const unsigned char* data() const { return reinterpret_cast<const unsigned char*>(this + 1); }

	uint32_t unit(std::size_t index) const
	{
		const unsigned char* bytes = data() + index * width;
		if (width == 1)
			return bytes[0];
		const uint32_t low = bytes[0] | uint32_t(bytes[1]) << 8;
		return width == 2 ? low : low | uint32_t(bytes[2]) << 16 | uint32_t(bytes[3]) << 24;
	}
};
