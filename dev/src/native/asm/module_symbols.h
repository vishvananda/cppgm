#pragma once

#include <map>
#include <set>
#include "asm/module_text.h"
#include "native/object/object_file.h"
#include "native/target.h"

namespace native {

void remap_assembly_symbols(std::vector<assembly::SymbolUse>& uses, const std::vector<uint32_t>& symbols);

class ModuleSymbols : public assembly::SymbolLookup
{
public:
	ModuleSymbols(object::ObjectFile& out, Target target);
	bool lookup(const std::string& name, asm_model::SymbolReference& reference) override;
	bool interposable(const std::string& name) const override;
	bool absolute(uint32_t symbol, uint64_t& value) const override;
	bool register_alias(const std::string& name, asm_model::Register& reg) const override;
	void define_register_alias(const std::string& name, asm_model::Register reg);
	void remove_register_alias(const std::string& name) { registers_.erase(name); }
	uint32_t named(const std::string& name);
	void add_name(const char* name, uint32_t symbol) { names_.emplace(name, symbol); }
	uint32_t token(assembly::ModuleCursor& cursor);
	void define(uint32_t symbol, uint32_t section, uint64_t offset);
	void bind(uint32_t symbol, object::Binding binding);
	void type(uint32_t symbol, object::SymbolType type);
	void define_absolute(uint32_t symbol, uint64_t value);
	void alias(uint32_t symbol, uint32_t target, int64_t addend);
	std::vector<assembly::SymbolUse> numeric_uses(const assembly::ModuleLine& line);
	void finish();

private:
	uint32_t intern(const std::string& name);
	struct Alias
	{
		uint32_t symbol;
		uint32_t target;
		int64_t addend;
	};
	struct NumericLabel
	{
		uint32_t previous = 0;
		uint32_t pending = 0;
	};
	uint32_t numeric_symbol();
	uint32_t numeric_reference(const std::string& name, char use, const assembly::ModuleLine& line, size_t first);
	object::ObjectFile& out_;
	Target target_;
	std::map<std::string, uint32_t> names_;
	std::map<std::string, asm_model::Register> registers_;
	std::map<uint32_t, object::Binding> bindings_;
	std::set<uint32_t> explicit_types_;
	std::vector<Alias> aliases_;
	std::map<std::string, NumericLabel> numeric_labels_;
};

} // namespace native
