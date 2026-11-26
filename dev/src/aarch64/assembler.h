#pragma once

#include "asm/module_expression.h"
#include "native/object/object_file.h"

namespace aarch64 {

struct AssemblyWord
{
	AssemblyWord(uint32_t bits, uint32_t relocation = 0, uint32_t symbol = 0, int64_t addend = 0)
		: bits(bits), relocation(relocation), symbol(symbol), addend(addend)
	{}
	uint32_t bits;
	uint32_t relocation;
	uint32_t symbol;
	int64_t addend;
	// A nonzero width requests a literal pool entry instead of a direct fixup.
	unsigned literal_width = 0;
};

struct AssemblyFeatures
{
	bool neon = true;
	bool fp = true;
	bool lse = false;
	bool crc = false;
	bool crypto = false;
};

void set_assembly_features(AssemblyFeatures& features, const std::string& directive, assembly::ModuleCursor& cursor);
AssemblyWord assemble_word(const std::string& mnemonic, assembly::ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols, const AssemblyFeatures& features);
AssemblyWord assemble_neon(const std::string& mnemonic, assembly::ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols, const AssemblyFeatures& features);
AssemblyWord extract_neon_lane(assembly::ModuleCursor& cursor, assembly::ExpressionSymbols& expressions,
	const assembly::SymbolLookup& symbols, unsigned destination, bool wide);
void finish_assembly_branches(native::object::ObjectFile& object);
void append_code_padding(std::vector<uint8_t>& bytes, uint64_t count);

} // namespace aarch64
