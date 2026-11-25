#include <cstring>

#include "lowir/builder.h"
#include "opt/passes.h"
#include "opt/scalar_fold.h"

namespace opt {

using namespace lowir;

namespace {

// `sin(x)` and `cos(x)` of one value share their work: `sincos` gives both for
// about the price of one. The first call becomes `sincos`, and the calls it
// dominates read what that wrote; when the first stands after its block's
// first handler exit, only those off a handler's path (function_ir.h).
// The calls must also agree on the last operation that could change errno.
const InstId kEntryMathEffects = kNoId - 2;
const InstId kJoinedMathEffects = kNoId - 1;

class SinCos
{
public:
	explicit SinCos(FunctionContext& context) : c_(context), body_(context.body) {}

	bool run();

private:
	struct Call
	{
		InstId id;
		BlockId block;
		Value x;
		MathFunction function;
		InstId last_write;
		bool done;
	};

	bool collect_calls();
	void find_last_writes(const Cfg& cfg);
	std::vector<InstId> incoming_writes(const Cfg& cfg, const std::vector<InstId>& last) const;
	SymbolId sincos_symbol(TypeKind kind);
	void combine(size_t first, const std::vector<size_t>& later, Value sine, Value cosine);
	Value emit(BlockId block, InstId& at, Instruction inst, Type type, uint32_t location);

