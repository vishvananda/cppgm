#include "aarch64/selector.h"

namespace aarch64 {
using namespace lowir;

namespace {
bool binary_of(const lowir::Instruction& inst, BinaryOp op, Type type)
{
	return inst.op == Opcode::Binary && inst.sub == static_cast<unsigned>(op) && inst.type == type;
}

bool operand(Value v)
{
	return !v.is(ValueKind::Integer) && !v.is(ValueKind::Symbol);
}

// A literal's bits within the type's width.
bool literal(const FunctionBody& body, Value v, unsigned bits, uint64_t& out)
{
	if (!v.is(ValueKind::Integer))
		return false;
	const uint64_t low = body.literals[v.index].low;
	out = bits == 64 ? low : low & 0xffffffffu;
	return true;
}

// A shift count below the type's width.
bool count(const FunctionBody& body, Value v, unsigned bits, unsigned& out)
{
	if (!v.is(ValueKind::Integer) || body.literals[v.index].high || body.literals[v.index].low >= bits)
		return false;
	out = static_cast<unsigned>(body.literals[v.index].low);
	return true;
}

// A mask of one run of ones, ((1 << width) - 1) << lsb.
bool run(uint64_t mask, unsigned bits, unsigned& lsb, unsigned& width)
{
	if (!mask)
		return false;
	lsb = __builtin_ctzll(mask);
	const uint64_t ones = mask >> lsb;
	if (ones & (ones + 1))
		return false;
	width = __builtin_popcountll(ones);
	return lsb + width <= bits;
}

// AND of the type with a literal mask (or its complement) of one run of
// ones, and the other operand.
bool masked(const FunctionBody& body, const lowir::Instruction& inst, Type type, Value& source, unsigned& lsb,
	unsigned& width, bool complement = false)
{
	const unsigned bits = integer_bits(type.kind());
	if (!binary_of(inst, BinaryOp::And, type))
		return false;
	const unsigned k = inst.ops[1].is(ValueKind::Integer) ? 1 : 0;
	uint64_t mask;
	if (!literal(body, inst.ops[k], bits, mask) || !operand(inst.ops[1 - k]))
		return false;
	if (complement)
		mask = ~mask & (bits == 64 ? ~uint64_t(0) : 0xffffffffu);
	if (!run(mask, bits, lsb, width))
		return false;
	source = inst.ops[1 - k];
	return true;
}
}

// Shift-and-mask pairs of 32- and 64-bit values are one bitfield move:
// SBFX, UBFX, SBFIZ or UBFIZ (SBFM or UBFM) for a left shift followed by a
// right shift, a low mask followed by a left shift, a mask followed by a
// right shift, or a right shift whose low bits are truncated and
// sign-extended; BFI or BFXIL for a field inserted into a value. The
// instructions are adjacent and the consumed ones have no other readers.
// Each form reads only bits of its source within the source's width, so a
// 32-bit source may be a value with undefined high bits (narrow.cpp).
InstId Selector::bitfield(const lowir::Instruction& first)
{
	const unsigned bits = integer_bits(first.type.kind());
	const auto first_op = static_cast<BinaryOp>(first.sub);
	if (first.op != Opcode::Binary || (bits != 32 && bits != 64) || first.next == kNoId || uses_[first.result] != 1 ||
		(first_op != BinaryOp::Shl && first_op != BinaryOp::And && first_op != BinaryOp::Shr &&
			first_op != BinaryOp::UShr))
		return kNoId;
	if (first_op == BinaryOp::Shl || first_op == BinaryOp::And)
	{
		const InstId inserted = inserted_field(first);
		if (inserted != kNoId)
			return inserted;
	}
	const auto& next = body_.instructions[first.next];
	const auto produced = Value::temp(first.result);
	const bool w = bits == 32;
	const auto emit = [&](const lowir::Instruction& last, Value source, bool sign, unsigned immr, unsigned imms) {
		const unsigned src = operand_register(source, first.type, 10);
		const unsigned dest = registers_[last.result] == kNoId ? 9 : registers_[last.result];
		out_.emit(
			sign ? (w ? Op::SbfmW : Op::Sbfm) : (w ? Op::UbfmW : Op::Ubfm), dest, src, 0, (immr << 16) | (imms << 10));
		save(dest, last.result, true);
	};
	unsigned shift, lsb, width;
	Value source;
	if (first.sub == static_cast<unsigned>(BinaryOp::Shl) && count(body_, first.ops[1], bits, shift) && shift &&
		operand(first.ops[0]) && next.op == Opcode::Binary && next.type == first.type && next.ops[0] == produced)
	{
		// (x << a) >> b is SBFM or UBFM with immr = b - a (mod width) and
		// imms = width - 1 - a.
		unsigned right;
		const bool sign = next.sub == static_cast<unsigned>(BinaryOp::Shr);
		if ((!sign && next.sub != static_cast<unsigned>(BinaryOp::UShr)) || !count(body_, next.ops[1], bits, right))
			return kNoId;
		emit(next, first.ops[0], sign, (right - shift) & (bits - 1), bits - 1 - shift);
		return first.next;
	}
	if (masked(body_, first, first.type, source, lsb, width) && next.op == Opcode::Binary && next.type == first.type &&
		next.ops[0] == produced && count(body_, next.ops[1], bits, shift))
	{
		const auto op = static_cast<BinaryOp>(next.sub);
		// A low field moved up is UBFIZ; the bits shifted out are dropped.
		if (op == BinaryOp::Shl && !lsb && shift && width < bits)
		{
			emit(next, source, false, bits - shift, std::min(width, bits - shift) - 1);
			return first.next;
		}
		// A field shifted down to bit 0 or into it is UBFX. An arithmetic
		// shift fills from the field's top bit only if that is the sign bit.
		if ((op == BinaryOp::UShr || op == BinaryOp::Shr) && lsb <= shift && shift < lsb + width)
		{
			emit(next, source, op == BinaryOp::Shr && lsb + width == bits, shift, lsb + width - 1);
			return first.next;
		}
		return kNoId;
	}
	// (x >> s) truncated to n bits and sign-extended is SBFX of bits s to
	// s + n - 1, all within x.
	if ((first.sub == static_cast<unsigned>(BinaryOp::Shr) || first.sub == static_cast<unsigned>(BinaryOp::UShr)) &&
		count(body_, first.ops[1], bits, shift) && operand(first.ops[0]) && next.op == Opcode::Convert &&
		next.sub == static_cast<unsigned>(ConvertOp::Trunc) && next.ops[0] == produced && next.next != kNoId &&
		uses_[next.result] == 1)
	{
		const unsigned n = integer_bits(next.type.kind());
		const auto& extension = body_.instructions[next.next];
		const unsigned to = integer_bits(extension.type.kind());
		if (n && shift + n <= bits && extension.op == Opcode::Convert &&
			extension.sub == static_cast<unsigned>(ConvertOp::SExt) && extension.ops[0] == Value::temp(next.result) &&
			(to == 64 || (to == 32 && shift + n <= 32)))
		{
			const unsigned src = operand_register(first.ops[0], first.type, 10);
			const unsigned dest = registers_[extension.result] == kNoId ? 9 : registers_[extension.result];
			out_.emit(to == 32 ? Op::SbfmW : Op::Sbfm, dest, src, 0, (shift << 16) | ((shift + n - 1) << 10));
			save(dest, extension.result, true);
			return next.next;
		}
	}
	return kNoId;
}

// `and a, K` keeps the bits of a outside one field and the other operand of
// an OR, XOR or ADD fills it: `and b, M` (M the field's low ones) shifted
// to the field, or a shift alone for a field that ends at the top bit,
// whose source may be the zero extension of a 32-bit value. The two have no
// common bits, so the join is BFI (BFXIL for a field at bit 0), which reads
// only the field's width of b. Up to four adjacent single-use instructions
// precede the join, in either order.
InstId Selector::inserted_field(const lowir::Instruction& first)
{
	const Type type = first.type;
	const unsigned bits = integer_bits(type.kind());
	const lowir::Instruction* producers[4];
	unsigned n = 0;
	for (const lowir::Instruction* at = &first; n < 4 && at->next != kNoId; at = &body_.instructions[at->next])
	{
		if (at->result == kNoId || uses_[at->result] != 1)
			return kNoId;
		producers[n++] = at;
		const auto& join = body_.instructions[at->next];
		const auto op = static_cast<BinaryOp>(join.sub);
		if (n < 2 || join.op != Opcode::Binary || join.type != type ||
			(op != BinaryOp::Or && op != BinaryOp::Xor && op != BinaryOp::Add))
			continue;
		const auto find = [&](Value v) -> const lowir::Instruction* {
			for (unsigned k = 0; k < n; ++k)
				if (v == Value::temp(producers[k]->result))
					return producers[k];
			return nullptr;
		};
		const lowir::Instruction* x = find(join.ops[0]);
		const lowir::Instruction* y = find(join.ops[1]);
		if (!x || !y || x == y)
			return kNoId;
		for (unsigned swap = 0; swap < 2; ++swap)
		{
			const auto& keep = swap ? *y : *x;
			const auto& field = swap ? *x : *y;
			Value a, b;
			unsigned lsb, width, low, ones, shift;
			if (!masked(body_, keep, type, a, lsb, width, true))
				continue;
			Type btype = type;
			unsigned consumed = 2;
			if (binary_of(field, BinaryOp::Shl, type) && count(body_, field.ops[1], bits, shift) && shift == lsb &&
				shift && operand(field.ops[0]))
			{
				const lowir::Instruction* inner = find(field.ops[0]);
				Value masked_source;
				b = field.ops[0];
				if (inner && masked(body_, *inner, type, masked_source, low, ones) && !low &&
					std::min(ones, bits - lsb) == width)
				{
					b = masked_source;
					consumed = 3;
				}
				else if (inner && inner->op == Opcode::Convert &&
					inner->sub == static_cast<unsigned>(ConvertOp::ZExt) && inner->type == type && bits == 64 &&
					integer_bits(convert_source_type(*inner).kind()) == 32 && lsb >= 32 && lsb + width == bits &&
					operand(inner->ops[0]))
				{
					b = inner->ops[0];
					btype = convert_source_type(*inner);
					consumed = 3;
				}
				else if (lsb + width != bits)
					continue;
			}
			else if (!(masked(body_, field, type, b, low, ones) && !low && !lsb && ones == width))
				continue;
			if (consumed != n)
				continue;
			const unsigned ra = operand_register(a, type, 10);
			const unsigned rb = operand_register(b, btype, 11);
			const unsigned dest = registers_[join.result] == kNoId ? 9 : registers_[join.result];
			const unsigned work = dest == rb && dest != ra ? 9 : dest;
			move(work, ra);
			out_.emit(bits == 32 ? Op::BfmW : Op::Bfm, work, rb, 0,
				(((bits - lsb) & (bits - 1)) << 16) | ((width - 1) << 10));
			move(dest, work);
			save(dest, join.result, true);
			return at->next;
		}
		return kNoId;
	}
	return kNoId;
}

} // namespace aarch64
