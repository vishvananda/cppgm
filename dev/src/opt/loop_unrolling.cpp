#include <algorithm>
#include <vector>

#include "lowir/builder.h"
#include "opt/loops.h"
#include "opt/passes.h"
#include "opt/scalar_fold.h"

namespace opt {

using namespace lowir;

namespace {

// The most passes one group runs, and the most instructions a group holds
// (its passes' own, then the group's test and branch).
const unsigned kGroupPasses = 8;
const unsigned kGroupSize = 28;
const unsigned kSearchPasses = 4;
// The greatest step of a tested induction (bytes of a pointer).
const int64_t kGroupStep = int64_t(1) << 16;

// O2+, after the passes that read a loop's shape: a short straight loop that
// leaves when an induction meets a bound runs its passes in groups. Before
// the loop, a group loop runs U passes with one test, as long as U passes
// remain: the distance to the bound, less what is short of a whole group, is
// its range (the induction steps by a power of two, so the range is one
// `and`). The loop itself then runs the passes left, fewer than U; with
// fewer than U from the start the group loop does not run.
//
// The loop is a chain of blocks, tested by its header on an induction's phi
// (`while`) or by its latch (`do`), with no call. It stays while the
// induction differs from the bound, or while it is before the bound in the
// direction it steps (then the bound is first tested as the loop would). The
// test may read the induction truncated (an `int` counter kept in 64 bits):
// the distances are then the narrow type's.
//
// In a group, an induction's value in each pass is the group's first plus
// the steps so far (an address's displacement, with no step between).
class ShortLoopUnrolling
{
public:
	explicit ShortLoopUnrolling(FunctionContext& context) : c_(context), body_(context.body), cfg_(context.cfg) {}
	bool run();

private:
	struct Shape
	{
		BlockId pre = kNoId, header = kNoId, latch = kNoId, exit = kNoId;
		BlockId conditional = kNoId;
		bool bottom = false;   // tested by the latch
		bool stepped = false;  // the test reads the stepped value (a latch may read either)
		bool narrowed = false; // the test reads the value truncated, to `narrow`
		Type narrow;
		InstId compare = kNoId; // the test, or none: the branch reads `truth` itself (`!= 0`)
		Value truth;
		bool stays_true = false;
		ComparePredicate stays = ComparePredicate::Ne; // `induction stays bound`: the loop goes on
		TempId iv = kNoId;                             // the tested induction's phi
		Value init, bound, next;                       // its first value, the bound, its stepped value
		int64_t step = 0;                              // bytes of a pointer, units of an integer
		unsigned passes = 0;                           // per group
		std::vector<BlockId> chain;                    // header first
	};

	bool in(uint32_t loop, Value v) const
	{
		if (!v.is(ValueKind::Temp) || v.index < body_.parameter_count)
			return false;
		// (An instruction this pass made stands outside every loop found.)
		const InstId def = body_.temps[v.index].def;
		return def != kNoId && def < block_of_.size() && in_loop(forest_, loop, block_of_[def]);
	}
	struct Search
	{
		BlockId header, latch, guard, early;
		InstId phi;
	};
	bool search_shape(uint32_t at, Search& s) const;
	bool search_body(BlockId b, InstId hp, BlockId latch) const;
	void search_branch(BlockId b, InstId& id, Value v, BlockId yes, BlockId no);
	void copy_search_tests(const Search& s, BlockId scalar, const std::vector<BlockId>& blocks, const Instruction& step,
		const Instruction& hb, const Instruction& gb);
	void rewrite_search(const Search& s);
	bool wanted(uint32_t loop) const;
	bool chain(uint32_t loop, Shape& s) const;
	Value literal_limit(Type type, ComparePredicate& stays, Value init, Value bound, uint64_t step) const;
	bool tested(uint32_t loop, Shape& s) const;
	bool sized(Shape& s) const;
	InstId guard_load(const Shape& s) const;
	Value nonzero_words(BlockId block, InstId& after, Value base, unsigned words);
	void rewrite(const Shape& s);
	void join_exit(const Shape& s, BlockId left);
	Value emit(BlockId block, InstId& after, Instruction inst, Type result, bool placed = false);
	Value mapped(Value v) const
	{
		return v.is(ValueKind::Temp) && v.index < map_.size() && !map_[v.index].is(ValueKind::None) ? map_[v.index] : v;
	}

