#include "wasm/source_assembly.h"

#include <map>
#include <set>

#include "asm/module_text.h"
#include "lowir/assembly.h"

namespace wasm {

namespace {

using GlobalNames = std::map<std::string, uint32_t>;

ValueType global_value_type(const std::string& text)
{
	for (ValueType type : { ValueType::I32, ValueType::I64, ValueType::F32, ValueType::F64 })
		if (text == spelling(type))
			return type;
	throw WasmError("unsupported Wasm global type: " + text);
}

void comma(assembly::ModuleCursor& cursor)
{
	if (!cursor.take(','))
		cursor.fail("expected ',' in Wasm assembly");
}

void global_declaration(assembly::ModuleCursor& cursor, lowir::Type pointer, SourceAssembly& output, GlobalNames& names)
{
	const auto name = cursor.word();
	comma(cursor);
	const auto type = global_value_type(cursor.word());
	bool mutable_value = true;
	if (cursor.take(','))
	{
		if (cursor.word() != "immutable")
			cursor.fail("expected immutable Wasm global");
		mutable_value = false;
	}
	cursor.finish();
	if (name == "__stack_pointer")
	{
		if (type != value_type(pointer) || !mutable_value)
			throw WasmError("invalid Wasm stack pointer type");
		return;
	}
	const auto found = names.emplace(name, static_cast<uint32_t>(output.globals.size()) + 1);
	if (found.second)
		output.globals.push_back(AssemblyGlobalType{ name, type, mutable_value });
	else
	{
		const auto& previous = output.globals[found.first->second - 1];
		if (type != previous.type || mutable_value != previous.mutable_value)
			throw WasmError("conflicting Wasm assembly global types: " + name);
	}
}

std::vector<assembly::ModuleLine> template_lines(
	const lowir::AssemblyModule& assembly, const lowir::AssemblyTemplate& definition)
{
	std::string text;
	std::vector<assembly::LabelUse> operands;
	for (uint32_t i = 0; i < definition.piece_count; ++i)
	{
		const auto& piece = assembly.pieces[definition.first_piece + i];
		if (piece.kind == asm_model::PieceKind::Text)
			text.append(assembly.text, piece.first, piece.count);
		else if (piece.kind == asm_model::PieceKind::Operand &&
			(piece.format == asm_model::Format::Default || piece.format == asm_model::Format::Bare))
		{
			operands.push_back({ static_cast<uint32_t>(text.size()), 1, piece.operand });
			text += '\1';
		}
		else
			throw WasmError("unsupported Wasm assembly template substitution");
	}
	return assembly::module_lines(text, {}, operands);
}

void module_declarations(lowir::Program& program, SourceAssembly& output, GlobalNames& names)
{
	const auto& assembly = *program.assembly;
	std::set<std::string> weak;
	std::map<std::string, std::string> aliases;
	for (const auto& global : assembly.globals)
	{
		if (!global.arguments.empty())
			throw WasmError("Wasm module assembly requires literal text");
		for (const auto& line : template_lines(assembly, assembly.templates[global.definition]))
		{
			::assembly::ModuleCursor cursor(line);
			const auto directive = cursor.word();
			if (directive == ".globaltype")
				global_declaration(cursor, program.pointer_type(), output, names);
			else if (directive == ".weak")
				weak.insert(cursor.word());
			else if (directive == ".type")
			{
				cursor.word();
				comma(cursor);
				if (!cursor.take('@') || cursor.word() != "function")
					cursor.fail("Wasm module assembly supports only function aliases");
			}
			else if (directive == ".set")
			{
				const auto name = cursor.word();
				comma(cursor);
				const auto target = cursor.word();
				const auto previous = aliases.emplace(name, target);
				if (!previous.second && previous.first->second != target)
					cursor.fail("conflicting Wasm assembly alias");
			}
			else
				cursor.fail("unsupported Wasm module assembly directive: " + directive);
			cursor.finish();
		}
	}
	if (aliases.empty() && weak.empty())
		return;
	std::map<std::string, lowir::SymbolId> objects;
	for (auto id : program.order)
	{
		auto& symbol = program.symbols[id];
		const auto name = program.spelling(symbol.metadata.object != 0 ? symbol.metadata.object : symbol.name);
		if (weak.count(name))
		{
			symbol.metadata.binding = ir_model::SBM_WEAK;
			symbol.metadata.flags |= ir_model::SF_REPLACEABLE;
		}
		if (symbol.kind == lowir::SymbolKind::FunctionDefinition)
			objects.emplace(name, id);
	}
	for (const auto& alias : aliases)
	{
		const auto destination = objects.find(alias.second);
		if (!weak.count(alias.first) || destination == objects.end())
			throw WasmError("Wasm assembly requires a weak alias of a defined function: " + alias.first);
		const auto name = program.names.intern(alias.first.data(), alias.first.size());
		const auto signature = program.functions[program.symbols[destination->second].detail].signature;
		// Create an address identity even if no C declaration mentions the alias.
		const auto id = program.symbol_for(name);
		auto& symbol = program.symbols[id];
		if (symbol.kind == lowir::SymbolKind::Unresolved)
			program.declare_function(id, lowir::SymbolKind::FunctionDeclaration, signature);
		else if (symbol.kind != lowir::SymbolKind::FunctionDeclaration)
			throw WasmError("Wasm assembly alias has a separate definition: " + alias.first);
		symbol.metadata.binding = ir_model::SBM_WEAK;
		symbol.metadata.flags |= ir_model::SF_REPLACEABLE;
		program.aliases.push_back({ name, destination->second });
	}
}

InlineTemplate inline_template(const lowir::AssemblyModule& assembly, const lowir::AssemblyTemplate& definition,
	const GlobalNames& names, bool assembly_text)
{
	InlineTemplate result;
	for (const auto& line : template_lines(assembly, definition))
	{
		::assembly::ModuleCursor cursor(line);
		const auto name = cursor.word();
		if (name == ".ascii" && assembly_text)
		{
			const auto value = cursor.quoted();
			cursor.finish();
			if (!result.directive.empty() || !result.statements.empty() || line.labels.size() > 1 ||
				value.compare(0, 2, "->") != 0)
				throw WasmError("unsupported Wasm inline assembly .ascii sequence");
			result.directive = value;
			if (!line.labels.empty())
				result.immediate_operand = line.labels.front().operand;
			continue;
		}
		Op op;
		if (!read_operation(name.data(), name.size(), op) || !result.directive.empty())
			throw WasmError("unsupported Wasm inline assembly instruction: " + name);
		InlineStatement instruction;
		instruction.op = op;
		if (op == Op::GlobalGet || op == Op::GlobalSet)
		{
			const auto symbol = cursor.word();
			const auto found = names.find(symbol);
			if (found == names.end())
				throw WasmError("Wasm inline assembly global requires .globaltype: " + symbol);
			instruction.index = found->second;
		}
		else if (op == Op::LocalGet || op == Op::LocalSet || op == Op::LocalTee)
		{
			if (!cursor.take('\1') || line.labels.size() != 1)
				throw WasmError("Wasm inline assembly local requires a GNU operand");
			instruction.index = line.labels.front().operand;
		}
		else if (immediate_form(op) != Immediate::None || effects(op) != 0)
			throw WasmError("unsupported Wasm inline assembly operand form: " + name);
		cursor.finish();
		result.statements.push_back(instruction);
	}
	return result;
}

} // namespace

void prepare_source_assembly(lowir::Program& program, SourceAssembly& output, bool assembly_text)
{
	try
	{
		const auto& assembly = *program.assembly;
		if (!assembly.functions.empty())
			throw WasmError("naked assembly functions are outside the Wasm source profile");
		GlobalNames names{ { "__stack_pointer", 0 } };
		module_declarations(program, output, names);
		output.templates.resize(assembly.templates.size());
		std::vector<bool> global(assembly.templates.size());
		for (const auto& declaration : assembly.globals)
			global[declaration.definition] = true;
		for (uint32_t i = 0; i < assembly.templates.size(); ++i)
			if (!global[i])
				output.templates[i] = inline_template(assembly, assembly.templates[i], names, assembly_text);
	}
	catch (const assembly::AssemblyError& failure)
	{
		throw WasmError(failure.message);
	}
}

} // namespace wasm
