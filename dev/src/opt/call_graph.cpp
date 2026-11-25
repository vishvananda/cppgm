#include "opt/call_graph.h"

#include <algorithm>
#include <cstring>

#include "opt/function_ir.h"
#include "lowir/assembly.h"

namespace opt {

using namespace lowir;

namespace {

bool is_definition(const Program& program, SymbolId s)
{
	const Symbol& symbol = program.symbols[s];
	return symbol.kind == SymbolKind::FunctionDefinition && program.functions[symbol.detail].body != nullptr;
}

template<typename Mark>
void mark_initializer(const Program& program, const Symbol& symbol, const Mark& mark)
{
	const Global& global = program.globals[symbol.detail];
	if (global.init == GlobalInit::Address)
		mark(global.address);
	if (global.init == GlobalInit::Data)
		for (uint32_t k = 0; k < global.item_count; ++k)
		{
			const DataItem& item = program.data_items[global.first_item + k];
			if (item.has_address())
				mark(item.address);
		}
}

bool private_constant_data(const Symbol& symbol)
{
	const SymbolMetadata& m = symbol.metadata;
	return symbol.kind == SymbolKind::GlobalDefinition && m.binding == ir_model::SBM_INTERNAL &&
		m.linkage == ir_model::LLM_C && m.storage == ir_model::GSM_READONLY && m.role == ir_model::SR_NONE &&
		m.section == 0 && m.object == 0 && (m.flags & (SF_OBJECT_ROOT | SF_REPLACEABLE)) == 0;
}

bool private_c_data(const Symbol& symbol)
{
	const SymbolMetadata& m = symbol.metadata;
	return symbol.kind == SymbolKind::GlobalDefinition && m.binding == ir_model::SBM_INTERNAL &&
		m.linkage == ir_model::LLM_C && (m.storage == ir_model::GSM_DEFAULT || m.storage == ir_model::GSM_READONLY) &&
		m.role == ir_model::SR_NONE && m.section == 0 && m.object == 0 &&
		(m.flags & (SF_OBJECT_ROOT | SF_REPLACEABLE)) == 0;
}

// Marks opaque symbol references outside ordinary optimized bodies.
template<typename Mark>
void mark_data_references(
	const Program& program, Mark mark, const std::vector<SymbolId>& targets, bool follow_all_initializers = true)
{
	// Code addresses retain their containing function and its ABI. Static
	// dispatch tables can keep it alive without an ordinary call edge.
	for (SymbolId s : program.order)
		if (is_definition(program, s) && !program.functions[program.symbols[s].detail].body->code_labels.empty())
			mark(s);
	if (follow_all_initializers)
		for (const Symbol& symbol : program.symbols)
			if (symbol.kind == SymbolKind::GlobalDefinition)
				mark_initializer(program, symbol, mark);
	// Raw bodies are not analyzed for calls or argument/return facts. A typed
	// symbol input nevertheless observes its target's identity and full ABI.
	if (program.assembly)
	{
		for (const AssemblyGlobal& global : program.assembly->globals)
			for (const Value value : global.arguments)
				if (value.kind == ValueKind::Symbol)
					mark(value.index);
		for (const AssemblyFunction& function : program.assembly->functions)
			for (const Value value : function.body->operands)
				if (value.kind == ValueKind::Symbol)
					mark(value.index);
		if (!program.assembly->globals.empty() || !program.assembly->functions.empty())
			for (SymbolId symbol : program.order)
				if (is_definition(program, symbol) && program.literal_assembly_root(symbol))
					mark(symbol);
	}
	// An explicit alias declaration exposes its target under an independently
	// bound object name. Keep that body/ABI even if no instruction names it;
	// this compiler root does not require retaining dead code at final linking.
	for (SymbolId id : program.order)
		if (!targets.empty() && targets[id] != kNoId && program.symbols[id].metadata.binding != ir_model::SBM_INTERNAL)
			mark(targets[id]);
}

} // namespace

void build_call_graph(const Program& program, CallGraph& graph, bool forced_calls_only)
{
	graph.functions.clear();
	graph.index_of.assign(program.symbols.size(), kNoId);
	for (SymbolId s : program.order)
		if (is_definition(program, s) && graph.index_of[s] == kNoId)
		{
			graph.index_of[s] = static_cast<uint32_t>(graph.functions.size());
			graph.functions.push_back(s);
		}
	const uint32_t n = static_cast<uint32_t>(graph.functions.size());
	graph.callee_first.assign(n + 1, 0);
	graph.callees.clear();
	graph.calls_in.assign(n, 0);
	graph.observed.assign(n, 0);
	std::vector<SymbolId> aliases;
	if (!program.aliases.empty() && object_alias_targets(program, {}, aliases) != kNoId)
		aliases.clear();

	auto observe = [&](SymbolId s) {
		if (!aliases.empty() && s < aliases.size() && aliases[s] != kNoId)
			s = aliases[s];
		if (s < graph.index_of.size() && graph.index_of[s] != kNoId)
			graph.observed[graph.index_of[s]] = 1;
	};
	for (uint32_t f = 0; f < n; ++f)
	{
		graph.callee_first[f] = static_cast<uint32_t>(graph.callees.size());
		const Symbol& symbol = program.symbols[graph.functions[f]];
		if (symbol.metadata.role != ir_model::SR_NONE || (symbol.metadata.flags & SF_OBJECT_ROOT) != 0 ||
			(symbol.metadata.flags & SF_REPLACEABLE) != 0)
			graph.observed[f] = 1;
		const FunctionBody& body = *program.functions[symbol.detail].body;
		for (BlockId b : body.layout)
			for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
			{
				const Instruction& inst = body.instructions[i];
				if (forced_calls_only)
				{
					if (inst.op == Opcode::Call && inst.ops[0].is(ValueKind::Symbol) &&
						(program.symbols[inst.ops[0].index].metadata.flags & SF_FORCE_INLINE) != 0 &&
						graph.index_of[inst.ops[0].index] != kNoId)
					{
						const uint32_t callee = graph.index_of[inst.ops[0].index];
						graph.callees.push_back(callee);
						++graph.calls_in[callee];
					}
					continue;
				}
				uint32_t position = 0;
				for_each_operand(body, inst, [&](const Value& v) {
					const uint32_t at = position++;
					if (!v.is(ValueKind::Symbol))
						return;
					if (inst.op == Opcode::Call && at == 0 && graph.index_of[v.index] != kNoId)
					{
						graph.callees.push_back(graph.index_of[v.index]);
						++graph.calls_in[graph.index_of[v.index]];
					}
					else
						observe(v.index);
				});
			}
	}
	graph.callee_first[n] = static_cast<uint32_t>(graph.callees.size());
	// Distinct calling functions per callee (a function's sites count once).
	graph.callers_in.assign(n, 0);
	{
		std::vector<uint32_t> last(n, kNoId);
		for (uint32_t f = 0; f < n; ++f)
			for (uint32_t k = graph.callee_first[f]; k < graph.callee_first[f + 1]; ++k)
				if (last[graph.callees[k]] != f)
				{
					last[graph.callees[k]] = f;
					++graph.callers_in[graph.callees[k]];
				}
	}
	if (!forced_calls_only)
		mark_data_references(program, observe, aliases);
	// Tarjan's SCCs, iteratively; components finish callees first.
	graph.component.assign(n, kNoId);
	graph.recursive.assign(n, 0);
	graph.bottom_up.clear();
	std::vector<uint32_t> number(n, kNoId), low(n, 0), stack;
	std::vector<uint8_t> on_stack(n, 0);
	std::vector<std::pair<uint32_t, uint32_t>> frames;
	uint32_t counter = 0, components = 0;
	for (uint32_t root = 0; root < n; ++root)
	{
		if (number[root] != kNoId)
			continue;
		frames.push_back(std::make_pair(root, graph.callee_first[root]));
		number[root] = low[root] = counter++;
		stack.push_back(root);
		on_stack[root] = 1;
		while (!frames.empty())
		{
			const uint32_t f = frames.back().first;
			uint32_t& next = frames.back().second;
			if (next < graph.callee_first[f + 1])
			{
				const uint32_t g = graph.callees[next++];
				if (g == f)
					graph.recursive[f] = 1;
				if (number[g] == kNoId)
				{
					number[g] = low[g] = counter++;
					stack.push_back(g);
					on_stack[g] = 1;
					frames.push_back(std::make_pair(g, graph.callee_first[g]));
				}
				else if (on_stack[g] && number[g] < low[f])
					low[f] = number[g];
				continue;
			}
			frames.pop_back();
			if (!frames.empty() && low[f] < low[frames.back().first])
				low[frames.back().first] = low[f];
			if (low[f] != number[f])
				continue;
			const size_t base = stack.size();
			size_t first = base;
			while (true)
			{
				--first;
				if (stack[first] == f)
					break;
			}
			const bool cycle = base - first > 1;
			for (size_t k = first; k < base; ++k)
			{
				const uint32_t g = stack[k];
				on_stack[g] = 0;
				graph.component[g] = components;
				if (cycle)
					graph.recursive[g] = 1;
			}
			// Members in program order within the component.
			std::vector<uint32_t> members(stack.begin() + first, stack.end());
			std::sort(members.begin(), members.end());
			graph.bottom_up.insert(graph.bottom_up.end(), members.begin(), members.end());
			stack.resize(first);
			++components;
		}
	}
}

bool discardable(const Program& program, SymbolId symbol)
{
	// A thread-local wrapper (tls_for) is an ABI entry other units call
	// without defining it.
	const SymbolMetadata& m = program.symbols[symbol].metadata;
	return (m.binding == ir_model::SBM_WEAK || m.binding == ir_model::SBM_INTERNAL) && m.role == ir_model::SR_NONE &&
		(m.flags & (SF_OBJECT_ROOT | SF_REPLACEABLE)) == 0 && m.tls_for == kNoId;
}

bool this_adjusting_thunk(const Program& program, SymbolId symbol)
{
	const NameId object = program.symbols[symbol].metadata.object;
	if (object == 0 || program.names.length(object) < 4)
		return false;
	const char* spelling = program.spelling(object);
	return std::strncmp(spelling, "_ZTh", 4) == 0 || std::strncmp(spelling, "_ZTv", 4) == 0;
}

bool prune_private_constant_data(Program& program)
{
	if (program.debug || std::none_of(program.order.begin(), program.order.end(), [&](SymbolId id) {
			return private_constant_data(program.symbols[id]);
		}))
		return false;
	std::vector<uint8_t> live(program.symbols.size(), 0);
	std::vector<SymbolId> work;
	const auto mark = [&](SymbolId id) {
		if (id < live.size() && !live[id] && program.symbols[id].kind == SymbolKind::GlobalDefinition)
		{
			live[id] = 1;
			work.push_back(id);
		}
	};
	const auto operand = [&](const Value& value) {
		if (value.kind == ValueKind::Symbol)
			mark(value.index);
	};
	for (SymbolId id : program.order)
	{
		const Symbol& symbol = program.symbols[id];
		if (symbol.kind == SymbolKind::GlobalDefinition && !private_constant_data(symbol))
			mark(id);
		if (!is_definition(program, id))
			continue;
		const FunctionBody& body = *program.functions[symbol.detail].body;
		for (BlockId b : body.layout)
			for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
				for_each_operand(body, body.instructions[i], operand);
	}
	for (const ObjectAlias& alias : program.aliases)
		mark(alias.target);
	if (program.assembly)
	{
		for (const auto& global : program.assembly->globals)
			for (const auto& argument : global.arguments)
				operand(argument);
		for (const auto& function : program.assembly->functions)
			for (const auto& argument : function.body->operands)
				operand(argument);
	}
	while (!work.empty())
	{
		const SymbolId id = work.back();
		work.pop_back();
		mark_initializer(program, program.symbols[id], mark);
	}
	const size_t old_size = program.order.size();
	size_t kept = 0;
	for (SymbolId id : program.order)
	{
		Symbol& symbol = program.symbols[id];
		if (!live[id] && private_constant_data(symbol))
		{
			program.globals[symbol.detail].init = GlobalInit::Zero;
			symbol.kind = SymbolKind::GlobalDeclaration;
		}
		else
			program.order[kept++] = id;
	}
	program.order.resize(kept);
	return kept != old_size;
}

uint32_t prune_unreachable(Program& program, OptimizerStats& stats, bool include_private_data)
{
	std::vector<uint8_t> live(program.symbols.size(), 0);
	std::vector<SymbolId> work;
	std::vector<SymbolId> aliases;
	if (!program.aliases.empty() && object_alias_targets(program, {}, aliases) != kNoId)
		aliases.clear();

	auto mark = [&](SymbolId s) {
		while (s < live.size() && !live[s])
		{
			live[s] = 1;
			if (is_definition(program, s) ||
				(include_private_data && program.symbols[s].kind == SymbolKind::GlobalDefinition))
				work.push_back(s);
			if (aliases.empty() || aliases[s] == kNoId)
				break;
			s = aliases[s];
		}
	};
	for (SymbolId s : program.order)
		if ((is_definition(program, s) && !discardable(program, s)) ||
			(include_private_data && program.symbols[s].kind == SymbolKind::GlobalDefinition &&
				!private_c_data(program.symbols[s])))
			mark(s);
	mark_data_references(program, mark, aliases, !include_private_data);
	if (include_private_data)
		for (const auto& alias : program.aliases)
			if (program.symbols[alias.target].kind == SymbolKind::GlobalDefinition)
				mark(alias.target);
	while (!work.empty())
	{
		const SymbolId s = work.back();
		work.pop_back();
		const Symbol& symbol = program.symbols[s];
		if (symbol.kind == SymbolKind::GlobalDefinition)
		{
			mark_initializer(program, symbol, mark);
			continue;
		}
		const FunctionBody& body = *program.functions[symbol.detail].body;
		for (BlockId b : body.layout)
			for (InstId i = body.blocks[b].first; i != kNoId; i = body.instructions[i].next)
				for_each_operand(body, body.instructions[i], [&](const Value& v) {
					if (v.is(ValueKind::Symbol))
						mark(v.index);
				});
	}
	// A retained vague-linkage implementation must keep both entry names:
	// another unit may choose its COMDAT group but reference the other ABI entry.
	for (const EquivalentEntry& entry : program.equivalent_entries)
	{
		if (!is_definition(program, entry.symbol) || !is_definition(program, entry.target) ||
			live[entry.symbol] == live[entry.target] || !program.same_entry_abi(entry.symbol, entry.target))
			continue;
		const Symbol& a = program.symbols[entry.symbol];
		const Symbol& b = program.symbols[entry.target];
		if (a.metadata.binding != ir_model::SBM_WEAK || b.metadata.binding != ir_model::SBM_WEAK ||
			((a.metadata.flags | b.metadata.flags) & SF_REPLACEABLE) != 0)
			continue;
		const SymbolId kept = live[entry.symbol] ? entry.symbol : entry.target;
		const Symbol& dropped = live[entry.symbol] ? b : a;
		const NameId object = dropped.metadata.object != 0 ? dropped.metadata.object : dropped.name;
		program.aliases.push_back(ObjectAlias{ object, kept });
	}
	uint32_t removed = 0;
	std::vector<SymbolId> order;
	for (SymbolId s : program.order)
	{
		if (include_private_data && !live[s] && private_c_data(program.symbols[s]))
		{
			Symbol& symbol = program.symbols[s];
			program.globals[symbol.detail].init = GlobalInit::Zero;
			symbol.kind = SymbolKind::GlobalDeclaration;
			continue;
		}
		if (is_definition(program, s) && !live[s])
		{
			// The definition goes; nothing names the symbol any more.
			Symbol& symbol = program.symbols[s];
			program.functions[symbol.detail].body.reset();
			symbol.kind = SymbolKind::FunctionDeclaration;
			++removed;
			continue;
		}
		order.push_back(s);
	}
	program.order.swap(order);
	// A pruned jump thunk is none any more.
	size_t kept_thunks = 0;
	for (const JumpThunk& thunk : program.jump_thunks)
		if (is_definition(program, thunk.symbol))
			program.jump_thunks[kept_thunks++] = thunk;
	program.jump_thunks.resize(kept_thunks);
	// Equivalence is permission to share retained implementations, not a
	// root. A removed entry must not survive as a dangling text reference.
	size_t kept_entries = 0;
	for (const EquivalentEntry& entry : program.equivalent_entries)
		if (is_definition(program, entry.symbol) && is_definition(program, entry.target) &&
			program.same_entry_abi(entry.symbol, entry.target))
			program.equivalent_entries[kept_entries++] = entry;
	program.equivalent_entries.resize(kept_entries);
	if (removed != 0)
	{
		std::vector<ObjectAlias> aliases;
		for (const ObjectAlias& alias : program.aliases)
			if (program.symbols[alias.target].kind != SymbolKind::FunctionDeclaration ||
				!(alias.target < live.size() && !live[alias.target] && discardable(program, alias.target)))
				aliases.push_back(alias);
		program.aliases.swap(aliases);
	}
	stats.functions_pruned += removed;
	return removed;
}

} // namespace opt
