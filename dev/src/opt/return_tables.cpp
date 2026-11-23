#include <algorithm>
#include <array>
#include <string>

#include "lowir/builder.h"
#include "opt/passes.h"
#include "opt/scalar_fold.h"

namespace opt {

using namespace lowir;

namespace {

// A bounded dense result table replaces dispatch, not an arbitrary CFG.
// Data growth is linear in the switch operands, with a small absolute cap.
const uint32_t kMinCases = 4, kMaxEntries = 512;

struct Result
{
	Type type;
	Value base = Value::none(); // pointer results share this dominating value
	uint64_t bits = 0;
};

struct Case
{
	uint64_t key;
	uint64_t order;
	Result result;
};

// `bits`: an integer result's bits; for a pointer result the symbol whose
// address it is, plus one (0 is null).
struct PhiIncoming
{
	uint32_t position;
	BlockId from;
	uint64_t key, bits;
};

struct PhiTable
{
	BlockId from; // the switch's block
	BlockId join;
	InstId phi;
	Type selector, result;
	const std::vector<PhiIncoming>& inputs;
	const std::vector<uint64_t>& values;
	bool powers, byte, nonnull;
};

class ReturnTables
{
public:
	explicit ReturnTables(FunctionContext& context) : c_(context), p_(context.program), b_(context.body) {}
	bool run();
	bool run_phi();
	bool run_sparse_dispatch();

private:
	bool returned(BlockId block, Result& result) const;
	bool available(Value value, BlockId block);
	bool candidate(BlockId block);
	bool phi_candidate(BlockId block);
	bool sparse_dispatch(BlockId block, InstId terminal, Instruction term);
	void rewrite_sparse_dispatch(BlockId block, InstId terminal, Instruction term, Type type, uint32_t extent,
		const std::vector<uint64_t>& cells);
	bool value_bits(Type type, Value value, uint64_t& bits) const;
	bool arm_bits(const Instruction& phi, BlockId arm, uint64_t& bits) const;
	bool partition_phi(BlockId from, const Instruction& term, Type selector, BlockId join, InstId phi,
		const std::vector<PhiIncoming>& inputs);
	void rewrite_phi_table(const Instruction& term, const PhiTable& facts);
	SymbolId table(const std::vector<uint64_t>& values, Type type);
	void rewrite(BlockId block, const Instruction& term, Type selector, uint64_t first,
		const std::vector<uint64_t>& values, const Result& result);
	Value emit(BlockId block, InstId& after, Instruction inst, Type result);
	Value number(uint64_t bits) { return integer_value(b_, integer_literal(static_cast<int64_t>(bits))); }