	FunctionContext& c_;
	FunctionBody& body_;
	Cfg& cfg_;
	LoopForest forest_;
	std::vector<BlockId> block_of_;
	std::vector<uint32_t> uses_;
	std::vector<uint8_t> escapes_; // per temp: read outside the loop that defines it
	std::vector<Value> map_;       // per temp of the loop: its value in the pass being copied
	std::vector<uint8_t> member_;  // per block: of the loop being rewritten
	uint32_t location_ = 0;
};

// A loop the pass takes once it has a preheader (any one of its entries
// shows what the others bring too: a value of outside the loop).
bool ShortLoopUnrolling::wanted(uint32_t loop) const
{
	const Loop& l = forest_.loops[loop];
	Shape s;
	for (uint32_t k = cfg_.pred_first[l.header]; k < cfg_.pred_first[l.header + 1] && s.pre == kNoId; ++k)
		if (!in_loop(forest_, loop, cfg_.preds[k]))
			s.pre = cfg_.preds[k];
	return l.preheader == kNoId && chain(loop, s) && tested(loop, s) && sized(s);
}

// The loop's blocks as one chain from the header to the latch, left by one
// branch: the header's (then the latch only jumps) or the latch's. (`s.pre`
// is the preheader, or the entry given for a loop with none.)
bool ShortLoopUnrolling::chain(uint32_t loop, Shape& s) const
{
	const Loop& l = forest_.loops[loop];
	if (l.preheader != kNoId)
		s.pre = l.preheader;
	if (l.latches.size() != 1 || s.pre == kNoId)
		return false;
	s.header = l.header;
	s.latch = l.latches[0];
	// (Not a loop this pass or the fill widening made, nor what one left.
	// A copy keeps the group header's kind; a block's other kinds can be
	// the lowering's, which LowIR text does not carry.)
	if (body_.blocks[s.header].kind == BlockKind::UnrolledGroup || body_.blocks[s.pre].kind == BlockKind::WideTail)
		return false;
	// (Nor the passes a lane loop left, fewer than its lanes: entered from
	// the lane loop, or from its exit block.)
	for (uint32_t k = cfg_.pred_first[s.pre]; k < cfg_.pred_first[s.pre + 1]; ++k)
	{
		const BlockId p = cfg_.preds[k];
		if (body_.blocks[p].kind == BlockKind::WideLoop)
			return false;
		for (uint32_t j = cfg_.pred_first[p]; body_.blocks[p].kind == BlockKind::LoopExit && j < cfg_.pred_first[p + 1];
			++j)
			if (body_.blocks[cfg_.preds[j]].kind == BlockKind::WideLoop)
				return false;
	}
	auto last = [&](BlockId b) -> const Instruction& { return body_.instructions[body_.blocks[b].last]; };
	s.bottom = s.header == s.latch || last(s.header).op != Opcode::Branch;
	// A guarded body executes only along one edge. Its other edge rejoins
	// the latch directly, so each copy must keep its own branch.
	if (!s.bottom && l.blocks.size() == 3 && !target_model::is_wasm(c_.program.target))
	{
		const auto& test = last(s.header);
		for (unsigned side = 1; side <= 2; ++side)
		{
			const auto guarded = test.ops[side].index;
			if (test.ops[3 - side].index == s.latch && guarded != s.header && guarded != s.latch &&
				in_loop(forest_, loop, guarded) && last(guarded).op == Opcode::Jump &&
				last(guarded).ops[0].index == s.latch && cfg_.pred_first[guarded + 1] - cfg_.pred_first[guarded] == 1)
			{
				s.conditional = guarded;
				s.bottom = true;
			}
		}
	}
	const BlockId exiting = s.bottom ? s.latch : s.header;
	const Instruction& branch = last(exiting);
	if (branch.op != Opcode::Branch || !branch.ops[0].is(ValueKind::Temp))
		return false;
	const BlockId on_true = branch.ops[1].index, on_false = branch.ops[2].index;
	s.stays_true = in_loop(forest_, loop, on_true);
	if (s.stays_true == in_loop(forest_, loop, on_false))
		return false;
	s.exit = s.stays_true ? on_false : on_true;
	const BlockId stays = s.stays_true ? on_true : on_false;
	if (s.bottom && stays != s.header)
		return false;
	s.chain.clear();
	for (BlockId b = s.header;;)
	{
		if (forest_.innermost[b] != loop || s.chain.size() == l.blocks.size())
			return false;
		s.chain.push_back(b);
		if (b == s.latch)
			break;
		BlockId next = stays;
		if (s.conditional != kNoId && b == s.header)
			next = s.conditional;
		else if (b != exiting)
		{
			if (last(b).op != Opcode::Jump)
				return false;
			next = last(b).ops[0].index;
		}
		if (next == s.header ||
			cfg_.pred_first[next + 1] - cfg_.pred_first[next] != (s.conditional != kNoId && next == s.latch ? 2u : 1u))
			return false;
		b = next;
	}
	if (s.chain.size() != l.blocks.size() || (!s.bottom && last(s.latch).op != Opcode::Jump))
		return false;
	// The test: a compare the branch alone reads, or the value the branch
	// reads itself.
	const InstId compare = body_.temps[branch.ops[0].index].def;
	if (compare == kNoId || branch.ops[0].index < body_.parameter_count)
		return false;
	s.truth = branch.ops[0];
	s.compare = kNoId;
	if (body_.instructions[compare].op != Opcode::Compare)
		return body_.temps[s.truth.index].type.is_integer() || body_.temps[s.truth.index].type.is_pointer();
	if (block_of_[compare] != exiting || uses_[branch.ops[0].index] != 1)
		return false;
	s.compare = compare;
	return true;
}

// An induction that steps up by `step` and stays while it is at or before a
// literal stays while it is before a later literal: `stays` becomes that
// order and the result that literal, else `bound`. From a literal first value
// the literal is the first one past the bound that the induction can take, so
// the distance is whole steps.
Value ShortLoopUnrolling::literal_limit(
	Type type, ComparePredicate& stays, Value init, Value bound, uint64_t step) const
{
	const bool is_unsigned = stays == ComparePredicate::Ule;
	if ((stays != ComparePredicate::Le && !is_unsigned) || !bound.is(ValueKind::Integer) || !type.is_integer() ||
		lowir::integer_bits(type.kind()) > 64)
		return bound;
	const unsigned bits = lowir::integer_bits(type.kind());
	const uint64_t mask = bits == 64 ? ~uint64_t(0) : (uint64_t(1) << bits) - 1;
	const uint64_t last = is_unsigned ? mask : mask >> 1;
	const uint64_t at = body_.literals[bound.index].low & mask;
	// (A negative bound of a signed order is left as it is.)
	if (at >= last)
		return bound;
	uint64_t past = at + 1;
	if (init.is(ValueKind::Integer))
	{
		const uint64_t first = body_.literals[init.index].low & mask;
		if (first <= at && step - (at - first) % step <= last - at)
			past = at + step - (at - first) % step;
	}
	stays = is_unsigned ? ComparePredicate::Ult : ComparePredicate::Lt;
	return integer_value(body_, normalize_integer(type, Literal{ past, 0 }));
}

// The test's induction: a header phi from the preheader's value, stepped once
// per pass by a power of two, compared with a value of outside the loop. A
// header tests the phi; a latch the stepped value, or the phi for difference.
bool ShortLoopUnrolling::tested(uint32_t loop, Shape& s) const
{
	// (A value the branch reads itself is compared with zero.)
	Instruction cmp = make_instruction(Opcode::Compare, body_.temps[s.truth.index].type);
	cmp.sub = static_cast<uint8_t>(ComparePredicate::Ne);
	cmp.ops[0] = s.truth;
	cmp.ops[1] = integer_value(body_, Literal{ 0, 0 });
	if (s.compare != kNoId)
		cmp = body_.instructions[s.compare];
	for (unsigned side = 0; side < 2; ++side)
	{
		Value value = cmp.ops[side];
		const Value bound = cmp.ops[1 - side];
		if (!value.is(ValueKind::Temp) || in(loop, bound) || !in(loop, value))
			continue;
		const Instruction* def = &body_.instructions[body_.temps[value.index].def];
		const bool narrowed = def->op == Opcode::Convert && static_cast<ConvertOp>(def->sub) == ConvertOp::Trunc &&
			def->type == cmp.type && in(loop, def->ops[0]);
		if (narrowed)
		{
			value = def->ops[0];
			def = &body_.instructions[body_.temps[value.index].def];
		}
		const bool stepped = def->op != Opcode::Phi;
		if (stepped)
		{
			if (!s.bottom || !def->ops[0].is(ValueKind::Temp) || !in(loop, def->ops[0]))
				continue;
			def = &body_.instructions[body_.temps[def->ops[0].index].def];
		}
		const Instruction& phi = *def;
		if (phi.op != Opcode::Phi || phi.extra_count != 4 || block_of_[body_.temps[phi.result].def] != s.header)
			continue;
		const Value next = phi_incoming(body_, phi, s.latch);
		if (!next.is(ValueKind::Temp) || !in(loop, next) || (stepped && next.index != value.index))
			continue;
		const Instruction& step = body_.instructions[body_.temps[next.index].def];
		if (!step.ops[0].is(ValueKind::Temp) || step.ops[0].index != phi.result || !step.ops[1].is(ValueKind::Integer))
			continue;
		int64_t by = 0;
		if (step.op == Opcode::Index && phi.type.is_pointer() && !narrowed)
		{
			const int64_t count = static_cast<int64_t>(body_.literals[step.ops[1].index].low);
			const int64_t size = static_cast<int64_t>(storage_bytes(step.type));
			if (count > kGroupStep || count < -kGroupStep || size > kGroupStep)
				continue;
			by = count * size;
		}
		else if (step.op == Opcode::Binary && step.type == phi.type && (narrowed || cmp.type == phi.type) &&
			phi.type.is_integer() && phi.type.kind() != TypeKind::I128 && cmp.type.is_integer() &&
			lowir::integer_bits(cmp.type.kind()) >= 32 &&
			(static_cast<BinaryOp>(step.sub) == BinaryOp::Add || static_cast<BinaryOp>(step.sub) == BinaryOp::Sub))
		{
			by = static_cast<int64_t>(normalize_integer(step.type, body_.literals[step.ops[1].index]).low);
			// (An unsigned type's literal reads as the step it wraps to.)
			const unsigned bits = lowir::integer_bits(step.type.kind());
			if (bits < 64)
				by = static_cast<int64_t>(static_cast<uint64_t>(by) << (64 - bits)) >> (64 - bits);
			if (static_cast<BinaryOp>(step.sub) == BinaryOp::Sub)
				by = -by;
		}
		const int64_t size = by < 0 ? -by : by;
		if (size == 0 || size > kGroupStep || (size & (size - 1)) != 0)
			continue;
		// It stays while the induction differs from the bound, or is before
		// it (the value the test reads: the stepped one's order alone).
		ComparePredicate stays = static_cast<ComparePredicate>(cmp.sub);
		stays = s.stays_true ? stays : inverted(stays);
		stays = side == 0 ? stays : swapped(stays);
		const Value init = phi_incoming(body_, phi, s.pre);
		const Value limit = by > 0 ? literal_limit(cmp.type, stays, init, bound, static_cast<uint64_t>(by)) : bound;
		// With a variable inclusive bound, form complete groups before
		// the bound and leave its final iteration to the original loop.
		if (s.conditional != kNoId && by > 0 && stepped && s.bottom)
		{
			if (stays == ComparePredicate::Le)
				stays = ComparePredicate::Lt;
			if (stays == ComparePredicate::Ule)
				stays = ComparePredicate::Ult;
		}
		const bool before = by > 0 ? stays == ComparePredicate::Lt || stays == ComparePredicate::Ult
								   : stays == ComparePredicate::Gt || stays == ComparePredicate::Ugt;
		if (stays != ComparePredicate::Ne && !(before && (stepped || !s.bottom)))
			continue;
		s.stays = stays;
		s.stepped = stepped;
		s.narrowed = narrowed;
		s.narrow = cmp.type;
		s.iv = phi.result;
		s.init = init;
		s.bound = limit;
		s.next = next;
		s.step = by;
		return true;
	}
	return false;
}

// What each pass copies is plain (no call, no object over two words moved
// whole), and U passes fit a group. Phis stand only in the header, each for the
// preheader's value and the latch's.
bool ShortLoopUnrolling::sized(Shape& s) const
{
	// Duplicate a conditional constant store only when its body has no
	// dependent loads. Conditional swaps carry values between iterations
	// and use more registers when their bodies are duplicated.
	if (s.conditional != kNoId)
	{
		unsigned stores = 0;
		for (InstId i = body_.blocks[s.conditional].first; i != body_.blocks[s.conditional].last;
			i = body_.instructions[i].next)
		{
			const auto& inst = body_.instructions[i];
			if (inst.op == Opcode::Index || inst.op == Opcode::Addr || inst.op == Opcode::Convert ||
				inst.op == Opcode::Binary)
				continue;
			if (inst.op != Opcode::Store || !inst.ops[0].is(ValueKind::Integer) || (inst.flags & IF_VOLATILE))
				return false;
			++stores;
		}
		if (stores != 1)
			return false;
	}

	unsigned size = 0, floating_stores = 0;
	for (BlockId b : s.chain)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			if (inst.op == Opcode::Phi)
			{
				if (b != s.header || inst.extra_count != 4)
					return false;
				continue;
			}
			if (i == s.compare || i == body_.blocks[b].last)
				continue;
			// (An object of at most two words zeroed or copied whole: a
			// store a word, with a load for a copy.)
			if ((inst.op == Opcode::ZeroInit || inst.op == Opcode::CopyObject) && inst.extra_count == 0 &&
				inst.immediate <= 16)
			{
				size += (inst.immediate > 8 ? 2 : 1) * (inst.op == Opcode::CopyObject ? 2 : 1);
				continue;
			}
			if (inst.extra_count != 0 || inst.type.is_object())
				return false;
			switch (inst.op)
			{
			case Opcode::Copy:
			case Opcode::Addr:
				break;
			case Opcode::Index:
				size += c_.costs.scaled_memory_operands ? (inst.ops[1].is(ValueKind::Integer) ? 0 : 1) : 2;
				break;
			case Opcode::Convert:
				size += static_cast<ConvertOp>(inst.sub) == ConvertOp::Trunc ? 0 : 1;
				break;
			case Opcode::Store:
				floating_stores += inst.type.is_float() ? 1 : 0;
				++size;
				break;
			case Opcode::Load:
			case Opcode::Binary:
			case Opcode::Unary:
			case Opcode::Compare:
			case Opcode::Select:
			case Opcode::Vector:
				++size;
				break;
			default:
				return false;
			}
		}
	// (A pass's floating stores may pack into lanes, opt/block_lanes.cpp:
	// its copies would store each location again.)
	if (size == 0 || floating_stores > 1)
		return false;
	s.passes = kGroupPasses;
	while (s.passes > 1 && size * s.passes + 2 > (s.conditional == kNoId ? kGroupSize : 2 * kGroupSize))
		s.passes /= 2;
	return s.passes > 1;
}

// (`placed`: a copy, which keeps its source's location.)
Value ShortLoopUnrolling::emit(BlockId block, InstId& after, Instruction inst, Type result, bool placed)
{
	if (!placed)
		inst.location = location_;
	inst.next = kNoId;
	const InstId id = append_instruction(body_, inst);
	if (!result.is_void())
		body_.instructions[id].result = append_temp(body_, result, id);
	insert_after(body_, block, after, id);
	after = id;
	return result.is_void() ? Value::none() : Value::temp(body_.instructions[id].result);
}

// A full group always reads each of these adjacent words. If all words are
// zero, no conditional store executes. Otherwise the original tests are
// repeated in order, so an overlapping store can change a later predicate.
InstId ShortLoopUnrolling::guard_load(const Shape& s) const
{
	const auto kind = body_.temps[s.iv].type.kind();
	const auto bits = integer_bits(kind);
	const bool ordered = (s.stays == ComparePredicate::Lt && !is_unsigned(kind)) ||
		(s.stays == ComparePredicate::Ult && is_unsigned(kind));
	if (s.conditional == kNoId || s.chain.size() != 3 || s.passes < 4 || (s.passes & 1) || s.step != 1 ||
		(bits != 64 && !(bits == 32 && ordered && !s.narrowed)))
		return kNoId;
	auto id = body_.blocks[s.header].first;
	if (id == kNoId || body_.instructions[id].op != Opcode::Phi || body_.instructions[id].result != s.iv)
		return kNoId;
	id = body_.instructions[id].next;
	if (id == kNoId)
		return kNoId;
	const auto& ix = body_.instructions[id];
	if (ix.op != Opcode::Index || storage_bytes(ix.type) != 4 || !(ix.ops[1] == Value::temp(s.iv)) || ix.next == kNoId)
		return kNoId;
	const auto& test = body_.instructions[body_.blocks[s.header].last];
	const auto& load = body_.instructions[ix.next];
	if (load.op != Opcode::Load || (load.flags & IF_VOLATILE) || !load.type.is_integer() ||
		storage_bytes(load.type) != 4 || !(load.ops[0] == Value::temp(ix.result)) ||
		load.next != body_.blocks[s.header].last || !(test.ops[0] == Value::temp(load.result)) ||
		test.ops[1].index != s.conditional)
		return kNoId;
	for (auto j = body_.blocks[s.latch].first; j != body_.blocks[s.latch].last; j = body_.instructions[j].next)
	{
		const auto& op = body_.instructions[j];
		if (op.result == kNoId ||
			!(op.result == s.next.index || j == s.compare ||
				(op.op == Opcode::Convert && op.sub == static_cast<unsigned>(ConvertOp::Trunc))))
			return kNoId;
	}
	return ix.next;
}

Value ShortLoopUnrolling::nonzero_words(BlockId block, InstId& after, Value base, unsigned words)
{
	const auto pointer_type = body_.pointer_type();
	const auto i64 = Type::scalar(TypeKind::I64);
	Value any;
	for (unsigned at = 0; at < words; at += 2)
	{
		Value pointer = base;
		if (at)
		{
			Instruction ix = make_instruction(Opcode::Index, i64);
			ix.ops[0] = base;
			ix.ops[1] = integer_value(body_, integer_literal(at / 2));
			pointer = emit(block, after, ix, pointer_type);
		}
		Instruction wide = make_instruction(Opcode::Load, i64);
		wide.ops[0] = pointer;
		const Value word_pair = emit(block, after, wide, i64);
		if (!at)
			any = word_pair;
		else
		{
			Instruction join = make_instruction(Opcode::Binary, i64);
			join.sub = static_cast<uint8_t>(BinaryOp::Or);
			join.ops[0] = any;
			join.ops[1] = word_pair;
			any = emit(block, after, join, i64);
		}
	}
	return any;
}

void ShortLoopUnrolling::rewrite(const Shape& s)
{
	const Type none = Type::scalar(TypeKind::Void), i64 = Type::scalar(TypeKind::I64);
	const Type type = body_.temps[s.iv].type;
	const bool pointer = type.is_pointer();
	// (A pointer's distances and its stop as the integers they are.)
	const Type word = pointer ? i64 : s.narrowed ? s.narrow : type;
	const bool ordered = s.stays != ComparePredicate::Ne;
	location_ = body_.instructions[body_.blocks[s.header].last].location;
	auto literal = [&](int64_t v) { return integer_value(body_, normalize_integer(word, integer_literal(v))); };
	auto binary = [&](BinaryOp op, Value a, Value b) {
		Instruction inst = make_instruction(Opcode::Binary, word);
		inst.sub = static_cast<uint8_t>(op);
		inst.ops[0] = a;
		inst.ops[1] = b;
		return inst;
	};
	auto compare = [&](ComparePredicate pred, Value a, Value b) {
		Instruction inst = make_instruction(Opcode::Compare, word);
		inst.sub = static_cast<uint8_t>(pred);
		inst.ops[0] = a;
		inst.ops[1] = b;
		return inst;
	};
	auto branch = [&](Value on, BlockId yes, BlockId no) {
		Instruction inst = make_instruction(Opcode::Branch, none);
		inst.ops[0] = on;
		inst.ops[1] = Value::block(yes);
		inst.ops[2] = Value::block(no);
		return inst;
	};
	auto jump = [&](BlockId to) {
		Instruction inst = make_instruction(Opcode::Jump, none);
		inst.ops[0] = Value::block(to);
		return inst;
	};
	// The induction's value as the test reads it.
	auto as_word = [&](BlockId b, InstId& after, Value v) {
		if (pointer)
		{
			Instruction copy = make_instruction(Opcode::Copy, i64);
			copy.ops[0] = v;
			return emit(b, after, copy, i64);
		}
		if (!s.narrowed)
			return v;
		if (v.is(ValueKind::Integer))
			return integer_value(body_, normalize_integer(word, body_.literals[v.index]));
		Instruction narrow = make_instruction(Opcode::Convert, word);
		narrow.sub = static_cast<uint8_t>(ConvertOp::Trunc);
		narrow.ops[0] = v;
		set_convert_source_type(narrow, type);
		return emit(b, after, narrow, word);
	};
	// An ordered loop that does not run at all has no distance: the bound
	// is tested first as the loop tests it (from zero the distance says it).
	const bool zero = s.init.is(ValueKind::Integer) && body_.literals[s.init.index].low == 0 &&
		body_.literals[s.init.index].high == 0 && s.step > 0;
	const bool guarded = ordered && !zero;
	const BlockId sized = guarded ? append_block(body_, BlockKind::LoopPreheader) : s.pre;
	const BlockId enter = append_block(body_, BlockKind::LoopPreheader),
				  group = append_block(body_, BlockKind::UnrolledGroup);
	const BlockId left = s.bottom ? append_block(body_, BlockKind::LoopExit) : kNoId;
	const BlockId tail = append_block(body_, BlockKind::WideTail);
	const BlockId out = s.bottom ? left : group; // where the group loop leaves from
	InstId at = previous_in_block(body_, s.pre, body_.blocks[s.pre].last);
	const Value from = as_word(s.pre, at, s.init);
	Value to = pointer ? as_word(s.pre, at, s.bound) : s.bound;
	if (guarded)
	{
		const Value runs = emit(s.pre, at, compare(s.stays, from, to), i64);
		Instruction& entry = body_.instructions[body_.blocks[s.pre].last];
		entry = branch(runs, sized, tail);
		entry.location = location_;
		at = kNoId;
	}
	// The whole groups' range, and whether there is one. (A latch that
	// tests the phi leaves one step after the phi met the bound.)
	if (s.bottom && !s.stepped)
		to = emit(sized, at, binary(BinaryOp::Add, to, literal(s.step)), word);
	const uint64_t stride = static_cast<uint64_t>(s.step < 0 ? -s.step : s.step) * s.passes;
	const Value distance = emit(
		sized, at, s.step > 0 ? binary(BinaryOp::Sub, to, from) : binary(BinaryOp::Sub, from, to), word);
	const Value range = emit(sized, at, binary(BinaryOp::And, distance, literal(-static_cast<int64_t>(stride))), word);
	// (By a signed order, a distance past the type's half has no group.)
	const ComparePredicate some = s.stays == ComparePredicate::Lt ? ComparePredicate::Gt : ComparePredicate::Ne;
	const Value any = emit(sized, at, compare(some, range, literal(0)), i64);
	if (guarded)
		emit(sized, at, branch(any, enter, tail), none);
	else
	{
		Instruction& entry = body_.instructions[body_.blocks[s.pre].last];
		entry = branch(any, enter, tail);
		entry.location = location_;
	}
	// The group loop's preheader: where its induction stops.
	InstId e = kNoId;
	const Value stop = emit(enter, e, binary(s.step > 0 ? BinaryOp::Add : BinaryOp::Sub, from, range), word);
	emit(enter, e, jump(group), none);
	// The group loop: the header's phis, then the passes.
	std::vector<InstId> phis, group_phis;
	for (InstId i = body_.blocks[s.header].first; i != kNoId && body_.instructions[i].op == Opcode::Phi;
		i = body_.instructions[i].next)
		phis.push_back(i);
	map_.assign(body_.temps.size(), Value::none());
	member_.assign(body_.blocks.size(), 0);
	for (BlockId b : s.chain)
		member_[b] = 1;
	InstId g = kNoId;
	std::vector<Value> first(phis.size());
	// Each induction's step: the phi and a literal.
	std::vector<InstId> step_of(phis.size(), kNoId);
	for (size_t k = 0; k < phis.size(); ++k)
	{
		const Instruction phi = body_.instructions[phis[k]];
		first[k] = emit(group, g, make_instruction(Opcode::Phi, phi.type), phi.type);
		group_phis.push_back(g);
		map_[phi.result] = first[k];
		const Value next = phi_incoming(body_, phi, s.latch);
		if (!next.is(ValueKind::Temp) || next.index < body_.parameter_count || body_.temps[next.index].def == kNoId)
			continue;
		const InstId def = body_.temps[next.index].def;
		const Instruction& step = body_.instructions[def];
		const bool sum = step.op == Opcode::Binary && step.type == phi.type && phi.type.is_integer() &&
			phi.type.kind() != TypeKind::I128 && phi.type.kind() != TypeKind::I1 &&
			(static_cast<BinaryOp>(step.sub) == BinaryOp::Add || static_cast<BinaryOp>(step.sub) == BinaryOp::Sub);
		if (def < block_of_.size() && member_[block_of_[def]] && (sum || step.op == Opcode::Index) &&
			step.ops[0] == Value::temp(phi.result) && step.ops[1].is(ValueKind::Integer))
			step_of[k] = def;
	}
	// The tested induction's steps stay in its type between the first value
	// and the bound when the test's order is the type's (or it starts at
	// zero, unsigned, or signed below a positive bound).
	const bool is_signed = !is_unsigned(type.kind());
	const bool same_order = is_signed ? s.stays == ComparePredicate::Lt || s.stays == ComparePredicate::Gt
									  : s.stays == ComparePredicate::Ult || s.stays == ComparePredicate::Ugt;
	const bool held = !pointer && !s.narrowed &&
		(guarded ? same_order
				 : zero && (is_signed ? s.stays == ComparePredicate::Lt : s.stays != ComparePredicate::Lt));
	// An address a pass takes from a base of outside the loop by a 64-bit
	// induction, or by the tested induction extended as its type orders it
	// when its steps stay in that type, either one times a literal: `by` is
	// the step of the address's index.
	auto by_induction = [&](const Instruction& inst, int64_t& by) {
		auto made_here = [&](Value v) {
			const InstId def = v.is(ValueKind::Temp) && v.index >= body_.parameter_count ? body_.temps[v.index].def
																						 : kNoId;
			return def != kNoId && def < block_of_.size() && member_[block_of_[def]] ? def : kNoId;
		};
		if (inst.op != Opcode::Index || made_here(inst.ops[0]) != kNoId || made_here(inst.ops[1]) == kNoId)
			return false;
		Value counter = inst.ops[1];
		const Instruction* def = &body_.instructions[made_here(counter)];
		int64_t scale = 1;
		if (def->op == Opcode::Binary && def->type.is_integer() && lowir::integer_bits(def->type.kind()) == 64 &&
			def->ops[1].is(ValueKind::Integer) && made_here(def->ops[0]) != kNoId)
		{
			const uint64_t literal = body_.literals[def->ops[1].index].low;
			const BinaryOp op = static_cast<BinaryOp>(def->sub);
			if (!(op == BinaryOp::Mul && literal != 0 && literal <= 4096) && !(op == BinaryOp::Shl && literal <= 12))
				return false;
			scale = static_cast<int64_t>(op == BinaryOp::Mul ? literal : uint64_t(1) << literal);
			counter = def->ops[0];
			def = &body_.instructions[made_here(counter)];
		}
		const bool extended = def->op == Opcode::Convert && def->type.kind() == TypeKind::I64 &&
			static_cast<ConvertOp>(def->sub) == (is_signed ? ConvertOp::SExt : ConvertOp::ZExt);
		if (extended)
			counter = def->ops[0];
		for (size_t k = 0; k < phis.size(); ++k)
		{
			const Instruction& phi = body_.instructions[phis[k]];
			if (!counter.is(ValueKind::Temp) || phi.result != counter.index || step_of[k] == kNoId)
				continue;
			const Instruction& step = body_.instructions[step_of[k]];
			const unsigned bits = phi.type.is_integer() ? lowir::integer_bits(phi.type.kind()) : 0;
			if (step.op != Opcode::Binary || (extended ? !held || phi.result != s.iv || bits < 32 : bits != 64))
				return false;
			by = static_cast<int64_t>(body_.literals[step.ops[1].index].low << (64 - bits)) >> (64 - bits);
			by = (static_cast<BinaryOp>(step.sub) == BinaryOp::Sub ? -by : by) * scale;
			return true;
		}
		return false;
	};
	std::vector<Value> stepped(phis.size()), address(body_.temps.size());
	std::vector<BlockId> guarded_blocks;
	const auto test_load = guard_load(s);
	BlockId finish = kNoId;
	Value group_end;
	BlockId current = group;
	for (unsigned pass = 0; pass < s.passes; ++pass)
	{
		if (pass != 0)
			for (size_t k = 0; k < phis.size(); ++k)
				map_[body_.instructions[phis[k]].result] = stepped[k];
		BlockId merge = kNoId;
		for (BlockId b : s.chain)
		{
			for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			{
				// (By value: a copy's instruction may move the instructions.)
				Instruction inst = body_.instructions[i];
				if (inst.op == Opcode::Phi || i == s.compare || i == body_.blocks[b].last)
					continue;
				if (!pass && i == test_load)
				{
					const auto any = nonzero_words(current, g, mapped(inst.ops[0]), s.passes);
					Instruction step = make_instruction(Opcode::Binary, type);
					step.sub = static_cast<uint8_t>(BinaryOp::Add);
					step.ops[0] = first[0];
					step.ops[1] = integer_value(body_, integer_literal(s.passes));
					group_end = emit(current, g, step, type);
					const auto fallback = append_block(body_, BlockKind::UnrolledGroup);
					finish = append_block(body_, BlockKind::UnrolledGroup);
					guarded_blocks.push_back(fallback);
					emit(current, g, branch(any, fallback, finish), none);
					current = fallback;
					g = kNoId;
				}
				size_t k = 0;
				int64_t by = 0;
				while (k < phis.size() && step_of[k] != i)
					++k;
				if (k < phis.size())
				{
					// (A literal of an unsigned type reads as the step it wraps to.)
					const Type of = inst.op == Opcode::Index ? i64 : inst.type;
					const Literal by = normalize_integer(of, body_.literals[inst.ops[1].index]);
					inst.ops[0] = first[k];
					inst.ops[1] = integer_value(
						body_, normalize_integer(of, integer_literal(static_cast<int64_t>(by.low * (pass + 1)))));
					if (held && inst.result == s.next.index)
						inst.flags |= IF_NO_WRAP;
				}
				else if (pass != 0 && b != s.conditional && by_induction(inst, by))
				{
					// (The first pass's address, displaced by the steps so far.)
					inst.ops[0] = address[inst.result];
					inst.ops[1] = integer_value(body_, normalize_integer(i64, integer_literal(by * pass)));
				}
				else
					for (unsigned o = 0; o < 3; ++o)
						inst.ops[o] = mapped(inst.ops[o]);
				const TempId result = inst.result;
				const Value copy = emit(current, g, inst, result == kNoId ? none : body_.temps[result].type, true);
				if (result != kNoId)
					map_[result] = copy;
				if (pass == 0 && inst.op == Opcode::Index)
					address[result] = copy;
			}
			if (s.conditional != kNoId && b == s.header)
			{
				const auto test = body_.instructions[body_.blocks[b].last];
				const bool on_true = test.ops[1].index == s.conditional;
				const auto arm = append_block(body_, BlockKind::UnrolledGroup);
				merge = append_block(body_, BlockKind::UnrolledGroup);
				guarded_blocks.push_back(arm);
				guarded_blocks.push_back(merge);
				emit(current, g, branch(mapped(test.ops[0]), on_true ? arm : merge, on_true ? merge : arm), none);
				current = arm;
				g = kNoId;
			}
			else if (b == s.conditional)
			{
				emit(current, g, jump(merge), none);
				current = merge;
				g = kNoId;
			}
		}
		for (size_t k = 0; k < phis.size(); ++k)
			stepped[k] = mapped(phi_incoming(body_, body_.instructions[phis[k]], s.latch));
	}
	if (finish != kNoId)
	{
		emit(current, g, jump(finish), none);
		guarded_blocks.push_back(finish);
		current = finish;
		g = kNoId;
		stepped[0] = map_[s.next.index] = group_end;
	}
	const Value reached = as_word(current, g, mapped(s.next));
	const Value more = emit(current, g, compare(ComparePredicate::Ne, reached, stop), i64);
	emit(current, g, branch(more, group, s.bottom ? left : tail), none);
	for (size_t k = 0; k < phis.size(); ++k)
	{
		const Value pairs[4] = { Value::block(enter), phi_incoming(body_, body_.instructions[phis[k]], s.pre),
			Value::block(current), stepped[k] };
		body_.instructions[group_phis[k]].extra_first = append_operands(body_, pairs, 4);
		body_.instructions[group_phis[k]].extra_count = 4;
	}
	if (s.bottom)
		join_exit(s, left);
	// The loop's own preheader: each phi's value from the entry or the groups.
	InstId t = kNoId;
	rename_phi_incoming(body_, s.header, s.pre, tail);
	for (size_t k = 0; k < phis.size(); ++k)
	{
		const Type of = body_.instructions[phis[k]].type;
		const Value start = phi_incoming(body_, body_.instructions[phis[k]], tail);
		std::vector<Value> pairs = { Value::block(s.pre), start, Value::block(out), stepped[k] };
		if (guarded)
		{
			pairs.push_back(Value::block(sized));
			pairs.push_back(start);
		}
		const Value joined = emit(tail, t, make_instruction(Opcode::Phi, of), of);
		body_.instructions[t].extra_first = append_operands(body_, pairs.data(), static_cast<uint32_t>(pairs.size()));
		body_.instructions[t].extra_count = static_cast<uint32_t>(pairs.size());
		const Instruction& phi = body_.instructions[phis[k]];
		for (uint32_t o = 0; o < phi.extra_count; o += 2)
			if (body_.operands[phi.extra_first + o] == Value::block(tail))
				body_.operands[phi.extra_first + o + 1] = joined;
	}
	emit(tail, t, jump(s.header), none);
	std::vector<BlockId> layout;
	for (BlockId b : body_.layout)
	{
		layout.push_back(b);
		if (b != s.pre)
			continue;
		if (guarded)
			layout.push_back(sized);
		layout.push_back(enter);
		layout.push_back(group);
		layout.insert(layout.end(), guarded_blocks.begin(), guarded_blocks.end());
		if (s.bottom)
			layout.push_back(left);
		layout.push_back(tail);
	}
	body_.layout.swap(layout);
}

// A latch-tested loop is done when the groups reached the bound: `left`
// holds the latch's own test, of the last pass's values, and leaves to the
// exit as the latch does. The exit's phis take that edge's values; a value of
// the loop read after it otherwise is read through a phi the exit gets (the
// exit stands before every such reader: the loop leaves only to it).
void ShortLoopUnrolling::join_exit(const Shape& s, BlockId left)
{
	const Type none = Type::scalar(TypeKind::Void);
	InstId x = kNoId;
	Value on = mapped(s.truth);
	if (s.compare != kNoId)
	{
		Instruction test = body_.instructions[s.compare];
		for (unsigned k = 0; k < 2; ++k)
			test.ops[k] = mapped(test.ops[k]);
		on = emit(left, x, test, body_.temps[test.result].type);
	}
	Instruction leave = body_.instructions[body_.blocks[s.latch].last];
	const BlockId tail = body_.instructions[body_.blocks[s.pre].last].ops[2].index;
	leave.ops[0] = on;
	for (unsigned k = 1; k < 3; ++k)
		if (leave.ops[k].index == s.header)
			leave.ops[k] = Value::block(tail);
	emit(left, x, leave, none);
	for (InstId i = body_.blocks[s.exit].first; i != kNoId && body_.instructions[i].op == Opcode::Phi;
		i = body_.instructions[i].next)
	{
		const Instruction phi = body_.instructions[i];
		std::vector<Value> pairs(
			body_.operands.begin() + phi.extra_first, body_.operands.begin() + phi.extra_first + phi.extra_count);
		pairs.push_back(Value::block(left));
		pairs.push_back(mapped(phi_incoming(body_, phi, s.latch)));
		body_.instructions[i].extra_first = append_operands(body_, pairs.data(), static_cast<uint32_t>(pairs.size()));
		body_.instructions[i].extra_count = static_cast<uint32_t>(pairs.size());
	}
	// The values read after the loop, and a phi for each.
	std::vector<TempId> read;
	for (BlockId b : s.chain)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			if (body_.instructions[i].result != kNoId && escapes_[body_.instructions[i].result])
				read.push_back(body_.instructions[i].result);
	if (read.empty())
		return;
	std::vector<Value> through(body_.temps.size(), Value::none());
	std::vector<InstId> joins;
	for (TempId v : read)
	{
		const Type of = body_.temps[v].type;
		const InstId id = append_instruction(body_, make_instruction(Opcode::Phi, of));
		body_.instructions[id].result = append_temp(body_, of, id);
		body_.instructions[id].location = location_;
		through[v] = Value::temp(body_.instructions[id].result);
		joins.push_back(id);
	}
	auto outside = [&](BlockId b) { return b >= member_.size() || !member_[b]; };
	auto replaced = [&](Value& v) {
		if (v.is(ValueKind::Temp) && v.index < through.size() && !through[v.index].is(ValueKind::None))
			v = through[v.index];
	};
	for (BlockId b : body_.layout)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			Instruction& inst = body_.instructions[i];
			if (inst.op != Opcode::Phi)
			{
				if (!outside(b))
					continue;
				for (unsigned k = 0; k < 3; ++k)
					replaced(inst.ops[k]);
				for (uint32_t k = 0; k < inst.extra_count; ++k)
					replaced(body_.operands[inst.extra_first + k]);
				continue;
			}
			for (uint32_t k = 1; k < inst.extra_count; k += 2)
				if (outside(body_.operands[inst.extra_first + k - 1].index))
					replaced(body_.operands[inst.extra_first + k]);
		}
	// (The exit's other predecessors come from after it: the value is the
	// phi's own.)
	InstId after = kNoId;
	for (size_t k = 0; k < read.size(); ++k)
	{
		std::vector<Value> pairs;
		for (uint32_t p = cfg_.pred_first[s.exit]; p < cfg_.pred_first[s.exit + 1]; ++p)
		{
			pairs.push_back(Value::block(cfg_.preds[p]));
			pairs.push_back(cfg_.preds[p] == s.latch ? Value::temp(read[k]) : through[read[k]]);
		}
		pairs.push_back(Value::block(left));
		pairs.push_back(mapped(Value::temp(read[k])));
		body_.instructions[joins[k]].extra_first = append_operands(
			body_, pairs.data(), static_cast<uint32_t>(pairs.size()));
		body_.instructions[joins[k]].extra_count = static_cast<uint32_t>(pairs.size());
		insert_after(body_, s.exit, after, joins[k]);
		after = joins[k];
	}
}

