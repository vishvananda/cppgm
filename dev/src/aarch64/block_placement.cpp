#include "aarch64/selector.h"
#include "machine/block_layout.h"
#include "opt/function_ir.h"

#include <algorithm>

namespace aarch64 {
using namespace lowir;

namespace {
struct LayoutBlock
{
	Opcode terminator;
	uint32_t position;
	bool calls = false, cold = false;
};

// A diamond that tests one bit and sets it only when it was clear. Keep
// the work that can set the bit beside its test. The bypass remains cheap
// when the bit has already been set.
uint32_t bit_update_share(const FunctionBody& body, const lowir::Instruction& branch, BlockId from)
{
	const auto producer = [&](Value value) -> const lowir::Instruction* {
		if (!value.is(ValueKind::Temp) || body.temps[value.index].def == kNoId)
			return nullptr;
		return &body.instructions[body.temps[value.index].def];
	};
	const auto* test = producer(branch.ops[0]);
	bool zero_is_true = false;
	if (test && test->op == Opcode::Compare && test->ops[1].is(ValueKind::Integer) &&
		body.literals[test->ops[1].index].low == 0)
	{
		const auto predicate = static_cast<ComparePredicate>(test->sub);
		if (predicate != ComparePredicate::Eq && predicate != ComparePredicate::Ne)
			return 0;
		zero_is_true = predicate == ComparePredicate::Eq;
		test = producer(test->ops[0]);
	}
	if (!test || test->op != Opcode::Binary || test->sub != static_cast<unsigned>(BinaryOp::And) ||
		!test->ops[1].is(ValueKind::Integer))
		return 0;
	const auto mask = body.literals[test->ops[1].index].low;
	const BlockId clear = branch.ops[zero_is_true ? 1 : 2].index;
	const BlockId join = branch.ops[zero_is_true ? 2 : 1].index;
	const auto& jump = body.instructions[body.blocks[clear].last];
	if (!mask || (mask & (mask - 1)) || jump.op != Opcode::Jump || !(jump.ops[0] == Value::block(join)))
		return 0;
	Value state = test->ops[0];
	const auto* extension = producer(state);
	if (extension && extension->op == Opcode::Convert && extension->sub == static_cast<unsigned>(ConvertOp::ZExt))
		state = extension->ops[0];
	for (InstId i = body.blocks[join].first; i != kNoId; i = body.instructions[i].next)
	{
		const auto& phi = body.instructions[i];
		if (phi.op != Opcode::Phi)
			break;
		if (!phi.type.is_integer() || !(opt::phi_incoming(body, phi, from) == state))
			continue;
		Value update = opt::phi_incoming(body, phi, clear);
		const auto* choice = producer(update);
		if (choice && choice->op == Opcode::Select)
		{
			if (choice->ops[2] == state)
				update = choice->ops[1];
			else if (choice->ops[1] == state)
				update = choice->ops[2];
		}
		const auto* set = producer(update);
		if (set && set->op == Opcode::Binary && set->sub == static_cast<unsigned>(BinaryOp::Or) &&
			set->ops[0] == state && set->ops[1].is(ValueKind::Integer) && body.literals[set->ops[1].index].low == mask)
			return zero_is_true ? 704 : 296;
	}
	return 0;
}

// A branch's loop facts at layout position `at` with its true and false
// targets at `yes` and `no`: a branch that closes a loop and otherwise
// leaves it repeats the loop; one leaving its innermost loop does so as
// rarely as a loop exits; a test before a loop enters it more often than
// not. 0 when none applies.
uint32_t loop_share(const machine::PlacementLoops& loops, uint32_t at, uint32_t yes, uint32_t no, uint32_t slot)
{
	const bool back_yes = loops.back[slot] != 0, back_no = loops.back[slot + 1] != 0;
	if (back_yes != back_no)
	{
		const uint32_t header = back_yes ? yes : no, other = back_yes ? no : yes;
		if (!loops.contains(loops.innermost[header], other))
			return back_yes ? 880 : 120;
	}
	const uint32_t inner = loops.innermost[at];
	if (inner != machine::kNoBlock)
	{
		const bool yes_exits = !loops.contains(inner, yes), no_exits = !loops.contains(inner, no);
		if (yes_exits != no_exits)
			return yes_exits ? 120 : 880;
	}
	const auto enters = [&](uint32_t header, uint32_t other) {
		if (!loops.is_header(header))
			return false;
		const uint32_t loop = loops.innermost[header];
		return !loops.contains(loop, at) && !loops.contains(loop, other);
	};
	const bool yes_enters = enters(yes, no), no_enters = enters(no, yes);
	if (yes_enters != no_enters)
		return yes_enters ? 700 : 300;
	return 0;
}

// A floating value compared with itself tests for NaN, which is rare.
uint32_t nan_test_share(const FunctionBody& body, const lowir::Instruction& branch)
{
	const auto condition = branch.ops[0];
	if (!condition.is(ValueKind::Temp) || body.temps[condition.index].def == kNoId)
		return 0;
	const auto& cmp = body.instructions[body.temps[condition.index].def];
	if (cmp.op != Opcode::Compare || !cmp.type.is_float() || !cmp.ops[0].is(ValueKind::Temp) ||
		!cmp.ops[1].is(ValueKind::Temp) || cmp.ops[0].index != cmp.ops[1].index)
		return 0;
	const auto pred = static_cast<ComparePredicate>(cmp.sub);
	return pred == ComparePredicate::Ne ? 8 : pred == ComparePredicate::Eq ? 992 : 0;
}

// Shares are in thousandths of one execution. Prefer explicit expectations,
// loop backedges and paths that avoid a rare call. Outside loops, the lowered
// branch commonly puts an if body immediately after its guard and the
// continuation further on, and the continuation tests again; inside a loop
// neither shape says which arm a pass takes.
uint32_t true_share(const FunctionBody& body, const lowir::Instruction& branch, const std::vector<LayoutBlock>& blocks,
	BlockId from, const machine::PlacementLoops& loops, uint32_t slot)
{
	const auto prediction = static_cast<BranchPrediction>(branch.sub);
	if (prediction != BranchPrediction::None)
		return prediction == BranchPrediction::Likely ? 992 : 8;
	const auto& yes = blocks[branch.ops[1].index];
	const auto& no = blocks[branch.ops[2].index];
	if (yes.cold != no.cold)
		return yes.cold ? 8 : 992;
	const auto position = blocks[from].position;
	if (const auto looped = loop_share(loops, position, yes.position, no.position, slot))
		return looped;
	const auto share = !yes.calls && !no.calls ? bit_update_share(body, branch, from) : 0;
	if (share)
		return share;
	if (const auto nan = nan_test_share(body, branch))
		return nan;
	if (yes.position == position + 1 && loops.innermost[position] == machine::kNoBlock)
		return no.calls && !yes.calls && no.terminator == Opcode::Jump ? 768 : 320;
	if (yes.calls != no.calls)
		return yes.calls ? 256 : 672;
	const auto condition = branch.ops[0];
	const auto definition = condition.is(ValueKind::Temp) ? body.temps[condition.index].def : kNoId;
	if (definition != kNoId)
	{
		const auto& cmp = body.instructions[definition];
		if (cmp.op == Opcode::Compare && cmp.ops[1].is(ValueKind::Integer))
		{
			const auto pred = static_cast<ComparePredicate>(cmp.sub);
			const bool zero = !body.literals[cmp.ops[1].index].low;
			if (cmp.type.is_pointer() && zero)
				return pred == ComparePredicate::Eq ? 128 : pred == ComparePredicate::Ne ? 872 : 500;
			if (!zero && (pred == ComparePredicate::Eq || pred == ComparePredicate::Ne))
				return pred == ComparePredicate::Eq ? 320 : 680;
		}
	}
	if (yes.terminator != no.terminator && (yes.terminator == Opcode::Branch || no.terminator == Opcode::Branch) &&
		loops.innermost[position] == machine::kNoBlock)
		return yes.terminator == Opcode::Branch ? 600 : 400;
	return 500;
}

// The blocks' successors by layout position: a jump's target, a branch's
// true then false target, a switch's default then its cases.
void successor_graph(const FunctionBody& body, const std::vector<LayoutBlock>& blocks, machine::PlacementGraph& graph)
{
	graph.succ_first.clear();
	graph.succs.clear();
	for (auto b : body.layout)
	{
		graph.succ_first.push_back(static_cast<uint32_t>(graph.succs.size()));
		const auto& term = body.instructions[body.blocks[b].last];
		if (term.op == Opcode::Jump)
			graph.succs.push_back(blocks[term.ops[0].index].position);
		else if (term.op == Opcode::Branch)
		{
			graph.succs.push_back(blocks[term.ops[1].index].position);
			graph.succs.push_back(blocks[term.ops[2].index].position);
		}
		else if (term.op == Opcode::Switch)
		{
			graph.succs.push_back(blocks[term.ops[1].index].position);
			for (uint32_t k = 0; k < term.extra_count; k += 2)
				graph.succs.push_back(blocks[body.operands[term.extra_first + k + 1].index].position);
		}
	}
	graph.succ_first.push_back(static_cast<uint32_t>(graph.succs.size()));
}

// A block whose test a jump may take a copy of (copy_short_tests): besides
// its phis, address arithmetic and conversions that selection folds, at most
// four plain instructions before a branch whose edges move nothing.
template<typename EmptyEdge>
bool short_test(const FunctionBody& body, BlockId b, EmptyEdge& empty)
{
	const auto& term = body.instructions[body.blocks[b].last];
	if (term.op != Opcode::Branch || term.ops[1].index == term.ops[2].index || !empty(b, term.ops[1].index) ||
		!empty(b, term.ops[2].index))
		return false;
	unsigned count = 0;
	for (auto i = body.blocks[b].first; i != body.blocks[b].last; i = body.instructions[i].next)
	{
		const auto& inst = body.instructions[i];
		if (inst.op == Opcode::Phi || inst.op == Opcode::Index || inst.op == Opcode::Convert)
			continue;
		const bool plain = inst.op == Opcode::Binary || inst.op == Opcode::Compare || inst.op == Opcode::Copy ||
			(inst.op == Opcode::Load && !(inst.flags & IF_VOLATILE) && !inst.type.is_object() &&
				!inst.type.is_vector());
		if (!plain || ++count > 4)
			return false;
	}
	return true;
}

// Each block's executions (machine::placement_frequencies) by the branch
// shares above, then chains along the heaviest edges loop by loop
// (machine::LoopChains); each loop's run starts at the block that makes its
// branches cheapest, so a loop tested at its top repeats through its
// conditional branch: the latch is placed above the test, or the test at
// the bottom where the block entering the loop takes a copy of it.
template<typename EmptyEdge>
class Placement
{
public:
	Placement(const Program& program, const FunctionBody& body, EmptyEdge empty)
		: program_(program), body_(body), empty_(empty), n_(static_cast<uint32_t>(body.layout.size()))
	{}

