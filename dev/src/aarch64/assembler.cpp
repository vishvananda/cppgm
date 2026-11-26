#include "aarch64/assembler.h"

#include <algorithm>
#include <cstring>
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

constexpr uint32_t bits(Op op)
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
	return assembly::assembly_module_expression(cursor, expressions);
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

unsigned condition_code(const std::string& name)
{
	static const char* const names[] = { "eq", "ne", "cs", "cc", "mi", "pl", "vs", "vc", "hi", "ls", "ge", "lt", "gt",
		"le", "al", "nv" };
	if (name == "hs" || name == "lo")
		return name == "hs" ? 2 : 3;
	for (unsigned i = 0; i < sizeof(names) / sizeof(names[0]); ++i)
		if (name == names[i])
			return i;
	return 16;
}

unsigned condition(ModuleCursor& cursor, const std::string& name)
{
	const unsigned code = condition_code(name);
	if (code == 16)
		cursor.fail("unknown AArch64 condition " + name);
	return code;
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
	uint32_t modifiers = (dest.wide ? 0x80000000u : 0) | (subtract ? 0x40000000u : 0) | (flags ? 0x20000000u : 0) |
		dest.number | (source.number << 5);
	const bool explicit_immediate = cursor.take('#');
	if (cursor.take(':'))
	{
		if (cursor.word() != "lo12" || !cursor.take(':') || subtract || flags)
			cursor.fail("unsupported AArch64 arithmetic relocation modifier");
		return relocated(cursor, bits(Op::AddIW) | modifiers, AddLo12, operand_expression(cursor, expressions));
	}
	if (explicit_immediate || immediate_start(cursor))
	{
		if ((source.number == 31 && !source.stack) || (dest.number == 31 && dest.stack == flags))
			cursor.fail("invalid stack or zero register for AArch64 immediate arithmetic");
		uint64_t value = immediate(cursor, expressions);
		if (static_cast<int64_t>(value) < 0)
		{
			value = 0 - value;
			modifiers ^= 1u << 30;
		}
		uint64_t shift = 0;
		if (cursor.take(','))
		{
			if (cursor.word() != "lsl")
				cursor.fail("expected lsl in AArch64 immediate arithmetic");
			shift = immediate(cursor, expressions);
			if (shift != 0 && shift != 12)
				cursor.fail("invalid AArch64 add/sub immediate shift");
		}
		else if (value > 4095 && (value & 4095) == 0)
		{
			shift = 12;
			value >>= 12;
		}
		return { bits(Op::AddIW) | modifiers | (fit(cursor, value, 4095) << 10) | (shift == 12 ? 1u << 22 : 0) };
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
	const bool signed_bits = name == "asr" || name == "sbfm" || name == "sbfx" || name == "sbfiz";
	const bool explicit_fields = name == "ubfm" || name == "sbfm" || name == "bfm";
	const bool extract = name == "ubfx" || name == "sbfx" || name == "bfxil";
	const bool insert = name == "ubfiz" || name == "sbfiz" || name == "bfi";
	if (!explicit_fields && !extract && !insert && !immediate_start(cursor))
	{
		const Gpr shift = gpr(cursor, symbols);
		if (shift.wide != dest.wide || shift.stack)
			cursor.fail("invalid AArch64 shift register");
		const uint32_t base = name == "lsl" ? bits(Op::LslW)
			: name == "lsr"                 ? bits(Op::LsrW)
			: name == "ror"                 ? 0x1ac02c00u
											: bits(Op::AsrW);
		return { base | (dest.wide ? 1u << 31 : 0) | regs | (shift.number << 16) };
	}
	const uint32_t amount = fit(cursor, immediate(cursor, expressions), mask);
	if (name == "ror")
		return { bits(dest.wide ? Op::Extr : Op::ExtrW) | regs | (source.number << 16) | (amount << 10) };
	uint32_t rotate = amount;
	uint32_t stop = mask;
	if (explicit_fields)
	{
		comma(cursor);
		stop = fit(cursor, immediate(cursor, expressions), mask);
	}
	else if (extract || insert)
	{
		comma(cursor);
		const uint32_t width = fit(cursor, immediate(cursor, expressions), mask + 1 - amount);
		if (width == 0)
			cursor.fail("AArch64 bit-field width must be nonzero");
		rotate = insert ? (0u - amount) & mask : amount;
		stop = (insert ? 0 : amount) + width - 1;
	}
	else if (name == "lsl")
	{
		rotate = (0u - amount) & mask;
		stop -= amount;
	}
	const Op op = name == "bfm" || name == "bfi" || name == "bfxil" ? (dest.wide ? Op::Bfm : Op::BfmW)
		: signed_bits                                               ? (dest.wide ? Op::Sbfm : Op::SbfmW)
																	: (dest.wide ? Op::Ubfm : Op::UbfmW);
	return { bits(op) | regs | (rotate << 16) | (stop << 10) };
}

uint32_t move_immediate(ModuleCursor& cursor, Gpr dest, uint64_t value)
{
	const uint64_t mask = dest.wide ? UINT64_MAX : UINT32_MAX;
	const int64_t signed_value = static_cast<int64_t>(value);
	if (!dest.wide && (signed_value < INT32_MIN || signed_value > static_cast<int64_t>(UINT32_MAX)))
		cursor.fail("AArch64 move immediate exceeds the destination width");
	value &= mask;
	const uint32_t width_bit = dest.wide ? 1u << 31 : 0;
	for (unsigned inverted = 0; inverted < 2; ++inverted)
	{
		const uint64_t candidate = inverted ? value ^ mask : value;
		const unsigned half = candidate ? static_cast<unsigned>(__builtin_ctzll(candidate)) / 16 : 0;
		if ((candidate >> (16 * half)) <= UINT16_MAX)
		{
			const uint32_t op = inverted ? bits(Op::MovNW) : bits(Op::MovZ) & ~(1u << 31);
			return op | width_bit | (half << 21) | (uint32_t(candidate >> (half * 16)) << 5) | dest.number;
		}
	}
	uint32_t field;
	if (!logical_immediate(value, dest.wide ? 64 : 32, field))
		cursor.fail("AArch64 move immediate is not encodable in one instruction");
	return bits(Op::OrrImmW) | width_bit | (31u << 5) | field | dest.number;
}

AssemblyWord move(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	const Gpr dest = gpr(cursor, symbols);
	comma(cursor);
	if (immediate_start(cursor))
	{
		if (dest.stack)
			cursor.fail("AArch64 move immediate requires a general-purpose destination");
		return { move_immediate(cursor, dest, immediate(cursor, expressions)) };
	}
	cursor.space();
	if (cursor.current() == 'v' && cursor.current(1) >= '0' && cursor.current(1) <= '9')
	{
		if (dest.stack)
			cursor.fail("AArch64 SIMD lane extraction requires a general-purpose destination");
		return extract_neon_lane(cursor, expressions, symbols, dest.number, dest.wide);
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

AssemblyWord crc32(
	const std::string& mnemonic, ModuleCursor& cursor, const assembly::SymbolLookup& symbols, bool enabled)
{
	if (!enabled)
		cursor.fail("AArch64 CRC instruction requires the crc extension");
	const bool castagnoli = mnemonic.size() == 7 && mnemonic[5] == 'c';
	const char type = mnemonic.back();
	const unsigned width = type == 'b' ? 0 : type == 'h' ? 1 : type == 'w' ? 2 : type == 'x' ? 3 : 4;
	if ((!castagnoli && mnemonic.size() != 6) || width == 4)
		cursor.fail("unknown AArch64 CRC instruction " + mnemonic);
	const Gpr dest = gpr(cursor, symbols);
	comma(cursor);
	const Gpr initial = gpr(cursor, symbols);
	comma(cursor);
	const Gpr source = gpr(cursor, symbols);
	if (dest.wide || initial.wide || source.wide != (width == 3) || dest.stack || initial.stack || source.stack)
		cursor.fail("invalid AArch64 CRC register width");
	return { 0x1ac04000u | (unsigned(source.wide) << 31) | (unsigned(castagnoli) << 12) | (width << 10) |
		(source.number << 16) | (initial.number << 5) | dest.number };
}

AssemblyWord multiply(const std::string& mnemonic, ModuleCursor& cursor, const assembly::SymbolLookup& symbols)
{
	const Gpr dest = gpr(cursor, symbols);
	comma(cursor);
	const Gpr first = gpr(cursor, symbols);
	comma(cursor);
	const Gpr second = gpr(cursor, symbols);
	Gpr addend = { 31, dest.wide, false };
	if (mnemonic != "mul" && mnemonic != "mneg")
	{
		comma(cursor);
		addend = gpr(cursor, symbols);
	}
	if (dest.wide != first.wide || dest.wide != second.wide || dest.wide != addend.wide || dest.stack || first.stack ||
		second.stack || addend.stack)
		cursor.fail("invalid registers for AArch64 multiply");
	const uint32_t base = bits(mnemonic == "msub" || mnemonic == "mneg" ? Op::MsubW : Op::MaddW);
	return { base | (unsigned(dest.wide) << 31) | (second.number << 16) | (addend.number << 10) | (first.number << 5) |
		dest.number };
}

struct BitRearrange
{
	const char* name;
	uint32_t word;
};

const BitRearrange kBitRearrange[] = {
	{ "rbit", 0x5ac00000 },
	{ "rev16", 0x5ac00400 },
	{ "rev", 0x5ac00800 },
	{ "rev32", 0x5ac00800 },
	{ "clz", 0x5ac01000 },
	{ "cls", 0x5ac01400 },
};

AssemblyWord rearrange_bits(const BitRearrange& form, ModuleCursor& cursor, const assembly::SymbolLookup& symbols)
{
	const Gpr dest = gpr(cursor, symbols);
	comma(cursor);
	const Gpr source = gpr(cursor, symbols);
	if (dest.wide != source.wide || dest.stack || source.stack || (!dest.wide && std::strcmp(form.name, "rev32") == 0))
		cursor.fail("invalid registers for AArch64 bit rearrangement");
	const uint32_t word = form.word | (unsigned(dest.wide) << 31) |
		((dest.wide && std::strcmp(form.name, "rev") == 0) ? 0x400u : 0);
	return { word | (source.number << 5) | dest.number };
}

AssemblyWord compare_conditionally(const std::string& mnemonic, ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	const Gpr first = gpr(cursor, symbols);
	if (first.stack)
		cursor.fail("AArch64 conditional compare requires a general-purpose register");
	comma(cursor);
	const bool use_immediate = immediate_start(cursor);
	uint32_t second;
	if (use_immediate)
		second = fit(cursor, immediate(cursor, expressions), 31);
	else
	{
		const Gpr reg = gpr(cursor, symbols);
		if (reg.stack || reg.wide != first.wide)
			cursor.fail("invalid AArch64 conditional compare registers");
		second = reg.number;
	}
	comma(cursor);
	const uint32_t flags = fit(cursor, immediate(cursor, expressions), 15);
	comma(cursor);
	const uint32_t code = condition(cursor, cursor.word());
	const uint32_t word = bits(use_immediate ? Op::CcmpIW : Op::CcmpW) ^ (mnemonic == "ccmn" ? 1u << 30 : 0);
	return { word | (unsigned(first.wide) << 31) | (second << 16) | (code << 12) | (first.number << 5) | flags };
}

AssemblyWord select_conditionally(
	const std::string& mnemonic, ModuleCursor& cursor, const assembly::SymbolLookup& symbols)
{
	const Gpr dest = gpr(cursor, symbols);
	comma(cursor);
	const bool set = mnemonic == "cset" || mnemonic == "csetm";
	const bool alias = set || mnemonic == "cinc" || mnemonic == "cinv" || mnemonic == "cneg";
	const Gpr first = set ? Gpr{ 31, dest.wide, false } : gpr(cursor, symbols);
	if (!set)
		comma(cursor);
	const Gpr second = alias ? first : gpr(cursor, symbols);
	if (!alias)
		comma(cursor);
	if (dest.wide != first.wide || dest.wide != second.wide || dest.stack || first.stack || second.stack)
		cursor.fail("invalid registers for AArch64 conditional select");
	uint32_t code = condition(cursor, cursor.word());
	if (alias)
	{
		if (code >= 14)
			cursor.fail("invalid AArch64 conditional select alias condition");
		code ^= 1;
	}
	const bool invert = mnemonic == "csinv" || mnemonic == "csetm" || mnemonic == "cinv";
	const bool negate = mnemonic == "csneg" || mnemonic == "cneg";
	const bool increment = mnemonic == "csinc" || mnemonic == "cset" || mnemonic == "cinc";
	return { bits(Op::CselW) | (unsigned(dest.wide) << 31) | (unsigned(invert || negate) << 30) |
		(second.number << 16) | (code << 12) | (unsigned(increment || negate) << 10) | (first.number << 5) |
		dest.number };
}

uint32_t register_address_field(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols, unsigned scale)
{
	const Gpr index = gpr(cursor, symbols);
	const std::string kind = cursor.take(',') ? cursor.word() : "";
	const uint32_t option = kind == "uxtw" ? 2 : kind == "sxtw" ? 6 : kind == "sxtx" ? 7 : 3;
	if (index.stack || index.wide != (option == 3 || option == 7) || (option == 3 && !kind.empty() && kind != "lsl"))
		cursor.fail("invalid AArch64 register offset");
	cursor.space();
	const uint64_t shift = cursor.current() == ']' ? 0 : immediate(cursor, expressions);
	if (shift != 0 && shift != scale)
		cursor.fail("AArch64 register offset shift differs from the access size");
	return (index.number << 16) | (option << 13) | (unsigned(shift != 0) << 12);
}

struct TransferRegister
{
	unsigned number;
	unsigned scale;
	bool vector;
	bool stack;
};

TransferRegister transfer_register(ModuleCursor& cursor, const assembly::SymbolLookup& symbols)
{
	cursor.space();
	const char bank = cursor.current();
	const char digit = cursor.current(1);
	if (bank != '\0' && std::strchr("bhsdq", bank) && digit >= '0' && digit <= '9')
	{
		const std::string name = cursor.word();
		asm_model::Register reg;
		if (!assembly::parse_aarch64_register(name.data(), name.size(), reg) ||
			reg.bank != asm_model::RegisterBank::Vector)
			cursor.fail("invalid AArch64 SIMD/FP register");
		const unsigned scale = bank == 'b' ? 0 : bank == 'h' ? 1 : bank == 's' ? 2 : bank == 'd' ? 3 : 4;
		return { reg.number, scale, true, false };
	}
	const Gpr reg = gpr(cursor, symbols);
	return { reg.number, reg.wide ? 3u : 2u, false, reg.stack };
}

AssemblyWord float_move(ModuleCursor& cursor, const assembly::SymbolLookup& symbols, bool enabled)
{
	if (!enabled)
		cursor.fail("AArch64 fmov requires the fp extension");
	const TransferRegister dest = transfer_register(cursor, symbols);
	comma(cursor);
	const TransferRegister source = transfer_register(cursor, symbols);
	if ((!dest.vector && !source.vector) || dest.stack || source.stack || dest.scale != source.scale ||
		(dest.scale != 2 && dest.scale != 3))
		cursor.fail("invalid registers for AArch64 fmov");
	const bool wide = dest.scale == 3;
	const Op transfer = dest.vector ? (wide ? Op::FmovDX : Op::FmovSW) : (wide ? Op::FmovXD : Op::FmovWS);
	const uint32_t op = dest.vector && source.vector ? bits(Op::FmovFP) | (unsigned(wide) << 22) : bits(transfer);
	return { op | (source.number << 5) | dest.number };
}

AssemblyWord load_store(const std::string& name, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols, const AssemblyFeatures& features)
{
	const bool load = name[0] == 'l';
	const bool unscaled = name[2] == 'u';
	const bool sign = name.size() > 3 && name[name.size() - 2] == 's';
	const char suffix = name.back();
	const unsigned narrow = suffix == 'b' ? 1 : suffix == 'h' ? 2 : suffix == 'w' ? 4 : 0;
	const TransferRegister value = transfer_register(cursor, symbols);
	const bool wide = value.scale == 3;
	if (value.stack || (value.vector && (narrow || !features.fp)) || (narrow && !sign && wide) ||
		(narrow == 4 && !wide))
		cursor.fail("invalid register width for AArch64 load or store");
	comma(cursor);
	if (!cursor.take('['))
	{
		if (!load || unscaled || (narrow && narrow != 4) || (value.vector && value.scale < 2))
			cursor.fail("expected an AArch64 base address");
		const uint32_t type = value.vector ? value.scale - 2 : sign ? 2 : wide ? 1 : 0;
		const uint32_t word = 0x18000000u | (type << 30) | (unsigned(value.vector) << 26) | value.number;
		const bool pooled = cursor.take('=');
		const auto expr = operand_expression(cursor, expressions);
		if (!pooled)
			return relocated(cursor, word, LdPrelLo19, expr);
		if (sign || value.vector || expr.negative != asm_model::kNoId)
			cursor.fail("invalid AArch64 literal pool expression");
		AssemblyWord literal(word, LdPrelLo19, expr.positive, static_cast<int64_t>(expr.bits));
		literal.literal_width = wide ? 8 : 4;
		return literal;
	}
	const Gpr base = gpr(cursor, symbols);
	if (!base.wide || (base.number == 31 && !base.stack))
		cursor.fail("invalid AArch64 base register");
	const unsigned scale = narrow == 1 ? 0 : narrow == 2 ? 1 : narrow == 4 ? 2 : value.scale;
	const uint32_t mode = scale == 4 ? 2 + unsigned(load) : !sign ? unsigned(load) : wide ? 2 : 3;
	const uint32_t fields = ((scale & 3) << 30) | (mode << 22) | (unsigned(value.vector) << 26) | (base.number << 5) |
		value.number;
	int64_t offset = 0;
	const bool inside = cursor.take(',');
	if (inside)
	{
		const bool hash = cursor.take('#');
		if (!unscaled && cursor.take(':'))
		{
			if (cursor.word() != "lo12" || !cursor.take(':'))
				cursor.fail("unsupported AArch64 address relocation modifier");
			static const uint32_t relocations[] = { Ldst8Lo12, Ldst16Lo12, Ldst32Lo12, Ldst64Lo12, Ldst128Lo12 };
			const auto result = relocated(
				cursor, 0x39000000u | fields, relocations[scale], operand_expression(cursor, expressions));
			if (!cursor.take(']'))
				cursor.fail("expected a closing AArch64 address bracket");
			return result;
		}
		if (!hash && !immediate_start(cursor) && !unscaled)
		{
			const uint32_t index = register_address_field(cursor, expressions, symbols, scale);
			if (!cursor.take(']'))
				cursor.fail("expected a closing AArch64 address bracket");
			return { 0x38200800u | fields | index };
		}
		offset = static_cast<int64_t>(immediate(cursor, expressions));
	}
	if (!cursor.take(']'))
		cursor.fail("expected a closing AArch64 address bracket");
	const bool pre = cursor.take('!');
	const bool post = !pre && cursor.take(',');
	if (pre || post)
	{
		if (unscaled || (post && inside))
			cursor.fail("invalid AArch64 load or store writeback");
		if (!value.vector && base.number != 31 && base.number == value.number)
			cursor.fail("AArch64 load or store writeback overlaps the transfer register");
		if (post)
			offset = static_cast<int64_t>(immediate(cursor, expressions));
	}
	const int64_t unit = int64_t(1) << scale;
	if (!unscaled && !pre && !post && offset >= 0 && offset % unit == 0 && offset / unit <= 4095)
		return { 0x39000000u | fields | (static_cast<uint32_t>(offset / unit) << 10) };
	if (offset < -256 || offset > 255)
		cursor.fail("AArch64 signed load or store offset is out of range");
	const uint32_t writeback = pre ? 3u << 10 : post ? 1u << 10 : 0;
	return { 0x38000000u | fields | writeback | ((static_cast<uint32_t>(offset) & 511u) << 12) };
}

uint32_t prefetch_operation(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions)
{
	if (immediate_start(cursor))
		return fit(cursor, immediate(cursor, expressions), 31);
	const std::string name = cursor.word();
	const std::string type = name.substr(0, 3);
	const uint32_t operation = type == "pld" ? 0 : type == "pli" ? 1 : type == "pst" ? 2 : 3;
	if (operation == 3 || name.size() != 9 || name[3] != 'l' || name[4] < '1' || name[4] > '3' ||
		(name.compare(5, 4, "keep") != 0 && name.compare(5, 4, "strm") != 0))
		cursor.fail("unknown AArch64 prefetch operation " + name);
	return (operation << 3) | (static_cast<unsigned>(name[4] - '1') << 1) | (name[5] == 's');
}

AssemblyWord prefetch(
	ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	const uint32_t op = prefetch_operation(cursor, expressions);
	comma(cursor);
	if (!cursor.take('['))
		return relocated(cursor, 0xd8000000u | op, LdPrelLo19, operand_expression(cursor, expressions));
	const Gpr base = gpr(cursor, symbols);
	if (!base.wide || (base.number == 31 && !base.stack))
		cursor.fail("invalid register for AArch64 prefetch address");
	uint32_t word = 0xf9800000u | (base.number << 5) | op;
	if (cursor.take(','))
	{
		if (immediate_start(cursor))
		{
			const uint64_t offset = immediate(cursor, expressions);
			if (offset & 7)
				cursor.fail("misaligned AArch64 prefetch offset");
			word |= fit(cursor, offset >> 3, 4095) << 10;
		}
		else
		{
			word = 0xf8a00800u | register_address_field(cursor, expressions, symbols, 3) | (base.number << 5) | op;
		}
	}
	if (!cursor.take(']'))
		cursor.fail("expected a closing AArch64 prefetch address bracket");
	return { word };
}

AssemblyWord load_store_pair(const std::string& mnemonic, ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols, const AssemblyFeatures& features)
{
	const bool load = mnemonic[0] == 'l';
	const bool nontemporal = mnemonic[2] == 'n';
	const TransferRegister first = transfer_register(cursor, symbols);
	comma(cursor);
	const TransferRegister second = transfer_register(cursor, symbols);
	comma(cursor);
	if (!cursor.take('['))
		cursor.fail("expected an AArch64 pair base address");
	const Gpr base = gpr(cursor, symbols);
	if (!base.wide || (base.number == 31 && !base.stack) || first.scale != second.scale ||
		first.vector != second.vector || first.stack || second.stack ||
		(first.vector && (!features.fp || first.scale < 2)))
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
	if (nontemporal && (pre || post))
		cursor.fail("AArch64 non-temporal pair does not accept writeback");
	if (!first.vector && (pre || post) && base.number != 31 &&
		(base.number == first.number || base.number == second.number))
		cursor.fail("AArch64 pair writeback overlaps a transfer register");
	if (load && first.number == second.number)
		cursor.fail("AArch64 pair load destinations overlap");
	const int64_t scale = int64_t(1) << first.scale;
	if (offset % scale != 0 || offset / scale < -64 || offset / scale > 63)
		cursor.fail("AArch64 pair offset is out of range");
	const uint32_t mode = first.vector ? first.scale - 2 : first.scale == 3 ? 2 : 0;
	const uint32_t op = 0x29000000u | (mode << 30) | (unsigned(first.vector) << 26) | (unsigned(load) << 22);
	uint32_t word = op | first.number | (base.number << 5) | (second.number << 10) |
		((static_cast<uint32_t>(offset / scale) & 127) << 15);
	if (nontemporal)
		word &= ~(1u << 24);
	else if (pre)
		word |= 1u << 23;
	else if (post)
		word = (word & ~(1u << 24)) | (1u << 23);
	return { word };
}

struct AtomicAccess
{
	const char* mnemonic;
	uint32_t opcode;
	bool status;
	bool pair;
};

const AtomicAccess kAtomicAccesses[] = {
	{ "ldar", bits(Op::Ldar), false, false },
	{ "stlr", bits(Op::Stlr), false, false },
	{ "ldxr", bits(Op::Ldxr), false, false },
	{ "ldaxr", bits(Op::Ldxr) | 0x8000, false, false },
	{ "stxr", bits(Op::Stxr), true, false },
	{ "stlxr", bits(Op::Stxr) | 0x8000, true, false },
	{ "ldxp", 0x087f0000u, false, true },
	{ "ldaxp", 0x087f8000u, false, true },
	{ "stxp", 0x08200000u, true, true },
	{ "stlxp", 0x08208000u, true, true },
};

AssemblyWord atomic_access(const AtomicAccess& form, unsigned narrow, ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	unsigned status = 0;
	if (form.status)
	{
		const Gpr result = gpr(cursor, symbols);
		if (result.wide || result.stack)
			cursor.fail("AArch64 store-exclusive status requires a w register");
		status = result.number;
		comma(cursor);
	}
	const Gpr value = gpr(cursor, symbols);
	comma(cursor);
	uint32_t pair = 0;
	if (form.pair)
	{
		const Gpr second = gpr(cursor, symbols);
		if (narrow || second.wide != value.wide || second.stack || (!form.status && second.number == value.number))
			cursor.fail("invalid AArch64 exclusive pair registers");
		pair = second.number << 10;
		comma(cursor);
	}
	if (!cursor.take('['))
		cursor.fail("expected an AArch64 atomic address");
	const Gpr base = gpr(cursor, symbols);
	if (value.stack || (narrow && value.wide) || !base.wide || (base.number == 31 && !base.stack))
		cursor.fail("invalid registers for AArch64 atomic access");
	if (cursor.take(',') && immediate(cursor, expressions) != 0)
		cursor.fail("AArch64 atomic access does not accept an offset");
	if (!cursor.take(']'))
		cursor.fail("expected a closing AArch64 atomic address bracket");
	const uint32_t size = narrow ? narrow - 1 : value.wide ? 3 : 2;
	return { form.opcode | (size << 30) | (status << 16) | (base.number << 5) | value.number | pair };
}

enum class AtomicOperation
{
	Rmw,
	Store,
	Swap,
	Compare,
	ComparePair
};

struct LseForm
{
	AtomicOperation operation;
	unsigned code;
	unsigned width;
	bool acquire;
	bool release;
};

bool lse_form(const std::string& mnemonic, LseForm& form)
{
	size_t prefix = 0;
	unsigned code = 0;
	AtomicOperation operation = AtomicOperation::Rmw;
	if (mnemonic.compare(0, 4, "casp") == 0)
	{
		prefix = 4;
		operation = AtomicOperation::ComparePair;
	}
	else if (mnemonic.compare(0, 3, "cas") == 0 || mnemonic.compare(0, 3, "swp") == 0)
	{
		prefix = 3;
		operation = mnemonic[0] == 'c' ? AtomicOperation::Compare : AtomicOperation::Swap;
	}
	else if (mnemonic.compare(0, 2, "ld") == 0 || mnemonic.compare(0, 2, "st") == 0)
	{
		static const char* const ops[] = { "add", "clr", "eor", "set", "smax", "smin", "umax", "umin" };
		for (; code < sizeof(ops) / sizeof(ops[0]); ++code)
		{
			const size_t length = std::strlen(ops[code]);
			if (mnemonic.compare(2, length, ops[code]) == 0)
			{
				prefix = 2 + length;
				break;
			}
		}
		operation = mnemonic[0] == 's' ? AtomicOperation::Store : AtomicOperation::Rmw;
	}
	if (prefix == 0)
		return false;

	const bool acquire = mnemonic.size() > prefix && mnemonic[prefix] == 'a';
	prefix += acquire;
	const bool release = mnemonic.size() > prefix && mnemonic[prefix] == 'l';
	prefix += release;
	unsigned width = 0;
	if (operation != AtomicOperation::ComparePair && mnemonic.size() > prefix)
	{
		if (mnemonic[prefix] == 'b' || mnemonic[prefix] == 'h')
		{
			width = mnemonic[prefix] == 'b' ? 1 : 2;
			++prefix;
		}
	}
	if (prefix != mnemonic.size() || (operation == AtomicOperation::Store && acquire))
		return false;
	form = { operation, code, width, acquire, release };
	return true;
}

void pair_second(ModuleCursor& cursor, const assembly::SymbolLookup& symbols, Gpr first)
{
	comma(cursor);
	const Gpr second = gpr(cursor, symbols);
	if ((first.number & 1) || second.number != first.number + 1 || second.wide != first.wide || second.stack)
		cursor.fail("AArch64 CASP requires an even-odd register pair");
}

AssemblyWord lse_access(const LseForm& form, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols)
{
	const bool pair = form.operation == AtomicOperation::ComparePair;
	const Gpr source = gpr(cursor, symbols);
	if (pair)
		pair_second(cursor, symbols, source);
	comma(cursor);
	Gpr dest{ 31, source.wide, false };
	if (form.operation != AtomicOperation::Store)
	{
		dest = gpr(cursor, symbols);
		if (pair)
			pair_second(cursor, symbols, dest);
		comma(cursor);
	}
	if (!cursor.take('['))
		cursor.fail("expected an AArch64 LSE address");
	const Gpr base = gpr(cursor, symbols);
	if (source.wide != dest.wide || source.stack || dest.stack || (form.width && source.wide) || !base.wide ||
		(base.number == 31 && !base.stack))
		cursor.fail("invalid registers for AArch64 LSE instruction");
	if (cursor.take(',') && immediate(cursor, expressions) != 0)
		cursor.fail("AArch64 LSE instruction does not accept an offset");
	if (!cursor.take(']'))
		cursor.fail("expected a closing AArch64 LSE address bracket");
	const uint32_t regs = (source.number << 16) | (base.number << 5) | dest.number;
	const uint32_t size = pair ? static_cast<unsigned>(source.wide) : form.width ? form.width - 1 : source.wide ? 3 : 2;
	if (pair || form.operation == AtomicOperation::Compare)
		return { (pair ? 0x08207c00u : 0x08a07c00u) | (size << 30) | (unsigned(form.acquire) << 22) |
			(unsigned(form.release) << 15) | regs };
	const uint32_t op = form.operation == AtomicOperation::Swap ? 8 : form.code;
	return { 0x38200000u | (size << 30) | (unsigned(form.acquire) << 23) | (unsigned(form.release) << 22) | (op << 12) |
		regs };
}

AssemblyWord unprivileged_access(const std::string& mnemonic, ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	const bool load = mnemonic[0] == 'l';
	const unsigned narrow = mnemonic.back() == 'b' ? 1 : mnemonic.back() == 'h' ? 2 : 0;
	const Gpr value = gpr(cursor, symbols);
	comma(cursor);
	if (!cursor.take('['))
		cursor.fail("expected an AArch64 unprivileged address");
	const Gpr base = gpr(cursor, symbols);
	if (value.stack || (narrow && value.wide) || !base.wide || (base.number == 31 && !base.stack))
		cursor.fail("invalid registers for AArch64 unprivileged access");
	int64_t displacement = 0;
	if (cursor.take(','))
		displacement = static_cast<int64_t>(immediate(cursor, expressions));
	if (displacement < -256 || displacement > 255)
		cursor.fail("AArch64 unprivileged displacement is out of range");
	if (!cursor.take(']'))
		cursor.fail("expected a closing AArch64 unprivileged address bracket");
	const unsigned scale = narrow ? narrow - 1 : value.wide ? 3 : 2;
	return { 0x38000800u | (load ? 1u << 22 : 0) | (scale << 30) |
		((static_cast<uint32_t>(displacement) & 0x1ffu) << 12) | (base.number << 5) | value.number };
}

AssemblyWord carry_arithmetic(const std::string& mnemonic, ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	const Gpr dest = gpr(cursor, symbols);
	comma(cursor);
	const bool negate = mnemonic[0] == 'n';
	const Gpr first = negate ? Gpr{ 31, dest.wide, false } : gpr(cursor, symbols);
	if (!negate)
		comma(cursor);
	const Gpr second = gpr(cursor, symbols);
	if (dest.wide != first.wide || dest.wide != second.wide || dest.stack || first.stack || second.stack)
		cursor.fail("invalid registers for AArch64 carry arithmetic");
	const bool flags = mnemonic.back() == 's';
	const bool subtract = mnemonic[0] != 'a';
	uint32_t opcode = 0x1a000000u;
	uint32_t shift = 0;
	if (mnemonic == "neg" || mnemonic == "negs")
	{
		opcode = bits(Op::AddW);
		shift = register_shift(cursor, expressions, dest.wide ? 64 : 32, cursor.take(',') ? cursor.word() : "", false);
	}
	return { opcode | (unsigned(dest.wide) << 31) | (unsigned(subtract) << 30) | (unsigned(flags) << 29) |
		(second.number << 16) | (first.number << 5) | dest.number | shift };
}

struct SystemOperation
{
	const char* name;
	uint16_t fields;
	bool register_operand;
};

const SystemOperation kCacheOperations[] = {
	{ "zva", 0x1ba1, true },
	{ "ivac", 0x03b1, true },
	{ "isw", 0x03b2, true },
	{ "csw", 0x03d2, true },
	{ "cisw", 0x03f2, true },
	{ "cvac", 0x1bd1, true },
	{ "cvau", 0x1bd9, true },
	{ "civac", 0x1bf1, true },
};
const SystemOperation kInstructionCacheOperations[] = {
	{ "iallu", 0x03a8, false },
	{ "ialluis", 0x0388, false },
	{ "ivau", 0x1ba9, true },
};
const SystemOperation kTranslationOperations[] = {
	{ "alle1", 0x243c, false },
	{ "alle1is", 0x241c, false },
	{ "alle2", 0x2438, false },
	{ "alle2is", 0x2418, false },
	{ "aside1", 0x043a, true },
	{ "aside1is", 0x041a, true },
	{ "ipas2e1", 0x2421, true },
	{ "ipas2e1is", 0x2401, true },
	{ "rvaae1", 0x0433, true },
	{ "rvaae1is", 0x0413, true },
	{ "rvaale1", 0x0437, true },
	{ "rvaale1is", 0x0417, true },
	{ "rvae1", 0x0431, true },
	{ "rvae1is", 0x0411, true },
	{ "rvale1", 0x0435, true },
	{ "rvale1is", 0x0415, true },
	{ "vaae1", 0x043b, true },
	{ "vaae1is", 0x041b, true },
	{ "vaale1", 0x043f, true },
	{ "vaale1is", 0x041f, true },
	{ "vae1", 0x0439, true },
	{ "vae1is", 0x0419, true },
	{ "vale1", 0x043d, true },
	{ "vale1is", 0x041d, true },
	{ "vmalle1", 0x0438, false },
	{ "vmalle1is", 0x0418, false },
	{ "vmalls12e1", 0x243e, false },
	{ "vmalls12e1is", 0x241e, false },
};

const SystemOperation kAddressTranslations[] = {
	{ "s12e0r", 0x23c6, true },
	{ "s12e0w", 0x23c7, true },
	{ "s12e1r", 0x23c4, true },
	{ "s12e1w", 0x23c5, true },
	{ "s1e0r", 0x03c2, true },
	{ "s1e0w", 0x03c3, true },
	{ "s1e1r", 0x03c0, true },
	{ "s1e1w", 0x03c1, true },
	{ "s1e2r", 0x23c0, true },
	{ "s1e2w", 0x23c1, true },
};

template<size_t Count>
AssemblyWord system_operation(
	const SystemOperation (&operations)[Count], ModuleCursor& cursor, const assembly::SymbolLookup& symbols)
{
	const std::string name = assembly::module_macro_name(cursor.word());
	for (const SystemOperation& operation : operations)
		if (name == operation.name)
		{
			unsigned operand = 31;
			if (operation.register_operand)
			{
				comma(cursor);
				const Gpr reg = gpr(cursor, symbols);
				if (!reg.wide || reg.stack)
					cursor.fail("AArch64 system operation requires an x register");
				operand = reg.number;
			}
			return { 0xd5080000u | (operation.fields << 5) | operand };
		}
	cursor.fail("unknown AArch64 system operation " + name);
}

AssemblyWord system_instruction(
	bool read, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	Gpr reg{ 31, true, false };
	if (read)
	{
		reg = gpr(cursor, symbols);
		comma(cursor);
	}
	const uint32_t op1 = fit(cursor, immediate(cursor, expressions), 7);
	comma(cursor);
	if (!cursor.take('c') && !cursor.take('C'))
		cursor.fail("expected CRn in AArch64 system instruction");
	const uint32_t crn = fit(cursor, cursor.number(), 15);
	comma(cursor);
	if (!cursor.take('c') && !cursor.take('C'))
		cursor.fail("expected CRm in AArch64 system instruction");
	const uint32_t crm = fit(cursor, cursor.number(), 15);
	comma(cursor);
	const uint32_t op2 = fit(cursor, immediate(cursor, expressions), 7);
	if (!read && cursor.take(','))
		reg = gpr(cursor, symbols);
	if (!reg.wide || reg.stack)
		cursor.fail("invalid AArch64 system instruction register");
	return { (read ? 0xd5280000u : 0xd5080000u) | (op1 << 16) | (crn << 12) | (crm << 8) | (op2 << 5) | reg.number };
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
		{ "amair_el1", 0xc518 },
		{ "clidr_el1", 0xc801 },
		{ "cntfrq_el0", 0xdf00 },
		{ "cnthctl_el2", 0xe708 },
		{ "cntkctl_el1", 0xc708 },
		{ "cntp_ctl_el0", 0xdf11 },
		{ "cntp_cval_el0", 0xdf12 },
		{ "cntp_tval_el0", 0xdf10 },
		{ "cntpct_el0", 0xdf01 },
		{ "cntv_ctl_el0", 0xdf19 },
		{ "cntv_cval_el0", 0xdf1a },
		{ "cntv_tval_el0", 0xdf18 },
		{ "cntvct_el0", 0xdf02 },
		{ "cntvoff_el2", 0xe703 },
		{ "contextidr_el1", 0xc681 },
		{ "cpacr_el1", 0xc082 },
		{ "cptr_el2", 0xe08a },
		{ "ctr_el0", 0xd801 },
		{ "currentel", 0xc212 },
		{ "daif", 0xda11 },
		{ "dbgauthstatus_el1", 0x83f6 },
		{ "dczid_el0", 0xd807 },
		{ "elr_el1", 0xc201 },
		{ "elr_el2", 0xe201 },
		{ "esr_el1", 0xc290 },
		{ "esr_el2", 0xe290 },
		{ "far_el1", 0xc300 },
		{ "far_el2", 0xe300 },
		{ "fpcr", 0xda20 },
		{ "fpsr", 0xda21 },
		{ "hcr_el2", 0xe088 },
		{ "hpfar_el2", 0xe304 },
		{ "hstr_el2", 0xe08b },
		{ "id_aa64dfr0_el1", 0xc028 },
		{ "id_aa64mmfr0_el1", 0xc038 },
		{ "id_aa64mmfr1_el1", 0xc039 },
		{ "id_aa64pfr0_el1", 0xc020 },
		{ "id_aa64pfr1_el1", 0xc021 },
		{ "isr_el1", 0xc608 },
		{ "mair_el1", 0xc510 },
		{ "mdccint_el1", 0x8010 },
		{ "mdcr_el2", 0xe089 },
		{ "mdscr_el1", 0x8012 },
		{ "midr_el1", 0xc000 },
		{ "mpidr_el1", 0xc005 },
		{ "nzcv", 0xda10 },
		{ "osdlr_el1", 0x809c },
		{ "oslar_el1", 0x8084 },
		{ "oslsr_el1", 0x808c },
		{ "par_el1", 0xc3a0 },
		{ "pmccfiltr_el0", 0xdf7f },
		{ "pmccntr_el0", 0xdce8 },
		{ "pmcntenclr_el0", 0xdce2 },
		{ "pmcr_el0", 0xdce0 },
		{ "pmevtyper0_el0", 0xdf60 },
		{ "pmselr_el0", 0xdce5 },
		{ "pmuserenr_el0", 0xdcf0 },
		{ "sctlr_el1", 0xc080 },
		{ "sctlr_el2", 0xe080 },
		{ "sp_el0", 0xc208 },
		{ "sp_el1", 0xe208 },
		{ "spsel", 0xc210 },
		{ "spsr_abt", 0xe219 },
		{ "spsr_el1", 0xc200 },
		{ "spsr_el2", 0xe200 },
		{ "spsr_fiq", 0xe21b },
		{ "spsr_irq", 0xe218 },
		{ "spsr_und", 0xe21a },
		{ "tcr_el1", 0xc102 },
		{ "tpidr_el0", 0xde82 },
		{ "tpidr_el1", 0xc684 },
		{ "tpidr_el2", 0xe682 },
		{ "tpidrro_el0", 0xde83 },
		{ "ttbr0_el1", 0xc100 },
		{ "ttbr1_el1", 0xc101 },
		{ "vbar_el1", 0xc600 },
		{ "vbar_el2", 0xe600 },
		{ "vmpidr_el2", 0xe005 },
		{ "vpidr_el2", 0xe000 },
		{ "vtcr_el2", 0xe10a },
		{ "vttbr_el2", 0xe108 },
	};
	for (const auto& reg : registers)
		if (name == reg.name)
			return reg.fields;
	static const char* const debug[] = { "dbgbvr", "dbgbcr", "dbgwvr", "dbgwcr" };
	for (unsigned i = 0; i < sizeof(debug) / sizeof(debug[0]); ++i)
		if (name.compare(0, 6, debug[i]) == 0 && name.size() >= 11 && name.compare(name.size() - 4, 4, "_el1") == 0)
		{
			const ModuleCursor encoded(name, 6, cursor.line(), cursor.column());
			ModuleCursor field = encoded;
			const uint32_t index = fit(cursor, field.number(), 15);
			if (field.position() != name.size() - 4)
				cursor.fail("invalid AArch64 debug register number");
			return 0x8004 + (index << 3) + i;
		}
	if (name.size() > 2 && name[0] == 's' && (name[1] >= '0' && name[1] <= '3') && name[2] == '_')
	{
		const ModuleCursor encoded(name, 1, cursor.line(), cursor.column());
		ModuleCursor fields = encoded;
		const uint32_t op0 = fit(cursor, fields.number(), 3);
		if (!fields.take('_'))
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
		return { 0xd5200000u | (reg << 5) | dest.number };
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
	return { 0xd5000000u | (system_register(cursor, name) << 5) | source.number };
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

static void assembly_extension(AssemblyFeatures& features, ModuleCursor& cursor)
{
	const std::string name = assembly::module_macro_name(cursor.word());
	if (name == "lse" || name == "nolse")
		features.lse = name[0] != 'n';
	else if (name == "simd" || name == "nosimd")
	{
		features.neon = name[0] != 'n';
		features.fp |= features.neon;
	}
	else if (name == "fp" || name == "nofp")
	{
		features.fp = name[0] != 'n';
		features.neon &= features.fp;
	}
	else if (name == "crc" || name == "nocrc")
		features.crc = name[0] != 'n';
	else if (name == "crypto" || name == "nocrypto" || name == "aes" || name == "noaes")
	{
		features.crypto = name[0] != 'n';
		if (features.crypto)
			features.neon = features.fp = true;
	}
	else
		cursor.fail("unsupported AArch64 assembler extension " + name);
}

void set_assembly_features(AssemblyFeatures& features, const std::string& directive, ModuleCursor& cursor)
{
	if (directive == ".arch_extension")
	{
		assembly_extension(features, cursor);
		return;
	}
	features = AssemblyFeatures{};
	const std::string profile = assembly::module_macro_name(cursor.word());
	if (directive == ".cpu")
	{
		if (profile != "generic")
			cursor.fail("unsupported AArch64 assembler CPU " + profile);
	}
	else
	{
		const bool known = profile == "armv8" || profile == "armv9" ||
			(profile.size() == 7 && profile.compare(0, 4, "armv") == 0 && profile[5] == '.' &&
				((profile[4] == '8' && profile[6] >= '1' && profile[6] <= '9') ||
					(profile[4] == '9' && profile[6] >= '1' && profile[6] <= '7')));
		// The Linux A-profile names end in -a, separated by the module cursor.
		if (!known || !cursor.take('-') || cursor.word() != "a")
			cursor.fail("unsupported AArch64 assembler architecture " + profile);
		features.lse = profile[4] == '9' || (profile[4] == '8' && profile.size() > 5);
	}
	while (cursor.take('+'))
		assembly_extension(features, cursor);
}

static bool uses_neon(const std::string& mnemonic, ModuleCursor& cursor)
{
	if (mnemonic == "ld1" || mnemonic == "st1" || mnemonic == "movi" || mnemonic == "uzp1" || mnemonic == "uzp2" ||
		mnemonic == "shl" || mnemonic == "sri" || mnemonic == "ext" || mnemonic == "pmull" || mnemonic == "pmull2")
		return true;
	if (mnemonic != "mov" && mnemonic != "add" && mnemonic != "sub" && mnemonic != "and" && mnemonic != "orr" &&
		mnemonic != "eor" && mnemonic != "rev32")
		return false;
	cursor.space();
	return (cursor.current() == 'v' || cursor.current() == 'd') && cursor.current(1) >= '0' && cursor.current(1) <= '9';
}

AssemblyWord assemble_word(const std::string& mnemonic, ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols, const AssemblyFeatures& features)
{
	if (uses_neon(mnemonic, cursor))
	{
		if (!features.neon)
			cursor.fail("AArch64 SIMD instructions require the simd extension");
		return assemble_neon(mnemonic, cursor, expressions, symbols, features);
	}
	if (mnemonic == ".inst")
		return { fit(cursor, immediate(cursor, expressions), UINT32_MAX) };
	static const char* const hints[] = { "nop", "yield", "wfe", "wfi", "sev", "sevl" };
	const auto hint = std::find(std::begin(hints), std::end(hints), mnemonic);
	if (hint != std::end(hints))
		return { bits(Op::Nop) | (static_cast<uint32_t>(hint - std::begin(hints)) << 5) };
	if (mnemonic == "eret")
		return { 0xd69f03e0u };
	if (mnemonic == "clrex")
	{
		const uint32_t option = cursor.end() ? 15 : fit(cursor, immediate(cursor, expressions), 15);
		return { (bits(Op::Clrex) & ~(15u << 8)) | (option << 8) };
	}
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
	if (mnemonic == "dc")
		return system_operation(kCacheOperations, cursor, symbols);
	if (mnemonic == "ic")
		return system_operation(kInstructionCacheOperations, cursor, symbols);
	if (mnemonic == "tlbi")
		return system_operation(kTranslationOperations, cursor, symbols);
	if (mnemonic == "at")
		return system_operation(kAddressTranslations, cursor, symbols);
	if (mnemonic == "sys" || mnemonic == "sysl")
		return system_instruction(mnemonic == "sysl", cursor, expressions, symbols);
	if (mnemonic == "prfm")
		return prefetch(cursor, expressions, symbols);
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
	if (mnemonic.compare(0, 2, "b.") == 0 ||
		(mnemonic.size() == 3 && mnemonic[0] == 'b' && condition_code(mnemonic.substr(1)) != 16))
	{
		const uint32_t code = condition(cursor, mnemonic.substr(mnemonic[1] == '.' ? 2 : 1));
		return relocated(cursor, bits(Op::BCond) | code, CondBranch19, operand_expression(cursor, expressions));
	}
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
	static const char* const bit_operations[] = { "lsl", "lsr", "asr", "ror", "ubfm", "sbfm", "bfm", "ubfx", "sbfx",
		"ubfiz", "sbfiz", "bfi", "bfxil" };
	if (std::find(std::begin(bit_operations), std::end(bit_operations), mnemonic) != std::end(bit_operations))
		return bit_operation(mnemonic, cursor, expressions, symbols);
	for (const BitRearrange& form : kBitRearrange)
		if (mnemonic == form.name)
			return rearrange_bits(form, cursor, symbols);
	if (mnemonic.compare(0, 5, "crc32") == 0)
		return crc32(mnemonic, cursor, symbols, features.crc);
	if (mnemonic == "mul" || mnemonic == "madd" || mnemonic == "msub" || mnemonic == "mneg")
		return multiply(mnemonic, cursor, symbols);
	if (mnemonic == "ccmp" || mnemonic == "ccmn")
		return compare_conditionally(mnemonic, cursor, expressions, symbols);
	static const char* const selects[] = { "csel", "csinc", "csinv", "csneg", "cset", "csetm", "cinc", "cinv", "cneg" };
	if (std::find(std::begin(selects), std::end(selects), mnemonic) != std::end(selects))
		return select_conditionally(mnemonic, cursor, symbols);
	if (mnemonic == "neg" || mnemonic == "negs" || mnemonic == "ngc" || mnemonic == "ngcs" || mnemonic == "adc" ||
		mnemonic == "adcs" || mnemonic == "sbc" || mnemonic == "sbcs")
		return carry_arithmetic(mnemonic, cursor, expressions, symbols);
	if (mnemonic == "mov")
		return move(cursor, expressions, symbols);
	if (mnemonic == "fmov")
		return float_move(cursor, symbols, features.fp);
	if (mnemonic == "umov")
	{
		if (!features.neon)
			cursor.fail("AArch64 umov requires the simd extension");
		const Gpr dest = gpr(cursor, symbols);
		if (dest.stack)
			cursor.fail("AArch64 umov requires a general-purpose destination");
		comma(cursor);
		return extract_neon_lane(cursor, expressions, symbols, dest.number, dest.wide);
	}
	if (mnemonic == "movz" || mnemonic == "movk" || mnemonic == "movn")
		return move_wide(mnemonic == "movz" ? Op::MovZ
				: mnemonic == "movk"        ? Op::MovK
											: Op::MovN,
			cursor, expressions, symbols);
	if (mnemonic == "ldtr" || mnemonic == "sttr" || mnemonic == "ldtrb" || mnemonic == "sttrb" || mnemonic == "ldtrh" ||
		mnemonic == "sttrh")
		return unprivileged_access(mnemonic, cursor, expressions, symbols);
	LseForm form;
	if (lse_form(mnemonic, form))
	{
		if (!features.lse)
			cursor.fail("AArch64 LSE instruction requires the lse extension");
		return lse_access(form, cursor, expressions, symbols);
	}
	const unsigned narrow = mnemonic.back() == 'b' ? 1 : mnemonic.back() == 'h' ? 2 : 0;
	const size_t base_length = mnemonic.size() - (narrow != 0);
	for (const AtomicAccess& form : kAtomicAccesses)
		if (mnemonic.compare(0, base_length, form.mnemonic) == 0)
			return atomic_access(form, narrow, cursor, expressions, symbols);
	if (mnemonic == "ldp" || mnemonic == "stp" || mnemonic == "ldnp" || mnemonic == "stnp")
		return load_store_pair(mnemonic, cursor, expressions, symbols, features);
	static const char* const scalar_accesses[] = { "ldr", "str", "ldrb", "strb", "ldrh", "strh", "ldrsb", "ldrsh",
		"ldrsw", "ldur", "stur", "ldurb", "sturb", "ldurh", "sturh", "ldursb", "ldursh", "ldursw" };
	if (std::find(std::begin(scalar_accesses), std::end(scalar_accesses), mnemonic) != std::end(scalar_accesses))
		return load_store(mnemonic, cursor, expressions, symbols, features);
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
				relocation.type == TestBranch14 || relocation.type == CondBranch19 || relocation.type == AdrPrelLo21 ||
				relocation.type == LdPrelLo19;
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
