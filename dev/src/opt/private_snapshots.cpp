#include <algorithm>
#include <array>
#include "lowir/builder.h"

#include "opt/interprocedural.h"
#include "opt/loops.h"
#include "opt/passes.h"
#include "opt/scalar_fold.h"

namespace opt {

using namespace lowir;

namespace {

struct SnapshotRead
{
	InstId inst;
	uint32_t word;
};

struct SnapshotSite
{
	uint32_t caller;
	BlockId block;
	InstId call;
};

struct SnapshotPlan
{
	uint32_t parameter = kNoId;
	InstId copy = kNoId;
	std::array<Type, 4> words{};
	std::vector<SnapshotRead> reads;
	std::vector<SnapshotSite> sites;
	bool blocked = false;
};

bool snapshot_words(const FunctionBody& body, Value home, unsigned bytes, SnapshotPlan& plan)
{
	const Value incoming = Value::temp(plan.parameter);
	for (BlockId block : body.layout)
		for (InstId id = body.blocks[block].first; id != kNoId; id = body.instructions[id].next)
		{
			const Instruction& inst = body.instructions[id];
			if (id == plan.copy)
				continue;
			if (inst.op == Opcode::FrameAddress || inst.op == Opcode::Asm)
				return false;
			bool uses_home = false, uses_incoming = false;
			for_each_operand(body, inst, [&](Value v) {
				const Value root = locate(body, v).root;
				uses_home = uses_home || root == home;
				uses_incoming = uses_incoming || root == incoming;
			});
			if (uses_incoming)
				return false;
			if (!uses_home)
				continue;
			if (inst.result != kNoId && locate(body, Value::temp(inst.result)).root == home)
				continue;
			const Located at = locate(body, inst.ops[0]);
			if (inst.op != Opcode::Load || (inst.flags & IF_VOLATILE) || !(at.root == home) || !at.known ||
				at.offset < 0 || (at.offset & 7) || static_cast<uint64_t>(at.offset) >= bytes ||
				storage_bytes(inst.type) != 8 || (!inst.type.is_integer() && !inst.type.is_pointer()))
				return false;
			const auto word = static_cast<uint32_t>(at.offset) / 8;
			if (!plan.words[word].is_void() && plan.words[word] != inst.type)
				return false;
			plan.words[word] = inst.type;
			plan.reads.push_back({ id, word });
		}
	return !plan.reads.empty();
}

bool snapshot_plan(const Program& program, SymbolId symbol, SnapshotPlan& plan)
{
	const Function& f = program.functions[program.symbols[symbol].detail];
	const FunctionBody& body = *f.body;
	const Signature& signature = program.signatures[f.signature];
	if (!body.locations.empty() || body.layout.empty() || !body.code_labels.empty() ||
		signature.boundary.arity != ir_model::CAM_FIXED || signature.parameter_count > 5)
		return false;
	const Parameter* params = program.parameters_of(signature);
	for (uint32_t p = 0; p < signature.parameter_count; ++p)
	{
		const Type type = params[p].type;
		if (params[p].pass == ir_model::PPM_DIRECT && type.is_object() && (type.bytes == 24 || type.bytes == 32))
		{
			if (plan.parameter != kNoId)
				return false;
			plan.parameter = p;
		}
		else if (!type.is_pointer() && (!type.is_integer() || storage_bytes(type) > 8))
			return false;
	}
	if (plan.parameter == kNoId)
		return false;
	// The caller owns the snapshot up to the call. In the callee the only
	// use of the incoming object is making a local copy whose address stays
	// private, even on an exceptional exit.

	const unsigned bytes = params[plan.parameter].type.bytes;
	for (InstId i = body.blocks[body.layout.front()].first; i != kNoId; i = body.instructions[i].next)
	{
		const Instruction& inst = body.instructions[i];
		if (inst.op == Opcode::CopyObject && inst.immediate == bytes && !(inst.flags & IF_VOLATILE) &&
			inst.ops[0] == Value::temp(plan.parameter))
		{
			const Located to = locate(body, inst.ops[1]);
			if (to.root.is(ValueKind::Slot) && to.known && to.offset == 0 &&
				body.slots[to.root.index].type.bytes == bytes)
			{
				plan.copy = i;
				if (!snapshot_words(body, to.root, bytes, plan))
					return false;
				unsigned words = 0;
				for (Type word : plan.words)
					words += !word.is_void();
				// Filling more argument registers pays only when a word
				// of the original snapshot can be omitted.
				return words < bytes / 8 && signature.parameter_count - 1 + words <= 6;
			}
			return false;
		}
		if (!is_pure(inst) || inst.op == Opcode::FrameAddress)
			break;
	}
	return false;
}

std::array<TempId, 4> rewrite_snapshot(Program& program, Function& function, const SnapshotPlan& plan)
{
	FunctionBody& body = *function.body;
	const BlockId entry = body.layout.front();
	unlink_after(body, entry, previous_in_block(body, entry, plan.copy), plan.copy);
	Signature signature = program.signatures[function.signature];
	const Parameter* params = program.parameters_of(signature);
	std::vector<Parameter> parameters;
	std::vector<Temp> temps;
	std::vector<TempId> map(body.temps.size(), kNoId);
	std::array<TempId, 4> fields{};
	for (TempId t = 0; t < body.temps.size(); ++t)
	{
		if (t == plan.parameter)
		{
			for (uint32_t w = 0; w < plan.words.size(); ++w)
				if (!plan.words[w].is_void())
				{
					Parameter param{};
					param.type = plan.words[w];
					parameters.push_back(param);
					fields[w] = temps.size();
					Temp temp{};
					temp.type = param.type;
					temp.def = kNoId;
					temps.push_back(temp);
				}
			continue;
		}
		if (t < signature.parameter_count)
			parameters.push_back(params[t]);
		map[t] = temps.size();
		temps.push_back(body.temps[t]);
	}
	signature.first_parameter = program.parameters.size();
	signature.parameter_count = parameters.size();
	program.parameters.insert(program.parameters.end(), parameters.begin(), parameters.end());
	function.signature = program.add_signature(signature);
	body.temps.swap(temps);
	body.parameter_count = signature.parameter_count;
	for (BlockId block : body.layout)
		for (InstId i = body.blocks[block].first; i != kNoId; i = body.instructions[i].next)
		{
			Instruction& inst = body.instructions[i];
			if (inst.result != kNoId)
				inst.result = map[inst.result];
			for_each_operand(body, inst, [&](Value& value) {
				if (value.is(ValueKind::Temp))
					value.index = map[value.index];
			});
		}
	return fields;
}

Value emit_snapshot_value(FunctionBody& body, BlockId block, InstId& tail, Instruction inst, Type type)
{
	const InstId id = append_instruction(body, inst);
	const TempId temp = append_temp(body, type, id);
	body.instructions[id].result = temp;
	insert_after(body, block, tail, id);
	tail = id;
	return Value::temp(temp);
}

void load_snapshot_arguments(FunctionBody& body, const SnapshotSite& site, const SnapshotPlan& plan)
{
	const Instruction call = body.instructions[site.call];
	const Value slot = body.operands[call.extra_first + plan.parameter];
	InstId tail = previous_in_block(body, site.block, site.call);
	std::vector<Value> arguments;
	for (uint32_t p = 0; p < call.extra_count; ++p)
	{
		if (p != plan.parameter)
		{
			arguments.push_back(body.operands[call.extra_first + p]);
			continue;
		}
		Instruction addr = make_instruction(Opcode::Addr, body.pointer_type());
		addr.ops[0] = slot;
		addr.location = call.location;
		const Value base = emit_snapshot_value(body, site.block, tail, addr, body.pointer_type());
		for (unsigned word = 0; word < plan.words.size(); ++word)
		{
			const Type type = plan.words[word];
			if (type.is_void())
				continue;
			Value address = base;
			if (word != 0)
			{
				Instruction offset = make_instruction(Opcode::Index, Type::scalar(TypeKind::U8));
				offset.ops[0] = base;
				offset.ops[1] = integer_value(body, integer_literal(word * 8));
				offset.location = call.location;
				address = emit_snapshot_value(body, site.block, tail, offset, body.pointer_type());
			}
			Instruction load = make_instruction(Opcode::Load, type);
			load.ops[0] = address;
			load.location = call.location;
			arguments.push_back(emit_snapshot_value(body, site.block, tail, load, type));
		}
	}
	body.instructions[site.call].extra_first = append_operands(body, arguments.data(), arguments.size());
	body.instructions[site.call].extra_count = arguments.size();
}

} // namespace

bool scalarize_private_snapshots(Program& program, const std::function<void(SymbolId)>& simplify)
{
	if (program.assembly)
		return false;
	std::vector<SnapshotPlan> plans;
	std::vector<SymbolId> symbols;
	for (SymbolId symbol : program.order)
	{
		const Symbol& entry = program.symbols[symbol];
		if (entry.kind != SymbolKind::FunctionDefinition || entry.metadata.binding != ir_model::SBM_INTERNAL ||
			!discardable(program, symbol) || program.functions[entry.detail].body == nullptr)
			continue;
		SnapshotPlan plan;
		if (snapshot_plan(program, symbol, plan))
		{
			symbols.push_back(symbol);
			plans.push_back(std::move(plan));
		}
	}
	if (plans.empty())
		return false;
	CallGraph graph;
	build_call_graph(program, graph);
	std::vector<uint32_t> targets(graph.functions.size(), kNoId);
	for (uint32_t i = 0; i < symbols.size(); ++i)
	{
		const uint32_t f = graph.function_of(symbols[i]);
		if (f != kNoId && !graph.observed[f] && !graph.recursive[f] && graph.calls_in[f])
			targets[f] = i;
	}
	std::vector<uint8_t> changed(graph.functions.size());
	for (uint32_t f = 0; f < graph.functions.size(); ++f)
	{
		const FunctionBody& body = *program.functions[program.symbols[graph.functions[f]].detail].body;
		for (BlockId block : body.layout)
			for (InstId i = body.blocks[block].first; i != kNoId; i = body.instructions[i].next)
			{
				const Instruction& call = body.instructions[i];
				if (call.op != Opcode::Call || !call.ops[0].is(ValueKind::Symbol))
					continue;
				const auto g = graph.function_of(call.ops[0].index);
				if (g == kNoId || targets[g] == kNoId)
					continue;
				SnapshotPlan& plan = plans[targets[g]];
				const Function& callee = program.functions[program.symbols[graph.functions[g]].detail];
				const Signature& signature = program.signatures[callee.signature];
				const bool stated_abi = std::any_of(body.argument_facts.begin(), body.argument_facts.end(),
					[&](const ArgumentFacts& facts) { return facts.call == i; });
				if ((call.flags & IF_SIGNATURE) || call.extra_count != signature.parameter_count || stated_abi)
				{
					plan.blocked = true;
					continue;
				}
				const Value slot = body.operands[call.extra_first + plan.parameter];
				if (!slot.is(ValueKind::Slot) ||
					body.slots[slot.index].type != program.parameters_of(signature)[plan.parameter].type)
					plan.blocked = true;
				else
					plan.sites.push_back({ f, block, i });
			}
	}
	bool any = false;
	for (uint32_t f = 0; f < graph.functions.size(); ++f)
	{
		if (targets[f] == kNoId)
			continue;
		const SnapshotPlan& plan = plans[targets[f]];
		if (plan.blocked || plan.sites.empty())
			continue;
		Function& function = program.functions[program.symbols[graph.functions[f]].detail];
		const auto fields = rewrite_snapshot(program, function, plan);
		for (const SnapshotRead& read : plan.reads)
		{
			Instruction& load = function.body->instructions[read.inst];
			load.op = Opcode::Copy;
			load.ops[0] = Value::temp(fields[read.word]);
			load.flags = 0;
		}
		changed[f] = true;
		any = true;
		for (const SnapshotSite& site : plan.sites)
		{
			load_snapshot_arguments(
				*program.functions[program.symbols[graph.functions[site.caller]].detail].body, site, plan);
			changed[site.caller] = true;
		}
	}
	for (uint32_t f : graph.bottom_up)
		if (changed[f])
			simplify(graph.functions[f]);
	return any;
}

} // namespace opt
