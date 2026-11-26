#include "aarch64/assembler.h"

#include <algorithm>
#include <iterator>

#include "aarch64/link.h"
#include "aarch64/logical_immediate.h"
#include "aarch64/mir.h"
#include "asm/module_expand.h"
#include "asm/registers.h"
#include "aarch64/error.h"
#include "native/object/elf_format.h"

namespace aarch64 {
namespace {

using assembly::ModuleCursor;
using assembly::ModuleValue;

struct Gpr
{
	unsigned number;
	bool wide;
	bool stack;
};

uint32_t bits(Op op)
{
	return static_cast<uint32_t>(op);
}

Gpr gpr(ModuleCursor& cursor, const assembly::SymbolLookup& symbols)
{
	const std::string name = cursor.word();
	if (name == "xzr" || name == "wzr")
		return { 31, name[0] == 'x', false };
	if (name == "wsp")
		return { 31, false, true };
	asm_model::Register reg;
	if ((!assembly::parse_aarch64_register(name.data(), name.size(), reg) && !symbols.register_alias(name, reg)) ||
		reg.bank != asm_model::RegisterBank::Gpr || (reg.bits != 32 && reg.bits != 64))
		cursor.fail("expected an AArch64 general-purpose register");
	return { reg.number, reg.bits == 64, reg.number == 31 };
}

void comma(ModuleCursor& cursor)
{
	if (!cursor.take(','))
		cursor.fail("expected an AArch64 operand separator");
}

uint32_t fit(ModuleCursor& cursor, uint64_t value, uint32_t maximum)
{
	if (value > maximum)
		cursor.fail("AArch64 immediate is out of range");
	return static_cast<uint32_t>(value);
}

bool immediate_start(ModuleCursor& cursor)
{
	cursor.space();
	return cursor.current() == '#' || cursor.numeric();
}

ModuleValue operand_expression(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions)
{
	cursor.take('#');
	return assembly::assembly_instruction_expression(cursor, expressions);
}

uint64_t immediate(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions)
{
	const ModuleValue value = operand_expression(cursor, expressions);
	if (value.relocatable())
		cursor.fail("expected an absolute AArch64 immediate");
	return value.bits;
}

AssemblyWord relocated(ModuleCursor& cursor, uint32_t word, uint32_t relocation, ModuleValue value)
{
	if (value.negative != asm_model::kNoId)
		cursor.fail("unsupported AArch64 relocation expression");
	if (value.positive != asm_model::kNoId && value.positive != 0)
		return { word, relocation, value.positive, static_cast<int64_t>(value.bits) };
	uint8_t field[4];
	for (unsigned i = 0; i < sizeof(field); ++i)
		field[i] = static_cast<uint8_t>(word >> (8 * i));
	std::string error;
	if (!apply_relocation(relocation, field, sizeof(field), value.bits, 0, error))
		cursor.fail(error);
	return { static_cast<uint32_t>(native::object::get_le(field, sizeof(field))) };
}

unsigned condition(ModuleCursor& cursor, const std::string& name)
{
	static const char* const names[] = { "eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc", "hi", "ls", "ge", "lt", "gt",
		"le", "al", "nv" };
	if (name == "hs" || name == "lo")
		return name == "hs" ? 2 : 3;
	for (unsigned i = 0; i < sizeof(names) / sizeof(names[0]); ++i)
		if (name == names[i])
			return i;
	cursor.fail("unknown AArch64 condition " + name);
}

uint32_t register_shift(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, unsigned width,
	const std::string& kind, bool rotate)
{
	if (kind.empty())
		return 0;
	if (kind != "lsl" && kind != "lsr" && kind != "asr" && !(rotate && kind == "ror"))
		cursor.fail("invalid AArch64 register shift");
	const unsigned amount = fit(cursor, immediate(cursor, expressions), width - 1);
	return ((kind == "lsl" ? 0u : kind == "lsr" ? 1u : kind == "asr" ? 2u : 3u) << 22) | (amount << 10);
}

AssemblyWord add_sub(const std::string& name, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols)
{
	const bool compare = name == "cmp" || name == "cmn";
	const bool subtract = name == "sub" || name == "subs" || name == "cmp";
	const bool flags = compare || name == "adds" || name == "subs";
	const Gpr first = gpr(cursor, symbols);
	comma(cursor);
	const Gpr source = compare ? first : gpr(cursor, symbols);
	const Gpr dest = compare ? Gpr{ 31, first.wide, false } : first;
	if (!compare)
		comma(cursor);
	if (dest.wide != source.wide)
		cursor.fail("AArch64 arithmetic operand widths differ");
	const uint32_t modifiers = (dest.wide ? 0x80000000u : 0) | (subtract ? 0x40000000u : 0) |
		(flags ? 0x20000000u : 0) | dest.number | (source.number << 5);
	if (cursor.take(':'))
	{
		if (cursor.word() != "lo12" || !cursor.take(':') || subtract || flags)
			cursor.fail("unsupported AArch64 arithmetic relocation modifier");
		return relocated(cursor, bits(Op::AddIW) | modifiers, AddLo12, operand_expression(cursor, expressions));
	}
	if (immediate_start(cursor))
	{
		if ((source.number == 31 && !source.stack) || (dest.number == 31 && dest.stack == flags))
			cursor.fail("invalid stack or zero register for AArch64 immediate arithmetic");
		const uint32_t value = fit(cursor, immediate(cursor, expressions), 4095);
		uint32_t shift = 0;
		if (cursor.take(','))
		{
			if (cursor.word() != "lsl")
				cursor.fail("expected lsl in AArch64 immediate arithmetic");
			const uint64_t amount = immediate(cursor, expressions);
			if (amount != 0 && amount != 12)
				cursor.fail("invalid AArch64 add/sub immediate shift");
			shift = amount == 12 ? 1u << 22 : 0;
		}
		return { bits(Op::AddIW) | modifiers | (value << 10) | shift };
	}
	const Gpr operand = gpr(cursor, symbols);
	const std::string kind = cursor.take(',') ? cursor.word() : "";
	const uint32_t word = bits(Op::AddW) | modifiers | (operand.number << 16);
	const char* const extensions[] = { "uxtb", "uxth", "uxtw", "uxtx", "sxtb", "sxth", "sxtw", "sxtx" };
	const auto extension = std::find(std::begin(extensions), std::end(extensions), kind);
	if (dest.stack || source.stack || extension != std::end(extensions))
	{
		const bool named = extension != std::end(extensions);
		if (!named && !kind.empty() && kind != "lsl")
			cursor.fail("invalid AArch64 extended arithmetic modifier");
		const unsigned option = named ? extension - std::begin(extensions) : dest.wide ? 3 : 2;
		const bool wide = (option & 3) == 3 && dest.wide;
		if (operand.stack || operand.wide != wide || (source.number == 31 && !source.stack) ||
			(dest.number == 31 && dest.stack == flags))
			cursor.fail("invalid registers for AArch64 extended arithmetic");
		const uint32_t shift = cursor.end() ? 0 : fit(cursor, immediate(cursor, expressions), 4);
		return { word | (1u << 21) | (option << 13) | (shift << 10) };
	}
	if (operand.wide != dest.wide || operand.stack)
		cursor.fail("invalid registers for AArch64 shifted arithmetic");
	return { word | register_shift(cursor, expressions, dest.wide ? 64 : 32, kind, false) };
}

struct LogicalForm
{
	const char* mnemonic;
	Op reg, imm;
	bool test;
};

const LogicalForm kLogicalForms[] = {
	{ "and", Op::AndW, Op::AndImmW, false },
	{ "orr", Op::OrrW, Op::OrrImmW, false },
	{ "eor", Op::EorW, Op::EorImmW, false },
	{ "ands", static_cast<Op>(0x6a000000), static_cast<Op>(0x72000000), false },
	{ "tst", static_cast<Op>(0x6a000000), static_cast<Op>(0x72000000), true },
	{ "bic", Op::BicW, Op::AndImmW, false },
	{ "bics", static_cast<Op>(0x6a200000), static_cast<Op>(0x72000000), false },
	{ "orn", Op::OrnW, Op::OrrImmW, false },
	{ "eon", Op::EonW, Op::EorImmW, false },
};

AssemblyWord logical_word(const LogicalForm& form, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols)
{
	const Gpr first = gpr(cursor, symbols);
	comma(cursor);
	const Gpr source = form.test ? first : gpr(cursor, symbols);
	const Gpr dest = form.test ? Gpr{ 31, source.wide, false } : first;
	if (!form.test)
		comma(cursor);
	if (dest.wide != source.wide || source.stack)
		cursor.fail("invalid AArch64 logical operand");
	const unsigned width = dest.wide ? 64 : 32;
	const uint32_t regs = dest.number | (source.number << 5) | (dest.wide ? 1u << 31 : 0);
	if (immediate_start(cursor))
	{
		const bool flags = bits(form.imm) == 0x72000000;
		if (dest.number == 31 && (flags == dest.stack))
			cursor.fail("invalid AArch64 logical immediate destination");
		uint64_t value = immediate(cursor, expressions);
		if (bits(form.reg) & (1u << 21))
			value = ~value;
		uint32_t field;
		if (!logical_immediate(value, width, field))
			cursor.fail("invalid AArch64 logical immediate");
		return { bits(form.imm) | regs | field };
	}
	const Gpr operand = gpr(cursor, symbols);
	if (operand.wide != dest.wide || operand.stack || dest.stack)
		cursor.fail("invalid AArch64 logical register operand");
	const std::string kind = cursor.take(',') ? cursor.word() : "";
	const uint32_t shift = register_shift(cursor, expressions, width, kind, true);
	return { bits(form.reg) | regs | (operand.number << 16) | shift };
}

uint32_t wide_move_relocation(ModuleCursor& cursor, Op op)
{
	static const char* const modifiers[] = { "abs_g0", "abs_g0_nc", "abs_g1", "abs_g1_nc", "abs_g2", "abs_g2_nc",
		"abs_g3", "abs_g0_s", "abs_g1_s", "abs_g2_s" };
	const std::string name = cursor.word();
	const auto found = std::find(std::begin(modifiers), std::end(modifiers), name);
	if (found == std::end(modifiers) || !cursor.take(':'))
		cursor.fail("unknown AArch64 wide move relocation modifier");
	const auto type = static_cast<uint32_t>(MovwUabsG0 + (found - std::begin(modifiers)));
	if (type >= MovwSabsG0 ? op == Op::MovK : op == Op::MovN)
		cursor.fail("AArch64 wide move relocation is incompatible with the instruction");
	return type;
}

AssemblyWord move_wide(
	Op op, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	const Gpr dest = gpr(cursor, symbols);
	if (dest.stack)
		cursor.fail("AArch64 wide move requires a general-purpose destination");
	comma(cursor);
	const uint32_t word = (bits(op) & (dest.wide ? UINT32_MAX : 0x7fffffffu)) | dest.number;
	cursor.take('#');
	if (cursor.take(':'))
	{
		const uint32_t type = wide_move_relocation(cursor, op);
		const unsigned chunk = wide_move_chunk(type);
		if (chunk > 1 && !dest.wide)
			cursor.fail("AArch64 wide move relocation exceeds the destination width");
		return relocated(cursor, word | (chunk << 21), type, operand_expression(cursor, expressions));
	}
	const uint32_t value = fit(cursor, immediate(cursor, expressions), 65535);
	uint32_t shift = 0;
	if (cursor.take(','))
	{
		if (cursor.word() != "lsl")
			cursor.fail("expected lsl in AArch64 wide move");
		shift = fit(cursor, immediate(cursor, expressions), dest.wide ? 48 : 16);
		if (shift & 15)
			cursor.fail("invalid AArch64 wide move shift");
	}
	return { word | (value << 5) | (shift << 17) };
}

AssemblyWord bit_operation(const std::string& name, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols)
{
	const Gpr dest = gpr(cursor, symbols);
	comma(cursor);
	const Gpr source = gpr(cursor, symbols);
	if (source.wide != dest.wide || source.stack || dest.stack)
		cursor.fail("invalid AArch64 bit operation registers");
	comma(cursor);
	const uint32_t mask = dest.wide ? 63 : 31;
	const uint32_t regs = dest.number | (source.number << 5);
	const bool signed_bits = name == "asr" || name == "sbfm";
	const bool explicit_fields = name == "ubfm" || name == "sbfm" || name == "bfm";
	if (!explicit_fields && !immediate_start(cursor))
	{
		const Gpr shift = gpr(cursor, symbols);
		if (shift.wide != dest.wide || shift.stack)
			cursor.fail("invalid AArch64 shift register");
		const Op base = name == "lsl" ? Op::LslW : name == "lsr" ? Op::LsrW : Op::AsrW;
		return { bits(base) | (dest.wide ? 1u << 31 : 0) | regs | (shift.number << 16) };
	}
	const uint32_t amount = fit(cursor, immediate(cursor, expressions), mask);
	uint32_t rotate = amount;
	uint32_t stop = mask;
	if (explicit_fields)
	{
		comma(cursor);
		stop = fit(cursor, immediate(cursor, expressions), mask);
	}
	else if (name == "lsl")
	{
		rotate = (0u - amount) & mask;
		stop -= amount;
	}
	const Op op = name == "bfm" ? (dest.wide ? Op::Bfm : Op::BfmW)
		: signed_bits           ? (dest.wide ? Op::Sbfm : Op::SbfmW)
								: (dest.wide ? Op::Ubfm : Op::UbfmW);
	return { bits(op) | regs | (rotate << 16) | (stop << 10) };
}

AssemblyWord move(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	const Gpr dest = gpr(cursor, symbols);
	comma(cursor);
	if (immediate_start(cursor))
	{
		if (dest.stack)
			cursor.fail("AArch64 move immediate requires a general-purpose destination");
		const uint32_t value = fit(cursor, immediate(cursor, expressions), 65535);
		return { (bits(Op::MovZ) & (dest.wide ? UINT32_MAX : 0x7fffffffu)) | (value << 5) | dest.number };
	}
	const Gpr source = gpr(cursor, symbols);
	if (source.wide != dest.wide ||
		((source.stack || dest.stack) &&
			((source.number == 31 && !source.stack) || (dest.number == 31 && !dest.stack))))
		cursor.fail("invalid registers for AArch64 move");
	if (source.stack || dest.stack)
		return { bits(dest.wide ? Op::AddI : Op::AddIW) | dest.number | (source.number << 5) };
	return { bits(dest.wide ? Op::Orr : Op::OrrW) | dest.number | (31u << 5) | (source.number << 16) };
}

AssemblyWord load_store(const std::string& name, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols)
{
	const bool load = name == "ldr" || name == "ldrb" || name == "ldrh";
	const unsigned narrow = name.back() == 'b' ? 1 : name.back() == 'h' ? 2 : 0;
	const Gpr value = gpr(cursor, symbols);
	comma(cursor);
	if (!cursor.take('['))
		cursor.fail("expected an AArch64 base address");
	const Gpr base = gpr(cursor, symbols);
	if (!base.wide || (base.number == 31 && !base.stack) || value.stack || (narrow && value.wide))
		cursor.fail("invalid register width for AArch64 load or store");
	const unsigned scale = narrow == 1 ? 0 : narrow == 2 ? 1 : value.wide ? 3 : 2;
	static const Op loads[] = { Op::LdrB, Op::LdrH, Op::LdrW, Op::LdrX };
	static const Op stores[] = { Op::StrB, Op::StrH, Op::StrW, Op::StrX };
	const uint32_t word = bits(load ? loads[scale] : stores[scale]) | value.number | (base.number << 5);
	AssemblyWord result{ word };
	if (cursor.take(','))
	{
		cursor.take('#');
		if (cursor.take(':'))
		{
			if (cursor.word() != "lo12" || !cursor.take(':'))
				cursor.fail("unsupported AArch64 address relocation modifier");
			static const uint32_t relocations[] = { Ldst8Lo12, Ldst16Lo12, Ldst32Lo12, Ldst64Lo12 };
			result = relocated(cursor, word, relocations[scale], operand_expression(cursor, expressions));
		}
		else
		{
			const uint64_t offset = immediate(cursor, expressions);
			if (offset & ((1u << scale) - 1))
				cursor.fail("misaligned AArch64 load or store offset");
			result.bits |= fit(cursor, offset >> scale, 4095) << 10;
		}
	}
	if (!cursor.take(']'))
		cursor.fail("expected a closing AArch64 address bracket");
	return result;
}

AssemblyWord load_store_pair(
	bool load, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	const Gpr first = gpr(cursor, symbols);
	comma(cursor);
	const Gpr second = gpr(cursor, symbols);
	comma(cursor);
	if (!cursor.take('['))
		cursor.fail("expected an AArch64 pair base address");
	const Gpr base = gpr(cursor, symbols);
	if (!base.wide || (base.number == 31 && !base.stack) || first.wide != second.wide || first.stack || second.stack)
		cursor.fail("invalid AArch64 pair registers");
	const bool inside = cursor.take(',');
	int64_t offset = inside ? static_cast<int64_t>(immediate(cursor, expressions)) : 0;
	if (!cursor.take(']'))
		cursor.fail("expected a closing AArch64 address bracket");
	const bool pre = cursor.take('!');
	const bool post = !pre && cursor.take(',');
	if (post)
	{
		if (inside)
			cursor.fail("two offsets in AArch64 pair address");
		offset = static_cast<int64_t>(immediate(cursor, expressions));
	}
	if ((pre || post) && base.number != 31 && (base.number == first.number || base.number == second.number))
		cursor.fail("AArch64 pair writeback overlaps a transfer register");
	if (load && first.number == second.number)
		cursor.fail("AArch64 pair load destinations overlap");
	const int64_t scale = first.wide ? 8 : 4;
	if (offset % scale != 0 || offset / scale < -64 || offset / scale > 63)
		cursor.fail("AArch64 pair offset is out of range");
	const auto op = load ? (first.wide ? Op::LdpX : Op::LdpW) : (first.wide ? Op::StpX : Op::StpW);
	uint32_t word = bits(op) | first.number | (base.number << 5) | (second.number << 10) |
		((static_cast<uint32_t>(offset / scale) & 127) << 15);
	if (pre)
		word |= 1u << 23;
	else if (post)
		word = (word & ~(1u << 24)) | (1u << 23);
	return { word };
}

uint32_t system_register(ModuleCursor& cursor, const std::string& name)
{
	struct NamedRegister
	{
		const char* name;
		uint16_t fields;
	};
	// op0, op1, CRn, CRm and op2 as one instruction field.
	static const NamedRegister registers[] = {
		{ "cntfrq_el0", 0xdf00 },
		{ "cntpct_el0", 0xdf01 },
		{ "cntvct_el0", 0xdf02 },
		{ "contextidr_el1", 0xc681 },
		{ "ctr_el0", 0xd801 },
		{ "currentel", 0xc212 },
		{ "daif", 0xda11 },
		{ "elr_el1", 0xc201 },
		{ "mair_el1", 0xc510 },
		{ "mpidr_el1", 0xc005 },
		{ "nzcv", 0xda10 },
		{ "sctlr_el1", 0xc080 },
		{ "sp_el0", 0xc208 },
		{ "spsr_el1", 0xc200 },
		{ "tcr_el1", 0xc102 },
		{ "tpidr_el0", 0xde82 },
		{ "tpidr_el1", 0xc684 },
		{ "tpidrro_el0", 0xde83 },
		{ "ttbr0_el1", 0xc100 },
		{ "ttbr1_el1", 0xc101 },
		{ "vbar_el1", 0xc600 },
		{ "vbar_el2", 0xe600 },
	};
	for (const auto& reg : registers)
		if (name == reg.name)
			return reg.fields;
	if (name.size() > 1 && name[0] == 's')
	{
		const ModuleCursor encoded(name, 1, cursor.line(), cursor.column());
		ModuleCursor fields = encoded;
		const uint32_t op0 = fit(cursor, fields.number(), 3);
		if (op0 < 2 || !fields.take('_'))
			cursor.fail("invalid AArch64 system register encoding");
		const uint32_t op1 = fit(cursor, fields.number(), 7);
		if (!fields.take('_') || !fields.take('c'))
			cursor.fail("expected CRn in AArch64 system register");
		const uint32_t crn = fit(cursor, fields.number(), 15);
		if (!fields.take('_') || !fields.take('c'))
			cursor.fail("expected CRm in AArch64 system register");
		const uint32_t crm = fit(cursor, fields.number(), 15);
		if (!fields.take('_'))
			cursor.fail("expected op2 in AArch64 system register");
		const uint32_t op2 = fit(cursor, fields.number(), 7);
		fields.finish();
		return (op0 << 14) | (op1 << 11) | (crn << 7) | (crm << 3) | op2;
	}
	cursor.fail("unknown AArch64 system register " + name);
}

AssemblyWord system_move(
	bool read, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	if (read)
	{
		const Gpr dest = gpr(cursor, symbols);
		if (!dest.wide || dest.stack)
			cursor.fail("AArch64 system register read requires an x register");
		comma(cursor);
		const uint32_t reg = system_register(cursor, assembly::module_macro_name(cursor.word()));
		return { 0xd5300000u | (reg << 5) | dest.number };
	}
	const std::string name = assembly::module_macro_name(cursor.word());
	comma(cursor);
	if (immediate_start(cursor))
	{
		uint32_t field;
		if (name == "daifset" || name == "daifclr")
			field = (3 << 16) | ((name == "daifset" ? 6 : 7) << 5);
		else if (name == "spsel" || name == "pan" || name == "uao")
			field = (name == "spsel" ? 5 : name == "pan" ? 4 : 3) << 5;
		else
			cursor.fail("unknown AArch64 immediate PSTATE field " + name);
		return { 0xd500401fu | field | (fit(cursor, immediate(cursor, expressions), 15) << 8) };
	}
	const Gpr source = gpr(cursor, symbols);
	if (!source.wide || source.stack)
		cursor.fail("AArch64 system register write requires an x register");
	return { 0xd5100000u | (system_register(cursor, name) << 5) | source.number };
}

unsigned barrier_option(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions)
{
	if (cursor.end())
		return 15;
	if (immediate_start(cursor))
		return fit(cursor, immediate(cursor, expressions), 15);
	const std::string name = cursor.word();
	static const char* const options[] = { "", "oshld", "oshst", "osh", "", "nshld", "nshst", "nsh", "", "ishld",
		"ishst", "ish", "", "ld", "st", "sy" };
	for (unsigned i = 0; i < sizeof(options) / sizeof(options[0]); ++i)
		if (name == options[i])
			return i;
	cursor.fail("unknown AArch64 barrier option " + name);
}

} // namespace

AssemblyWord assemble_word(const std::string& mnemonic, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols)
{
	if (mnemonic == ".inst")
		return { fit(cursor, immediate(cursor, expressions), UINT32_MAX) };
	if (mnemonic == "nop")
		return { bits(Op::Nop) };
	if (mnemonic == "hint")
		return { bits(Op::Nop) | (fit(cursor, immediate(cursor, expressions), 127) << 5) };
	if (mnemonic == "bti")
	{
		const std::string kind = cursor.end() ? "" : cursor.word();
		if (kind != "" && kind != "c" && kind != "j" && kind != "jc")
			cursor.fail("unknown AArch64 BTI target kind");
		const uint32_t hint = 32 + (kind == "c" ? 2 : kind == "j" ? 4 : kind == "jc" ? 6 : 0);
		return { bits(Op::Nop) | (hint << 5) };
	}
	if (mnemonic == "svc" || mnemonic == "hvc" || mnemonic == "smc" || mnemonic == "brk")
	{
		const uint32_t op = mnemonic == "svc" ? bits(Op::Svc)
			: mnemonic == "hvc"               ? 0xd4000002u
			: mnemonic == "smc"               ? 0xd4000003u
											  : 0xd4200000u;
		return { op | (fit(cursor, immediate(cursor, expressions), 65535) << 5) };
	}
	if (mnemonic == "mrs" || mnemonic == "msr")
		return system_move(mnemonic == "mrs", cursor, expressions, symbols);
	if (mnemonic == "dmb" || mnemonic == "dsb" || mnemonic == "isb")
	{
		const uint32_t op = mnemonic == "dmb" ? 0xd50330bfu : mnemonic == "dsb" ? 0xd503309fu : 0xd50330dfu;
		return { op | (barrier_option(cursor, expressions) << 8) };
	}
	if (mnemonic == "ret" || mnemonic == "br" || mnemonic == "blr")
	{
		const Gpr reg = mnemonic == "ret" && cursor.end() ? Gpr{ 30, true, false } : gpr(cursor, symbols);
		if (!reg.wide || reg.number == 31)
			cursor.fail("invalid AArch64 indirect branch register");
		return { bits(mnemonic == "ret" ? Op::Ret : mnemonic == "br" ? Op::Br : Op::Blr) | (reg.number << 5) };
	}
	if (mnemonic == "b" || mnemonic == "bl")
		return relocated(cursor, bits(mnemonic == "b" ? Op::B : Op::Bl), mnemonic == "b" ? Jump26 : Call26,
			operand_expression(cursor, expressions));
	if (mnemonic.compare(0, 2, "b.") == 0)
		return relocated(cursor, bits(Op::BCond) | condition(cursor, mnemonic.substr(2)), CondBranch19,
			operand_expression(cursor, expressions));
	if (mnemonic == "cbz" || mnemonic == "cbnz" || mnemonic == "tbz" || mnemonic == "tbnz")
	{
		const Gpr reg = gpr(cursor, symbols);
		if (reg.stack)
			cursor.fail("AArch64 test branch requires a general-purpose register");
		comma(cursor);
		const bool test = mnemonic[0] == 't';
		const bool nonzero = mnemonic[2] == 'n';
		uint32_t word = bits(test ? Op::Tbz : Op::CbzW) | (nonzero ? 1u << 24 : 0) | reg.number;
		if (test)
		{
			const uint32_t bit = fit(cursor, immediate(cursor, expressions), reg.wide ? 63 : 31);
			word |= (bit & 31) << 19 | (bit & 32) << 26;
			comma(cursor);
		}
		else if (reg.wide)
			word |= 1u << 31;
		return relocated(cursor, word, test ? TestBranch14 : CondBranch19, operand_expression(cursor, expressions));
	}
	if (mnemonic == "adr" || mnemonic == "adrp")
	{
		const Gpr reg = gpr(cursor, symbols);
		if (!reg.wide || reg.stack)
			cursor.fail("AArch64 address materialization requires an x register");
		comma(cursor);
		return relocated(cursor, bits(mnemonic == "adr" ? Op::Adr : Op::Adrp) | reg.number,
			mnemonic == "adr" ? AdrPrelLo21 : AdrPrelPage21, operand_expression(cursor, expressions));
	}
	if (mnemonic == "add" || mnemonic == "sub" || mnemonic == "adds" || mnemonic == "subs" || mnemonic == "cmp" ||
		mnemonic == "cmn")
		return add_sub(mnemonic, cursor, expressions, symbols);
	for (const LogicalForm& form : kLogicalForms)
		if (mnemonic == form.mnemonic)
			return logical_word(form, cursor, expressions, symbols);
	if (mnemonic == "lsl" || mnemonic == "lsr" || mnemonic == "asr" || mnemonic == "ubfm" || mnemonic == "sbfm" ||
		mnemonic == "bfm")
		return bit_operation(mnemonic, cursor, expressions, symbols);
	if (mnemonic == "mov")
		return move(cursor, expressions, symbols);
	if (mnemonic == "movz" || mnemonic == "movk" || mnemonic == "movn")
		return move_wide(mnemonic == "movz" ? Op::MovZ
				: mnemonic == "movk"        ? Op::MovK
											: Op::MovN,
			cursor, expressions, symbols);
	if (mnemonic == "ldp" || mnemonic == "stp")
		return load_store_pair(mnemonic == "ldp", cursor, expressions, symbols);
	if (mnemonic == "ldr" || mnemonic == "str" || mnemonic == "ldrb" || mnemonic == "strb" || mnemonic == "ldrh" ||
		mnemonic == "strh")
		return load_store(mnemonic, cursor, expressions, symbols);
	cursor.fail("unsupported AArch64 instruction " + mnemonic);
}

void finish_assembly_branches(native::object::ObjectFile& object)
{
	namespace obj = native::object;
	for (uint32_t id = 1; id < object.sections.size(); ++id)
	{
		obj::Section& section = object.sections[id];
		size_t retained = 0;
		for (const obj::Relocation& relocation : section.relocations)
		{
			const auto& target = object.symbols[relocation.symbol];
			const bool relative = relocation.type == Call26 || relocation.type == Jump26 ||
				relocation.type == TestBranch14 || relocation.type == CondBranch19 || relocation.type == AdrPrelLo21;
			if (relative && target.section == id && target.binding == obj::Binding::Local)
			{
				std::string error;
				if (!apply_relocation(relocation.type, section.bytes.data() + relocation.offset,
						section.bytes.size() - relocation.offset, target.value + relocation.addend, relocation.offset,
						error))
					throw AArch64Error(error);
			}
			else
				section.relocations[retained++] = relocation;
		}
		section.relocations.resize(retained);
	}
}

void append_code_padding(std::vector<uint8_t>& bytes, uint64_t count)
{
	bytes.resize(bytes.size() + (count & 3));
	const uint32_t nop = bits(Op::Nop);
	for (uint64_t i = 0; i < count / 4; ++i)
		for (unsigned byte = 0; byte < 4; ++byte)
			bytes.push_back(static_cast<uint8_t>(nop >> (8 * byte)));
}

} // namespace aarch64
