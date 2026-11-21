#include "aarch64/mir.h"

#include <algorithm>

// Load and store pairs on selected A64 code. Two single loads, or two single
// stores, of one size and register bank from one base register at adjacent
// offsets become one LDP or STP when the instructions between them leave
// the base, the moved data register and memory alone. The rule follows
// Clang's AArch64 load/store optimizer: the pair takes the place of the
// first load (its second destination is then written earlier) or of either
// store (whose data register must hold the same value at that place).
// Only instructions with a modelled effect may stand between the two; any
// other instruction, a branch, a call or a block start ends the search.
namespace aarch64 {
namespace {

constexpr uint32_t kWindow = 12;
constexpr uint32_t kPageWindow = 64;
constexpr uint32_t kSp = 1u << 31;

// The registers and memory one instruction touches. General registers are
// bits 0-30 of the gp masks and SP is bit 31; register 31 read or written as
// the zero register sets no bit. SIMD and floating registers are the fp masks.
struct Effects
{
	uint32_t gp_use = 0, gp_def = 0, fp_use = 0, fp_def = 0;
	bool reads = false, writes = false;
	void add(const Effects& other)
	{
		gp_use |= other.gp_use;
		gp_def |= other.gp_def;
		fp_use |= other.fp_use;
		fp_def |= other.fp_def;
		reads |= other.reads;
		writes |= other.writes;
	}
};

uint32_t gp(unsigned reg, bool sp = false)
{
	return reg < 31 ? 1u << reg : sp ? kSp : 0;
}

uint32_t fp(unsigned reg)
{
	return 1u << (reg & 31);
}

// Bits 10-14: a multiply's addend or a pair's second register.
unsigned ra_of(const Instruction& ins)
{
	return ((static_cast<uint32_t>(ins.op) | ins.field) >> 10) & 31;
}

bool integer_effects(const Instruction& ins, Effects& e)
{
	const bool extended = (ins.field >> 21) & 1; // ADD/SUB (extended register) can name SP
	switch (ins.op)
	{
	case Op::And:
	case Op::AndW:
	case Op::Orr:
	case Op::OrrW:
	case Op::Eor:
	case Op::EorW:
	case Op::OrnW:
	case Op::BicW:
	case Op::Bic:
	case Op::EonW:
	case Op::Eon:
	case Op::Orn:
	case Op::Lsl:
	case Op::Lsr:
	case Op::Asr:
	case Op::LslW:
	case Op::LsrW:
	case Op::AsrW:
	case Op::SDiv:
	case Op::UDiv:
	case Op::SDivW:
	case Op::UDivW:
	case Op::Adc:
	case Op::Sbc:
	case Op::Csel:
	case Op::CselW:
	case Op::Csinc:
	case Op::CsincW:
	case Op::Extr:
	case Op::ExtrW:
	case Op::Adds:
	case Op::Subs:
	case Op::SubsW:
		e.gp_def = gp(ins.rd);
		e.gp_use = gp(ins.rn, extended) | gp(ins.rm);
		return true;
	case Op::Add:
	case Op::AddW:
	case Op::Sub:
	case Op::SubW:
		e.gp_def = gp(ins.rd, extended);
		e.gp_use = gp(ins.rn, extended) | gp(ins.rm);
		return true;
	case Op::Mul:
	case Op::MulW:
	case Op::Smull:
	case Op::Umull:
	case Op::Umulh:
	case Op::Madd:
	case Op::MaddW:
	case Op::Msub:
	case Op::MsubW:
		e.gp_def = gp(ins.rd);
		e.gp_use = gp(ins.rn) | gp(ins.rm) | gp(ra_of(ins));
		return true;
	case Op::Ccmp:
	case Op::CcmpW:
		e.gp_use = gp(ins.rn) | gp(ins.rm);
		return true;
	case Op::CcmpI:
	case Op::CcmpIW:
		e.gp_use = gp(ins.rn);
		return true;
	case Op::Rev16:
	case Op::Rev32:
	case Op::Rev64:
	case Op::Rbit:
	case Op::Clz:
	case Op::Sbfm:
	case Op::Ubfm:
	case Op::UbfmW:
	case Op::SbfmW:
		e.gp_def = gp(ins.rd);
		e.gp_use = gp(ins.rn);
		return true;
	case Op::AndImm:
	case Op::AndImmW:
	case Op::OrrImm:
	case Op::OrrImmW:
	case Op::EorImm:
	case Op::EorImmW:
	case Op::AndI:
		e.gp_def = gp(ins.rd, true);
		e.gp_use = gp(ins.rn);
		return true;
	case Op::AddI:
	case Op::AddIW:
	case Op::SubI:
	case Op::SubIW:
	case Op::AddPageI:
		e.gp_def = gp(ins.rd, true);
		e.gp_use = gp(ins.rn, true);
		return true;
	case Op::AddsIW:
	case Op::AddsIX:
	case Op::SubsIW:
	case Op::SubsIX:
		e.gp_def = gp(ins.rd);
		e.gp_use = gp(ins.rn, true);
		return true;
	case Op::MovZ:
	case Op::MovN:
	case Op::MovNW:
	case Op::Adrp:
		e.gp_def = gp(ins.rd);
		return true;
	case Op::MovK:
		e.gp_def = e.gp_use = gp(ins.rd);
		return true;
	case Op::Bfm:
	case Op::BfmW:
		e.gp_def = gp(ins.rd);
		e.gp_use = gp(ins.rd) | gp(ins.rn);
		return true;
	default:
		return false;
	}
}

// Scalar floating-point arithmetic, moves between the banks and the plain
// vector operations, whose only registers are rd, rn and rm (rd is taken as
// read as well, which covers the accumulating and inserting forms).
bool floating_effects(const Instruction& ins, Effects& e)
{
	switch (ins.op)
	{
	case Op::Fadd:
	case Op::Fsub:
	case Op::Fmul:
	case Op::Fdiv:
	case Op::Fcsel:
		e.fp_def = fp(ins.rd);
		e.fp_use = fp(ins.rn) | fp(ins.rm);
		return true;
	case Op::Fmadd:
		e.fp_def = fp(ins.rd);
		e.fp_use = fp(ins.rn) | fp(ins.rm) | fp(ra_of(ins));
		return true;
	case Op::Fneg:
	case Op::Fsqrt:
	case Op::FcvtDS:
	case Op::FcvtSD:
	case Op::FmovFP:
		e.fp_def = fp(ins.rd);
		e.fp_use = fp(ins.rn);
		return true;
	case Op::FmovI:
		e.fp_def = fp(ins.rd);
		return true;
	case Op::Fcmp:
		e.fp_use = fp(ins.rn) | fp(ins.rm);
		return true;
	case Op::FcmpZero:
		e.fp_use = fp(ins.rn);
		return true;
	case Op::FmovWS:
	case Op::FmovXD:
	case Op::Fcvtzs:
	case Op::Fcvtzu:
		e.gp_def = gp(ins.rd);
		e.fp_use = fp(ins.rn);
		return true;
	case Op::FmovSW:
	case Op::FmovDX:
	case Op::Scvtf:
	case Op::Ucvtf:
	case Op::ScvtfW:
	case Op::UcvtfW:
		e.fp_def = fp(ins.rd);
		e.gp_use = gp(ins.rn);
		return true;
	case Op::VAdd:
	case Op::VSub:
	case Op::VMul:
	case Op::VAnd:
	case Op::VOrr:
	case Op::VEor:
	case Op::VBic:
	case Op::VCmeq:
	case Op::VCmgt:
	case Op::VFadd:
	case Op::VFsub:
	case Op::VFmul:
	case Op::VFmulElem:
	case Op::VFdiv:
	case Op::VFcmgt:
	case Op::VBsl:
	case Op::VBit:
	case Op::VBif:
	case Op::VSmax:
	case Op::VUmax:
	case Op::VSmin:
	case Op::VUmin:
	case Op::VMla:
	case Op::VZip1:
	case Op::VZip2:
	case Op::VUzp1:
		e.fp_def = fp(ins.rd);
		e.fp_use = fp(ins.rd) | fp(ins.rn) | fp(ins.rm);
		return true;
	default:
		return false;
	}
}

// A load or store with an immediate or register offset. Unscaled forms
// with writeback also write their base.
bool memory_effects(const Instruction& ins, Effects& e)
{
	struct Form
	{
		Op op;
		bool load, simd, pair, unscaled, indexed;
	};
	static const Form forms[] = { { Op::LdrB, true, false, false, false, false },
		{ Op::LdrSBW, true, false, false, false, false }, { Op::LdrSHW, true, false, false, false, false },
		{ Op::LdrH, true, false, false, false, false }, { Op::LdrW, true, false, false, false, false },
		{ Op::LdrX, true, false, false, false, false }, { Op::StrB, false, false, false, false, false },
		{ Op::StrH, false, false, false, false, false }, { Op::StrW, false, false, false, false, false },
		{ Op::StrX, false, false, false, false, false }, { Op::LdurB, true, false, false, true, false },
		{ Op::LdurSBW, true, false, false, true, false }, { Op::LdurSHW, true, false, false, true, false },
		{ Op::LdurH, true, false, false, true, false }, { Op::LdurW, true, false, false, true, false },
		{ Op::LdurX, true, false, false, true, false }, { Op::SturB, false, false, false, true, false },
		{ Op::SturH, false, false, false, true, false }, { Op::SturW, false, false, false, true, false },
		{ Op::SturX, false, false, false, true, false }, { Op::LdrBReg, true, false, false, false, true },
		{ Op::LdrSBWReg, true, false, false, false, true }, { Op::LdrSHWReg, true, false, false, false, true },
		{ Op::LdrSBX, true, false, false, false, false }, { Op::LdrSHX, true, false, false, false, false },
		{ Op::LdrSW, true, false, false, false, false }, { Op::LdurSBX, true, false, false, true, false },
		{ Op::LdurSHX, true, false, false, true, false }, { Op::LdurSW, true, false, false, true, false },
		{ Op::LdrSBXReg, true, false, false, false, true }, { Op::LdrSHXReg, true, false, false, false, true },
		{ Op::LdrSWReg, true, false, false, false, true }, { Op::LdrHReg, true, false, false, false, true },
		{ Op::LdrWReg, true, false, false, false, true }, { Op::LdrXReg, true, false, false, false, true },
		{ Op::StrBReg, false, false, false, false, true }, { Op::StrHReg, false, false, false, false, true },
		{ Op::StrWReg, false, false, false, false, true }, { Op::StrXReg, false, false, false, false, true },
		{ Op::LdpX, true, false, true, false, false }, { Op::LdpW, true, false, true, false, false },
		{ Op::StpX, false, false, true, false, false }, { Op::StpW, false, false, true, false, false },
		{ Op::LdrS, true, true, false, false, false }, { Op::LdrD, true, true, false, false, false },
		{ Op::LdrQ, true, true, false, false, false }, { Op::StrS, false, true, false, false, false },
		{ Op::StrD, false, true, false, false, false }, { Op::StrQ, false, true, false, false, false },
		{ Op::LdurS, true, true, false, true, false }, { Op::LdurD, true, true, false, true, false },
		{ Op::LdurQ, true, true, false, true, false }, { Op::SturS, false, true, false, true, false },
		{ Op::SturD, false, true, false, true, false }, { Op::SturQ, false, true, false, true, false },
		{ Op::LdrSReg, true, true, false, false, true }, { Op::LdrDReg, true, true, false, false, true },
		{ Op::LdrQReg, true, true, false, false, true }, { Op::StrSReg, false, true, false, false, true },
		{ Op::StrDReg, false, true, false, false, true }, { Op::StrQReg, false, true, false, false, true },
		{ Op::LdpS, true, true, true, false, false }, { Op::LdpD, true, true, true, false, false },
		{ Op::LdpQ, true, true, true, false, false }, { Op::StpS, false, true, true, false, false },
		{ Op::StpD, false, true, true, false, false }, { Op::StpQ, false, true, true, false, false } };
	for (const auto& form : forms)
	{
		if (form.op != ins.op)
			continue;
		const uint32_t data = (form.simd ? fp(ins.rd) : gp(ins.rd)) |
			(form.pair ? (form.simd ? fp(ra_of(ins)) : gp(ra_of(ins))) : 0);
		(form.load ? (form.simd ? e.fp_def : e.gp_def) : (form.simd ? e.fp_use : e.gp_use)) = data;
		e.gp_use |= gp(ins.rn, true) | (form.indexed ? gp(ins.rm) : 0);
		if (form.unscaled && ((ins.field >> 10) & 3))
			e.gp_def |= gp(ins.rn, true);
		(form.load ? e.reads : e.writes) = true;
		return true;
	}
	return false;
}

bool effects(const Instruction& ins, Effects& e)
{
	e = Effects();
	return integer_effects(ins, e) || floating_effects(ins, e) || memory_effects(ins, e);
}

// A single access with an immediate offset and no writeback.
struct Access
{
	bool load, simd;
	unsigned bytes, rt, rn;
	int64_t offset;
};

bool single_access(const Instruction& ins, Access& access)
{
	struct Form
	{
		Op op;
		bool load, simd, unscaled;
		unsigned bytes;
	};
	static const Form forms[] = { { Op::LdrW, true, false, false, 4 }, { Op::LdrX, true, false, false, 8 },
		{ Op::StrW, false, false, false, 4 }, { Op::StrX, false, false, false, 8 }, { Op::LdurW, true, false, true, 4 },
		{ Op::LdurX, true, false, true, 8 }, { Op::SturW, false, false, true, 4 }, { Op::SturX, false, false, true, 8 },
		{ Op::LdrS, true, true, false, 4 }, { Op::LdrD, true, true, false, 8 }, { Op::LdrQ, true, true, false, 16 },
		{ Op::StrS, false, true, false, 4 }, { Op::StrD, false, true, false, 8 }, { Op::StrQ, false, true, false, 16 },
		{ Op::LdurS, true, true, true, 4 }, { Op::LdurD, true, true, true, 8 }, { Op::LdurQ, true, true, true, 16 },
		{ Op::SturS, false, true, true, 4 }, { Op::SturD, false, true, true, 8 },
		{ Op::SturQ, false, true, true, 16 } };
	if (ins.fixup != Fixup::None)
		return false;
	for (const auto& form : forms)
	{
		if (form.op != ins.op)
			continue;
		if (form.unscaled && ((ins.field >> 10) & 3))
			return false;
		const int64_t offset = form.unscaled ? (int64_t((ins.field >> 12) & 511) ^ 256) - 256
											 : int64_t((ins.field >> 10) & 4095) * form.bytes;
		access = Access{ form.load, form.simd, form.bytes, ins.rd, ins.rn, offset };
		return true;
	}
	return false;
}

Op pair_op(const Access& a)
{
	if (!a.simd)
		return a.bytes == 4 ? (a.load ? Op::LdpW : Op::StpW) : (a.load ? Op::LdpX : Op::StpX);
	if (a.bytes == 4)
		return a.load ? Op::LdpS : Op::StpS;
	return a.bytes == 8 ? (a.load ? Op::LdpD : Op::StpD) : (a.load ? Op::LdpQ : Op::StpQ);
}

// The pair of accesses x (first) and y, separated by the effects between
// them, as an instruction at the first or the second one's place.
bool join(const Access& x, const Access& y, const Effects& between, Instruction& pair, bool& at_second)
{
	if (y.load != x.load || y.simd != x.simd || y.bytes != x.bytes || y.rn != x.rn)
		return false;
	const bool ascending = y.offset == x.offset + x.bytes;
	if (!ascending && x.offset != y.offset + x.bytes)
		return false;
	const int64_t low = std::min(x.offset, y.offset);
	if (low % x.bytes || low / x.bytes < -64 || low / x.bytes > 63)
		return false;
	const auto data = [&](unsigned reg) { return x.simd ? fp(reg) : gp(reg); };
	const uint32_t defs = x.simd ? between.fp_def : between.gp_def;
	const uint32_t uses = x.simd ? between.fp_use : between.gp_use;
	if (x.load)
	{
		// LDP writes both registers at the first load. They must differ, and
		// nothing between may read or write the second one.
		if (x.rt == y.rt || ((defs | uses) & data(y.rt)))
			return false;
		at_second = false;
	}
	else if (!(defs & data(x.rt)))
		at_second = true;
	else if (!(defs & data(y.rt)))
		at_second = false;
	else
		return false;
	const unsigned lo = ascending ? x.rt : y.rt, hi = ascending ? y.rt : x.rt;
	pair = Instruction{ pair_op(x), lo, x.rn, 0, ((uint32_t(low / x.bytes) & 127) << 15) | (hi << 10), Fixup::None, 0 };
	return true;
}

// A repeated ADRP of one page into a register that still holds the page is
// dropped. The search ends at a block start and at any instruction that may
// write the register.
void share_pages(const Function& f, uint32_t first, const std::vector<uint8_t>& boundary, std::vector<uint8_t>& gone,
	std::vector<uint32_t>& removed)
{
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	for (uint32_t a = first; a < n; ++a)
	{
		const Instruction& page = f.code[a];
		if (gone[a] || page.op != Op::Adrp || page.fixup != Fixup::Page || page.rd >= 31)
			continue;
		for (uint32_t b = a + 1; b < n && b <= a + kPageWindow && !boundary[b]; ++b)
		{
			const Instruction& ins = f.code[b];
			if (ins.op == Op::Adrp && ins.fixup == Fixup::Page && ins.rd == page.rd && ins.target == page.target &&
				ins.addend == page.addend)
			{
				gone[b] = 1;
				removed.push_back(b);
				continue;
			}
			Effects e;
			if (!effects(ins, e) || (e.gp_def & gp(page.rd)))
				break;
		}
	}
}

} // namespace

// Volatile and atomic accesses keep their own instructions and order, and
// inline assembly is not modelled, so no access of a body with any of them
// is paired.
bool orders_memory(const lowir::FunctionBody& body)
{
	using lowir::Opcode;
	for (const auto& inst : body.instructions)
		switch (inst.op)
		{
		case Opcode::Asm:
		case Opcode::AtomicLoad:
		case Opcode::AtomicStore:
		case Opcode::AtomicAddFetch:
		case Opcode::AtomicExchange:
		case Opcode::AtomicCompareExchange:
		case Opcode::AtomicThreadFence:
		case Opcode::AtomicSignalFence:
			return true;
		default:
			if (inst.flags & lowir::IF_VOLATILE)
				return true;
		}
	return false;
}

void pair_accesses(Function& f, uint32_t first, std::vector<BitTest>& tests, bool ordered)
{
	const uint32_t n = static_cast<uint32_t>(f.code.size());
	// A block start, a call site edge or a landing pad ends a search; so does
	// any frame event, which marks prologue or epilogue code.
	std::vector<uint8_t> boundary(n + 2);
	for (uint32_t pc : f.labels)
		if (pc <= n)
			boundary[pc] = 1;
	for (const auto& site : f.sites)
	{
		boundary[std::min(site.begin / 4, n)] = 1;
		boundary[std::min(site.end / 4, n)] = 1;
	}
	for (uint32_t pad : f.pads)
		if (pad != lowir::kNoId)
			boundary[std::min(pad / 4, n)] = 1;
	for (const auto& event : f.frame_events)
		boundary[std::min(event.pc / 4, n + 1)] = 1;
	std::vector<uint8_t> gone(n);
	std::vector<uint32_t> removed;
	share_pages(f, first, boundary, gone, removed);
	for (uint32_t a = first; a < n && !ordered; ++a)
	{
		Access x;
		// A general load into its own base changes the second address.
		if (gone[a] || !single_access(f.code[a], x) || (x.load && !x.simd && x.rt == x.rn))
			continue;
		Effects between;
		for (uint32_t b = a + 1; b < n && b <= a + kWindow && !boundary[b]; ++b)
		{
			if (gone[b])
				continue;
			const Instruction& ins = f.code[b];
			Access y;
			Instruction pair;
			bool at_second = false;
			if (single_access(ins, y) && !boundary[b + 1] && join(x, y, between, pair, at_second))
			{
				f.code[at_second ? b : a] = pair;
				const uint32_t dropped = at_second ? a : b;
				gone[dropped] = 1;
				removed.push_back(dropped);
				break;
			}
			Effects e;
			if (!effects(ins, e))
				break;
			between.add(e);
			if ((between.gp_def & gp(x.rn, true)) || between.writes || (!x.load && between.reads))
				break;
		}
	}
	if (removed.empty())
		return;
	std::sort(removed.begin(), removed.end());
	for (auto& test : tests)
		test.pc -= static_cast<uint32_t>(std::lower_bound(removed.begin(), removed.end(), test.pc) - removed.begin());
	remove_instructions(f, removed);
}

} // namespace aarch64
