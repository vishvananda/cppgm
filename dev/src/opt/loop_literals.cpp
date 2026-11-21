#include "aarch64/logical_immediate.h"
#include "lowir/builder.h"
#include "opt/loops.h"
#include "opt/passes.h"

#include <vector>

namespace opt {

using namespace lowir;

namespace {

// The most literals one loop keeps in registers: the rest stay in memory.
constexpr size_t kHeld = 8;
constexpr size_t kHeldAddresses = 4;
// The largest loop, in instructions, that holds a literal a move or two
// rebuilds: a larger one is short of registers for its own values.
constexpr size_t kCheapHeldLoop = 96;

// A loop without calls on its usual paths reads its floating literals from registers: each is
// copied once before the outermost such loop, and a register costs no load
// per iteration. (A value the allocator cannot keep is read from its frame
// home, as the literal would be from read-only data.) Zero is cheaper to
// clear than to keep.
class LoopLiterals
{
public:
	explicit LoopLiterals(FunctionContext& context) : c_(context), body_(context.body), cfg_(context.cfg) {}

	bool run();

private:
	struct Held
	{
		Value literal;
		Value temp;
		Type type;
	};

	bool held_literal(const Instruction& inst, uint32_t k, Value v) const;
	bool has_call(const Loop& loop) const;
	bool reads_literal(const Loop& loop) const;
	bool same_literal(Value a, Value b) const;
	bool hold(uint32_t loop, BlockId pre);
	bool hold_addresses(uint32_t loop);

