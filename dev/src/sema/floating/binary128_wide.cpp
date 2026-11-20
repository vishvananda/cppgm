#include "sema/floating/binary128_internal.h"

#include "lex/interchange_float.h"

namespace sema {
namespace binary128 {

namespace {

struct DoubleWide
{
	Wide low;
	Wide high;
};

unsigned wide_length(DoubleWide value)
{
	return value.high != 0 ? 128 + length(value.high) : length(value.low);
}

DoubleWide shift_left(DoubleWide value, unsigned count)
{
	if (count == 0)
		return value;
	if (count >= 128)
		return DoubleWide{ 0, value.low << (count - 128) };
	return DoubleWide{ value.low << count, (value.high << count) | (value.low >> (128 - count)) };
}

DoubleWide shift_right_jam(DoubleWide value, unsigned count)
{
	if (count == 0)
		return value;
	if (count >= 128)
		return DoubleWide{ shift_jam(value.high, count - 128) | (value.low != 0), 0 };
	const Wide discarded = value.low << (128 - count);
	return DoubleWide{ (value.low >> count) | (value.high << (128 - count)) | (discarded != 0), value.high >> count };
}

bool less(DoubleWide left, DoubleWide right)
{
	return left.high != right.high ? left.high < right.high : left.low < right.low;
}

DoubleWide add(DoubleWide left, DoubleWide right)
{
	const Wide low = left.low + right.low;
	return DoubleWide{ low, left.high + right.high + (low < left.low) };
}

DoubleWide subtract(DoubleWide left, DoubleWide right)
{
	return DoubleWide{ left.low - right.low, left.high - right.high - (left.low < right.low) };
}

Decoded shortened(bool negative, DoubleWide value, int64_t exponent)
{
	const unsigned bits = wide_length(value);
	const unsigned shift = bits > 126 ? bits - 126 : 0;
	return Decoded{ negative, shift_right_jam(value, shift).low, exponent + shift };
}

void normalize(Decoded& value)
{
	const unsigned shift = 113 - length(value.magnitude);
	value.magnitude <<= shift;
	value.exponent -= shift;
}

DoubleWide multiply(Wide left, Wide right)
{
	const uint64_t a[2]{ static_cast<uint64_t>(left), static_cast<uint64_t>(left >> 64) };
	const uint64_t b[2]{ static_cast<uint64_t>(right), static_cast<uint64_t>(right >> 64) };
	uint64_t words[4] = {};
	for (unsigned i = 0; i < 2; ++i)
	{
		Wide carry = 0;
		for (unsigned j = 0; j < 2; ++j)
		{
			const Wide next = Wide(a[i]) * b[j] + words[i + j] + carry;
			words[i + j] = static_cast<uint64_t>(next);
			carry = next >> 64;
		}
		words[i + 2] = static_cast<uint64_t>(carry);
	}
	return DoubleWide{ (Wide(words[1]) << 64) | words[0], (Wide(words[3]) << 64) | words[2] };
}

Decoded fused(const Decoded& left, const Decoded& right, const Decoded& addend)
{
	const bool negative = left.negative != right.negative;
	if (left.magnitude == 0 || right.magnitude == 0)
	{
		if (addend.magnitude != 0)
			return addend;
		return Decoded{ negative && addend.negative, 0, 0 };
	}
	DoubleWide product = multiply(left.magnitude, right.magnitude);
	const int64_t product_exponent = left.exponent + right.exponent;
	if (addend.magnitude == 0)
		return shortened(negative, product, product_exponent);

	// Align the full product and addend with one carry bit. If alignment
	// loses low bits, their sticky bit can affect rounding, and the large
	// exponent difference precludes cancellation of the high bits.
	const unsigned product_shift = 255 - wide_length(product);
	const unsigned addend_shift = 255 - length(addend.magnitude);
	const int64_t product_scale = product_exponent - product_shift;
	const int64_t addend_scale = addend.exponent - addend_shift;
	const int64_t scale = product_scale > addend_scale ? product_scale : addend_scale;
	product = shift_right_jam(shift_left(product, product_shift), static_cast<unsigned>(scale - product_scale));
	const DoubleWide tail = shift_right_jam(
		shift_left(DoubleWide{ addend.magnitude, 0 }, addend_shift), static_cast<unsigned>(scale - addend_scale));
	if (negative == addend.negative)
		return shortened(negative, add(product, tail), scale);
	if (less(product, tail))
		return shortened(addend.negative, subtract(tail, product), scale);
	Decoded result = shortened(negative, subtract(product, tail), scale);
	result.negative = result.magnitude != 0 && result.negative;
	return result;
}

bool inexact_subnormal(const Decoded& value, const InterchangeFormat& format)
{
	const int64_t minimum_exponent = 1 - format.max_exponent;
	if (value.magnitude == 0 || value.exponent + length(value.magnitude) > minimum_exponent)
		return false;
	const int64_t shift = minimum_exponent - (format.precision - 1) - value.exponent;
	return shift >= 128 || (shift > 0 && (value.magnitude << (128 - shift)) != 0);
}

} // namespace

Decoded product(const Decoded& left, const Decoded& right)
{
	return shortened(
		left.negative != right.negative, multiply(left.magnitude, right.magnitude), left.exponent + right.exponent);
}

bool fused_multiply_add(Bits left, Bits right, Bits addend, const InterchangeFormat& format, Bits& result)
{
	if (!finite(left) || !finite(right) || !finite(addend))
		return false;
	const Decoded value = fused(decode(left), decode(right), decode(addend));
	return !inexact_subnormal(value, format) &&
		RoundInterchangeValue(value.negative, static_cast<uint64_t>(value.magnitude),
			static_cast<uint64_t>(value.magnitude >> 64), value.exponent, format, result.low, result.high);
}

Decoded quotient(Decoded left, Decoded right)
{
	normalize(left);
	normalize(right);
	Wide remainder = left.magnitude;
	Wide value = remainder >= right.magnitude ? 1 : 0;
	if (value != 0)
		remainder -= right.magnitude;
	for (unsigned i = 0; i < 116; ++i)
	{
		value <<= 1;
		remainder <<= 1;
		if (remainder >= right.magnitude)
		{
			remainder -= right.magnitude;
			value |= 1;
		}
	}
	if (remainder != 0)
		value |= 1;
	return Decoded{ left.negative != right.negative, value, left.exponent - right.exponent - 116 };
}

} // namespace binary128
} // namespace sema