	FunctionContext& c_;
	FunctionBody& body_;
	std::vector<Call> calls_;
};

// `sincos` or `sincosf`, declared on first use (kNoId when the unit gives that
// name to something else).
SymbolId SinCos::sincos_symbol(TypeKind kind)
{
	Program& program = c_.program;
	const char* name = kind == TypeKind::F64 ? "sincos" : "sincosf";
	const NameId id = program.names.intern(name, static_cast<uint32_t>(std::strlen(name)));
	const SymbolId symbol = program.symbol_for(id);
	const Symbol& known = program.symbols[symbol];
	if (known.kind != SymbolKind::Unresolved)
		return known.kind == SymbolKind::FunctionDeclaration && known.metadata.linkage == ir_model::LLM_C ? symbol
																										  : kNoId;
	Signature sig;
	sig.first_parameter = static_cast<uint32_t>(program.parameters.size());
	sig.parameter_count = 3;
	sig.result = Type::scalar(TypeKind::Void);
	sig.boundary.unwind = ir_model::CUM_NO;
	const Type types[3] = { Type::scalar(kind), body_.pointer_type(), body_.pointer_type() };
	for (const Type& type : types)
	{
		Parameter p = Parameter();
		p.name = 0;
		p.type = type;
		p.pass = ir_model::PPM_DIRECT;
		p.object_bytes = 0;
		program.parameters.push_back(p);
	}
	program.declare_function(symbol, SymbolKind::FunctionDeclaration, program.add_signature(sig));
	SymbolMetadata& m = program.symbols[symbol].metadata;
	m.binding = ir_model::SBM_STRONG;
	m.linkage = ir_model::LLM_C;
	m.object = id;
	return symbol;
}

Value SinCos::emit(BlockId block, InstId& at, Instruction inst, Type type, uint32_t location)
{
	inst.location = location;
	const InstId id = append_instruction(body_, inst);
	if (!type.is_void())
		body_.instructions[id].result = append_temp(body_, type, id);
	insert_after(body_, block, at, id);
	at = id;
	return type.is_void() ? Value::none() : Value::temp(body_.instructions[id].result);
}

bool SinCos::collect_calls()
{
	bool sine = false;
	bool cosine = false;
	for (BlockId b : body_.layout)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			if (inst.op != Opcode::Call || (inst.flags & IF_SIGNATURE) != 0 || !inst.ops[0].is(ValueKind::Symbol) ||
				inst.extra_count != 1 || inst.result == kNoId)
				continue;
			const MathFunction function = c_.program.math_function(inst.ops[0].index);
			if ((function != MathFunction::Sin && function != MathFunction::Cos) ||
				(inst.type.kind() != TypeKind::F32 && inst.type.kind() != TypeKind::F64))
				continue;
			const Value x = body_.operands[inst.extra_first];
			if (x.is(ValueKind::Temp) && body_.temps[x.index].type == inst.type)
			{
				sine |= function == MathFunction::Sin;
				cosine |= function == MathFunction::Cos;
				calls_.push_back(Call{ i, b, x, function, kNoId, false });
			}
		}
	return sine && cosine;
}

// Keep a definite last write only when all reachable predecessors agree.
// Each block learns at most one definite write before becoming ambiguous.
std::vector<InstId> SinCos::incoming_writes(const Cfg& cfg, const std::vector<InstId>& last) const
{
	std::vector<InstId> incoming(cfg.block_count, kNoId);
	std::vector<BlockId> work;
	auto meet = [&](BlockId block, InstId write) {
		InstId& state = incoming[block];
		if (state == write || state == kJoinedMathEffects)
			return;
		state = state == kNoId ? write : kJoinedMathEffects;
		work.push_back(block);
	};
	meet(cfg.rpo.front(), kEntryMathEffects);
	for (BlockId block : cfg.rpo)
		for (uint32_t i = cfg.handler_first[block]; i < cfg.handler_first[block + 1]; ++i)
			meet(cfg.handlers[i], kJoinedMathEffects);
	for (size_t i = 0; i < work.size(); ++i)
	{
		const BlockId block = work[i];
		const InstId write = last[block] == kNoId ? incoming[block] : last[block];
		for (uint32_t p = cfg.succ_first[block]; p < cfg.succ_first[block + 1]; ++p)
			meet(cfg.succs[p], write);
	}
	return incoming;
}

void SinCos::find_last_writes(const Cfg& cfg)
{
	std::vector<InstId> last(cfg.block_count, kNoId);
	bool written = false;
	size_t call = 0;
	for (BlockId block : body_.layout)
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
		{
			if (call < calls_.size() && i == calls_[call].id)
			{
				// Other ordinary sin/cos calls can only repeat the same
				// domain error. This includes the fused calls we emit.
				calls_[call++].last_write = last[block];
				continue;
			}
			const Instruction& inst = body_.instructions[i];
			// An ordinary typed write to another kind of object cannot
			// change errno. Untyped writes include character accesses.
			if (inst.op == Opcode::Store && (inst.flags & (IF_TYPED | IF_VOLATILE)) == IF_TYPED &&
				typed_types_apart(inst.type, Type::scalar(TypeKind::I32)))
				continue;
			if ((inst.op == Opcode::Call && (inst.flags & IF_SIGNATURE)) || may_write_memory(c_.program, inst))
			{
				last[block] = i;
				written = true;
			}
		}
	if (!written)
		return;
	const std::vector<InstId> incoming = incoming_writes(cfg, last);
	for (Call& call_site : calls_)
		if (call_site.last_write == kNoId)
			call_site.last_write = incoming[call_site.block];
}

bool SinCos::run()
{
	if (!collect_calls())
		return false;
	const Cfg& cfg = c_.ensure_cfg();
	find_last_writes(cfg);
	bool changed = false;
	std::vector<size_t> later;
	std::vector<uint8_t> reached;
	for (size_t first = 0; first < calls_.size(); ++first)
	{
		if (calls_[first].done)
			continue;
		later.clear();
		bool other = false;
		const Call& head = calls_[first];
		if (!cfg.reachable(head.block))
			continue;
		const Type type = body_.instructions[head.id].type;
		// (Whether the first call stands after its block's first handler exit.)
		bool exited = false;
		const InstId exit = first_handler_exit(c_.program, body_, cfg, head.block);
		for (InstId i = exit; i != kNoId && !exited; i = body_.instructions[i].next)
			exited = i == head.id;
		if (exited && reached.empty())
			find_handler_reached(cfg, reached);
		for (size_t k = first + 1; k < calls_.size(); ++k)
		{
			const Call& call = calls_[k];
			if (call.done || !(call.x == head.x) || !(body_.instructions[call.id].type == type) ||
				call.last_write != head.last_write || !cfg.reachable(call.block) ||
				!cfg.dominates(head.block, call.block) ||
				(call.block != head.block &&
					(head.last_write == kJoinedMathEffects || (exited && reached[call.block] != 0))))
				continue;
			later.push_back(k);
			other = other || call.function != head.function;
		}
		if (!other)
			continue;
		const SymbolId symbol = sincos_symbol(type.kind());
		if (symbol == kNoId)
			return changed;
		const Type pointer = body_.pointer_type();
		const uint32_t slot = static_cast<uint32_t>(body_.slots.size());
		body_.slots.push_back(Slot{ 0, SlotKind::Aggregate, 0, 0, type });
		body_.slots.push_back(Slot{ 0, SlotKind::Aggregate, 0, 0, type });
		const uint32_t location = body_.instructions[head.id].location;
		InstId at = previous_in_block(body_, head.block, head.id);
		Instruction addr = make_instruction(Opcode::Addr, pointer);
		addr.ops[0] = Value::slot(slot);
		const Value sine_at = emit(head.block, at, addr, pointer, location);
		addr.ops[0] = Value::slot(slot + 1);
		const Value cosine_at = emit(head.block, at, addr, pointer, location);
		Instruction call = make_instruction(Opcode::Call, Type::scalar(TypeKind::Void));
		call.ops[0] = Value::symbol(symbol);
		const Value args[3] = { head.x, sine_at, cosine_at };
		call.extra_first = append_operands(body_, args, 3);
		call.extra_count = 3;
		emit(head.block, at, call, Type::scalar(TypeKind::Void), location);
		Instruction load = make_instruction(Opcode::Load, type);
		load.ops[0] = sine_at;
		const Value sine = emit(head.block, at, load, type, location);
		load.ops[0] = cosine_at;
		const Value cosine = emit(head.block, at, load, type, location);
		combine(first, later, sine, cosine);
		changed = true;
	}
	if (changed)
	{
		c_.invalidate_block_of();
		c_.invalidate_cfg();
	}
	return changed;
}

// The calls give way to the two values.
void SinCos::combine(size_t first, const std::vector<size_t>& later, Value sine, Value cosine)
{
	auto drop = [&](size_t k) {
		Call& call = calls_[k];
		const TempId result = body_.instructions[call.id].result;
		replace_all_uses(body_, result, call.function == MathFunction::Sin ? sine : cosine);
		unlink_after(body_, call.block, previous_in_block(body_, call.block, call.id), call.id);
		call.done = true;
		++c_.stats.math_calls_shared;
	};
	drop(first);
	for (size_t k : later)
		drop(k);
}

} // namespace

