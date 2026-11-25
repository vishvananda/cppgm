#pragma once

#include <cstdint>

namespace machine {

// Word division in a 64-bit product (Granlund and Montgomery 1994, section 6):
// (x * multiplier) >> shift, for 0 < d < 2^31 not a power of two, and x below
// 2^precision in magnitude. The multiplier is the smallest that serves and
// may require more than 32 bits. Signed callers correct the rounded quotient.
struct WordMagic
{
	uint64_t multiplier;
	unsigned shift;
};

inline WordMagic word_magic(uint64_t d, unsigned precision)
{
	unsigned bits = 0;
	while ((uint64_t(1) << bits) < d)
		++bits;
	const unsigned power = 32 + bits;
	uint64_t low = (uint64_t(1) << power) / d;
	uint64_t high = ((uint64_t(1) << power) + (uint64_t(1) << (power - precision))) / d;
	unsigned post = bits;
	while (post > 0 && (low >> 1) < (high >> 1))
	{
		low >>= 1;
		high >>= 1;
		--post;
	}
	return { high, 32 + post };
}

// Doubleword division in the high half of a 128-bit product.
struct UnsignedMagic
{
	uint64_t multiplier;
	unsigned shift;
	bool add;
};

struct SignedMagic
{
	int64_t multiplier;
	unsigned shift;
};

// Hacker's Delight 10-10 (magicu2): the multiplier and shift for an
// unsigned divisor d >= 2 that is not a power of two.
template<unsigned Bits = 64>
inline UnsignedMagic unsigned_magic(uint64_t d)
{
	const uint64_t top = uint64_t(1) << (Bits - 1);
	const uint64_t mask = (top - 1) | top;
	UnsignedMagic magic = { 0, 0, false };
	const uint64_t nc = mask - ((0 - d) & mask) % d;
	unsigned p = Bits - 1;
	uint64_t q1 = top / nc, r1 = top - q1 * nc;
	uint64_t q2 = (top - 1) / d, r2 = (top - 1) - q2 * d;
	uint64_t delta = 0;
	do
	{
		++p;
		if (r1 >= nc - r1)
		{
			q1 = (2 * q1 + 1) & mask;
			r1 = 2 * r1 - nc;
		}
		else
		{
			q1 = (2 * q1) & mask;
			r1 = 2 * r1;
		}
		if (r2 + 1 >= d - r2)
		{
			if (q2 >= top - 1)
				magic.add = true;
			q2 = (2 * q2 + 1) & mask;
			r2 = 2 * r2 + 1 - d;
		}
		else
		{
			if (q2 >= top)
				magic.add = true;
			q2 = (2 * q2) & mask;
			r2 = 2 * r2 + 1;
		}
		delta = d - 1 - r2;
	} while (p < 2 * Bits && (q1 < delta || (q1 == delta && r1 == 0)));
	magic.multiplier = (q2 + 1) & mask;
	magic.shift = p - Bits;
	return magic;
}

// A multiplier below 2^64 and the shift after it for a dividend of `bits` bits
// and an odd divisor d >= 3 (Granlund and Montgomery, 1994).
inline UnsignedMagic narrow_unsigned_magic(uint64_t d, unsigned bits)
{
	typedef unsigned __int128 u128;
	unsigned log = 64 - static_cast<unsigned>(__builtin_clzll(d - 1));
	UnsignedMagic magic = { 0, log, false };
	const u128 low = (u128(1) << (64 + log)) / d;
	const u128 high = ((u128(1) << (64 + log)) + (u128(1) << (64 + log - bits))) / d;
	u128 lo = low, hi = high;
	while (magic.shift > 0 && lo >> 1 < hi >> 1)
	{
		lo >>= 1;
		hi >>= 1;
		--magic.shift;
	}
	magic.multiplier = static_cast<uint64_t>(hi);
	return magic;
}

// Hacker's Delight 10-1 (magic): for a signed divisor with |d| >= 2
// that is not a power of two.
template<unsigned Bits = 64>
inline SignedMagic signed_magic(int64_t d)
{
	const uint64_t top = uint64_t(1) << (Bits - 1);
	const uint64_t ad = d < 0 ? 0 - static_cast<uint64_t>(d) : static_cast<uint64_t>(d);
	const uint64_t t = top + (d < 0);
	const uint64_t anc = t - 1 - t % ad;
	unsigned p = Bits - 1;
	uint64_t q1 = top / anc, r1 = top - q1 * anc;
	uint64_t q2 = top / ad, r2 = top - q2 * ad;
	uint64_t delta = 0;
	do
	{
		++p;
		q1 = 2 * q1;
		r1 = 2 * r1;
		if (r1 >= anc)
		{
			++q1;
			r1 -= anc;
		}
		q2 = 2 * q2;
		r2 = 2 * r2;
		if (r2 >= ad)
		{
			++q2;
			r2 -= ad;
		}
		delta = ad - r2;
	} while (q1 < delta || (q1 == delta && r1 == 0));
	const uint64_t raw = d < 0 ? 0 - (q2 + 1) : q2 + 1;
	const int64_t multiplier = Bits == 32 ? static_cast<int32_t>(raw) : static_cast<int64_t>(raw);
	return { multiplier, p - Bits };
}

} // namespace machine