// A counted short-circuit search can leave on either the latch or a match.
// Copy four full passes in order. A hit bypasses every later load, including
// the second load of a pass whose first predicate failed. The original loop
// handles the tail and any induction that might wrap.
bool ShortLoopUnrolling::search_shape(uint32_t at, Search& s) const
{
	const auto& loop = forest_.loops[at];
	if (target_model::is_wasm(c_.program.target) || loop.blocks.size() != 3 || loop.latches.size() != 1 ||
		!body_.code_labels.empty())
		return false;
	const auto h = loop.header, latch = loop.latches[0];
	if (h == latch || body_.blocks[h].kind == BlockKind::UnrolledGroup)
		return false;
	const auto hp = body_.blocks[h].first;
	const auto phi = body_.instructions[hp], hb = body_.instructions[body_.blocks[h].last];
	if (phi.op != Opcode::Phi || phi.extra_count != 4 || integer_bits(phi.type.kind()) != 32 ||
		hb.op != Opcode::Branch || hb.ops[2].index != latch)
		return false;
	const auto g = hb.ops[1].index;
	if (g == h || g == latch || !in_loop(forest_, at, g))
		return false;
	const auto gb = body_.instructions[body_.blocks[g].last];
	if (gb.op != Opcode::Branch)
		return false;
	const auto early = gb.ops[gb.ops[1].index == latch ? 2 : 1].index;
	if ((gb.ops[1].index != latch && gb.ops[2].index != latch) || in_loop(forest_, at, early) ||
		body_.instructions[body_.blocks[early].first].op == Opcode::Phi)
		return false;
	const auto step = body_.instructions[body_.blocks[latch].first];
	if (step.op != Opcode::Binary || step.sub != static_cast<unsigned>(BinaryOp::Add) || step.type != phi.type ||
		!(step.ops[0] == Value::temp(phi.result)) || !step.ops[1].is(ValueKind::Integer) ||
		body_.literals[step.ops[1].index].low != 1 || step.next == kNoId)
		return false;
	const auto cmp = body_.instructions[step.next], lb = body_.instructions[body_.blocks[latch].last];
	const auto pred = static_cast<ComparePredicate>(cmp.sub);
	if (cmp.op != Opcode::Compare || cmp.next != body_.blocks[latch].last || cmp.type != step.type ||
		!(cmp.ops[0] == Value::temp(step.result)) || in(at, cmp.ops[1]) || lb.op != Opcode::Branch ||
		!(lb.ops[0] == Value::temp(cmp.result)) || lb.ops[1].index != h ||
		!(phi_incoming(body_, phi, latch) == Value::temp(step.result)) ||
		(pred != ComparePredicate::Lt && pred != ComparePredicate::Le && pred != ComparePredicate::Ult &&
			pred != ComparePredicate::Ule))
		return false;
	// No edge introduced below may acquire a live-out value or bypass an effect.
	for (auto b : loop.blocks)
		if (forest_.innermost[b] != at || body_.blocks[b].kind == BlockKind::UnrolledGroup ||
			!search_body(b, hp, latch))
			return false;
	s = { h, latch, g, early, hp };
	return true;
}

