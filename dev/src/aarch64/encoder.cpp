#include "aarch64/mir.h"
#include "aarch64/link.h"
#include "native/object/elf_format.h"

#include "aarch64/error.h"

#include <algorithm>

namespace aarch64 {

namespace {
constexpr uint32_t kNoLabel = lowir::kNoId;
// The most instructions before its conditional branch a copied test holds.
constexpr uint32_t kShortTest = 4;
} // namespace

void Function::emit(Op op, unsigned rd, unsigned rn, unsigned rm, uint32_t field)
{
	code.push_back(Instruction{ op, rd, rn, rm, field, Fixup::None, 0 });
}

void Function::reference(Op op, Fixup fixup, uint32_t target, unsigned rd, unsigned rn)
{
	code.push_back(Instruction{ op, rd, rn, 0, 0, fixup, target });
}

void Function::bind(uint32_t label)
{
	labels.at(label) = code.size();
}

static void remove_instructions(Function& f, const std::vector<uint32_t>& removed)
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
// there directly. Keep ordinary labels (including address-taken labels),
// instruction PCs and unwind records in place.
void share_edge_moves(Function& f)
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
	if (!redirect.empty())
		for (auto& ins : f.code)
			if (ins.fixup == Fixup::Block && ins.op != Op::Adr && redirect[ins.target] != lowir::kNoId)
				ins.target = redirect[ins.target];
}

// The jumps of a table an ADR addresses, which stay one instruction wide.
static void mark_tables(const Function& f, std::vector<uint8_t>& table)
{
	for (const auto& inst : f.code)
		if (inst.op == Op::Adr && inst.fixup == Fixup::Block)
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
		code.push_back(Instruction{ Op::B, 0, 0, 0, 0, Fixup::Block, fall });
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

void encode(
	const Function& function, const std::vector<uint32_t>& symbols, native::object::Section& text, uint32_t resume)
{
	for (size_t i = 0; i < function.code.size(); ++i)
	{
		const Instruction& ins = function.code[i];
		uint32_t word = static_cast<uint32_t>(ins.op) | ins.rd | (ins.rn << 5) | (ins.rm << 16) | ins.field;
		if (ins.fixup == Fixup::Block)
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
				native::object::Relocation{ text.bytes.size(), type, symbols.at(ins.target), 0 });
		}
		for (unsigned shift = 0; shift < 32; shift += 8)
			text.bytes.push_back(static_cast<uint8_t>(word >> shift));
	}
	text.size = text.bytes.size();
}

} // namespace aarch64
