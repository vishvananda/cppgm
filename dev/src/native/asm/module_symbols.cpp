#include "native/asm/module_symbols.h"

#include <algorithm>
#include <iterator>

#include "native/backend_error.h"
#include "support/internal_error.h"

namespace native {

namespace {

bool digit(char c)
{
	return c >= '0' && c <= '9';
}
bool name_character(char c)
{
	return digit(c) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_' || c == '.' || c == '$';
}
bool space(char c)
{
	return c == ' ' || c == '\t' || c == '\r';
}

} // namespace

ModuleSymbols::ModuleSymbols(object::ObjectFile& out, Target target) : out_(out), target_(target)
{
	for (uint32_t i = 1; i < out_.symbols.size(); ++i)
	{
		const char* name = out_.symbol_name(i);
		if (*name != '\0')
			names_.emplace(name, i);
	}
}
uint32_t ModuleSymbols::intern(const std::string& name)
{
	const auto found = names_.find(name);
	if (found != names_.end())
		return found->second;
	object::Symbol symbol;
	symbol.name = out_.add_string(name);
	symbol.binding = object::Binding::Global;
	const uint32_t id = out_.add_symbol(symbol);
	names_.emplace(name, id);
	return id;
}
uint32_t ModuleSymbols::named(const std::string& name)
{
	if (name.empty() || (name[0] >= '0' && name[0] <= '9'))
		throw BackendError("invalid module linker symbol: " + name);
	return intern(target_ == Target::MacOS && name[0] == '_' ? name.substr(1) : name);
}
bool ModuleSymbols::lookup(const std::string& name, asm_model::SymbolReference& reference)
{
	if (name.empty() || (name[0] >= '0' && name[0] <= '9'))
		return false;
	reference.symbol = named(name);
	return true;
}
bool ModuleSymbols::interposable(const std::string& name) const
{
	const std::string normalized = target_ == Target::MacOS && !name.empty() && name[0] == '_' ? name.substr(1) : name;
	const auto found = names_.find(normalized);
	if (found == names_.end())
		return false;
	const auto binding = bindings_.find(found->second);
	return (binding == bindings_.end() ? out_.symbols[found->second].binding : binding->second) !=
		object::Binding::Local;
}
bool ModuleSymbols::absolute(uint32_t symbol, uint64_t& value) const
{
	if (symbol >= out_.symbols.size() || out_.symbols[symbol].section != object::kAbsoluteSection)
		return false;
	value = out_.symbols[symbol].value;
	return true;
}
bool ModuleSymbols::register_alias(const std::string& name, asm_model::Register& reg) const
{
	const auto found = registers_.find(name);
	if (found == registers_.end())
		return false;
	reg = found->second;
	return true;
}
void ModuleSymbols::define_register_alias(const std::string& name, asm_model::Register reg)
{
	registers_[name] = reg;
}
void remap_assembly_symbols(std::vector<assembly::SymbolUse>& uses, const std::vector<uint32_t>& symbols)
{
	for (assembly::SymbolUse& use : uses)
	{
		if (use.reference.symbol >= symbols.size() || symbols[use.reference.symbol] == 0)
			throw InternalError("assembly symbol has no object identity");
		use.reference.symbol = symbols[use.reference.symbol];
	}
}
uint32_t ModuleSymbols::token(assembly::ModuleCursor& cursor)
{
	cursor.space();
	if (const assembly::SymbolUse* use = cursor.symbol_use())
	{
		if (use->reference.addend != 0)
			cursor.fail("symbol declaration cannot have an addend");
		cursor.advance(use->count);
		return use->reference.symbol;
	}
	return named(cursor.word());
}
void ModuleSymbols::define(uint32_t symbol, uint32_t section, uint64_t offset)
{
	object::Symbol& entry = out_.symbols[symbol];
	if (entry.section != object::kUndefinedSection)
		throw BackendError("duplicate module definition: " + std::string(out_.symbol_name(symbol)));
	entry.section = section;
	entry.value = offset;
	const auto binding = bindings_.find(symbol);
	entry.binding = binding == bindings_.end() ? object::Binding::Local : binding->second;
}
void ModuleSymbols::bind(uint32_t symbol, object::Binding binding)
{
	const auto previous = bindings_.find(symbol);
	if (previous != bindings_.end() && previous->second == object::Binding::Weak && binding == object::Binding::Global)
		return;
	bindings_[symbol] = binding;
	out_.symbols[symbol].binding = binding;
}
void ModuleSymbols::type(uint32_t symbol, object::SymbolType type)
{
	explicit_types_.insert(symbol);
	out_.symbols[symbol].type = type;
}
void ModuleSymbols::define_absolute(uint32_t symbol, uint64_t value)
{
	if (!registers_.empty())
		registers_.erase(out_.symbol_name(symbol));
	object::Symbol& entry = out_.symbols[symbol];
	if (entry.section == object::kAbsoluteSection)
		entry.value = value;
	else
		define(symbol, object::kAbsoluteSection, value);
}
void ModuleSymbols::alias(uint32_t symbol, uint32_t target, int64_t addend)
{
	if (!registers_.empty())
		registers_.erase(out_.symbol_name(symbol));
	aliases_.push_back(Alias{ symbol, target, addend });
}
uint32_t ModuleSymbols::numeric_symbol()
{
	const uint32_t symbol = out_.add_symbol(object::Symbol{});
	type(symbol, object::SymbolType::None);
	return symbol;
}
uint32_t ModuleSymbols::numeric_reference(
	const std::string& name, char use, const assembly::ModuleLine& line, size_t first)
{
	NumericLabel& label = numeric_labels_[name];
	if (use == 'b')
	{
		if (label.previous == 0)
			throw BackendError("module assembly line " + std::to_string(line.line) + ", column " +
				std::to_string(first + 1) + ": undefined backward label " + name);
		return label.previous;
	}
	if (label.pending == 0)
		label.pending = numeric_symbol();
	if (use == ':')
	{
		label.previous = label.pending;
		label.pending = 0;
		return label.previous;
	}
	return label.pending;
}
std::vector<assembly::SymbolUse> ModuleSymbols::numeric_uses(const assembly::ModuleLine& line)
{
	std::vector<assembly::SymbolUse> numbered;
	auto typed = line.symbols.begin();
	size_t i = 0;
	bool quote = false;
	while (i < line.text.size())
	{
		if (typed != line.symbols.end() && i == typed->first)
		{
			i += typed->count;
			++typed;
			continue;
		}
		const char c = line.text[i];
		if (c == '"')
			quote = !quote;
		if (quote && c == '\\' && i + 1 < line.text.size())
			++i;
		if (quote || !name_character(c) || c == '$')
		{
			++i;
			continue;
		}
		const size_t first = i++;
		while (
			i < line.text.size() && (typed == line.symbols.end() || i < typed->first) && name_character(line.text[i]))
			++i;
		if (!digit(c))
			continue;
		size_t end = first + 1;
		while (end < i && digit(line.text[end]))
			++end;
		char use = '\0';
		if (end + 1 == i && (line.text[end] == 'f' || line.text[end] == 'b'))
			use = line.text[end];
		else if (end == i && line.text.find_first_not_of(" \t\r") == first)
		{
			size_t separator = i;
			while (separator < line.text.size() && space(line.text[separator]))
				++separator;
			if (separator < line.text.size() && line.text[separator] == ':')
				use = ':';
		}
		if (use == '\0')
			continue;
		size_t normalized = first;
		while (normalized + 1 < end && line.text[normalized] == '0')
			++normalized;
		asm_model::SymbolReference reference;
		reference.symbol = numeric_reference(line.text.substr(normalized, end - normalized), use, line, first);
		numbered.push_back(assembly::SymbolUse{ uint32_t(first), uint32_t(i - first), reference });
	}
	if (numbered.empty() || line.symbols.empty())
		return numbered;
	std::vector<assembly::SymbolUse> combined;
	combined.reserve(numbered.size() + line.symbols.size());
	std::merge(numbered.begin(), numbered.end(), line.symbols.begin(), line.symbols.end(), std::back_inserter(combined),
		[](const assembly::SymbolUse& a, const assembly::SymbolUse& b) { return a.first < b.first; });
	return combined;
}
void ModuleSymbols::finish()
{
	for (const auto& label : numeric_labels_)
		if (label.second.pending != 0)
			throw BackendError("undefined forward label " + label.first);
	std::map<uint32_t, size_t> pending;
	for (size_t i = 0; i < aliases_.size(); ++i)
	{
		const uint32_t symbol = aliases_[i].symbol;
		if (out_.symbols[symbol].section != object::kUndefinedSection || !pending.emplace(symbol, i).second)
			throw BackendError("duplicate module definition: " + std::string(out_.symbol_name(symbol)));
	}
	std::vector<bool> active(aliases_.size(), false);
	std::vector<size_t> path;
	for (size_t root = 0; root < aliases_.size(); ++root)
	{
		for (size_t i = root; out_.symbols[aliases_[i].symbol].section == object::kUndefinedSection;)
		{
			if (active[i])
				throw BackendError("cyclic or undefined module alias");
			active[i] = true;
			path.push_back(i);
			const uint32_t target = aliases_[i].target;
			if (out_.symbols[target].section != object::kUndefinedSection)
				break;
			const auto next = pending.find(target);
			if (next == pending.end())
				throw BackendError("cyclic or undefined module alias");
			i = next->second;
		}
		while (!path.empty())
		{
			const size_t i = path.back();
			path.pop_back();
			const Alias alias = aliases_[i];
			const object::Symbol target = out_.symbols[alias.target];
			define(alias.symbol, target.section, target.value + alias.addend);
			if (explicit_types_.find(alias.symbol) == explicit_types_.end())
				out_.symbols[alias.symbol].type = target.type;
			out_.symbols[alias.symbol].size = target.size;
		}
	}
}
} // namespace native
