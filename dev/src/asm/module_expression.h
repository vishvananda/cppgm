#pragma once

#include "asm/module_text.h"

namespace assembly {

struct ModuleValue
{
	uint64_t bits = 0;
	uint32_t positive = asm_model::kNoId;
	uint32_t negative = asm_model::kNoId;
	bool relocatable() const { return positive != asm_model::kNoId || negative != asm_model::kNoId; }
};

struct ExpressionSymbols
{
	virtual ModuleValue expression_symbol(ModuleCursor& cursor) = 0;
	virtual void fold_difference(ModuleValue& value) const = 0;
};

// Parse a prefix of an absolute 64-bit GNU assembler expression, leaving an
// operand separator or the following addressing tuple for the caller.
uint64_t assembly_integer_expression(ModuleCursor& cursor);
uint64_t assembly_integer_addend(ModuleCursor& cursor);
ModuleValue assembly_module_expression(ModuleCursor& cursor, ExpressionSymbols& symbols);

// A complete expression, including register comparisons in macro conditions.
uint64_t module_expression(const ModuleLine& line, uint32_t first = 0);

} // namespace assembly
