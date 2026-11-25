#pragma once
#include "asm/parser.h"
#include "native/x86/assembler.h"

namespace native {
namespace asm_detail {

inline uint8_t operand_size_prefix(const assembly::Instruction& inst, unsigned bits)
{
	return (bits == 16 && inst.code_bits != 16) || (bits == 32 && inst.code_bits == 16) ? 0x66 : 0;
}
[[noreturn]] void fail(const assembly::Instruction& inst, const char* why);
Reg physical(const asm_model::Register& reg, const assembly::Instruction& inst);
RM rm(const assembly::Operand& operand, const assembly::Instruction& inst);
unsigned integer_width(const assembly::Instruction& inst, uint16_t suffix, unsigned operands = 5);
bool byte_rex(const assembly::Instruction& inst);
} // namespace asm_detail
} // namespace native
