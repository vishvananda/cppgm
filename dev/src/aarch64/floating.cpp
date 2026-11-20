#include "aarch64/selector.h"

#include "aarch64/error.h"
#include "opt/scalar_fold.h"

namespace aarch64 {

using namespace lowir;

namespace {
// FCMP reports an unordered pair with NZCV=0011. The ordered predicates
// take MI, LS, GT and GE, which that value fails; the unordered ones (ult,
// ule, ugt, uge) take LT, LE, HI and CS, which it satisfies.
const unsigned kFloatConditions[] = { 0, 1, 4, 9, 12, 10, 11, 13, 8, 2 };
const Op kFloatBinary[] = { Op::Fadd, Op::Fsub, Op::Fmul, Op::Fdiv };
}

bool Selector::floating(const lowir::Instruction& inst) const
{
	if (inst.op == Opcode::Convert)
		return inst.type.is_float() || convert_source_type(inst).is_float();
	return inst.type.is_float() &&
		(inst.op == Opcode::Compare || inst.op == Opcode::Binary || inst.op == Opcode::Unary);
}

unsigned Selector::fp_operand(Value operand, Type type, unsigned scratch)
{
	if (operand.is(ValueKind::Temp) && body_.temps[operand.index].type == type)
	{
		if (vectors_[operand.index] != kNoId)
			return vectors_[operand.index];
		if (registers_[operand.index] == kNoId)
		{
			fp_home(false, scratch, operand.index);
			return scratch;
		}
	}
	if (operand.is(ValueKind::Float))
	{
		const uint64_t bits = body_.literals[operand.index].low;
		if (bits == 0)
		{
			fp_move(true, scratch, 31, type);
			return scratch;
		}
		// FMOV encodes four fraction bits and eight exponents around one.
		const bool single = type.kind() == TypeKind::F32;
		const unsigned fraction = single ? 23 : 52;
		const unsigned midpoint = single ? 128 : 1024;
		const unsigned exponent = (bits >> fraction) & (2 * midpoint - 1);
		if (exponent >= midpoint - 4 && exponent < midpoint + 4 && (bits & ((uint64_t(1) << (fraction - 4)) - 1)) == 0)
		{
			const unsigned imm = ((bits >> (single ? 31 : 63)) << 7) | ((exponent < midpoint) << 6) |
				((exponent & 3) << 4) | ((bits >> (fraction - 4)) & 15);
			out_.emit(Op::FmovI, scratch, 0, 0, (imm << 13) | (single ? 0 : 1u << 22));
			return scratch;
		}
	}
	fp_move(true, scratch, operand_register(operand, type, 9), type);
	return scratch;
}

void Selector::fp_home(bool store, unsigned reg, TempId temp)
{
	fp_stack_access(store, reg, homes_[temp], body_.temps[temp].type.kind() == TypeKind::F32);
}

void Selector::fp_stack_access(bool store, unsigned reg, uint32_t offset, bool single)
{
	const unsigned bytes = single ? 4 : 8;
	const Op op = single ? (store ? Op::StrS : Op::LdrS) : (store ? Op::StrD : Op::LdrD);
	if (offset % bytes == 0 && offset / bytes < 4096)
		out_.emit(op, reg, frame_base(), 0, (offset / bytes) << 10);
	else
	{
		base_address(9, frame_base(), offset);
		out_.emit(op, reg, 9);
	}
}

void Selector::save_fp(unsigned reg, TempId temp)
{
	if (vectors_[temp] != kNoId)
		vector_move(vectors_[temp], reg);
	else if (registers_[temp] != kNoId)
		fp_move(false, reg, registers_[temp], body_.temps[temp].type);
	else
		fp_home(true, reg, temp);
}

void Selector::float_choice(const lowir::Instruction& inst, unsigned condition)
{
	const unsigned a = fp_operand(inst.ops[1], inst.type, 16), b = fp_operand(inst.ops[2], inst.type, 17);
	const unsigned dest = vectors_[inst.result] == kNoId ? 16 : vectors_[inst.result];
	const unsigned precision = inst.type.kind() == TypeKind::F64 ? 1u << 22 : 0;
	out_.emit(Op::Fcsel, dest, a, b, precision | (condition << 12));
	save_fp(dest, inst.result);
}

void Selector::float_compare(const lowir::Instruction& inst)
{
	const unsigned a = fp_operand(inst.ops[0], inst.type, 16);
	const bool wide = inst.type.kind() == TypeKind::F64;
	const unsigned precision = wide ? 1u << 22 : 0;
	const Value right = inst.ops[1];
	const uint64_t sign = uint64_t(1) << (wide ? 63 : 31);
	if (right.is(ValueKind::Float) && (body_.literals[right.index].low & ~sign) == 0)
		out_.emit(Op::FcmpZero, 0, a, 0, precision);
	else
		out_.emit(Op::Fcmp, 0, a, right == inst.ops[0] ? a : fp_operand(right, inst.type, 17), precision);
}

// A sole adjacent consumer can read the floating comparison's flags.
bool Selector::float_consumer(const lowir::Instruction& inst, BlockId block)
{
	if (inst.next == kNoId || uses_[inst.result] != 1)
		return false;
	const auto& next = body_.instructions[inst.next];
	if (!(next.ops[0] == Value::temp(inst.result)) ||
		(next.op != Opcode::Branch &&
			(next.op != Opcode::Select || memory_value(next.type) || next.ops[1].is(ValueKind::Symbol) ||
				next.ops[2].is(ValueKind::Symbol))))
		return false;
	const unsigned condition = kFloatConditions[inst.sub];
	float_compare(inst);
	if (next.op == Opcode::Branch)
		conditional_edges(block, next, Op::BCond, condition ^ 1);
	else
		choose(next, condition);
	return true;
}

// The unchanged alternative keeps the input alive until the comparison.
// CSINC increments it only on the selected edge.
InstId Selector::conditional_float_increment(const lowir::Instruction& add)
{
	const unsigned bits = integer_bits(add.type.kind());
	if ((bits != 32 && bits != 64) || add.next == kNoId || uses_[add.result] != 1 || !add.ops[0].is(ValueKind::Temp) ||
		!add.ops[1].is(ValueKind::Integer) || body_.literals[add.ops[1].index].low != 1)
		return kNoId;
	const auto& cmp = body_.instructions[add.next];
	if (cmp.op != Opcode::Compare || (cmp.type.kind() != TypeKind::F32 && cmp.type.kind() != TypeKind::F64) ||
		cmp.next == kNoId || uses_[cmp.result] != 1)
		return kNoId;
	const auto& select = body_.instructions[cmp.next];
	if (select.op != Opcode::Select || select.type != add.type || !(select.ops[0] == Value::temp(cmp.result)))
		return kNoId;
	const Value next = Value::temp(add.result);
	const bool on_true = select.ops[1] == next && select.ops[2] == add.ops[0];
	if (!on_true && !(select.ops[2] == next && select.ops[1] == add.ops[0]))
		return kNoId;
	float_compare(cmp);
	const unsigned source = operand_register(add.ops[0], add.type, 10);
	const unsigned dest = registers_[select.result] == kNoId ? 9 : registers_[select.result];
	out_.emit(bits == 32 ? Op::CsincW : Op::Csinc, dest, source, source, (kFloatConditions[cmp.sub] ^ on_true) << 12);
	save(dest, select.result, true);
	return cmp.next;
}

InstId Selector::contracted_float_sum(const lowir::Instruction& multiply)
{
	Value addend;
	if (!opt::float_multiply_addend(body_, uses_, multiply, addend))
		return kNoId;
	const Value left = multiply.ops[0], right = multiply.ops[1];
	const auto needs_scratch = [&](Value v) { return !v.is(ValueKind::Temp) || vectors_[v.index] == kNoId; };
	// Two scratch SIMD registers suffice unless all three inputs need separate homes.
	if (!(left == right) && !(left == addend) && !(right == addend) && needs_scratch(left) && needs_scratch(right) &&
		needs_scratch(addend))
		return kNoId;
	const unsigned first = fp_operand(left, multiply.type, 16);
	const unsigned second = right == left ? first : fp_operand(right, multiply.type, 17);
	unsigned third = first;
	if (addend == right)
		third = second;
	else if (!(addend == left))
		third = fp_operand(addend, multiply.type, first == 16 ? 17 : 16);
	const auto& sum = body_.instructions[multiply.next];
	const unsigned dest = vectors_[sum.result] == kNoId ? 16 : vectors_[sum.result];
	const unsigned width = multiply.type.kind() == TypeKind::F64 ? 1u << 22 : 0;
	out_.emit(Op::Fmadd, dest, first, second, width | (third << 10));
	save_fp(dest, sum.result);
	return multiply.next;
}

// Scalar FP instructions can read the low lane of the original vector even
// when a later instruction needs the rest of it.
InstId Selector::scalar_lane_binary(const lowir::Instruction& inst)
{
	const auto op = static_cast<VectorOp>(inst.sub);
	if ((op != VectorOp::Tof32 && op != VectorOp::Tof64) || inst.next == kNoId || uses_[inst.result] != 1)
		return kNoId;
	const auto& next = body_.instructions[inst.next];
	if (next.op != Opcode::Binary || next.type != inst.type || next.sub >= 4)
		return kNoId;
	const Value lane = Value::temp(inst.result);
	const bool right = next.ops[1] == lane;
	if (!right && !(next.ops[0] == lane))
		return kNoId;
	const unsigned source = vector_value(inst.ops[0], 16);
	const unsigned other = fp_operand(next.ops[right ? 0 : 1], next.type, 17);
	const unsigned dest = vectors_[next.result] == kNoId ? 16 : vectors_[next.result];
	const unsigned precision = next.type.kind() == TypeKind::F64 ? 1u << 22 : 0;
	out_.emit(kFloatBinary[next.sub], dest, right ? other : source, right ? source : other, precision);
	save_fp(dest, next.result);
	return inst.next;
}

void Selector::float_instruction(const lowir::Instruction& inst)
{
	if (inst.op == Opcode::Compare)
	{
		float_compare(inst);
		set_condition(inst.result, kFloatConditions[inst.sub]);
		return;
	}
	const Type from = inst.op == Opcode::Convert ? convert_source_type(inst) : inst.type;
	const Type to = inst.type;
	const unsigned precision = from.kind() == TypeKind::F64 ? 1u << 22 : 0;
	const unsigned dest = vectors_[inst.result] == kNoId ? 16 : vectors_[inst.result];
	const unsigned a = from.is_float() ? fp_operand(inst.ops[0], from, 16) : 0;
	if (inst.op == Opcode::Binary)
	{
		if (inst.sub >= 4)
			throw AArch64Error("unsupported floating binary operation");
		const unsigned b = inst.ops[1] == inst.ops[0] ? a : fp_operand(inst.ops[1], from, 17);
		out_.emit(kFloatBinary[inst.sub], dest, a, b, precision);
		save_fp(dest, inst.result);
		return;
	}
	else if (inst.op == Opcode::Unary)
	{
		const auto op = static_cast<UnaryOp>(inst.sub);
		if (op != UnaryOp::Neg && op != UnaryOp::Sqrt)
			throw AArch64Error("unsupported floating unary operation");
		out_.emit(op == UnaryOp::Neg ? Op::Fneg : Op::Fsqrt, dest, a, 0, precision);
		save_fp(dest, inst.result);
		return;
	}
	else
	{
		const auto op = static_cast<ConvertOp>(inst.sub);
		switch (op)
		{
		case ConvertOp::FPExt:
		case ConvertOp::FPTrunc:
			out_.emit(op == ConvertOp::FPExt ? Op::FcvtDS : Op::FcvtSD, dest, a);
			break;
		case ConvertOp::SIToFP:
		case ConvertOp::UIToFP:
		{
			const unsigned bits = integer_bits(from.kind());
			const bool sign = op == ConvertOp::SIToFP;
			unsigned src = operand_register(inst.ops[0], from, 9);
			if (bits < 32)
			{
				move(9, src);
				extend(9, bits, sign);
				src = 9;
			}
			const Op convert = bits <= 32 ? (sign ? Op::ScvtfW : Op::UcvtfW) : (sign ? Op::Scvtf : Op::Ucvtf);
			out_.emit(convert, dest, src, 0, to.kind() == TypeKind::F64 ? 1u << 22 : 0);
			break;
		}
		case ConvertOp::FPToSI:
		case ConvertOp::FPToUI:
			out_.emit(op == ConvertOp::FPToSI ? Op::Fcvtzs : Op::Fcvtzu, 9, a, 0, precision);
			break;
		default:
			throw AArch64Error("unsupported AArch64 floating conversion");
		}
		if (to.is_float())
		{
			save_fp(dest, inst.result);
			return;
		}
	}
	save(9, inst.result);
}

} // namespace aarch64
