#pragma once

#include <memory>
#include <tuple>

#include "asm/module_text.h"
#include "native/asm/module_symbols.h"
#include "native/object/object_file.h"

namespace native {

struct InlineAssemblyModule
{
	object::ObjectFile object;
	// Per-object symbol IDs mapped to LowIR symbol IDs, or kNoId.
	std::vector<uint32_t> inputs;
	uint32_t text = 1;

	const object::Section& main() const { return object.sections[text]; }
};

struct InlineModuleLocation
{
	std::shared_ptr<const InlineAssemblyModule> module;
	uint32_t offset;
};

bool inline_has_sections(const std::vector<assembly::ModuleLine>& lines);
std::shared_ptr<const InlineAssemblyModule> build_inline_module(
	std::vector<assembly::ModuleLine>& lines, asm_model::Dialect dialect);
std::shared_ptr<const InlineAssemblyModule> build_inline_module(std::vector<assembly::Instruction>& instructions);
bool inline_has_symbol_names(const std::vector<assembly::Instruction>& instructions);

class InlineModulePlacement
{
public:
	explicit InlineModulePlacement(object::ObjectFile& out);
	void append(const InlineAssemblyModule& module, uint32_t code_section, uint64_t code_offset,
		const std::vector<uint32_t>& symbols);

private:
	using Key = std::tuple<std::string, object::SectionKind, uint32_t, bool>;
	uint32_t place_section(const object::ObjectFile& source, uint32_t section, uint64_t& offset);
	object::ObjectFile& out_;
	ModuleSymbols symbols_;
	std::map<Key, uint32_t> sections_;
};

} // namespace native