bool ShortLoopUnrolling::search_body(BlockId b, InstId hp, BlockId latch) const
{
	unsigned loads = 0, size = 0;
	for (auto i = body_.blocks[b].first; i != body_.blocks[b].last; i = body_.instructions[i].next)
	{
		const auto& ins = body_.instructions[i];
		if (ins.result == kNoId || ins.result >= escapes_.size() || escapes_[ins.result])
			return false;
		if (b == latch || i == hp)
			continue;
		if (ins.op == Opcode::Load && !(ins.flags & IF_VOLATILE))
			++loads;
		else if (ins.op != Opcode::Index && ins.op != Opcode::Binary && ins.op != Opcode::Convert &&
			ins.op != Opcode::Copy && ins.op != Opcode::Compare && ins.op != Opcode::Addr)
			return false;
		if (ins.extra_count || ++size > 7)
			return false;
	}
	if (b != latch)
	{
		const auto test = body_.instructions[body_.blocks[b].last].ops[0];
		if (loads != 1 || !test.is(ValueKind::Temp) || body_.temps[test.index].def >= block_of_.size() ||
			block_of_[body_.temps[test.index].def] != b)
			return false;
	}
	return true;
}

void ShortLoopUnrolling::search_branch(BlockId b, InstId& id, Value v, BlockId yes, BlockId no)
{
	const auto none = Type::scalar(TypeKind::Void);
	auto branch = make_instruction(Opcode::Branch, none);
	branch.ops[0] = v;
	branch.ops[1] = Value::block(yes);
	branch.ops[2] = Value::block(no);
	emit(b, id, branch, none);
}

