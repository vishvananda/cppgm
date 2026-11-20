#include "aarch64/selector.h"
#include "aarch64/lifetimes.h"
#include "opt/function_ir.h"
#include "machine/frame_lifetimes.h"
#include "machine/interval_slots.h"
#include "machine/register_pressure.h"

#include <algorithm>
#include <cmath>

namespace aarch64 {
using namespace lowir;

namespace {
using Segments = std::vector<std::pair<uint32_t, uint32_t>>;
constexpr uint32_t kPreservedSimd = 0xffu << 8;

template<typename F>
void each_interval(const LiveRange& range, const Segments& segments, F f)
{
	if (!range.count)
		f(range.first, range.last);
	else
		for (uint32_t i = range.segments; i < range.segments + range.count; ++i)
			f(segments[i].first, segments[i].second);
}

enum class RegisterPressure
{
	Fits,
	AcrossCalls,
	Saturated
};

bool uses_simd(const FunctionBody& body, const LiveRange& range)
{
	const auto kind = body.temps[range.id].type.kind();
	return kind == TypeKind::F32 || kind == TypeKind::F64 || (kind == TypeKind::V128 && !range.vector_address);
}

// Count values that are definitely live at the same time. Half-open
// segments omit values dying at a call and its newly defined result.
RegisterPressure register_pressure(const FunctionBody& body, const std::vector<LiveRange>& ranges,
	const Segments& segments, const std::vector<uint32_t>& calls, uint32_t slots, int preserved, Bank bank)
{
	if (segments.empty() || ranges.size() <= static_cast<unsigned>(preserved))
		return RegisterPressure::Fits;
	const bool simd = bank == Bank::Simd;
	const auto belongs = [&](const LiveRange& range) {
		const auto type = body.temps[range.id].type;
		return range.first != kNoId &&
			(simd ? uses_simd(body, range)
				  : type.is_pointer() || (type.is_integer() && integer_bits(type.kind()) <= 64));
	};
	if (simd && std::count_if(ranges.begin(), ranges.end(), belongs) <= preserved)
		return RegisterPressure::Fits;
	std::vector<int32_t> change(slots + 1);
	for (const auto& range : ranges)
	{
		if (!belongs(range))
			continue;
		each_interval(range, segments, [&](uint32_t first, uint32_t last) {
			++change[first];
			--change[last];
		});
	}
	uint32_t next = 0;
	int live = 0;
	bool across_calls = false;
	const int capacity = preserved + (simd ? 22 : 11);
	for (uint32_t slot = 0; slot < slots; ++slot)
	{
		live += change[slot];
		if (live > capacity)
			return RegisterPressure::Saturated;
		if (next < calls.size() && calls[next] == slot)
		{
			if (live > preserved)
			{
				if (!simd)
					return RegisterPressure::AcrossCalls;
				across_calls = true;
			}
			++next;
		}
	}
	return across_calls ? RegisterPressure::AcrossCalls : RegisterPressure::Fits;
}

// In a saturated SIMD bank, one long range can force many short arithmetic
// results into integer registers. Discount long ranges while retaining
// the block frequency and use counts in the ordinary spill weights.
double simd_spill_priority(const FunctionBody& body, const LiveRange& range, const Segments& segments, uint64_t weight)
{
	if (range.first == kNoId || !uses_simd(body, range))
		return static_cast<double>(weight);
	uint32_t slots = 0;
	each_interval(range, segments, [&](uint32_t first, uint32_t last) { slots += last - first; });
	constexpr double reference_length = 1024; // Read/write slots in the reference range.
	return static_cast<double>(weight) * std::sqrt(reference_length / std::max(1u, slots));
}

// Let each scalar phi web's call-crossing members choose before its other
// members. Otherwise a hot join can reserve a caller register the crossing
// members cannot use, leaving transfers on its incoming edges and backedge.
// With spill priorities, a crossing member takes the priority of the web's
// heaviest other member when that is higher, so a cold web still leaves the
// preserved registers to hotter values. Without them, the crossing members
// simply choose first.
void prioritize_call_webs(const FunctionBody& body, const std::vector<LiveRange>& ranges, const Segments& segments,
	const std::vector<uint32_t>& calls, machine::PhiWebs& webs, const std::vector<double>& priority,
	std::vector<uint32_t>& order)
{
	std::vector<uint8_t> constrained(ranges.size());
	for (uint32_t index : order)
	{
		const auto& range = ranges[index];
		const auto type = body.temps[range.id].type;
		if (range.affinity == kNoId ||
			!(type.kind() == TypeKind::F32 || type.kind() == TypeKind::F64 || type.is_pointer() ||
				(type.is_integer() && integer_bits(type.kind()) <= 64)))
			continue;
		each_interval(range, segments, [&](uint32_t first, uint32_t last) {
			const auto call = std::lower_bound(calls.begin(), calls.end(), first);
			constrained[index] |= call != calls.end() && *call < last;
		});
	}
	if (priority.empty())
	{
		std::stable_partition(order.begin(), order.end(), [&](uint32_t index) { return constrained[index]; });
		return;
	}
	std::vector<double> heaviest(body.temps.size(), 0.0), key(priority);
	for (uint32_t index : order)
		if (ranges[index].affinity != kNoId && !constrained[index])
		{
			auto& web = heaviest[webs.root(ranges[index].id)];
			web = std::max(web, priority[index]);
		}
	for (uint32_t index : order)
		if (constrained[index])
			key[index] = std::max(key[index], heaviest[webs.root(ranges[index].id)]);
	std::stable_sort(order.begin(), order.end(),
		[&](uint32_t a, uint32_t b) { return key[a] != key[b] ? key[a] > key[b] : constrained[a] > constrained[b]; });
}

// Give scalar SIMD phis and their backedge values first choice over short
// intermediates. Their shared web preference can then eliminate a transfer
// cycle on each iteration.
void prioritize_loop_webs(const FunctionBody& body, const opt::Cfg& cfg, const std::vector<LiveRange>& ranges,
	const std::vector<uint32_t>& aliases, std::vector<uint32_t>& order)
{
	if (cfg.rpo_index.empty())
		return;
	std::vector<uint8_t> carried;
	for (BlockId b : body.layout)
	{
		if (cfg.rpo_index[b] == kNoId)
			continue;
		for (InstId i = body.blocks[b].first; i != kNoId && body.instructions[i].op == Opcode::Phi;
			i = body.instructions[i].next)
		{
			const auto& phi = body.instructions[i];
			if (phi.type.kind() != TypeKind::F32 && phi.type.kind() != TypeKind::F64)
				continue;
			for (unsigned k = 0; k < phi.extra_count; k += 2)
			{
				const BlockId pred = body.operands[phi.extra_first + k].index;
				const Value incoming = body.operands[phi.extra_first + k + 1];
				const uint32_t from = cfg.rpo_index[pred];
				if (!incoming.is(ValueKind::Temp) || from == kNoId || from < cfg.rpo_index[b])
					continue;
				if (carried.empty())
					carried.assign(body.temps.size(), 0);
				carried[phi.result] = 1;
				carried[representative(aliases, incoming.index)] = 1;
			}
		}
	}
	if (carried.empty())
		return;
	if (order.empty())
	{
		order.resize(ranges.size());
		for (uint32_t i = 0; i < order.size(); ++i)
			order[i] = i;
	}
	std::stable_partition(order.begin(), order.end(), [&](uint32_t i) { return carried[ranges[i].id]; });
}

// A guarded call that cannot repeat has a path to a return on which
// preserving its live registers would be unnecessary.
bool guarded_call(const FunctionBody& body, const opt::Cfg& cfg, BlockId site)
{
	if (cfg.succ_first.empty() || body.layout.size() < 3 || body.layout.size() > 96 || site == body.layout.front())
		return false;
	std::vector<uint8_t> seen(body.blocks.size());
	std::vector<BlockId> pending;
	auto successors = [&](BlockId b) {
		pending.insert(pending.end(), cfg.succs.begin() + cfg.succ_first[b], cfg.succs.begin() + cfg.succ_first[b + 1]);
	};
	successors(site);
	while (!pending.empty())
	{
		const auto b = pending.back();
		pending.pop_back();
		if (b == site)
			return false;
		if (!seen[b])
		{
			seen[b] = 1;
			successors(b);
		}
	}
	std::fill(seen.begin(), seen.end(), 0);
	seen[site] = 1;
	pending.push_back(body.layout.front());
	while (!pending.empty())
	{
		const auto b = pending.back();
		pending.pop_back();
		if (seen[b])
			continue;
		seen[b] = 1;
		const auto last = body.blocks[b].last;
		if (last != kNoId && body.instructions[last].op == Opcode::Return)
			return true;
		successors(b);
	}
	return false;
}

// The register each parameter arrives in, when it stays there. An indirect
// result parameter takes x8.
std::vector<unsigned> incoming_registers(
	const Program& program, const lowir::Signature& signature, const FunctionBody& body, bool darwin, bool& free_x8)
{
	std::vector<unsigned> incoming(body.parameter_count, kNoId);
	Arguments args(darwin);
	for (TempId id = 0; id < body.parameter_count; ++id)
	{
		const auto& param = program.parameters_of(signature)[id];
		if (param.pass == ir_model::PPM_INDIRECT_RESULT)
		{
			free_x8 = false;
			continue;
		}
		const auto arg = args.next(param.type, param.shape);
		if ((arg.bank == Bank::General && !memory_value(param.type)) ||
			(arg.bank == Bank::Simd && (param.type.kind() == TypeKind::V128 || !memory_value(param.type))))
			incoming[id] = arg.first;
	}
	return incoming;
}

// The order in which ranges choose homes: by spill priority when the
// registers may not suffice, with the phi web adjustments above; empty
// (program order) otherwise.
std::vector<uint32_t> allocation_order(const Program& program, const FunctionBody& body, opt::Cfg& cfg,
	const std::vector<uint32_t>& aliases, std::vector<uint64_t>& block_weights, const std::vector<LiveRange>& ranges,
	const Segments& segments, const std::vector<uint32_t>& calls, machine::PhiWebs& webs, uint32_t slots,
	unsigned level, unsigned general_registers)
{
	std::vector<uint32_t> order;
	std::vector<double> priority;
	const auto simd_pressure = register_pressure(body, ranges, segments, calls, slots, 8, Bank::Simd);
	if (simd_pressure != RegisterPressure::Fits ||
		register_pressure(body, ranges, segments, calls, slots, general_registers, Bank::General) !=
			RegisterPressure::Fits)
	{
		const auto weight = spill_weights(program, body, cfg, aliases, block_weights);
		order.resize(ranges.size());
		priority.reserve(ranges.size());
		for (uint32_t i = 0; i < order.size(); ++i)
		{
			order[i] = i;
			const auto& range = ranges[i];
			priority.push_back(simd_pressure == RegisterPressure::Saturated
					? simd_spill_priority(body, range, segments, weight[range.id])
					: static_cast<double>(weight[range.id]));
		}
		std::stable_sort(order.begin(), order.end(), [&](uint32_t a, uint32_t b) { return priority[a] > priority[b]; });
		if (level >= 2 && !calls.empty() && !webs.empty())
			prioritize_call_webs(body, ranges, segments, calls, webs, priority, order);
	}
	if (level >= 3 && !segments.empty() && !webs.empty())
		prioritize_loop_webs(body, cfg, ranges, aliases, order);
	if (level >= 2 && priority.empty() && !order.empty() && !calls.empty() && !webs.empty())
		prioritize_call_webs(body, ranges, segments, calls, webs, priority, order);
	return order;
}

// A straight-line function only needs the end of each register's last use.
// When a register has holes, query the same interference tree used on x86.
// Phi transfers whose two ends never overlap can use one register. Join
// them into groups, forward transfers first, while no two members of a group
// overlap. A group crosses a call when one of its members does.
class PhiGroups
{
public:
	PhiGroups(const FunctionBody& body, const std::vector<LiveRange>& ranges, const Segments& segments,
		const std::vector<PhiCopy>& copies, const std::vector<uint32_t>& calls)
	{
		if (copies.empty() || segments.empty())
			return;
		const size_t count = body.temps.size();
		std::vector<uint32_t> range_of(count, kNoId), position(body.blocks.size(), 0), order(copies.size());
		for (uint32_t i = 0; i < ranges.size(); ++i)
			if (ranges[i].first != kNoId)
				range_of[ranges[i].id] = i;
		for (uint32_t k = 0; k < body.layout.size(); ++k)
			position[body.layout[k]] = k;
		for (uint32_t c = 0; c < copies.size(); ++c)
			order[c] = c;
		std::stable_partition(
			order.begin(), order.end(), [&](uint32_t c) { return position[copies[c].from] < position[copies[c].to]; });
		root_.assign(count, kNoId);
		std::vector<uint32_t> span_of(count, kNoId);
		std::vector<Segments> spans;
		for (uint32_t c : order)
		{
			uint32_t ends[] = { copies[c].source, copies[c].phi };
			if (range_of[ends[0]] == kNoId || range_of[ends[1]] == kNoId)
				continue;
			for (auto& end : ends)
			{
				if (root_[end] == kNoId)
				{
					root_[end] = end;
					span_of[end] = spans.size();
					spans.emplace_back();
					each_interval(ranges[range_of[end]], segments,
						[&](uint32_t a, uint32_t b) { spans.back().push_back({ a, b }); });
					std::sort(spans.back().begin(), spans.back().end());
				}
				end = find(end);
			}
			if (ends[0] == ends[1] || overlap(spans[span_of[ends[0]]], spans[span_of[ends[1]]]))
				continue;
			const auto keep = std::min(ends[0], ends[1]), gone = std::max(ends[0], ends[1]);
			auto& kept = spans[span_of[keep]];
			auto& lost = spans[span_of[gone]];
			Segments joined;
			joined.reserve(kept.size() + lost.size());
			std::merge(kept.begin(), kept.end(), lost.begin(), lost.end(), std::back_inserter(joined));
			kept = std::move(joined);
			lost = Segments();
			root_[gone] = keep;
		}
		first_.assign(count + 1, 0);
		for (TempId t = 0; t < count; ++t)
			if (root_[t] != kNoId)
				++first_[(root_[t] = find(t)) + 1];
		for (size_t t = 0; t < count; ++t)
			first_[t + 1] += first_[t];
		members_.resize(first_[count]);
		crosses_.assign(count, 0);
		std::vector<uint32_t> fill(first_.begin(), first_.end() - 1);
		for (TempId t = 0; t < count; ++t)
			if (root_[t] != kNoId)
			{
				members_[fill[root_[t]]++] = range_of[t];
				each_interval(ranges[range_of[t]], segments, [&](uint32_t a, uint32_t b) {
					const auto call = std::lower_bound(calls.begin(), calls.end(), a);
					crosses_[root_[t]] |= call != calls.end() && *call < b;
				});
			}
	}
	bool crosses_call(TempId root) const { return crosses_[root]; }
	bool empty() const { return root_.empty(); }
	TempId root(TempId id) const { return root_.empty() ? kNoId : root_[id]; }
	// The range indices of a group's members.
	template<typename F>
	void each_member(TempId root, F f) const
	{
		for (uint32_t k = first_[root]; k < first_[root + 1]; ++k)
			f(members_[k]);
	}

private:
	TempId find(TempId t)
	{
		while (root_[t] != t)
			t = root_[t] = root_[root_[t]];
		return t;
	}
	static bool overlap(const Segments& a, const Segments& b)
	{
		for (size_t i = 0, j = 0; i < a.size() && j < b.size();)
		{
			if (a[i].first <= b[j].second && b[j].first <= a[i].second)
				return true;
			if (a[i].second < b[j].second)
				++i;
			else
				++j;
		}
		return false;
	}

