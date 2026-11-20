#include "aarch64/selector.h"

namespace aarch64 {
using namespace lowir;

// An A64 W operand observes precisely the low 32 bits of an X register.
// Consume an adjacent, single-use truncation where the instruction supplies
// that width itself, retaining the compare's branch or select consumer.
InstId Selector::truncated_operand(const lowir::Instruction& trunc, BlockId block)
{
	if (trunc.sub != static_cast<unsigned>(ConvertOp::Trunc) || integer_bits(trunc.type.kind()) != 32 ||
		trunc.next == kNoId || uses_[trunc.result] != 1 || !trunc.ops[0].is(ValueKind::Temp))
		return kNoId;
	auto next = body_.instructions[trunc.next];
	const auto result = Value::temp(trunc.result);
	if (next.op == Opcode::Branch && next.ops[0] == result)
	{
		conditional_edges(block, next, Op::CbzW, operand_register(trunc.ops[0], convert_source_type(trunc), 10));
		return trunc.next;
	}
	if (integer_bits(next.type.kind()) != 32 || (next.op != Opcode::Compare && next.op != Opcode::Binary))
		return kNoId;
	if (next.ops[0] == result)
		next.ops[0] = trunc.ops[0];
	else if (next.ops[1] == result)
		next.ops[1] = trunc.ops[0];
	else
		return kNoId;
	if (next.op == Opcode::Compare)
	{
		if (compare_consumer(next, block))
			return next.next;
		compare(next);
	}
	else
		simple_binary(next);
	return trunc.next;
}

// Complementary shifts of a single value occupy disjoint bits. ADD, OR and XOR
// therefore all produce the same rotate. A following logical operation can
// consume its rotated register directly.
InstId Selector::rotated_operand(const lowir::Instruction& first)
{
	const unsigned bits = integer_bits(first.type.kind());
	const auto& second = body_.instructions[first.next];
	const auto left = static_cast<unsigned>(BinaryOp::Shl), right = static_cast<unsigned>(BinaryOp::UShr);
	if (!first.ops[0].is(ValueKind::Temp) || second.op != Opcode::Binary || second.type != first.type ||
		!(first.ops[0] == second.ops[0]) || !second.ops[1].is(ValueKind::Integer) || uses_[second.result] != 1 ||
		second.next == kNoId ||
		!((first.sub == left && second.sub == right) || (first.sub == right && second.sub == left)))
		return kNoId;
	const auto a = body_.literals[first.ops[1].index], b = body_.literals[second.ops[1].index];
	if (a.high || b.high || !a.low || a.low >= bits || b.low != bits - a.low)
		return kNoId;
	const auto& join = body_.instructions[second.next];
	const auto op = static_cast<BinaryOp>(join.sub);
	if (join.op != Opcode::Binary || join.type != first.type ||
		(op != BinaryOp::Or && op != BinaryOp::Xor && op != BinaryOp::Add) ||
		!((join.ops[0] == Value::temp(first.result) && join.ops[1] == Value::temp(second.result)) ||
			(join.ops[1] == Value::temp(first.result) && join.ops[0] == Value::temp(second.result))))
		return kNoId;
	const unsigned count = first.sub == right ? a.low : b.low;
	const bool w = bits == 32;
	const auto source = operand_register(first.ops[0], first.type, 10);
	if (join.next != kNoId && uses_[join.result] == 1)
	{
		const auto& consumer = body_.instructions[join.next];
		const auto logic = static_cast<BinaryOp>(consumer.sub);
		if (consumer.op == Opcode::Binary && consumer.type == join.type && !consumer.ops[0].is(ValueKind::Symbol) &&
			!consumer.ops[1].is(ValueKind::Symbol) &&
			(logic == BinaryOp::Xor || logic == BinaryOp::And || logic == BinaryOp::Or) &&
			(consumer.ops[0] == Value::temp(join.result) || consumer.ops[1] == Value::temp(join.result)))
		{
			const auto other = consumer.ops[consumer.ops[0] == Value::temp(join.result) ? 1 : 0];
			const unsigned reg = operand_register(other, join.type, 11);
			Op selected = w ? Op::OrrW : Op::Orr;
			if (logic == BinaryOp::Xor)
				selected = w ? Op::EorW : Op::Eor;
			else if (logic == BinaryOp::And)
				selected = w ? Op::AndW : Op::And;
			const unsigned dest = registers_[consumer.result] == kNoId ? 9 : registers_[consumer.result];
			out_.emit(selected, dest, reg, source, (3u << 22) | (count << 10));
			save(dest, consumer.result, true);
			return join.next;
		}
	}
	const unsigned dest = registers_[join.result] == kNoId ? 9 : registers_[join.result];
	out_.emit(w ? Op::ExtrW : Op::Extr, dest, source, source, count << 10);
	save(dest, join.result, true);
	return second.next;
}

// ADD, SUB and the logical instructions have a shifted second operand.
// The producer is adjacent and single-use, so both input locations still
// hold the values the combined instruction needs.
InstId Selector::shifted_operand(const lowir::Instruction& shift, BlockId block)
{
	const auto op = static_cast<BinaryOp>(shift.sub);
	const unsigned bits = integer_bits(shift.type.kind());
	if ((bits != 32 && bits != 64) || shift.next == kNoId || uses_[shift.result] != 1 ||
		(op != BinaryOp::Shl && op != BinaryOp::Shr && op != BinaryOp::UShr))
		return kNoId;
	if (!shift.ops[1].is(ValueKind::Integer))
	{
		const auto& mask = body_.instructions[shift.next];
		if (op == BinaryOp::Shl && shift.ops[0].is(ValueKind::Integer) && body_.literals[shift.ops[0].index].low == 1 &&
			shift.ops[1].is(ValueKind::Temp) && mask.op == Opcode::Binary && mask.type == shift.type &&
			mask.sub == static_cast<unsigned>(BinaryOp::And))
			return bit_branch(mask, block, &shift);
		return kNoId;
	}
	const auto rotated = rotated_operand(shift);
	if (rotated != kNoId)
		return rotated;
	const auto& next = body_.instructions[shift.next];
	const unsigned count = body_.literals[shift.ops[1].index].low & (bits - 1);
	const unsigned kind = op == BinaryOp::Shl ? 0 : op == BinaryOp::UShr ? 1 : 2;
	const auto extract = [&](unsigned width, Op encoding) {
		const unsigned src = operand_register(shift.ops[0], shift.type, 11);
		const unsigned dest = registers_[next.result] == kNoId ? 9 : registers_[next.result];
		out_.emit(encoding, dest, src, 0, (count << 16) | ((count + width - 1) << 10));
		save(dest, next.result, true);
		return shift.next;
	};
	// A shifted register comparison produces the same flags as SUBS. Keep
	// those flags for its branch or select before materializing a boolean.
	if (next.op == Opcode::Compare && next.type == shift.type && next.ops[1] == Value::temp(shift.result) &&
		!(next.ops[0] == next.ops[1]) && !next.ops[0].is(ValueKind::Symbol) && !shift.ops[0].is(ValueKind::Symbol))
	{
		const unsigned lhs = operand_register(next.ops[0], next.type, 10);
		const unsigned rhs = operand_register(shift.ops[0], shift.type, 11);
		out_.emit(bits == 32 ? Op::SubsW : Op::Subs, 31, lhs, rhs, (kind << 22) | (count << 10));
		if (compare_consumer(next, block, true))
			return next.next;
		compare(next, true);
		return shift.next;
	}
	// A left shift inserts zeros below the field. For a right shift every
	// selected bit must come from the input, even for an arithmetic shift.
	if (next.op == Opcode::Convert && next.sub == static_cast<unsigned>(ConvertOp::Trunc) &&
		next.ops[0] == Value::temp(shift.result) && convert_source_type(next) == shift.type)
	{
		const unsigned width = integer_bits(next.type.kind());
		if (op == BinaryOp::Shl && width && width < bits && width <= 32)
		{
			narrow_left(shift.ops[0], shift.type, next.result, width, count);
			return shift.next;
		}
		if (op != BinaryOp::Shl && width && width < bits && count + width <= bits)
			return extract(width, Op::Ubfm);
	}
	if (next.op != Opcode::Binary || next.type != shift.type)
		return kNoId;
	const auto combine = static_cast<BinaryOp>(next.sub);
	const bool w = bits == 32;
	Op selected;
	switch (combine)
	{
	case BinaryOp::Add:
		selected = w ? Op::AddW : Op::Add;
		break;
	case BinaryOp::Sub:
		selected = w ? Op::SubW : Op::Sub;
		break;
	case BinaryOp::And:
		selected = w ? Op::AndW : Op::And;
		break;
	case BinaryOp::Or:
		selected = w ? Op::OrrW : Op::Orr;
		break;
	case BinaryOp::Xor:
		selected = w ? Op::EorW : Op::Eor;
		break;
	default:
		return kNoId;
	}
	const auto result = Value::temp(shift.result);
	const auto other = next.ops[1] == result ? next.ops[0] : next.ops[1];
	if (!(next.ops[1] == result) && (!(next.ops[0] == result) || combine == BinaryOp::Sub))
		return kNoId;
	// A mask of the low bits extracts a field directly from the unshifted
	// value. Keep arithmetic shifts when a selected bit comes from sign fill.
	if (combine == BinaryOp::And && op != BinaryOp::Shl && other.is(ValueKind::Integer))
	{
		const uint64_t literal = body_.literals[other.index].low;
		const uint64_t mask = w ? static_cast<uint32_t>(literal) : literal;
		if (mask != 0 && (mask & (mask + 1)) == 0)
		{
			const unsigned width = 64 - __builtin_clzll(mask);
			if (count + width <= bits)
				return extract(width, w ? Op::UbfmW : Op::Ubfm);
		}
	}
	const unsigned a = operand_register(other, shift.type, 10), b = operand_register(shift.ops[0], shift.type, 11);
	const unsigned dest = registers_[next.result] == kNoId ? 9 : registers_[next.result];
	out_.emit(selected, dest, a, b, (kind << 22) | (count << 10));
	save(dest, next.result, true);
	return shift.next;
}
// Fuse an adjacent single-use product or complement into its consumer. A
// producer's inputs may share the consumer's destination after allocation.
InstId Selector::arithmetic_operand(const lowir::Instruction& inst)
{
	if (contract_float_ && inst.type.is_float())
		return contracted_float_sum(inst);
	const unsigned bits = integer_bits(inst.type.kind());
	if ((bits != 32 && bits != 64) || inst.next == kNoId || uses_[inst.result] != 1)
		return kNoId;
	const auto& next = body_.instructions[inst.next];
	if (next.op != Opcode::Binary || next.type != inst.type)
		return kNoId;
	const auto v = Value::temp(inst.result);
	const bool right = next.ops[1] == v;
	if (!right && !(next.ops[0] == v))
		return kNoId;
	const auto other = next.ops[right ? 0 : 1];
	if (other.is(ValueKind::Symbol) || inst.ops[0].is(ValueKind::Symbol) || inst.ops[1].is(ValueKind::Symbol))
		return kNoId;
	const auto op = static_cast<BinaryOp>(next.sub);
	const auto dest = registers_[next.result] == kNoId ? 9 : registers_[next.result];
	if (inst.op == Opcode::Unary)
	{
		if (op != BinaryOp::And && op != BinaryOp::Or && op != BinaryOp::Xor)
			return kNoId;
		const unsigned lhs = operand_register(other, next.type, 10);
		const unsigned rhs = operand_register(inst.ops[0], inst.type, 11);
		const Op selected = op == BinaryOp::And ? (bits == 32 ? Op::BicW : Op::Bic)
			: op == BinaryOp::Or                ? (bits == 32 ? Op::OrnW : Op::Orn)
												: (bits == 32 ? Op::EonW : Op::Eon);
		out_.emit(selected, dest, lhs, rhs);
	}
	else
	{
		if (op != BinaryOp::Add && (op != BinaryOp::Sub || !right))
			return kNoId;
		// A literal factor of 2^k or -2^k adds or subtracts the shifted
		// register, and one of 1 + 2^k is an ADD with a shifted register before
		// the sum; neither builds the literal. A literal accumulator is then an
		// immediate.
		const bool literal = inst.ops[1].is(ValueKind::Integer);
		if (literal || inst.ops[0].is(ValueKind::Integer))
		{
			const uint64_t raw = body_.literals[inst.ops[literal ? 1 : 0].index].low;
			const uint64_t factor = bits == 32 ? static_cast<uint32_t>(raw) : raw;
			const uint64_t negated = bits == 32 ? static_cast<uint32_t>(0 - raw) : 0 - raw;
			if (factor > 2 && !((factor - 1) & (factor - 2)))
				return kNoId;
			const bool negative = negated > 1 && !(negated & (negated - 1));
			if ((factor > 1 && !(factor & (factor - 1))) || negative)
			{
				if (other.is(ValueKind::Integer))
					return kNoId;
				const unsigned acc = operand_register(other, next.type, 15);
				const unsigned scaled = operand_register(inst.ops[literal ? 0 : 1], inst.type, 10);
				const bool subtract = (op == BinaryOp::Sub) != negative;
				out_.emit(subtract ? (bits == 32 ? Op::SubW : Op::Sub) : (bits == 32 ? Op::AddW : Op::Add), dest, acc,
					scaled, __builtin_ctzll(negative ? negated : factor) << 10);
				save(dest, next.result, true);
				return inst.next;
			}
		}
		const unsigned lhs = operand_register(inst.ops[0], inst.type, 10);
		const unsigned rhs = operand_register(inst.ops[1], inst.type, 11);
		const unsigned acc = operand_register(other, inst.type, 15);
		out_.emit(op == BinaryOp::Sub ? (bits == 32 ? Op::MsubW : Op::Msub) : (bits == 32 ? Op::MaddW : Op::Madd), dest,
			lhs, rhs, acc << 10);
	}
	save(dest, next.result, true);
	return inst.next;
}
} // namespace aarch64