void ShortLoopUnrolling::copy_search_tests(const Search& s, BlockId scalar, const std::vector<BlockId>& blocks,
	const Instruction& step, const Instruction& hb, const Instruction& gb)
{
	const auto phi = body_.instructions[s.phi];
	std::vector<Value> names(body_.temps.size());
	auto add = [&](BlockId b, InstId& pos, unsigned delta) {
		auto plus = step;
		plus.ops[1] = integer_value(body_, integer_literal(delta));
		plus.flags = 0;
		return emit(b, pos, plus, phi.type);
	};
	for (unsigned k = 0; k < kSearchPasses; ++k)
	{
		auto pos = kNoId;
		names[phi.result] = k ? add(blocks[2 * k], pos, k) : Value::temp(phi.result);
		for (unsigned side = 0; side < 2; ++side)
		{
			const auto old = side ? s.guard : scalar, b = blocks[2 * k + side];
			for (auto i = body_.blocks[old].first; i != body_.blocks[old].last; i = body_.instructions[i].next)
			{
				auto original = body_.instructions[i];
				for (auto& v : original.ops)
					if (v.is(ValueKind::Temp) && v.index < names.size() && !names[v.index].is(ValueKind::None))
						v = names[v.index];
				names[original.result] = emit(b, pos, original, body_.temps[original.result].type, true);
			}
			const auto cond = side ? gb : hb;
			if (side)
				search_branch(b, pos, names[cond.ops[0].index],
					gb.ops[1].index == s.latch ? blocks[2 * k + 2] : s.early,
					gb.ops[2].index == s.latch ? blocks[2 * k + 2] : s.early);
			else
				search_branch(b, pos, names[cond.ops[0].index], blocks[2 * k + 1], blocks[2 * k + 2]);
			pos = kNoId;
		}
	}
}

void ShortLoopUnrolling::rewrite_search(const Search& s)
{
	const auto h = s.header, latch = s.latch, hp = s.phi;
	const auto phi = body_.instructions[hp], hb = body_.instructions[body_.blocks[h].last];
	const auto gb = body_.instructions[body_.blocks[s.guard].last];
	const auto step = body_.instructions[body_.blocks[latch].first];
	const auto cmp = body_.instructions[step.next];
	const auto pred = static_cast<ComparePredicate>(cmp.sub);
	const auto word = Type::scalar(TypeKind::I64), none = Type::scalar(TypeKind::Void);
	const auto convert = [&](Value value) {
		auto inst = make_instruction(Opcode::Convert, word);
		inst.sub = static_cast<uint8_t>(
			pred == ComparePredicate::Le || pred == ComparePredicate::Lt ? ConvertOp::SExt : ConvertOp::ZExt);
		inst.ops[0] = value;
		set_convert_source_type(inst, phi.type);
		return inst;
	};
	location_ = hb.location;
	const unsigned lanes = kSearchPasses;
	const auto first_pred = body_.operands[phi.extra_first].index;
	const auto pre = first_pred == latch ? body_.operands[phi.extra_first + 2].index : first_pred;
	auto before = previous_in_block(body_, pre, body_.blocks[pre].last);
	const auto bound = emit(pre, before, convert(cmp.ops[1]), word);
	auto sub = make_instruction(Opcode::Binary, word);
	sub.sub = static_cast<uint8_t>(BinaryOp::Sub);
	sub.ops[0] = bound;
	sub.ops[1] = integer_value(
		body_, integer_literal(lanes + (pred == ComparePredicate::Lt || pred == ComparePredicate::Ult)));
	const auto limit = emit(pre, before, sub, word);
	const auto scalar = append_block(body_, BlockKind::UnrolledGroup);
	body_.blocks[scalar].first = phi.next;
	body_.blocks[scalar].last = body_.blocks[h].last;
	body_.blocks[h].last = hp;
	body_.instructions[hp].next = kNoId;
	std::vector<BlockId> blocks;
	for (unsigned k = 0; k < 2 * lanes + 1; ++k)
		blocks.push_back(append_block(body_, BlockKind::UnrolledGroup));
	auto end = hp;
	const auto wide = emit(h, end, convert(Value::temp(phi.result)), word);
	auto check = make_instruction(Opcode::Compare, word);
	check.sub = static_cast<unsigned>(ComparePredicate::Le);
	check.ops[0] = wide;
	check.ops[1] = limit;
	const auto full = emit(h, end, check, word);
	search_branch(h, end, full, blocks[0], scalar);
	copy_search_tests(s, scalar, blocks, step, hb, gb);
	const auto back = blocks.back();
	auto k = kNoId;
	auto advance = step;
	advance.ops[1] = integer_value(body_, integer_literal(lanes));
	advance.flags = 0;
	const auto advanced = emit(back, k, advance, phi.type);
	auto jump = make_instruction(Opcode::Jump, none);
	jump.ops[0] = Value::block(h);
	emit(back, k, jump, none);
	std::vector<Value> incoming(body_.operands.begin() + phi.extra_first, body_.operands.begin() + phi.extra_first + 4);
	incoming.push_back(Value::block(back));
	incoming.push_back(advanced);
	body_.instructions[hp].extra_first = append_operands(body_, incoming.data(), incoming.size());
	body_.instructions[hp].extra_count = incoming.size();
	blocks.push_back(scalar);
	auto found = std::find(body_.layout.begin(), body_.layout.end(), h);
	body_.layout.insert(found + 1, blocks.begin(), blocks.end());
}

