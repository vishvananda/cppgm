#include "aarch64/selector.h"

namespace aarch64 {
using namespace lowir;

namespace {
// SMADDL/SMSUBL and UMADDL/UMSUBL are MADD and MSUB with these bits set. The
// register fields are the same; the factors are W registers.
constexpr uint32_t kSignedLong = 1u << 21;
constexpr uint32_t kUnsignedLong = 5u << 21;

bool extension(const lowir::Instruction& inst)
{
	return inst.op == Opcode::Convert && inst.type.kind() == TypeKind::I64 &&
		(inst.sub == static_cast<unsigned>(ConvertOp::SExt) || inst.sub == static_cast<unsigned>(ConvertOp::ZExt)) &&
		integer_bits(convert_source_type(inst).kind()) == 32 && inst.ops[0].is(ValueKind::Temp);
}

bool word_operation(const lowir::Instruction& inst, BinaryOp op)
{
	return inst.op == Opcode::Binary && inst.sub == static_cast<unsigned>(op) && inst.type.kind() == TypeKind::I64;
}
}

// A 64-bit product of two 32-bit values extended the same way is SMULL or
// UMULL of the W registers. A factor may be a literal that is the extension
// of its own low 32 bits; a power of two up to 2^32 is SBFIZ or UBFIZ. A
// following addition of the product, or a subtraction of it, becomes
// SMADDL/UMADDL or SMSUBL/UMSUBL, or ADD/SUB of the extended register for a
// shift of at most four. The extensions and the product are adjacent and have
// no other readers, so their 32-bit sources are still in their allocated
// registers.
InstId Selector::widening_product(const lowir::Instruction& first)
{
	if (!extension(first) || first.next == kNoId)
		return kNoId;
	const bool sign = first.sub == static_cast<unsigned>(ConvertOp::SExt);
	const lowir::Instruction* second = &body_.instructions[first.next];
	if (!extension(*second) || second->sub != first.sub || second->next == kNoId)
		second = nullptr;
	const InstId at = second ? second->next : first.next;
	const auto& product = body_.instructions[at];
	if (!word_operation(product, BinaryOp::Mul))
		return kNoId;
	const Value a = Value::temp(first.result), x = product.ops[0], y = product.ops[1];
	Value left = first.ops[0], right;
	unsigned shift = 0;
	if (second)
	{
		const Value b = Value::temp(second->result);
		if (!((x == a && y == b) || (x == b && y == a)) || uses_[first.result] != 1 || uses_[second->result] != 1)
			return kNoId;
		right = second->ops[0];
	}
	else if (x == a && y == a)
	{
		if (uses_[first.result] != 2)
			return kNoId;
		right = left;
	}
	else
	{
		right = x == a ? y : x;
		if ((!(x == a) && !(y == a)) || uses_[first.result] != 1 || !right.is(ValueKind::Integer))
			return kNoId;
		const uint64_t value = body_.literals[right.index].low;
		if (value >= 2 && value <= (uint64_t(1) << 32) && !(value & (value - 1)))
			while ((uint64_t(1) << shift) != value)
				++shift;
		else if (value < 2 || (sign ? int64_t(value) != int64_t(int32_t(uint32_t(value))) : value > UINT32_MAX))
			return kNoId;
	}
	const lowir::Instruction* sum = product.next == kNoId ? nullptr : &body_.instructions[product.next];
	const Value p = Value::temp(product.result);
	if (sum &&
		(uses_[product.result] != 1 ||
			!((word_operation(*sum, BinaryOp::Add) && (sum->ops[0] == p) != (sum->ops[1] == p)) ||
				(word_operation(*sum, BinaryOp::Sub) && sum->ops[1] == p && !(sum->ops[0] == p))) ||
			sum->ops[sum->ops[0] == p ? 1 : 0].is(ValueKind::Symbol)))
		sum = nullptr;
	const Type word = Type::scalar(TypeKind::I32);
	const unsigned lhs = operand_register(left, word, 10);
	if (shift && sum && shift <= 4)
	{
		// ADD or SUB (extended register) shifts the extended W register.
		const unsigned acc = operand_register(sum->ops[sum->ops[0] == p ? 1 : 0], sum->type, 15);
		const unsigned dest = registers_[sum->result] == kNoId ? 9 : registers_[sum->result];
		out_.emit(sum->sub == static_cast<unsigned>(BinaryOp::Sub) ? Op::Sub : Op::Add, dest, acc, lhs,
			(1u << 21) | ((sign ? 6u : 2u) << 13) | (shift << 10));
		save(dest, sum->result, true);
		return product.next;
	}
	if (shift)
	{
		// SBFIZ or UBFIZ places the 32-bit value at the shift.
		const unsigned dest = registers_[product.result] == kNoId ? 9 : registers_[product.result];
		out_.emit(sign ? Op::Sbfm : Op::Ubfm, dest, lhs, 0, (((64 - shift) & 63) << 16) | (31u << 10));
		save(dest, product.result, true);
		return at;
	}
	const unsigned rhs = operand_register(right, word, 11);
	if (sum)
	{
		const unsigned acc = operand_register(sum->ops[sum->ops[0] == p ? 1 : 0], sum->type, 15);
		const unsigned dest = registers_[sum->result] == kNoId ? 9 : registers_[sum->result];
		out_.emit(sum->sub == static_cast<unsigned>(BinaryOp::Sub) ? Op::Msub : Op::Madd, dest, lhs, rhs,
			(sign ? kSignedLong : kUnsignedLong) | (acc << 10));
		save(dest, sum->result, true);
		return product.next;
	}
	const unsigned dest = registers_[product.result] == kNoId ? 9 : registers_[product.result];
	out_.emit(sign ? Op::Smull : Op::Umull, dest, lhs, rhs);
	save(dest, product.result, true);
	return at;
}

} // namespace aarch64
