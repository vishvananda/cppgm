#include "aarch64/selector.h"

#include <algorithm>

namespace aarch64 {
using namespace lowir;

namespace {
bool narrow(Type type)
{
	const unsigned bits = integer_bits(type.kind());
	return bits == 8 || bits == 16 || bits == 32;
}

// Whether the selected code for `inst` reads only the low bits of the
// operand in slot `k` (ops[0..2], then the extra operands), which holds `t`.
// Each case names a selection that uses W registers or a field of the
// operand's width: the simple arithmetic and logical forms, shifts by a
// literal, the stores of the same width, truncation and sign extension. The paths that
// combine these instructions with a neighbour keep that property; a narrow
// range test of a loose value is not combined (narrow_range_branch).
bool low_bits(const FunctionBody& body, const lowir::Instruction& inst, unsigned k, Type type)
{
	const unsigned bits = integer_bits(type.kind());
	switch (inst.op)
	{
	case Opcode::Binary:
		if (inst.type != type || k > 1)
			return false;
		switch (static_cast<BinaryOp>(inst.sub))
		{
		case BinaryOp::Add:
		case BinaryOp::Sub:
		case BinaryOp::Or:
		case BinaryOp::Xor:
			return true;
		case BinaryOp::And:
			return bits == 32 || inst.ops[1 - k].is(ValueKind::Integer);
		case BinaryOp::Mul:
			return bits == 32;
		case BinaryOp::Shl:
		case BinaryOp::UShr:
			return bits == 32 || (k == 0 && inst.ops[1].is(ValueKind::Integer));
		case BinaryOp::Shr:
			return bits == 32;
		default:
			return false;
		}
	case Opcode::Unary:
		return inst.type == type && k == 0 &&
			(inst.sub == static_cast<unsigned>(UnaryOp::Neg) || inst.sub == static_cast<unsigned>(UnaryOp::BitNot));
	case Opcode::Store:
		return inst.type == type && k == 0;
	case Opcode::Convert:
	{
		if (k != 0)
			return false;
		if (inst.sub == static_cast<unsigned>(ConvertOp::Trunc))
			return true;
		// A sign extension is SBFM of the low bits, except of a value
		// zero-extended from fewer bits, which it moves as it is.
		const InstId def = body.temps[inst.ops[0].index].def;
		return inst.sub == static_cast<unsigned>(ConvertOp::SExt) &&
			(def == kNoId || body.instructions[def].op != Opcode::Convert ||
				body.instructions[def].sub != static_cast<unsigned>(ConvertOp::ZExt));
	}
	default:
		return false;
	}
}
}

// Integer values of 8, 16 and 32 bits are normalized: held zero-extended
// to 64 bits in their register or home. Compares, extensions, branches,
// selects, indexes, switches, calls and returns rely on it, and a value
// computed by an X-register instruction or arriving as a parameter must be
// extended before it is saved. A value is loose instead, its bits above its
// width undefined, when every reader takes only its low bits (low_bits), and
// save() then leaves its high bits alone. A phi or copy reads its input's low
// bits only if its own result is loose, so loose values form webs.
void Selector::find_loose_values()
{
	loose_.clear();
	if (!level_)
		return;
	loose_.assign(body_.temps.size(), 0);
	bool any = false;
	for (TempId t = 0; t < body_.temps.size(); ++t)
		if (narrow(body_.temps[t].type))
		{
			loose_[t] = 1;
			any = true;
		}
	if (!any)
		return;
	// Transfers from an input to a phi or copy result, kept by result.
	std::vector<std::pair<TempId, TempId>> transfers;
	std::vector<TempId> strict;
	const auto mark = [&](TempId t) {
		if (loose_[t])
		{
			loose_[t] = 0;
			strict.push_back(t);
		}
	};
	for (const auto& block : body_.blocks)
		for (InstId i = block.first; i != kNoId; i = body_.instructions[i].next)
		{
			const auto& inst = body_.instructions[i];
			const bool object_word = !word_accesses_.empty() && word_accesses_[i];
			const bool transfer = inst.op == Opcode::Phi || inst.op == Opcode::Copy;
			const auto visit = [&](Value v, unsigned k) {
				if (!v.is(ValueKind::Temp) || !loose_[v.index])
					return;
				if (transfer && inst.result != kNoId && body_.temps[inst.result].type == body_.temps[v.index].type)
					transfers.emplace_back(inst.result, v.index);
				else if (object_word || !low_bits(body_, inst, k, body_.temps[v.index].type))
					mark(v.index);
			};
			for (unsigned k = 0; k < 3; ++k)
				visit(inst.ops[k], k);
			for (uint32_t k = 0; k < inst.extra_count; ++k)
				visit(body_.operands[inst.extra_first + k], 3 + k);
		}
	if (transfers.empty())
		return;
	std::sort(transfers.begin(), transfers.end());
	while (!strict.empty())
	{
		const TempId t = strict.back();
		strict.pop_back();
		for (auto it = std::lower_bound(transfers.begin(), transfers.end(), std::make_pair(t, TempId(0)));
			it != transfers.end() && it->first == t; ++it)
			mark(it->second);
	}
}

} // namespace aarch64
