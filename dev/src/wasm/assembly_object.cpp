#include "wasm/assembly_parser.h"

#include <algorithm>

#include "wasm/object_cursor.h"
#include "wasm/validation.h"

namespace wasm {
namespace assembly {

void Parser::emit(Object& object)
{
	Module module;
	module.relocatable = true;
	module.address_type = wide_addresses_ ? ValueType::I64 : ValueType::I32;
	object.wide_addresses = wide_addresses_;
	module.memory_count = memory_ ? 1 : 0;
	module.table_count = 0;
	module.global_types.clear();
	module.mutable_globals.clear();
	std::vector<uint32_t> indices(symbols_.size(), lowir::kNoId);
	object.symbols.resize(symbols_.size());
	for (uint32_t id = 0; id < symbols_.size(); ++id)
	{
		auto& source = symbols_[id];
		auto& identity = object.symbols[id];
		identity.name = names_.spelling(source.name);
		identity.flags = source.defined ? source.flags : (source.flags & ~2u) | 0x10;
		identity.kind = source.kind == Kind::Function ? 0 : source.kind == Kind::Global ? 2 : 1;
		if (source.kind == Kind::Unknown)
			source.kind = Kind::Data;
		if (source.kind == Kind::Data && source.defined)
		{
			identity.index = source.detail;
			identity.offset = source.offset;
			identity.size = source.size;
		}
	}
	// Wasm's separate index spaces put imports before definitions. Linking
	// symbols retain parse-time IDs, so forward references need no text pass.
	for (bool definitions : { false, true })
	{
		for (auto& function : functions_)
		{
			const auto id = function.symbol;
			if (!function.typed)
				throw WasmError("Wasm assembly function requires .functype: " + object.symbols[id].name);
			if (symbols_[id].defined != definitions)
				continue;
			auto found = std::find(object.types.begin(), object.types.end(), function.signature);
			if (found == object.types.end())
			{
				object.types.push_back(function.signature);
				found = object.types.end() - 1;
			}
			ObjectFunction output;
			output.type = static_cast<uint32_t>(found - object.types.begin());
			output.imported = !definitions;
			output.name = object.symbols[id].name;
			if (definitions && (function.explicit_module || function.explicit_name))
				throw WasmError("Wasm assembly import names a defined function: " + output.name);
			if (output.imported)
			{
				output.module = function.explicit_module ? function.import_module : "env";
				if (function.explicit_name)
					output.name = function.import_name;
				if (function.explicit_module || function.explicit_name)
					object.symbols[id].flags |= 0x40;
			}
			indices[id] = static_cast<uint32_t>(object.functions.size());
			object.symbols[id].index = indices[id];
			module.definition_types.push_back(output.type);
			object.functions.push_back(std::move(output));
		}
		for (const auto& global : globals_)
		{
			const auto id = global.symbol;
			if (!global.typed)
				throw WasmError("Wasm assembly global requires .globaltype: " + object.symbols[id].name);
			if (symbols_[id].defined != definitions)
				continue;
			indices[id] = static_cast<uint32_t>(module.global_types.size());
			object.symbols[id].index = indices[id];
			module.global_types.push_back(global.type);
			module.mutable_globals.push_back(global.mutable_value);
			if (!definitions)
				object.global_imports.push_back(
					ObjectGlobal{ "env", object.symbols[id].name, global.type, global.mutable_value });
			else
			{
				ObjectGlobalDefinition output;
				output.type = global.type;
				output.mutable_value = global.mutable_value;
				Function initializer;
				const Op zero = global.type == ValueType::I32 ? Op::I32Const
					: global.type == ValueType::I64           ? Op::I64Const
					: global.type == ValueType::F32           ? Op::F32Const
															  : Op::F64Const;
				if (global.type != ValueType::I32 && global.type != ValueType::I64 && global.type != ValueType::F32 &&
					global.type != ValueType::F64)
					throw WasmError("unsupported Wasm assembly global initializer type");
				initializer.emit(zero, { 0 });
				initializer.emit(Op::End);
				encode_expression(initializer, output.initializer.bytes);
				object.global_definitions.push_back(std::move(output));
			}
		}
	}
	module.signatures = object.types;
	for (auto& record : functions_)
	{
		if (!symbols_[record.symbol].defined)
			continue;
		auto& body = record.body;
		body.locals.insert(body.locals.begin(), record.signature.parameters.begin(), record.signature.parameters.end());
		for (auto& relocation : body.relocations)
		{
			const auto target = relocation.index;
			if (relocation.kind == RelocationKind::GlobalIndex || relocation.kind == RelocationKind::FunctionIndex)
				body.operands[relocation.offset] = indices[target];
			else if (symbols_[target].kind == Kind::Global)
				throw WasmError("Wasm global has no linear-memory address");
			else if (symbols_[target].kind == Kind::Function)
			{
				if (relocation.addend != 0)
					throw WasmError("a Wasm function address cannot have an addend");
				relocation.kind = wide_addresses_ ? RelocationKind::TableIndex64 : RelocationKind::TableIndex;
			}
		}
		validate_function(body, record.signature, module);
		auto& output = object.functions[indices[record.symbol]].code;
		Bytes encoded;
		encode_function(body, encoded, &output.relocations);
		Cursor cursor(encoded);
		cursor.u32();
		const auto prefix = cursor.position();
		output.bytes = cursor.bytes();
		for (auto& relocation : output.relocations)
			relocation.offset -= prefix;
	}
	for (const auto& initializer : initializers_)
	{
		const auto& source = symbols_[initializer.second];
		if (!source.defined || !functions_[source.detail].signature.parameters.empty() ||
			!functions_[source.detail].signature.results.empty())
			throw WasmError("Wasm assembly constructor requires a defined void() function");
		object.initializers.push_back(initializer);
	}
	for (auto& segment : data_)
		for (auto& relocation : segment.contents.relocations)
		{
			const auto kind = symbols_[relocation.index].kind;
			if (kind == Kind::Global)
				throw WasmError("Wasm global has no linear-memory address");
			if (kind == Kind::Function)
			{
				if (relocation.addend != 0)
					throw WasmError("a Wasm function address cannot have an addend");
				relocation.kind = wide_addresses_ ? RelocationKind::TableIndexI64 : RelocationKind::TableIndexI32;
			}
		}
	object.data = std::move(data_);
	object.memory_count = module.memory_count;
	if (!features_.data.empty())
	{
		Cursor cursor(features_);
		const auto count = cursor.u32();
		for (uint32_t i = 0; i < count; ++i)
		{
			const char prefix = static_cast<char>(cursor.byte());
			if (prefix != '+' && prefix != '-')
				throw WasmError("invalid target feature prefix");
			object.features.push_back({ prefix, cursor.string() });
		}
		cursor.done();
	}
	const auto feature = [&](const char* name) {
		for (const auto& present : object.features)
			if (present.second == name)
			{
				if (present.first == '-')
					throw WasmError(std::string("assembly uses a disabled feature: ") + name);
				return;
			}
		object.features.push_back({ '+', name });
	};
	if (wide_addresses_)
		feature("memory64");
	if (bulk_)
		feature("bulk-memory");
	if (!globals_.empty())
		feature("mutable-globals");
}

} // namespace assembly
} // namespace wasm
