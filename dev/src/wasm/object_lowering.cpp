#include "wasm/object.h"

#include "machine/global_data.h"
#include "opt/call_graph.h"
#include "opt/optimizer.h"
#include "wasm/object_cursor.h"
#include "wasm/exceptions.h"
#include "wasm/selector.h"
#include "wasm/source_assembly.h"
#include "wasm/validation.h"
#include "wasm/nonlocal_jumps.h"

namespace wasm {

namespace {

void set_object_features(Object& object, const Module& module, bool uses_simd, bool uses_tail_calls)
{
	object.features = { { '+', "mutable-globals" }, { '+', "sign-ext" }, { '+', "bulk-memory" },
		{ '+', "nontrapping-fptoint" }, { '+', "reference-types" } };
	if (uses_simd)
		object.features.push_back({ '+', "simd128" });
	if (uses_tail_calls)
		object.features.push_back({ '+', "tail-call" });
	if (module.wide_addresses())
		object.features.push_back({ '+', "memory64" });
	if (module.atomics)
		object.features.push_back({ '+', "atomics" });
	if (!module.tag_types.empty())
	{
		object.features.push_back({ '+', "exception-handling" });
		object.features.push_back({ '+', "multivalue" });
	}
}

uint32_t flags(const lowir::Symbol& symbol)
{
	return symbol.metadata.binding == ir_model::SBM_INTERNAL ? 2
		: symbol.metadata.binding == ir_model::SBM_WEAK      ? 1
															 : 0;
}

void relocate_symbols(std::vector<Relocation>& relocations, const std::vector<uint32_t>& symbols, bool& uses_table)
{
	for (Relocation& relocation : relocations)
		if (relocation.kind != RelocationKind::TypeIndex)
		{
			uses_table = uses_table || relocation.kind == RelocationKind::TableIndex ||
				relocation.kind == RelocationKind::TableIndexI32 || relocation.kind == RelocationKind::TableIndex64 ||
				relocation.kind == RelocationKind::TableIndexI64 ||
				relocation.kind == RelocationKind::TableIndexRelative || relocation.kind == RelocationKind::TableNumber;
			if (relocation.index >= symbols.size() || symbols[relocation.index] == lowir::kNoId)
				throw WasmError("Wasm relocation refers to a symbol without an object identity");
			relocation.index = symbols[relocation.index];
		}
}

ObjectSymbol imported_symbol(uint8_t kind, uint32_t index, const char* name)
{
	ObjectSymbol symbol;
	symbol.kind = kind;
	symbol.flags = 0x10;
	symbol.index = index;
	symbol.name = name;
	return symbol;
}

// Folded constants and address-only function declarations can survive after
// their uses disappear. Drop the unused declarations; a typed direct call
// supplies its missing declaration boundary without reparsing source.
void discard_unused_declarations(lowir::Program& program, bool discard_external)
{
	using namespace lowir;
	bool any = discard_external;
	for (SymbolId id : program.order)
	{
		const Symbol& s = program.symbols[id];
		any = any ||
			(s.metadata.binding == ir_model::SBM_INTERNAL &&
				(s.kind == SymbolKind::FunctionDeclaration || s.kind == SymbolKind::GlobalDeclaration)) ||
			(s.kind == SymbolKind::FunctionDeclaration && program.functions[s.detail].signature == kNoId);
	}
	if (!any)
		return;
	std::vector<uint8_t> used(program.symbols.size(), 0);
	auto mark = [&](Value value) {
		if (value.kind == ValueKind::Symbol)
			used[value.index] = 1;
	};
	for (SymbolId id : program.order)
	{
		const Symbol& s = program.symbols[id];
		if (s.kind == SymbolKind::FunctionDefinition)
		{
			const FunctionBody& body = *program.functions[s.detail].body;
			for (BlockId block : body.layout)
				for (InstId i = body.blocks[block].first; i != kNoId; i = body.instructions[i].next)
				{
					const lowir::Instruction& inst = body.instructions[i];
					if (inst.op == Opcode::Call && inst.ops[0].is(ValueKind::Symbol))
					{
						const Symbol& callee = program.symbols[inst.ops[0].index];
						if (callee.kind == SymbolKind::FunctionDeclaration &&
							program.functions[callee.detail].signature == kNoId)
						{
							const auto* boundary = program.call_boundary(inst);
							if (boundary != nullptr)
								program.functions[callee.detail].signature = static_cast<SignatureId>(
									boundary - program.signatures.data());
						}
					}
					for (Value value : inst.ops)
						mark(value);
					for (uint32_t j = 0; j < inst.extra_count; ++j)
						mark(body.operands[inst.extra_first + j]);
				}
		}
		if (s.kind == SymbolKind::GlobalDefinition)
		{
			const Global& global = program.globals[s.detail];
			if (global.init == GlobalInit::Address)
				used[global.address] = 1;
			for (uint32_t j = 0; global.init == GlobalInit::Data && j < global.item_count; ++j)
			{
				const DataItem& item = program.data_items[global.first_item + j];
				if (item.has_address())
					used[item.address] = 1;
			}
		}
	}
	for (const ObjectAlias& alias : program.aliases)
		used[alias.target] = 1;
	for (const FunctionBinding& binding : program.function_bindings)
		used[binding.symbol] = 1;
	size_t count = 0;
	for (SymbolId id : program.order)
	{
		const Symbol& s = program.symbols[id];
		if (s.kind == SymbolKind::FunctionDeclaration && program.functions[s.detail].signature == kNoId)
		{
			if (!used[id])
				continue;
		}
		if (used[id] || (!discard_external && s.metadata.binding != ir_model::SBM_INTERNAL) ||
			(s.kind != SymbolKind::FunctionDeclaration && s.kind != SymbolKind::GlobalDeclaration))
			program.order[count++] = id;
	}
	program.order.resize(count);
}

void bind_object_aliases(const lowir::Program& program, const std::vector<lowir::SymbolId>& identities,
	std::vector<uint32_t>& symbols, std::vector<uint32_t>& groups, Object& object)
{
	for (lowir::SymbolId id : program.order)
	{
		const lowir::SymbolId canonical = identities[id];
		if (canonical == lowir::kNoId || canonical == id)
			continue;
		symbols[id] = symbols[canonical];
		groups[id] = groups[canonical];
		if ((program.symbols[id].metadata.flags & ir_model::SF_OBJECT_ROOT) != 0)
			object.symbols[symbols[id]].flags |= 0x80;
	}
}

struct CodeFeatures
{
	bool simd = false;
	bool tail_calls = false;
	bool table = false;
};

CodeFeatures emit_object_functions(const lowir::Program& program, const backend::Options& options, const Module& module,
	Object& object, std::string& dump, const std::vector<uint32_t>& groups, std::vector<uint32_t>& symbols)
{
	const bool minimize_size = options.optimizer != nullptr && options.optimizer->minimize_size;
	CodeFeatures features;
	for (const Signature& type : module.signatures)
	{
		for (ValueType value : type.parameters)
			features.simd = features.simd || value == ValueType::V128;
		for (ValueType value : type.results)
			features.simd = features.simd || value == ValueType::V128;
	}
	for (lowir::SymbolId id : module.definitions)
	{
		ExceptionPlan exceptions;
		if (module.exception_regions)
			prepare_exception_plan(program, id, object, symbols, groups[id], exceptions);
		Function function;
		Selector(program, module, id, function, &exceptions, minimize_size).run();
		cleanup_locals(function, options.optimization_level != 0, minimize_size);
		for (ValueType local : function.locals)
			features.simd = features.simd || local == ValueType::V128;
		for (const auto& inst : function.instructions)
		{
			features.simd = features.simd || (static_cast<unsigned>(inst.op) >> 8) == 0xfd;
			features.tail_calls = features.tail_calls || inst.op == Op::ReturnCallIndirect;
		}
		ObjectFunction& destination = object.functions[module.function_indices[id]];
		try
		{
			validate_function(function, object.types[destination.type], module);
		}
		catch (const WasmError& failure)
		{
			throw WasmError(std::string(program.spelling(program.symbols[id].name)) + ": " + failure.what());
		}
		if (!options.machine_ir.empty())
			dump_function(function, program, id, dump);
		if (options.assembly_text)
		{
			relocate_symbols(function.relocations, symbols, features.table);
			write_assembly_body(function, object, object.assembly_bodies[module.function_indices[id]]);
			continue;
		}
		Bytes encoded;
		encode_function(function, encoded, &destination.code.relocations);
		Cursor body(encoded);
		body.u32();
		const uint32_t prefix = body.position();
		destination.code.bytes = body.bytes();
		for (Relocation& relocation : destination.code.relocations)
			relocation.offset -= prefix;
		relocate_symbols(destination.code.relocations, symbols, features.table);
	}
	return features;
}

} // namespace

void make_object(lowir::Program& program, const backend::Options& options, Object& object, std::string& dump)
{
	Module module;
	SourceAssembly assembly;
	if (program.assembly && (options.target == target_model::Target::Wasm64 || options.assembly_text))
	{
		prepare_source_assembly(program, assembly, options.assembly_text);
		module.source_assembly = &assembly;
		for (const auto& global : assembly.globals)
		{
			module.global_types.push_back(global.type);
			module.mutable_globals.push_back(global.mutable_value);
		}
	}
	if (options.target == target_model::Target::Wasm64 && options.optimization_level != 0)
	{
		opt::OptimizerStats reachability;
		// Wasm file-scope assembly contributes typed globals and aliases, so
		// it does not keep unrelated internal functions in the object.
		opt::prune_unreachable(program, reachability, true, false);
	}
	discard_unused_declarations(program, options.target == target_model::Target::Wasm64);
	module.relocatable = true;
	module.atomics = options.wasm_atomics;
	prepare_exception_runtime(program, module);
	prepare_module(program, module);
	if (!options.machine_ir.empty())
		dump_module(program, module, dump);
	object.table_count = 1;
	object.memory_count = 1;
	object.wide_addresses = module.wide_addresses();
	object.types = module.signatures;
	object.functions.resize(module.definition_types.size());
	if (options.assembly_text)
		object.assembly_bodies.resize(object.functions.size());
	// Contiguous byte tokens make a function's code labels an indexed
	// branch table while retaining ordinary relocatable pointer identities.
	std::vector<std::pair<uint32_t, uint32_t>> code_labels;
	for (lowir::SymbolId id : module.definitions)
	{
		const auto& labels = program.functions[program.symbols[id].detail].body->code_labels;
		if (labels.empty())
			continue;
		if (code_labels.empty())
			code_labels.resize(program.symbols.size(), { lowir::kNoId, 0 });
		const uint32_t segment = static_cast<uint32_t>(object.data.size());
		ObjectData tokens;
		tokens.name = std::string(program.spelling(program.symbols[id].name)) + ".code_labels";
		tokens.contents.bytes.data.resize(labels.size(), 0);
		object.data.push_back(std::move(tokens));
		for (uint32_t i = 0; i < labels.size(); ++i)
			code_labels[labels[i].symbol] = { segment, i };
	}
	module.assembly_global_symbol = static_cast<uint32_t>(program.symbols.size() + 3 + module.tag_types.size());
	std::vector<uint32_t> symbols(module.assembly_global_symbol + assembly.globals.size(), lowir::kNoId);
	std::vector<uint32_t> groups(program.symbols.size(), lowir::kNoId);
	const lowir::NameId stack_low_name = program.names.find("__stack_low", 11);
	uint32_t stack_low_object = lowir::kNoId;
	for (lowir::SymbolId id : program.order)
	{
		const auto& source = program.symbols[id];
		if (!lowir::is_function_kind(source.kind) && !lowir::is_global_kind(source.kind))
			continue;
		if (module.object_symbols[id] != id || module.alias_targets[id] != lowir::kNoId)
			continue;
		ObjectSymbol symbol;
		const lowir::NameId object_name = source.metadata.object != 0 ? source.metadata.object : source.name;
		symbol.name = program.spelling(object_name);
		symbol.flags = flags(source);
		if ((source.metadata.flags & ir_model::SF_OBJECT_ROOT) != 0)
			symbol.flags |= 0x80;
		if (source.metadata.role == ir_model::SR_ENTRY)
			symbol.flags |= 0x20;
		if (lowir::is_function_kind(source.kind))
		{
			symbol.index = module.function_indices[id];
			ObjectFunction& function = object.functions[symbol.index];
			function.type = module.definition_types[symbol.index];
			function.name = symbol.name;
			function.imported = source.kind == lowir::SymbolKind::FunctionDeclaration &&
				module.nonlocal_function(id) != lowir::NonlocalFunction::Longjmp;
			if (source.kind == lowir::SymbolKind::FunctionDeclaration && !function.imported)
				symbol.flags = 1;
			if (function.imported)
			{
				function.module = "env";
				symbol.flags |= 0x10;
			}
		}
		else
		{
			symbol.kind = 1;
			const bool code_label = !code_labels.empty() && code_labels[id].first != lowir::kNoId;
			if (code_label)
			{
				symbol.index = code_labels[id].first;
				symbol.offset = code_labels[id].second;
				symbol.size = 1;
			}
			else if (source.kind == lowir::SymbolKind::GlobalDeclaration)
				symbol.flags |= 0x10;
			else
			{
				// In this unshared-memory profile each instance has one guest
				// thread. Ordinary instance data also supplies its TLS storage.
				ObjectData data;
				if (source.metadata.section != 0)
					data.name = program.spelling(source.metadata.section);
				else if (object.wide_addresses)
				{
					const char* prefix = source.metadata.storage == ir_model::GSM_READONLY ? ".rodata."
						: machine::global_is_zero(program, program.globals[source.detail]) ? ".bss."
																						   : ".data.";
					data.name = prefix + symbol.name;
				}
				else
					data.name = symbol.name;
				uint32_t alignment = 1;
				symbol.size = machine::global_size(program, program.globals[source.detail], alignment);
				while ((uint32_t(1) << data.alignment) < alignment)
					++data.alignment;
				data.contents.bytes.data.resize(symbol.size);
				std::vector<machine::GlobalAddress> fixups;
				machine::write_global(program, program.globals[source.detail], data.contents.bytes.data, 0, fixups);
				for (const auto& fixup : fixups)
				{
					const bool function = lowir::is_function_kind(program.symbols[fixup.target].kind);
					const auto kind = object.wide_addresses
						? (function ? RelocationKind::TableIndexI64 : RelocationKind::MemoryAddressI64)
						: (function ? RelocationKind::TableIndexI32 : RelocationKind::MemoryAddressI32);
					data.contents.relocations.push_back(
						Relocation{ kind, static_cast<uint32_t>(fixup.offset), fixup.target, fixup.addend });
				}
				symbol.index = static_cast<uint32_t>(object.data.size());
				object.data.push_back(std::move(data));
			}
		}
		if (source.metadata.visibility == ir_model::SV_HIDDEN || source.metadata.visibility == ir_model::SV_INTERNAL)
			symbol.flags |= 4u; // WASM_SYMBOL_VISIBILITY_HIDDEN
		if (symbol.weak() && !symbol.undefined() && (source.metadata.flags & ir_model::SF_REPLACEABLE) == 0)
		{
			ObjectGroup group;
			group.name = symbol.name;
			group.members.push_back({ symbol.kind == 0 ? uint8_t(1) : uint8_t(0), symbol.index });
			groups[id] = static_cast<uint32_t>(object.groups.size());
			object.groups.push_back(std::move(group));
		}
		symbols[id] = static_cast<uint32_t>(object.symbols.size());
		if (symbol.kind == 1 && !symbol.local() && object_name == stack_low_name)
			stack_low_object = symbols[id];
		object.symbols.push_back(std::move(symbol));
		if (source.metadata.role == ir_model::SR_INIT)
			object.initializers.push_back({ 65535, symbols[id] });
	}
	append_object_aliases(program, module, object, symbols, groups);
	bind_object_aliases(program, module.object_symbols, symbols, groups, object);
	append_startup_functions(program, symbols, object);
	for (const lowir::FunctionBinding& binding : program.function_bindings)
	{
		ObjectSymbol& symbol = object.symbols[symbols[binding.symbol]];
		ObjectFunction& function = object.functions[symbol.index];
		if (binding.imported)
		{
			if (!function.imported)
				continue;
			if ((symbol.flags & 0x40) != 0 &&
				(function.module != program.spelling(binding.module) ||
					function.name != program.spelling(binding.name)))
				throw WasmError("conflicting Wasm imports for one object function");
			function.module = program.spelling(binding.module);
			function.name = program.spelling(binding.name);
			symbol.flags |= 0x40;
		}
		else
		{
			if (symbol.local())
			{
				// Object-local definitions need a unique export-facing
				// linking identity; relocations still name the same index.
				symbol.flags = (symbol.flags & ~3u) | 4u;
				symbol.name = std::string("__cppgm_export.") + program.spelling(binding.name);
				function.name = symbol.name;
			}
			symbol.flags |= 0xa0;
			object.exports.push_back(ObjectExport{ program.spelling(binding.name), symbol.index, 0 });
		}
	}
	symbols[module.stack_symbol] = static_cast<uint32_t>(object.symbols.size());
	object.symbols.push_back(imported_symbol(2, 0, "__stack_pointer"));
	object.global_imports.push_back(ObjectGlobal{ "env", "__stack_pointer", module.address_type, true });
	for (uint32_t i = 0; i < assembly.globals.size(); ++i)
	{
		const auto& global = assembly.globals[i];
		symbols[module.assembly_global_symbol + i] = static_cast<uint32_t>(object.symbols.size());
		object.symbols.push_back(imported_symbol(2, i + 1, global.name.c_str()));
		object.global_imports.push_back(ObjectGlobal{ "env", global.name, global.type, global.mutable_value });
	}
	// Source declarations and the frame guard designate the same linker
	// boundary. Keep one object identity when the source names it too.
	if (stack_low_object != lowir::kNoId)
		symbols[module.stack_low_symbol] = stack_low_object;
	else if (!module.wide_addresses())
	{
		symbols[module.stack_low_symbol] = static_cast<uint32_t>(object.symbols.size());
		object.symbols.push_back(imported_symbol(1, 0, "__stack_low"));
	}
	symbols[module.table_symbol] = static_cast<uint32_t>(object.symbols.size());
	object.symbols.push_back(imported_symbol(5, 0, "__indirect_function_table"));
	if (module.exception_regions)
	{
		symbols[module.exception_tag_symbol] = static_cast<uint32_t>(object.symbols.size());
		const bool cxx = module.exception_abi == lowir::ExceptionAbi::Cxx;
		ObjectTag tag;
		tag.type = module.tag_types[0];
		tag.module = "env";
		tag.name = cxx ? "__cpp_exception" : "__cppgm_opaque_exception";
		tag.imported = cxx;
		ObjectSymbol identity = imported_symbol(4, 0, tag.name.c_str());
		// Opaque payloads use one coalesced private tag across translation units.
		if (!cxx)
			identity.flags = 1;
		object.symbols.push_back(std::move(identity));
		object.tags.push_back(std::move(tag));
	}
	append_nonlocal_objects(module, object, symbols);
	if (options.assembly_text && options.target == target_model::Target::Wasi)
		for (lowir::SymbolId id : program.order)
			if (program.symbols[id].metadata.role == ir_model::SR_ENTRY)
				adapt_wasi_entry(object, symbols[id]);
	const auto code_features = emit_object_functions(program, options, module, object, dump, groups, symbols);
	bool uses_table = code_features.table;
	for (ObjectData& data : object.data)
		relocate_symbols(data.contents.relocations, symbols, uses_table);
	if (uses_table)
		object.symbols[symbols[module.table_symbol]].flags |= 0x80;
	if (!options.assembly_text && options.target == target_model::Target::Wasi)
		for (lowir::SymbolId id : program.order)
			if (program.symbols[id].metadata.role == ir_model::SR_ENTRY)
				adapt_wasi_entry(object, symbols[id]);
	set_object_features(object, module, code_features.simd, code_features.tail_calls);
}

} // namespace wasm
