#pragma once

#include "asm/module_text.h"

namespace assembly {

struct ModuleValue
{
	ModuleValue(uint64_t value = 0) : bits(value) {}
	uint64_t bits;
	uint32_t positive = asm_model::kNoId;
	uint32_t negative = asm_model::kNoId;
	bool relocatable() const { return positive != asm_model::kNoId || negative != asm_model::kNoId; }
};

struct ModuleExpression
{
	struct Step
	{
		const char* op;
		ModuleValue literal;
		bool unary;
	};
	std::vector<Step> steps;
	uint32_t line = 0;
	uint32_t column = 0;
	bool has_symbols = false;
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
ModuleValue assembly_instruction_addend(ModuleCursor& cursor, ExpressionSymbols& symbols, ModuleValue initial);
ModuleValue assembly_instruction_expression(ModuleCursor& cursor, ExpressionSymbols& symbols);
ModuleExpression parse_module_expression(ModuleCursor& cursor, ExpressionSymbols& symbols);
ModuleValue evaluate_module_expression(const ModuleExpression& plan, ExpressionSymbols& symbols);

// A complete expression, including register comparisons in macro conditions.
uint64_t module_expression(const ModuleLine& line, uint32_t first = 0, ExpressionSymbols* symbols = nullptr);

} // namespace assembly
