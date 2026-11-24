#pragma once

#include "asm/module_text.h"

namespace assembly {

// Parse a prefix of an absolute 64-bit GNU assembler expression, leaving an
// operand separator or the following addressing tuple for the caller.
uint64_t assembly_integer_expression(ModuleCursor& cursor);
uint64_t assembly_integer_addend(ModuleCursor& cursor);

// A complete expression, including register comparisons in macro conditions.
uint64_t module_expression(const ModuleLine& line, uint32_t first = 0);

} // namespace assembly
