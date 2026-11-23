#include "lower/function_lowering.h"

#include "lowir/literals.h"

namespace lower {

namespace {

using lowir::BinaryOp;
using lowir::ComparePredicate;

const lowir::Type kI32 = lowir::Type::scalar(lowir::TypeKind::I32);
const lowir::Type kI64 = lowir::Type::scalar(lowir::TypeKind::I64);
constexpr uint64_t kMagnitude = 0x7fffffffffffffffULL;
constexpr uint64_t kInfinity = 0x7fff000000000000ULL;
constexpr uint64_t kLeastNormal = 0x0001000000000000ULL;
constexpr uint64_t kQuietBit = 0x0000800000000000ULL;

} // namespace

lowir::Value FunctionLowering::quad_storage(const RValue& x)
{
	Place storage = Place();
	storage.storage = lowir::Value::slot(generated_slot(lowir::SlotKind::SoftFloat, x.type));
	store(x.type, x, storage);
	return address_of(storage);
}

RValue FunctionLowering::quad_magnitude(const RValue& high, const RValue* low)
{
	const RValue magnitude = binary(BinaryOp::And, kI64, high, integer(kI64, kMagnitude));
	if (low == nullptr)
		return magnitude;
	// Jam a nonzero low word into the high word's least significant bit.
	// This distinguishes zero and infinity from the adjacent subnormals
	// and NaNs without a wide comparison or a second threshold test.
	const RValue tail = compare(ComparePredicate::Ne, kI64, *low, integer(kI64, 0));
	return binary(BinaryOp::Or, kI64, magnitude, tail);
}

void FunctionLowering::quad_invalid_if(const RValue& unordered)
{
	if (target_model::is_wasm(program_.target))
		return;
	// Comparison libcalls need not update the hardware status register.
	// Signal on the native exceptional path using the existing strict compare.
	const auto invalid = new_block(lowir::BlockKind::IfThen);
	const auto done = new_block(lowir::BlockKind::IfEnd);
	branch(unordered, invalid, done, lowir::BranchPrediction::Unlikely);
	place(invalid);
	const auto f64 = lowir::Type::scalar(lowir::TypeKind::F64);
	const RValue nan = floating(f64, lowir::special_float(f64.kind(), lowir::SpecialFloat::QuietNaN, false));
	compare(ComparePredicate::Lt, f64, nan, floating(f64, lowir::float_literal(f64.kind(), 0)), true);
	jump(done);
	place(done);
}

RValue FunctionLowering::quad_compare(
	ComparePredicate predicate, const RValue& left, const RValue& right, bool signaling)
{
	const bool reverse = predicate == ComparePredicate::Gt || predicate == ComparePredicate::Ge;
	const lowir::Value a = quad_storage(reverse ? right : left);
	const lowir::Value b = quad_storage(reverse ? left : right);
	const RValue ah = lane_bits(a, 8, 1), al = lane_bits(a, 8, 0);
	const RValue bh = lane_bits(b, 8, 1), bl = lane_bits(b, 8, 0);
	const RValue zero = integer(kI64, 0), inf = integer(kI64, kInfinity);
	const RValue am = quad_magnitude(ah, &al), bm = quad_magnitude(bh, &bl);
	const RValue a_nan = compare(ComparePredicate::Ugt, kI64, am, inf);
	const RValue b_nan = compare(ComparePredicate::Ugt, kI64, bm, inf);
	const RValue unordered = binary(BinaryOp::Or, kI64, a_nan, b_nan);
	if (signaling)
		quad_invalid_if(unordered);

	const RValue both_zero = compare(ComparePredicate::Eq, kI64, binary(BinaryOp::Or, kI64, am, bm), zero);
	const bool inclusive = predicate == ComparePredicate::Le || predicate == ComparePredicate::Ge;
	RValue relation;
	if (predicate == ComparePredicate::Ne)
	{
		const RValue high = binary(BinaryOp::Xor, kI64, ah, bh);
		const RValue low = binary(BinaryOp::Xor, kI64, al, bl);
		relation = compare(ComparePredicate::Ne, kI64, binary(BinaryOp::Or, kI64, high, low), zero);
	}
	else
	{
		// Reverse the magnitude bits of negatives to make a signed high
		// word and unsigned low word lexicographically ordered.
		const RValue shift = integer(kI64, 63), mask = integer(kI64, kMagnitude);
		const RValue as = binary(BinaryOp::Shr, kI64, ah, shift);
		const RValue bs = binary(BinaryOp::Shr, kI64, bh, shift);
		const RValue ak = binary(BinaryOp::Xor, kI64, ah, binary(BinaryOp::And, kI64, as, mask));
		const RValue bk = binary(BinaryOp::Xor, kI64, bh, binary(BinaryOp::And, kI64, bs, mask));
		const RValue high_less = compare(ComparePredicate::Lt, kI64, ak, bk);
		const RValue high_equal = compare(ComparePredicate::Eq, kI64, ak, bk);
		const RValue low_a = binary(BinaryOp::Xor, kI64, al, as);
		const RValue low_b = binary(BinaryOp::Xor, kI64, bl, bs);
		const RValue low_order = compare(inclusive ? ComparePredicate::Ule : ComparePredicate::Ult, kI64, low_a, low_b);
		relation = select_value(high_equal, low_order, high_less);
	}
	const RValue with_zero = select_value(both_zero, integer(kI64, inclusive), relation);
	return select_value(unordered, zero, with_zero);
}

RValue FunctionLowering::quad_classify(sema::Intrinsic kind, const RValue& x, const RValue* codes)
{
	using sema::Intrinsic;
	const lowir::Value address = quad_storage(x);
	const RValue high = lane_bits(address, 8, 1);
	const RValue zero = integer(kI64, 0), inf = integer(kI64, kInfinity);
	if (kind == Intrinsic::SignBit)
		return truth_i32(compare(ComparePredicate::Lt, kI64, high, zero));
	if (kind == Intrinsic::IsFinite || kind == Intrinsic::IsNormal)
	{
		const RValue magnitude = quad_magnitude(high);
		if (kind == Intrinsic::IsFinite)
			return truth_i32(compare(ComparePredicate::Ult, kI64, magnitude, inf));
		const RValue biased = binary(BinaryOp::Sub, kI64, magnitude, integer(kI64, kLeastNormal));
		return truth_i32(compare(ComparePredicate::Ult, kI64, biased, integer(kI64, kInfinity - kLeastNormal)));
	}
	const RValue low = lane_bits(address, 8, 0);
	const RValue magnitude = quad_magnitude(high, &low);
	if (kind == Intrinsic::IsInf)
		return truth_i32(compare(ComparePredicate::Eq, kI64, magnitude, inf));
	if (kind == Intrinsic::IsInfSign)
	{
		const RValue negative = compare(ComparePredicate::Lt, kI64, high, zero);
		const RValue sign = select_value(negative, integer(kI32, -1), integer(kI32, 1));
		return select_value(compare(ComparePredicate::Eq, kI64, magnitude, inf), sign, integer(kI32, 0));
	}
	const RValue nan = compare(ComparePredicate::Ugt, kI64, magnitude, inf);
	if (kind == Intrinsic::IsNan)
		return truth_i32(nan);
	if (kind == Intrinsic::IsSignaling)
	{
		const RValue quiet = binary(BinaryOp::And, kI64, high, integer(kI64, kQuietBit));
		return truth_i32(binary(BinaryOp::And, kI64, nan, compare(ComparePredicate::Eq, kI64, quiet, zero)));
	}
	const RValue special = select_value(nan, codes[0], codes[1]);
	const RValue small = select_value(compare(ComparePredicate::Ne, kI64, magnitude, zero), codes[3], codes[4]);
	const RValue finite = select_value(
		compare(ComparePredicate::Uge, kI64, magnitude, integer(kI64, kLeastNormal)), codes[2], small);
	return select_value(compare(ComparePredicate::Uge, kI64, magnitude, inf), special, finite);
}

} // namespace lower
