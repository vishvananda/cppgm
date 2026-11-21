#include "aarch64/mir.h"
#include "aarch64/shrink_wrap.h"

#include <algorithm>

// Spill reloads on selected A64 code. A scalar temp without a register
// lives in its frame home and is loaded at each use. When every way to a
// load leaves the home's value in a register that nothing has written
// since, the load goes (into that register) or becomes a move; the move
// goes too when the instructions up to the end of its destination's value
// can read the source instead. No address of a scalar home is ever formed,
// so only a frame access at its offset changes it. Code a backward branch,
// a landing pad or an address enters, a call, a write to the frame base and
// any instruction outside the operand model start again with nothing known.
namespace aarch64 {
namespace {

// The most instructions a move's destination is followed through, and the
// most a test that a register is dead visits.
constexpr uint32_t kMoveReach = 24;
constexpr uint32_t kDeadReach = 512;
// x9-x17: neither arguments, results nor preserved across a call.
constexpr uint32_t kTemporaries = 0x3fe00;
constexpr uint32_t kCallUses = 0x1ff;      // x0-x8
constexpr uint32_t kCallDefs = 0x4007ffff; // x0-x18, x30

// A store of general registers: its base register and, for the unsigned
// offset forms, the bytes it writes from `offset`.
bool general_store(const Instruction& ins, unsigned& base, uint32_t& offset, unsigned& bytes)
{
	base = ins.rn;
	bytes = 0;
	switch (ins.op)
	{
	case Op::StrB:
		bytes = 1;
		break;
	case Op::StrH:
		bytes = 2;
		break;
	case Op::StrW:
		bytes = 4;
		break;
	case Op::StrX:
		bytes = 8;
		break;
	case Op::SturB:
	case Op::SturH:
	case Op::SturW:
	case Op::SturX:
	case Op::StrBReg:
	case Op::StrHReg:
	case Op::StrWReg:
	case Op::StrXReg:
	case Op::StpX:
	case Op::StpW:
		return true;
	default:
		return false;
	}
	offset = ((ins.field >> 10) & 4095) * bytes;
	return true;
}

// The registers that hold a home (bits of `mask`) and, by register, one
// more than the home unit (offset / 8) it holds.
struct State
{
	uint32_t mask;
	uint32_t held[31];
	void clear() { mask = 0; }
	void set(unsigned reg, uint32_t unit)
	{
		mask |= 1u << reg;
		held[reg] = unit + 1;
	}
	bool holds(unsigned reg, uint32_t unit) const { return ((mask >> reg) & 1) && held[reg] == unit + 1; }
	unsigned holder(uint32_t unit) const
	{
		for (uint32_t m = mask; m; m &= m - 1)
			if (held[__builtin_ctz(m)] == unit + 1)
				return __builtin_ctz(m);
		return 31;
	}
	void forget(uint32_t unit)
	{
		for (uint32_t m = mask; m; m &= m - 1)
			if (held[__builtin_ctz(m)] == unit + 1)
				mask &= ~(1u << __builtin_ctz(m));
	}
	// What two ways into one place both hold.
	void meet(const State& other)
	{
		mask &= other.mask;
		for (uint32_t m = mask; m; m &= m - 1)
			if (held[__builtin_ctz(m)] != other.held[__builtin_ctz(m)])
				mask &= ~(1u << __builtin_ctz(m));
	}
};

bool branch(Op op)
{
	return op == Op::B || op == Op::BCond || op == Op::Cbz || op == Op::CbzW || op == Op::Cbnz || op == Op::CbnzW ||
		op == Op::Tbz || op == Op::Tbnz;
}

bool falls_through(Op op)
{
	return op != Op::B && op != Op::Ret && op != Op::Br && op != Op::Brk;
}

class ReloadForwarding
{
public:
	ReloadForwarding(Function& f, uint32_t first, unsigned base, const std::vector<uint8_t>& homes, bool thunks)
		: f_(f), first_(first), base_(base), homes_(homes), n_(static_cast<uint32_t>(f.code.size())), thunks_(thunks)
	{}