	std::vector<BlockId> order()
	{
		if (!describe())
			return {};
		copyable_.assign(n_, 0);
		for (uint32_t pos = 1; pos < n_; ++pos)
			copyable_[pos] = short_test(body_, body_.layout[pos], empty_) ? 1 : 2;
		// A jump or branch edge's traffic; other edges never fall through.
		std::vector<uint64_t> weight(graph_.succs.size(), 0);
		for (uint32_t pos = 0; pos < n_; ++pos)
		{
			const auto term = blocks_[body_.layout[pos]].terminator;
			if (term == Opcode::Jump || term == Opcode::Branch)
				for (uint32_t k = graph_.succ_first[pos]; k < graph_.succ_first[pos + 1]; ++k)
					weight[k] = std::max<uint64_t>(1, frequency_[pos]) * shares_[k];
		}
		std::vector<uint32_t> placed;
		machine::LoopChains(graph_, loops_)
			.order(weight, [this](uint32_t pos, uint32_t next) { return cost(pos, next); }, placed);
		if (placed.size() != n_)
			return {};
		std::vector<BlockId> order(n_);
		for (uint32_t k = 0; k < n_; ++k)
			order[k] = body_.layout[placed[k]];
		return order;
	}

private:
	bool describe()
	{
		blocks_.assign(body_.blocks.size(), LayoutBlock{});
		for (uint32_t pos = 0; pos < n_; ++pos)
		{
			const auto b = body_.layout[pos];
			const auto last = body_.blocks[b].last;
			if (last == kNoId || !is_terminator(body_.instructions[last].op))
				return false;
			auto& facts = blocks_[b];
			facts.position = pos;
			facts.terminator = body_.instructions[last].op;
			facts.cold = facts.terminator == Opcode::Throw || facts.terminator == Opcode::Resume ||
				facts.terminator == Opcode::Unreachable;
			for (auto i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			{
				const auto& inst = body_.instructions[i];
				facts.calls |= inst.op == Opcode::Call;
				facts.cold |= program_.rare_call(inst);
			}
		}
		successor_graph(body_, blocks_, graph_);
		machine::find_placement_loops(graph_, loops_);
		shares_.assign(graph_.succs.size(), 1000);
		for (uint32_t pos = 0; pos < n_; ++pos)
		{
			const auto b = body_.layout[pos];
			const auto& term = body_.instructions[body_.blocks[b].last];
			const uint32_t slot = graph_.succ_first[pos], count = graph_.succ_first[pos + 1] - slot;
			if (term.op == Opcode::Branch)
			{
				shares_[slot] = true_share(body_, term, blocks_, b, loops_, slot);
				shares_[slot + 1] = 1000 - shares_[slot];
			}
			else
				for (uint32_t k = 0; k < count; ++k)
					shares_[slot + k] = 1000 / count;
		}
		machine::placement_frequencies(graph_, loops_, shares_, frequency_);
		return true;
	}

	// What a block costs before `next`, as conditional_edges lays out its
	// branches: taken branches plus unconditional jumps, by executions. A
	// jump to a short test that `next` follows from is its copy's branch.
	uint64_t cost(uint32_t pos, uint32_t next) const
	{
		const auto b = body_.layout[pos];
		const uint64_t f = std::min<uint64_t>(frequency_[pos], uint64_t(1) << 46);
		const uint32_t slot = graph_.succ_first[pos];
		if (blocks_[b].terminator == Opcode::Jump)
		{
			const uint32_t to = graph_.succs[slot];
			if (to == next)
				return 0;
			const uint32_t test = graph_.succ_first[to];
			if (next == machine::kNoBlock || to == pos || copyable_[to] != 1 ||
				(graph_.succs[test] != next && graph_.succs[test + 1] != next))
				return 2 * f;
			return f * shares_[graph_.succs[test] == next ? test + 1 : test] / 1000;
		}
		if (blocks_[b].terminator != Opcode::Branch)
			return 0;
		const uint32_t yes = graph_.succs[slot], no = graph_.succs[slot + 1];
		const uint64_t to_yes = f * shares_[slot] / 1000, to_no = f - to_yes;
		const bool empty_yes = empty_(b, body_.layout[yes]), empty_no = empty_(b, body_.layout[no]);
		if (next == yes)
			return empty_no ? to_no : f + to_no;
		if (next == no)
			return empty_yes ? to_yes : f + to_yes;
		return empty_no ? f + to_yes : 2 * f;
	}

	const Program& program_;
	const FunctionBody& body_;
	EmptyEdge empty_;
	uint32_t n_;
	std::vector<LayoutBlock> blocks_;
	machine::PlacementGraph graph_;
	machine::PlacementLoops loops_;
	std::vector<uint32_t> shares_;
	std::vector<uint64_t> frequency_;
	std::vector<uint8_t> copyable_; // by position: 1 a short test, 2 not
};

template<typename EmptyEdge>
std::vector<BlockId> predicted_order(const Program& program, const FunctionBody& body, EmptyEdge empty)
{
	return Placement<EmptyEdge>(program, body, empty).order();
}

bool can_fall_through(const FunctionBody& body, BlockId from, BlockId to)
{
	if (from == kNoId || to == kNoId)
		return false;
	const auto last = body.blocks[from].last;
	if (last == kNoId)
		return true;
	const auto& term = body.instructions[last];
	if (term.op == Opcode::Jump)
		return term.ops[0].index == to;
	if (term.op == Opcode::Branch)
		return term.ops[1].index == to || term.ops[2].index == to;
	return term.op != Opcode::Return && term.op != Opcode::Unreachable;
}
} // namespace

// Place an unconditional branch's target directly after it when neither
// neighbor of the target uses the original adjacency. This makes one more
// edge fall through without taking a fallthrough away from another path.
std::vector<BlockId> Selector::order_blocks()
{
	if (level_ >= 2 && body_.layout.size() >= 4 && body_.code_labels.empty())
	{
		auto order = predicted_order(
			program_, body_, [this](BlockId from, BlockId to) { return empty_edge(from, to); });
		if (!order.empty())
			return order;
	}
	if (!level_ || out_.exceptions || body_.layout.size() < 4 || !body_.code_labels.empty())
		return {};
	std::vector<BlockId> prev, next;
	bool changed = false;
	for (size_t k = 0; k < body_.layout.size(); ++k)
	{
		const auto block = body_.layout[k], last = body_.blocks[block].last;
		if (last == kNoId || body_.instructions[last].op != Opcode::Jump)
			continue;
		const auto to = body_.instructions[last].ops[0].index;
		const auto after = next.empty() ? (k + 1 < body_.layout.size() ? body_.layout[k + 1] : kNoId) : next[block];
		if (to == after || to == block || to == body_.layout.front())
			continue;
		if (next.empty())
		{
			prev.assign(body_.blocks.size(), kNoId);
			next.assign(body_.blocks.size(), kNoId);
			for (size_t j = 1; j < body_.layout.size(); ++j)
			{
				prev[body_.layout[j]] = body_.layout[j - 1];
				next[body_.layout[j - 1]] = body_.layout[j];
			}
		}
		if (prev[to] == kNoId || can_fall_through(body_, prev[to], to) || can_fall_through(body_, to, next[to]))
			continue;
		next[prev[to]] = next[to];
		if (next[to] != kNoId)
			prev[next[to]] = prev[to];
		next[block] = to;
		prev[to] = block;
		next[to] = after;
		if (after != kNoId)
			prev[after] = to;
		changed = true;
	}
	std::vector<BlockId> order;
	if (changed)
		for (auto b = body_.layout.front(); b != kNoId; b = next[b])
			order.push_back(b);
	// Put the latch before a two-block loop test. The preheader jumps to
	// the test once; each successful trip then falls back into the test
	// and the terminating trip falls straight through to its successor.
	for (size_t i = 1; i + 2 < body_.layout.size(); ++i)
	{
		const auto& placed = order.empty() ? body_.layout : order;
		const auto pre = placed[i - 1], header = placed[i], latch = placed[i + 1], exit = placed[i + 2];
		const auto h = body_.blocks[header].last, l = body_.blocks[latch].last, p = body_.blocks[pre].last;
		if (p == kNoId || h == kNoId || l == kNoId)
			continue;
		const auto& test = body_.instructions[h];
		const auto jumps_to_header = [&](InstId id) {
			const auto& term = body_.instructions[id];
			return term.op == Opcode::Jump && term.ops[0].index == header;
		};
		if (test.op != Opcode::Branch || !jumps_to_header(l) || !jumps_to_header(p) ||
			!((test.ops[1].index == latch && test.ops[2].index == exit) ||
				(test.ops[2].index == latch && test.ops[1].index == exit)))
			continue;
		if (order.empty())
			order = body_.layout;
		std::swap(order[i], order[i + 1]);
		++i;
	}
	return order;
}

} // namespace aarch64
