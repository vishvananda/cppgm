#include "lowir/builder.h"
#include "opt/passes.h"

namespace opt {

using namespace lowir;

namespace {

// 128-bit integers as pairs of 64-bit halves (O2+): the selector homes
// every i128 temporary in the frame and slot promotion keeps i128 slots in
// memory, so a constant folder's unsigned __int128 arithmetic ran through
// the stack. Each i128 temporary becomes a low and a high i64; logic,
// addition and subtraction (with the carry compared out), shifts (by a
// constant, or by a variable count through selects), extensions,
// truncations, compares, selects, phis, loads and stores work on the
// halves, and an i128 slot only loaded and stored whole becomes two i64
// slots. Anything else (multiplication, division, conversions to and from
// floating point, calls, returns, volatile accesses) keeps its i128
// operands and results: an operand is put together from its halves before
// it, a result taken apart after it.
class WideIntegers
{
public:
	explicit WideIntegers(FunctionContext& context, unsigned bits = 64)
		: c_(context), body_(context.body), bits_(bits),
		  half_(Type::scalar(bits == 32 ? TypeKind::I32 : TypeKind::I64)),
		  whole_(Type::scalar(bits == 32 ? TypeKind::I64 : TypeKind::I128))
	{}

	bool run();

private:
	struct Pair
	{
		Value lo, hi;
	};
	bool wide(Value v) const;
	uint64_t limb_mask() const { return bits_ == 32 ? UINT32_MAX : UINT64_MAX; }
	Value multiply_high(Value a, Value b);
	Value pair_slot();
	Value compose_words(Pair pair);
	Pair split_words(Value wide);
	bool touches(const Instruction& inst) const;
	bool expandable(const Instruction& inst) const;
	Pair pair(Value v);
	Value emit(Instruction inst, Type result);
	Value literal(uint64_t bits)
	{
		return integer_value(
			body_, integer_literal(bits_ == 32 ? static_cast<int32_t>(bits) : static_cast<int64_t>(bits)));
	}
	bool literal_bits(Value v, uint64_t& bits) const;
	Value binary(BinaryOp op, Value a, Value b);
	Value compare(ComparePredicate pred, Value a, Value b);
	Value select(Value cond, Value a, Value b);
	Value convert(ConvertOp op, Type to, Type from, Value v);
	Value address_plus(Value base, int64_t offset);
	Pair shift(BinaryOp op, Pair a, Value count);
	struct PhiHalves
	{
		InstId phi, lo, hi;
	};
	void expand(InstId id, const Instruction& inst, std::vector<PhiHalves>& phis);
	bool bridge(InstId id);
	void split_slots();