bool ShortLoopUnrolling::run()
{
	// (A loop to take is first given the preheader it lacks: the graph
	// changes, and the loops are found again.)
	bool changed = false;
	for (unsigned round = 0; round < 2; ++round)
	{
		c_.ensure_cfg();
		find_loops(body_, cfg_, forest_);
		if (forest_.loops.empty())
			return false;
		map_instruction_blocks(body_, block_of_);
		count_uses(body_, uses_);
		bool made = false;
		for (uint32_t loop = 0; round == 0 && loop < forest_.loops.size(); ++loop)
			made = (wanted(loop) && make_loop_preheader(body_, cfg_, forest_, loop)) || made;
		if (!made)
			break;
		changed = true;
		c_.invalidate_cfg();
		c_.invalidate_block_of();
		c_.invalidate_uses();
	}
	// Temporaries read outside the loop that defines them (a phi reads in
	// the block its value comes from).
	escapes_.assign(body_.temps.size(), 0);
	auto read = [&](Value v, BlockId at) {
		if (!v.is(ValueKind::Temp) || v.index < body_.parameter_count || body_.temps[v.index].def == kNoId)
			return;
		const uint32_t loop = forest_.innermost[block_of_[body_.temps[v.index].def]];
		if (loop != kNoId && !in_loop(forest_, loop, at))
			escapes_[v.index] = 1;
	};
	for (BlockId b : body_.layout)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			for (unsigned k = 0; k < 3; ++k)
				read(inst.ops[k], b);
			for (uint32_t k = 0; k < inst.extra_count; ++k)
				if (inst.op != Opcode::Phi)
					read(body_.operands[inst.extra_first + k], b);
				else if (k % 2 == 1)
					read(body_.operands[inst.extra_first + k], body_.operands[inst.extra_first + k - 1].index);
		}
	// (The loops as found: a rewrite adds blocks no other loop holds, and
	// changes its own loop's preheader, the header's phis and the exit's.)
	const size_t loops = forest_.loops.size();
	for (uint32_t loop = 0; loop < loops; ++loop)
	{
		Search search;
		if (search_shape(loop, search))
		{
			rewrite_search(search);
			changed = true;
			continue;
		}
		Shape s;
		if (!chain(loop, s) || !tested(loop, s) || !sized(s))
			continue;
		rewrite(s);
		changed = true;
	}
	if (!changed)
		return false;
	c_.invalidate_cfg();
	c_.invalidate_block_of();
	c_.invalidate_uses();
	return true;
}

// The operations a literal induction folds through.
const unsigned kFoldDepth = 6;

// The constant an instruction of constant operands computes.
bool fold_instruction(const Instruction& inst, const Constant& a, const Constant& b, Constant& out)
{
	switch (inst.op)
	{
	case Opcode::Compare:
		return fold_compare(static_cast<ComparePredicate>(inst.sub), inst.type, a, b, out);
	case Opcode::Binary:
		return fold_binary(static_cast<BinaryOp>(inst.sub), inst.type, a, b, out);
	case Opcode::Unary:
		return fold_unary(static_cast<UnaryOp>(inst.sub), inst.type, a, out);
	case Opcode::Convert:
		return fold_convert(static_cast<ConvertOp>(inst.sub), inst.type, convert_source_type(inst), a, out);
	default:
		return fold_copy(inst.type, a, out);
	}
}

// The constant `v` is where the induction `iv` is `at`: computed from
// literals and `iv` alone by the loop's own (`member`) instructions.
bool induction_constant(const FunctionContext& c, const std::vector<uint8_t>& member, TempId iv, const Constant& at,
	Value v, unsigned depth, Constant& out)
{
	const FunctionBody& body = c.body;
	if (literal_constant(body, v, out))
		return true;
	if (!v.is(ValueKind::Temp) || depth == 0)
		return false;
	if (v.index == iv)
	{
		out = at;
		return true;
	}
	const InstId def = v.index >= body.parameter_count ? body.temps[v.index].def : kNoId;
	if (def == kNoId || def >= c.block_of.size() || c.block_of[def] == kNoId || !member[c.block_of[def]])
		return false;
	const Instruction& inst = body.instructions[def];
	const bool unary = inst.op == Opcode::Unary || inst.op == Opcode::Convert || inst.op == Opcode::Copy;
	Constant a, b;
	return (unary || inst.op == Opcode::Compare || inst.op == Opcode::Binary) &&
		induction_constant(c, member, iv, at, inst.ops[0], depth - 1, a) &&
		(unary || induction_constant(c, member, iv, at, inst.ops[1], depth - 1, b)) &&
		fold_instruction(inst, a, b, out);
}

} // namespace

// Whether `v` is computed inside the loop (`member` blocks) from the
// induction `iv` and literals alone, within `depth` steps.
bool from_induction(const FunctionBody& body, const std::vector<BlockId>& block_of, const std::vector<uint8_t>& member,
	TempId iv, Value v, unsigned depth)
{
	if (v.is_literal())
		return true;
	if (!v.is(ValueKind::Temp) || depth == 0)
		return false;
	if (v.index == iv)
		return true;
	const InstId def = v.index >= body.parameter_count ? body.temps[v.index].def : kNoId;
	if (def == kNoId || def >= block_of.size() || block_of[def] == kNoId || !member[block_of[def]])
		return false;
	const Instruction& d = body.instructions[def];
	if (!(d.op == Opcode::Compare || d.op == Opcode::Binary || d.op == Opcode::Unary || d.op == Opcode::Convert ||
			d.op == Opcode::Copy))
		return false;
	for (const Value& o : d.ops)
		if (!o.is(ValueKind::None) && !from_induction(body, block_of, member, iv, o, depth - 1))
			return false;
	return true;
}

// What the copies of a counted loop keep (loops.h).
uint64_t unrolled_size(const FunctionContext& c, const Cfg& cfg, const Loop& l, const std::vector<uint8_t>& member,
	const std::vector<uint8_t>& owned, TempId iv, int64_t trips)
{
	const FunctionBody& body = c.body;
	const uint64_t unknown = ~static_cast<uint64_t>(0);
	const InstId def = iv != kNoId && iv >= body.parameter_count ? body.temps[iv].def : kNoId;
	if (def == kNoId || body.instructions[def].op != Opcode::Phi || body.instructions[def].extra_count != 4)
		return unknown;
	const Instruction& phi = body.instructions[def];
	Constant at;
	Value back = Value::none();
	for (uint32_t k = 0; k < 4; k += 2)
		if (body.operands[phi.extra_first + k].index == l.latches[0])
			back = body.operands[phi.extra_first + k + 1];
		else if (!literal_constant(body, body.operands[phi.extra_first + k + 1], at))
			return unknown;
	if (back.is(ValueKind::None))
		return unknown;
	uint64_t size = 0;
	std::vector<int64_t> seen(body.blocks.size(), -1);
	std::vector<BlockId> stack;
	for (int64_t pass = 0; pass <= trips; ++pass)
	{
		stack.assign(1, l.header);
		seen[l.header] = pass;
		while (!stack.empty())
		{
			const BlockId b = stack.back();
			stack.pop_back();
			Constant value;
			for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
			{
				const Instruction& inst = body.instructions[i];
				if (inst.op == Opcode::Phi || is_terminator(inst.op))
					continue;
				size += inst.result != kNoId && member[b] &&
						induction_constant(c, member, iv, at, Value::temp(inst.result), kFoldDepth, value)
					? 0
					: 1;
			}
			// The last copy is the header's test: it leaves.
			if (pass == trips)
				continue;
			const Instruction& term = body.instructions[body.blocks[b].last];
			const bool known = term.op == Opcode::Branch && member[b] &&
				induction_constant(c, member, iv, at, term.ops[0], kFoldDepth, value) &&
				value.kind == ValueKind::Integer;
			const BlockId taken = known ? term.ops[(value.bits.low | value.bits.high) != 0 ? 1 : 2].index : kNoId;
			for (uint32_t k = cfg.succ_first[b]; k < cfg.succ_first[b + 1]; ++k)
			{
				const BlockId t = cfg.succs[k];
				if ((known && t != taken) || t == l.header || !(member[t] || owned[t]) || seen[t] == pass)
					continue;
				seen[t] = pass;
				stack.push_back(t);
			}
		}
		Constant next;
		if (pass == trips)
			break;
		if (!induction_constant(c, member, iv, at, back, kFoldDepth, next))
			return unknown;
		at = next;
	}
	return size;
}

// An indexed load through a row pointer benefits from independent copies
// of the address chain, even when the trip count exceeds the usual budget.
static bool indirect_word_load(const FunctionBody& body, const Instruction& inst)
{
	if (inst.op != Opcode::Load || inst.type.kind() != TypeKind::I32 || !inst.ops[0].is(ValueKind::Temp))
		return false;
	const auto address = body.temps[inst.ops[0].index].def;
	if (address == kNoId || body.instructions[address].op != Opcode::Index)
		return false;
	const auto base = body.instructions[address].ops[0];
	if (!base.is(ValueKind::Temp))
		return false;
	const auto entry = body.temps[base.index].def;
	return entry != kNoId && body.instructions[entry].op == Opcode::Load;
}

bool indexes_local_array(const FunctionBody& body, const Loop& loop, TempId iv)
{
	for (BlockId b : loop.blocks)
		for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
		{
			const Instruction& inst = body.instructions[i];
			if (inst.op != Opcode::Index || !(inst.ops[1] == Value::temp(iv)) || !inst.ops[0].is(ValueKind::Temp))
				continue;
			const InstId def = body.temps[inst.ops[0].index].def;
			if (def != kNoId && body.instructions[def].op == Opcode::Addr &&
				body.instructions[def].ops[0].is(ValueKind::Slot))
				return true;
		}
	return false;
}

// Leave short loops with floating-point array work available for vectorization.
// The vectorizer still checks dependences before it widens their accesses.
bool has_contiguous_float_work(const FunctionBody& body, const Loop& loop)
{
	if (loop.blocks.size() > 3)
		return false;
	unsigned loads = 0, stores = 0, arithmetic = 0, size = 0;
	for (BlockId block : loop.blocks)
		for (InstId id = body.blocks[block].first; id != kNoId; id = body.instructions[id].next)
		{
			const Instruction& inst = body.instructions[id];
			if (++size > 80 || inst.op == Opcode::Call)
				return false;
			if (inst.type.kind() != TypeKind::F64)
				continue;
			arithmetic += inst.op == Opcode::Binary;
			const bool store = inst.op == Opcode::Store;
			if ((!store && inst.op != Opcode::Load) || (inst.flags & IF_VOLATILE))
				continue;
			const Value address = inst.ops[store ? 1 : 0];
			if (!address.is(ValueKind::Temp) || body.temps[address.index].def == kNoId)
				continue;
			const auto& index = body.instructions[body.temps[address.index].def];
			if (index.op != Opcode::Index || storage_bytes(index.type) != 8 || !index.ops[1].is(ValueKind::Temp))
				continue;
			loads += !store;
			stores += store;
		}
	return loads >= 2 && stores >= 2 && arithmetic >= 3;
}

