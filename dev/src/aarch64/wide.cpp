#include "aarch64/selector.h"

#include "aarch64/error.h"

namespace aarch64 {
using namespace lowir;

// i128 values are two little-endian words. x16 is available for forming
// large frame addresses, so load the high word before overwriting the base.
void Selector::pair(Value src, unsigned lo, unsigned hi)
{
	if (src.is(ValueKind::Integer))
	{
		const auto bits = body_.literals[src.index];
		constant(lo, bits.low);
		constant(hi, bits.high);
		return;
	}
	address(16, src);
	if (hi == 16)
	{
		access(false, lo, 16, 0, 8);
		access(false, hi, 16, 8, 8);
	}
	else
	{
		access(false, hi, 16, 8, 8);
		access(false, lo, 16, 0, 8);
	}
}

void Selector::save_pair(TempId dest, unsigned lo, unsigned hi)
{
	home_address(17, dest);
	access(true, lo, 17, 0, 8);
	access(true, hi, 17, 8, 8);
}

void Selector::wide_shift(BinaryOp op)
{
	const bool left = op == BinaryOp::Shl;
	unsigned near = left ? 9 : 10, far = left ? 10 : 9;
	const Op logical = left ? Op::Lsl : Op::Lsr;
	const Op outer = op == BinaryOp::Shr ? Op::Asr : logical;
	// Split the cross-word shift into one bit plus ~count mod 64.
	// This also gives zero cross bits when count is a multiple of 64.
	constant(16, 1);
	out_.emit(left ? Op::Lsr : Op::Lsl, 16, near, 16);
	out_.emit(Op::Orn, 15, 31, 11);
	out_.emit(left ? Op::Lsr : Op::Lsl, 16, 16, 15);
	out_.emit(logical, far, far, 11);
	out_.emit(Op::Orr, far, far, 16);
	out_.emit(outer, 16, near, 11);
	constant(17, 64);
	out_.emit(Op::Subs, 31, 11, 17);
	out_.emit(Op::Csel, far, far, 16, 3u << 12); // LO
	if (op == BinaryOp::Shr)
	{
		constant(17, 63);
		out_.emit(Op::Asr, 17, near, 17);
	}
	out_.emit(Op::Csel, near, 16, op == BinaryOp::Shr ? 17 : 31, 3u << 12);
}

void Selector::wide_binary(const lowir::Instruction& inst)
{
	const auto op = static_cast<BinaryOp>(inst.sub);
	pair(inst.ops[0], 9, 10);
	pair(inst.ops[1], 11, 15);
	if (op == BinaryOp::Add || op == BinaryOp::Sub)
	{
		out_.emit(op == BinaryOp::Add ? Op::Adds : Op::Subs, 9, 9, 11);
		out_.emit(op == BinaryOp::Add ? Op::Adc : Op::Sbc, 10, 10, 15);
	}
	else if (op == BinaryOp::And || op == BinaryOp::Or || op == BinaryOp::Xor)
	{
		const Op logical = op == BinaryOp::And ? Op::And : op == BinaryOp::Or ? Op::Orr : Op::Eor;
		out_.emit(logical, 9, 9, 11);
		out_.emit(logical, 10, 10, 15);
	}
	else if (op == BinaryOp::Mul)
	{
		out_.emit(Op::Umulh, 16, 9, 11);
		out_.emit(Op::Mul, 10, 10, 11);
		out_.emit(Op::Add, 10, 10, 16);
		out_.emit(Op::Mul, 16, 9, 15);
		out_.emit(Op::Add, 10, 10, 16);
		out_.emit(Op::Mul, 9, 9, 11);
	}
	else if (op == BinaryOp::Shl || op == BinaryOp::Shr || op == BinaryOp::UShr)
		wide_shift(op);
	else
		throw AArch64Error("unsupported AArch64 i128 division");
	save_pair(inst.result, 9, 10);
}

// Like the x86 selector's high-product combine, use the high half directly.
// Adjacent whole producers keep both scalar inputs in their assigned homes.
// A plain low-half product of the same inputs can be emitted alongside it.
InstId Selector::wide_high_product(const lowir::Instruction& first)
{
	const auto following = [&](const lowir::Instruction& inst) -> const lowir::Instruction* {
		return inst.next == kNoId ? nullptr : &body_.instructions[inst.next];
	};
	const auto widened = [&](const lowir::Instruction* inst) {
		return inst && inst->op == Opcode::Convert && inst->type.kind() == TypeKind::I128 &&
			inst->sub == static_cast<unsigned>(ConvertOp::ZExt) && uses_[inst->result] == 1 &&
			integer_bits(convert_source_type(*inst).kind()) == 64 && inst->ops[0].is(ValueKind::Temp);
	};
	const auto operation = [](const lowir::Instruction* inst, BinaryOp op, unsigned bits) {
		return inst && inst->op == Opcode::Binary && inst->sub == static_cast<unsigned>(op) &&
			integer_bits(inst->type.kind()) == bits;
	};
	const auto same_pair = [](const lowir::Instruction& inst, Value a, Value b) {
		return (inst.ops[0] == a && inst.ops[1] == b) || (inst.ops[1] == a && inst.ops[0] == b);
	};
	const auto* second = following(first);
	if (!widened(&first) || !widened(second))
		return kNoId;
	const auto* product = following(*second);
	if (!operation(product, BinaryOp::Mul, 128) || uses_[product->result] != 1 ||
		!same_pair(*product, Value::temp(first.result), Value::temp(second->result)))
		return kNoId;
	const Value left = first.ops[0], right = second->ops[0];
	const auto* shift = following(*product);
	const lowir::Instruction* low = nullptr;
	if (operation(shift, BinaryOp::Mul, 64) && same_pair(*shift, left, right))
	{
		low = shift;
		shift = following(*low);
	}
	if (!operation(shift, BinaryOp::UShr, 128) || uses_[shift->result] != 1 ||
		!(shift->ops[0] == Value::temp(product->result)) || !shift->ops[1].is(ValueKind::Integer) ||
		body_.literals[shift->ops[1].index].low != 64 || body_.literals[shift->ops[1].index].high != 0)
		return kNoId;
	const auto* high = following(*shift);
	if (!high || high->op != Opcode::Convert || high->sub != static_cast<unsigned>(ConvertOp::Trunc) ||
		integer_bits(high->type.kind()) != 64 || !(high->ops[0] == Value::temp(shift->result)) ||
		convert_source_type(*high).kind() != TypeKind::I128)
		return kNoId;
	const auto a = operand_register(left, convert_source_type(first), 10);
	const auto b = operand_register(right, convert_source_type(*second), 11);
	out_.emit(Op::Umulh, 15, a, b);
	if (low)
	{
		const auto dest = registers_[low->result] == kNoId ? 9 : registers_[low->result];
		out_.emit(Op::Mul, dest, a, b);
		save(dest, low->result, true);
	}
	save(15, high->result, true);
	return shift->next;
}

bool Selector::wide(const lowir::Instruction& inst)
{
	switch (inst.op)
	{
	case Opcode::Binary:
		wide_binary(inst);
		break;
	case Opcode::Unary:
	{
		pair(inst.ops[0], 9, 10);
		switch (static_cast<UnaryOp>(inst.sub))
		{
		case UnaryOp::Neg:
			out_.emit(Op::Subs, 9, 31, 9);
			out_.emit(Op::Sbc, 10, 31, 10);
			break;
		case UnaryOp::BitNot:
			out_.emit(Op::Orn, 9, 31, 9);
			out_.emit(Op::Orn, 10, 31, 10);
			break;
		case UnaryOp::Not:
			out_.emit(Op::Orr, 9, 9, 10);
			out_.emit(Op::Subs, 31, 9, 31);
			out_.emit(Op::Csinc, 9, 31, 31, 1u << 12);
			constant(10, 0);
			break;
		default:
			throw AArch64Error("unsupported AArch64 i128 unary operation");
		}
		save_pair(inst.result, 9, 10);
		break;
	}
	case Opcode::Compare:
	{
		pair(inst.ops[0], 9, 10);
		pair(inst.ops[1], 11, 15);
		const unsigned low[] = { 0, 1, 3, 9, 8, 2, 3, 9, 8, 2 };
		const unsigned high[] = { 0, 1, 11, 13, 12, 10, 3, 9, 8, 2 };
		out_.emit(Op::Subs, 31, 9, 11);
		out_.emit(Op::Csinc, 9, 31, 31, (low[inst.sub] ^ 1) << 12);
		out_.emit(Op::Subs, 31, 10, 15);
		out_.emit(Op::Csinc, 10, 31, 31, (high[inst.sub] ^ 1) << 12);
		out_.emit(Op::Csel, 9, 9, 10); // EQ: high words match
		save(9, inst.result);
		break;
	}
	case Opcode::Convert:
	case Opcode::FenvConvert:
	{
		const auto op = static_cast<ConvertOp>(inst.sub);
		const Type from = convert_source_type(inst);
		if (op == ConvertOp::Trunc)
		{
			pair(inst.ops[0], 9, 10);
			save(9, inst.result);
		}
		else if (op == ConvertOp::SExt || op == ConvertOp::ZExt)
		{
			value(9, inst.ops[0], from);
			extend(9, integer_bits(from.kind()), op == ConvertOp::SExt);
			if (op == ConvertOp::SExt)
			{
				constant(10, 63);
				out_.emit(Op::Asr, 10, 9, 10);
			}
			else
				constant(10, 0);
			save_pair(inst.result, 9, 10);
		}
		else
			throw AArch64Error("unsupported AArch64 i128 floating conversion");
		break;
	}
	default:
		return false;
	}
	return true;
}
} // namespace aarch64
