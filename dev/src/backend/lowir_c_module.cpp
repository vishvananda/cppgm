#include "backend/lowir_c_module.h"

#include <cstring>
#include <mutex>

#include "aarch64/backend.h"
#include "lowir/debug_validation.h"
#include "lowir/validator.h"
#include "lowir/text_writer.h"
#include "native/object/object_compiler.h"
#include "native/object/elf_object.h"
#include "native/object/macho_object.h"
#include "opt/optimizer.h"
#include "wasm/backend.h"

namespace backend {
namespace c_api {

lowir::Type type(CppgmType bits)
{
	lowir::Type result;
	result.kind_bits = bits & 255;
	result.align_log2 = (bits >> 8) & 255;
	result.bytes = bits >> 16;
	return result;
}

bool valid_type(CppgmType bits, target_model::Target target)
{
	const lowir::Type t = type(bits);
	if (t.kind_bits >= lowir::kTypeKindCount)
		return false;
	if (t.is_object())
		return t.bytes != 0 && t.align_log2 <= 31;
	if (t.is_pointer())
		return t.align_log2 == 0 && t.bytes <= 8 &&
			t.pointer_bytes() == target_model::data_layout(target).pointer_bytes;
	return t.align_log2 == 0 && t.bytes == 0;
}

} // namespace c_api
} // namespace backend

using namespace backend::c_api;

uint32_t CppgmLowir::symbol(const char* name, uint32_t length)
{
	if (!ready())
		return CPPGM_NO_ID;
	if (name == nullptr || length == 0 || std::memchr(name, 0, length) != nullptr)
	{
		fail("invalid symbol name");
		return CPPGM_NO_ID;
	}
	return program.symbol_for(program.names.intern(name, length));
}

uint32_t CppgmLowir::signature(CppgmType result, const CppgmType* parameters, uint32_t count, uint32_t variadic)
{
	if (!ready())
		return CPPGM_NO_ID;
	const uint32_t result_record = resolve_record(result);
	if (!valid_type(result, program.target) || (count != 0 && parameters == nullptr) || variadic > 1)
	{
		fail("invalid signature");
		return CPPGM_NO_ID;
	}
	lowir::Signature signature = {};
	signature.result = type(result);
	signature.boundary.result_classes = record_classes(result_record, 0);
	signature.boundary.result_shape = record_shape(result_record);
	signature.first_parameter = program.parameters.size();
	signature.parameter_count = count;
	signature.boundary.arity = variadic ? ir_model::CAM_VARIADIC : ir_model::CAM_FIXED;
	for (uint32_t i = 0; i < count; ++i)
	{
		CppgmType bits = parameters[i];
		const uint32_t record = resolve_record(bits);
		if (!valid_type(bits, program.target) || type(bits).is_void())
		{
			fail("invalid parameter type");
			return CPPGM_NO_ID;
		}
		lowir::Parameter parameter;
		parameter.name = 0;
		parameter.type = type(bits);
		parameter.classes = record_classes(record, 0);
		parameter.shape = record_shape(record);
		note_parameter_record(static_cast<uint32_t>(program.parameters.size()), record);
		program.parameters.push_back(parameter);
	}
	return program.add_signature(signature);
}

bool CppgmLowir::function(uint32_t id, uint32_t signature, uint32_t binding, uint32_t definition)
{
	if (!ready())
		return false;
	if (id >= program.symbols.size() || signature >= program.signatures.size() || binding > 3 || definition > 1)
		return fail("invalid function declaration");
	lowir::Symbol& symbol = program.symbols[id];
	if (symbol.kind == lowir::SymbolKind::Unresolved)
	{
		program.declare_function(
			id, definition ? lowir::SymbolKind::FunctionDefinition : lowir::SymbolKind::FunctionDeclaration, signature);
		symbol.metadata.linkage = ir_model::LLM_C;
	}
	else
	{
		if (symbol.kind != lowir::SymbolKind::FunctionDeclaration || !definition)
			return fail("duplicate function declaration or definition");
		lowir::Function& function = program.functions[symbol.detail];
		if (function.signature != signature)
			return fail("function signature differs from declaration");
		symbol.kind = lowir::SymbolKind::FunctionDefinition;
		function.body.reset(new lowir::FunctionBody());
	}
	symbol.metadata.binding = static_cast<ir_model::SymbolBindingMode>(binding);
	return true;
}

