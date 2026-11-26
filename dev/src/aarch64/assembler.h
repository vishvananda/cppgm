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
};

AssemblyWord assemble_word(const std::string& mnemonic, assembly::ModuleCursor& cursor,
	assembly::ExpressionSymbols& expressions, const assembly::SymbolLookup& symbols);
void finish_assembly_branches(native::object::ObjectFile& object);
void append_code_padding(std::vector<uint8_t>& bytes, uint64_t count);

} // namespace aarch64
