#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "asm_model.h"

namespace assembly {

struct ExpressionSymbols;

enum class OperandKind : uint8_t
{
	Register,
	Memory,
	Immediate,
	Label,
	Symbol
};

enum class Relocation : uint8_t
{
	Address,
	Got,
	GotTpOff,
	Tlv,
	Plt
};

struct SymbolUse
{
	uint32_t first;
	uint32_t count;
	asm_model::SymbolReference reference;
};

struct LabelUse
{
	uint32_t first;
	uint32_t count;
	uint32_t operand;
};

struct Address
{
	asm_model::Register base = {};
	asm_model::Register index = {};
	bool has_base = false;
	bool has_index = false;
	uint8_t scale = 1;
	uint8_t segment = 0; // optional x86 segment override
	int64_t displacement = 0;
	bool rip = false;
	asm_model::SymbolReference symbol;
	uint32_t subtrahend = asm_model::kNoId;
	Relocation relocation = Relocation::Address;
	std::string local;
	uint32_t label = asm_model::kNoId;
};

struct Operand
{
	OperandKind kind = OperandKind::Immediate;
	asm_model::Register reg = {};
	Address address;
	uint64_t immediate = 0;
	uint16_t bits = 0;
	uint8_t mask = 0;
	bool zero = false;
	uint8_t broadcast = 0;
	std::string target;
	uint32_t label = 0;
	bool external_label = false;
	bool numeric_branch = false;
};

struct Instruction
{
	bool label = false;
	bool data = false;
	bool string_data = false;
	uint32_t alignment = 0;
	uint32_t max_padding = UINT32_MAX;
	int16_t fill = -1;
	std::vector<uint8_t> bytes;
	uint32_t symbol_definition = asm_model::kNoId; // typed module label, if present
	uint8_t prefix = 0;
	uint8_t segment = 0;
	uint8_t segment_count = 0;
	uint8_t code_bits = 64;
	bool code16gcc = false;
	asm_model::Dialect dialect = asm_model::Dialect::Att;
	bool is_exit = false;
	uint32_t exit_tag = 0;
	std::string mnemonic;
	std::vector<Operand> operands; // destination first in either source dialect
	uint32_t line = 1;
	uint32_t column = 1;
	uint16_t bits = 0; // explicit mnemonic suffix, or zero
};

struct AssemblyError
{
	std::string message;
	uint32_t line;
	uint32_t column;
};

// Module assembly can name linker symbols literally. Inline operand symbols
// still arrive as typed spans; this hook never reconstructs frontend names.
struct SymbolLookup
{
	virtual ~SymbolLookup() {}
	virtual bool lookup(const std::string& name, asm_model::SymbolReference& reference) = 0;
	virtual bool interposable(const std::string&) const { return false; }
	virtual bool absolute(uint32_t, uint64_t&) const { return false; }
	virtual bool register_alias(const std::string&, asm_model::Register&) const { return false; }
};

struct Syntax
{
	asm_model::Dialect dialect = asm_model::Dialect::Att;
	bool register_prefix = true;
	bool power_alignment = false; // .align uses an exponent on Darwin, bytes on ELF
	bool named_externals = false; // literal names can become object imports
	bool register_aliases = false;
	uint8_t code_bits = 64;
	bool code16gcc = false;
};

// The input is user assembly after its frontend's placeholder expansion.
// This is its only instruction parse; ordinary compiler code never uses it.
// An optional state carries dialect/prefix switches across module buffers.
std::vector<Instruction> parse(const std::string& source, asm_model::Dialect dialect,
	const std::vector<SymbolUse>& symbols = {}, const std::vector<LabelUse>& labels = {},
	SymbolLookup* lookup = nullptr, Syntax* state = nullptr, ExpressionSymbols* expressions = nullptr);

} // namespace assembly