bool CppgmLowir::global(uint32_t id, CppgmType bits, uint32_t binding, uint32_t storage, const CppgmDataItem* items,
	uint32_t count, uint32_t declaration)
{
	if (!ready())
		return false;
	resolve_record(bits);
	if (id >= program.symbols.size() || program.symbols[id].kind != lowir::SymbolKind::Unresolved ||
		!valid_type(bits, program.target) || binding > 3 || storage > 2 || declaration > 1 ||
		(count != 0 && items == nullptr) || (declaration && (count != 0 || type(bits).is_void())))
		return fail("invalid global declaration");
	lowir::Global global = {};
	global.typed = !type(bits).is_void();
	global.type = type(bits);
	global.init = declaration ? lowir::GlobalInit::None : lowir::GlobalInit::Data;
	global.first_item = program.data_items.size();
	global.item_count = count;
	for (uint32_t i = 0; i < count; ++i)
	{
		const CppgmDataItem& input = items[i];
		CppgmType item_type = input.type;
		resolve_record(item_type);
		if (input.kind > static_cast<uint32_t>(lowir::DataItemKind::UnalignedAddress) ||
			!valid_type(item_type, program.target))
			return fail("invalid global data item");
		lowir::DataItem item = {};
		item.kind = static_cast<lowir::DataItemKind>(input.kind);
		item.type = type(item_type);
		if ((item.has_address() && input.symbol >= program.symbols.size()) ||
			(item.kind == lowir::DataItemKind::Zero && input.amount < 0) ||
			(item.kind == lowir::DataItemKind::UnalignedAddress && !item.type.is_pointer()))
			return fail("invalid global data item");
		item.constant.kind = item.type.is_float() ? lowir::ValueKind::Float : lowir::ValueKind::Integer;
		item.constant.float_kind = item.type.is_float() ? item.type.kind() : lowir::TypeKind::Void;
		item.constant.bits = lowir::Literal{ input.bits.low, input.bits.high };
		item.address = input.symbol;
		item.amount = input.amount;
		program.data_items.push_back(item);
	}
	program.declare_global(
		id, declaration ? lowir::SymbolKind::GlobalDeclaration : lowir::SymbolKind::GlobalDefinition, global);
	program.symbols[id].metadata.binding = static_cast<ir_model::SymbolBindingMode>(binding);
	program.symbols[id].metadata.storage = static_cast<ir_model::GlobalStorageMode>(storage);
	return true;
}

bool CppgmLowir::validate()
{
	if (error[0] != 0)
		return false;
	if (consumed)
		return fail("module has already been consumed");
	if (validated)
		return true;
	for (const lowir::Function& function : program.functions)
		if (function.body && function.body->construction_state == 1)
			return fail("uncommitted direct function body");
	if (!records.empty())
		state_record_facts();
	lowir::apply_legacy_roles(program);
	lowir::Diagnostic diagnostic;
	if (!lowir::validate_constructed_program(program, diagnostic, false))
		return fail((lowir::describe(program, diagnostic) +
			(diagnostic.inst == lowir::kNoId ? std::string()
											 : " (instruction " + std::to_string(diagnostic.inst) + ")"))
				.c_str());
	if (program.debug)
	{
		lowir::link_debug_scopes(program);
		lowir::DebugDiagnostic debug;
		if (!lowir::validate_debug_info(program, debug))
			return fail((std::string(debug.message) +
				(debug.type != 0
						? " (debug type " + std::to_string(debug.type) + ")"
						: " (function @" + std::string(program.spelling(program.symbols[debug.function].name)) + ")"))
					.c_str());
	}
	validated = true;
	return true;
}

bool CppgmLowir::write(const char* path)
{
	if (path == nullptr || !validate())
		return path == nullptr ? fail("null output path") : false;
	if (!lowir::write_program_file(program, path))
		return fail("cannot write LowIR output");
	return true;
}

bool CppgmLowir::compile(uint32_t level, uint32_t pic)
{
	if (level > 3 || pic > 1)
		return fail("invalid compile options");
	if (pic && target_model::is_wasm(program.target))
		return fail("Wasm relocatable objects require CPPGM_CODE_FIXED");
	if (consumed)
		return fail("module has already been consumed");
	if (!validate())
		return false;
	consumed = true;
	// The executable backend retains process-wide scratch capacities across
	// functions. Construction and validation use module-owned state; only the
	// optimizing/emitting phase must be serialized until those pools have an
	// explicit per-compilation owner. One lock per object, never per IR item.
	static std::mutex backend_mutex;
	const std::lock_guard<std::mutex> lock(backend_mutex);

	std::string message;
	if (target_model::is_wasm(program.target))
	{
		backend::Options options;
		options.target = program.target;
		options.optimization_level = level;
		wasm::Object result;
		std::string dump;
		if (!wasm::build_object(program, options, result, dump, message))
			return fail(message.c_str());
		wasm::validate_object(result);
		wasm::Bytes bytes;
		wasm::write_object(result, bytes);
		object = std::move(bytes.data);
		return true;
	}
	return compile_native(level, pic != 0);
}

bool CppgmLowir::compile_native(uint32_t level, bool pic)
{
	const bool arm = target_model::is_aarch64(program.target);
	if (!arm)
		native::recover_jump_thunks(program, native::EhModel::Host);
	if (level != 0)
	{
		opt::OptimizerOptions options;
		options.level = level;
		options.has_gnu_sincos = target_model::has_gnu_sincos(program.target);
		opt::optimize_program(program, options, nullptr);
		program.jump_thunks.clear();
		if (!arm)
			native::recover_jump_thunks(program, native::EhModel::Host);
	}
	native::object::ObjectFile result;
	std::string message;
	if (arm)
		aarch64::compile_object(
			program, result, level, pic || target_model::is_darwin(program.target), nullptr, false, true);
	else if (!native::compile_object(
				 program, result, message, nullptr, native::EhModel::Host, level, pic, program.target))
		return fail(message.c_str());
	if (target_model::is_darwin(program.target))
	{
		if (!native::object::encode_macho_object(result, object, message))
			return fail(message.c_str());
	}
	else
		native::object::encode_elf_object(result, object);
	return true;
}