bool loop_uses_vectors(const FunctionBody& body, const Loop& loop)
{
	for (BlockId block : loop.blocks)
		for (InstId id = body.blocks[block].first; id != kNoId; id = body.instructions[id].next)
			if (body.instructions[id].op == Opcode::Vector && body.instructions[id].type.kind() == TypeKind::V128)
				return true;
	return false;
}

bool indirect_word_reduction(const FunctionBody& body, const Loop& loop)
{
	bool multiply = false, indirect_load = false;
	for (BlockId b : loop.blocks)
		for (InstId id = body.blocks[b].first; id != kNoId; id = body.instructions[id].next)
		{
			const auto& inst = body.instructions[id];
			if ((inst.flags & IF_VOLATILE) || inst.op == Opcode::Store || inst.op == Opcode::CopyObject ||
				inst.op == Opcode::ZeroInit)
				return false;
			multiply |= inst.op == Opcode::Binary && inst.type.kind() == TypeKind::I32 &&
				static_cast<BinaryOp>(inst.sub) == BinaryOp::Mul;
			indirect_load |= indirect_word_load(body, inst);
		}
	return multiply && indirect_load;
}

bool unroll_short_loops(FunctionContext& context)
{
	return ShortLoopUnrolling(context).run();
}

namespace {

// The operations pass_constant reads through, and the instructions the
// header of a loop of one pass may hold beside its phis and its test.
const unsigned kPassDepth = 8;
const unsigned kFinalInstructions = 8;

// The constant `v` is on pass `pass` of the loop (0: the first, 1: the
// second), from literals and the header's phis alone: a phi is its entering
// literal on the first pass and its latch value of the first pass on the
// second.
bool pass_constant(const FunctionContext& c, const LoopForest& forest, uint32_t loop, Value v, unsigned pass,
	unsigned depth, Constant& out)
{
	const FunctionBody& body = c.body;
	if (literal_constant(body, v, out))
		return true;
	if (!v.is(ValueKind::Temp) || v.index < body.parameter_count || depth == 0)
		return false;
	const InstId def = body.temps[v.index].def;
	if (def == kNoId || def >= c.block_of.size() || c.block_of[def] == kNoId || !in_loop(forest, loop, c.block_of[def]))
		return false;
	const Loop& l = forest.loops[loop];
	const Instruction& inst = body.instructions[def];
	if (inst.op == Opcode::Phi)
	{
		if (c.block_of[def] != l.header || inst.extra_count != 4)
			return false;
		const Value input = phi_incoming(body, inst, l.latches[0]);
		for (uint32_t k = 0; k < 4 && pass == 0; k += 2)
			if (body.operands[inst.extra_first + k].index != l.latches[0])
				return literal_constant(body, body.operands[inst.extra_first + k + 1], out);
		return pass == 1 && !input.is(ValueKind::None) && pass_constant(c, forest, loop, input, 0, depth - 1, out);
	}
	Constant a, b;
	const bool unary = inst.op == Opcode::Unary || inst.op == Opcode::Convert || inst.op == Opcode::Copy;
	if (!(unary || inst.op == Opcode::Compare || inst.op == Opcode::Binary) ||
		!pass_constant(c, forest, loop, inst.ops[0], pass, depth - 1, a) ||
		(!unary && !pass_constant(c, forest, loop, inst.ops[1], pass, depth - 1, b)))
		return false;
	return fold_instruction(inst, a, b, out);
}

// Whether the header's test of the loop continues (`stay`) on `pass`; false
// when the test is no constant there.
bool pass_stays(const FunctionContext& c, const LoopForest& forest, uint32_t loop, unsigned pass, bool& stay)
{
	const Instruction& test = c.body.instructions[c.body.blocks[forest.loops[loop].header].last];
	Constant value;
	if (!pass_constant(c, forest, loop, test.ops[0], pass, kPassDepth, value) || value.kind != ValueKind::Integer)
		return false;
	stay = ((value.bits.low | value.bits.high) != 0) == in_loop(forest, loop, test.ops[1].index);
	return true;
}

} // namespace

// A loop of one pass is no loop: its header's test, of literals and the
// header's phis alone, continues with the entering values and leaves with
// the values the latch gives (`for (i = 0; i < 1; ++i)`, a loop over a
// parameter pack of one). The body's blocks stay as they are, with any
// exits. The header runs with the entering values and falls into the body;
// the latch jumps to a new block that holds the header's instructions once
// more, reading the latch values, and leaves. A reader of a header value
// after the loop reads that block's. It is found by the exit block, the
// header's alone, dominating it; a reader the exit only reaches (it joins a
// path that left the body) has no one value, and the loop stays.
bool straighten_single_pass_loop(FunctionContext& c, const LoopForest& forest, uint32_t loop)
{
	FunctionBody& body = c.body;
	const Cfg& cfg = c.cfg;
	const Loop& l = forest.loops[loop];
	const BlockId header = l.header;
	const InstId test = body.blocks[header].last;
	if (l.latches.size() != 1 || l.latches[0] == header || cfg.pred_count(header) != 2 ||
		(cfg.flags[header] & (BF_HANDLER | BF_EH)) != 0 || body.instructions[test].op != Opcode::Branch)
		return false;
	const BlockId latch = l.latches[0];
	const bool first_stays = in_loop(forest, loop, body.instructions[test].ops[1].index);
	bool stay = false;
	if (first_stays == in_loop(forest, loop, body.instructions[test].ops[2].index) ||
		!pass_stays(c, forest, loop, 0, stay) || !stay || !pass_stays(c, forest, loop, 1, stay) || stay)
		return false;
	const BlockId inside = body.instructions[test].ops[first_stays ? 1 : 2].index;
	const BlockId exit = body.instructions[test].ops[first_stays ? 2 : 1].index;
	// The header's values: a phi's on the second pass is its latch input.
	std::vector<Value> final_value(body.temps.size(), Value::none());
	unsigned count = 0;
	for (InstId i = body.blocks[header].first; i != test; i = body.instructions[i].next)
	{
		const Instruction& inst = body.instructions[i];
		if (inst.op == Opcode::Phi)
			final_value[inst.result] = phi_incoming(body, inst, latch);
		// (The copy reads other values in its fixed operands only.)
		else if (++count > kFinalInstructions || inst.result == kNoId || !is_pure(inst) || inst.extra_count != 0)
			return false;
		else
			final_value[inst.result] = Value::temp(inst.result); // (its copy, once made)
	}
	// The blocks the exit reaches, for a reader it does not dominate.
	const bool alone = cfg.pred_count(exit) == 1;
	std::vector<uint8_t> reached(body.blocks.size(), 0);
	std::vector<BlockId> work(1, exit);
	reached[exit] = 1;
	while (!work.empty())
	{
		const BlockId b = work.back();
		work.pop_back();
		for (uint32_t k = cfg.succ_first[b]; k < cfg.succ_first[b + 1]; ++k)
			if (!reached[cfg.succs[k]])
			{
				reached[cfg.succs[k]] = 1;
				work.push_back(cfg.succs[k]);
			}
	}
	// Readers outside the loop: 1 reads the final value, 0 the first pass's,
	// 2 has no one value. `at` is the reader's block, or the predecessor a
	// phi reads over.
	auto reads = [&](BlockId at) -> unsigned {
		if (at == header || (alone && cfg.reachable(at) && cfg.dominates(exit, at)))
			return 1;
		return in_loop(forest, loop, at) || !reached[at] ? 0 : 2;
	};
	auto visit = [&](bool apply) {
		for (BlockId b : body.layout)
			for (InstId i = in_loop(forest, loop, b) ? kNoId : body.blocks[b].first; i != kNoId;
				i = body.instructions[i].next)
			{
				Instruction& inst = body.instructions[i];
				bool mixed = false;
				for (uint32_t k = 1; k < inst.extra_count && inst.op == Opcode::Phi; k += 2)
				{
					Value& v = body.operands[inst.extra_first + k];
					if (!v.is(ValueKind::Temp) || final_value[v.index].is(ValueKind::None))
						continue;
					const unsigned kind = reads(body.operands[inst.extra_first + k - 1].index);
					mixed = mixed || kind == 2;
					if (apply && kind == 1)
						v = final_value[v.index];
				}
				if (inst.op != Opcode::Phi)
					for_each_operand(body, inst, [&](Value& v) {
						if (!v.is(ValueKind::Temp) || final_value[v.index].is(ValueKind::None))
							return;
						mixed = mixed || reads(b) == 2;
						if (apply && reads(b) == 1)
							v = final_value[v.index];
					});
				if (mixed)
					return false;
			}
		return true;
	};
	if (!visit(false))
		return false;
	// The header's second run: its instructions once more, after the latch.
	const BlockId final_block = append_block(body, BlockKind::Plain);
	for (InstId i = body.blocks[header].first; i != test; i = body.instructions[i].next)
	{
		Instruction inst = body.instructions[i];
		if (inst.op == Opcode::Phi)
			continue;
		for (Value& v : inst.ops)
			if (v.is(ValueKind::Temp) && !final_value[v.index].is(ValueKind::None))
				v = final_value[v.index];
		const TempId result = inst.result;
		const InstId id = append_copy(body, body, i, inst);
		const TempId fresh = append_temp(body, body.temps[result].type, id);
		body.instructions[id].result = fresh;
		final_value.resize(body.temps.size(), Value::none());
		final_value[result] = Value::temp(fresh);
		insert_after(body, final_block, body.blocks[final_block].last, id);
	}
	Instruction leave = make_instruction(Opcode::Jump, Type::scalar(TypeKind::Void));
	leave.ops[0] = Value::block(exit);
	insert_after(body, final_block, body.blocks[final_block].last, append_instruction(body, leave));
	visit(true);
	rename_phi_incoming(body, exit, header, final_block);
	for_each_successor(body, body.instructions[body.blocks[latch].last], [&](BlockId& s) {
		if (s == header)
			s = final_block;
	});
	remove_phi_incoming(body, header, latch);
	Instruction& branch = body.instructions[test];
	branch.op = Opcode::Jump;
	branch.sub = 0;
	branch.flags = 0;
	branch.type = Type::scalar(TypeKind::Void);
	branch.ops[0] = Value::block(inside);
	branch.ops[1] = branch.ops[2] = Value::none();
	for (size_t k = 0; k < body.layout.size(); ++k)
		if (body.layout[k] == latch)
		{
			body.layout.insert(body.layout.begin() + static_cast<std::ptrdiff_t>(k) + 1, final_block);
			break;
		}
	// The header has one entry left: each of its phis is the value that
	// enters (a pass that copies the block reads no phi of one entry).
	for (InstId i = body.blocks[header].first; i != kNoId && body.instructions[i].op == Opcode::Phi;)
	{
		const InstId next = body.instructions[i].next;
		const TempId result = body.instructions[i].result;
		const Value entering = body.operands[body.instructions[i].extra_first + 1];
		unlink_after(body, header, kNoId, i);
		replace_all_uses(body, result, entering);
		i = next;
	}
	return true;
}

