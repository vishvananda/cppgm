#include "opt/known_integer.h"

#include <unordered_map>

#include "opt/scalar_fold.h"

namespace opt {
namespace {

using namespace lowir;

uint64_t mask(unsigned width)
{
	return width == 64 ? ~uint64_t(0) : (uint64_t(1) << width) - 1;
}

struct KnownBits
{
	uint64_t zero;
	uint64_t one;
	KnownBits(uint64_t zero_bits = 0, uint64_t one_bits = 0) : zero(zero_bits), one(one_bits) {}

	bool complete(uint64_t width_mask) const { return ((zero | one) & width_mask) == width_mask; }

	KnownBits narrowed(uint64_t width_mask) const { return { zero & width_mask, one & width_mask }; }

	KnownBits meet(KnownBits other) const { return { zero & other.zero, one & other.one }; }
};

class IntegerFacts
{
public:
	explicit IntegerFacts(const FunctionBody& body) : body_(body) {}
	KnownBits get(Value value, Type type);

private:
	KnownBits from_instruction(const Instruction& inst, unsigned width);
	KnownBits binary(const Instruction& inst, unsigned width);

	const FunctionBody& body_;
	std::unordered_map<TempId, KnownBits> facts_;
	unsigned remaining_ = 256;
};

KnownBits IntegerFacts::get(Value value, Type type)
{
	const unsigned width = lowir::integer_bits(type.kind());
	if (width == 0 || width > 64)
		return {};
	const uint64_t width_mask = mask(width);
	if (value.is(ValueKind::Integer))
	{
		const uint64_t bits = body_.literals[value.index].low;
		return KnownBits{ ~bits, bits }.narrowed(width_mask);
	}
	if (!value.is(ValueKind::Temp) || body_.temps[value.index].def == kNoId)
		return {};
	const auto existing = facts_.find(value.index);
	if (existing != facts_.end())
		return existing->second.narrowed(width_mask);
	if (remaining_ == 0)
		return {};
	--remaining_;
	facts_.emplace(value.index, KnownBits{}); // Cyclic phi inputs are initially unknown.
	const Temp& temp = body_.temps[value.index];
	const unsigned actual_width = lowir::integer_bits(temp.type.kind());
	if (actual_width == 0 || actual_width > 64)
		return {};
	const KnownBits result = from_instruction(body_.instructions[temp.def], actual_width).narrowed(mask(actual_width));
	facts_.find(value.index)->second = result;
	return result.narrowed(width_mask);
}

KnownBits IntegerFacts::binary(const Instruction& inst, unsigned width)
{
	const KnownBits a = get(inst.ops[0], inst.type);
	const KnownBits b = get(inst.ops[1], inst.type);
	const BinaryOp op = static_cast<BinaryOp>(inst.sub);
	const uint64_t width_mask = mask(width);
	if (a.complete(width_mask) && b.complete(width_mask))
	{
		Constant result;
		if (fold_binary(op, inst.type, integer_constant(inst.type, { a.one, 0 }),
				integer_constant(inst.type, { b.one, 0 }), result))
			return { ~result.bits.low, result.bits.low };
	}
	switch (op)
	{
	case BinaryOp::Add:
	{
		const uint64_t low = a.one + b.one;
		const uint64_t max_a = width_mask & ~a.zero, max_b = width_mask & ~b.zero;
		if (max_b > width_mask - max_a)
			return {};
		const uint64_t differing = low ^ (max_a + max_b);
		const uint64_t unknown = differing == 0 ? 0 : mask(64 - __builtin_clzll(differing));
		return { ~low & ~unknown, low & ~unknown };
	}
	case BinaryOp::And:
		return { a.zero | b.zero, a.one & b.one };
	case BinaryOp::Or:
		return { a.zero & b.zero, a.one | b.one };
	case BinaryOp::Xor:
		return { (a.zero & b.zero) | (a.one & b.one), (a.zero & b.one) | (a.one & b.zero) };
	case BinaryOp::Shl:
		if (b.complete(width_mask) && b.one < width)
			return { (a.zero << b.one) | mask(b.one), a.one << b.one };
		return {};
	case BinaryOp::UShr:
		if (b.complete(width_mask) && b.one < width)
			return { (a.zero >> b.one) | (width_mask ^ mask(width - b.one)), a.one >> b.one };
		return {};
	default:
		return {};
	}
}

KnownBits IntegerFacts::from_instruction(const Instruction& inst, unsigned width)
{
	switch (inst.op)
	{
	case Opcode::Compare:
		return { ~uint64_t(1), 0 };
	case Opcode::Const:
	case Opcode::Copy:
		return get(inst.ops[0], inst.type);
	case Opcode::Phi:
	{
		KnownBits result{ ~uint64_t(0), ~uint64_t(0) };
		for (uint32_t offset = 1; offset < inst.extra_count; offset += 2)
		{
			if (remaining_ == 0)
				return {};
			--remaining_;
			result = result.meet(get(body_.operands[inst.extra_first + offset], inst.type));
			if ((result.zero | result.one) == 0)
				break;
		}
		return inst.extra_count == 0 ? KnownBits{} : result;
	}
	case Opcode::Select:
		return get(inst.ops[1], inst.type).meet(get(inst.ops[2], inst.type));
	case Opcode::Binary:
		return binary(inst, width);
	case Opcode::Convert:
	{
		const Type from = convert_source_type(inst);
		const unsigned from_width = lowir::integer_bits(from.kind());
		const ConvertOp op = static_cast<ConvertOp>(inst.sub);
		if (from_width == 0 || from_width > 64 || is_floating_conversion(op))
			return {};
		KnownBits bits = get(inst.ops[0], from);
		const uint64_t sign = uint64_t(1) << (from_width - 1);
		const uint64_t upper = ~mask(from_width);
		if (op == ConvertOp::ZExt || (op == ConvertOp::SExt && (bits.zero & sign) != 0))
			bits.zero |= upper;
		if (op == ConvertOp::SExt && (bits.one & sign) != 0)
			bits.one |= upper;
		return bits;
	}
	default:
		return {};
	}
}

} // namespace

bool known_integer(const lowir::FunctionBody& body, lowir::Value value, lowir::Type type, lowir::Literal& result)
{
	const unsigned width = lowir::integer_bits(type.kind());
	if (width == 0 || width > 64)
		return false;
	const KnownBits bits = IntegerFacts(body).get(value, type);
	if (!bits.complete(mask(width)))
		return false;
	result = normalize_integer(type, { bits.one, 0 });
	return true;
}

bool known_integer_differs(
	const lowir::FunctionBody& body, lowir::Value value, lowir::Type type, lowir::Literal literal)
{
	const KnownBits bits = IntegerFacts(body).get(value, type);
	return ((bits.zero & literal.low) | (bits.one & ~literal.low)) != 0;
}

} // namespace opt
