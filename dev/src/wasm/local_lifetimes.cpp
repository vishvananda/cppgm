#include "wasm/local_lifetimes.h"

#include <algorithm>
#include "machine/interval_slots.h"
#include <utility>

namespace wasm {
namespace {

const uint32_t none = ~uint32_t(0);

bool local_op(Op op)
{
	return op == Op::LocalGet || op == Op::LocalSet || op == Op::LocalTee;
}

bool stops(Op op)
{
	return op == Op::Br || op == Op::BrTable || op == Op::Else || op == Op::Return || op == Op::Unreachable ||
		op == Op::ReturnCallIndirect || op == Op::Throw || op == Op::ThrowRef;
}

struct Edge
{
	uint32_t from, to;
};

struct Graph
{
	std::vector<uint32_t> block, first, predecessor_first, predecessors;
};

struct Handlers
{
	std::vector<uint32_t> first, targets;

	void enter(const Function& function, const Instruction& inst, const std::vector<uint32_t>& labels)
	{
		first.push_back(static_cast<uint32_t>(targets.size()));
		uint32_t at = inst.operands.first + 2;
		for (uint64_t i = 0; i < function.operands[inst.operands.first + 1]; ++i)
		{
			const CatchKind kind = static_cast<CatchKind>(function.operands[at++]);
			if (kind == CatchKind::Tag || kind == CatchKind::TagRef)
				++at;
			const uint64_t depth = function.operands[at++];
			targets.push_back(labels[labels.size() - 1 - depth]);
		}
	}

	void leave()
	{
		targets.resize(first.back());
		first.pop_back();
	}
};

// Branch operands name enclosing labels, including the function's label.
// Resolve those typed labels before partitioning the selected instruction stream.
bool control_edges(const Function& function, std::vector<Edge>& edges)
{
	const uint32_t size = static_cast<uint32_t>(function.instructions.size());
	std::vector<uint32_t> open(1, size), end(size + 1, size), other(size, none);
	std::vector<Edge> branches;
	Handlers handlers;
	for (uint32_t i = 0; i < size; ++i)
	{
		const Instruction& inst = function.instructions[i];
		if (inst.op == Op::TryTable)
			handlers.enter(function, inst, open); // Catch depths exclude the new try label.
		if (inst.op == Op::Block || inst.op == Op::Loop || inst.op == Op::If || inst.op == Op::TryTable)
			open.push_back(i);
		else if (inst.op == Op::End && open.size() > 1)
		{
			end[open.back()] = i + 1;
			if (function.instructions[open.back()].op == Op::TryTable)
				handlers.leave();
			open.pop_back();
		}
		else if (inst.op == Op::Else)
		{
			other[open.back()] = i + 1;
			branches.push_back(Edge{ i, open.back() });
		}
		else if (inst.op == Op::Br || inst.op == Op::BrIf || inst.op == Op::BrTable)
			for (uint32_t k = 0; k < inst.operands.count; ++k)
				branches.push_back(Edge{ i, open[open.size() - 1 - function.operands[inst.operands.first + k]] });
		// Split at throwing instructions: a result store after a call must not
		// kill a value that its landing path still needs. Keeping outer handlers
		// too is conservative when an inner catch handles the same exception.
		if (!handlers.targets.empty() && (effects(inst.op) & machine_model::MayThrow))
			for (uint32_t target : handlers.targets)
				branches.push_back(Edge{ i, target });
	}
	for (const Edge& edge : branches)
		edges.push_back(Edge{
			edge.from, edge.to < size && function.instructions[edge.to].op == Op::Loop ? edge.to + 1 : end[edge.to] });
	for (uint32_t i = 0; i < size; ++i)
	{
		const Op op = function.instructions[i].op;
		if (op == Op::If)
			edges.push_back(Edge{ i, other[i] == none ? end[i] : other[i] });
		if (stops(op) && op != Op::Br && op != Op::BrTable && op != Op::Else)
			edges.push_back(Edge{ i, size });
	}
	return true;
}

bool graph_for(const Function& function, Graph& graph)
{
	std::vector<Edge> edges;
	if (!control_edges(function, edges))
		return false;
	const uint32_t size = static_cast<uint32_t>(function.instructions.size());
	std::vector<uint8_t> leader(size + 1, 0);
	leader[0] = leader[size] = 1;
	for (const Edge& edge : edges)
		leader[edge.to] = leader[edge.from + 1] = 1;
	graph.block.resize(size + 1);
	for (uint32_t i = 0; i < size; ++i)
	{
		if (leader[i])
			graph.first.push_back(i);
		graph.block[i] = static_cast<uint32_t>(graph.first.size() - 1);
	}
	const uint32_t count = static_cast<uint32_t>(graph.first.size());
	graph.first.push_back(size);
	graph.block[size] = count;
	graph.predecessor_first.assign(count + 1, 0);
	std::vector<Edge> links;
	for (uint32_t b = 0; b + 1 < count; ++b)
		if (!stops(function.instructions[graph.first[b + 1] - 1].op))
			edges.push_back(Edge{ graph.first[b + 1] - 1, graph.first[b + 1] });
	for (const Edge& edge : edges)
		if (edge.to != size)
		{
			links.push_back(Edge{ graph.block[edge.from], graph.block[edge.to] });
			++graph.predecessor_first[links.back().to + 1];
		}
	for (uint32_t i = 0; i < count; ++i)
		graph.predecessor_first[i + 1] += graph.predecessor_first[i];
	graph.predecessors.resize(links.size());
	std::vector<uint32_t> fill = graph.predecessor_first;
	for (const Edge& link : links)
		graph.predecessors[fill[link.to]++] = link.from;
	return true;
}

struct Life
{
	uint32_t local, first = none, last = 0;
	explicit Life(uint32_t index) : local(index) {}
};

struct Accesses
{
	std::vector<uint32_t> first, positions;

