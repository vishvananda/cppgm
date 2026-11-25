#include "aarch64/backend.h"
#include <algorithm>
#include <map>

#include "lowir/assembly.h"

#include "aarch64/selector.h"
#include "machine/global_data.h"
#include "native/object/host_builtins.h"
#include "machine/wide_helpers.h"
#include "lowir/startup_sections.h"
#include "aarch64/link.h"
#include "aarch64/error.h"

namespace aarch64 {

namespace obj = native::object;
using namespace lowir;

namespace {
using ExplicitSections = std::map<std::pair<NameId, obj::SectionKind>, uint32_t>;

uint32_t explicit_section(const Program& program, NameId name, obj::SectionKind kind, uint32_t align,
	obj::ObjectFile& object, ExplicitSections& sections)
{
	const auto insert = sections.emplace(std::make_pair(name, kind), 0);
	uint32_t& index = insert.first->second;
	if (insert.second)
		index = object.add_section(program.spelling(name), kind, align);
	else
		object.sections[index].align = std::max<uint64_t>(object.sections[index].align, align);
	return index;
}

void define_global(const Program& program, SymbolId id, const std::vector<uint32_t>& symbols, obj::ObjectFile& out,
	bool host, ExplicitSections& sections)
{
	const auto& source = program.symbols[id];
	const Global& global = program.globals[source.detail];
	const bool tls = source.metadata.storage == ir_model::GSM_THREAD_LOCAL;
	uint32_t align;
	const uint64_t size = machine::global_size(program, global, align);
	const bool readonly = source.metadata.storage == ir_model::GSM_READONLY;
	const char* explicit_name = source.metadata.section ? program.spelling(source.metadata.section) : nullptr;
	const bool bss = !readonly && (explicit_name == nullptr || std::strncmp(explicit_name, ".bss", 4) == 0) &&
		machine::global_is_zero(program, global);
	// The dynamic loader rebases address initializers before making these
	// objects read-only. Put them in the same class as GOT indirection cells.
	const bool relro = host && readonly && !source.metadata.section && machine::global_has_addresses(program, global);
	const char* name = explicit_name != nullptr ? explicit_name
		: tls                                   ? (bss ? ".tbss" : ".tdata")
		: readonly                              ? (relro ? ".data.rel.ro" : ".rodata")
		: bss                                   ? ".bss"
												: ".data";
	auto& symbol = out.symbols[symbols[id]];
	uint32_t priority = 0;
	const auto kind = tls                     ? (bss ? obj::SectionKind::TlsBss : obj::SectionKind::TlsData)
		: initializer_section(name, priority) ? obj::SectionKind::InitArray
		: finalizer_section(name, priority)   ? obj::SectionKind::FiniArray
		: readonly && !relro                  ? obj::SectionKind::Rodata
		: bss                                 ? obj::SectionKind::Bss
											  : obj::SectionKind::Data;
	symbol.section = explicit_name == nullptr
		? out.add_section(name, kind, align)
		: explicit_section(program, source.metadata.section, kind, align, out, sections);
	auto& section = out.sections[symbol.section];
	symbol.value = (section.size + align - 1) & ~uint64_t(align - 1);
	symbol.size = size;
	section.size = symbol.value + size;
	if (!bss)
	{
		section.bytes.resize(section.size);
		std::vector<machine::GlobalAddress> addresses;
		machine::write_global(program, global, section.bytes, symbol.value, addresses);
		for (const auto& fix : addresses)
			section.relocations.push_back(
				obj::Relocation{ symbol.value + fix.offset, Abs64, symbols.at(fix.target), fix.addend });
	}
}

void create_symbols(const Program& program, const std::vector<SymbolId>& canonical, std::vector<uint32_t>& symbols,
	obj::ObjectFile& object, bool host)
{
	std::map<NameId, const char*> builtins;
	if (host)
		for (const auto& pair : native::kHostBuiltins)
		{
			const NameId id = program.names.find(pair[0], std::strlen(pair[0]));
			if (id)
				builtins.emplace(id, pair[1]);
		}
	for (SymbolId id : program.order)
	{
		if (canonical[id] != id)
			continue;
		const auto& src = program.symbols[id];
		const NameId name = src.metadata.object ? src.metadata.object : src.name;
		obj::Symbol sym;
		const auto builtin = builtins.find(src.metadata.object);
		sym.name = builtin == builtins.end() ? object.add_string(program.spelling(name), program.names.length(name))
											 : object.add_string(builtin->second);
		sym.binding = src.metadata.binding == ir_model::SBM_INTERNAL ? obj::Binding::Local
			: src.metadata.binding == ir_model::SBM_WEAK             ? obj::Binding::Weak
																	 : obj::Binding::Global;
		sym.visibility = static_cast<obj::Visibility>(src.metadata.visibility);
		sym.type = src.metadata.storage == ir_model::GSM_THREAD_LOCAL ? obj::SymbolType::Tls
			: is_function_kind(src.kind)                              ? obj::SymbolType::Function
																	  : obj::SymbolType::Object;
		// GCC and Clang leave optional ELF data imports untyped. This
		// also lets symbol-table consumers recognize them as undefined weak.
		if (src.kind == SymbolKind::GlobalDeclaration && sym.binding == obj::Binding::Weak &&
			sym.type == obj::SymbolType::Object && !target_model::is_darwin(program.target))
			sym.type = obj::SymbolType::None;
		symbols[id] = object.add_symbol(sym);
	}
	for (SymbolId id : program.order)
		if (canonical[id] != kNoId)
			symbols[id] = symbols[canonical[id]];
}
void aliases(const Program& program, const std::vector<uint32_t>& symbols, obj::ObjectFile& object)
{
	std::vector<lowir::ObjectAlias> pending = program.aliases;
	for (SymbolId id : program.order)
	{
		const auto& src = program.symbols[id];
		if ((src.metadata.flags & lowir::SF_KEEP_ALIAS) && src.metadata.object && src.name != src.metadata.object &&
			symbols[id] != kNoId && object.symbols[symbols[id]].section != obj::kUndefinedSection)
			pending.push_back({ src.name, id });
	}
	if (pending.empty())
		return;
	std::map<std::string, uint32_t> names;
	for (uint32_t i = 1; i < object.symbols.size(); ++i)
		names.emplace(object.symbol_name(i), i);
	for (const auto& item : pending)
	{
		const uint32_t target = symbols.at(item.target);
		if (target == kNoId || object.symbols[target].section == obj::kUndefinedSection)
			throw AArch64Error("undefined AArch64 object alias target");
		const char* name = program.spelling(item.object);
		obj::Symbol alias = object.symbols[target];
		const auto found = names.find(name);
		if (found == names.end())
		{
			alias.name = object.add_string(name, program.names.length(item.object));
			names.emplace(name, object.add_symbol(alias));
		}
		else if (object.symbols[found->second].section == obj::kUndefinedSection)
		{
			auto& existing = object.symbols[found->second];
			alias.name = existing.name;
			alias.binding = existing.binding;
			existing = alias;
		}
	}
}

}

// Only previously emitted local leaf definitions can promise more than the
// ABI. Exclude every register field (including pair operands and writeback
// bases); treating immediate bits as registers merely shortens this mask.
static uint32_t untouched_callers(const Function& function)
{
	uint32_t mask = kLeafKept;
	for (const auto& inst : function.code)
	{
		if (inst.op == Op::Bl || inst.op == Op::Blr || inst.op == Op::Br || inst.op == Op::Svc ||
			(inst.op == Op::B && inst.fixup != Fixup::Block) || inst.fixup == Fixup::Resume)
			return 0;
		const uint32_t word = static_cast<uint32_t>(inst.op) | inst.rd | (inst.rn << 5) | (inst.rm << 16) | inst.field;
		mask &= ~((1u << (word & 31)) | (1u << ((word >> 5) & 31)) | (1u << ((word >> 10) & 31)) |
			(1u << ((word >> 16) & 31)));
		if (!mask)
			break;
	}
	return mask;
}

void compile_object(Program& program, obj::ObjectFile& object, int level, bool pic, std::string* dump,
	bool function_sections, bool host, bool minimize_size, bool contract_float, bool fixed_x18, bool general_regs_only,
	bool unwind_tables)
{
	if (program.explicit_target && !target_model::is_aarch64(program.target))
		throw AArch64Error("input and output target profiles differ");
	if (program.assembly && !object.assembly_text)
		throw AArch64Error("AArch64 source assembly requires -S and an external assembler");
	if (program.assembly && !program.assembly->functions.empty())
		throw AArch64Error("unsupported AArch64 naked-function assembly");
	object.architecture = target_model::Architecture::AArch64;
	if (!machine::legalize_wide_helpers(program))
		throw AArch64Error("conflicting AArch64 arithmetic helper identity");
	order_as_written(program);
	std::vector<SymbolId> canonical;
	if (machine::object_identities(program, canonical) != kNoId)
		throw AArch64Error("conflicting AArch64 object definitions");
	std::vector<uint32_t> symbols(program.symbols.size(), kNoId);
	create_symbols(program, canonical, symbols, object, host);
	std::vector<uint32_t> leaf_registers(level >= 2 ? program.symbols.size() : 0);
	emit_file_assembly(program, symbols, object);
	const uint32_t code = object.add_section(".text", obj::SectionKind::Text, 4);
	const uint32_t eh = unwind_tables ? object.add_section(".eh_frame", obj::SectionKind::Rodata, 8) : kNoId;
	const bool darwin = target_model::is_darwin(program.target);
	const uint32_t code_symbol = darwin ? kNoId : add_section_symbol(object, code);
	std::vector<obj::Group> weak_groups;
	ExplicitSections sections;
	for (SymbolId id : program.order)
	{
		const auto& src = program.symbols[id];
		if (canonical[id] != id)
			continue;
		if (src.kind == SymbolKind::GlobalDefinition)
			define_global(program, id, symbols, object, host, sections);
		if (src.kind != SymbolKind::FunctionDefinition)
			continue;
		Function function;
		const auto& body = *program.functions[src.detail].body;
		const bool has_assembly = program.assembly &&
			std::any_of(body.instructions.begin(), body.instructions.end(),
				[](const lowir::Instruction& inst) { return inst.op == Opcode::Asm; });
		Selector(program, id, function, has_assembly ? std::min(level, 1) : level, pic, leaf_registers, minimize_size,
			contract_float, fixed_x18, general_regs_only)
			.run();
		if (level >= 2 && src.metadata.binding == ir_model::SBM_INTERNAL && !function.exceptions && !has_assembly)
			leaf_registers[id] = untouched_callers(function);
		const uint32_t resume = function.needs_resume ? external_symbol(object, "_Unwind_Resume") : kNoId;
		auto& sym = object.symbols[symbols[id]];
		const char* name = object.symbol_name(symbols[id]);
		if (dump)
			dump_function(function, program, name, *dump);
		const bool comdat = !darwin && src.metadata.binding == ir_model::SBM_WEAK &&
			(src.metadata.flags & SF_REPLACEABLE) == 0;
		const uint32_t first_section = object.sections.size();
		sym.section = src.metadata.section != 0 && !darwin ? comdat
				? object.add_section(program.spelling(src.metadata.section), obj::SectionKind::Text, 4)
				: explicit_section(program, src.metadata.section, obj::SectionKind::Text, 4, object, sections)
			: function_sections ? object.add_section((std::string(".text.") + name).c_str(), obj::SectionKind::Text, 4)
			: comdat || has_assembly ? object.add_section(".text", obj::SectionKind::Text, 4)
									 : code;
		auto& section = object.sections[sym.section];
		if (level >= 2 && !darwin && !minimize_size)
			place_short_loops(function, section);
		const uint32_t section_index = sym.section;
		const uint64_t start = section.bytes.size();
		sym.value = start;
		encode(function, symbols, object, section_index, resume);
		for (auto symbol : function.assembly_symbols)
			object.assembly_symbols.push_back(symbols.at(symbol));
		object.symbols[symbols[id]].size = section.bytes.size() - start;
		for (const CodeLabel& label : body.code_labels)
		{
			auto& entry = object.symbols[symbols[label.symbol]];
			entry.section = section_index;
			entry.value = start + uint64_t(function.labels.at(label.block)) * 4;
			entry.type = obj::SymbolType::None;
		}
		if (!has_assembly && (unwind_tables || function.exceptions))
		{
			const auto unwind = comdat ? kNoId : eh;
			emit_unwind(function, symbols[id], code_symbol, unwind, symbols, object, darwin);
		}
		else if (function.exceptions)
			throw AArch64Error("AArch64 source assembly with C++ unwind regions is unsupported");
		if (comdat)
		{
			obj::Group group;
			group.signature = symbols[id];
			for (size_t k = first_section; k < object.sections.size(); ++k)
				group.sections.push_back(k);
			weak_groups.push_back(std::move(group));
		}
		if (src.metadata.role == ir_model::SR_INIT || src.metadata.role == ir_model::SR_FINI)
		{
			const bool init = src.metadata.role == ir_model::SR_INIT;
			const auto index = object.add_section(init ? ".init_array" : ".fini_array",
				init ? obj::SectionKind::InitArray : obj::SectionKind::FiniArray, 8);
			auto& startup = object.sections[index];
			startup.size = 8;
			startup.bytes.resize(8);
			startup.relocations.push_back(obj::Relocation{ 0, Abs64, symbols[id], 0 });
		}
		if (src.metadata.role == ir_model::SR_ENTRY && std::strcmp(object.symbol_name(symbols[id]), "main") != 0)
		{
			obj::Symbol entry = object.symbols[symbols[id]];
			entry.name = object.add_string("main", 4);
			object.add_symbol(entry);
		}
	}
	aliases(program, symbols, object);
	if (!weak_groups.empty())
	{
		// A definition may export another ABI name. Until its complete
		// bundle can be coalesced, keep every name available to foreign objects.
		std::vector<unsigned> exported(object.sections.size());
		for (const auto& symbol : object.symbols)
			if (symbol.binding != obj::Binding::Local && symbol.section < exported.size())
				++exported[symbol.section];
		for (auto& group : weak_groups)
			if (exported[object.symbols[group.signature].section] == 1)
			{
				for (auto index : group.sections)
					object.sections[index].group = object.groups.size();
				object.groups.push_back(std::move(group));
			}
	}
}

} // namespace aarch64
