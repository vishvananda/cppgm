#include "wasm/object.h"

#include "lowir/startup_sections.h"

namespace wasm {

void append_startup_functions(const lowir::Program& program, const std::vector<uint32_t>& symbols, Object& object)
{
	std::vector<lowir::StartupFunction> functions;
	std::string error;
	if (!lowir::startup_functions(program, functions, error))
		throw WasmError(error);
	for (const auto& function : functions)
	{
		if (function.symbol >= symbols.size() || symbols[function.symbol] >= object.symbols.size() ||
			object.symbols[symbols[function.symbol]].kind != 0)
			throw WasmError("an initialization function has no Wasm object identity");
		object.initializers.push_back({ function.priority, symbols[function.symbol] });
	}
}

void adapt_wasi_entry(Object& object, uint32_t index)
{
	ObjectSymbol& entry = object.symbols.at(index);
	ObjectFunction& function = object.functions.at(entry.index);
	const Signature& type = object.types.at(function.type);
	const bool arguments = type.parameters.size() == 2;
	if (type.results != std::vector<ValueType>{ ValueType::I32 } || (!arguments && !type.parameters.empty()) ||
		(arguments && type.parameters != std::vector<ValueType>{ ValueType::I32, ValueType::I32 }))
		throw WasmError("unsupported WASI main signature");
	entry.name = arguments ? "__main_argc_argv" : "__main_void";
	entry.flags &= ~uint32_t(0x20);
	function.name = entry.name;
	if (arguments || entry.undefined())
		return;
	const uint32_t entry_function = entry.index;
	ObjectSymbol alias = entry;
	alias.name = "__original_main";
	object.symbols.push_back(std::move(alias));
	ObjectFunction compatibility;
	compatibility.name = "main";
	compatibility.type = static_cast<uint32_t>(object.types.size());
	object.types.push_back(Signature{ { ValueType::I32, ValueType::I32 }, { ValueType::I32 } });
	if (object.assembly_bodies.empty())
	{
		compatibility.code.bytes.byte(0); // No locals; the compatibility parameters are ignored.
		compatibility.code.bytes.byte(0x10);
		compatibility.code.relocations.push_back(Relocation{ RelocationKind::FunctionIndex, 2, index, 0 });
		for (unsigned byte = 0; byte < 5; ++byte)
			compatibility.code.bytes.byte(((entry_function >> (7 * byte)) & 0x7f) | (byte == 4 ? 0 : 0x80));
		compatibility.code.bytes.byte(0x0b);
	}
	else
	{
		Function body;
		body.parameter_count = 2;
		body.locals = { ValueType::I32, ValueType::I32 };
		body.emit(Op::Call, { entry_function });
		body.relocate(RelocationKind::FunctionIndex, index);
		body.emit(Op::End);
		object.assembly_bodies.emplace_back();
		write_assembly_body(body, object, object.assembly_bodies.back());
	}
	ObjectSymbol symbol;
	symbol.name = "main";
	symbol.index = static_cast<uint32_t>(object.functions.size());
	object.functions.push_back(std::move(compatibility));
	object.symbols.push_back(std::move(symbol));
}

} // namespace wasm
