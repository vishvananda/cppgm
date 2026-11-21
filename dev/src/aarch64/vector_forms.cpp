#include "aarch64/selector.h"

namespace aarch64 {
using namespace lowir;

namespace {
bool vector_op(const lowir::Instruction& inst, VectorOp op)
{
	return inst.op == Opcode::Vector && inst.sub == static_cast<unsigned>(op);
}
}

// An 8-byte load whose only reader is the vector made from it is LDR D,
// which clears the upper half as the move from a general register does.
InstId Selector::vector_load(const lowir::Instruction& load)
{
	if (load.op != Opcode::Load || load.type.kind() != TypeKind::I64 || load.next == kNoId || uses_[load.result] != 1 ||
		vectors_[load.result] != kNoId)
		return kNoId;
	const auto& made = body_.instructions[load.next];
	if (!vector_op(made, VectorOp::Fromi64) || !(made.ops[0] == Value::temp(load.result)))
		return kNoId;
	const unsigned base = address_register(load.ops[0], 10);
	const unsigned dest = vectors_[made.result] == kNoId ? 16 : vectors_[made.result];
	out_.emit(Op::LdrD, dest, base);
	save_vector(dest, made.result);
	return load.next;
}

// The low eight bytes of a vector stored by the next instruction are STR D.
InstId Selector::vector_store(const lowir::Instruction& extract)
{
	if (extract.next == kNoId || uses_[extract.result] != 1)
		return kNoId;
	const InstId at = extract.next;
	const auto& store = body_.instructions[at];
	const auto low = Value::temp(extract.result);
	if (store.op != Opcode::Store || store.type.kind() != TypeKind::I64 || !(store.ops[0] == low) ||
		store.ops[1] == low || (!word_accesses_.empty() && word_accesses_[at]))
		return kNoId;
	const unsigned source = vector_value(extract.ops[0], 16);
	const unsigned base = address_register(store.ops[1], 10);
	out_.emit(Op::StrD, source, base);
	return at;
}

// Interleaving the low lanes of a vector with zero lanes extends them with
// zeros: UXTL (USHLL by zero). Interleaving them with themselves and
// shifting each doubled lane right by the lane width extends them by the
// shift: SXTL or UXTL. When an addition of the wide lanes follows, the pair
// is SADDW or UADDW.
InstId Selector::vector_extension(const lowir::Instruction& first)
{
	const bool bytes = vector_op(first, VectorOp::Punpcklbw);
	if ((!bytes && !vector_op(first, VectorOp::Punpcklwd)) || first.next == kNoId || uses_[first.result] != 1)
		return kNoId;
	const auto zero = [&](Value v) {
		if (!v.is(ValueKind::Temp) || body_.temps[v.index].def == kNoId)
			return false;
		return vector_op(body_.instructions[body_.temps[v.index].def], VectorOp::Pzero);
	};
	const lowir::Instruction* wide = &first;
	bool sign = false;
	if (!zero(first.ops[1]))
	{
		const auto& shift = body_.instructions[first.next];
		sign = vector_op(shift, bytes ? VectorOp::Psrawi : VectorOp::Psradi);
		if (!(first.ops[0] == first.ops[1]) ||
			(!sign && !vector_op(shift, bytes ? VectorOp::Psrlwi : VectorOp::Psrldi)) ||
			!(shift.ops[0] == Value::temp(first.result)) || !shift.ops[2].is(ValueKind::Integer) ||
			body_.literals[shift.ops[2].index].low != (bytes ? 8u : 16u))
			return kNoId;
		wide = &shift;
	}
	const unsigned source = vector_value(first.ops[0], 16);
	if (wide->next != kNoId && uses_[wide->result] == 1)
	{
		const auto& sum = body_.instructions[wide->next];
		const auto lanes = Value::temp(wide->result);
		if (vector_op(sum, bytes ? VectorOp::Paddw : VectorOp::Paddd) && (sum.ops[0] == lanes) != (sum.ops[1] == lanes))
		{
			const unsigned other = vector_value(sum.ops[sum.ops[0] == lanes ? 1 : 0], 17);
			const unsigned dest = vectors_[sum.result] == kNoId ? 16 : vectors_[sum.result];
			out_.emit(sign ? Op::VSaddw : Op::VUaddw, dest, other, source, (bytes ? 0u : 1u) << 22);
			save_vector(dest, sum.result);
			return wide->next;
		}
	}
	const unsigned dest = vectors_[wide->result] == kNoId ? 16 : vectors_[wide->result];
	out_.emit(sign ? Op::VSshll : Op::VUshll, dest, source, 0, (bytes ? 1u : 2u) << 19);
	save_vector(dest, wide->result);
	return wide == &first ? body_.temps[first.result].def : first.next;
}

// A right shift of each lane added to an accumulator is SSRA or USRA when
// allocation placed the accumulator and the sum in the same register.
InstId Selector::shift_accumulate(const lowir::Instruction& shift)
{
	const auto op = static_cast<VectorOp>(shift.sub);
	const bool arithmetic = op >= VectorOp::Psrawi;
	const unsigned lane = unsigned(op) - unsigned(arithmetic ? VectorOp::Psrawi : VectorOp::Psrlwi);
	const unsigned width = 16u << lane;
	if (shift.next == kNoId || uses_[shift.result] != 1 || !shift.ops[2].is(ValueKind::Integer))
		return kNoId;
	const uint64_t count = body_.literals[shift.ops[2].index].low;
	const auto& sum = body_.instructions[shift.next];
	const auto shifted = Value::temp(shift.result);
	const VectorOp add = lane == 0 ? VectorOp::Paddw : lane == 1 ? VectorOp::Paddd : VectorOp::Paddq;
	if (!count || count >= width || !vector_op(sum, add) || (sum.ops[0] == shifted) == (sum.ops[1] == shifted))
		return kNoId;
	const Value acc = sum.ops[sum.ops[0] == shifted ? 1 : 0];
	const unsigned dest = vectors_[sum.result];
	if (!acc.is(ValueKind::Temp) || dest == kNoId || vectors_[acc.index] != dest)
		return kNoId;
	const unsigned source = vector_value(shift.ops[0], 16);
	out_.emit(arithmetic ? Op::VSsra : Op::VUsra, dest, source, 0, unsigned(2 * width - count) << 16);
	return shift.next;
}

} // namespace aarch64