	explicit Accesses(const Function& function) : first(function.locals.size() + 1, 0)
	{
		for (const Instruction& inst : function.instructions)
			if (local_op(inst.op))
				++first[function.operands[inst.operands.first] + 1];
		for (uint32_t i = 1; i < first.size(); ++i)
			first[i] += first[i - 1];
		positions.resize(first.back());
		std::vector<uint32_t> fill = first;
		for (uint32_t i = 0; i < function.instructions.size(); ++i)
			if (local_op(function.instructions[i].op))
				positions[fill[function.operands[function.instructions[i].operands.first]]++] = i;
	}
};

// Walk backward only where a block reads before writing. Reaching entry
// extends the hull to zero: an implicitly zero-initialized local cannot share
// storage with an earlier value. Stores stop propagation, including loop edges.
bool lifetimes(const Function& function, const Graph& graph, std::vector<Life>& lives)
{
	const Accesses accesses(function);
	const uint32_t blocks = static_cast<uint32_t>(graph.first.size() - 1);
	std::vector<uint32_t> seen(blocks, none), written(blocks, none), definition(blocks), work;
	uint64_t steps = 0;
	const uint64_t budget = 32ull * (function.instructions.size() + graph.predecessors.size()) + 1024;
	for (uint32_t local = function.parameter_count; local < function.locals.size(); ++local)
	{
		lives.emplace_back(local);
		Life& life = lives.back();
		uint32_t last_block = none;
		for (uint32_t k = accesses.first[local]; k < accesses.first[local + 1]; ++k)
		{
			const uint32_t position = accesses.positions[k], block = graph.block[position];
			life.first = std::min(life.first, position);
			life.last = position;
			if (last_block != block && function.instructions[position].op == Op::LocalGet)
			{
				work.push_back(block);
				seen[block] = local;
			}
			last_block = block;
			if (function.instructions[position].op != Op::LocalGet && written[block] != local)
			{
				written[block] = local;
				definition[block] = position;
			}
		}
		while (!work.empty())
		{
			const uint32_t block = work.back();
			work.pop_back();
			life.first = std::min(life.first, graph.first[block]);
			for (uint32_t p = graph.predecessor_first[block]; p < graph.predecessor_first[block + 1]; ++p)
			{
				if (++steps > budget)
					return false;
				const uint32_t pred = graph.predecessors[p];
				life.last = std::max(life.last, graph.first[pred + 1] - 1);
				life.first = std::min(life.first, written[pred] == local ? definition[pred] : graph.first[pred]);
				if (written[pred] != local && seen[pred] != local)
				{
					seen[pred] = local;
					work.push_back(pred);
				}
			}
		}
	}
	return true;
}

void place(Function& function, std::vector<Life>& lives)
{
	std::sort(lives.begin(), lives.end(),
		[](const Life& a, const Life& b) { return a.first < b.first || (a.first == b.first && a.local < b.local); });
	machine::IntervalSlots slots[8];
	std::vector<uint32_t> mapping(function.locals.size());
	std::vector<ValueType> placed(function.locals.begin(), function.locals.begin() + function.parameter_count);
	for (uint32_t i = 0; i < function.parameter_count; ++i)
		mapping[i] = i;
	auto group = [](ValueType type) {
		return is_reference(type) ? (type == ValueType::FuncRef            ? 5
											: type == ValueType::ExternRef ? 6
																		   : 7)
								  : 0x7f - static_cast<unsigned>(type);
	};
	for (const Life& life : lives)
	{
		const ValueType type = function.locals[life.local];
		mapping[life.local] = slots[group(type)].assign(life.first, life.last, [&]() {
			const uint32_t id = static_cast<uint32_t>(placed.size());
			placed.push_back(type);
			return id;
		});
	}
	for (const Instruction& inst : function.instructions)
		if (local_op(inst.op))
		{
			auto& operand = function.operands[inst.operands.first];
			operand = mapping[operand];
		}
	function.locals.swap(placed);
}

} // namespace

void reuse_locals(Function& function)
{
	if (function.locals.size() < function.parameter_count + 2 || function.instructions.empty())
		return;
	Graph graph;
	std::vector<Life> lives;
	if (graph_for(function, graph) && lifetimes(function, graph, lives))
		place(function, lives);
}

} // namespace wasm