	FunctionContext& c_;
	FunctionBody& body_;
	unsigned bits_;
	Type half_;
	Type whole_;
	std::vector<Pair> halves_;    // per temporary
	std::vector<uint8_t> kept_;   // per temporary: its i128 definition stays
	std::vector<SlotId> slot_lo_; // per slot: its low half's slot (kNoId: whole)
	BlockId block_ = kNoId;
	InstId prev_ = kNoId;
	uint32_t location_ = 0;
};

bool WideIntegers::wide(Value v) const
{
	if (!v.is(ValueKind::Temp) || body_.temps[v.index].type != whole_)
		return false;
	const InstId def = body_.temps[v.index].def;
	if (bits_ == 64 || def == kNoId)
		return true;
	const Opcode op = body_.instructions[def].op;
	return !is_compare(op) && op != Opcode::AtomicCompareExchange;
}

bool WideIntegers::touches(const Instruction& inst) const
{
	if (inst.type.kind() == whole_.kind() || (inst.result != kNoId && wide(Value::temp(inst.result))))
		return true;
	bool any = false;
	for_each_operand(body_, const_cast<Instruction&>(inst), [&](Value& v) { any = any || wide(v); });
	return any;
}

bool WideIntegers::expandable(const Instruction& inst) const
{
	const bool i128 = inst.type.kind() == whole_.kind();
	switch (inst.op)
	{
	case Opcode::Phi:
	case Opcode::Copy:
		return i128;
	case Opcode::Const:
		return bits_ == 32 && i128;
	case Opcode::Binary:
		switch (static_cast<BinaryOp>(inst.sub))
		{
		case BinaryOp::And:
		case BinaryOp::Or:
		case BinaryOp::Xor:
		case BinaryOp::Add:
		case BinaryOp::Sub:
		case BinaryOp::Shl:
		case BinaryOp::Shr:
		case BinaryOp::UShr:
			return i128;
		case BinaryOp::Mul:
			return bits_ == 32 && i128;
		default:
			return false;
		}
	case Opcode::Unary:
		return i128 &&
			(static_cast<UnaryOp>(inst.sub) == UnaryOp::BitNot || static_cast<UnaryOp>(inst.sub) == UnaryOp::Neg);
	case Opcode::Convert:
	{
		const ConvertOp op = static_cast<ConvertOp>(inst.sub);
		const Type from = convert_source_type(inst);
		if (i128)
			return (op == ConvertOp::ZExt || op == ConvertOp::SExt) && from.is_integer() &&
				from.kind() != whole_.kind();
		return op == ConvertOp::Trunc && from.kind() == whole_.kind() && inst.type.is_integer();
	}
	case Opcode::Compare:
		return i128;
	case Opcode::Select:
		return i128 && !wide(inst.ops[0]);
	case Opcode::Load:
		return i128 && ((inst.flags & IF_VOLATILE) == 0 || bits_ == 32);
	case Opcode::Store:
		return i128 && ((inst.flags & IF_VOLATILE) == 0 || bits_ == 32);
	default:
		return false;
	}
}

bool WideIntegers::literal_bits(Value v, uint64_t& bits) const
{
	if (!v.is(ValueKind::Integer))
		return false;
	bits = body_.literals[v.index].low & limb_mask();
	return true;
}

WideIntegers::Pair WideIntegers::pair(Value v)
{
	if (v.is(ValueKind::Integer))
	{
		const Literal bits = body_.literals[v.index];
		return Pair{ literal(bits.low), literal(bits_ == 32 ? bits.low >> 32 : bits.high) };
	}
	if (bits_ == 32 && !wide(v))
		return Pair{ v, literal(0) };
	return halves_[v.index];
}

Value WideIntegers::emit(Instruction inst, Type result)
{
	inst.location = location_;
	const InstId id = append_instruction(body_, inst);
	if (!result.is_void())
		body_.instructions[id].result = append_temp(body_, result, id);
	insert_after(body_, block_, prev_, id);
	prev_ = id;
	return result.is_void() ? Value::none() : Value::temp(body_.instructions[id].result);
}

// An i64 operation, folded when an operand decides it (the halves of
// zero-extended values are mostly zero).
Value WideIntegers::binary(BinaryOp op, Value a, Value b)
{
	uint64_t x = 0, y = 0;
	const bool ka = literal_bits(a, x), kb = literal_bits(b, y);
	if (ka && kb)
	{
		switch (op)
		{
		case BinaryOp::And:
			return literal(x & y);
		case BinaryOp::Or:
			return literal(x | y);
		case BinaryOp::Xor:
			return literal(x ^ y);
		case BinaryOp::Add:
			return literal(x + y);
		case BinaryOp::Sub:
			return literal(x - y);
		case BinaryOp::Mul:
			return literal(x * y);
		case BinaryOp::Shl:
			return literal(y < bits_ ? x << y : 0);
		case BinaryOp::UShr:
			return literal(y < bits_ ? x >> y : 0);
		case BinaryOp::Shr:
			return literal(static_cast<uint64_t>(
				(bits_ == 32 ? static_cast<int64_t>(static_cast<int32_t>(x)) : static_cast<int64_t>(x)) >>
				(y < bits_ ? y : bits_ - 1)));
		default:
			break;
		}
	}
	if (op == BinaryOp::And && ((ka && x == 0) || (kb && y == 0)))
		return literal(0);
	if (op == BinaryOp::And && kb && y == limb_mask())
		return a;
	if (op == BinaryOp::And && ka && x == limb_mask())
		return b;
	if ((op == BinaryOp::Or || op == BinaryOp::Xor || op == BinaryOp::Add) && ka && x == 0)
		return b;
	if ((op == BinaryOp::Or || op == BinaryOp::Xor || op == BinaryOp::Add || op == BinaryOp::Sub ||
			op == BinaryOp::Shl || op == BinaryOp::Shr || op == BinaryOp::UShr) &&
		kb && y == 0)
		return a;
	if (op == BinaryOp::Mul && ((ka && x == 0) || (kb && y == 0)))
		return literal(0);
	if ((op == BinaryOp::Shl || op == BinaryOp::UShr || op == BinaryOp::Shr) && ka && x == 0)
		return literal(0);
	Instruction inst = make_instruction(Opcode::Binary, half_);
	inst.sub = static_cast<uint8_t>(op);
	inst.ops[0] = a;
	inst.ops[1] = b;
	return emit(inst, half_);
}

Value WideIntegers::compare(ComparePredicate pred, Value a, Value b)
{
	Instruction inst = make_instruction(Opcode::Compare, half_);
	inst.sub = static_cast<uint8_t>(pred);
	inst.ops[0] = a;
	inst.ops[1] = b;
	return emit(inst, Type::scalar(TypeKind::I64));
}

Value WideIntegers::select(Value cond, Value a, Value b)
{
	if (a == b)
		return a;
	Instruction inst = make_instruction(Opcode::Select, half_);
	inst.ops[0] = cond;
	inst.ops[1] = a;
	inst.ops[2] = b;
	return emit(inst, half_);
}

Value WideIntegers::convert(ConvertOp op, Type to, Type from, Value v)
{
	Instruction inst = make_instruction(Opcode::Convert, to);
	inst.sub = static_cast<uint8_t>(op);
	inst.ops[0] = v;
	set_convert_source_type(inst, from);
	return emit(inst, to);
}

Value WideIntegers::address_plus(Value base, int64_t offset)
{
	if (base.is(ValueKind::Slot))
	{
		Instruction addr = make_instruction(Opcode::Addr, body_.pointer_type());
		addr.ops[0] = base;
		base = emit(addr, body_.pointer_type());
	}
	Instruction index = make_instruction(Opcode::Index, Type::scalar(TypeKind::I8));
	index.sub = ir_model::IPK_FIELD;
	index.ops[0] = base;
	index.ops[1] = literal(static_cast<uint64_t>(offset));
	return emit(index, body_.pointer_type());
}

// High word of a 32-by-32 unsigned multiply. Each partial product and
// carry fits in one word, including when both words are all ones.
Value WideIntegers::multiply_high(Value a, Value b)
{
	uint64_t constant = 0;
	if ((literal_bits(a, constant) || literal_bits(b, constant)) && constant < 2)
		return literal(0);
	const Value mask = literal(0xffff), shift = literal(16);
	const Value al = binary(BinaryOp::And, a, mask);
	const Value ah = binary(BinaryOp::UShr, a, shift);
	const Value bl = binary(BinaryOp::And, b, mask);
	const Value bh = binary(BinaryOp::UShr, b, shift);
	const Value low = binary(BinaryOp::Mul, al, bl);
	const Value low_carry = binary(BinaryOp::UShr, low, shift);
	const Value left = binary(BinaryOp::Mul, ah, bl);
	const Value left_sum = binary(BinaryOp::Add, left, low_carry);
	const Value left_carry = binary(BinaryOp::UShr, left_sum, shift);
	const Value left_low = binary(BinaryOp::And, left_sum, mask);
	const Value right = binary(BinaryOp::Mul, al, bh);
	const Value right_sum = binary(BinaryOp::Add, right, left_low);
	const Value right_carry = binary(BinaryOp::UShr, right_sum, shift);
	const Value carry = binary(BinaryOp::Add, left_carry, right_carry);
	const Value high = binary(BinaryOp::Mul, ah, bh);
	return binary(BinaryOp::Add, high, carry);
}

// A shift of a pair by a constant or by the low half of a count below 128.
WideIntegers::Pair WideIntegers::shift(BinaryOp op, Pair a, Value count)
{
	uint64_t k = 0;
	if (literal_bits(count, k))
	{
		k &= 2 * bits_ - 1;
		if (k == 0)
			return a;
		// (Each emission sequenced: an argument list's evaluation order is
		// the host compiler's, and the instructions' order must not be.)
		const Value zero = literal(0), by = literal(k), back = literal(bits_ - k),
					over = literal(k >= bits_ ? k - bits_ : 0);
		if (op == BinaryOp::Shl)
		{
			if (k >= bits_)
				return Pair{ zero, binary(BinaryOp::Shl, a.lo, over) };
			const Value lo = binary(BinaryOp::Shl, a.lo, by);
			const Value up = binary(BinaryOp::Shl, a.hi, by);
			const Value crossed = binary(BinaryOp::UShr, a.lo, back);
			return Pair{ lo, binary(BinaryOp::Or, up, crossed) };
		}
		const Value fill = op == BinaryOp::Shr ? binary(BinaryOp::Shr, a.hi, literal(bits_ - 1)) : zero;
		if (k >= bits_)
			return Pair{ binary(op, a.hi, over), fill };
		const Value down = binary(BinaryOp::UShr, a.lo, by);
		const Value crossed = binary(BinaryOp::Shl, a.hi, back);
		const Value lo = binary(BinaryOp::Or, down, crossed);
		return Pair{ lo, binary(op, a.hi, by) };
	}
	// A variable count: the pair shifted by count & 63 (the half crossing
	// over by a further shift of 63 - (count & 63) after one of 1, so no
	// shift reaches 64), then the halves chosen by count & 64.
	const Value six = literal(bits_ - 1), sixty_four = literal(bits_), zero = literal(0), one = literal(1);
	const Value low = binary(BinaryOp::And, count, six);
	const Value rest = binary(BinaryOp::Xor, low, six);
	const Value half = binary(BinaryOp::And, count, sixty_four);
	const Value big = compare(ComparePredicate::Ne, half, zero);
	if (op == BinaryOp::Shl)
	{
		const Value lo = binary(BinaryOp::Shl, a.lo, low);
		const Value halved = binary(BinaryOp::UShr, a.lo, one);
		const Value carried = binary(BinaryOp::UShr, halved, rest);
		const Value up = binary(BinaryOp::Shl, a.hi, low);
		const Value hi = binary(BinaryOp::Or, up, carried);
		const Value new_lo = select(big, zero, lo);
		return Pair{ new_lo, select(big, lo, hi) };
	}
	const Value hi = binary(op, a.hi, low);
	const Value doubled = binary(BinaryOp::Shl, a.hi, one);
	const Value carried = binary(BinaryOp::Shl, doubled, rest);
	const Value down = binary(BinaryOp::UShr, a.lo, low);
	const Value lo = binary(BinaryOp::Or, down, carried);
	const Value fill = op == BinaryOp::Shr ? binary(BinaryOp::Shr, a.hi, six) : zero;
	const Value new_lo = select(big, hi, lo);
	return Pair{ new_lo, select(big, fill, hi) };
}

// One expandable instruction: its pair computed after `prev_`, the
// instruction itself removed (a phi's halves wait for their inputs).
void WideIntegers::expand(InstId id, const Instruction& inst, std::vector<PhiHalves>& phis)
{
	Pair r = { Value::none(), Value::none() };
	switch (inst.op)
	{
	case Opcode::Phi:
	{
		Instruction phi = make_instruction(Opcode::Phi, half_);
		r.lo = emit(phi, half_);
		const InstId lo_id = prev_;
		r.hi = emit(phi, half_);
		phis.push_back(PhiHalves{ id, lo_id, prev_ });
		break;
	}
	case Opcode::Const:
	case Opcode::Copy:
		r = pair(inst.ops[0]);
		break;
	case Opcode::Binary:
	{
		const BinaryOp op = static_cast<BinaryOp>(inst.sub);
		const Pair a = pair(inst.ops[0]);
		if (op == BinaryOp::Shl || op == BinaryOp::Shr || op == BinaryOp::UShr)
		{
			r = shift(op, a, pair(inst.ops[1]).lo);
			break;
		}
		const Pair b = pair(inst.ops[1]);
		if (op == BinaryOp::Mul)
		{
			r.lo = binary(op, a.lo, b.lo);
			const Value left = binary(op, a.lo, b.hi);
			const Value right = binary(op, a.hi, b.lo);
			const Value cross = binary(BinaryOp::Add, left, right);
			const Value high = multiply_high(a.lo, b.lo);
			r.hi = binary(BinaryOp::Add, cross, high);
			break;
		}
		if (op == BinaryOp::Add || op == BinaryOp::Sub)
		{
			r.lo = binary(op, a.lo, b.lo);
			uint64_t k = 0;
			// The carry: the sum below an addend, the borrow a minuend below
			// the subtrahend.
			const Value carry = literal_bits(b.lo, k) && k == 0 ? literal(0)
				: op == BinaryOp::Add                           ? compare(ComparePredicate::Ult, r.lo, a.lo)
																: compare(ComparePredicate::Ult, a.lo, b.lo);
			const Value high = binary(op, a.hi, b.hi);
			r.hi = binary(op, high, carry);
			break;
		}
		r.lo = binary(op, a.lo, b.lo);
		r.hi = binary(op, a.hi, b.hi);
		break;
	}
	case Opcode::Unary:
	{
		const Pair a = pair(inst.ops[0]);
		if (static_cast<UnaryOp>(inst.sub) == UnaryOp::BitNot)
		{
			const Value ones = literal(~0ull);
			r.lo = binary(BinaryOp::Xor, a.lo, ones);
			r.hi = binary(BinaryOp::Xor, a.hi, ones);
			break;
		}
		const Value zero = literal(0);
		r.lo = binary(BinaryOp::Sub, zero, a.lo);
		const Value negated = binary(BinaryOp::Sub, zero, a.hi);
		const Value borrow = compare(ComparePredicate::Ne, a.lo, zero);
		r.hi = binary(BinaryOp::Sub, negated, borrow);
		break;
	}
	case Opcode::Convert:
	{
		const ConvertOp op = static_cast<ConvertOp>(inst.sub);
		const Type from = convert_source_type(inst);
		if (op == ConvertOp::Trunc)
		{
			const Value lo = pair(inst.ops[0]).lo;
			Instruction keep = make_instruction(
				inst.type.kind() == half_.kind() ? Opcode::Copy : Opcode::Convert, inst.type);
			keep.ops[0] = lo;
			if (keep.op == Opcode::Convert)
			{
				keep.sub = static_cast<uint8_t>(ConvertOp::Trunc);
				set_convert_source_type(keep, half_);
			}
			keep.result = inst.result;
			keep.next = inst.next;
			keep.location = inst.location;
			body_.instructions[id] = keep;
			return;
		}
		const Value v = inst.ops[0];
		if (v.is(ValueKind::Integer))
		{
			// The source's bits at its width, extended.
			uint64_t bits = 0;
			literal_bits(v, bits);
			const unsigned width = from.kind() == TypeKind::I1 ? 1 : static_cast<unsigned>(8 * storage_bytes(from));
			if (width < 64)
			{
				bits &= (1ull << width) - 1;
				if (op == ConvertOp::SExt && ((bits >> (width - 1)) & 1) != 0)
					bits |= ~((1ull << width) - 1);
			}
			r.lo = literal(bits);
			r.hi = literal(op == ConvertOp::SExt && static_cast<int64_t>(bits) < 0 ? ~0ull : 0);
			break;
		}
		r.lo = integer_bits(from.kind()) == bits_ ? v : convert(op, half_, from, v);
		r.hi = op == ConvertOp::SExt ? binary(BinaryOp::Shr, r.lo, literal(bits_ - 1)) : literal(0);
		break;
	}
	case Opcode::Compare:
	{
		const ComparePredicate pred = static_cast<ComparePredicate>(inst.sub);
		const Pair a = pair(inst.ops[0]), b = pair(inst.ops[1]);
		Value result;
		if (pred == ComparePredicate::Eq || pred == ComparePredicate::Ne)
		{
			const Value low = binary(BinaryOp::Xor, a.lo, b.lo);
			const Value high = binary(BinaryOp::Xor, a.hi, b.hi);
			const Value diff = binary(BinaryOp::Or, low, high);
			result = compare(pred, diff, literal(0));
		}
		else
		{
			ComparePredicate strict = pred, low = pred;
			switch (pred)
			{
			case ComparePredicate::Le:
				strict = ComparePredicate::Lt;
				low = ComparePredicate::Ule;
				break;
			case ComparePredicate::Lt:
				low = ComparePredicate::Ult;
				break;
			case ComparePredicate::Ge:
				strict = ComparePredicate::Gt;
				low = ComparePredicate::Uge;
				break;
			case ComparePredicate::Gt:
				low = ComparePredicate::Ugt;
				break;
			case ComparePredicate::Ule:
				strict = ComparePredicate::Ult;
				break;
			case ComparePredicate::Uge:
				strict = ComparePredicate::Ugt;
				break;
			default:
				break;
			}
			const Value same = compare(ComparePredicate::Eq, a.hi, b.hi);
			const Value high = compare(strict, a.hi, b.hi);
			const Value lower = compare(low, a.lo, b.lo);
			result = select(same, lower, high);
		}
		const Type result_type = bits_ == 32 ? half_ : body_.temps[inst.result].type;
		Instruction copy = make_instruction(Opcode::Copy, result_type);
		body_.temps[inst.result].type = result_type;
		copy.ops[0] = result;
		copy.result = inst.result;
		copy.next = inst.next;
		copy.location = inst.location;
		body_.instructions[id] = copy;
		return;
	}
	case Opcode::Select:
	{
		const Pair a = pair(inst.ops[1]), b = pair(inst.ops[2]);
		r.lo = select(inst.ops[0], a.lo, b.lo);
		r.hi = select(inst.ops[0], a.hi, b.hi);
		break;
	}
	case Opcode::Load:
	{
		const Value at = inst.ops[0];
		Instruction load = make_instruction(Opcode::Load, half_);
		if (bits_ == 32)
			load.flags = inst.flags;
		if (at.is(ValueKind::Slot) && slot_lo_[at.index] != kNoId)
		{
			load.ops[0] = Value::slot(slot_lo_[at.index]);
			r.lo = emit(load, half_);
			load.ops[0] = Value::slot(slot_lo_[at.index] + 1);
			r.hi = emit(load, half_);
			break;
		}
		load.ops[0] = at;
		r.lo = emit(load, half_);
		load.ops[0] = address_plus(at, bits_ / 8);
		r.hi = emit(load, half_);
		break;
	}
	case Opcode::Store:
	{
		const Pair v = pair(inst.ops[0]);
		const Value at = inst.ops[1];
		Instruction store = make_instruction(Opcode::Store, half_);
		store.flags = inst.flags;
		if (at.is(ValueKind::Slot) && slot_lo_[at.index] != kNoId)
		{
			store.ops[0] = v.lo;
			store.ops[1] = Value::slot(slot_lo_[at.index]);
			emit(store, Type::scalar(TypeKind::Void));
			store.ops[0] = v.hi;
			store.ops[1] = Value::slot(slot_lo_[at.index] + 1);
			emit(store, Type::scalar(TypeKind::Void));
		}
		else
		{
			store.ops[0] = v.lo;
			store.ops[1] = at;
			emit(store, Type::scalar(TypeKind::Void));
			store.ops[0] = v.hi;
			store.ops[1] = address_plus(at, bits_ / 8);
			emit(store, Type::scalar(TypeKind::Void));
		}
		break;
	}
	default:
		break;
	}
	if (inst.result != kNoId)
		halves_[inst.result] = r;
}

// Boundary values keep their wide type and travel in a single typed
// storage location until the ABI assigns the two physical words.
Value WideIntegers::pair_slot()
{
	const uint32_t slot = static_cast<uint32_t>(body_.slots.size());
	body_.slots.push_back(Slot{ 0, SlotKind::Wide, 0, 0, Type::object(8, 2) });
	return Value::slot(slot);
}

Value WideIntegers::compose_words(Pair pair)
{
	const Value at = pair_slot();
	Instruction store = make_instruction(Opcode::Store, half_);
	store.ops[0] = pair.lo;
	store.ops[1] = address_plus(at, 0);
	const Value base = store.ops[1];
	emit(store, Type::scalar(TypeKind::Void));
	store.ops[0] = pair.hi;
	store.ops[1] = address_plus(base, 4);
	emit(store, Type::scalar(TypeKind::Void));
	Instruction load = make_instruction(Opcode::Load, whole_);
	load.ops[0] = base;
	return emit(load, whole_);
}

WideIntegers::Pair WideIntegers::split_words(Value wide)
{
	const Value at = pair_slot();
	const Value base = address_plus(at, 0);
	Instruction store = make_instruction(Opcode::Store, whole_);
	store.ops[0] = wide;
	store.ops[1] = base;
	emit(store, Type::scalar(TypeKind::Void));
	Instruction load = make_instruction(Opcode::Load, half_);
	load.ops[0] = base;
	const Value low = emit(load, half_);
	load.ops[0] = address_plus(base, 4);
	return Pair{ low, emit(load, half_) };
}

// An instruction that keeps its wide operands and result: each wide
// operand put together before it (after `prev_`), its result taken apart
// after it (true: `prev_` is the last of those).
bool WideIntegers::bridge(InstId id)
{
	auto compose = [&](Value& v) {
		if (!wide(v) || kept_[v.index])
			return;
		const Pair p = halves_[v.index];
		if (bits_ == 32)
		{
			v = compose_words(p);
			return;
		}
		// An extended i64 is its extension again (a high half of 0, or of
		// the low half's sign).
		if (p.hi.is(ValueKind::Integer) && body_.literals[p.hi.index].low == 0 && body_.literals[p.hi.index].high == 0)
		{
			v = convert(ConvertOp::ZExt, whole_, half_, p.lo);
			return;
		}
		if (p.hi.is(ValueKind::Temp) && body_.temps[p.hi.index].def != kNoId)
		{
			const Instruction& sign = body_.instructions[body_.temps[p.hi.index].def];
			if (sign.op == Opcode::Binary && static_cast<BinaryOp>(sign.sub) == BinaryOp::Shr && sign.ops[0] == p.lo &&
				sign.ops[1].is(ValueKind::Integer) && body_.literals[sign.ops[1].index].low == bits_ - 1)
			{
				v = convert(ConvertOp::SExt, whole_, half_, p.lo);
				return;
			}
		}
		const Value lo = convert(ConvertOp::ZExt, whole_, half_, p.lo);
		const Value hi = convert(ConvertOp::ZExt, whole_, half_, p.hi);
		Instruction up = make_instruction(Opcode::Binary, whole_);
		up.sub = static_cast<uint8_t>(BinaryOp::Shl);
		up.ops[0] = hi;
		up.ops[1] = literal(bits_);
		Instruction join = make_instruction(Opcode::Binary, whole_);
		join.sub = static_cast<uint8_t>(BinaryOp::Or);
		join.ops[0] = emit(up, whole_);
		join.ops[1] = lo;
		v = emit(join, whole_);
	};
	// (On a copy: composing appends instructions, which may move them.)
	Instruction rewritten = body_.instructions[id];
	if (bits_ == 32)
	{
		if (rewritten.op == Opcode::Index && wide(rewritten.ops[1]))
			rewritten.ops[1] = pair(rewritten.ops[1]).lo;
		if ((rewritten.op == Opcode::Branch || rewritten.op == Opcode::Select) && wide(rewritten.ops[0]))
		{
			const Pair value = pair(rewritten.ops[0]);
			const Value combined = binary(BinaryOp::Or, value.lo, value.hi);
			rewritten.ops[0] = compare(ComparePredicate::Ne, combined, literal(0));
		}
	}
	for_each_operand(body_, rewritten, compose);
	body_.instructions[id] = rewritten;
	const Instruction& inst = body_.instructions[id];
	if (inst.result == kNoId || !wide(Value::temp(inst.result)))
		return false;
	const Value r = Value::temp(inst.result);
	kept_[inst.result] = 1;
	prev_ = id;
	if (bits_ == 32)
	{
		halves_[r.index] = split_words(r);
		return true;
	}
	Pair p;
	p.lo = convert(ConvertOp::Trunc, half_, whole_, r);
	Instruction down = make_instruction(Opcode::Binary, whole_);
	down.sub = static_cast<uint8_t>(BinaryOp::UShr);
	down.ops[0] = r;
	down.ops[1] = literal(bits_);
	p.hi = convert(ConvertOp::Trunc, half_, whole_, emit(down, whole_));
	halves_[r.index] = p;
	return true;
}

// i128 slots only loaded and stored whole (and not volatile) become two
// i64 slots, the low half first.
void WideIntegers::split_slots()
{
	const uint32_t slots = static_cast<uint32_t>(body_.slots.size());
	std::vector<uint8_t> whole(slots, 0);
	for (SlotId s = 0; s < slots; ++s)
		whole[s] = body_.slots[s].type.kind() == whole_.kind() ? 1 : 0;
	for (BlockId b : body_.layout)
		for (InstId i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
		{
			Instruction& inst = body_.instructions[i];
			uint32_t position = 0;
			for_each_operand(body_, inst, [&](Value& v) {
				const uint32_t at = position++;
				if (!v.is(ValueKind::Slot))
					return;
				const bool access = ((inst.op == Opcode::Load && at == 0) || (inst.op == Opcode::Store && at == 1)) &&
					inst.type.kind() == whole_.kind() && (inst.flags & IF_VOLATILE) == 0;
				if (!access)
					whole[v.index] = 0;
			});
		}
	slot_lo_.assign(slots, kNoId);
	for (SlotId s = 0; s < slots; ++s)
		if (whole[s])
		{
			slot_lo_[s] = static_cast<SlotId>(body_.slots.size());
			body_.slots.push_back(Slot{ 0, SlotKind::Wide, 0, 0, half_ });
			body_.slots.push_back(Slot{ 0, SlotKind::Wide, 0, 0, half_ });
		}
}

bool WideIntegers::run()
{
	bool any = false;
	for (TempId t = 0; t < body_.temps.size() && !any; ++t)
		any = wide(Value::temp(t));
	if (!any)
		return false;
	const Cfg& cfg = c_.ensure_cfg_light();
	split_slots();
	const uint32_t temps = static_cast<uint32_t>(body_.temps.size());
	halves_.assign(temps, Pair{ Value::none(), Value::none() });
	kept_.assign(temps, 0);
	// Instructions from here on are the pass's own.
	const InstId first_new = static_cast<InstId>(body_.instructions.size());
	// Wide parameters and temporaries defined nowhere: taken apart at the
	// entry.
	const BlockId entry = body_.layout[0];
	block_ = entry;
	prev_ = kNoId;
	for (TempId t = 0; t < temps; ++t)
		if (wide(Value::temp(t)) && (t < body_.parameter_count || body_.temps[t].def == kNoId))
		{
			const Value r = Value::temp(t);
			kept_[t] = 1;
			if (bits_ == 32)
			{
				halves_[t] = split_words(r);
				continue;
			}
			Pair p;
			p.lo = convert(ConvertOp::Trunc, half_, whole_, r);
			Instruction down = make_instruction(Opcode::Binary, whole_);
			down.sub = static_cast<uint8_t>(BinaryOp::UShr);
			down.ops[0] = r;
			down.ops[1] = literal(bits_);
			p.hi = convert(ConvertOp::Trunc, half_, whole_, emit(down, whole_));
			halves_[t] = p;
		}
	std::vector<PhiHalves> phis;
	// Reachable blocks in reverse postorder (definitions before uses but
	// for phis), then any others.
	std::vector<BlockId> order = cfg.rpo;
	std::vector<uint8_t> listed(body_.blocks.size(), 0);
	for (BlockId b : order)
		listed[b] = 1;
	for (BlockId b : body_.layout)
		if (!listed[b])
			order.push_back(b);
	for (BlockId b : order)
	{
		block_ = b;
		InstId prev = kNoId;
		for (InstId i = body_.blocks[b].first; i != kNoId;)
		{
			const Instruction inst = body_.instructions[i];
			const InstId next = inst.next;
			if (i >= first_new || !touches(inst))
			{
				prev = i;
				i = next;
				continue;
			}
			location_ = inst.location;
			prev_ = prev;
			if (expandable(inst))
			{
				expand(i, inst, phis);
				const bool in_place = (inst.op == Opcode::Convert &&
										  static_cast<ConvertOp>(inst.sub) == ConvertOp::Trunc) ||
					inst.op == Opcode::Compare;
				if (in_place)
					prev = i;
				else
				{
					unlink_after(body_, b, prev_, i);
					prev = prev_;
				}
			}
			else
				prev = bridge(i) ? prev_ : i;
			i = next;
		}
	}
	// The phis' halves: each input's.
	for (const PhiHalves& p : phis)
	{
		const Instruction phi = body_.instructions[p.phi];
		std::vector<Value> lo, hi;
		for (uint32_t k = 0; k < phi.extra_count; k += 2)
		{
			const Value pred = body_.operands[phi.extra_first + k];
			const Pair v = pair(body_.operands[phi.extra_first + k + 1]);
			lo.push_back(pred);
			lo.push_back(v.lo);
			hi.push_back(pred);
			hi.push_back(v.hi);
		}
		body_.instructions[p.lo].extra_first = append_operands(body_, lo.data(), static_cast<uint32_t>(lo.size()));
		body_.instructions[p.lo].extra_count = static_cast<uint32_t>(lo.size());
		body_.instructions[p.hi].extra_first = append_operands(body_, hi.data(), static_cast<uint32_t>(hi.size()));
		body_.instructions[p.hi].extra_count = static_cast<uint32_t>(hi.size());
	}
	return true;
}

} // namespace

bool expand_wide_integers(FunctionContext& context)
{
	if (context.level < 2)
		return false;
	WideIntegers pass(context);
	return pass.run();
}

void legalize_i386_word_pairs(Program& program, SymbolId symbol)
{
	OptimizerStats stats;
	FunctionContext context(program, symbol, stats, 0);
	WideIntegers pass(context, 32);
	if (pass.run())
		compact_body(program, symbol, context.body);
}

} // namespace opt