	void run(std::vector<BitTest>& tests)
	{
		mark_entries();
		forward();
		for (uint32_t pc : moves_)
			drop_move(pc);
		std::vector<uint32_t> removed;
		for (uint32_t pc = first_; pc < n_; ++pc)
			if (gone_[pc])
				removed.push_back(pc);
		if (removed.empty())
			return;
		for (auto& test : tests)
			test.pc -= static_cast<uint32_t>(
				std::lower_bound(removed.begin(), removed.end(), test.pc) - removed.begin());
		remove_instructions(f_, removed);
	}

private:
	// Code entered other than by falling through: 1 when every way in is a
	// forward branch from `first` on, whose states then meet in `joins`; 2
	// for a backward branch, a landing pad or an address of the code.
	void mark_entries()
	{
		entered_.assign(n_ + 1, 0);
		gone_.assign(n_ + 1, 0);
		seen_.assign(n_ + 1, 0);
		for (uint32_t pc = 0; pc < n_; ++pc)
		{
			const auto& ins = f_.code[pc];
			if (ins.fixup != Fixup::Block || f_.labels[ins.target] >= n_)
				continue;
			const uint32_t to = f_.labels[ins.target];
			entered_[to] = pc < first_ || pc >= to || !branch(ins.op) ? 2 : std::max<uint8_t>(entered_[to], 1);
		}
		for (uint32_t pad : f_.pads)
			if (pad != lowir::kNoId)
				entered_[std::min(n_, pad / 4)] = 2;
	}

	uint32_t target(const Instruction& ins) const
	{
		return ins.fixup == Fixup::Block && branch(ins.op) && f_.labels[ins.target] < n_ ? f_.labels[ins.target]
																						 : lowir::kNoId;
	}

	bool home_access(const Instruction& ins, uint32_t& unit) const
	{
		unit = (ins.field >> 10) & 4095;
		return (ins.op == Op::LdrX || ins.op == Op::StrX) && ins.fixup == Fixup::None && ins.rn == base_ &&
			ins.rd < 31 && unit < homes_.size() && homes_[unit];
	}

	void forward();
	void step(Instruction& ins, uint32_t pc, State& state);
	bool dead(unsigned reg, uint32_t pc, uint32_t& budget);
	bool dead(unsigned reg, uint32_t pc)
	{
		uint32_t budget = kDeadReach;
		++epoch_;
		return dead(reg, pc, budget);
	}
	void drop_move(uint32_t pc);

