#include "aarch64/mir.h"
#include "aarch64/link.h"
#include "native/object/elf_format.h"
#include "native/asm/inline_module.h"

#include "aarch64/error.h"

#include <algorithm>
#include <cstdint>

namespace aarch64 {

namespace {
constexpr uint32_t kNoLabel = lowir::kNoId;
// The most instructions before its conditional branch a copied test holds.
constexpr uint32_t kShortTest = 4;
} // namespace

void Function::emit(Op op, unsigned rd, unsigned rn, unsigned rm, uint32_t field)
{
	code.push_back(Instruction{ op, rd, rn, rm, field, Fixup::None, false, 0 });
}

void Function::reference(Op op, Fixup fixup, uint32_t target, unsigned rd, unsigned rn)
{
	code.push_back(Instruction{ op, rd, rn, 0, 0, fixup, false, target });
}

void Function::bind(uint32_t label)
{
	labels.at(label) = code.size();
	last_bound = code.size();
}

void remove_instructions(Function& f, const std::vector<uint32_t>& removed)
{
	if (removed.empty())
		return;
	uint32_t written = removed.front(), first = written + 1;
	for (size_t i = 1; i <= removed.size(); ++i)
	{
		const uint32_t end = i == removed.size() ? static_cast<uint32_t>(f.code.size()) : removed[i];
		std::move(f.code.begin() + first, f.code.begin() + end, f.code.begin() + written);
		written += end - first;
		first = end + 1;
	}
	f.code.resize(written);
	const auto mapped = [&](uint32_t pc) {
		return pc - static_cast<uint32_t>(std::lower_bound(removed.begin(), removed.end(), pc) - removed.begin());
	};
	for (auto& label : f.labels)
		if (label != lowir::kNoId)
			label = mapped(label);
	for (auto& event : f.frame_events)
		event.pc = 4 * mapped(event.pc / 4);
	for (auto& site : f.sites)
	{
		site.begin = 4 * mapped(site.begin / 4);
		site.end = 4 * mapped(site.end / 4);
	}
	for (auto& pad : f.pads)
		if (pad != lowir::kNoId)
			pad = 4 * mapped(pad / 4);
}

// Puts added[i] after the instruction at places[i]; the places ascend. A
// label, frame event, call site or landing pad after a place moves with the
// instruction it names.
void insert_instructions(Function& f, const std::vector<uint32_t>& places, const std::vector<Instruction>& added)
{
	if (places.empty())
		return;
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	std::vector<Instruction> code;
	code.reserve(n + places.size());
	size_t next = 0;
	for (uint32_t pc = 0; pc < n; ++pc)
	{
		code.push_back(f.code[pc]);
		if (next != places.size() && places[next] == pc)
			code.push_back(added[next++]);
	}
	f.code.swap(code);
	const auto mapped = [&](uint32_t pc) {
		return pc + static_cast<uint32_t>(std::lower_bound(places.begin(), places.end(), pc) - places.begin());
	};
	for (auto& label : f.labels)
		if (label != lowir::kNoId)
			label = mapped(label);
	for (auto& event : f.frame_events)
		event.pc = 4 * mapped(event.pc / 4);
	for (auto& site : f.sites)
	{
		site.begin = 4 * mapped(site.begin / 4);
		site.end = 4 * mapped(site.end / 4);
	}
	for (auto& pad : f.pads)
		if (pad != lowir::kNoId)
			pad = 4 * mapped(pad / 4);
}

// A TBZ/TBNZ displacement is a signed 14-bit word offset. Fuse only pairs
// already in range; removing instructions can only shorten the distance.
// Selection records adjacent AND/branch sites with no intervening labels.
void fold_bit_tests(Function& f, const std::vector<BitTest>& tests)
{
	std::vector<uint32_t> removed;
	for (const auto& test : tests)
	{
		auto& mask = f.code[test.pc];
		const auto& branch = f.code[test.pc + 1];
		const bool zero = branch.op == Op::Cbz || branch.op == Op::CbzW;
		if ((!zero && branch.op != Op::Cbnz && branch.op != Op::CbnzW) || branch.fixup != Fixup::Block ||
			branch.rd != mask.rd)
			continue;
		const int64_t distance = int64_t(f.labels[branch.target]) - test.pc;
		if (distance < -8192 || distance >= 8192)
			continue;
		const auto reg = mask.rn;
		mask = branch;
		mask.op = zero ? Op::Tbz : Op::Tbnz;
		mask.rd = reg;
		mask.field = ((test.bit & 32) << 26) | ((test.bit & 31) << 19);
		removed.push_back(test.pc + 1);
	}
	remove_instructions(f, removed);
}

// A phi edge may contain a single MOV followed by a branch to the loop
// header. If the identical MOV already falls through to the header, branch
// there directly. Keep ordinary labels (including address-taken labels)
// and unwind records in place. A redirected MOV and jump that nothing
// reaches go, and the bit tests selection recorded move with their code.
void share_edge_moves(Function& f, std::vector<BitTest>& tests)
{
	const uint32_t labels = f.labels.size();
	// Any replacement destination must fit the shortest local branch.
	if (labels < 2 || f.code.size() > (1u << 18))
		return;
	std::vector<uint32_t> redirect;
	for (uint32_t label = 0; label < labels; ++label)
	{
		const uint32_t pc = f.labels[label];
		if (pc >= f.code.size() || pc + 1 >= f.code.size())
			continue;
		const auto& move = f.code[pc];
		const auto& branch = f.code[pc + 1];
		if (move.op != Op::Orr || move.rn != 31 || move.field || move.fixup != Fixup::None || branch.op != Op::B ||
			branch.fixup != Fixup::Block)
			continue;
		const uint32_t dest = f.labels[branch.target];
		if (!dest || dest >= f.code.size() || dest - 1 == pc)
			continue;
		const auto& previous = f.code[dest - 1];
		if (previous.op != move.op || previous.rn != move.rn || previous.rd != move.rd || previous.rm != move.rm ||
			previous.field || previous.fixup != Fixup::None)
			continue;
		const auto event = std::lower_bound(f.frame_events.begin(), f.frame_events.end(), 4 * dest,
			[](const FrameEvent& e, uint32_t address) { return e.pc < address; });
		if (event != f.frame_events.end() && event->pc == 4 * dest)
			continue;
		if (redirect.empty())
			redirect.assign(labels, lowir::kNoId);
		redirect[label] = f.labels.size();
		f.labels.push_back(dest - 1);
	}
	if (redirect.empty())
		return;
	for (auto& ins : f.code)
		if (ins.fixup == Fixup::Block && ins.op != Op::Adr && redirect[ins.target] != lowir::kNoId)
			ins.target = redirect[ins.target];
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	std::vector<uint8_t> kept(n + 1);
	for (const auto& ins : f.code)
		if (ins.fixup == Fixup::Block && f.labels[ins.target] < n)
			kept[f.labels[ins.target]] = 1;
	for (const auto& event : f.frame_events)
		kept[std::min(n, event.pc / 4)] = 1;
	for (uint32_t pad : f.pads)
		if (pad != lowir::kNoId)
			kept[std::min(n, pad / 4)] = 1;
	std::vector<uint32_t> removed;
	for (uint32_t label = 0; label < labels; ++label)
	{
		const uint32_t pc = f.labels[label];
		if (redirect[label] == lowir::kNoId || !pc || kept[pc] || kept[pc + 1])
			continue;
		const auto op = f.code[pc - 1].op;
		if ((op == Op::B || op == Op::Ret || op == Op::Br || op == Op::Brk) &&
			std::find(removed.begin(), removed.end(), pc) == removed.end())
		{
			removed.push_back(pc);
			removed.push_back(pc + 1);
		}
	}
	std::sort(removed.begin(), removed.end());
	remove_instructions(f, removed);
	for (auto& test : tests)
		test.pc -= static_cast<uint32_t>(std::lower_bound(removed.begin(), removed.end(), test.pc) - removed.begin());
}

// The jumps of a table an ADR addresses, which stay one instruction wide.
static void mark_tables(const Function& f, std::vector<uint8_t>& table)
{
	for (const auto& inst : f.code)
		if (inst.op == Op::Adr && inst.fixup == Fixup::Block && inst.addend != 0)
		{
			if (table.empty())
				table.resize(f.code.size());
			for (auto i = f.labels[inst.target]; i < f.code.size() && f.code[i].op == Op::B && !table[i]; ++i)
				table[i] = 1;
		}
}

static bool conditional_branch(const Instruction& ins)
{
	return ins.fixup == Fixup::Block &&
		(ins.op == Op::BCond || ins.op == Op::Cbz || ins.op == Op::Cbnz || ins.op == Op::CbzW || ins.op == Op::CbnzW ||
			ins.op == Op::Tbz || ins.op == Op::Tbnz);
}

// A conditional branch whose destination is out of its reach (TBZ and TBNZ
// 2^13 words, the others 2^18) branches on the inverse condition over a jump
// there (2^25 words); B.AL becomes the jump. A function of fewer than 2^13
// instructions has no such branch. An inserted jump can put another branch
// out of reach, so the search repeats until every branch reaches.
void relax_branches(Function& f)
{
	if (f.code.size() < (1u << 13))
		return;
	std::vector<uint32_t> far;
	std::vector<Instruction> jumps;
	for (;;)
	{
		const uint32_t n = static_cast<uint32_t>(f.code.size());
		far.clear();
		jumps.clear();
		for (uint32_t pc = 0; pc < n; ++pc)
		{
			auto& branch = f.code[pc];
			if (!conditional_branch(branch))
				continue;
			const int64_t displacement = int64_t(f.labels[branch.target]) - int64_t(pc);
			const int64_t reach = int64_t(1) << (branch.op == Op::Tbz || branch.op == Op::Tbnz ? 13 : 18);
			if (displacement >= -reach && displacement < reach)
				continue;
			const uint32_t target = branch.target;
			switch (branch.op)
			{
			case Op::BCond:
				if (branch.rd >= 14)
				{
					branch = Instruction{ Op::B, 0, 0, 0, 0, Fixup::Block, false, target };
					continue;
				}
				branch.rd ^= 1;
				break;
			case Op::Cbz:
				branch.op = Op::Cbnz;
				break;
			case Op::Cbnz:
				branch.op = Op::Cbz;
				break;
			case Op::CbzW:
				branch.op = Op::CbnzW;
				break;
			case Op::CbnzW:
				branch.op = Op::CbzW;
				break;
			default:
				branch.op = branch.op == Op::Tbz ? Op::Tbnz : Op::Tbz;
				break;
			}
			// The inverse branch skips the jump: a label at the instruction
			// after it, which moves with that instruction.
			branch.target = static_cast<uint32_t>(f.labels.size());
			f.labels.push_back(pc + 1);
			far.push_back(pc);
			jumps.push_back(Instruction{ Op::B, 0, 0, 0, 0, Fixup::Block, false, target });
		}
		if (far.empty())
			return;
		insert_instructions(f, far, jumps);
	}
}

// An instruction a copy may repeat elsewhere: no label or symbol reference,
// no control transfer, exclusive access, barrier or system instruction.
static bool repeatable(const Instruction& ins)
{
	if (ins.fixup != Fixup::None)
		return false;
	switch (ins.op)
	{
	case Op::Br:
	case Op::Blr:
	case Op::Ret:
	case Op::Svc:
	case Op::Brk:
	case Op::Adrp:
	case Op::Ldar:
	case Op::Stlr:
	case Op::Ldxr:
	case Op::Stxr:
	case Op::Clrex:
	case Op::Dmb:
	case Op::ReadThreadPointer:
		return false;
	default:
		return true;
	}
}

struct TestCopy
{
	uint32_t at, test, length, fall; // the jump, the test's first pc, its instructions, the fall-through label
};

// The copy of a short test that replaces the jump at `pc`, when one of the
// test's destinations is the instruction after the jump.
static bool find_test_copy(const Function& f, const std::vector<uint8_t>& blocked, uint32_t pc, TestCopy& copy)
{
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	const uint32_t test = f.labels[f.code[pc].target];
	if (test >= n || test == pc || test == pc + 1)
		return false;
	uint32_t length = 0;
	while (test + length < n && !blocked[test + length] && length <= kShortTest && repeatable(f.code[test + length]))
		++length;
	const uint32_t branch = test + length;
	if (length > kShortTest || branch + 1 >= n || blocked[branch] || !conditional_branch(f.code[branch]))
		return false;
	const auto& after = f.code[branch + 1];
	const bool jumps = after.op == Op::B && after.fixup == Fixup::Block;
	const uint32_t fall = jumps ? f.labels[after.target] : branch + 1;
	if (f.labels[f.code[branch].target] != pc + 1 && fall != pc + 1)
		return false;
	copy = TestCopy{ pc, test, length, jumps ? after.target : kNoLabel };
	return true;
}

// Redirect jumps after register allocation, where a phi transfer may have
// assigned the constant tested at the start of the target. Table entries
// remain one instruction wide even when their destination is adjacent.
void simplify_branches(Function& f)
{
	if (f.code.size() < 2 || f.code.size() >= (1u << 18))
		return;
	std::vector<uint8_t> anchored(f.code.size() + 1), table;
	for (auto pc : f.labels)
		if (pc < anchored.size())
			anchored[pc] = 1;
	for (const auto& event : f.frame_events)
		anchored[event.pc / 4] = 1;
	for (uint32_t pad : f.pads)
		if (pad != lowir::kNoId)
			anchored[pad / 4] = 1;
	mark_tables(f, table);
	const unsigned n = f.code.size();
	std::vector<unsigned> removed;
	for (unsigned pc = 0; pc < n; ++pc)
	{
		auto& br = f.code[pc];
		if (br.fixup != Fixup::Block || br.op == Op::Adr)
			continue;
		auto to = f.labels[br.target];
		if (to >= n)
			continue;
		// A short branch keeps its original encodable displacement.
		for (unsigned step = 0; step < 8 && f.code[to].op == Op::B && f.code[to].fixup == Fixup::Block; ++step)
		{
			const auto target = f.code[to].target;
			const auto dest = f.labels[target];
			const int64_t distance = static_cast<int64_t>(dest) - pc;
			if (dest >= n || dest == to ||
				((br.op == Op::Tbz || br.op == Op::Tbnz) && (distance < -8192 || distance >= 8192)))
				break;
			to = dest;
			br.target = target;
		}
		if (br.op != Op::B)
			continue;
		if (pc && !anchored[pc])
		{
			const auto& prev = f.code[pc - 1];
			const auto& test = f.code[to];
			if (prev.op == Op::MovZ && prev.rd != 31 && prev.fixup == Fixup::None && prev.rd == test.rd &&
				test.fixup == Fixup::Block &&
				(test.op == Op::Cbz || test.op == Op::CbzW || test.op == Op::Cbnz || test.op == Op::CbnzW))
			{
				const uint64_t value = uint64_t((prev.field >> 5) & 65535) << (16 * ((prev.field >> 21) & 3));
				const bool is_zero = test.op == Op::CbzW || test.op == Op::CbnzW ? static_cast<uint32_t>(value) == 0
																				 : value == 0;
				if (is_zero == (test.op == Op::Cbz || test.op == Op::CbzW))
					br.target = test.target;
				else if (to + 1 < n)
				{
					br.target = f.labels.size();
					f.labels.push_back(to + 1);
					anchored[to + 1] = 1;
				}
				to = f.labels[br.target];
			}
		}
		if (!table.empty() && table[pc])
			continue;
		if (to == pc + 1)
		{
			removed.push_back(pc);
			continue;
		}
		if (!pc || anchored[pc])
			continue;
		auto& cond = f.code[pc - 1];
		if (cond.fixup != Fixup::Block || f.labels[cond.target] != pc + 1)
			continue;
		switch (cond.op)
		{
		case Op::BCond:
			cond.rd ^= 1;
			break;
		case Op::Cbz:
			cond.op = Op::Cbnz;
			break;
		case Op::Cbnz:
			cond.op = Op::Cbz;
			break;
		case Op::CbzW:
			cond.op = Op::CbnzW;
			break;
		case Op::CbnzW:
			cond.op = Op::CbzW;
			break;
		case Op::Tbz:
		case Op::Tbnz:
		{
			const int64_t words = int64_t(to) - (pc - 1);
			if (words < -8192 || words >= 8192)
				continue;
			cond.op = cond.op == Op::Tbz ? Op::Tbnz : Op::Tbz;
			break;
		}
		default:
			continue;
		}
		cond.target = br.target;
		removed.push_back(pc);
	}
	if (!removed.empty())
		remove_instructions(f, removed);
}

// A jump to a return returns; a table's jumps stay jumps.
void return_directly(Function& f)
{
	std::vector<uint8_t> table;
	mark_tables(f, table);
	for (uint32_t pc = 0; pc < f.code.size(); ++pc)
	{
		auto& jump = f.code[pc];
		if (jump.op != Op::B || jump.fixup != Fixup::Block || (!table.empty() && table[pc]))
			continue;
		const auto to = f.labels[jump.target];
		if (to < f.code.size() && f.code[to].op == Op::Ret && f.code[to].fixup == Fixup::None)
			jump = f.code[to];
	}
}

// A compare that sets only the flags, and the registers it reads.
static bool flag_compare(const Instruction& ins, unsigned& count, unsigned regs[2])
{
	if (ins.fixup != Fixup::None || ins.preserve_fenv)
		return false;
	switch (ins.op)
	{
	case Op::Subs:
	case Op::SubsW:
	case Op::Fcmp:
		regs[0] = ins.rn;
		regs[1] = ins.rm;
		count = 2;
		return ins.op == Op::Fcmp || ins.rd == 31;
	case Op::SubsIW:
	case Op::SubsIX:
	case Op::AddsIW:
	case Op::AddsIX:
	case Op::FcmpZero:
		regs[0] = ins.rn;
		count = 1;
		return ins.op == Op::FcmpZero || ins.rd == 31;
	default:
		return false;
	}
}

// Whether every path into `at` ran the instruction `compare` last among
// the instructions that set flags, passing only conditional branches and
// register moves that write none of its registers since. A path that comes
// round to a point already reached adds nothing; one that reaches a point
// entered from outside the code's branches (`entered`) fails.
static bool flags_hold(const Function& f, const std::vector<uint32_t>& first, const std::vector<uint32_t>& from,
	const std::vector<uint8_t>& entered, uint32_t at, const Instruction& compare, const unsigned regs[2],
	unsigned count)
{
	const auto same = [&](const Instruction& ins) {
		return ins.op == compare.op && ins.rd == compare.rd && ins.rn == compare.rn && ins.rm == compare.rm &&
			ins.field == compare.field && ins.fixup == Fixup::None;
	};
	const auto passes = [&](const Instruction& ins) {
		if (conditional_branch(ins))
			return true;
		if ((ins.op != Op::Orr && ins.op != Op::OrrW) || ins.fixup != Fixup::None)
			return false;
		for (unsigned k = 0; k < count; ++k)
			if (ins.rd == regs[k])
				return false;
		return true;
	};
	uint32_t stack[32], seen[32];
	unsigned depth = 0, visited = 0;
	stack[depth++] = at;
	seen[visited++] = at;
	const auto visit = [&](uint32_t point) {
		if (std::find(seen, seen + visited, point) != seen + visited)
			return true;
		if (visited == 32 || entered[point])
			return false;
		seen[visited++] = point;
		stack[depth++] = point;
		return true;
	};
	while (depth)
	{
		const uint32_t point = stack[--depth];
		for (uint32_t k = first[point]; k < first[point + 1]; ++k)
			if (!visit(from[k]))
				return false;
		if (!point)
			return false;
		const auto& before = f.code[point - 1];
		if (before.op == Op::B || before.op == Op::Ret || before.op == Op::Br || before.op == Op::Brk || same(before))
			continue;
		if (!passes(before) || !visit(point - 1))
			return false;
	}
	return true;
}

// A compare whose flags every path into it already holds goes.
void drop_repeated_compares(Function& f)
{
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	if (n < 3 || n >= (1u << 18))
		return;
	// A compare can go only after a jump, a branch, a register move or a
	// compare (flags_hold).
	std::vector<uint32_t> candidates;
	for (uint32_t pc = 1; pc < n; ++pc)
	{
		unsigned regs[2] = {}, count = 0;
		const auto& before = f.code[pc - 1];
		if (flag_compare(f.code[pc], count, regs) &&
			(before.op == Op::B || before.op == Op::Ret || before.op == Op::Br || before.op == Op::Brk ||
				before.op == Op::Orr || before.op == Op::OrrW || conditional_branch(before) ||
				flag_compare(before, count, regs)))
			candidates.push_back(pc);
	}
	if (candidates.empty())
		return;
	// Points entered from outside the code's branches: landing pads, a
	// table's jumps (reached by an indirect branch, not by the instruction
	// before them) and the destinations of those jumps and of an ADR.
	std::vector<uint8_t> entered(n + 1), table;
	for (uint32_t pad : f.pads)
		if (pad != lowir::kNoId)
			entered[std::min(n, pad / 4)] = 1;
	mark_tables(f, table);
	for (uint32_t pc = 0; pc < table.size(); ++pc)
		entered[pc] |= table[pc];
	// The branches into each instruction.
	std::vector<uint32_t> first(n + 2), from;
	for (const auto& ins : f.code)
		if (ins.fixup == Fixup::Block && f.labels[ins.target] < n)
			++first[f.labels[ins.target] + 1];
	for (uint32_t pc = 0; pc <= n; ++pc)
		first[pc + 1] += first[pc];
	from.resize(first[n + 1]);
	std::vector<uint32_t> fill(first.begin(), first.end() - 1);
	for (uint32_t pc = 0; pc < n; ++pc)
	{
		const auto& ins = f.code[pc];
		if (ins.fixup == Fixup::Block && f.labels[ins.target] < n)
		{
			if (ins.op == Op::Adr || (!table.empty() && table[pc]))
				entered[f.labels[ins.target]] = 1;
			from[fill[f.labels[ins.target]]++] = pc;
		}
	}
	std::vector<uint8_t> blocked(entered);
	for (const auto& event : f.frame_events)
		blocked[std::min(n, event.pc / 4)] = 1;
	std::vector<uint32_t> removed;
	for (uint32_t pc : candidates)
	{
		unsigned regs[2] = {}, count = 0;
		if (!blocked[pc] && flag_compare(f.code[pc], count, regs) &&
			flags_hold(f, first, from, entered, pc, f.code[pc], regs, count))
			removed.push_back(pc);
	}
	remove_instructions(f, removed);
}

// The conditional compare that runs `compare` when `condition` holds and
// otherwise sets NZCV to `flags`: CMP of a register or of an immediate
// below 32, and FCMP of two registers.
static bool conditional_form(const Instruction& compare, unsigned condition, unsigned flags, Instruction& out)
{
	if (compare.fixup != Fixup::None || compare.preserve_fenv || compare.rd != (compare.op == Op::Fcmp ? 0u : 31u))
		return false;
	out = Instruction{ compare.op, flags, compare.rn, compare.rm, condition << 12, Fixup::None, false, 0 };
	switch (compare.op)
	{
	case Op::Subs:
	case Op::SubsW:
		out.op = compare.op == Op::Subs ? Op::Ccmp : Op::CcmpW;
		return compare.field == 0;
	case Op::SubsIX:
	case Op::SubsIW:
		// Immediate CMP reads SP as register 31; CCMP reads XZR.
		out.op = compare.op == Op::SubsIX ? Op::CcmpI : Op::CcmpIW;
		out.rm = compare.field >> 10;
		return compare.rn != 31 && compare.field < (32u << 10) && !(compare.field & 1023);
	case Op::Fcmp:
		out.op = Op::Fccmp;
		out.field |= compare.field;
		return (compare.field & ~(1u << 22)) == 0;
	default:
		return false;
	}
}

// A conditional branch and the jump after it, with neither destination
// next, take the block's two edges: the conditional branch takes the edge
// estimated to run more often, so the extra jump runs on the other.
void orient_branches(Function& f, const std::vector<BranchEstimate>& estimates)
{
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	const uint32_t blocks = static_cast<uint32_t>(std::min(estimates.size(), f.labels.size()));
	if (n < 2 || n >= (1u << 18) || !blocks)
		return;
	bool pairs = false;
	for (uint32_t pc = 0; pc + 1 < n && !pairs; ++pc)
		pairs = f.code[pc + 1].op == Op::B && f.code[pc + 1].fixup == Fixup::Block && conditional_branch(f.code[pc]);
	if (!pairs)
		return;
	std::vector<uint8_t> anchored(n + 1), table;
	std::vector<uint32_t> block_at(n + 1, lowir::kNoId);
	for (auto pc : f.labels)
		if (pc < anchored.size())
			anchored[pc] = 1;
	for (const auto& event : f.frame_events)
		anchored[event.pc / 4] = 1;
	for (uint32_t pad : f.pads)
		if (pad != lowir::kNoId)
			anchored[pad / 4] = 1;
	mark_tables(f, table);
	// A block that only forwards to its successor shares the successor's
	// label; the block with the branch holds the code there.
	for (uint32_t block = 0; block < blocks; ++block)
		if (f.labels[block] < n && (block_at[f.labels[block]] == lowir::kNoId || estimates[block].yes != lowir::kNoId))
			block_at[f.labels[block]] = block;
	uint32_t current = lowir::kNoId;
	for (uint32_t pc = 0; pc + 1 < n; ++pc)
	{
		if (block_at[pc] != lowir::kNoId)
			current = block_at[pc];
		auto& cond = f.code[pc];
		auto& jump = f.code[pc + 1];
		if (current == lowir::kNoId || anchored[pc + 1] || (!table.empty() && table[pc + 1]) || jump.op != Op::B ||
			jump.fixup != Fixup::Block || cond.fixup != Fixup::Block || (cond.op == Op::BCond && cond.rd >= 14))
			continue;
		const auto& e = estimates[current];
		const uint32_t taken = cond.target, other = jump.target;
		if (!((taken == e.yes && other == e.no) || (taken == e.no && other == e.yes)) || f.labels[taken] == pc + 2 ||
			f.labels[other] == pc + 2 || (other == e.yes ? e.to_yes : e.to_no) <= (taken == e.yes ? e.to_yes : e.to_no))
			continue;
		switch (cond.op)
		{
		case Op::BCond:
			cond.rd ^= 1;
			break;
		case Op::Cbz:
			cond.op = Op::Cbnz;
			break;
		case Op::Cbnz:
			cond.op = Op::Cbz;
			break;
		case Op::CbzW:
			cond.op = Op::CbnzW;
			break;
		case Op::CbnzW:
			cond.op = Op::CbzW;
			break;
		default:
			continue;
		}
		cond.target = other;
		jump.target = taken;
	}
}

// A conditional branch followed by a compare and a second conditional
// branch becomes one branch when both send their taken edge to the same
// place, or when the first skips to the instruction after the second:
// the compare runs as a conditional compare on the first branch's failing
// condition and otherwise sets flags that take, or skip, the second
// branch. No other branch may enter the second test, which starts a block.
// The merged test costs an instruction where the first branch was taken
// and saves one where it was not, so the second block must be estimated
// to run at least half as often as the block before it.
void conditional_compares(Function& f, const std::vector<uint64_t>& block_frequency)
{
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	const uint32_t blocks = static_cast<uint32_t>(std::min(block_frequency.size(), f.labels.size()));
	if (n < 3 || n >= (1u << 18) || !blocks)
		return;
	std::vector<uint8_t> entered(n + 1), starts(n + 1);
	std::vector<uint64_t> frequency(n + 1);
	for (const auto& ins : f.code)
		if (ins.fixup == Fixup::Block && f.labels[ins.target] < n)
			entered[f.labels[ins.target]] = 1;
	for (const auto& event : f.frame_events)
		entered[event.pc / 4] = 1;
	for (uint32_t pad : f.pads)
		if (pad != lowir::kNoId)
			entered[pad / 4] = 1;
	for (uint32_t block = 0; block < blocks; ++block)
		if (f.labels[block] < n)
		{
			starts[f.labels[block]] = 1;
			frequency[f.labels[block]] = std::max(frequency[f.labels[block]], block_frequency[block]);
		}
	std::vector<uint32_t> removed;
	uint64_t current = 0;
	for (uint32_t pc = 0; pc + 2 < n; ++pc)
	{
		if (starts[pc])
			current = frequency[pc];
		const auto& first = f.code[pc];
		auto& second = f.code[pc + 2];
		if (first.op != Op::BCond || first.fixup != Fixup::Block || first.rd >= 14 || second.op != Op::BCond ||
			second.fixup != Fixup::Block || second.rd >= 14 || entered[pc + 1] || entered[pc + 2] || !starts[pc + 1] ||
			frequency[pc + 1] < current - current / 2)
			continue;
		const uint32_t taken = f.labels[first.target], other = f.labels[second.target];
		if (taken != other && taken != pc + 3)
			continue;
		Instruction merged;
		if (!conditional_form(
				f.code[pc + 1], first.rd ^ 1, nzcv_satisfying(taken == other ? second.rd : second.rd ^ 1), merged))
			continue;
		f.code[pc + 1] = merged;
		removed.push_back(pc);
		// The merged branch may start the next pair; its block keeps the
		// first block's estimate.
		++pc;
	}
	remove_instructions(f, removed);
}

// A jump to a short test takes a copy of the test when the copy can fall
// through to one of its destinations; simplify_branches then inverts the
// copy's branch over the jump that follows it. The copy computes the same
// registers and flags at the same frame state, so it holds no frame event,
// landing pad or table entry. TBZ and TBNZ reach 8192 instructions and the
// other conditional branches 2^18, so a function that would grow past the
// reach of a branch it holds keeps its jumps.
void copy_short_tests(Function& f)
{
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	if (n < 3 || n >= (1u << 17))
		return;
	std::vector<uint8_t> blocked(n + 1), table;
	for (const auto& event : f.frame_events)
		blocked[event.pc / 4] = 1;
	for (uint32_t pad : f.pads)
		if (pad != lowir::kNoId)
			blocked[pad / 4] = 1;
	mark_tables(f, table);
	std::vector<TestCopy> copies;
	uint32_t growth = 0;
	bool bit_tests = false;
	for (uint32_t pc = 0; pc < n; ++pc)
	{
		const auto& ins = f.code[pc];
		bit_tests |= ins.op == Op::Tbz || ins.op == Op::Tbnz;
		TestCopy copy;
		if (ins.op != Op::B || ins.fixup != Fixup::Block || (!table.empty() && table[pc]) ||
			!find_test_copy(f, blocked, pc, copy))
			continue;
		copies.push_back(copy);
		growth += copy.length + 1;
	}
	if (copies.empty() || n + growth >= (1u << 18) || (bit_tests && n + growth >= 8192))
		return;
	std::vector<uint32_t> moved(n + 1);
	std::vector<Instruction> code;
	code.reserve(n + growth);
	size_t next = 0;
	for (uint32_t pc = 0; pc < n; ++pc)
	{
		moved[pc] = static_cast<uint32_t>(code.size());
		if (next == copies.size() || copies[next].at != pc)
		{
			code.push_back(f.code[pc]);
			continue;
		}
		const auto& copy = copies[next++];
		code.insert(code.end(), f.code.begin() + copy.test, f.code.begin() + copy.test + copy.length + 1);
		uint32_t fall = copy.fall;
		if (fall == kNoLabel)
		{
			fall = static_cast<uint32_t>(f.labels.size());
			f.labels.push_back(copy.test + copy.length + 1);
		}
		code.push_back(Instruction{ Op::B, 0, 0, 0, 0, Fixup::Block, false, fall });
	}
	moved[n] = static_cast<uint32_t>(code.size());
	f.code.swap(code);
	for (auto& label : f.labels)
		if (label != lowir::kNoId)
			label = moved[label];
	for (auto& event : f.frame_events)
		event.pc = 4 * moved[event.pc / 4];
	for (auto& site : f.sites)
	{
		site.begin = 4 * moved[site.begin / 4];
		site.end = 4 * moved[site.end / 4];
	}
	for (auto& pad : f.pads)
		if (pad != lowir::kNoId)
			pad = 4 * moved[pad / 4];
}

// Favor backward paths that touch fewer 64-byte instruction-cache lines.
// Keep the search and the amount of padding bounded.
void place_short_loops(const Function& function, native::object::Section& text)
{
	const unsigned base = text.bytes.size() / 4;
	unsigned savings[4] = {};
	bool planned = false;
	for (unsigned end = 0; end < function.code.size(); ++end)
	{
		const auto& ins = function.code[end];
		if (ins.fixup != Fixup::Block || ins.op == Op::Adr)
			continue;
		const auto start = function.labels[ins.target];
		if (start >= end || end - start >= 96)
			continue;
		const unsigned distance = end - start;
		const unsigned best = distance / 16;
		const unsigned weight = distance < 16 ? 4 : distance < 48 ? 2 : 1;
		for (unsigned pad = 0; pad < 4; ++pad)
			if ((((base + start + pad) & 15) + distance) / 16 == best)
			{
				savings[pad] += weight;
				planned = true;
			}
	}
	if (!planned)
		return;
	const unsigned pad = std::max_element(savings, savings + 4) - savings;
	text.align = std::max<uint64_t>(text.align, 64);
	for (unsigned i = 0; i < pad; ++i)
		native::object::put32(text.bytes, 0xd503201f);
}

// The last step of selection: a jump table of a function shorter than 2^15
// instructions holds halfwords, two to a word, each its destination's
// distance in words from the table, which the dispatch loads sign-extended
// and adds scaled by four. The table's ADR then counts its entries negated,
// and the word that holds entries 2k and 2k + 1 is the jump to entry 2k
// with entry 2k + 1's label as its addend.
void pack_tables(Function& f)
{
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	if (n >= (1u << 15))
		return;
	std::vector<uint32_t> removed;
	for (uint32_t pc = 0; pc + 3 < n; ++pc)
	{
		auto& adr = f.code[pc];
		auto& load = f.code[pc + 1];
		auto& add = f.code[pc + 2];
		if (adr.op != Op::Adr || adr.fixup != Fixup::Block || adr.addend <= 1 || load.op != Op::LdrSWReg ||
			load.rd != 17 || load.rn != 16 || add.op != Op::Add || add.rd != 16 || add.rn != 16 || add.rm != 17 ||
			add.field != 0)
			continue;
		const uint32_t start = f.labels[adr.target], count = static_cast<uint32_t>(adr.addend);
		load.op = Op::LdrSHXReg; // the same extend, scaled by two
		add.field = 2u << 10;
		adr.addend = -adr.addend;
		for (uint32_t k = 0; 2 * k < count; ++k)
		{
			auto& word = f.code[start + k];
			word.target = f.code[start + 2 * k].target;
			word.addend = 2 * k + 1 < count ? static_cast<int32_t>(f.code[start + 2 * k + 1].target) : -1;
		}
		for (uint32_t k = (count + 1) / 2; k < count; ++k)
			removed.push_back(start + k);
	}
	std::sort(removed.begin(), removed.end());
	remove_instructions(f, removed);
}

// A jump table's entries, which the selector writes as jumps after the ADR
// that addresses them (its addend counts them), are words: each
// destination's byte distance from the table, which the dispatch loads and
// adds to the table's address; or halfword pairs (pack_tables).
void encode(const Function& function, const std::vector<uint32_t>& symbols, native::object::ObjectFile& object,
	uint32_t section, uint32_t resume, std::vector<AssemblyPlacement>* placements)
{
	namespace obj = native::object;
	obj::Section& text = object.sections[section];
	const uint64_t start = text.bytes.size();
	const uint32_t n = static_cast<uint32_t>(function.code.size());
	std::vector<uint32_t> table_at;
	std::vector<uint8_t> halves;
	for (const auto& ins : function.code)
		if (ins.op == Op::Adr && ins.fixup == Fixup::Block && ins.addend != 0)
		{
			if (table_at.empty())
				table_at.assign(n, kNoLabel);
			const uint32_t start = function.labels.at(ins.target);
			const bool packed = ins.addend < 0;
			if (packed && halves.empty())
				halves.assign(n, 0);
			const auto entries = static_cast<uint32_t>(packed ? -int64_t(ins.addend) : int64_t(ins.addend));
			for (uint32_t i = start; i - start < (packed ? (entries + 1) / 2 : entries); ++i)
			{
				if (i >= n || function.code[i].op != Op::B || function.code[i].fixup != Fixup::Block)
					throw AArch64Error("AArch64 jump table entry is not a jump");
				table_at[i] = start;
				if (packed)
					halves[i] = 1;
			}
		}
	std::vector<uint32_t> labels;
	if (object.assembly_text && !function.assembly.empty())
	{
		if (!table_at.empty())
			throw AArch64Error("AArch64 source assembly with a generated jump table is unsupported");
		labels.assign(function.labels.size(), kNoLabel);
	}
	std::vector<uint64_t> packet_offsets;
	if (placements)
		packet_offsets.resize(function.assembly.size(), start);
	for (uint32_t i = 0; i < n; ++i)
	{
		const Instruction& ins = function.code[i];
		uint32_t word = static_cast<uint32_t>(ins.op) | ins.rd | (ins.rn << 5) | (ins.rm << 16) | ins.field;
		if (!table_at.empty() && table_at[i] != kNoLabel)
		{
			const int64_t first = int64_t(function.labels.at(ins.target)) - int64_t(table_at[i]);
			if (halves.empty() || !halves[i])
				word = static_cast<uint32_t>(4 * first);
			else
			{
				const int64_t second = ins.addend < 0 ? 0
													  : int64_t(function.labels.at(ins.addend)) - int64_t(table_at[i]);
				if (first < INT16_MIN || first > INT16_MAX || second < INT16_MIN || second > INT16_MAX)
					throw AArch64Error("AArch64 jump table entry out of range");
				word = uint32_t(uint16_t(first)) | uint32_t(uint16_t(second)) << 16;
			}
		}
		else if (ins.fixup == Fixup::Assembly)
		{
			const auto& packet = function.assembly.at(ins.target);
			if (packet.module)
			{
				if (ins.addend == 0)
					packet_offsets[ins.target] = text.bytes.size();
				const auto bytes = packet.module->main().bytes.begin() + uint64_t(ins.addend) * 4;
				text.bytes.insert(text.bytes.end(), bytes, bytes + 4);
				continue;
			}
			object.assembly_fragments.push_back({ section, text.bytes.size(), packet.listing });
		}
		else if (ins.fixup == Fixup::Block && !labels.empty())
		{
			uint32_t& target = labels.at(ins.target);
			if (target == kNoLabel)
			{
				obj::Symbol symbol;
				symbol.section = section;
				symbol.value = start + uint64_t(function.labels.at(ins.target)) * 4;
				target = object.add_symbol(symbol);
			}
			const uint32_t type = ins.op == Op::B         ? Jump26
				: ins.op == Op::Adr                       ? AdrPrelLo21
				: ins.op == Op::Tbz || ins.op == Op::Tbnz ? TestBranch14
														  : CondBranch19;
			text.relocations.push_back(obj::Relocation{ text.bytes.size(), type, target, 0 });
		}
		else if (ins.fixup == Fixup::Block)
		{
			const int64_t displacement = int64_t(function.labels.at(ins.target)) - int64_t(i);
			// Local ADR targets are instruction-aligned. Its low two byte-offset
			// bits are zero, and immhi holds the same word displacement as B.cond.
			const unsigned bits = ins.op == Op::B ? 26 : (ins.op == Op::Tbz || ins.op == Op::Tbnz) ? 14 : 19;
			const int64_t limit = int64_t(1) << (bits - 1);
			if (displacement < -limit || displacement >= limit)
				throw AArch64Error("AArch64 branch displacement out of range");
			word |= (uint32_t(displacement) & ((1u << bits) - 1)) << (ins.op == Op::B ? 0 : 5);
		}
		else if (ins.fixup == Fixup::Resume)
			text.relocations.push_back(native::object::Relocation{ text.bytes.size(), Call26, resume, 0 });
		else if (ins.fixup != Fixup::None)
		{
			if (ins.target >= symbols.size() || symbols[ins.target] == lowir::kNoId)
				throw AArch64Error("unresolved AArch64 relocation symbol");
			const uint32_t type = static_cast<uint32_t>(ins.fixup);
			text.relocations.push_back(
				native::object::Relocation{ text.bytes.size(), type, symbols.at(ins.target), ins.addend });
		}
		for (unsigned shift = 0; shift < 32; shift += 8)
			text.bytes.push_back(static_cast<uint8_t>(word >> shift));
	}
	text.size = text.bytes.size();
	for (size_t i = 0; i < packet_offsets.size(); ++i)
		placements->push_back({ function.assembly[i].module, section, packet_offsets[i] });
}

} // namespace aarch64
