#include "sema/constant_floating.h"

#include <cmath>
#include <cstring>
#include <limits>

#include "lex/extended_float.h"
#include "sema/floating/binary128.h"
#include "sema/integral_arithmetic.h"

namespace sema {

namespace {

binary128::Bits bits(const ConstValue& value)
{
	return binary128::Bits{ value.bits, value.high };
}

} // namespace

ConstValue Binary128FromHost(const Type* type, long double value)
{
	binary128::Bits bits;
	if (!binary128::from_host(value, bits))
		return ConstValue();
	return Binary128Value(type, bits.low, bits.high);
}

bool Binary128Zero(const ConstValue& value)
{
	return binary128::zero(bits(value));
}

bool ConstantFloatingSignaling(const ConstValue& value)
{
	if (value.kind == ValueKind::Binary128)
		return binary128::nan(bits(value)) && ((value.high >> 47) & 1) == 0;
	if (value.kind != ValueKind::Floating || !std::isnan(value.floating))
		return false;
	// The x87 encoding's quiet bit is significand bit 62.
	unsigned char bytes[16] = {};
#if __LDBL_MANT_DIG__ != 64
	StoreExtended80(value.floating, bytes);
#else
	std::memcpy(bytes, &value.floating, sizeof value.floating);
#endif
	uint64_t significand = 0;
	std::memcpy(&significand, bytes, sizeof significand);
	return ((significand >> 62) & 1) == 0;
}

bool CStaticFloatingZeroDivision(const ConstValue& left, const ConstValue& right, ConstValue& result)
{
	// C Annex F.8.2 and F.8.4: translation produces the special value
	// directly. There is no division whose status flags could be observed.
	if (left.kind == ValueKind::Binary128)
	{
		const binary128::Bits a = bits(left), b = bits(right);
		if (!binary128::zero(b))
			return false;
		binary128::Bits value = binary128::infinity();
		if (binary128::nan(a))
			value = binary128::Bits{ a.low, a.high | binary128::quiet_nan(0).high };
		else if (binary128::zero(a))
			value = binary128::quiet_nan(0);
		else if (binary128::negative(a) != binary128::negative(b))
			value = binary128::negate(value);
		result = Binary128Value(left.type, value.low, value.high);
		return true;
	}
	if (right.floating != 0)
		return false;
	const long double infinity = std::numeric_limits<long double>::infinity();
	const long double value = std::isnan(left.floating)               ? left.floating
		: left.floating == 0                                          ? std::numeric_limits<long double>::quiet_NaN()
		: std::signbit(left.floating) != std::signbit(right.floating) ? -infinity
																	  : infinity;
	result = FloatingValue(left.type, value);
	return true;
}

ConstValue ConstantSine(const ConstValue& value)
{
	const Type* type = value.type;
	if (value.kind == ValueKind::Binary128)
	{
		if (Binary128Zero(value))
			return value;
		long double input;
		if (binary128::finite(bits(value)) && binary128::to_host(bits(value), 113, 16383, input))
			return Binary128FromHost(type, std::sin(input));
		return ConstValue();
	}
	if (value.kind != ValueKind::Floating || !std::isfinite(value.floating))
		return ConstValue();

	switch (FloatingRepresentation(type->fundamental, type->target))
	{
	case FundamentalType::Float:
		return FloatingValue(type, std::sin(static_cast<float>(value.floating)));
	case FundamentalType::Double:
		return FloatingValue(type, std::sin(static_cast<double>(value.floating)));
	case FundamentalType::LongDouble:
#if __LDBL_MANT_DIG__ == 113
		return FloatingValue(type, RoundExtended80(std::sin(value.floating)));
#elif __LDBL_MANT_DIG__ == 64
		return FloatingValue(type, std::sin(value.floating));
#else
		return ConstValue();
#endif
	default:
		return ConstValue();
	}
}

bool ConvertBinary128(ConstValue& value, const Type* target)
{
	if (Binary128Type(target))
	{
		binary128::Bits result;
		if (value.kind == ValueKind::Binary128)
			result = bits(value);
		else if (value.kind == ValueKind::Floating)
		{
			if (!binary128::from_host(value.floating, result))
				return false;
		}
		else if (value.kind == ValueKind::Integer)
		{
			IntegralKind kind;
			if (!IntegralKindOf(value.type, kind))
				return false;
			WideBits integer = kind.bits > 64 ? WideOf(value)
				: kind.is_signed ? static_cast<WideBits>(static_cast<__int128>(static_cast<int64_t>(value.bits)))
								 : value.bits;
			const bool sign = kind.is_signed && (integer >> 127) != 0;
			if (sign)
				integer = ~integer + 1;
			if (!binary128::from_integer(sign,
					binary128::Bits{ static_cast<uint64_t>(integer), static_cast<uint64_t>(integer >> 64) }, result))
				return false;
		}
		else
			return false;
		value = Binary128Value(target, result.low, result.high);
		return true;
	}
	if (value.kind != ValueKind::Binary128)
		return false;
	IntegralKind integral;
	if (IntegralKindOf(target, integral))
	{
		binary128::Bits result;
		if (!binary128::to_integer(bits(value), integral.bits, integral.is_signed, result))
			return false;
		value = integral.bits > 64 ? WideValue(target, (WideBits(result.high) << 64) | result.low)
								   : IntegerValue(target, ConvertIntegral(result.low, integral));
		return true;
	}
	if (target->kind != TypeKind::Fundamental)
		return false;
	const auto representation = FloatingRepresentation(target->fundamental, target->target);
	unsigned precision = 0;
	int maximum = 0;
	switch (representation)
	{
	case FundamentalType::Float16:
		precision = 11;
		maximum = 15;
		break;
	case FundamentalType::Float:
		precision = 24;
		maximum = 127;
		break;
	case FundamentalType::Double:
		precision = 53;
		maximum = 1023;
		break;
	case FundamentalType::LongDouble:
		precision = 64;
		maximum = 16383;
		break;
	case FundamentalType::BFloat16:
		precision = 8;
		maximum = 127;
		break;
	default:
		return false;
	}
	long double result = 0;
	if (!binary128::to_host(bits(value), precision, maximum, result))
		return false;
	value = FloatingValue(target, result);
	return true;
}

bool Binary128Fits(const ConstValue& value, const Type* target)
{
	if (value.kind != ValueKind::Binary128)
		return false;
	const auto representation = FloatingRepresentation(target->fundamental, target->target);
	if (representation == FundamentalType::Float16 || representation == FundamentalType::BFloat16)
	{
		long double rounded = 0;
		return binary128::to_host(bits(value), representation == FundamentalType::Float16 ? 11 : 8,
			representation == FundamentalType::Float16 ? 15 : 127, rounded);
	}
	ConstValue converted = value;
	return ConvertBinary128(converted, target);
}

bool Binary128Operation(
	TokenKind operation, const Type* type, const ConstValue& left, const ConstValue& right, ConstValue& result)
{
	binary128::Operation op;
	switch (operation)
	{
	case TokenKind::OP_PLUS:
		op = binary128::Operation::Add;
		break;
	case TokenKind::OP_MINUS:
		op = binary128::Operation::Subtract;
		break;
	case TokenKind::OP_STAR:
		op = binary128::Operation::Multiply;
		break;
	case TokenKind::OP_DIV:
		op = binary128::Operation::Divide;
		break;
	default:
		return false;
	}
	binary128::Bits value;
	if (!binary128::calculate(op, bits(left), bits(right), value))
		return false;
	result = Binary128Value(type, value.low, value.high);
	return true;
}

bool Binary128Comparison(TokenKind operation, const ConstValue& left, const ConstValue& right)
{
	const int order = binary128::compare(bits(left), bits(right));
	switch (operation)
	{
	case TokenKind::OP_EQ:
		return order == 0;
	case TokenKind::OP_NE:
		return order != 0;
	case TokenKind::OP_LT:
		return order == -1;
	case TokenKind::OP_GT:
		return order == 1;
	case TokenKind::OP_LE:
		return order == -1 || order == 0;
	default:
		return order == 0 || order == 1;
	}
}

} // namespace sema
