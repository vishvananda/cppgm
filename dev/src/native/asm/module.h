#pragma once

#include "asm/module_expression.h"
#include "lowir/program.h"
#include "native/asm/module_layout.h"
#include "native/asm/module_symbols.h"
#include "native/asm/module_unwind.h"

namespace native {

class AssemblyEnvironment;

class ModuleAssembler : private assembly::ExpressionSymbols
{
public:
	ModuleAssembler(object::ObjectFile& out, Target target);
	void begin(asm_model::Dialect dialect);
	void module_start();
	void begin_raw(uint32_t symbol, const std::string& name, bool comdat, bool initial);
	void end_raw();
	void declare(const assembly::ModuleLine& line);
	void append(const assembly::ModuleLine& line);
	void append(std::vector<assembly::Instruction>& instructions);
	void finish();

private:
	void flush();
	void emit_instructions(std::vector<assembly::Instruction>& instructions);
	bool directive(const std::string& name, assembly::ModuleCursor& cursor);
	void section(const std::string& name, object::SectionKind kind, uint32_t merge_size = 0, bool merge_strings = false,
		bool note = false, bool inherit = false);
	void data(assembly::ModuleCursor& cursor, unsigned bytes);
	void wide_data(assembly::ModuleCursor& cursor);
	void finish_data();
	void finish_symbols();
	assembly::ModuleValue expression_symbol(assembly::ModuleCursor& cursor) override;
	void fold_difference(assembly::ModuleValue& value) const override;
	void fold_at(assembly::ModuleValue& value, uint32_t section, uint64_t at) const;
	void assign(uint32_t id, assembly::ModuleCursor& cursor);
	void strings(assembly::ModuleCursor& cursor, bool terminate);
	void include_binary(assembly::ModuleCursor& cursor);
	void repeat_fill(assembly::ModuleCursor& cursor);
	void alignment(assembly::ModuleCursor& cursor, bool power);
	void size(assembly::ModuleCursor& cursor);
	void type(assembly::ModuleCursor& cursor);
	void reserve(uint64_t count, uint8_t fill);
	void stage(ModuleLayout::Fragment fragment);
	uint64_t offset() const;
	uint32_t symbol(assembly::ModuleCursor& cursor) { return symbols_.token(cursor); }
	object::ObjectFile& out_;
	Target target_;
	ModuleSymbols symbols_;
	ModuleLayout layout_;
	ModuleUnwind unwind_;
	assembly::Syntax syntax_;
	uint32_t section_ = 0;
	uint32_t previous_ = 0;
	std::vector<uint32_t> section_stack_;
	struct DataRelocation
	{
		uint64_t offset;
		uint64_t anchor;
		uint64_t addend;
		uint32_t section;
		uint32_t positive;
		uint32_t negative;
		unsigned bytes;
		uint32_t absolute_type;
	};
	std::vector<DataRelocation> data_relocations_;
	struct DeferredSymbolValue
	{
		uint32_t symbol;
		uint32_t section;
		uint64_t offset;
		assembly::ModuleValue value;
	};
	std::vector<DeferredSymbolValue> sizes_;
	std::vector<DeferredSymbolValue> absolute_definitions_;
	struct RawSize
	{
		uint32_t symbol;
		uint32_t section;
		uint64_t first;
		uint64_t end;
	};
	std::vector<RawSize> raw_sizes_;
	std::string code_;
	std::vector<assembly::SymbolUse> uses_;
	std::vector<uint32_t> code_lines_;
	uint32_t raw_symbol_ = 0;
	uint32_t raw_section_ = 0;
	uint32_t raw_first_ = 0;
	bool raw_initial_ = false;
};

void emit_assembly_items(object::ObjectFile& out, const lowir::Program& program, Target target,
	const std::vector<uint32_t>& symbols, AssemblyEnvironment& environment);

} // namespace native