	Function& f_;
	uint32_t first_;
	unsigned base_;
	const std::vector<uint8_t>& homes_;
	uint32_t n_;
	bool thunks_; // an indirect call may be to a thread-local thunk
	std::vector<uint8_t> entered_, gone_;
	std::vector<uint32_t> moves_; // loads that became moves
	std::vector<uint32_t> seen_;  // by position: the last dead() test that reached it
	uint32_t epoch_ = 0;
};

// The registers each place holds homes in, as one walk down the code
// keeps them: a forward branch carries its state to its target, where it
// meets the others' and that of the code falling in.
void ReloadForwarding::forward()
{
	std::vector<uint32_t> join_of(n_ + 1, lowir::kNoId);
	std::vector<State> joins;
	State state = {};
	bool falls = true;
	for (uint32_t pc = first_; pc < n_; ++pc)
	{
		auto& ins = f_.code[pc];
		if (entered_[pc])
		{
			const uint32_t join = join_of[pc];
			if (entered_[pc] == 2 || join == lowir::kNoId)
				state.clear();
			else if (!falls)
				state = joins[join];
			else
				state.meet(joins[join]);
		}
		else if (!falls)
			state.clear();
		falls = falls_through(ins.op);
		const uint32_t to = target(ins);
		if (to != lowir::kNoId && entered_[to] == 1)
		{
			auto& join = join_of[to];
			if (join == lowir::kNoId)
			{
				join = static_cast<uint32_t>(joins.size());
				joins.push_back(state);
			}
			else
				joins[join].meet(state);
		}
		uint32_t unit = 0;
		if (state.mask || home_access(ins, unit))
			step(ins, pc, state);
	}
}

// One instruction's effect on what the registers hold.
void ReloadForwarding::step(Instruction& ins, uint32_t pc, State& state)
{
	uint32_t uses = 0, defs = 0, unit = 0;
	if (!general_operands(ins, uses, defs) || (defs & ((1u << 31) | (base_ < 31 ? 1u << base_ : 0))))
	{
		state.clear();
		return;
	}
	const bool home = home_access(ins, unit);
	if (ins.op == Op::LdrX && home)
	{
		const unsigned reg = ins.rd, from = state.holder(unit);
		if (state.holds(reg, unit))
			gone_[pc] = 1;
		else if (from != 31)
		{
			ins = Instruction{ Op::Orr, reg, 31, from, 0, Fixup::None, 0 };
			moves_.push_back(pc);
		}
		state.set(reg, unit);
		return;
	}
	unsigned base = 31, bytes = 0;
	uint32_t offset = 0;
	if (general_store(ins, base, offset, bytes) && (base == base_ || base == 31))
	{
		if (!bytes || base != base_)
			state.clear();
		else
			state.forget(offset / 8);
		if (home)
			state.set(ins.rd, unit);
	}
	state.mask &= ~defs;
}

// Whether no path from `pc` reads `reg` before writing it, within the
// budget; a call writes the temporaries it cannot be known to keep and
// reads the argument registers, a return or tail call reads all but the
// temporaries, and code before `first`, an indirect branch, a landing pad's
// call, an indirect call where one may be to a thread-local thunk and an
// instruction outside the operand model may read anything.
bool ReloadForwarding::dead(unsigned reg, uint32_t pc, uint32_t& budget)
{
	const uint32_t bit = 1u << reg;
	for (; pc < n_; ++pc)
	{
		if (pc < first_)
			return false;
		// A place this test has reached already adds no read.
		if (seen_[pc] == epoch_)
			return true;
		seen_[pc] = epoch_;
		if (!budget--)
			return false;
		if (gone_[pc])
			continue;
		const auto& ins = f_.code[pc];
		// (A direct call may be to a function of this unit that leaves the
		// kept registers alone, and the caller may hold a value in one
		// across it. A thunk keeps every register it does not return in.)
		if (ins.fixup == Fixup::Call || ins.fixup == Fixup::Resume)
			return (bit & kCallDefs & ~kCallUses & ~kLeafKept) != 0;
		if (ins.op == Op::Blr)
			return !thunks_ && ins.rn != reg && (bit & kCallDefs & ~kCallUses) != 0;
		if (ins.op == Op::Ret || (ins.op == Op::B && ins.fixup == Fixup::Jump))
			return (bit & kTemporaries) != 0;
		uint32_t uses = 0, defs = 0;
		if (ins.op == Op::Br || !general_operands(ins, uses, defs) || (uses & bit))
			return false;
		if (defs & bit)
			return true;
		const uint32_t to = target(ins);
		if (to != lowir::kNoId && !dead(reg, to, budget))
			return false;
		if (!falls_through(ins.op))
			return ins.op != Op::B || to != lowir::kNoId;
	}
	return false;
}

// A move left by forward(): when its destination's value reaches no call
// or other entry, and the source stays as it is up to the last read, the
// instructions that read the destination read the source and the move goes.
void ReloadForwarding::drop_move(uint32_t pc)
{
	const unsigned dest = f_.code[pc].rd, source = f_.code[pc].rm;
	uint32_t readers[kMoveReach], count = 0, k = pc + 1;
	bool changed = false, ends = false;
	for (; k < n_ && !ends; ++k)
	{
		if (gone_[k])
			continue;
		const auto& ins = f_.code[k];
		uint32_t uses = 0, defs = 0;
		const uint32_t to = target(ins);
		// Past the reach, at another way in, or at an instruction this walk
		// does not follow, the value must be dead.
		if (k > pc + kMoveReach || entered_[k] || !general_operands(ins, uses, defs) || ins.op == Op::Ret ||
			ins.op == Op::Br || (ins.op == Op::B && to == lowir::kNoId))
		{
			ends = dead(dest, k);
			break;
		}
		if ((uses >> dest) & 1)
		{
			Instruction copy = ins;
			if (changed || !rename_reads(copy, dest, source))
				return;
			readers[count++] = k;
		}
		if (to != lowir::kNoId && !dead(dest, to))
			return;
		changed |= (defs >> source) & 1;
		ends = ((defs >> dest) & 1) || !falls_through(ins.op);
	}
	if (!ends)
		return;
	for (uint32_t k = 0; k < count; ++k)
		rename_reads(f_.code[readers[k]], dest, source);
	gone_[pc] = 1;
}

} // namespace

void forward_reloads(Function& f, uint32_t first, unsigned base, const std::vector<uint8_t>& homes,
	std::vector<BitTest>& tests, bool thunks)
{
	if (first < f.code.size() && !homes.empty())
		ReloadForwarding(f, first, base, homes, thunks).run(tests);
}

} // namespace aarch64