namespace {

enum class GuardedMath
{
	None,
	Sqrt,
	Square,
	Reciprocal
};

bool power_exponent(const FunctionBody& body, const Instruction& call, double& exponent)
{
	Constant value;
	const TypeKind kind = call.type.kind();
	if (!literal_constant(body, body.operands[call.extra_first + 1], value) || value.kind != ValueKind::Float ||
		value.float_kind != kind)
		return false;
	if (kind == TypeKind::F64)
		std::memcpy(&exponent, &value.bits.low, 8);
	else
	{
		float narrow;
		const uint32_t bits = static_cast<uint32_t>(value.bits.low);
		std::memcpy(&narrow, &bits, 4);
		exponent = narrow;
	}
	return true;
}

GuardedMath power_operation(double exponent)
{
	if (exponent == 2)
		return GuardedMath::Square;
	return exponent == -1 ? GuardedMath::Reciprocal : GuardedMath::None;
}

struct PowerRange
{
	uint64_t mask;
	uint64_t low;
	uint64_t high;
};

PowerRange power_range(TypeKind kind, GuardedMath operation)
{
	const bool narrow = kind == TypeKind::F32;
	const unsigned fraction = narrow ? 23 : 52;
	const unsigned bias = narrow ? 127 : 1023;
	const uint64_t mask = narrow ? UINT64_C(0x7fffffff) : UINT64_C(0x7fffffffffffffff);
	// These input intervals have finite, normal results even at the ends.
	if (operation == GuardedMath::Square)
		return { mask, static_cast<uint64_t>((bias + 1) / 2) << fraction,
			static_cast<uint64_t>(bias + (bias + 1) / 2) << fraction };
	return { mask, UINT64_C(1) << (fraction - 1), static_cast<uint64_t>(2 * bias - 1) << fraction };
}

bool power_literal_is_safe(const FunctionBody& body, Value x, TypeKind kind, GuardedMath operation)
{
	Constant value;
	if (!literal_constant(body, x, value) || value.kind != ValueKind::Float || value.float_kind != kind)
		return false;
	const PowerRange range = power_range(kind, operation);
	const uint64_t magnitude = value.bits.low & range.mask;
	const uint64_t infinity = kind == TypeKind::F32 ? UINT64_C(0x7f800000) : UINT64_C(0x7ff0000000000000);
	return (magnitude >= range.low && magnitude < range.high) || (magnitude == 0 && operation == GuardedMath::Square) ||
		magnitude == infinity;
}

Instruction math_arithmetic(FunctionBody& body, const Instruction& call, GuardedMath operation)
{
	const Value x = body.operands[call.extra_first];
	if (operation == GuardedMath::Sqrt)
	{
		Instruction root = make_instruction(Opcode::Unary, call.type);
		root.sub = static_cast<uint8_t>(UnaryOp::Sqrt);
		root.ops[0] = x;
		return root;
	}
	Instruction power = make_instruction(Opcode::Binary, call.type);
	power.ops[1] = x;
	const bool divide = operation == GuardedMath::Reciprocal;
	power.sub = static_cast<uint8_t>(divide ? BinaryOp::Div : BinaryOp::Mul);
	power.ops[0] = divide ? phi_input(body, call.type, integer_value(body, integer_literal(1))) : x;
	return power;
}

// `sqrt(x)` differs from the instruction only where it sets `errno`, for a
// negative `x`. The instruction runs always; the call stays on that path alone,
// out of the way of the loop around it. An `x` that cannot be negative takes
// the instruction alone: a square, a root, a sum, product or
// quotient of such values, or a phi or select of them (at most kSignDepth
// steps), or a value a dominating branch found not below a non-negative
// literal (at most kSignDominators blocks up).
const unsigned kSignDepth = 6;
const unsigned kSignDominators = 8;

class MathGuards
{
public:
	explicit MathGuards(FunctionContext& context) : c_(context), body_(context.body), cfg_(context.cfg) {}

