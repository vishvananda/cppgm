#include "native/asm/module.h"

#include <algorithm>

#include "aarch64/assembler.h"
#include "lowir/assembly.h"
#include "asm/module_expand.h"
#include "native/asm/binding.h"
#include "native/asm/encoding.h"
#include "native/asm/environment.h"
#include "native/asm/functions.h"
#include "native/asm/inline_module.h"
#include "native/backend_error.h"

namespace native {

namespace {

class InlineInputs
{
public:
	explicit InlineInputs(InlineAssemblyModule& module) : module_(module)
	{
		module_.object.assembly_text = true;
		module_.inputs.push_back(lowir::kNoId);
	}

	void remap(asm_model::SymbolReference& use)
	{
		if (use.symbol == asm_model::kNoId)
			return;
		const uint32_t input = use.symbol;
		const auto entry = inputs_.emplace(input, module_.object.symbols.size());
		use.symbol = entry.first->second;
		if (entry.second)
		{
			object::Symbol record;
			record.binding = object::Binding::Global;
			module_.object.add_symbol(record);
			module_.inputs.push_back(input);
		}
	}

private:
	InlineAssemblyModule& module_;
	std::map<uint32_t, uint32_t> inputs_;
};

class InlineExits
{
public:
	explicit InlineExits(InlineAssemblyModule& module) : module_(module) {}

	uint32_t symbol(uint32_t operand)
	{
		const auto entry = indices_.emplace(operand, module_.object.symbols.size());
		if (entry.second)
		{
			module_.object.add_symbol(object::Symbol{});
			module_.exits.push_back(InlineAssemblyModule::Exit{ entry.first->second, operand });
		}
		return entry.first->second;
	}

