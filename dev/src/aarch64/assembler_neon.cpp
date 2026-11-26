#include "aarch64/assembler.h"

#include "aarch64/mir.h"
#include "asm/registers.h"

namespace aarch64 {
namespace {

using assembly::ModuleCursor;

struct Vector
{
	unsigned number;
	unsigned size;
	unsigned lanes;
	bool scalar;

	unsigned elements() const { return 8u << size; }
	uint32_t wide() const { return lanes * elements() == 128 ? 1u << 30 : 0; }
};

unsigned element_size(ModuleCursor& cursor, char suffix)
{
	switch (suffix)
	{
	case 'b':
		return 0;
	case 'h':
		return 1;
	case 's':
		return 2;
	case 'd':
		return 3;
	case 'q':
		return 4;
	default:
		cursor.fail("expected an AArch64 SIMD element width");
	}
}

Vector vector_register(ModuleCursor& cursor, const assembly::SymbolLookup& symbols)
{
	const std::string name = cursor.word();
	const size_t dot = name.find('.');
	asm_model::Register reg;
	const size_t end = dot == std::string::npos ? name.size() : dot;
	const bool physical = assembly::parse_aarch64_register(name.data(), end, reg);
	if ((!physical && !symbols.register_alias(name.substr(0, end), reg)) || reg.bank != asm_model::RegisterBank::Vector)
		cursor.fail("expected an AArch64 SIMD register");
	if (dot == std::string::npos && name[0] == 'd')
		return { reg.number, 3, 1, true };
	if (dot == std::string::npos || (physical && name[0] != 'v') || dot + 1 == name.size())
		cursor.fail("expected an AArch64 SIMD arrangement");
	const unsigned size = element_size(cursor, name.back());
	const std::string count = name.substr(dot + 1, name.size() - dot - 2);
	if (size == 4)
	{
		if (count != "1")
			cursor.fail("invalid AArch64 SIMD quadword arrangement");
		return { reg.number, 4, 1, false };
	}
	static const char* const counts[] = { "1", "2", "4", "8", "16" };
	const unsigned narrow_index = 3 - size;
	if (count.empty())
		return { reg.number, size, 0, false };
	if (count != counts[narrow_index] && count != counts[narrow_index + 1])
		cursor.fail("invalid AArch64 SIMD lane count");
	const unsigned index = count == counts[narrow_index] ? narrow_index : narrow_index + 1;
	return { reg.number, size, 1u << index, false };
}

void separator(ModuleCursor& cursor, char expected)
{
	if (!cursor.take(expected))
		cursor.fail(std::string("expected '") + expected + "' in AArch64 SIMD operand");
}

void match(ModuleCursor& cursor, const Vector& dest, const Vector& src)
{
	if (dest.lanes == 0 || dest.lanes != src.lanes || dest.size != src.size || dest.scalar != src.scalar)
		cursor.fail("AArch64 SIMD operand arrangements differ");
}

unsigned constant(ModuleCursor& cursor, assembly::ExpressionSymbols& expressions, unsigned maximum)
{
	cursor.take('#');
	const auto value = assembly::assembly_module_expression(cursor, expressions);
	if (value.relocatable() || value.bits > maximum)
		cursor.fail("AArch64 SIMD immediate is out of range");
	return static_cast<unsigned>(value.bits);
}

unsigned general_register(ModuleCursor& cursor, const assembly::SymbolLookup& symbols, unsigned width, bool address)
{
	const std::string name = cursor.word();
	if (!address && (name == "xzr" || name == "wzr") && width == (name[0] == 'x' ? 64u : 32u))
		return 31;
	asm_model::Register reg;
	if ((!assembly::parse_aarch64_register(name.data(), name.size(), reg) && !symbols.register_alias(name, reg)) ||
		reg.bank != asm_model::RegisterBank::Gpr || reg.bits != width || (!address && reg.number == 31))
		cursor.fail("invalid AArch64 general-purpose register for SIMD operand");
	return reg.number;
}

unsigned lane_field(ModuleCursor& cursor, const Vector& view, assembly::ExpressionSymbols& expressions)
{
	if (view.lanes != 0 || view.size >= 4)
		cursor.fail("AArch64 lane operand requires an element selection");
	const unsigned lane = constant(cursor, expressions, (16u >> view.size) - 1);
	separator(cursor, ']');
	return (2 * lane + 1) << view.size;
}

uint32_t move(ModuleCursor& cursor, const Vector& dest, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols)
{
	if (cursor.take('['))
	{
		const unsigned field = lane_field(cursor, dest, expressions);
		separator(cursor, ',');
		const unsigned src = general_register(cursor, symbols, dest.size == 3 ? 64 : 32, false);
		return 0x4e001c00u | (field << 16) | (src << 5) | dest.number;
	}
	separator(cursor, ',');
	const Vector src = vector_register(cursor, symbols);
	if (dest.scalar && cursor.take('['))
	{
		if (dest.size != src.size)
			cursor.fail("AArch64 SIMD move element widths differ");
		const unsigned field = lane_field(cursor, src, expressions);
		return 0x5e000400u | (field << 16) | (src.number << 5) | dest.number;
	}
	match(cursor, dest, src);
	if (dest.size != 0)
		cursor.fail("AArch64 SIMD register move requires a byte arrangement");
	const uint32_t op = static_cast<uint32_t>(Op::VOrr) & ~(1u << 30);
	return op | dest.wide() | (src.number << 16) | (src.number << 5) | dest.number;
}

uint32_t structure_access(
	ModuleCursor& cursor, bool load, assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	separator(cursor, '{');
	const Vector first = vector_register(cursor, symbols);
	if (first.scalar || first.lanes == 0)
		cursor.fail("expected an AArch64 SIMD structure arrangement");
	unsigned count = 1;
	if (cursor.take('-'))
	{
		const Vector end = vector_register(cursor, symbols);
		match(cursor, first, end);
		count = ((end.number - first.number) & 31) + 1;
	}
	else
		while (cursor.take(','))
		{
			const Vector next = vector_register(cursor, symbols);
			match(cursor, first, next);
			if (next.number != ((first.number + count) & 31))
				cursor.fail("AArch64 SIMD structure registers must be consecutive");
			++count;
		}
	if (count > 4)
		cursor.fail("AArch64 SIMD structure list has more than four registers");
	separator(cursor, '}');
	separator(cursor, ',');
	separator(cursor, '[');
	const unsigned base = general_register(cursor, symbols, 64, true);
	separator(cursor, ']');
	static const uint32_t lists[] = { 7, 10, 6, 2 };
	uint32_t word = 0x0c000000u | (load ? 1u << 22 : 0) | first.wide() | (lists[count - 1] << 12) | (first.size << 10) |
		(base << 5) | first.number;
	if (cursor.take(','))
	{
		cursor.space();
		unsigned offset;
		if (cursor.current() == '#' || cursor.numeric())
		{
			const unsigned bytes = count * first.lanes * (1u << first.size);
			if (constant(cursor, expressions, bytes) != bytes)
				cursor.fail("incorrect AArch64 SIMD structure post-index byte count");
			offset = 31;
		}
		else
		{
			offset = general_register(cursor, symbols, 64, false);
			if (offset == 31)
				cursor.fail("AArch64 SIMD structure post-index requires an x register");
		}
		word |= (1u << 23) | (offset << 16);
	}
	return word;
}

uint32_t immediate_move(ModuleCursor& cursor, const Vector& dest, assembly::ExpressionSymbols& expressions)
{
	if (!dest.lanes || dest.scalar || dest.size == 3)
		cursor.fail("unsupported AArch64 SIMD immediate move arrangement");
	const unsigned byte = constant(cursor, expressions, 255);
	unsigned shift = 0;
	if (cursor.take(','))
	{
		if (cursor.word() != "lsl")
			cursor.fail("expected lsl in AArch64 SIMD immediate move");
		shift = constant(cursor, expressions, dest.elements() - 8);
		if (shift & 7)
			cursor.fail("AArch64 SIMD immediate move shift must be a multiple of eight");
	}
	const uint32_t mode = dest.size == 0 ? 14 : dest.size == 1 ? 8 + shift / 4 : shift / 4;
	return static_cast<uint32_t>(Op::VMovIS) | dest.wide() | (mode << 12) | ((byte & 0xe0u) << 11) |
		((byte & 31u) << 5) | dest.number;
}

uint32_t three_registers(const std::string& mnemonic, ModuleCursor& cursor, const Vector& dest, const Vector& first,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols)
{
	separator(cursor, ',');
	const Vector second = vector_register(cursor, symbols);
	match(cursor, dest, second);
	const uint32_t regs = (second.number << 16) | (first.number << 5) | dest.number;
	if (mnemonic == "add" || mnemonic == "sub")
	{
		const uint32_t mode = dest.scalar ? 0x5e000000u : (0x0e000000u | dest.wide());
		if (dest.size == 3 && !dest.scalar && !dest.wide())
			cursor.fail("AArch64 SIMD arithmetic requires two lanes for 64-bit elements");
		return mode | (mnemonic == "sub" ? 1u << 29 : 0) | 0x00208400u | (dest.size << 22) | regs;
	}
	if (dest.scalar)
		cursor.fail("AArch64 SIMD instruction requires a vector arrangement");
	if (mnemonic == "uzp1" || mnemonic == "uzp2")
	{
		if (dest.lanes < 2)
			cursor.fail("AArch64 SIMD unzip requires multiple lanes");
		return (mnemonic == "uzp1" ? 0x0e001800u : 0x0e005800u) | dest.wide() | (dest.size << 22) | regs;
	}
	if (dest.size != 0)
		cursor.fail("AArch64 SIMD instruction requires a byte arrangement");
	if (mnemonic == "ext")
	{
		separator(cursor, ',');
		const uint32_t at = constant(cursor, expressions, dest.lanes - 1);
		return 0x2e000000u | dest.wide() | (at << 11) | regs;
	}
	const Op op = mnemonic == "eor" ? Op::VEor : mnemonic == "orr" ? Op::VOrr : Op::VAnd;
	return (static_cast<uint32_t>(op) & ~(1u << 30)) | dest.wide() | regs;
}

} // namespace

AssemblyWord extract_neon_lane(assembly::ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols, unsigned destination, bool wide)
{
	const Vector source = vector_register(cursor, symbols);
	if ((source.size == 3) != wide)
		cursor.fail("AArch64 SIMD extraction register and element widths differ");
	separator(cursor, '[');
	const unsigned field = lane_field(cursor, source, expressions);
	return { 0x0e003c00u | (unsigned(wide) << 30) | (field << 16) | (source.number << 5) | destination };
}

AssemblyWord assemble_neon(const std::string& mnemonic, assembly::ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols, const AssemblyFeatures& features)
{
	if (mnemonic == "ld1" || mnemonic == "st1")
		return { structure_access(cursor, mnemonic == "ld1", expressions, symbols) };
	const Vector dest = vector_register(cursor, symbols);
	if (mnemonic == "mov")
		return { move(cursor, dest, expressions, symbols) };
	separator(cursor, ',');
	if (mnemonic == "movi")
		return { immediate_move(cursor, dest, expressions) };
	const Vector source = vector_register(cursor, symbols);
	if (mnemonic == "pmull" || mnemonic == "pmull2")
	{
		const bool high = mnemonic == "pmull2";
		separator(cursor, ',');
		const Vector second = vector_register(cursor, symbols);
		match(cursor, source, second);
		const unsigned lanes = source.size == 3 ? 1 : 8;
		if (dest.scalar || source.scalar || dest.size != source.size + 1 || (source.size != 0 && source.size != 3) ||
			dest.lanes != lanes || source.lanes != lanes * (high ? 2 : 1))
			cursor.fail("invalid AArch64 polynomial multiply arrangement");
		if (source.size == 3 && !features.crypto)
			cursor.fail("AArch64 64-bit polynomial multiply requires crypto");
		return { 0x0e20e000u | (unsigned(high) << 30) | (source.size << 22) | (second.number << 16) |
			(source.number << 5) | dest.number };
	}
	match(cursor, dest, source);
	const uint32_t regs = (source.number << 5) | dest.number;
	if (mnemonic == "rev32")
	{
		if (dest.scalar || dest.size > 1)
			cursor.fail("AArch64 rev32 requires byte or halfword lanes");
		return { 0x2e200800u | dest.wide() | (dest.size << 22) | regs };
	}
	if (mnemonic == "shl" || mnemonic == "sri")
	{
		separator(cursor, ',');
		const bool right = mnemonic == "sri";
		const unsigned width = dest.elements();
		const unsigned shift = constant(cursor, expressions, right ? width : width - 1);
		if ((right && shift == 0) || (dest.size == 3 && !dest.scalar && !dest.wide()))
			cursor.fail("invalid AArch64 SIMD shift form");
		const unsigned immediate = right ? 2 * width - shift : width + shift;
		const uint32_t op = right ? 0x2f004400u : 0x0f005400u;
		const uint32_t mode = dest.scalar ? 0x50000000u : dest.wide();
		return { op | mode | (immediate << 16) | regs };
	}
	return { three_registers(mnemonic, cursor, dest, source, expressions, symbols) };
}

} // namespace aarch64