namespace {

// Widen both operands before testing the last full-pass counter. This
// check is valid even when the start is near the signed 32-bit limit.
void dispatch_unroll(FunctionBody& body, const Loop& l, const CountedUnrollGuard& guard, int64_t trips, BlockId fast)
{
	const InstId end = body.blocks[l.preheader].last;
	const auto location = body.instructions[end].location;
	InstId prev = previous_in_block(body, l.preheader, end);
	const Type i32 = Type::scalar(TypeKind::I32), i64 = Type::scalar(TypeKind::I64);
	const auto emit = [&](Instruction inst, Type type) {
		inst.location = location;
		const InstId id = append_instruction(body, inst);
		const TempId result = append_temp(body, type, id);
		body.instructions[id].result = result;
		insert_after(body, l.preheader, prev, id);
		prev = id;
		return Value::temp(result);
	};
	const auto extend = [&](Value v) {
		auto inst = make_instruction(Opcode::Convert, i64);
		inst.sub = static_cast<uint8_t>(ConvertOp::SExt);
		set_convert_source_type(inst, i32);
		inst.ops[0] = v;
		return emit(inst, i64);
	};
	auto add = make_instruction(Opcode::Binary, i64);
	add.sub = static_cast<uint8_t>(BinaryOp::Add);
	add.ops[0] = extend(guard.start);
	add.ops[1] = integer_value(body, integer_literal(trips - 1));
	auto cmp = make_instruction(Opcode::Compare, i64);
	cmp.sub = static_cast<uint8_t>(ComparePredicate::Lt);
	cmp.ops[0] = emit(add, i64);
	cmp.ops[1] = extend(guard.bound);
	const Value full = emit(cmp, i64);
	auto dispatch = make_instruction(Opcode::Branch, Type::scalar(TypeKind::Void));
	dispatch.location = location;
	dispatch.ops[0] = full;
	dispatch.ops[1] = Value::block(fast);
	dispatch.ops[2] = Value::block(l.header);
	body.instructions[end] = dispatch;

	// On the slow path fewer than `trips` values are below the bound.
	// The unit-step counter reaches the secondary exit before the counted
	// test could fail, without wrapping.
	const InstId header_end = body.blocks[l.header].last;
	auto jump = make_instruction(Opcode::Jump, Type::scalar(TypeKind::Void));
	jump.location = body.instructions[header_end].location;
	jump.ops[0] = Value::block(guard.block);
	body.instructions[header_end] = jump;
	remove_phi_incoming(body, guard.exit, l.header);
}

} // namespace

void clone_counted_loop(FunctionContext& context, const Loop& l, int64_t trips, const std::vector<uint8_t>& member,
	const std::vector<uint8_t>& owned, const CountedUnrollGuard& guard)
{
	FunctionBody& body = context.body;
	const Cfg& cfg = context.cfg;
	const bool versioned = guard.block != kNoId;
	// The copies: blocks and temporaries per pass, in reverse postorder
	// (a value's definition is copied before its uses: only the header
	// is entered by a back edge).
	std::vector<BlockId> order;
	for (BlockId b : cfg.rpo)
		if (member[b] || owned[b])
			order.push_back(b);
	std::vector<std::vector<BlockId>> blocks(static_cast<size_t>(trips) + 1);
	std::vector<Value> map(body.temps.size(), Value::none());
	std::vector<std::pair<TempId, Value>> phis; // header phi, latch input
	for (InstId i = body.blocks[l.header].first; i != kNoId && body.instructions[i].op == Opcode::Phi;
		i = body.instructions[i].next)
	{
		const Instruction& phi = body.instructions[i];
		Value init = Value::none(), back = Value::none();
		for (uint32_t k = 0; k < phi.extra_count; k += 2)
			(body.operands[phi.extra_first + k].index == l.latches[0] ? back
																	  : init) = body.operands[phi.extra_first + k + 1];
		map[phi.result] = init;
		phis.push_back(std::make_pair(phi.result, back));
	}
	auto mapped = [&](Value v) {
		return v.is(ValueKind::Temp) && v.index < map.size() && !map[v.index].is(ValueKind::None) ? map[v.index] : v;
	};
	std::vector<BlockId> copied; // in layout order: pass by pass
	for (int64_t pass = 0; pass <= trips; ++pass)
	{
		std::vector<BlockId>& mine = blocks[static_cast<size_t>(pass)];
		mine.assign(body.blocks.size(), kNoId);
		// The last pass is the header's final test, and the private exits
		// it may leave to.
		for (BlockId b : body.layout)
			if ((member[b] || owned[b]) && (pass < trips || b == l.header || owned[b]))
			{
				mine[b] = append_block(
					body, body.blocks[b].kind != BlockKind::Plain ? body.blocks[b].kind : BlockKind::Unrolled);
				copied.push_back(mine[b]);
			}
	}
	const BlockId dead = append_block(body, BlockKind::Dead);
	insert_after(body, dead, kNoId,
		append_instruction(body, make_instruction(Opcode::Unreachable, Type::scalar(TypeKind::Void))));
	copied.push_back(dead);
	// Exit phis' new pairs, per outside block (the loop's own pairs go).
	std::vector<std::vector<Value>> exit_pairs(body.blocks.size());
	std::vector<BlockId> exit_blocks;
	std::vector<InstId> late; // a pass's copied phis
	for (int64_t pass = 0; pass <= trips; ++pass)
	{
		const std::vector<BlockId>& mine = blocks[static_cast<size_t>(pass)];
		auto target = [&](BlockId t) {
			if (t == l.header)
				return pass < trips ? blocks[static_cast<size_t>(pass) + 1][l.header] : dead;
			if (member[t] || owned[t])
				return mine[t] != kNoId ? mine[t] : dead;
			return t;
		};
		late.clear();
		for (BlockId b : order)
		{
			if (mine[b] == kNoId)
				continue;
			for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
			{
				Instruction inst = body.instructions[i];
				if (inst.op == Opcode::Phi && b == l.header)
					continue; // the header's phis read the previous pass (map)
				if (versioned && b == guard.block && inst.op == Opcode::Branch)
					inst.ops[0] = integer_value(body, integer_literal(1));
				const bool phi = inst.op == Opcode::Phi;
				for (Value& v : inst.ops)
					v = v.is(ValueKind::Block) ? Value::block(target(v.index)) : mapped(v);
				std::vector<Value> extra;
				for (uint32_t k = 0; k < inst.extra_count; ++k)
				{
					const Value v = body.operands[inst.extra_first + k];
					// A phi's predecessors are copies of this pass.
					extra.push_back(v.is(ValueKind::Block) ? Value::block(phi ? mine[v.index] : target(v.index))
							: phi                          ? v
														   : mapped(v));
				}
				inst.extra_first = inst.extra_count != 0 ? append_operands(body, extra.data(), inst.extra_count) : 0;
				const TempId old_result = inst.result;
				const InstId id = append_copy(body, body, i, inst);
				if (phi)
					late.push_back(id);
				if (old_result != kNoId)
				{
					const TempId fresh = append_temp(body, body.temps[old_result].type, id);
					body.instructions[id].result = fresh;
					map.resize(body.temps.size(), Value::none());
					map[old_result] = Value::temp(fresh);
				}
				insert_after(body, mine[b], body.blocks[mine[b]].last, id);
			}
			if (!member[b])
				continue;
			// Edges leaving the loop: the target's phis take this copy.
			// A switch may name one exit several times. Its phi has one
			// input per predecessor block, so use the CFG's unique edges.
			for (uint32_t edge = cfg.succ_first[b]; edge < cfg.succ_first[b + 1]; ++edge)
			{
				const BlockId t = cfg.succs[edge];
				if (member[t] || owned[t])
					continue;
				for (InstId i = body.blocks[t].first; i != kNoId && body.instructions[i].op == Opcode::Phi;
					i = body.instructions[i].next)
				{
					if (exit_pairs[t].empty())
						exit_blocks.push_back(t);
					exit_pairs[t].push_back(Value::make(ValueKind::Integer, i)); // marks the phi (by instruction)
					exit_pairs[t].push_back(Value::block(mine[b]));
					exit_pairs[t].push_back(mapped(phi_incoming(body, body.instructions[i], b)));
				}
			}
		}
		// A phi's inputs are this pass's values, read once every block of
		// the pass is copied: a cycle the header is not on (two entries, so
		// no loop of the forest) brings a phi a value of a later block.
		for (InstId id : late)
		{
			const Instruction& phi = body.instructions[id];
			for (uint32_t k = 1; k < phi.extra_count; k += 2)
				body.operands[phi.extra_first + k] = mapped(body.operands[phi.extra_first + k]);
		}
		// The next pass's header phis read this pass's latch values.
		std::vector<Value> next;
		for (const std::pair<TempId, Value>& p : phis)
			next.push_back(mapped(p.second));
		if (pass < trips)
			for (size_t k = 0; k < phis.size(); ++k)
				map[phis[k].first] = next[k];
	}
	// Exit phis: the loop's pairs replaced by the copies'.
	for (const BlockId t : exit_blocks)
	{
		const std::vector<Value>& add = exit_pairs[t];
		for (InstId i = body.blocks[t].first; i != kNoId && body.instructions[i].op == Opcode::Phi;
			i = body.instructions[i].next)
		{
			Instruction& phi = body.instructions[i];
			std::vector<Value> pairs;
			for (uint32_t k = 0; k < phi.extra_count; k += 2)
				if (versioned || !member[body.operands[phi.extra_first + k].index])
				{
					pairs.push_back(body.operands[phi.extra_first + k]);
					pairs.push_back(body.operands[phi.extra_first + k + 1]);
				}
			for (size_t k = 0; k + 2 < add.size() + 1; k += 3)
				if (add[k].index == i)
				{
					pairs.push_back(add[k + 1]);
					pairs.push_back(add[k + 2]);
				}
			phi.extra_first = append_operands(body, pairs.data(), static_cast<uint32_t>(pairs.size()));
			phi.extra_count = static_cast<uint32_t>(pairs.size());
		}
	}
	// Entry, and the layout: the copies where the loop was.
	if (versioned)
		dispatch_unroll(body, l, guard, trips, blocks[0][l.header]);
	else
		for_each_successor(body, body.instructions[body.blocks[l.preheader].last], [&](BlockId& t) {
			if (t == l.header)
				t = blocks[0][l.header];
		});
	std::vector<BlockId> layout;
	for (BlockId b : body.layout)
	{
		if (b == l.header)
			layout.insert(layout.end(), copied.begin(), copied.end());
		if (versioned || (!member[b] && !owned[b]))
			layout.push_back(b);
	}
	body.layout.swap(layout);
	++context.stats.loops_unrolled;
}

} // namespace opt