	void remap(assembly::ModuleLine& line)
	{
		if (line.labels.empty())
			return;
		std::vector<assembly::SymbolUse> exits;
		for (const assembly::LabelUse& label : line.labels)
		{
			asm_model::SymbolReference reference;
			reference.symbol = symbol(label.operand);
			exits.push_back(assembly::SymbolUse{ label.first, label.count, reference });
		}
		const std::size_t first = line.symbols.size();
		line.symbols.insert(line.symbols.end(), exits.begin(), exits.end());
		std::inplace_merge(line.symbols.begin(), line.symbols.begin() + first, line.symbols.end(),
			[](const assembly::SymbolUse& a, const assembly::SymbolUse& b) { return a.first < b.first; });
		line.labels.clear();
	}

private:
	InlineAssemblyModule& module_;
	std::map<uint32_t, uint32_t> indices_;
};

bool has_symbol_name(const assembly::Operand& operand)
{
	return operand.address.label == asm_model::kNoId && !operand.address.local.empty();
}

bool absolute_local_label(const assembly::Operand& operand)
{
	return operand.kind == assembly::OperandKind::Symbol && operand.address.label != asm_model::kNoId;
}

} // namespace

bool inline_has_sections(const std::vector<assembly::ModuleLine>& lines)
{
	for (const assembly::ModuleLine& line : lines)
	{
		assembly::ModuleCursor cursor(line);
		cursor.space();
		if (cursor.current() == '.')
		{
			const std::string name = cursor.word();
			if (name == ".pushsection" || name == ".section" || name == ".popsection" || name == ".previous" ||
				name == ".text" || name == ".data" || name == ".bss" || name == ".rodata")
				return true;
		}
	}
	return false;
}

std::shared_ptr<const InlineAssemblyModule> build_inline_module(
	std::vector<assembly::ModuleLine>& lines, asm_model::Dialect dialect, Target target, bool code16gcc)
{
	auto result = std::make_shared<InlineAssemblyModule>();
	result->object.architecture = target_model::describe(target).architecture;
	InlineInputs inputs(*result);
	for (auto& line : lines)
		for (assembly::SymbolUse& use : line.symbols)
			inputs.remap(use.reference);
	InlineExits exits(*result);
	for (auto& line : lines)
		exits.remap(line);
	ModuleAssembler assembler(result->object, target, code16gcc);
	assembler.begin(dialect);
	for (const assembly::ModuleLine& line : lines)
		assembler.declare(line);
	for (const assembly::ModuleLine& line : lines)
		assembler.append(line);
	assembler.finish();
	return result;
}

bool inline_has_symbol_names(const std::vector<assembly::Instruction>& instructions)
{
	for (const auto& instruction : instructions)
		for (const auto& operand : instruction.operands)
			if (has_symbol_name(operand) || absolute_local_label(operand))
				return true;
	return false;
}

std::shared_ptr<const InlineAssemblyModule> build_inline_module(
	std::vector<assembly::Instruction>& instructions, Target target)
{
	auto result = std::make_shared<InlineAssemblyModule>();
	InlineInputs inputs(*result);
	for (auto& instruction : instructions)
		for (auto& operand : instruction.operands)
			inputs.remap(operand.address.symbol);
	InlineExits exits(*result);
	for (auto& instruction : instructions)
		for (auto& operand : instruction.operands)
			if (operand.external_label)
			{
				operand.kind = assembly::OperandKind::Symbol;
				operand.address.symbol.symbol = exits.symbol(operand.label);
				operand.external_label = false;
			}
	ModuleAssembler assembler(result->object, target);
	assembler.append(instructions);
	assembler.finish();
	instructions.clear();
	return result;
}

InlineModulePlacement::InlineModulePlacement(object::ObjectFile& out) : out_(out), symbols_(out, Target::Linux)
{
	for (uint32_t id = 1; id < out_.sections.size(); ++id)
	{
		const auto& section = out_.sections[id];
		if (section.group == object::kNoGroup)
			sections_.emplace(Key{ out_.string(section.name), section.kind, section.merge_size, section.merge_strings,
								  section.elf_note },
				id);
	}
}

uint32_t InlineModulePlacement::place_section(const object::ObjectFile& source, uint32_t section, uint64_t& offset)
{
	const object::Section& contents = source.sections[section];
	const char* name = source.string(contents.name);
	const auto found = sections_.emplace(
		Key{ name, contents.kind, contents.merge_size, contents.merge_strings, contents.elf_note },
		static_cast<uint32_t>(out_.sections.size()));
	const uint32_t id = found.first->second;
	if (found.second)
	{
		out_.add_section(name, contents.kind, contents.align);
		out_.sections[id].merge_size = contents.merge_size;
		out_.sections[id].merge_strings = contents.merge_strings;
		out_.sections[id].elf_note = contents.elf_note;
	}
	object::Section& destination = out_.sections[id];
	offset = (destination.size + contents.align - 1) & ~(contents.align - 1);
	destination.align = std::max(destination.align, contents.align);
	if (destination.kind != object::SectionKind::Bss)
	{
		if (destination.kind == object::SectionKind::Text && out_.architecture == target_model::Architecture::AArch64)
			aarch64::append_code_padding(destination.bytes, offset - destination.bytes.size());
		else
			destination.bytes.resize(offset, destination.kind == object::SectionKind::Text ? 0x90 : 0);
		destination.bytes.insert(destination.bytes.end(), contents.bytes.begin(), contents.bytes.end());
	}
	destination.size = offset + contents.size;
	return id;
}

void InlineModulePlacement::append(const InlineAssemblyModule& module, uint32_t code_section, uint64_t code_offset,
	const std::vector<uint32_t>& symbols, const std::vector<uint32_t>& exit_offsets)
{
	const object::ObjectFile& source = module.object;
	std::vector<uint32_t> section_map(source.sections.size(), 0);
	std::vector<uint64_t> offsets(source.sections.size(), 0);
	section_map[module.text] = code_section;
	offsets[module.text] = code_offset;
	for (uint32_t id = 1; id < source.sections.size(); ++id)
		if (id != module.text)
			section_map[id] = place_section(source, id, offsets[id]);
	std::vector<uint32_t> moved(source.symbols.size(), 0);
	for (size_t i = 0; i < module.exits.size(); ++i)
	{
		object::Symbol symbol;
		symbol.section = code_section;
		symbol.value = code_offset + exit_offsets[i];
		moved[module.exits[i].symbol] = out_.add_symbol(symbol);
	}
	for (uint32_t id = 1; id < source.symbols.size(); ++id)
	{
		if (moved[id] != 0)
			continue;
		object::Symbol symbol = source.symbols[id];
		if (id < module.inputs.size())
		{
			const uint32_t input = module.inputs[id];
			if (symbol.section != object::kUndefinedSection || input >= symbols.size() || symbols[input] == 0)
				throw BackendError("invalid definition or import of a typed inline assembly symbol");
			moved[id] = symbols[input];
			continue;
		}
		const char* name = source.symbol_name(id);
		if (symbol.section != 0 && symbol.section < object::kAbsoluteSection)
		{
			symbol.value += offsets[symbol.section];
			symbol.section = section_map[symbol.section];
		}
		if (symbol.binding == object::Binding::Local)
		{
			symbol.name = *name == '\0' ? 0 : out_.add_string(name);
			moved[id] = out_.add_symbol(symbol);
		}
		else
		{
			const uint32_t global = symbols_.named(name);
			moved[id] = global;
			if (symbol.section != object::kUndefinedSection)
			{
				if (out_.symbols[global].section != object::kUndefinedSection)
					throw BackendError("duplicate inline assembly definition: " + std::string(name));
				symbol.name = out_.symbols[global].name;
				out_.symbols[global] = symbol;
			}
		}
	}
	for (uint32_t id = 1; id < source.sections.size(); ++id)
	{
		auto& relocations = out_.sections[section_map[id]].relocations;
		for (object::Relocation relocation : source.sections[id].relocations)
		{
			relocation.offset += offsets[id];
			relocation.symbol = moved[relocation.symbol];
			relocations.push_back(relocation);
		}
	}
	if (out_.assembly_text)
		for (const object::AssemblyString& span : source.assembly_strings)
			out_.assembly_strings.push_back(
				object::AssemblyString{ section_map[span.section], offsets[span.section] + span.offset, span.size });
}

ModuleAssembler::ModuleAssembler(object::ObjectFile& out, Target target, bool code16gcc)
	: out_(out), target_(target), symbols_(out, target), layout_(out), unwind_(out, target)
{
	syntax_.power_alignment = target == Target::MacOS;
	if (target_model::is_i386(target))
		syntax_.code_bits = code16gcc ? 16 : 32;
	syntax_.code16gcc = code16gcc;
	section(".text", object::SectionKind::Text);
}
uint64_t ModuleAssembler::offset() const
{
	return out_.sections[section_].size;
}
void ModuleAssembler::section(
	const std::string& name, object::SectionKind kind, uint32_t merge_size, bool merge_strings, bool note, bool inherit)
{
	flush();
	previous_ = section_;
	for (uint32_t i = 1; i < out_.sections.size(); ++i)
		if (name == out_.string(out_.sections[i].name) && out_.sections[i].group == object::kNoGroup &&
			(inherit ||
				(out_.sections[i].kind == kind && out_.sections[i].merge_size == merge_size &&
					out_.sections[i].merge_strings == merge_strings && out_.sections[i].elf_note == note)))
		{
			section_ = i;
			return;
		}
	section_ = out_.add_section(name.c_str(), kind, 1);
	out_.sections[section_].merge_size = merge_size;
	out_.sections[section_].merge_strings = merge_strings;
	out_.sections[section_].elf_note = note;
}
void ModuleAssembler::flush()
{
	if (code_.empty())
	{
		if (unwind_.pending())
			unwind_.flush(section_, {}, {}, static_cast<uint32_t>(offset()));
		return;
	}
	std::vector<assembly::Instruction> instructions;
	try
	{
		instructions = assembly::parse(
			code_, syntax_.dialect, uses_, {}, &symbols_, &syntax_, target_model::is_darwin(target_) ? nullptr : this);
	}
	catch (const assembly::AssemblyError& error)
	{
		const uint32_t line = error.line != 0 && error.line <= code_lines_.size() ? code_lines_[error.line - 1]
																				  : error.line;
		throw BackendError("module assembly line " + std::to_string(line) + ": " + error.message);
	}
	emit_instructions(instructions);
	code_.clear();
	uses_.clear();
	code_lines_.clear();
}

void ModuleAssembler::append(std::vector<assembly::Instruction>& instructions)
{
	flush();
	for (auto& instruction : instructions)
		for (auto& operand : instruction.operands)
			if (has_symbol_name(operand))
				operand.address.symbol.symbol = symbols_.named(operand.address.local);
			else if (absolute_local_label(operand))
			{
				uint32_t& symbol = instructions[operand.address.label].symbol_definition;
				if (symbol == asm_model::kNoId)
				{
					symbol = out_.add_symbol(object::Symbol{});
					symbols_.type(symbol, object::SymbolType::None);
				}
				operand.address.symbol.symbol = symbol;
			}
	emit_instructions(instructions);
}

void ModuleAssembler::emit_instructions(std::vector<assembly::Instruction>& instructions)
{
	object::Section& section = out_.sections[section_];
	if (section.kind == object::SectionKind::Bss || section.kind == object::SectionKind::TlsBss)
		throw BackendError("module instructions require a file-backed section");
	std::vector<uint32_t> buffer_lines;
	for (const assembly::Instruction& instruction : instructions)
	{
		buffer_lines.push_back(instruction.line);
		section.align = std::max<uint64_t>(section.align, instruction.alignment);
	}
	for (assembly::Instruction& instruction : instructions)
		if (instruction.line != 0 && instruction.line <= code_lines_.size())
			instruction.line = code_lines_[instruction.line - 1];
	if (relax_local_jumps_)
		for (assembly::Instruction& instruction : instructions)
			if (instruction.mnemonic == "jmp" && instruction.operands.size() == 1 && instruction.segment == 0)
			{
				assembly::Operand& target = instruction.operands[0];
				if (target.kind != assembly::OperandKind::Label)
					continue;
				assembly::Instruction& label = instructions[target.label];
				if (label.symbol_definition == asm_model::kNoId)
					label.symbol_definition = symbols_.named(label.mnemonic);
				target.kind = assembly::OperandKind::Symbol;
				target.address.symbol.symbol = label.symbol_definition;
			}
	Assembler assembler(section.bytes);
	assembler.record_strings(out_.assembly_text);
	std::vector<uint32_t> positions;
	encode_assembly(assembler, instructions, RM(), &positions);
	if (!(relax_local_jumps_ ? layout_.record_labels(section_, assembler) : assembler.resolve_labels()))
		throw BackendError("unresolved module assembly label");
	section.size = section.bytes.size();
	for (const CodeString& span : assembler.strings())
		out_.assembly_strings.push_back(object::AssemblyString{ section_, span.offset, span.size });
	for (uint32_t i = 0; i < instructions.size(); ++i)
		if (instructions[i].label &&
			(instructions[i].symbol_definition != asm_model::kNoId ||
				instructions[i].mnemonic.find_first_not_of("0123456789") != std::string::npos))
			symbols_.define(instructions[i].symbol_definition != asm_model::kNoId
					? instructions[i].symbol_definition
					: symbols_.named(instructions[i].mnemonic),
				section_, positions[i]);
	size_t instruction = 0;
	for (const CodeFixup& fixup : assembler.fixups())
	{
		const bool difference = fixup.subtrahend != asm_model::kNoId || fixup.target == 0;
		if (difference || (relax_local_jumps_ && fixup.branch))
			while (instruction + 1 < positions.size() && positions[instruction + 1] <= fixup.offset)
				++instruction;
		if (difference)
		{
			if (!fixup.absolute)
				throw BackendError("a place-relative instruction cannot also encode an unresolved symbol difference");
			const uint32_t type = object::x86_absolute_relocation(fixup.end, fixup.kind == FixupKind::SignedAddress);
			data_relocations_.push_back({ fixup.offset, positions[instruction], static_cast<uint64_t>(fixup.addend),
				section_, fixup.target, fixup.subtrahend, fixup.end, type, lowir::kNoId });
			continue;
		}
		object::Relocation relocation;
		relocation.offset = fixup.offset;
		relocation.symbol = fixup.target;
		relocation.addend = static_cast<int64_t>(
			static_cast<uint64_t>(fixup.addend) - (fixup.absolute ? 0 : fixup.end));
		relocation.type = fixup.absolute
			? object::x86_absolute_relocation(fixup.end, fixup.kind == FixupKind::SignedAddress)
			: fixup.kind == FixupKind::Got      ? object::R_X86_64_GOTPCREL
			: fixup.kind == FixupKind::GotTpOff ? object::R_X86_64_GOTTPOFF
			: fixup.kind == FixupKind::Tlv      ? object::R_MACHO_TLV
			: fixup.kind == FixupKind::TpOff    ? object::R_X86_64_TPOFF32
			: fixup.branch && fixup.end == 2    ? object::R_X86_64_PC16
			: fixup.branch                      ? object::R_X86_64_PLT32
												: object::R_X86_64_PC32;
		if (relax_local_jumps_ && fixup.branch && fixup.end == 4 && instructions[instruction].mnemonic == "jmp" &&
			fixup.offset == positions[instruction] + 1 &&
			instructions[instruction].operands[0].address.relocation == assembly::Relocation::Address)
			layout_.append(section_, { positions[instruction], static_cast<uint32_t>(section.relocations.size()) });
		section.relocations.push_back(relocation);
	}
	unwind_.flush(section_, buffer_lines, positions, static_cast<uint32_t>(section.size));
}
void ModuleAssembler::declare(const assembly::ModuleLine& line)
{
	assembly::ModuleCursor cursor(line);
	const std::string name = cursor.word();
	if (!relax_local_jumps_ && !target_model::is_darwin(target_) && !target_model::is_aarch64(target_))
	{
		if (name == ".")
			relax_local_jumps_ = cursor.take('=');
		else if (name == ".set" || name == ".equ")
			relax_local_jumps_ = cursor.word() == "." && cursor.take(',');
	}
	if (name == ".globl" || name == ".global" || name == ".weak" || name == ".weak_definition" || name == ".local" ||
		name == ".hidden" || name == ".private_extern" || name == ".type")
	{
		directive(name, cursor);
		cursor.finish();
	}
}
void ModuleAssembler::append_aarch64(const std::string& name, assembly::ModuleCursor& cursor)
{
	auto& section = out_.sections[section_];
	if (section.kind == object::SectionKind::Bss || section.kind == object::SectionKind::TlsBss)
		cursor.fail("AArch64 instructions require a file-backed section");
	section.align = std::max<uint64_t>(section.align, 4);
	do
	{
		const uint64_t site = offset();
		if (layout_.pending(section_))
			layout_.record_word_instruction(section_, site);
		else if (site & 3)
			cursor.fail("AArch64 instruction is not word aligned");
		const auto instruction = aarch64::assemble_word(name, cursor, *this, symbols_);
		reserve(4, 0);
		for (unsigned i = 0; i < 4; ++i)
			section.bytes[site + i] = static_cast<uint8_t>(instruction.bits >> (8 * i));
		if (instruction.relocation != 0)
			section.relocations.push_back({ site, instruction.relocation, instruction.symbol, instruction.addend });
	} while (name == ".inst" && cursor.take(','));
	cursor.finish();
}

void ModuleAssembler::append(const assembly::ModuleLine& line)
{
	const std::vector<assembly::SymbolUse> numeric = symbols_.numeric_uses(line);
	const std::vector<assembly::SymbolUse>& uses = numeric.empty() ? line.symbols : numeric;
	assembly::ModuleCursor cursor(line, uses);
	const std::string name = cursor.word();
	const bool label = cursor.take(':');
	if (line.register_assignment.bits != 0)
	{
		flush();
		symbols_.define_register_alias(
			name == ".set" || name == ".equ" ? cursor.word() : name, line.register_assignment);
		syntax_.register_aliases = true;
		return;
	}
	if (!label && cursor.take('='))
	{
		flush();
		if (name == ".")
		{
			origin(cursor, false);
			cursor.finish();
			return;
		}
		const uint32_t id = symbols_.named(name);
		if (line.absolute_assignment)
			symbols_.define_absolute(id, line.assignment);
		else
			assign(id, cursor);
		if (!line.absolute_assignment)
			cursor.finish();
		return;
	}
	if (!label && line.absolute_assignment && (name == ".set" || name == ".equ"))
	{
		flush();
		symbols_.define_absolute(symbol(cursor), line.assignment);
		return;
	}
	if (!label && name.compare(0, 5, ".cfi_") == 0)
	{
		if (syntax_.dialect == asm_model::Dialect::AArch64)
			cursor.fail("AArch64 assembly CFI is unavailable");
		if (out_.sections[section_].kind != object::SectionKind::Text)
			cursor.fail("CFI requires a code section");
		unwind_.record(line, static_cast<uint32_t>(code_lines_.size() + 1), &symbols_);
		return;
	}
	if (syntax_.dialect == asm_model::Dialect::AArch64)
	{
		if (label)
		{
			cursor.finish();
			assembly::ModuleCursor definition(line, uses);
			symbols_.define(symbol(definition), section_, offset());
			return;
		}
		if (name[0] != '.' || name == ".inst")
		{
			append_aarch64(name, cursor);
			return;
		}
		if (name == ".intel_syntax" || name == ".att_syntax")
			cursor.fail("x86 assembly syntax directive on AArch64");
	}
	const bool syntax = !label && (name == ".intel_syntax" || name == ".att_syntax");
	const auto kind = out_.sections[section_].kind;
	const bool bss = kind == object::SectionKind::Bss || kind == object::SectionKind::TlsBss;
	if (syntax && bss)
	{
		assembly::parse(line.text, syntax_.dialect, line.symbols, line.labels, &symbols_, &syntax_);
		return;
	}
	const bool code_data = syntax_.dialect != asm_model::Dialect::AArch64 &&
		out_.sections[section_].kind == object::SectionKind::Text &&
		(((name == ".p2align" || name == ".balign" || name == ".align") && !layout_.pending(section_) &&
			 cursor.numeric()) ||
			((name == ".byte" || name == ".short" || name == ".word" || name == ".long" || name == ".quad") &&
				cursor.numeric() && cursor.current() != '(' && cursor.symbol_use() == nullptr));
	if (name[0] == '.' && !label && !syntax && !code_data)
	{
		flush();
		if (!directive(name, cursor))
			cursor.fail("module directive is not implemented: " + name);
		cursor.finish();
		return;
	}
	if (bss)
	{
		if (!label)
			cursor.fail("instructions require a file-backed section");
		cursor.finish();
		assembly::ModuleCursor definition(line, uses);
		symbols_.define(symbol(definition), section_, offset());
		return;
	}
	if (code_.size() + line.text.size() > 64u * 1024u * 1024u)
		cursor.fail("module code exceeds the byte limit");
	code_lines_.push_back(line.line);
	const uint32_t first = static_cast<uint32_t>(code_.size());
	code_ += line.text;
	code_ += '\n';
	for (assembly::SymbolUse use : uses)
	{
		use.first += first;
		uses_.push_back(use);
	}
}
void ModuleAssembler::begin(asm_model::Dialect dialect)
{
	flush();
	syntax_.dialect = dialect;
	syntax_.register_prefix = dialect == asm_model::Dialect::Att;
}
void ModuleAssembler::finish()
{
	flush();
	if (!section_stack_.empty())
		throw BackendError("unbalanced module section stack");
	layout_.finish();
	finish_symbols();
	symbols_.finish();
	finish_data();
	if (syntax_.dialect == asm_model::Dialect::AArch64)
		aarch64::finish_assembly_branches(out_);
	unwind_.finish(layout_);
}
void ModuleAssembler::bind_c_symbols(const lowir::Program& program, const std::vector<uint32_t>& mapping)
{
	for (lowir::SymbolId id : program.order)
	{
		const lowir::Symbol& source = program.symbols[id];
		const uint32_t index = mapping[id];
		if (index != 0 && source.metadata.binding == ir_model::SBM_INTERNAL &&
			source.metadata.linkage == ir_model::LLM_C && lowir::is_function_kind(source.kind))
		{
			// Private LowIR function names carry an '@' in the object. GNU
			// file assembly can reference the C spelling in the same unit.
			const char* name = out_.symbol_name(index);
			if (*name == '@' && name[1] != '\0')
				symbols_.add_name(name + 1, index);
		}
	}
}

void emit_assembly_items(object::ObjectFile& out, const lowir::Program& program, Target target,
	const std::vector<uint32_t>& mapping, AssemblyEnvironment& environment, bool code16gcc)
{
	if (!program.assembly || (program.assembly->globals.empty() && program.assembly->functions.empty()))
		return;
	try
	{
		auto sources = environment.globals();
		for (auto& source : sources)
			for (auto& line : source)
				remap_assembly_symbols(line.symbols, mapping);
		ModuleAssembler assembler(out, target, code16gcc);
		if (target == Target::Linux || target == Target::AArch64Linux || target_model::is_i386(target))
			assembler.bind_c_symbols(program, mapping);
		for (const std::vector<assembly::ModuleLine>& source : sources)
			for (const assembly::ModuleLine& line : source)
				assembler.declare(line);
		for (const lowir::AssemblyFunction& function : program.assembly->functions)
			emit_assembly_function(assembler, program, function, mapping, environment);
		assembler.module_start();
		for (uint32_t i = 0; i < sources.size(); ++i)
		{
			assembler.begin(program.assembly->templates[program.assembly->globals[i].definition].dialect);
			for (const assembly::ModuleLine& line : sources[i])
				assembler.append(line);
		}
		assembler.finish();
	}
	catch (const assembly::AssemblyError& error)
	{
		throw BackendError("module assembly line " + std::to_string(error.line) + ": " + error.message);
	}
}
} // namespace native