	FunctionContext& c_;
	Program& p_;
	FunctionBody& b_;
};

bool ReturnTables::returned(BlockId block, Result& result) const
{
	const InstId last = b_.blocks[block].last;
	if (last == kNoId || b_.instructions[last].op != Opcode::Return)
		return false;
	const Instruction& ret = b_.instructions[last];
	if ((!ret.type.is_integer() || integer_bits(ret.type.kind()) > 64) && !ret.type.is_pointer())
		return false;
	for (InstId i = b_.blocks[block].first; i != last; i = b_.instructions[i].next)
	{
		const Opcode op = b_.instructions[i].op;
		if (op != Opcode::Const && op != Opcode::Copy && op != Opcode::Addr && op != Opcode::Index)
			return false;
	}
	result.type = ret.type;
	Value value = ret.ops[0];
	if (ret.type.is_integer())
	{
		if (!value.is(ValueKind::Integer))
			return false;
		const unsigned width = integer_bits(ret.type.kind());
		const uint64_t raw = normalize_integer(ret.type, b_.literals[value.index]).low;
		// Read a smaller signed element, then restore the return type's
		// bits. Unsigned results may share that compact representation.
		const uint64_t sign = uint64_t(1) << (width - 1);
		result.bits = width == 64 ? raw : ((raw & ((sign << 1) - 1)) ^ sign) - sign;
		return true;
	}
	for (unsigned steps = 0; steps < 8 && value.is(ValueKind::Temp) && value.index >= b_.parameter_count; ++steps)
	{
		const InstId id = b_.temps[value.index].def;
		if (id == kNoId)
			break;
		const Instruction& inst = b_.instructions[id];
		if (inst.op == Opcode::Addr || (inst.op == Opcode::Copy && inst.type.is_pointer()))
			value = inst.ops[0];
		else if (inst.op == Opcode::Index && inst.ops[1].is(ValueKind::Integer))
		{
			// LowIR pointer arithmetic has the target's wrapping word size.
			result.bits += b_.literals[inst.ops[1].index].low * storage_bytes(inst.type);
			value = inst.ops[0];
		}
		else
			break;
	}
	result.base = value;
	return value.is(ValueKind::Symbol) ||
		(value.is(ValueKind::Temp) &&
			(b_.temps[value.index].type.is_pointer() || b_.temps[value.index].type.kind() == TypeKind::I64));
}

bool ReturnTables::available(Value value, BlockId block)
{
	if (value.is(ValueKind::None) || value.is(ValueKind::Symbol) || value.index < b_.parameter_count)
		return true;
	const InstId def = b_.temps[value.index].def;
	if (def == kNoId)
		return false;
	c_.entry_block_of(form_return_tables);
	const BlockId origin = c_.block_of[def];
	return origin != kNoId && c_.ensure_cfg().dominates(origin, block);
}

SymbolId ReturnTables::table(const std::vector<uint64_t>& values, Type type)
{
	uint32_t& ordinal = *c_.return_table_names;
	NameId name;
	do
	{
		const std::string spelling = "__switch_results_" + std::to_string(ordinal++);
		name = p_.names.intern(spelling.data(), static_cast<uint32_t>(spelling.size()));
	} while (p_.find_symbol(name) != kNoId);
	const SymbolId symbol = p_.symbol_for(name);
	Global global = Global();
	const uint32_t bytes = static_cast<uint32_t>(storage_bytes(type));
	global.typed = true;
	global.type = Type::object(static_cast<uint32_t>(values.size()) * bytes,
		bytes == 1       ? 0
			: bytes == 2 ? 1
			: bytes == 4 ? 2
						 : 3);
	global.init = GlobalInit::Data;
	global.first_item = static_cast<uint32_t>(p_.data_items.size());
	global.item_count = static_cast<uint32_t>(values.size());
	for (uint64_t value : values)
	{
		DataItem item = DataItem();
		if (type.is_pointer())
		{
			item.kind = value == 0 ? DataItemKind::Zero : DataItemKind::Address;
			item.type = type;
			item.address = value == 0 ? kNoId : static_cast<SymbolId>(value - 1);
			item.amount = value == 0 ? static_cast<int64_t>(bytes) : 0;
			p_.data_items.push_back(item);
			continue;
		}
		item.kind = DataItemKind::Scalar;
		item.type = type;
		item.constant.kind = ValueKind::Integer;
		item.constant.float_kind = TypeKind::Void;
		item.constant.bits = integer_literal(static_cast<int64_t>(value));
		item.address = kNoId;
		p_.data_items.push_back(item);
	}
	p_.declare_global(symbol, SymbolKind::GlobalDefinition, global);
	p_.symbols[symbol].metadata.binding = ir_model::SBM_INTERNAL;
	p_.symbols[symbol].metadata.storage = ir_model::GSM_READONLY;
	return symbol;
}

Value ReturnTables::emit(BlockId block, InstId& after, Instruction inst, Type result)
{
	const InstId id = append_instruction(b_, inst);
	const TempId temp = append_temp(b_, result, id);
	b_.instructions[id].result = temp;
	insert_after(b_, block, after, id);
	after = id;
	return Value::temp(temp);
}

void ReturnTables::rewrite(BlockId block, const Instruction& term, Type selector, uint64_t first,
	const std::vector<uint64_t>& values, const Result& result)
{
	TypeKind kind = TypeKind::I8;
	for (uint64_t bits : values)
	{
		const int64_t value = static_cast<int64_t>(bits);
		const TypeKind need = value >= -128 && value <= 127 ? TypeKind::I8
			: value >= -32768 && value <= 32767             ? TypeKind::I16
			: value >= INT32_MIN && value <= INT32_MAX      ? TypeKind::I32
															: TypeKind::I64;
		if (storage_bytes(Type::scalar(need)) > storage_bytes(Type::scalar(kind)))
			kind = need;
	}
	const Type element = Type::scalar(kind), word = Type::scalar(TypeKind::I64);
	const SymbolId data = table(values, element);
	const InstId terminal = b_.blocks[block].last;
	InstId after = previous_in_block(b_, block, terminal);
	Value index = term.ops[0];
	if (selector != word)
	{
		Instruction convert = make_instruction(
			integer_bits(selector.kind()) < 64 ? Opcode::Convert : Opcode::Copy, word);
		convert.ops[0] = index;
		if (convert.op == Opcode::Convert)
		{
			convert.sub = static_cast<uint8_t>(is_unsigned(selector.kind()) ? ConvertOp::ZExt : ConvertOp::SExt);
			set_convert_source_type(convert, selector);
		}
		convert.location = term.location;
		index = emit(block, after, convert, word);
	}
	if (first != 0)
	{
		Instruction sub = make_instruction(Opcode::Binary, word);
		sub.sub = static_cast<uint8_t>(BinaryOp::Sub);
		sub.ops[0] = index;
		sub.ops[1] = number(first);
		sub.location = term.location;
		index = emit(block, after, sub, word);
	}
	Instruction test = make_instruction(Opcode::Compare, word);
	test.sub = static_cast<uint8_t>(ComparePredicate::Ult);
	test.ops[0] = index;
	test.ops[1] = number(values.size());
	test.location = term.location;
	const Value inside = emit(block, after, test, word);
	const BlockId lookup = append_block(b_, BlockKind::SwitchCase);
	b_.layout.push_back(lookup);
	Instruction branch = make_instruction(Opcode::Branch, Type::scalar(TypeKind::Void));
	branch.ops[0] = inside;
	branch.ops[1] = Value::block(lookup);
	branch.ops[2] = term.ops[1];
	branch.location = term.location;
	b_.instructions[terminal] = branch;
	after = kNoId;
	Instruction address = make_instruction(Opcode::Index, element);
	address.ops[0] = Value::symbol(data);
	address.ops[1] = index;
	address.location = term.location;
	const Value at = emit(lookup, after, address, b_.pointer_type());
	Instruction load = make_instruction(Opcode::Load, element);
	load.ops[0] = at;
	load.location = term.location;
	Value value = emit(lookup, after, load, element);
	const Type target = result.type.is_pointer() ? word : result.type;
	if (element != target)
	{
		Instruction convert = make_instruction(Opcode::Convert, target);
		const unsigned from = integer_bits(element.kind()), to = integer_bits(target.kind());
		convert.op = from == to ? Opcode::Copy : Opcode::Convert;
		convert.ops[0] = value;
		if (convert.op == Opcode::Convert)
		{
			convert.sub = static_cast<uint8_t>(from < to ? ConvertOp::SExt : ConvertOp::Trunc);
			set_convert_source_type(convert, element);
		}
		convert.location = term.location;
		value = emit(lookup, after, convert, target);
	}
	if (result.type.is_pointer())
	{
		Value base = result.base;
		if (base.is(ValueKind::Temp) && !b_.temps[base.index].type.is_pointer())
		{
			Instruction cast = make_instruction(Opcode::Copy, result.type);
			cast.ops[0] = base;
			cast.location = term.location;
			base = emit(lookup, after, cast, result.type);
		}
		Instruction step = make_instruction(Opcode::Index, Type::scalar(TypeKind::I8));
		step.ops[0] = base;
		step.ops[1] = value;
		step.location = term.location;
		value = emit(lookup, after, step, result.type);
	}
	Instruction ret = make_instruction(Opcode::Return, result.type);
	ret.ops[0] = value;
	ret.location = term.location;
	insert_after(b_, lookup, after, append_instruction(b_, ret));
	c_.invalidate_cfg();
	c_.invalidate_block_of();
}

bool ReturnTables::candidate(BlockId block)
{
	const Instruction term = b_.instructions[b_.blocks[block].last];
	if (term.op != Opcode::Switch || term.extra_count < 2 * kMinCases || term.extra_count > 2 * kMaxEntries)
		return false;
	const Type selector = term.type.is_void() ? Type::scalar(TypeKind::I64) : term.type;
	if (!selector.is_integer() || integer_bits(selector.kind()) > 64)
		return false;
	std::vector<Case> cases;
	cases.reserve(term.extra_count / 2);
	bool varies = false;
	const uint64_t bias = is_unsigned(selector.kind()) ? 0 : uint64_t(1) << 63;
	for (uint32_t i = 0; i < term.extra_count; i += 2)
	{
		Result result;
		if (!returned(b_.operands[term.extra_first + i + 1].index, result))
			return false;
		if (!cases.empty() && (result.type != cases[0].result.type || !(result.base == cases[0].result.base)))
			return false;
		varies = varies || (!cases.empty() && result.bits != cases[0].result.bits);
		const uint64_t key = normalize_integer(selector, b_.literals[b_.operands[term.extra_first + i].index]).low;
		cases.push_back(Case{ key, key ^ bias, result });
	}
	// One common result needs a membership/range decision, not a data load.
	if (!varies)
		return false;
	std::sort(cases.begin(), cases.end(), [](const Case& a, const Case& b) { return a.order < b.order; });
	const uint64_t width = cases.back().key - cases.front().key;
	if (width >= kMaxEntries || width + 1 > cases.size() * 4 || !available(cases[0].result.base, block))
		return false;
	for (size_t i = 1; i < cases.size(); ++i)
		if (cases[i - 1].key == cases[i].key)
			return false;
	Result fallback;
	uint64_t fill = cases[0].result.bits;
	if (width + 1 != cases.size())
	{
		const BlockId otherwise = term.ops[1].index;
		if (returned(otherwise, fallback) && fallback.type == cases[0].result.type &&
			fallback.base == cases[0].result.base)
			fill = fallback.bits;
		else if (b_.blocks[otherwise].first != b_.blocks[otherwise].last ||
			b_.instructions[b_.blocks[otherwise].last].op != Opcode::Unreachable)
			return false;
	}
	std::vector<uint64_t> values(static_cast<size_t>(width + 1), fill);
	for (const Case& entry : cases)
		values[static_cast<size_t>(entry.key - cases.front().key)] = entry.result.bits;
	rewrite(block, term, selector, cases.front().key, values, cases[0].result);
	++c_.stats.folded;
	return true;
}

// A result switch may have several dense ranges separated by thousands of
// unused keys. Each range branches around its own bounded lookup table.
// Only terminal, constant-valued arms qualify: other users of the join and
// the switch default keep their original side effects.
bool ReturnTables::partition_phi(BlockId from, const Instruction& term, Type selector, BlockId join, InstId phi,
	const std::vector<PhiIncoming>& inputs)
{
	if (inputs.size() != term.extra_count / 2 || inputs.size() < 12)
		return false;
	const auto& value = b_.instructions[phi];
	const auto last = b_.blocks[join].last;
	if (value.next != last || b_.instructions[last].op != Opcode::Return || b_.instructions[last].type != value.type ||
		!(b_.instructions[last].ops[0] == Value::temp(value.result)))
		return false;
	BlockId fallback = term.ops[1].index;
	if (fallback == join)
		fallback = from;
	else
	{
		const Block& arm = b_.blocks[fallback];
		if (arm.first == kNoId || arm.first != arm.last || b_.instructions[arm.last].op != Opcode::Jump ||
			b_.instructions[arm.last].ops[0].index != join)
			return false;
	}
	const Value otherwise = phi_incoming(b_, value, fallback);
	if (!otherwise.is(ValueKind::Integer))
		return false;
	const Type result = value.type;
	const uint64_t fill = normalize_integer(result, b_.literals[otherwise.index]).low;
	std::vector<size_t> starts{ 0 };
	for (size_t i = 1; i < inputs.size(); ++i)
	{
		const auto gap = inputs[i].key - inputs[i - 1].key;
		if (!gap)
			return false;
		if (gap > 16 || inputs[i].key - inputs[starts.back()].key >= kMaxEntries)
			starts.push_back(i);
	}
	if (starts.size() < 2 || starts.size() > 8)
		return false;
	starts.push_back(inputs.size());
	for (size_t k = 0; k + 1 < starts.size(); ++k)
	{
		const auto first = starts[k], end = starts[k + 1];
		if (inputs[end - 1].key - inputs[first].key + 1 > 4 * (end - first))
			return false;
	}
	auto terminal = [&](BlockId block, const Instruction& inst) {
		insert_after(b_, block, kNoId, append_instruction(b_, inst));
	};
	auto fresh = [&]() {
		const BlockId block = append_block(b_, BlockKind::SwitchCase);
		b_.layout.push_back(block);
		return block;
	};
	const BlockId miss = fresh();
	Instruction ret = make_instruction(Opcode::Return, result);
	ret.ops[0] = otherwise;
	ret.location = term.location;
	terminal(miss, ret);
	BlockId at = from;
	for (size_t k = 0; k + 1 < starts.size(); ++k)
	{
		const size_t first = starts[k], end = starts[k + 1];
		const uint64_t low = inputs[first].key;
		std::vector<uint64_t> words(inputs[end - 1].key - low + 1, fill);
		for (size_t i = first; i < end; ++i)
			words[inputs[i].key - low] = inputs[i].bits;
		const BlockId next = k + 2 == starts.size() ? miss : fresh();
		if (next != miss)
			terminal(next, ret);
		Instruction dispatch = term;
		dispatch.ops[1] = Value::block(next);
		Result output;
		output.type = result;
		rewrite(at, dispatch, selector, low, words, output);
		at = next;
	}
	remove_phi_incoming(b_, join, from);
	++c_.stats.folded;
	return true;
}

// The bits a phi of `type` takes from `value` in a table: an integer
// literal's, or for a pointer the symbol whose address it is plus one, or 0
// for null.
bool ReturnTables::value_bits(Type type, Value value, uint64_t& bits) const
{
	if (type.is_integer() && type.kind() != TypeKind::I128)
	{
		if (!value.is(ValueKind::Integer))
			return false;
		bits = normalize_integer(type, b_.literals[value.index]).low;
		return true;
	}
	if (!type.is_pointer())
		return false;
	if (value.is(ValueKind::Symbol))
	{
		bits = static_cast<uint64_t>(value.index) + 1;
		return true;
	}
	bits = 0;
	return value.is(ValueKind::Integer) &&
		normalize_integer(Type::scalar(TypeKind::I64), b_.literals[value.index]).low == 0;
}

// The bits an arm gives the phi: a jump, or for a pointer result the
// address of a symbol and a jump.
bool ReturnTables::arm_bits(const Instruction& phi, BlockId arm, uint64_t& bits) const
{
	Value value = phi_incoming(b_, phi, arm);
	const InstId first = b_.blocks[arm].first;
	if (first != b_.blocks[arm].last)
	{
		const Instruction& addr = b_.instructions[first];
		if (!phi.type.is_pointer() || addr.op != Opcode::Addr || !value.is(ValueKind::Temp) ||
			addr.result != value.index)
			return false;
		value = addr.ops[0];
	}
	return value_bits(phi.type, value, bits);
}

bool ReturnTables::phi_candidate(BlockId block)
{
	const InstId terminal = b_.blocks[block].last;
	if (terminal == kNoId)
		return false;
	const Instruction term = b_.instructions[terminal];
	if (term.op != Opcode::Switch || term.extra_count < 8 || term.extra_count > 1024)
		return false;
	const Type selector = term.type.is_void() ? Type::scalar(TypeKind::I64) : term.type;
	if (!selector.is_integer() || integer_bits(selector.kind()) > 64)
		return false;
	c_.ensure_cfg_light();
	BlockId join = kNoId;
	InstId phi = kNoId;
	Type result;
	std::vector<PhiIncoming> inputs;
	const uint64_t bias = is_unsigned(selector.kind()) ? 0 : uint64_t(1) << 63;
	for (uint32_t k = 0; k < term.extra_count; k += 2)
	{
		const BlockId target = b_.operands[term.extra_first + k + 1].index;
		if (target == block || target == term.ops[1].index || c_.cfg.pred_count(target) != 1 ||
			c_.cfg.preds[c_.cfg.pred_first[target]] != block ||
			(c_.cfg.flags[target] & (BF_ADDRESS | BF_HANDLER | BF_EH)))
			continue;
		const Block& arm = b_.blocks[target];
		if (arm.first == kNoId || b_.instructions[arm.last].op != Opcode::Jump ||
			(arm.first != arm.last && b_.instructions[arm.first].next != arm.last))
			continue;
		const BlockId merge = b_.instructions[arm.last].ops[0].index;
		const InstId first = b_.blocks[merge].first;
		if (merge == block || merge == target || first == kNoId || b_.instructions[first].op != Opcode::Phi ||
			(b_.instructions[first].next != kNoId && b_.instructions[b_.instructions[first].next].op == Opcode::Phi) ||
			(join != kNoId && merge != join))
			continue;
		const Instruction& incoming = b_.instructions[first];
		uint64_t bits = 0;
		if (!b_.operands[term.extra_first + k].is(ValueKind::Integer) || !arm_bits(incoming, target, bits))
			continue;
		join = merge;
		phi = first;
		result = incoming.type;
		inputs.push_back(PhiIncoming{
			k, target, normalize_integer(selector, b_.literals[b_.operands[term.extra_first + k].index]).low, bits });
	}
	// Case values that go to the join with no arm between give the value the
	// phi takes from the switch's block. With them in the table that edge is
	// gone, so the default must not take it either. (A value that would widen
	// the table's elements keeps its edge.)
	const Value direct = join == kNoId || term.ops[1].index == join ? Value::none()
																	: phi_incoming(b_, b_.instructions[phi], block);
	uint64_t bits = 0;
	if (!direct.is(ValueKind::None) && value_bits(result, direct, bits))
	{
		bool byte = result.is_integer(), powers = result.is_integer();
		for (const PhiIncoming& in : inputs)
		{
			byte = byte && in.bits <= 127;
			powers = powers && in.bits != 0 && (in.bits & (in.bits - 1)) == 0;
		}
		const bool fits = (!byte && !powers) || (byte && bits <= 127) ||
			(powers && bits != 0 && (bits & (bits - 1)) == 0);
		for (uint32_t k = 0; k < term.extra_count && fits; k += 2)
			if (b_.operands[term.extra_first + k + 1].index == join &&
				b_.operands[term.extra_first + k].is(ValueKind::Integer))
				inputs.push_back(PhiIncoming{ k, block,
					normalize_integer(selector, b_.literals[b_.operands[term.extra_first + k].index]).low, bits });
	}
	if (inputs.size() < 4)
		return false;
	std::sort(inputs.begin(), inputs.end(),
		[&](const PhiIncoming& a, const PhiIncoming& b) { return (a.key ^ bias) < (b.key ^ bias); });
	const uint64_t first = inputs.front().key, span = inputs.back().key - first;
	if (span >= 512 || span + 1 > inputs.size() * 2)
		return target_model::is_aarch64(p_.target) && result.is_integer() &&
			partition_phi(block, term, selector, join, phi, inputs);
	// LowIR switches choose their first matching arm. Reject repeated keys
	// in the candidate window, including arms that are not table candidates.
	// The accepted span has at most 512 entries, so the bitmap is bounded.
	uint64_t seen[8] = {};
	for (uint32_t k = 0; k < term.extra_count; k += 2)
	{
		const Value key = b_.operands[term.extra_first + k];
		if (!key.is(ValueKind::Integer))
			return false;
		const uint64_t delta = normalize_integer(selector, b_.literals[key.index]).low - first;
		if (delta > span)
			continue;
		const uint64_t bit = uint64_t(1) << (delta & 63);
		if (seen[delta / 64] & bit)
			return false;
		seen[delta / 64] |= bit;
	}
	// (A pointer table holds addresses, and its load is not null when each is
	// that of a symbol this program defines.)
	const bool pointer = result.is_pointer();
	bool varies = false, byte = !pointer, powers = !pointer, nonnull = pointer;
	for (const PhiIncoming& in : inputs)
	{
		varies = varies || in.bits != inputs.front().bits;
		byte = byte && in.bits <= 127;
		powers = powers && in.bits != 0 && (in.bits & (in.bits - 1)) == 0;
		const SymbolKind kind = in.bits == 0 || !pointer ? SymbolKind::Unresolved : p_.symbols[in.bits - 1].kind;
		nonnull = nonnull && (kind == SymbolKind::GlobalDefinition || kind == SymbolKind::FunctionDefinition);
	}
	if (!varies)
		return false;
	std::vector<uint64_t> values(static_cast<size_t>(span + 1), 0);
	for (const PhiIncoming& in : inputs)
		values[static_cast<size_t>(in.key - first)] = powers ? static_cast<uint64_t>(__builtin_ctzll(in.bits))
															 : in.bits;
	const PhiTable facts{ block, join, phi, selector, result, inputs, values, powers, byte, nonnull };
	rewrite_phi_table(term, facts);
	++c_.stats.folded;
	return true;
}

void ReturnTables::rewrite_phi_table(const Instruction& term, const PhiTable& facts)
{
	const BlockId join = facts.join;
	const InstId phi = facts.phi;
	const Type selector = facts.selector, result = facts.result;
	const std::vector<PhiIncoming>& inputs = facts.inputs;
	const std::vector<uint64_t>& values = facts.values;
	const bool powers = facts.powers, byte = facts.byte;
	const uint64_t first = inputs.front().key;
	const Type element = byte || powers ? Type::scalar(TypeKind::I8) : result;
	const SymbolId data = table(values, element);
	const BlockId lookup = append_block(b_, BlockKind::SwitchCase);
	b_.layout.push_back(lookup);
	InstId after = kNoId;
	const Type word = Type::scalar(TypeKind::I64);
	Value index = term.ops[0];
	if (selector != word)
	{
		Instruction cast = make_instruction(integer_bits(selector.kind()) == 64 ? Opcode::Copy : Opcode::Convert, word);
		cast.ops[0] = index;
		if (cast.op == Opcode::Convert)
		{
			cast.sub = static_cast<uint8_t>(is_unsigned(selector.kind()) ? ConvertOp::ZExt : ConvertOp::SExt);
			set_convert_source_type(cast, selector);
		}
		index = emit(lookup, after, cast, word);
	}
	if (first != 0)
	{
		Instruction sub = make_instruction(Opcode::Binary, word);
		sub.sub = static_cast<uint8_t>(BinaryOp::Sub);
		sub.ops[0] = index;
		sub.ops[1] = number(first);
		index = emit(lookup, after, sub, word);
	}
	Instruction address = make_instruction(Opcode::Index, element);
	address.ops[0] = Value::symbol(data);
	address.ops[1] = index;
	const Value at = emit(lookup, after, address, b_.pointer_type());
	Instruction load = make_instruction(Opcode::Load, element);
	load.ops[0] = at;
	Value value = emit(lookup, after, load, element);
	if (element != result)
	{
		// (A byte result of the other signedness is the element's bits.)
		const unsigned to = integer_bits(result.kind());
		Instruction cast = make_instruction(to == 8 ? Opcode::Copy : Opcode::Convert, result);
		cast.ops[0] = value;
		if (cast.op == Opcode::Convert)
		{
			cast.sub = static_cast<uint8_t>(to > 8 ? ConvertOp::SExt : ConvertOp::Trunc);
			set_convert_source_type(cast, element);
		}
		value = emit(lookup, after, cast, result);
	}
	if (facts.nonnull)
	{
		Instruction copy = make_instruction(Opcode::Copy, result);
		copy.flags = IF_NONNULL;
		copy.ops[0] = value;
		value = emit(lookup, after, copy, result);
	}
	if (powers)
	{
		Instruction shift = make_instruction(Opcode::Binary, result);
		shift.sub = static_cast<uint8_t>(BinaryOp::Shl);
		shift.ops[0] = number(1);
		shift.ops[1] = value;
		value = emit(lookup, after, shift, result);
	}
	Instruction jump = make_instruction(Opcode::Jump, Type::scalar(TypeKind::Void));
	jump.ops[0] = Value::block(join);
	insert_after(b_, lookup, after, append_instruction(b_, jump));
	// Each arm the table replaces ends unreachable (the cleanup drops it): the
	// phi no longer names it, so it must not still jump to the join.
	for (const PhiIncoming& in : inputs)
	{
		b_.operands[term.extra_first + in.position + 1] = Value::block(lookup);
		remove_phi_incoming(b_, join, in.from);
		if (in.from == facts.from)
			continue;
		Instruction& end = b_.instructions[b_.blocks[in.from].last];
		end.op = Opcode::Unreachable;
		end.ops[0] = Value::none();
	}
	const Instruction old_phi = b_.instructions[phi];
	std::vector<Value> pairs(
		b_.operands.begin() + old_phi.extra_first, b_.operands.begin() + old_phi.extra_first + old_phi.extra_count);
	pairs.push_back(Value::block(lookup));
	pairs.push_back(value);
	b_.instructions[phi].extra_first = append_operands(b_, pairs.data(), static_cast<uint32_t>(pairs.size()));
	b_.instructions[phi].extra_count = static_cast<uint32_t>(pairs.size());
	c_.invalidate_cfg();
	c_.invalidate_block_of();
}

bool ReturnTables::run_phi()
{
	bool changed = false;
	const size_t count = b_.layout.size();
	for (size_t i = 0; i < count; ++i)
		changed = phi_candidate(b_.layout[i]) || changed;
	return changed;
}

bool ReturnTables::run()
{
	bool changed = false;
	const size_t count = b_.layout.size();
	for (size_t i = 0; i < count; ++i)
	{
		const BlockId block = b_.layout[i];
		const InstId last = b_.blocks[block].last;
		if (last != kNoId && b_.instructions[last].op == Opcode::Switch)
			changed = candidate(block) || changed;
	}
	return changed;
}

bool ReturnTables::sparse_dispatch(BlockId block, InstId terminal, Instruction term)
{
	const unsigned count = term.extra_count / 2;
	if (count < 10 || count > 32 || !term.ops[0].is(ValueKind::Temp))
		return false;
	const Type type = b_.temps[term.ops[0].index].type;
	const unsigned width = integer_bits(type.kind());
	if (width != 32 && width != 64)
		return false;
	const BlockId fallback = term.ops[1].index;
	const Instruction& miss = b_.instructions[b_.blocks[fallback].first];
	if (miss.op != Opcode::Return || !miss.ops[0].is_literal() || !c_.no_eh())
		return false;

	const uint64_t mask = width == 32 ? UINT32_MAX : UINT64_MAX;
	std::array<uint64_t, 32> keys;
	bool multiway = false;
	const Value first_target = b_.operands[term.extra_first + 1];
	for (unsigned n = 0; n < count; ++n)
	{
		const Value key = b_.operands[term.extra_first + 2 * n];
		const BlockId target = b_.operands[term.extra_first + 2 * n + 1].index;
		if (!key.is(ValueKind::Integer) || target == fallback ||
			b_.instructions[b_.blocks[target].first].op == Opcode::Phi)
			return false;
		keys[n] = normalize_integer(type, b_.literals[key.index]).low & mask;
		multiway = multiway || !(Value::block(target) == first_target);
	}
	if (!multiway)
		return false;
	std::array<uint64_t, 32> ordered = {};
	std::copy_n(keys.begin(), count, ordered.begin());
	std::sort(ordered.begin(), ordered.begin() + count);
	uint64_t gap = (ordered[0] - ordered[count - 1]) & mask;
	for (unsigned n = 1; n < count; ++n)
		gap = std::max(gap, ordered[n] - ordered[n - 1]);
	if (mask - gap < 8 * count)
		return false;

	for (unsigned extent = 16; extent <= 64 && extent <= 2 * count; extent *= 2)
	{
		if (extent < count)
			continue;
		uint64_t occupied = 0;
		unsigned n = 0;
		for (; n < count; ++n)
		{
			const uint64_t bit = uint64_t(1) << (keys[n] & (extent - 1));
			if (occupied & bit)
				break;
			occupied |= bit;
		}
		if (n != count)
			continue;
		// An unoccupied cell holds a key that can only index its own cell.
		std::vector<uint64_t> cells(extent, keys[0]);
		for (unsigned i = 0; i < count; ++i)
			cells[keys[i] & (extent - 1)] = keys[i];
		rewrite_sparse_dispatch(block, terminal, term, type, extent, cells);
		return true;
	}
	return false;
}

void ReturnTables::rewrite_sparse_dispatch(
	BlockId block, InstId terminal, Instruction term, Type type, uint32_t extent, const std::vector<uint64_t>& cells)
{
	const SymbolId data = table(cells, type);
	const BlockId hit = append_block(b_, BlockKind::SwitchCase);
	b_.layout.push_back(hit);
	InstId after = previous_in_block(b_, block, terminal);
	Instruction mask = make_instruction(Opcode::Binary, type);
	mask.sub = static_cast<uint8_t>(BinaryOp::And);
	mask.ops[0] = term.ops[0];
	mask.ops[1] = number(extent - 1);
	mask.location = term.location;
	const Value index = emit(block, after, mask, type);
	Instruction address = make_instruction(Opcode::Index, type);
	address.ops[0] = Value::symbol(data);
	address.ops[1] = index;
	address.location = term.location;
	const Value at = emit(block, after, address, b_.pointer_type());
	Instruction load = make_instruction(Opcode::Load, type);
	load.ops[0] = at;
	load.location = term.location;
	const Value cell = emit(block, after, load, type);
	Instruction test = make_instruction(Opcode::Compare, type);
	test.sub = static_cast<uint8_t>(ComparePredicate::Eq);
	test.ops[0] = term.ops[0];
	test.ops[1] = cell;
	test.location = term.location;
	const Value match = emit(block, after, test, Type::scalar(TypeKind::I1));
	Instruction branch = make_instruction(Opcode::Branch, Type::scalar(TypeKind::Void));
	branch.ops[0] = match;
	branch.ops[1] = Value::block(hit);
	branch.ops[2] = term.ops[1];
	branch.location = term.location;
	b_.instructions[terminal] = branch;
	term.ops[0] = index;
	for (unsigned n = 0; n < term.extra_count; n += 2)
	{
		Value& key = b_.operands[term.extra_first + n];
		const uint64_t bits = b_.literals[key.index].low;
		key = number(bits & (extent - 1));
	}
	insert_after(b_, hit, kNoId, append_instruction(b_, term));
	c_.invalidate_cfg();
	c_.invalidate_block_of();
}

bool ReturnTables::run_sparse_dispatch()
{
	if (b_.layout.size() < 8)
		return false;
	bool changed = false;
	const size_t count = b_.layout.size();
	for (size_t n = 0; n < count; ++n)
	{
		const BlockId block = b_.layout[n];
		const InstId last = b_.blocks[block].last;
		if (last != kNoId && b_.instructions[last].op == Opcode::Switch)
			changed = sparse_dispatch(block, last, b_.instructions[last]) || changed;
	}
	return changed;
}

} // namespace

bool form_phi_result_tables(FunctionContext& context)
{
	if (context.return_table_names == nullptr)
		return false;
	ReturnTables pass(context);
	return pass.run_phi();
}

bool form_return_tables(FunctionContext& context)
{
	if (context.return_table_names == nullptr)
		return false;
	ReturnTables pass(context);
	return pass.run();
}

bool guard_sparse_switches(FunctionContext& context)
{
	return ReturnTables(context).run_sparse_dispatch();
}

} // namespace opt
