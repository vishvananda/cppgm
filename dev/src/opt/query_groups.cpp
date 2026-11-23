#include <algorithm>
#include <array>

#include "lowir/builder.h"
#include "opt/interprocedural.h"
#include "opt/passes.h"
#include "opt/scalar_fold.h"

namespace opt {

using namespace lowir;

namespace {

struct QueryPrefix
{
	const FunctionBody* body;
	InstId test;
	TempId key;
	Value observed;
	Type type;
};

bool false_result(const FunctionBody& body, BlockId block)
{
	const Block& target = body.blocks[block];
	if (target.first == kNoId || target.first != target.last)
		return false;
	const Instruction& ret = body.instructions[target.first];
	return ret.op == Opcode::Return && ret.ops[0].is(ValueKind::Integer) && body.literals[ret.ops[0].index].low == 0 &&
		body.literals[ret.ops[0].index].high == 0;
}

QueryPrefix query_prefix(const Program& program, SymbolId symbol)
{
	const Symbol& name = program.symbols[symbol];
	if (name.kind != SymbolKind::FunctionDefinition || name.metadata.binding != ir_model::SBM_INTERNAL ||
		(name.metadata.flags & SF_REPLACEABLE))
		return {};
	const Function& function = program.functions[name.detail];
	if (function.body == nullptr)
		return {};
	const Signature& signature = program.signatures[function.signature];
	if (!signature.result.is_integer() || signature.boundary.arity != ir_model::CAM_FIXED ||
		signature.parameter_count < 2 || signature.parameter_count > 6)
		return {};
	const Parameter* parameters = program.parameters_of(signature);
	for (uint32_t n = 0; n < signature.parameter_count; ++n)
		if (!parameters[n].type.is_pointer() &&
			(!parameters[n].type.is_integer() || storage_bytes(parameters[n].type) > 8))
			return {};
	const FunctionBody& body = *function.body;
	if (body.layout.size() > 8 || body.layout.size() < 3 || !body.code_labels.empty())
		return {};
	const Block& entry = body.blocks[body.layout.front()];
	const Instruction& branch = body.instructions[entry.last];
	if (branch.op != Opcode::Branch || !branch.ops[0].is(ValueKind::Temp))
		return {};
	const InstId test = body.temps[branch.ops[0].index].def;
	if (test == kNoId)
		return {};
	const Instruction& compare = body.instructions[test];
	const auto predicate = static_cast<ComparePredicate>(compare.sub);
	if (compare.op != Opcode::Compare || (predicate != ComparePredicate::Eq && predicate != ComparePredicate::Ne) ||
		!compare.type.is_integer() || storage_bytes(compare.type) > 8 || compare.next != entry.last ||
		!false_result(body, branch.ops[predicate == ComparePredicate::Eq ? 2 : 1].index))
		return {};
	for (unsigned at = 0; at < 2; ++at)
	{
		const Value key = compare.ops[at], observed = compare.ops[1 - at];
		if (!key.is(ValueKind::Temp) || key.index >= signature.parameter_count ||
			program.parameters_of(signature)[key.index].type != compare.type || !observed.is(ValueKind::Temp) ||
			observed.index < signature.parameter_count)
			continue;
		unsigned rows = 0;
		std::array<TempId, 16> definitions{};
		for (InstId id = entry.first; id != test; id = body.instructions[id].next)
		{
			if (id == kNoId || rows == definitions.size())
				return {};
			const Instruction& inst = body.instructions[id];
			if (inst.result == kNoId || inst.extra_count || (inst.flags & IF_VOLATILE) || inst.type.is_float() ||
				(inst.op == Opcode::Convert && convert_source_type(inst).is_float()) ||
				(inst.op != Opcode::Load &&
					(!is_pure(inst) || inst.op == Opcode::FrameAddress || inst.op == Opcode::Phi ||
						inst.op == Opcode::Vector)))
				return {};
			for (Value operand : inst.ops)
			{
				if (operand == key || operand.is(ValueKind::Slot) || operand.is(ValueKind::Block))
					return {};
				if (operand.is(ValueKind::Temp) && operand.index >= signature.parameter_count &&
					std::find(definitions.begin(), definitions.begin() + rows, operand.index) ==
						definitions.begin() + rows)
					return {};
			}
			definitions[rows++] = inst.result;
		}
		if (std::find(definitions.begin(), definitions.begin() + rows, observed.index) == definitions.begin() + rows)
			return {};
		return { &body, test, key.index, observed, compare.type };
	}
	return {};
}

bool plain_successor(const FunctionBody& body, BlockId block)
{
	const InstId first = body.blocks[block].first;
	return first != kNoId && body.instructions[first].op != Opcode::Phi;
}

InstId branching_call(const FunctionBody& body, BlockId block, bool entire)
{
	const InstId tail = body.blocks[block].last;
	if (tail == kNoId || body.instructions[tail].op != Opcode::Branch)
		return kNoId;
	const Value result = body.instructions[tail].ops[0];
	if (!result.is(ValueKind::Temp))
		return kNoId;
	const InstId call = body.temps[result.index].def;
	if (call == kNoId || (entire && body.blocks[block].first != call))
		return kNoId;
	const Instruction& inst = body.instructions[call];
	return inst.op == Opcode::Call && inst.next == tail && !(inst.flags & IF_SIGNATURE) &&
			inst.ops[0].is(ValueKind::Symbol)
		? call
		: kNoId;
}

bool matches_query(const FunctionBody& body, const Instruction& first, const Instruction& later, TempId key)
{
	if (!(later.ops[0] == first.ops[0]) || first.extra_count != later.extra_count)
		return false;
	for (TempId n = 0; n < first.extra_count; ++n)
	{
		const Value argument = body.operands[later.extra_first + n];
		if (n == key ? !argument.is(ValueKind::Integer) : !(argument == body.operands[first.extra_first + n]))
			return false;
	}
	return true;
}

void emit_query_guard(FunctionBody& body, BlockId block, BlockId skip, InstId call_id, const QueryPrefix& prefix,
	std::vector<Value>& keys)
{
	const Instruction call = body.instructions[call_id];
	const InstId prior = previous_in_block(body, block, call_id);
	const BlockId replay = append_block(body, BlockKind::Split);
	body.blocks[replay].first = call_id;
	body.blocks[replay].last = body.blocks[block].last;
	const auto position = std::find(body.layout.begin(), body.layout.end(), block);
	body.layout.insert(position + 1, replay);
	body.blocks[block].last = prior;
	if (prior == kNoId)
		body.blocks[block].first = kNoId;
	else
		body.instructions[prior].next = kNoId;

	const FunctionBody& callee = *prefix.body;
	std::vector<Value> values(callee.temps.size());
	for (uint32_t n = 0; n < callee.parameter_count; ++n)
		values[n] = body.operands[call.extra_first + n];
	InstId tail = prior;
	for (InstId id = callee.blocks[callee.layout.front()].first; id != prefix.test; id = callee.instructions[id].next)
	{
		Instruction inst = callee.instructions[id];
		for (Value& v : inst.ops)
		{
			if (v.is(ValueKind::Temp))
				v = values[v.index];
			else if (v.is_literal())
			{
				Constant c;
				literal_constant(callee, v, c);
				v = literal_value(body, c.kind, c.float_kind, c.bits);
			}
		}
		inst.location = call.location;
		const InstId copy = append_instruction(body, inst);
		const TempId temp = append_temp(body, callee.temps[inst.result].type, copy);
		body.instructions[copy].result = temp;
		values[inst.result] = Value::temp(temp);
		insert_after(body, block, tail, copy);
		tail = copy;
	}
	std::vector<Value> cases;
	for (Value key : keys)
	{
		cases.push_back(key);
		cases.push_back(Value::block(replay));
	}
	Instruction branch = make_instruction(Opcode::Switch, prefix.type);
	branch.ops[0] = values[prefix.observed.index];
	branch.ops[1] = Value::block(skip);
	branch.extra_first = append_operands(body, cases.data(), cases.size());
	branch.extra_count = cases.size();
	branch.location = call.location;
	insert_after(body, block, tail, append_instruction(body, branch));
}

bool group_queries(Program& program, FunctionBody& body, SymbolId owner)
{
	if (body.layout.size() < 5 || !body.code_labels.empty())
		return false;
	for (BlockId block : body.layout)
	{
		const InstId id = branching_call(body, block, false);
		if (id == kNoId)
			continue;
		const Instruction& first = body.instructions[id];
		const SymbolId symbol = first.ops[0].index;
		if (symbol == owner)
			continue;
		const QueryPrefix prefix = query_prefix(program, symbol);
		if (prefix.body == nullptr || first.extra_count != prefix.body->parameter_count)
			continue;
		const Instruction& branch = body.instructions[first.next];
		BlockId next = branch.ops[2].index;
		const Value key = body.operands[first.extra_first + prefix.key];
		if (!key.is(ValueKind::Integer) || next == block || !plain_successor(body, next) ||
			!plain_successor(body, branch.ops[1].index))
			continue;
		std::vector<Value> keys{ key };
		std::vector<BlockId> visited{ block };
		std::vector<TempId> results{ first.result };
		while (keys.size() < 8)
		{
			if (std::find(visited.begin(), visited.end(), next) != visited.end())
				break;
			const InstId later = branching_call(body, next, true);
			if (later == kNoId || !matches_query(body, first, body.instructions[later], prefix.key))
				break;
			keys.push_back(body.operands[body.instructions[later].extra_first + prefix.key]);
			visited.push_back(next);
			results.push_back(body.instructions[later].result);
			next = body.instructions[body.instructions[later].next].ops[2].index;
		}
		if (keys.size() < 3 || !plain_successor(body, next) ||
			std::find(visited.begin(), visited.end(), next) != visited.end())
			continue;
		std::vector<uint32_t> uses;
		count_uses(body, uses);
		if (std::any_of(results.begin(), results.end(), [&](TempId result) { return uses[result] != 1; }))
			continue;
		// The guard is the first query's effect-free work. A miss proves
		// every skipped call would have taken its immediate zero return.
		// Otherwise replay the entire original chain in its original order.
		if (std::any_of(body.instructions.begin(), body.instructions.end(),
				[](const Instruction& inst) { return is_eh_instruction(inst.op); }))
			return false;
		emit_query_guard(body, block, next, id, prefix, keys);
		return true;
	}
	return false;
}

} // namespace

bool share_query_misses(Program& program, const std::function<void(SymbolId)>& simplify)
{
	bool changed = false;
	for (SymbolId symbol = 0; symbol < program.symbols.size(); ++symbol)
	{
		const Symbol& name = program.symbols[symbol];
		if (name.kind != SymbolKind::FunctionDefinition || (name.metadata.flags & SF_COLD) ||
			program.functions[name.detail].body == nullptr)
			continue;
		FunctionBody& body = *program.functions[name.detail].body;
		if (group_queries(program, body, symbol))
		{
			compact_body(program, body);
			simplify(symbol);
			changed = true;
		}
	}
	return changed;
}

} // namespace opt
