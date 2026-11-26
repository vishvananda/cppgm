#include "aarch64/selector.h"
#include <algorithm>

#include "aarch64/error.h"
#include "lowir/assembly.h"
#include "native/asm/constraints.h"
#include "native/asm/environment.h"
#include "native/asm/inline_module.h"

namespace aarch64 {
namespace {

using namespace asm_model;

constexpr unsigned kAssemblyAddress = 9;
constexpr unsigned kAssemblyTag = 17;
constexpr unsigned kVectorBase = 32;

uint64_t clobber_mask(const lowir::AssemblyModule& module, const lowir::AssemblyTemplate& definition)
{
	uint64_t mask = 0;
	for (uint32_t i = 0; i < definition.clobber_count; ++i)
	{
		const Register& reg = module.clobbers[definition.first_clobber + i];
		if (reg.bank != RegisterBank::Gpr && reg.bank != RegisterBank::Vector)
			throw AArch64Error("unsupported AArch64 assembly clobber bank");
		mask |= uint64_t(1) << (reg.number + (reg.bank == RegisterBank::Vector ? kVectorBase : 0));
	}
	return mask;
}

std::string register_operand(unsigned reg, uint16_t bits)
{
	if (reg < kVectorBase)
		return std::string(bits == 32 ? "w" : "x") + std::to_string(reg);
	const char kind = bits == 8 ? 'b'
		: bits == 16            ? 'h'
		: bits == 32            ? 's'
		: bits == 64            ? 'd'
		: bits == 128           ? 'q'
								: 'v';
	return std::string(1, kind) + std::to_string(reg - kVectorBase);
}

std::string symbol_operand(const lowir::Program& program, const SymbolReference& ref)
{
	const auto& sym = program.symbols[ref.symbol];
	std::string result = program.spelling(sym.metadata.object ? sym.metadata.object : sym.name);
	if (ref.addend != 0)
	{
		if (ref.addend > 0)
			result += '+';
		result += std::to_string(ref.addend);
	}
	return result;
}

void expand(std::string& source, const lowir::Program& program, const lowir::AssemblyTemplate& definition,
	const native::AssemblyBinding& binding, uint64_t unique, std::vector<lowir::SymbolId>* symbols,
	std::vector<assembly::SymbolUse>* uses)
{
	const auto& module = *program.assembly;
	for (uint32_t i = 0; i < definition.piece_count; ++i)
	{
		const Piece& piece = module.pieces[definition.first_piece + i];
		if (piece.kind == PieceKind::Text)
		{
			source.append(module.text, piece.first, piece.count);
			continue;
		}
		if (piece.kind == PieceKind::Unique)
		{
			source += std::to_string(unique);
			continue;
		}
		if (piece.kind != PieceKind::Operand)
			throw AArch64Error("unsupported AArch64 source assembly piece");
		const unsigned location = binding.locations[piece.operand];
		const unsigned reg = binding.registers[piece.operand];
		const uint64_t value = binding.constants[piece.operand].low;
		switch (location)
		{
		case AL_REGISTER:
			if (piece.format == Format::Address)
				source += '[' + register_operand(reg, 64) + ']';
			else
				source += register_operand(reg, piece.bits);
			break;
		case AL_MEMORY:
			source += '[' + register_operand(reg, 64) + ']';
			break;
		case AL_LABEL:
			source += ".Lcppgm.asm." + std::to_string(unique) + "." + std::to_string(value);
			break;
		case AL_SYMBOL:
			if (uses)
				assembly::append_symbol_use(source, *uses, binding.symbols[piece.operand]);
			else
			{
				source += symbol_operand(program, binding.symbols[piece.operand]);
				symbols->push_back(binding.symbols[piece.operand].symbol);
			}
			break;
		case AL_IMMEDIATE:
			if (value == 0 && (piece.bits == 32 || piece.bits == 64))
				source += piece.bits == 32 ? "wzr" : "xzr";
			else
			{
				const uint64_t number = piece.format == Format::Negated ? 0 - value : value;
				source += std::to_string(static_cast<int64_t>(number));
			}
			break;
		default:
			throw AArch64Error("unsupported AArch64 source assembly operand");
		}
	}
}

void append_assembly_labels(std::string& source, const native::AssemblyBinding& binding, uint64_t unique)
{
	const std::string prefix = ".Lcppgm.asm." + std::to_string(unique) + ".";
	if (std::find(binding.locations.begin(), binding.locations.end(), AL_LABEL) == binding.locations.end())
		return;
	source += "\n\tmov w17, #0\n\tb " + prefix + "join\n";
	for (size_t i = 0; i < binding.locations.size(); ++i)
		if (binding.locations[i] == AL_LABEL)
		{
			const std::string tag = std::to_string(binding.constants[i].low);
			source += prefix + tag + ":\n\tmov w17, #" + tag + "\n\tb " + prefix + "join\n";
		}
	source += prefix + "join:\n";
}

} // namespace

void prepare_global_assembly(const lowir::Program& program, const lowir::AssemblyGlobal& entry, uint64_t unique,
	std::string& source, std::vector<assembly::SymbolUse>& uses)
{
	const auto& module = *program.assembly;
	const auto& definition = module.templates.at(entry.definition);
	lowir::FunctionBody constants;
	constants.literals = entry.literals;
	const auto binding = native::assign_assembly_operands(
		module, definition, clobber_mask(module, definition), constants, entry.arguments, nullptr);
	expand(source, program, definition, binding, unique, nullptr, &uses);
}

void emit_file_assembly(
	const lowir::Program& program, const std::vector<uint32_t>& symbols, native::object::ObjectFile& object)
{
	if (!program.assembly || program.assembly->globals.empty())
		return;
	const uint32_t code = object.add_section(".text", native::object::SectionKind::Text, 4);
	auto& section = object.sections[code];
	for (const auto& entry : program.assembly->globals)
	{
		const auto& module = *program.assembly;
		const auto& definition = module.templates.at(entry.definition);
		lowir::FunctionBody constants;
		constants.literals = entry.literals;
		const auto binding = native::assign_assembly_operands(
			module, definition, clobber_mask(module, definition), constants, entry.arguments, nullptr);
		std::string text;
		std::vector<lowir::SymbolId> referenced;
		expand(text, program, definition, binding, object.assembly_fragments.size(), &referenced, nullptr);
		for (auto symbol : referenced)
			object.assembly_symbols.push_back(symbols.at(symbol));
		object.assembly_fragments.push_back({ code, section.bytes.size(), std::move(text) });
		section.bytes.resize(section.bytes.size() + 4);
	}
	section.size = section.bytes.size();
}

uint64_t Selector::assembly_clobbers(const lowir::Instruction& inst, bool include_fixed) const
{
	const auto& module = *program_.assembly;
	const auto& definition = module.templates.at(static_cast<uint32_t>(inst.immediate));
	const uint64_t mask = clobber_mask(module, definition);
	if (include_fixed)
		for (uint32_t i = 0; i < definition.operand_count; ++i)
		{
			const auto& operand = module.operands[definition.first_operand + i];
			for (uint32_t j = 0; j < operand.alternative_count; ++j)
			{
				const auto& alt = module.alternatives[operand.first_alternative + j];
				if (alt.group_count != 1)
					continue;
				const auto& group = module.groups[alt.first_group];
				const auto& reg = module.registers[group.first_register];
				if (group.register_count == 1 && reg.bank == RegisterBank::Gpr && reg.number == 30)
					return mask | (uint64_t(1) << 30);
			}
		}
	return mask;
}

void Selector::stage_assembly_inputs(const lowir::Instruction& inst, const native::AssemblyBinding& binding)
{
	const auto& module = *program_.assembly;
	const auto& definition = module.templates.at(static_cast<uint32_t>(inst.immediate));
	uint64_t staged = 0;
	for (uint32_t i = 0; i < definition.operand_count; ++i)
	{
		const auto& operand = module.operands[definition.first_operand + i];
		const auto& source = module.operands[definition.first_operand + binding.sources[i]];
		const unsigned location = binding.locations[i], reg = binding.registers[i];
		if ((location != AL_MEMORY && (location != AL_REGISTER || source.input == lowir::kNoId)) ||
			(staged & (uint64_t(1) << reg)) != 0)
			continue;
		staged |= uint64_t(1) << reg;
		const auto argument = [&](uint32_t index) { return body_.operands[inst.extra_first + index]; };
		if (location == AL_MEMORY)
			address(reg, argument(source.input_storage ? source.input : operand.output));
		else if (source.input_storage)
		{
			address(kAssemblyAddress, argument(source.input));
			if (reg < kVectorBase)
				access(false, reg, kAssemblyAddress, 0, storage_bytes(operand.type));
			else
			{
				const uint64_t bytes = storage_bytes(operand.type);
				out_.emit(bytes == 4 ? Op::LdrS
						: bytes == 8 ? Op::LdrD
									 : Op::LdrQ,
					reg - kVectorBase, kAssemblyAddress);
			}
		}
		else if (reg < kVectorBase)
			value(reg, argument(source.input), source.type);
		else
			vector_move(reg - kVectorBase, vector_value(argument(source.input), reg - kVectorBase));
	}
}

void Selector::store_assembly_outputs(const lowir::Instruction& inst, const native::AssemblyBinding& binding)
{
	const auto& module = *program_.assembly;
	const auto& definition = module.templates.at(static_cast<uint32_t>(inst.immediate));
	for (uint32_t i = 0; i < definition.operand_count; ++i)
	{
		const auto& operand = module.operands[definition.first_operand + i];
		if (operand.output == lowir::kNoId || binding.locations[i] == AL_MEMORY)
			continue;
		address(kAssemblyAddress, body_.operands[inst.extra_first + operand.output]);
		unsigned reg = binding.registers[i];
		if (operand.flags & AO_EXIT_TAG)
			reg = kAssemblyTag;
		if (operand.flags & AO_FLAG)
		{
			reg = 16;
			out_.emit(Op::CsincW, reg, 31, 31, (operand.condition ^ 1) << 12);
		}
		const uint64_t bytes = storage_bytes(operand.type);
		if (reg < kVectorBase)
			access(true, reg, kAssemblyAddress, 0, bytes);
		else
			out_.emit(bytes == 4 ? Op::StrS : bytes == 8 ? Op::StrD : Op::StrQ, reg - kVectorBase, kAssemblyAddress);
	}
}

static std::shared_ptr<const native::InlineAssemblyModule> assemble_inline(native::AssemblyEnvironment& environment,
	uint32_t prefix, const std::string& source, const std::vector<assembly::SymbolUse>& uses,
	target_model::Target target)
{
	try
	{
		auto expander = environment.snapshot(prefix);
		auto lines = expander.expand(assembly::module_lines(source, uses, {}, Dialect::AArch64));
		auto module = native::build_inline_module(lines, Dialect::AArch64, target, false);
		const auto& text = module->main();
		if ((text.bytes.size() & 3) != 0 || text.align > 4)
			throw AArch64Error("inline AArch64 assembly requires word-sized contributions and alignment at most four");
		if (text.bytes.empty() &&
			std::any_of(module->object.symbols.begin(), module->object.symbols.end(),
				[&](const native::object::Symbol& symbol) { return symbol.section == module->text; }))
			throw AArch64Error("AArch64 inline label requires a code contribution");
		return module;
	}
	catch (const assembly::AssemblyError& error)
	{
		throw AArch64Error("inline assembly line " + std::to_string(error.line) + ": " + error.message);
	}
}

void Selector::inline_assembly(const lowir::Instruction& inst)
{
	const auto& module = *program_.assembly;
	const auto& definition = module.templates.at(static_cast<uint32_t>(inst.immediate));
	const auto first = body_.operands.begin() + inst.extra_first;
	const std::vector<lowir::Value> arguments(first, first + inst.extra_count);
	const native::AssemblyBinding binding = native::assign_assembly_operands(
		module, definition, assembly_clobbers(inst), body_, arguments, nullptr);
	stage_assembly_inputs(inst, binding);

	const uint32_t identity = assembly_ ? assembly_identity_ : symbol_;
	const uint64_t unique = (uint64_t(identity) << 32) | out_.assembly.size();
	std::string source;
	std::vector<assembly::SymbolUse> uses;
	expand(source, program_, definition, binding, unique, assembly_ ? nullptr : &out_.assembly_symbols,
		assembly_ ? &uses : nullptr);
	append_assembly_labels(source, binding, unique);
	const auto index = static_cast<uint32_t>(out_.assembly.size());
	if (assembly_)
	{
		if ((definition.properties & AP_UNWIND) != 0)
			throw AArch64Error("unwinding AArch64 inline assembly is unsupported");
		auto assembled = assemble_inline(*assembly_, definition.environment, source, uses, program_.target);
		const auto words = static_cast<uint32_t>(assembled->main().bytes.size() / 4);
		if (words || assembled->object.sections.size() > 2 || assembled->object.symbols.size() > 1)
		{
			for (uint32_t word = 0; word < words; ++word)
			{
				out_.reference(Op::Nop, Fixup::Assembly, index);
				out_.code.back().addend = word;
			}
			out_.assembly.push_back({ {}, std::move(assembled) });
		}
	}
	else
	{
		out_.reference(Op::Nop, Fixup::Assembly, index);
		out_.assembly.push_back({ std::move(source), {} });
	}

	store_assembly_outputs(inst, binding);
}

} // namespace aarch64