	std::vector<TempId> root_;
	std::vector<uint32_t> first_, members_;
	std::vector<uint8_t> crosses_;
};

class RegisterBank
{
public:
	RegisterBank(const Segments& segments, uint32_t slots) : segments_(segments), slots_(slots) {}
	uint32_t live_at(uint32_t slot) const { return initialized_ ? tree_.regs(slot, slot) : 0; }
	// Ask later ranges without a usable preference to leave `reg` free over
	// `range`, which would remove one of its phi transfers.
	void hint(const LiveRange& range, unsigned reg)
	{
		if (segments_.empty())
			return;
		if (!hinted_)
		{
			hints_.build_regs(slots_);
			hinted_ = true;
		}
		each_interval(range, segments_, [&](uint32_t a, uint32_t b) { hints_.add_regs(a, b, 1u << reg); });
	}
	// Without a usable preference, a register in `partners` comes next;
	// those are the registers of the range's phi partners.
	unsigned assign(
		const LiveRange& range, uint32_t allowed, unsigned preferred, unsigned alternate = kNoId, uint32_t partners = 0)
	{
		if (!allowed)
			return kNoId;
		if (segments_.empty())
		{
			for (uint32_t regs = allowed; regs; regs &= regs - 1)
			{
				unsigned reg = __builtin_ctz(regs);
				if (until_[reg] > range.first)
					allowed &= ~(1u << reg);
			}
		}
		else
		{
			if (!initialized_)
			{
				tree_.build(std::vector<int32_t>(slots_, 0));
				initialized_ = true;
			}
			each_interval(range, segments_, [&](uint32_t a, uint32_t b) { allowed &= ~tree_.regs(a, b); });
		}
		if (!allowed)
			return kNoId;
		const unsigned reg = preferred != kNoId && (allowed & (1u << preferred)) ? preferred
			: alternate != kNoId && (allowed & (1u << alternate))                ? alternate
			: (allowed & partners)                                               ? __builtin_ctz(allowed & partners)
																				 : unhinted(range, allowed, partners);
		if (segments_.empty())
			until_[reg] = range.last + 1;
		else
			each_interval(range, segments_, [&](uint32_t a, uint32_t b) { tree_.add(a, b, 1, 1u << reg); });
		return reg;
	}

private:
	// The lowest register of the lowest one's class that no other range's
	// hint holds over `range`, else the lowest register.
	unsigned unhinted(const LiveRange& range, uint32_t allowed, uint32_t partners) const
	{
		const unsigned lowest = __builtin_ctz(allowed);
		if (!hinted_)
			return lowest;
		uint32_t open = lowest < 19 ? allowed & ((1u << 19) - 1) : allowed;
		each_interval(range, segments_, [&](uint32_t a, uint32_t b) { open &= ~(hints_.regs(a, b) & ~partners); });
		return open ? __builtin_ctz(open) : lowest;
	}