	FunctionContext& c_;
	FunctionBody& body_;
	Cfg& cfg_;
	LoopForest forest_;
	std::vector<Held> held_;
	bool across_call_ = false;
	bool cheap_held_ = false; // a literal a move rebuilds may be held
};

// An A64 ADD, SUB, CMP or CMN immediate: twelve bits, shifted by twelve or not,
// of the value's magnitude at the operation's width.
bool arm_add_immediate(uint64_t raw, unsigned width)
{
	const int64_t value = width == 32 ? static_cast<int32_t>(raw) : static_cast<int64_t>(raw);
	const uint64_t magnitude = value < 0 ? uint64_t(0) - uint64_t(value) : uint64_t(value);
	const unsigned shift = (magnitude & 4095) == 0 ? 12 : 0;
	return (magnitude >> shift) <= 4095;
}

// Operand `k` of `inst` is a literal the instruction reads from a register,
// which the selector would otherwise build on every pass.
bool LoopLiterals::held_literal(const Instruction& inst, uint32_t k, Value v) const
{
	if (v.is(ValueKind::Float))
		return !across_call_ && (v.float_kind == TypeKind::F32 || v.float_kind == TypeKind::F64) &&
			body_.literals[v.index].low != 0;
	if (!v.is(ValueKind::Integer) || !target_model::is_aarch64(c_.program.target))
		return false;
	const auto width = integer_bits(inst.type.kind());
	const uint64_t raw = body_.literals[v.index].low;
	const bool wide = width == 32 || width == 64;
	// A move or two rebuilds a select, compare or addition literal: it is held
	// only where registers are not short (no call, a small loop). CSEL reads
	// XZR for a zero, and CSINC builds a one.
	if (inst.op == Opcode::Select)
		return cheap_held_ && (k == 1 || k == 2) && width != 0 && width <= 64 && raw != 0 && raw != 1;
	// CMP and CMN take an immediate on the right only.
	if (inst.op == Opcode::Compare)
		return cheap_held_ && wide && (k == 0 ? raw != 0 : !arm_add_immediate(raw, width));
	if (inst.op != Opcode::Binary)
		return false;
	const auto op = static_cast<BinaryOp>(inst.sub);
	if (wide && (op == BinaryOp::Add || (op == BinaryOp::Sub && k == 1)))
		return cheap_held_ && !arm_add_immediate(raw, width);
	if (wide && op == BinaryOp::Sub)
		return cheap_held_ && raw != 0;
	if (wide && (op == BinaryOp::Xor || op == BinaryOp::Or || op == BinaryOp::And))
	{
		uint32_t field = 0;
		return raw && !aarch64::logical_immediate(raw, width, field);
	}
	if (across_call_ || op != BinaryOp::Mul || !wide)
		return false;
	// A multiply reads its literal from a register: where registers are not
	// short, a factor the selector cannot form with a shift or a shifted
	// addition (2^k, 1 + 2^k) is built once, not by a move or two per pass.
	const uint64_t factor = width == 32 ? static_cast<uint32_t>(raw) : raw;
	if (cheap_held_ && factor > 2 && (factor & (factor - 1)) != 0 && ((factor - 1) & (factor - 2)) != 0)
		return true;
	if (width != 64)
		return false;
	// A multiply-add address needs a register stride, even if a single
	// move constructs the literal. A power of two already folds as a shift.
	const uint64_t stride = body_.literals[v.index].low;
	if (inst.next != kNoId && stride && (stride & (stride - 1)))
	{
		const auto& next = body_.instructions[inst.next];
		if (next.op == Opcode::Index && storage_bytes(next.type) == 1 && next.ops[1] == Value::temp(inst.result))
			return true;
	}
	// A multiply needs its literal in a register. Several MOVKs in the
	// loop cost more than using a register for the invariant multiplicand.
	uint64_t bits = body_.literals[v.index].low;
	unsigned nonzero = 0, nonones = 0;
	for (unsigned i = 0; i < 4; ++i, bits >>= 16)
	{
		nonzero += (bits & 65535) != 0;
		nonones += (bits & 65535) != 65535;
	}
	return nonzero >= 3 && nonones >= 3;
}

bool LoopLiterals::has_call(const Loop& loop) const
{
	for (BlockId b : loop.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			if (body_.instructions[i].op == Opcode::Call && !rare_float_path(body_, cfg_, b))
				return true;
	return false;
}

bool LoopLiterals::same_literal(Value a, Value b) const
{
	const Literal& x = body_.literals[a.index];
	const Literal& y = body_.literals[b.index];
	return a.kind == b.kind && x.low == y.low && x.high == y.high && a.float_kind == b.float_kind;
}

bool LoopLiterals::reads_literal(const Loop& loop) const
{
	bool found = false;
	for (BlockId b : loop.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId && !found; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			for (uint32_t k = 0; k < 3 + inst.extra_count && inst.op != Opcode::Store && !found; ++k)
				found = held_literal(inst, k, k < 3 ? inst.ops[k] : body_.operands[inst.extra_first + k - 3]);
		}
	return found;
}

bool LoopLiterals::hold(uint32_t loop, BlockId pre)
{
	const Loop& l = forest_.loops[loop];
	InstId tail = previous_in_block(body_, pre, body_.blocks[pre].last);
	held_.clear();
	bool changed = false;
	for (BlockId b : l.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			if (body_.instructions[i].op == Opcode::Store)
				continue;
			// (Appending below moves the instructions and the operands.)
			const uint32_t extra = body_.instructions[i].extra_count;
			for (uint32_t k = 0; k < 3 + extra; ++k)
			{
				const uint32_t first = body_.instructions[i].extra_first;
				const Value v = k < 3 ? body_.instructions[i].ops[k] : body_.operands[first + k - 3];
				if (!held_literal(body_.instructions[i], k, v))
					continue;
				// (A phi's input from outside is read once.)
				if (k >= 3 && body_.instructions[i].op == Opcode::Phi &&
					!in_loop(forest_, loop, body_.operands[first + k - 4].index))
					continue;
				const Type type = v.is(ValueKind::Float) ? Type::scalar(v.float_kind) : body_.instructions[i].type;
				Value temp = Value::none();
				for (const Held& h : held_)
					if (h.type == type && same_literal(h.literal, v))
						temp = h.temp;
				if (temp.is(ValueKind::None))
				{
					if (held_.size() == kHeld)
						continue;
					Instruction copy = make_instruction(Opcode::Copy, type);
					copy.ops[0] = v;
					const InstId id = append_instruction(body_, copy);
					const TempId result = append_temp(body_, type, id);
					body_.instructions[id].result = result;
					insert_after(body_, pre, tail, id);
					tail = id;
					temp = Value::temp(result);
					held_.push_back(Held{ v, temp, type });
				}
				if (k < 3)
					body_.instructions[i].ops[k] = temp;
				else
					body_.operands[first + k - 3] = temp;
				changed = true;
			}
		}
	return changed;
}

// A compare in a loop reads a symbol's address, at most kHeldAddresses of
// them, from an `addr` in the block that dominates the outermost loop's
// header: a preheader, or the test that enters the loop. Read in place, the
// address takes a `lea` per pass. A general register survives a call, so a
// loop with calls holds them too.
bool LoopLiterals::hold_addresses(uint32_t loop)
{
	const Loop& l = forest_.loops[loop];
	const BlockId pre = cfg_.idom[l.header];
	InstId tail = previous_in_block(body_, pre, body_.blocks[pre].last);
	held_.clear();
	bool changed = false;
	for (BlockId b : l.blocks)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			for (unsigned k = 0; k < 2 && body_.instructions[i].op == Opcode::Compare; ++k)
			{
				const Value v = body_.instructions[i].ops[k];
				if (!v.is(ValueKind::Symbol))
					continue;
				Value temp = Value::none();
				for (const Held& h : held_)
					if (h.literal == v)
						temp = h.temp;
				if (temp.is(ValueKind::None))
				{
					if (held_.size() == kHeldAddresses)
						continue;
					const Type type = body_.pointer_type();
					Instruction addr = make_instruction(Opcode::Addr, type);
					addr.ops[0] = v;
					const InstId id = append_instruction(body_, addr);
					const TempId result = append_temp(body_, type, id);
					body_.instructions[id].result = result;
					insert_after(body_, pre, tail, id);
					tail = id;
					temp = Value::temp(result);
					held_.push_back(Held{ v, temp, type });
				}
				body_.instructions[i].ops[k] = temp;
				changed = true;
			}
	return changed;
}

bool LoopLiterals::run()
{
	if (body_.layout.size() == 1)
		return false;
	c_.ensure_cfg();
	find_loops(body_, cfg_, forest_);
	std::vector<uint8_t> held(forest_.loops.size(), 0);
	bool changed = false;
	for (uint32_t loop = 0; loop < forest_.loops.size(); ++loop)
	{
		const uint32_t parent = forest_.loops[loop].parent;
		if (parent != kNoId && held[parent] != 0)
		{
			held[loop] = 1;
			continue;
		}
		across_call_ = has_call(forest_.loops[loop]);
		size_t size = across_call_ || !target_model::is_aarch64(c_.program.target) ? kCheapHeldLoop + 1 : 0;
		for (BlockId b : forest_.loops[loop].blocks)
			for (InstId i = body_.blocks[b].first; i != kNoId && size <= kCheapHeldLoop; i = body_.instructions[i].next)
				++size;
		cheap_held_ = size <= kCheapHeldLoop;
		if (across_call_ && !target_model::is_aarch64(c_.program.target))
			continue;
		// A retained integer mask can reside in a saved GPR. Floating
		// literals and nested call-free loops retain their own placement.
		held[loop] = !across_call_;
		const auto& l = forest_.loops[loop];
		// On Arm even a guarded loop can materialize an expensive immediate
		// once in its dominating test. A literal copy has no memory effects.
		const BlockId pre = l.preheader == kNoId && target_model::is_aarch64(c_.program.target) ? cfg_.idom[l.header]
																								: l.preheader;
		if (pre != kNoId && reads_literal(l))
			changed = hold(loop, pre) || changed;
	}
	std::vector<uint8_t> addressed(forest_.loops.size(), 0);
	for (uint32_t loop = 0; loop < forest_.loops.size(); ++loop)
	{
		const uint32_t parent = forest_.loops[loop].parent;
		if (parent != kNoId && addressed[parent] != 0)
		{
			addressed[loop] = 1;
			continue;
		}
		addressed[loop] = cfg_.idom[forest_.loops[loop].header] != kNoId;
		if (addressed[loop] != 0)
			changed = hold_addresses(loop) || changed;
	}
	if (changed)
		c_.invalidate_block_of();
	return changed;
}

} // namespace

static bool arm_block_literal(const FunctionBody& body, const Instruction& inst, Value operand)
{
	if (operand.is(ValueKind::Float))
		return operand.float_kind == inst.type.kind() &&
			(inst.type.kind() == TypeKind::F32 || inst.type.kind() == TypeKind::F64) &&
			body.literals[operand.index].low != 0;
	const unsigned width = integer_bits(inst.type.kind());
	if (!operand.is(ValueKind::Integer) || (width != 32 && width != 64))
		return false;
	const auto op = static_cast<BinaryOp>(inst.sub);
	const uint64_t raw = body.literals[operand.index].low;
	const uint64_t bits = width == 32 ? static_cast<uint32_t>(raw) : raw;
	if (op == BinaryOp::Mul)
		return bits >= 256 && (bits & (bits - 1)) != 0 && ((bits - 1) & (bits - 2)) != 0;
	if (op != BinaryOp::Add && op != BinaryOp::Sub)
		return false;
	const int64_t signed_bits = width == 32 ? static_cast<int32_t>(bits) : static_cast<int64_t>(bits);
	const uint64_t magnitude = signed_bits < 0 ? uint64_t(0) - signed_bits : signed_bits;
	return magnitude >= 4096 && ((magnitude & 4095) != 0 || (magnitude >> 12) >= 4096);
}

// Recurring literals in a large Arm block can share one materialization.
// Limit new live ranges and keep them within blocks that make no calls.
static bool hold_arm_block_literals(FunctionBody& body, BlockId block)
{
	struct Repeated
	{
		Value literal = Value::none(), replacement = Value::none();
		Type type = Type::scalar(TypeKind::Void);
		unsigned uses = 0;
	};
	Repeated constants[4];
	const auto matches = [&](const Repeated& item, Type type, Value operand) {
		return item.type == type && body.literals[item.literal.index].low == body.literals[operand.index].low;
	};
	unsigned length = 0;
	InstId phis = kNoId;
	for (InstId id = body.blocks[block].first; id != kNoId; id = body.instructions[id].next)
	{
		const auto& inst = body.instructions[id];
		++length;
		if (inst.op == Opcode::Call)
			return false;
		if (inst.op == Opcode::Phi)
			phis = id;
		if (inst.op != Opcode::Binary)
			continue;
		for (unsigned n = 0; n < 2; ++n)
		{
			const Value literal = inst.ops[n];
			if (!arm_block_literal(body, inst, literal))
				continue;
			for (auto& item : constants)
				if (item.uses == 0 || matches(item, inst.type, literal))
				{
					item.literal = literal;
					item.type = inst.type;
					++item.uses;
					break;
				}
		}
	}
	if (length < 24)
		return false;
	bool changed = false;
	for (auto& item : constants)
		if (item.uses >= 3)
		{
			Instruction copy = make_instruction(Opcode::Copy, item.type);
			copy.ops[0] = item.literal;
			const InstId id = append_instruction(body, copy);
			item.replacement = Value::temp(append_temp(body, copy.type, id));
			body.instructions[id].result = item.replacement.index;
			insert_after(body, block, phis, id);
			phis = id;
			changed = true;
		}
	if (!changed)
		return false;
	for (InstId id = body.blocks[block].first; id != kNoId; id = body.instructions[id].next)
	{
		auto& inst = body.instructions[id];
		if (inst.op != Opcode::Binary)
			continue;
		for (unsigned n = 0; n < 2; ++n)
			if (arm_block_literal(body, inst, inst.ops[n]))
				for (const auto& item : constants)
					if (!item.replacement.is(ValueKind::None) && matches(item, inst.type, inst.ops[n]))
					{
						inst.ops[n] = item.replacement;
						break;
					}
	}
	return true;
}

bool hold_loop_literals(FunctionContext& context)
{
	const bool arm = target_model::is_aarch64(context.program.target);
	if (!context.costs.floating_literal_loads && !arm)
		return false;
	LoopLiterals pass(context);
	const bool loops = pass.run();
	if (!arm || context.level < 2 || context.body.instructions.size() < 24)
		return loops;
	bool changed = false;
	for (BlockId block : context.body.layout)
		changed = hold_arm_block_literals(context.body, block) || changed;
	if (changed)
	{
		context.invalidate_block_of();
		context.invalidate_uses();
	}
	return changed || loops;
}

} // namespace opt