	bool run();

private:
	struct Site
	{
		BlockId block;
		InstId id;
		GuardedMath op;
	};

	GuardedMath operation(InstId call) const;
	bool never_negative(Value x, Type type, unsigned depth) const;
	bool not_negative_literal(Value v, Type type) const;
	bool tested_not_negative(BlockId block, Value x) const;
	Value emit(BlockId block, InstId& at, Instruction inst, Type result, uint32_t location);
	Value power_needs_libm(BlockId block, InstId& at, const Instruction& call, GuardedMath operation);
	BlockId guard(BlockId block, InstId before, InstId call, GuardedMath operation, std::vector<BlockId>& layout,
		std::vector<BlockId>& slow_blocks);
	void insert_guards(const std::vector<Site>& sites);

	FunctionContext& c_;
	FunctionBody& body_;
	const Cfg& cfg_;
};

// Whether v is a literal neither negative nor NaN, read as `type`.
bool MathGuards::not_negative_literal(Value v, Type type) const
{
	Constant k, ge;
	return literal_constant(body_, v, k) &&
		fold_compare(
			ComparePredicate::Ge, type, k, integer_constant(Type::scalar(TypeKind::I64), integer_literal(0)), ge) &&
		is_integer(Type::scalar(TypeKind::I64), ge, 1);
}

// Whether x < 0 is false for every value x may hold (x may be NaN or -0).
bool MathGuards::never_negative(Value x, Type type, unsigned depth) const
{
	if (x.is_literal())
		return not_negative_literal(x, type);
	if (!x.is(ValueKind::Temp) || x.index < body_.parameter_count || body_.temps[x.index].def == kNoId ||
		depth == kSignDepth)
		return false;
	const Instruction& d = body_.instructions[body_.temps[x.index].def];
	if (!d.type.is_float())
		return d.op == Opcode::Convert && static_cast<ConvertOp>(d.sub) == ConvertOp::UIToFP;
	switch (d.op)
	{
	case Opcode::Unary:
		return static_cast<UnaryOp>(d.sub) == UnaryOp::Sqrt;
	case Opcode::Binary:
		switch (static_cast<BinaryOp>(d.sub))
		{
		case BinaryOp::Mul:
			return d.ops[0] == d.ops[1] ||
				(never_negative(d.ops[0], d.type, depth + 1) && never_negative(d.ops[1], d.type, depth + 1));
		case BinaryOp::Add:
		case BinaryOp::Div:
			return never_negative(d.ops[0], d.type, depth + 1) && never_negative(d.ops[1], d.type, depth + 1);
		default:
			return false;
		}
	case Opcode::Convert:
		return static_cast<ConvertOp>(d.sub) == ConvertOp::UIToFP ||
			((static_cast<ConvertOp>(d.sub) == ConvertOp::FPExt ||
				 static_cast<ConvertOp>(d.sub) == ConvertOp::FPTrunc) &&
				never_negative(d.ops[0], convert_source_type(d), depth + 1));
	case Opcode::Select:
		return never_negative(d.ops[1], d.type, depth + 1) && never_negative(d.ops[2], d.type, depth + 1);
	case Opcode::Copy:
		return never_negative(d.ops[0], d.type, depth + 1);
	case Opcode::Phi:
		for (uint32_t k = 1; k < d.extra_count; k += 2)
		{
			const Value in = body_.operands[d.extra_first + k];
			if (!(in == x) && !never_negative(in, d.type, depth + 1))
				return false;
		}
		return true;
	default:
		return false;
	}
}

// Whether a block dominating `block`, entered only from a branch, is on the
// side of a compare of x with a non-negative literal k where x >= k, x > k,
// !(x < k) or !(x <= k) holds.
bool MathGuards::tested_not_negative(BlockId block, Value x) const
{
	BlockId d = block;
	for (unsigned up = 0; up < kSignDominators && d != kNoId; ++up, d = cfg_.idom[d])
	{
		if (cfg_.pred_count(d) != 1)
			continue;
		const BlockId p = cfg_.preds[cfg_.pred_first[d]];
		const Instruction& br = body_.instructions[body_.blocks[p].last];
		if (br.op != Opcode::Branch || !br.ops[0].is(ValueKind::Temp) || br.ops[1] == br.ops[2] ||
			body_.temps[br.ops[0].index].def == kNoId)
			continue;
		const Instruction& cmp = body_.instructions[body_.temps[br.ops[0].index].def];
		if (cmp.op != Opcode::Compare || !cmp.type.is_float())
			continue;
		const bool taken = br.ops[1].index == d;
		ComparePredicate pred = static_cast<ComparePredicate>(cmp.sub);
		Value k;
		if (cmp.ops[0] == x)
			k = cmp.ops[1];
		else if (cmp.ops[1] == x)
		{
			k = cmp.ops[0];
			pred = swapped(pred);
		}
		else
			continue;
		const bool holds = taken ? (pred == ComparePredicate::Ge || pred == ComparePredicate::Gt)
								 : (pred == ComparePredicate::Lt || pred == ComparePredicate::Le);
		if (holds && not_negative_literal(k, cmp.type))
			return true;
	}
	return false;
}

GuardedMath MathGuards::operation(InstId id) const
{
	const Instruction& call = body_.instructions[id];
	if (call.op != Opcode::Call || (call.flags & IF_SIGNATURE) != 0 || !call.ops[0].is(ValueKind::Symbol) ||
		call.result == kNoId || call.extra_count == 0 || call.extra_count > 2)
		return GuardedMath::None;
	const MathFunction function = c_.program.math_function(call.ops[0].index);
	if (function != MathFunction::Sqrt && function != MathFunction::Pow)
		return GuardedMath::None;
	const TypeKind kind = call.type.kind();
	const Value x = body_.operands[call.extra_first];
	if ((kind != TypeKind::F32 && kind != TypeKind::F64) || !x.is(ValueKind::Temp) ||
		body_.temps[x.index].type != call.type)
		return GuardedMath::None;
	if (function == MathFunction::Sqrt)
		return call.extra_count == 1 ? GuardedMath::Sqrt : GuardedMath::None;
	double exponent;
	return call.extra_count == 2 && power_exponent(body_, call, exponent) ? power_operation(exponent)
																		  : GuardedMath::None;
}

Value MathGuards::emit(BlockId block, InstId& at, Instruction inst, Type result, uint32_t location)
{
	inst.location = location;
	const InstId id = append_instruction(body_, inst);
	const TempId temp = result.is_void() ? kNoId : append_temp(body_, result, id);
	body_.instructions[id].result = temp;
	insert_after(body_, block, at, id);
	at = id;
	return Value::temp(temp);
}

Value MathGuards::power_needs_libm(BlockId block, InstId& at, const Instruction& call, GuardedMath operation)
{
	const TypeKind kind = call.type.kind();
	const PowerRange range = power_range(kind, operation);
	const Type word = Type::scalar(kind == TypeKind::F32 ? TypeKind::U32 : TypeKind::I64);
	Instruction cast = make_instruction(Opcode::Copy, word);
	cast.ops[0] = body_.operands[call.extra_first];
	const Value bits = emit(block, at, cast, word, call.location);
	Instruction mask = make_instruction(Opcode::Binary, word);
	mask.sub = static_cast<uint8_t>(BinaryOp::And);
	mask.ops[0] = bits;
	mask.ops[1] = integer_value(body_, integer_literal(range.mask));
	const Value magnitude = emit(block, at, mask, word, call.location);
	// An unsigned subtraction also excludes inputs below the lower bound.
	Instruction offset = make_instruction(Opcode::Binary, word);
	offset.sub = static_cast<uint8_t>(BinaryOp::Sub);
	offset.ops[0] = magnitude;
	offset.ops[1] = integer_value(body_, integer_literal(range.low));
	const Value distance = emit(block, at, offset, word, call.location);
	Instruction bad = make_instruction(Opcode::Compare, word);
	bad.sub = static_cast<uint8_t>(ComparePredicate::Uge);
	bad.ops[0] = distance;
	bad.ops[1] = integer_value(body_, integer_literal(range.high - range.low));
	return emit(block, at, bad, Type::scalar(TypeKind::I64), call.location);
}

// Keep the original result name on the join of the arithmetic and libm paths.
BlockId MathGuards::guard(BlockId block, InstId before, InstId id, GuardedMath operation, std::vector<BlockId>& layout,
	std::vector<BlockId>& slow_blocks)
{
	const Instruction call = body_.instructions[id];
	const Type type = call.type;
	const Type void_type = Type::scalar(TypeKind::Void);
	const BlockId rest = append_block(body_, BlockKind::Split);
	const BlockId slow = append_block(body_, BlockKind::Split);
	const bool square_root = operation == GuardedMath::Sqrt;
	const BlockId fast_block = square_root ? block : append_block(body_, BlockKind::Split);

	body_.blocks[rest].first = call.next;
	body_.blocks[rest].last = body_.blocks[block].last;
	body_.blocks[block].last = before;
	if (before == kNoId)
		body_.blocks[block].first = kNoId;
	else
		body_.instructions[before].next = kNoId;

	InstId at = before;
	InstId fast_at = kNoId;
	const Value fast = emit(
		fast_block, square_root ? at : fast_at, math_arithmetic(body_, call, operation), type, call.location);
	Value bad;
	if (square_root)
	{
		Instruction below = make_instruction(Opcode::Compare, type);
		below.sub = static_cast<uint8_t>(ComparePredicate::Lt);
		below.ops[0] = body_.operands[call.extra_first];
		below.ops[1] = phi_input(body_, type, integer_value(body_, integer_literal(0)));
		bad = emit(block, at, below, Type::scalar(TypeKind::I64), call.location);
	}
	else
		bad = power_needs_libm(block, at, call, operation);

	Instruction branch = make_instruction(Opcode::Branch, void_type);
	if (target_model::is_aarch64(c_.program.target))
		branch.sub = static_cast<uint8_t>(BranchPrediction::Unlikely);
	branch.ops[0] = bad;
	branch.ops[1] = Value::block(slow);
	branch.ops[2] = Value::block(square_root ? rest : fast_block);
	emit(block, at, branch, void_type, call.location);

	Instruction back = make_instruction(Opcode::Jump, void_type);
	back.ops[0] = Value::block(rest);
	const TempId result = call.result;
	const TempId slow_result = append_temp(body_, type, id);
	body_.instructions[id].next = kNoId;
	body_.instructions[id].result = slow_result;
	insert_after(body_, slow, kNoId, id);
	InstId tail = id;
	emit(slow, tail, back, void_type, call.location);
	if (!square_root)
	{
		emit(fast_block, fast_at, back, void_type, call.location);
		layout.push_back(fast_block);
	}
	layout.push_back(rest);
	slow_blocks.push_back(slow);

	const Value pairs[4] = { Value::block(fast_block), fast, Value::block(slow), Value::temp(slow_result) };
	Instruction phi = make_instruction(Opcode::Phi, type);
	phi.extra_first = append_operands(body_, pairs, 4);
	phi.extra_count = 4;
	phi.result = result;
	phi.location = call.location;
	const InstId merge = append_instruction(body_, phi);
	body_.temps[result].def = merge;
	insert_after(body_, rest, kNoId, merge);
	return rest;
}

// Split each original block in one walk and transfer its outgoing phi
// edges once, even when it contains several library calls.
void MathGuards::insert_guards(const std::vector<Site>& sites)
{
	std::vector<BlockId> layout, slow_blocks;
	layout.reserve(body_.layout.size() + 2 * sites.size());
	slow_blocks.reserve(sites.size());
	size_t next = 0;
	for (BlockId original : body_.layout)
	{
		layout.push_back(original);
		BlockId block = original;
		InstId before = kNoId;
		InstId i = body_.blocks[block].first;
		while (next < sites.size() && sites[next].block == original && i != kNoId)
		{
			if (i == sites[next].id)
			{
				block = guard(block, before, i, sites[next++].op, layout, slow_blocks);
				before = kNoId;
				i = body_.blocks[block].first;
			}
			else
			{
				before = i;
				i = body_.instructions[i].next;
			}
		}
		if (block != original)
		{
			const InstId last = body_.blocks[block].last;
			for_each_successor(body_, body_.instructions[last],
				[&](BlockId& target) { rename_phi_incoming(body_, target, original, block); });
		}
	}
	layout.insert(layout.end(), slow_blocks.begin(), slow_blocks.end());
	body_.layout.swap(layout);
}

bool MathGuards::run()
{
	bool changed = false;
	std::vector<Site> sites;
	for (BlockId block : body_.layout)
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
		{
			const GuardedMath op = operation(i);
			if (op == GuardedMath::None)
				continue;
			if (op == GuardedMath::Sqrt)
			{
				c_.ensure_cfg();
				Instruction& call = body_.instructions[i];
				const Value x = body_.operands[call.extra_first];
				if (never_negative(x, call.type, 0) || tested_not_negative(block, x))
				{
					const Instruction root = math_arithmetic(body_, call, op);
					call.op = root.op;
					call.sub = root.sub;
					call.ops[0] = x;
					call.ops[1] = call.ops[2] = Value::none();
					call.extra_first = call.extra_count = 0;
					call.flags = 0;
					changed = true;
					continue;
				}
			}
			sites.push_back(Site{ block, i, op });
		}
	if (!sites.empty())
	{
		insert_guards(sites);
		c_.invalidate_cfg();
		c_.invalidate_block_of();
		changed = true;
	}
	return changed;
}

// Whether a floating value is never below zero: its square root is no domain
// error, whose errno a call must set. (A NaN sets none.)
bool nonnegative(const FunctionBody& body, Value v, unsigned depth)
{
	Constant c;
	if (literal_constant(body, v, c))
		return c.kind == ValueKind::Float &&
			(c.float_kind == TypeKind::F32 ? (c.bits.low >> 31) & 1 : c.bits.low >> 63) == 0;
	const Instruction* def = depth != 0 && v.is(ValueKind::Temp) && v.index >= body.parameter_count &&
			body.temps[v.index].def != kNoId
		? &body.instructions[body.temps[v.index].def]
		: nullptr;
	if (def == nullptr)
		return false;
	switch (def->op)
	{
	case Opcode::Binary:
	{
		const BinaryOp op = static_cast<BinaryOp>(def->sub);
		if (op == BinaryOp::Mul && def->ops[0] == def->ops[1])
			return true;
		return (op == BinaryOp::Add || op == BinaryOp::Mul || op == BinaryOp::Div) &&
			nonnegative(body, def->ops[0], depth - 1) && nonnegative(body, def->ops[1], depth - 1);
	}
	case Opcode::Unary:
		return static_cast<UnaryOp>(def->sub) == UnaryOp::Sqrt;
	default:
		return false;
	}
}

} // namespace

