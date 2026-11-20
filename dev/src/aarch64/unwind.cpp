#include "aarch64/mir.h"
#include "aarch64/link.h"
#include "native/object/dwarf_bytes.h"
#include "native/object/host_unwind.h"

namespace aarch64 {

void Function::frame_rule(FrameRule rule, unsigned reg, unsigned offset)
{
	frame_events.push_back(FrameEvent{ static_cast<uint32_t>(4 * code.size()), rule, reg, offset });
}

namespace obj = native::object;

uint32_t external_symbol(obj::ObjectFile& object, const char* name)
{
	for (uint32_t i = 1; i < object.symbols.size(); ++i)
		if (object.symbols[i].binding != obj::Binding::Local && std::strcmp(object.symbol_name(i), name) == 0)
			return i;
	obj::Symbol symbol;
	symbol.name = object.add_string(name, std::strlen(name));
	symbol.binding = obj::Binding::Global;
	symbol.type = obj::SymbolType::Function;
	return object.add_symbol(symbol);
}

namespace {
uint32_t section_symbol(obj::ObjectFile& object, uint32_t section)
{
	obj::Symbol symbol;
	symbol.type = obj::SymbolType::Section;
	symbol.section = section;
	return object.add_symbol(symbol);
}

uint32_t pointer_cell(obj::ObjectFile& object, uint32_t target)
{
	const uint32_t index = object.add_section(".data.rel.ro", obj::SectionKind::Data, 8);
	auto& section = object.sections[index];
	section.bytes.resize(8);
	section.size = 8;
	section.relocations.push_back(obj::Relocation{ 0, Abs64, target, 0 });
	return section_symbol(object, index);
}

obj::Relocation indirect_field(obj::ObjectFile& object, uint32_t offset, uint32_t symbol, bool darwin)
{
	return darwin ? obj::Relocation{ offset, DarwinPointerToGot, symbol, 0 }
				  : obj::Relocation{ offset, Prel32, pointer_cell(object, symbol), 0 };
}

uint32_t exception_table(
	const Function& function, const std::vector<uint32_t>& symbols, obj::ObjectFile& object, bool darwin)
{
	if (!function.exceptions)
		return lowir::kNoId;
	std::vector<uint8_t> bytes;
	std::vector<native::LsdaTypeField> types;
	native::LsdaScratch scratch;
	if (!native::encode_lsda(function.sites, function.pads, function.exceptions->tables, bytes, types, scratch))
		return lowir::kNoId;
	const uint32_t index = object.add_section(".gcc_except_table", obj::SectionKind::Rodata, 4);
	object.sections[index].size = bytes.size();
	object.sections[index].bytes = std::move(bytes);
	for (const auto& type : types)
	{
		const auto relocation = indirect_field(object, type.offset, symbols.at(type.type), darwin);
		object.sections[index].relocations.push_back(relocation);
	}
	return section_symbol(object, index);
}
}

void emit_unwind(const Function& function, uint32_t symbol, uint32_t shared_section,
	const std::vector<uint32_t>& symbols, std::vector<uint32_t>& section_symbols, obj::ObjectFile& object, bool darwin)
{
	const uint32_t lsda = exception_table(function, symbols, object, darwin);
	const bool handler = lsda != lowir::kNoId;
	const uint32_t personality = handler ? external_symbol(object, "__gxx_personality_v0") : lowir::kNoId;
	const uint32_t cell = handler && !darwin ? pointer_cell(object, personality) : personality;
	const uint32_t section_index = handler || shared_section == lowir::kNoId
		? object.add_section(".eh_frame", obj::SectionKind::Rodata, 8)
		: shared_section;
	auto& section = object.sections[section_index];
	if (section.bytes.empty())
	{
		native::CieDescription cie;
		cie.return_column = 30;
		cie.initial = false;
		cie.initial_rules = { 0x0c, 31, 0 }; // DW_CFA_def_cfa SP, 0
		cie.personality = handler;
		cie.lsda_encoding = handler ? 0x1b : 0xff;
		const uint32_t field = native::encode_cie(cie, section.bytes);
		if (handler)
			section.relocations.push_back(obj::Relocation{ field, darwin ? DarwinPointerToGot : Prel32, cell, 0 });
	}
	uint32_t pc = 0;
	std::vector<uint8_t> rules;
	native::DwarfBytes bytes(rules);
	for (const auto& event : function.frame_events)
	{
		const uint32_t delta = event.pc - pc;
		if (delta && delta < 64)
			rules.push_back(0x40 | delta);
		else if (delta)
		{
			rules.push_back(0x04); // DW_CFA_advance_loc4
			bytes.fixed(delta, 4);
		}
		pc = event.pc;
		switch (event.rule)
		{
		case FrameRule::Register:
			rules.push_back(0x0d); // DW_CFA_def_cfa_register
			bytes.uleb(event.reg);
			break;
		case FrameRule::Offset:
			rules.push_back(0x0e);
			bytes.uleb(event.offset);
			break;
		case FrameRule::Save:
			if (event.reg < 64)
				rules.push_back(0x80 | event.reg);
			else
			{
				rules.push_back(0x05); // DW_CFA_offset_extended
				bytes.uleb(event.reg);
			}
			bytes.uleb(event.offset / 8);
			break;
		case FrameRule::Restore:
			if (event.reg < 64)
				rules.push_back(0xc0 | event.reg);
			else
			{
				rules.push_back(0x06); // DW_CFA_restore_extended
				bytes.uleb(event.reg);
			}
			break;
		case FrameRule::RememberState:
			rules.push_back(0x0a);
			break;
		case FrameRule::RestoreState:
			rules.push_back(0x0b);
			break;
		}
	}
	uint32_t pc_field, lsda_field;
	native::FdeDescription description;
	description.code_bytes = function.code.size() * 4;
	description.lsda_encoding = handler ? 0x1b : 0xff;
	native::encode_fde(description, rules.data(), rules.size(), section.bytes, pc_field, lsda_field);
	// An ELF FDE names its code by section symbol and offset, as GNU as
	// does: a global symbol may bind to another definition, and ld refuses
	// a PC-relative reference to one in a shared object. Mach-O resolves
	// the field by address either way.
	uint32_t target = symbol;
	int64_t addend = 0;
	if (!darwin)
	{
		const uint32_t code = object.symbols[symbol].section;
		addend = object.symbols[symbol].value;
		if (code >= section_symbols.size())
			section_symbols.resize(object.sections.size(), lowir::kNoId);
		if (section_symbols[code] == lowir::kNoId)
			section_symbols[code] = section_symbol(object, code);
		target = section_symbols[code];
	}
	section.relocations.push_back(obj::Relocation{ pc_field, Prel32, target, addend });
	if (handler)
		section.relocations.push_back(obj::Relocation{ lsda_field, Prel32, lsda, 0 });
	section.size = section.bytes.size();
}
} // namespace aarch64