	const Segments& segments_;
	uint32_t slots_, until_[32] = {};
	machine::PressureTree tree_, hints_;
	bool initialized_ = false, hinted_ = false;
};
} // namespace

// A scalar dying at a call may already occupy its outgoing register. The
// argument layout never reuses a register between parameters; intersect the
// permitted registers over every occurrence, including indirect call targets.
std::vector<Selector::CallRegisters> Selector::call_registers() const
{
	std::vector<CallRegisters> masks;
	if (calls_.empty())
		return masks;
	masks.resize(body_.temps.size());
	for (InstId i = 0; i < call_indices_.size(); ++i)
	{
		if (call_indices_[i] == kNoId)
			continue;
		const auto& inst = body_.instructions[i];
		const auto& layout = calls_[call_indices_[i]];
		if (inst.ops[0].is(ValueKind::Temp))
			masks[representative(aliases_, inst.ops[0].index)].allowed = 0;
		for (uint32_t n = 0; n < layout.args.size(); ++n)
		{
			const auto src = body_.operands[inst.extra_first + n];
			if (!src.is(ValueKind::Temp))
				continue;
			const auto& arg = layout.args[n];
			const auto type = layout.types[n];
			const bool simd = type.is_float() || type.kind() == TypeKind::V128;
			const bool matches = !arg.indirect && arg.pieces == 1 && arg.first < 8 &&
				arg.bank == (simd ? Bank::Simd : Bank::General) &&
				(!memory_value(type) || type.kind() == TypeKind::V128);
			auto& choice = masks[representative(aliases_, src.index)];
			if (!layout.parallel)
				choice.allowed &= matches ? 1u << arg.first : 0;
			if (matches && choice.preferred == 8)
				choice.preferred = arg.first;
		}
	}
	return masks;
}

// Incoming objects can go straight into their named slots when the entry
// starts with whole-object initializations. On a backedge the LowIR copy
// must execute again. Slots that share frame storage may have an earlier owner.
void Selector::parameter_homes(opt::Cfg& cfg)
{
	if (body_.layout.empty() || !body_.code_labels.empty() || slots_.empty())
		return;
	const BlockId entry = body_.layout.front();
	InstId previous = kNoId;
	for (InstId i = body_.blocks[entry].first; i != kNoId; previous = i, i = body_.instructions[i].next)
	{
		const auto& inst = body_.instructions[i];
		if (inst.op == Opcode::Addr)
			continue;
		const uint32_t slot = machine::parameter_copy_slot(body_, inst, uses_);
		if (slot == kNoId)
			break;
		const auto id = inst.ops[0].index;
		const Type type = body_.temps[id].type;
		if (slot == result_slot_ || body_.slots[slot].type != type || data_alignment(type) > 16 ||
			std::count(slots_.begin(), slots_.end(), slots_[slot]) != 1 ||
			std::find(homes_.begin(), homes_.begin() + body_.parameter_count, slots_[slot]) !=
				homes_.begin() + body_.parameter_count)
			break;
		if (entry_elided_.empty() &&
			(body_.layout.size() != 1 || body_.instructions[body_.blocks[entry].last].op != Opcode::Return))
		{
			if (cfg.pred_first.empty())
				opt::build_cfg_light(program_, body_, cfg, true);
			if (cfg.pred_count(entry))
				break;
		}
		homes_[id] = slots_[slot];
		const Value dst = inst.ops[1];
		if (previous != kNoId && body_.instructions[previous].op == Opcode::Addr && dst.is(ValueKind::Temp) &&
			body_.temps[dst.index].def == previous && uses_[dst.index] == 1)
			entry_elided_.push_back(previous);
		entry_elided_.push_back(i);
	}
}

// A private destination can take the result directly. When the whole
// copy immediately follows a register return, the store is at the same
// point even if the callee could read the destination.
void Selector::call_result_homes()
{
	if (calls_.empty() || body_.slots.empty())
		return;
	std::vector<uint8_t> escaped;
	for (BlockId block : body_.layout)
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
		{
			const auto& call = body_.instructions[i];
			const auto slot = machine::call_result_copy_slot(body_, call, uses_);
			if (slot != kNoId && out_.exceptions && site(call) && opt::may_unwind(program_, call))
				continue;
			if (slot == kNoId || body_.slots[slot].type != call.type)
				continue;
			const Argument returned = classify(call.type, program_.call_boundary(call)->boundary.result_shape);
			const bool simd = level_ && returned.bank == Bank::Simd &&
				storage_bytes(call.type) == returned.pieces * returned.piece_bytes;
			if (!returned.indirect && !simd)
				continue;
			if (!simd || body_.instructions[call.next].op != Opcode::CopyObject)
			{
				if (escaped.empty())
					escaped = opt::escaped_slots(body_, true);
				if (escaped[slot])
					continue;
			}
			if (call_result_slots_.empty())
				call_result_slots_.resize(body_.temps.size(), kNoId);
			call_result_slots_[call.result] = slot;
		}
}

void Selector::protect_simd_at_calls(unsigned reg, uint64_t calls)
{
	if (simd_call_spills_.empty())
		simd_call_spills_.resize(32, kNoId);
	if (simd_call_spills_[reg] == kNoId)
		simd_call_spills_[reg] = reserve(8, 8);
	for (; calls; calls &= calls - 1)
		calls_[__builtin_ctzll(calls)].saved_simd |= 1u << reg;
}

uint64_t Selector::cold_crossings(
	const LiveRange& range, const Segments& segments, const std::vector<uint32_t>& calls, bool guarded) const
{
	uint64_t crossed = 0, cost = 0;
	each_interval(range, segments, [&](uint32_t a, uint32_t b) {
		for (auto it = std::lower_bound(calls.begin(), calls.end(), a); it != calls.end() && *it < b; ++it)
		{
			const auto k = static_cast<unsigned>(it - calls.begin());
			crossed |= uint64_t(1) << k;
			if (!guarded)
				cost += block_weights_[calls_[k].block];
		}
	});
	return guarded || cost <= block_weights_[body_.layout.front()] / 2 ? crossed : 0;
}

// A fixed frame address is one add at the use. Computing it twice can
// cost less than saving a register across a call.
bool Selector::rematerialize_frame_address(TempId id)
{
	const InstId definition = body_.temps[id].def;
	if (uses_[id] > 2 || definition == kNoId)
		return false;
	const auto& def = body_.instructions[definition];
	if (def.op != Opcode::Addr || !def.ops[0].is(ValueKind::Slot))
		return false;
	const SlotId slot = def.ops[0].index;
	if (slot == result_slot_ || data_alignment(body_.slots[slot].type) > 16)
		return false;
	if (remat_slots_.empty())
		remat_slots_.resize(body_.temps.size(), kNoId);
	remat_slots_[id] = slot;
	return true;
}

void Selector::allocate()
{
	const size_t count = body_.temps.size();
	registers_.assign(count, kNoId);
	vectors_.assign(count, kNoId);
	homes_.assign(count, kNoId);
	auto home = [&](TempId id) {
		const auto type = body_.temps[id].type;
		return reserve((storage_bytes(type) + 7) & ~uint64_t(7), std::max(8u, data_alignment(type)));
	};
	if (!level_)
	{
		plan_slots();
		if (dynamic_stack_)
			preserved_.push_back({ 28, reserve(8, 8) });
		for (TempId id = 0; id < count; ++id)
			homes_[id] = home(id);
		return;
	}
	std::vector<uint32_t> calls;
	Segments segments;
	opt::Cfg cfg;
	machine::PhiWebs webs;
	std::vector<PhiCopy> copies;
	aliases_ = scalar_aliases(body_);
	auto ranges = live_ranges(program_, body_, out_.exceptions.get(), uses_, calls, segments, cfg, webs, entry_regs_,
		aliases_, level_ >= 3, copies);
	std::vector<uint32_t> web_regs(webs.empty() ? 0 : count, kNoId);
	std::stable_sort(
		ranges.begin(), ranges.end(), [](const LiveRange& a, const LiveRange& b) { return a.first < b.first; });
	// x9-x11, x15-x17 and v16-v17 are selector scratch; x18 is platform-reserved.
	bool free_x8 = !named_.darwin && !result_.indirect && !out_.exceptions;
	const auto incoming = incoming_registers(program_, signature_, body_, named_.darwin, free_x8);
	const uint32_t slots = 2 * (body_.instructions.size() + body_.layout.size()) + 3;
	const auto outgoing = call_registers();
	const auto order = allocation_order(program_, body_, cfg, aliases_, block_weights_, ranges, segments, calls, webs,
		slots, level_, dynamic_stack_ ? 9 : 10);
	const bool split_calls = level_ >= 2 && !out_.exceptions && !named_.darwin && !dynamic_stack_ &&
		body_.code_labels.empty() && calls.size() <= 64;
	if (split_calls && calls.size() > 1 && block_weights_.empty() && !cfg.succ_first.empty())
		block_frequencies(program_, body_, cfg, block_weights_);
	const bool single = split_calls && calls.size() == 1 && guarded_call(body_, cfg, calls_.front().block);
	const bool cold_calls = split_calls && (single || !block_weights_.empty());
	// A group's first member to get a register asks the later ones, and the
	// ranges assigned in between, to leave it to them.
	const PhiGroups groups(body_, ranges, segments, copies, calls);
	std::vector<uint32_t> group_regs(groups.empty() ? 0 : count, kNoId);
	std::vector<uint8_t> assigned(group_regs.empty() ? 0 : ranges.size());
	constexpr uint32_t high_caller_simd = 0xfffc0000; // v18 through v31, clear of argument and scratch registers.
	RegisterBank general(segments, slots), simd(segments, slots);
	std::vector<uint32_t> simd_web_regs;
	uint32_t saved_fp = 0;
	uint32_t saved = dynamic_stack_ ? 1u << 28 : 0;
	for (uint32_t i = 0; i < ranges.size(); ++i)
	{
		const auto& range = ranges[order.empty() ? i : order[i]];
		if (range.first == kNoId)
			continue;
		if (!assigned.empty())
			assigned[order.empty() ? i : order[i]] = 1;
		bool at_call = false, across_call = false;
		uint32_t kept = !out_.exceptions && !leaf_registers_.empty() ? (0xfcu | (7u << 12)) : 0;
		if (!calls.empty())
			each_interval(range, segments, [&](uint32_t a, uint32_t b) {
				const auto call = std::lower_bound(calls.begin(), calls.end(), a);
				at_call |= call != calls.end() && *call <= b;
				across_call |= call != calls.end() && *call < b;
				for (auto it = call; kept && it != calls.end() && *it <= b; ++it)
					kept &= calls_[it - calls.begin()].preserved_callers;
			});
		const auto type = body_.temps[range.id].type;
		if (across_call && type.is_pointer() && rematerialize_frame_address(range.id))
			continue;
		uint32_t arguments = at_call
			? (!across_call && outgoing[range.id].preferred < 8 ? outgoing[range.id].allowed : 0)
			: 0xff;
		if (range.first == 0)
			arguments &= range.id < incoming.size() && incoming[range.id] != kNoId ? 1u << incoming[range.id] : 0;
		if (type.is_float() && !memory_value(type))
		{
			// Both Arm ABIs preserve the low 64 bits of v8 through v15.
			const auto preferred = range.affinity == kNoId ? kNoId : vectors_[range.affinity];
			uint32_t allowed = across_call ? kPreservedSimd : arguments | high_caller_simd;
			// Try a register from the phi web when the direct preference
			// is unavailable, as in the general register bank.
			const auto root = range.affinity == kNoId ? kNoId : webs.root(range.id);
			if (root != kNoId && simd_web_regs.empty())
				simd_web_regs.assign(count, kNoId);
			const auto alternate = root == kNoId ? kNoId : simd_web_regs[root];
			if (!across_call && range.first != 0)
				allowed |= saved_fp & ((preferred < 32 ? 1u << preferred : 0) | (alternate < 32 ? 1u << alternate : 0));
			auto reg = simd.assign(range, allowed, preferred, alternate);
			if (reg == kNoId && !across_call)
				reg = simd.assign(range, kPreservedSimd, preferred, alternate);
			// Keep scalar arithmetic in its register bank. With only rare
			// calls to cross, save the live scalar lanes on those paths.
			if (reg == kNoId && across_call && cold_calls)
			{
				const uint64_t crossed = cold_crossings(range, segments, calls, single);
				if (crossed)
					reg = simd.assign(range, high_caller_simd, preferred, alternate);
				if (reg != kNoId)
					protect_simd_at_calls(reg, crossed);
			}
			if (reg != kNoId)
			{
				vectors_[range.id] = reg;
				const uint32_t preserved = (1u << reg) & kPreservedSimd;
				if (root != kNoId && (simd_web_regs[root] == kNoId || preserved))
					simd_web_regs[root] = reg;
				saved_fp |= preserved;
				continue;
			}
			// The incoming SIMD argument does not own the corresponding GPR.
			if (range.first == 0 || at_call)
				arguments = 0;
		}
		if (memory_value(type))
		{
			// Argument registers are free between calls. A quadword
			// that crosses a call must be spilled, including its high half.
			if (type.kind() == TypeKind::V128 && !range.vector_address && !across_call)
			{
				const auto preferred = range.affinity == kNoId ? kNoId : vectors_[range.affinity];
				auto reg = simd.assign(range, arguments | high_caller_simd, preferred);
				if (reg == kNoId)
				{
					reg = simd.assign(range, kPreservedSimd, preferred);
					if (reg != kNoId)
						saved_fp |= 1u << reg;
				}
				vectors_[range.id] = reg;
			}
			continue;
		}
		if (range.first == 0)
			kept &= ~0xffu | (range.id < incoming.size() && incoming[range.id] < 8 ? 1u << incoming[range.id] : 0);
		uint32_t caller = across_call ? kept : arguments | (7u << 12) | (!at_call && free_x8 ? 1u << 8 : 0);
		// Keep an incoming scalar in its ABI register when its live range
		// crosses only cold calls. The saved slot belongs to this register.
		uint64_t crossed = across_call && cold_calls ? cold_crossings(range, segments, calls, single) : 0;
		if (crossed)
		{
			caller |= 7u << 12;
			if (range.id < incoming.size() && incoming[range.id] < 8)
				caller |= outgoing[range.id].allowed & (1u << incoming[range.id]);
			else if (range.first != 0)
				caller |= outgoing[range.id].allowed & 0xffu;
		}
		const uint32_t preserved = (dynamic_stack_ ? 0x1ffu : 0x3ffu) << 19;
		unsigned preferred = range.affinity == kNoId ? kNoId : registers_[range.affinity];
		if (preferred == kNoId && at_call && !across_call && outgoing[range.id].preferred < 8)
			preferred = outgoing[range.id].preferred;
		const auto root = range.affinity == kNoId ? kNoId : webs.root(range.id);
		const auto group = groups.root(range.id);
		const unsigned group_reg = group == kNoId ? kNoId : group_regs[group];
		uint32_t partner_regs = 0;
		if (group_reg != kNoId)
		{
			partner_regs = preferred < 32 ? 1u << preferred : 0;
			preferred = group_reg;
		}
		// The first member of a group that crosses a call chooses for it,
		// unless it arrives in an argument register.
		const uint32_t first_choice = group != kNoId && group_reg == kNoId && !across_call &&
				range.id >= body_.parameter_count && groups.crosses_call(group)
			? preserved
			: 0;
		auto reg = first_choice
			? general.assign(range, first_choice, preferred, root == kNoId ? kNoId : web_regs[root], partner_regs)
			: kNoId;
		if (reg == kNoId)
			reg = general.assign(
				range, caller | preserved, preferred, root == kNoId ? kNoId : web_regs[root], partner_regs);
		registers_[range.id] = reg;
		if (reg != kNoId && group != kNoId && group_reg == kNoId)
		{
			group_regs[group] = reg;
			groups.each_member(group, [&](uint32_t index) {
				if (!assigned[index])
					general.hint(ranges[index], reg);
			});
		}
		if (across_call && reg < 15 && !(kept & (1u << reg)))
		{
			if (argument_spills_.empty())
				argument_spills_.resize(15, kNoId);
			if (argument_spills_[reg] == kNoId)
				argument_spills_[reg] = reserve(8, 8);
			for (; crossed; crossed &= crossed - 1)
				calls_[__builtin_ctzll(crossed)].saved_args |= 1u << reg;
		}
		if (reg != kNoId && reg >= 19)
			saved |= 1u << reg;
		if (root != kNoId && reg != kNoId && (web_regs[root] == kNoId || (reg >= 19 && web_regs[root] < 19)))
			web_regs[root] = reg;
	}
	for (auto& entry : entry_regs_)
		entry = general.live_at(entry);
	// Keeping callee saves together lets STP and LDP share both the transfer
	// and the stack adjustment, independently of the number of local slots.
	for (; saved; saved &= saved - 1)
		preserved_.push_back({ static_cast<unsigned>(__builtin_ctz(saved)), reserve(8, 8) });
	for (; saved_fp; saved_fp &= saved_fp - 1)
		preserved_fp_.push_back({ static_cast<unsigned>(__builtin_ctz(saved_fp)), reserve(8, 8) });
	const uint32_t slot_base = frame_;
	plan_slots();
	parameter_homes(cfg);
	register_objects();
	if (!object_words_.empty())
	{
		// Reuse the tail of the slot area when all its remaining owners
		// live in registers. The original slot offsets below it stay valid.
		frame_ = slot_base;
		for (SlotId i = 0; i < slots_.size(); ++i)
			if (!object_words_[i] && slots_[i] != kNoId)
			{
				const Type type = body_.slots[i].type;
				const uint64_t bytes = (storage_bytes(type) + 7) & ~uint64_t(7);
				const unsigned align = data_alignment(type);
				frame_ = std::max(frame_, static_cast<uint32_t>(slots_[i] + bytes + (align > 16 ? align - 16 : 0)));
			}
	}
	call_result_homes();
	machine::IntervalSlots scalar_spills, vector_spills;
	for (const auto& range : ranges)
	{
		const auto id = range.id;
		const auto reg = registers_[id];
		if (range.first == kNoId || rematerialized(id) || reg != kNoId || vectors_[id] != kNoId ||
			homes_[id] != kNoId || (!call_result_slots_.empty() && call_result_slots_[id] != kNoId))
			continue;
		const auto type = body_.temps[id].type;
		const auto def = body_.temps[id].def;
		if (type.is_object() && def != kNoId && load_returns_directly(body_.instructions[def]))
			continue;
		if (!memory_value(type))
			homes_[id] = scalar_spills.assign(range.first, range.last, [&]() { return reserve(8, 8); });
		else if (type.kind() == TypeKind::V128 && !range.vector_address)
			homes_[id] = vector_spills.assign(range.first, range.last, [&]() { return home(id); });
		else
			homes_[id] = home(id);
	}
	for (TempId id = 0; id < aliases_.size(); ++id)
		if (aliases_[id] != id)
		{
			if (!remat_slots_.empty())
				remat_slots_[id] = remat_slots_[aliases_[id]];
			registers_[id] = registers_[aliases_[id]];
			homes_[id] = homes_[aliases_[id]];
		}
}
} // namespace aarch64