// Fold simple library calls when arithmetic preserves their error behavior.
// Power calls with an uncertain range are candidates for guarded arithmetic.
bool simplify_math_call(FunctionContext& context, BlockId block, InstId& prev, InstId id)
{
	FunctionBody& body = context.body;
	const Instruction call = body.instructions[id];
	if (context.level < 2 || (call.flags & IF_SIGNATURE) != 0 || !call.ops[0].is(ValueKind::Symbol) ||
		call.result == kNoId || call.extra_count == 0 || call.extra_count > 2)
		return false;
	const MathFunction function = context.program.math_function(call.ops[0].index);
	if (function == MathFunction::None || function == MathFunction::Sin || function == MathFunction::Cos)
		return false;
	const Value x = body.operands[call.extra_first];
	const Type type = call.type;
	const TypeKind kind = type.kind();
	const bool typed = x.is(ValueKind::Temp) ? body.temps[x.index].type == type
											 : function == MathFunction::Pow && x.is(ValueKind::Float);
	if (!typed || call.extra_count != (function == MathFunction::Pow ? 2u : 1u))
		return false;
	const bool floating = kind == TypeKind::F32 || kind == TypeKind::F64;
	if (function == MathFunction::Abs ? kind != TypeKind::I32 && kind != TypeKind::I64 : !floating)
		return false;
	auto emit = [&](Instruction inst, Type result_type) {
		inst.location = call.location;
		const InstId at = append_instruction(body, inst);
		body.instructions[at].result = append_temp(body, result_type, at);
		insert_after(body, block, prev, at);
		prev = at;
		return Value::temp(body.instructions[at].result);
	};
	// The call becomes the instruction left in `last`.
	Instruction last = make_instruction(Opcode::Copy, type);
	last.ops[0] = x;
	switch (function)
	{
	case MathFunction::Fabs:
	{
		const Type bits = Type::scalar(kind == TypeKind::F64 ? TypeKind::I64 : TypeKind::I32);
		Instruction copy = make_instruction(Opcode::Copy, bits);
		copy.ops[0] = x;
		Instruction mask = make_instruction(Opcode::Binary, bits);
		mask.sub = static_cast<uint8_t>(BinaryOp::And);
		mask.ops[0] = emit(copy, bits);
		mask.ops[1] = integer_value(
			body, integer_literal(kind == TypeKind::F64 ? INT64_C(0x7fffffffffffffff) : INT64_C(0x7fffffff)));
		last.ops[0] = emit(mask, bits);
		break;
	}
	case MathFunction::Abs:
	{
		Instruction negate = make_instruction(Opcode::Unary, type);
		negate.sub = static_cast<uint8_t>(UnaryOp::Neg);
		negate.ops[0] = x;
		const Value negated = emit(negate, type);
		Instruction below = make_instruction(Opcode::Compare, type);
		below.sub = static_cast<uint8_t>(ComparePredicate::Lt);
		below.ops[0] = x;
		below.ops[1] = integer_value(body, integer_literal(0));
		last = make_instruction(Opcode::Select, type);
		last.ops[0] = emit(below, Type::scalar(TypeKind::I64));
		last.ops[1] = negated;
		last.ops[2] = x;
		break;
	}
	case MathFunction::Pow:
	{
		double exponent;
		if (!power_exponent(body, call, exponent))
			return false;
		const GuardedMath operation = power_operation(exponent);
		if (operation != GuardedMath::None)
		{
			if (!power_literal_is_safe(body, x, kind, operation))
				return false;
			last = math_arithmetic(body, call, operation);
		}
		else if (exponent == 0)
			last.ops[0] = phi_input(body, type, integer_value(body, integer_literal(1)));
		else if (exponent != 1)
			return false;
		break;
	}
	case MathFunction::Sqrt:
		if (!nonnegative(body, x, 6))
			return false;
		last = make_instruction(Opcode::Unary, type);
		last.sub = static_cast<uint8_t>(UnaryOp::Sqrt);
		last.ops[0] = x;
		break;
	default:
		return false;
	}
	Instruction& replaced = body.instructions[id];
	replaced.op = last.op;
	replaced.sub = last.sub;
	replaced.type = type;
	replaced.ops[0] = last.ops[0];
	replaced.ops[1] = last.ops[1];
	replaced.ops[2] = last.ops[2];
	replaced.extra_first = replaced.extra_count = 0;
	replaced.flags = 0;
	return true;
}

bool guard_library_math_calls(FunctionContext& context)
{
	MathGuards pass(context);
	return pass.run();
}

bool combine_sin_cos(FunctionContext& context)
{
	SinCos pass(context);
	return pass.run();
}

} // namespace opt
