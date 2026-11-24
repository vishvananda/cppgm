#include "native/asm/module_unwind.h"

#include "native/asm/module_layout.h"
#include "native/backend_error.h"

#include <cstring>

namespace native {
namespace {
bool initial_rule(AssemblyCfiOp op)
{
	switch (op)
	{
	case AssemblyCfiOp::DefCfa:
	case AssemblyCfiOp::DefRegister:
	case AssemblyCfiOp::DefOffset:
	case AssemblyCfiOp::Adjust:
	case AssemblyCfiOp::Offset:
	case AssemblyCfiOp::RelOffset:
	case AssemblyCfiOp::ValOffset:
	case AssemblyCfiOp::Register:
	case AssemblyCfiOp::Restore:
	case AssemblyCfiOp::Undefined:
	case AssemblyCfiOp::Same:
		return true;
	default:
		return false;
	}
}
bool same(const CieDescription& a, const CieDescription& b)
{
	return a.personality == b.personality && a.initial == b.initial && a.signal == b.signal &&
		a.return_column == b.return_column && a.personality_encoding == b.personality_encoding &&
		a.lsda_encoding == b.lsda_encoding && a.initial_rules == b.initial_rules;
}
}
struct ModuleUnwind::Procedure
{
	uint32_t section;
	uint32_t first;
	CieDescription description;
	asm_model::SymbolReference personality;
	asm_model::SymbolReference lsda;
	AssemblyCfiRules rules;
	uint32_t initial_bytes = 0;
	bool initial_open = true;
	Procedure(uint32_t section, uint32_t first, bool simple) : section(section), first(first), rules(simple)
	{
		description.initial = !simple;
	}
};
ModuleUnwind::ModuleUnwind(object::ObjectFile& out, Target target) : out_(out), target_(target)
{}
ModuleUnwind::~ModuleUnwind() = default;
void ModuleUnwind::begin(uint32_t anchor)
{
	AssemblyCfiEvent event;
	event.op = AssemblyCfiOp::Start;
	event.anchor = anchor;
	events_.push_back(event);
}
void ModuleUnwind::end(uint32_t anchor)
{
	AssemblyCfiEvent event;
	event.op = AssemblyCfiOp::End;
	event.anchor = anchor;
	events_.push_back(event);
}
void ModuleUnwind::record(const assembly::ModuleLine& line, uint32_t anchor, assembly::SymbolLookup* symbols)
{
	if (events_.size() >= 1000000)
		throw BackendError(
			"assembly CFI line " + std::to_string(line.line) + ": " + "CFI directive count exceeds limit");
	events_.push_back(parse_assembly_cfi(line, anchor, symbols));
}
void ModuleUnwind::flush(
	uint32_t section, const std::vector<uint32_t>& lines, const std::vector<uint32_t>& positions, uint32_t end)
{
	size_t index = 0;
	for (const AssemblyCfiEvent& event : events_)
	{
		while (index < lines.size() && lines[index] < event.anchor)
			++index;
		positioned_.push_back({ event, section, index < positions.size() ? positions[index] : end, false });
	}
	events_.clear();
}
void ModuleUnwind::apply(const AssemblyCfiEvent& event, uint32_t section, uint32_t position)
{
	if (event.op == AssemblyCfiOp::Sections)
	{
		if ((event.sections & CfiDebugFrame) != 0 && target_ == Target::MacOS)
			throw BackendError("assembly CFI line " + std::to_string(event.line) + ": .debug_frame requires ELF");
		if (started_ && (event.sections & CfiEhFrame & ~sections_) != 0)
			throw BackendError(
				"assembly CFI line " + std::to_string(event.line) + ": inconsistent CFI section selection");
		sections_ = started_ ? sections_ | event.sections : event.sections;
		return;
	}
	if (event.op == AssemblyCfiOp::Start)
	{
		if (current_)
			throw BackendError("assembly CFI line " + std::to_string(event.line) + ": " + "nested CFI procedures");
		started_ = true;
		current_.reset(new Procedure(section, position, event.simple));
		return;
	}
	if (!current_)
		throw BackendError(
			"assembly CFI line " + std::to_string(event.line) + ": " + "CFI directive outside a procedure");
	if (section != current_->section || position < current_->first)
		throw BackendError(
			"assembly CFI line " + std::to_string(event.line) + ": " + "CFI procedure changed its code section");
	if (event.op == AssemblyCfiOp::End)
	{
		emit(position);
		current_.reset();
	}
	else if (event.op == AssemblyCfiOp::Signal)
		current_->description.signal = true;
	else if (event.op == AssemblyCfiOp::ReturnColumn)
		current_->description.return_column = event.reg;
	else if (event.op == AssemblyCfiOp::Personality)
	{
		current_->description.personality = event.encoding != 0xff;
		current_->description.personality_encoding = event.encoding;
		current_->personality = event.reference;
	}
	else if (event.op == AssemblyCfiOp::Lsda)
	{
		current_->description.lsda_encoding = event.encoding;
		current_->lsda = event.reference;
	}
	else
	{
		current_->rules.apply(event, position - current_->first);
		if (position == current_->first && current_->initial_open && initial_rule(event.op))
			current_->initial_bytes = static_cast<uint32_t>(current_->rules.bytes().size());
		else
			current_->initial_open = false;
	}
}
uint32_t ModuleUnwind::section_symbol(uint32_t section)
{
	if (section_symbols_.empty())
	{
		section_symbols_.resize(out_.sections.size());
		for (uint32_t i = 1; i < out_.symbols.size(); ++i)
		{
			const auto& symbol = out_.symbols[i];
			if (symbol.type == object::SymbolType::Section && symbol.section < section_symbols_.size() &&
				section_symbols_[symbol.section] == 0)
				section_symbols_[symbol.section] = i;
		}
	}
	if (section >= section_symbols_.size())
		section_symbols_.resize(section + 1);
	uint32_t& id = section_symbols_[section];
	if (id != 0)
		return id;
	object::Symbol symbol;
	symbol.type = object::SymbolType::Section;
	symbol.section = section;
	id = out_.add_symbol(symbol);
	return id;
}
void ModuleUnwind::pointer_relocation(
	uint32_t section, uint32_t offset, uint8_t encoding, const asm_model::SymbolReference& reference, bool personality)
{
	const unsigned bytes = unwind_pointer_bytes(encoding);
	const bool relative = (encoding & 0x70) == 0x10;
	uint32_t type = relative    ? (bytes == 8 ? object::R_X86_64_PC64 : object::R_X86_64_PC32)
		: bytes == 8            ? object::R_X86_64_64
		: (encoding & 15) == 11 ? object::R_X86_64_32S
								: object::R_X86_64_32;
	if (target_ == Target::MacOS && personality && encoding == 0x9b)
		type = object::R_X86_64_GOTPCREL;
	out_.sections[section].relocations.push_back(
		object::Relocation{ offset, type, reference.symbol, reference.addend });
}
void ModuleUnwind::emit(uint32_t end)
{
	Procedure& procedure = *current_;
	const auto& instructions = procedure.rules.bytes();
	procedure.description.initial_rules.assign(instructions.begin(), instructions.begin() + procedure.initial_bytes);
	if ((sections_ & CfiEhFrame) != 0)
		emit_frame(runtime_, end, false);
	if ((sections_ & CfiDebugFrame) != 0)
		emit_frame(debug_, end, true);
}
void ModuleUnwind::emit_frame(Frame& frame, uint32_t end, bool debug)
{
	if (frame.section == 0)
	{
		const char* name = debug ? ".debug_frame" : ".eh_frame";
		const auto kind = debug ? object::SectionKind::Metadata : object::SectionKind::Rodata;
		for (uint32_t i = 1; i < out_.sections.size(); ++i)
			if (std::strcmp(out_.string(out_.sections[i].name), name) == 0 &&
				out_.sections[i].group == object::kNoGroup && out_.sections[i].kind == kind)
			{
				frame.section = i;
				break;
			}
		if (frame.section == 0)
			frame.section = out_.add_section(name, kind, 8);
	}
	const Procedure& procedure = *current_;
	auto& section = out_.sections[frame.section];
	uint32_t cie = 0;
	bool found = false;
	for (const Cie& item : frame.cies)
		if (same(item.description, procedure.description) && item.personality == procedure.personality.symbol &&
			item.addend == procedure.personality.addend)
		{
			cie = item.offset;
			found = true;
			break;
		}
	if (!found)
	{
		cie = static_cast<uint32_t>(section.bytes.size());
		if (debug)
			encode_debug_cie(procedure.description, section.bytes);
		else
		{
			const uint32_t field = encode_cie(procedure.description, section.bytes);
			if (procedure.description.personality)
				pointer_relocation(
					frame.section, field, procedure.description.personality_encoding, procedure.personality, true);
		}
		Cie entry;
		entry.description = procedure.description;
		entry.personality = procedure.personality.symbol;
		entry.addend = procedure.personality.addend;
		entry.offset = cie;
		frame.cies.push_back(entry);
	}
	const auto& rules = procedure.rules.bytes();
	const uint8_t empty = 0;
	const size_t count = rules.size() - procedure.initial_bytes;
	const uint8_t* instructions = count == 0 ? &empty : rules.data() + procedure.initial_bytes;
	const uint32_t code_bytes = end - procedure.first;
	if (debug)
	{
		const uint32_t cie_field = encode_debug_fde(code_bytes, instructions, count, section.bytes);
		section.size = section.bytes.size();
		section.relocations.push_back({ cie_field, object::R_X86_64_32, section_symbol(frame.section), cie });
		section.relocations.push_back(
			{ cie_field + 4, object::R_X86_64_64, section_symbol(procedure.section), procedure.first });
		return;
	}
	uint32_t pc_field = 0, lsda_field = 0;
	FdeDescription description;
	description.cie = cie;
	description.code_bytes = code_bytes;
	description.lsda_encoding = procedure.description.lsda_encoding;
	encode_fde(description, instructions, count, section.bytes, pc_field, lsda_field);
	section.size = section.bytes.size();
	section.relocations.push_back(
		object::Relocation{ pc_field, object::R_X86_64_PC32, section_symbol(procedure.section), procedure.first });
	if (description.lsda_encoding != 0xff)
		pointer_relocation(frame.section, lsda_field, description.lsda_encoding, procedure.lsda, false);
}
void ModuleUnwind::boundary()
{
	positioned_.push_back({ {}, 0, 0, true });
}
void ModuleUnwind::finish(const ModuleLayout& layout)
{
	boundary();
	for (const PositionedEvent& positioned : positioned_)
	{
		if (!positioned.boundary)
			apply(positioned.event, positioned.section, layout.position(positioned.section, positioned.offset));
		else if (current_)
			throw BackendError("assembly CFI line 1: unterminated CFI procedure");
	}
}
} // namespace native
