#include "backend/lowir_c_module.h"

#include <cstring>

#include "lowir/argument_facts.h"

// Boundary, symbol and argument metadata of the C interface (ABI version 3;
// record types since version 4).
// A record is accepted when the LowIR text can state it (lowir.md), so a
// written module reads back as the same program.

using namespace backend::c_api;
using ir_model::MetadataKey;

namespace {

ir_model::AggregateShape shape(uint8_t element, uint16_t count)
{
	ir_model::AggregateShape result;
	result.element = static_cast<ir_model::AggregateElement>(element);
	result.count = count;
	return result;
}

// The text reader's rules for the metadata of parameter `index`; null if
// the record follows them.
const char* parameter_problem(
	const CppgmParameter& input, uint32_t index, lowir::Type result, target_model::Target target)
{
	if (!valid_type(input.type, target) || type(input.type).is_void())
		return "invalid parameter type";
	const lowir::Type t = type(input.type);
	if (input.reserved != 0 || input.pass >= ir_model::kParamPassingModeCount ||
		input.alias >= ir_model::kParamAliasModeCount)
		return "invalid parameter metadata";
	if (input.pass != ir_model::PPM_DIRECT && !t.is_pointer())
		return "non-direct passing requires ptr";
	if (input.alias != ir_model::PALM_DEFAULT && !t.is_pointer())
		return "alias metadata requires ptr";
	if (input.object_bytes != 0 && !t.is_pointer())
		return "object_bytes metadata requires ptr";
	if (!lowir::valid_aggregate_shape(t, shape(input.shape_element, input.shape_count)))
		return "invalid aggregate parameter shape";
	if (!lowir::valid_object_classes(t, input.classes))
		return "invalid classes metadata";
	if (input.pass == ir_model::PPM_INDIRECT_RESULT && (index != 0 || !result.is_void()))
		return "invalid indirect result parameter";
	if (input.alias == ir_model::PALM_EXCLUSIVE_RESULT &&
		(input.pass != ir_model::PPM_INDIRECT_RESULT || input.object_bytes == 0))
		return "exclusive result alias requires bounded indirect result storage";
	return nullptr;
}

const char* boundary_problem(CppgmType result, const CppgmBoundary& input, target_model::Target target)
{
	const uint8_t facts = CPPGM_BOUNDARY_REPEATABLE | CPPGM_BOUNDARY_NOALIAS_RESULT | CPPGM_BOUNDARY_THIS_RETURN;
	if (!valid_type(result, target))
		return "invalid signature";
	if (input.arity >= ir_model::kCallArityModeCount || input.effects >= ir_model::kCallEffectsModeCount ||
		input.unwind >= ir_model::kCallUnwindModeCount || input.returns >= ir_model::kCallReturnModeCount ||
		(input.facts & ~facts) != 0 || input.reserved != 0 || input.reserved2 != 0)
		return "invalid boundary metadata";
	if (!lowir::valid_aggregate_shape(type(result), shape(input.result_shape_element, input.result_shape_count)))
		return "invalid aggregate result shape";
	if (!lowir::valid_object_classes(type(result), input.result_classes))
		return "invalid result_classes metadata";
	return nullptr;
}

bool section_name(const char* name, uint32_t length)
{
	for (uint32_t i = 0; i < length; ++i)
	{
		const char c = name[i];
		if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_' || c == '.'))
			return false;
	}
	return true;
}

} // namespace

uint32_t CppgmLowir::boundary(
	CppgmType result, const CppgmParameter* parameters, uint32_t count, const CppgmBoundary* stated)
{
	if (!ready())
		return CPPGM_NO_ID;
	CppgmBoundary input = stated != nullptr ? *stated : CppgmBoundary();
	const uint32_t result_record = resolve_record(result);
	input.result_classes = record_classes(result_record, input.result_classes);
	// The parameters with record types resolved, and their records.
	std::vector<CppgmParameter> resolved;
	std::vector<uint32_t> parameter_record;
	if (parameters != nullptr)
		resolved.assign(parameters, parameters + count);
	for (CppgmParameter& parameter : resolved)
	{
		parameter_record.push_back(resolve_record(parameter.type));
		if (parameter.pass == ir_model::PPM_DIRECT)
			parameter.classes = record_classes(parameter_record.back(), parameter.classes);
	}
	const char* problem = count != 0 && parameters == nullptr ? "invalid signature"
															  : boundary_problem(result, input, program.target);
	for (uint32_t i = 0; problem == nullptr && i < count; ++i)
		problem = parameter_problem(resolved[i], i, type(result), program.target);
	if (problem != nullptr)
	{
		fail(problem);
		return CPPGM_NO_ID;
	}
	lowir::Signature signature = {};
	signature.result = type(result);
	signature.first_parameter = program.parameters.size();
	signature.parameter_count = count;
	signature.boundary.arity = static_cast<ir_model::CallArityMode>(input.arity);
	signature.boundary.effects = static_cast<ir_model::CallEffectsMode>(input.effects);
	signature.boundary.unwind = static_cast<ir_model::CallUnwindMode>(input.unwind);
	signature.boundary.returns = static_cast<ir_model::CallReturnMode>(input.returns);
	signature.boundary.repeatable = (input.facts & CPPGM_BOUNDARY_REPEATABLE) != 0;
	signature.boundary.noalias_result = (input.facts & CPPGM_BOUNDARY_NOALIAS_RESULT) != 0;
	signature.boundary.this_return = (input.facts & CPPGM_BOUNDARY_THIS_RETURN) != 0;
	signature.boundary.result_classes = input.result_classes;
	signature.boundary.result_shape = record_shape(
		result_record, shape(input.result_shape_element, input.result_shape_count));
	for (uint32_t i = 0; i < count; ++i)
	{
		const CppgmParameter& from = resolved[i];
		lowir::Parameter parameter;
		parameter.name = 0;
		parameter.type = type(from.type);
		parameter.pass = static_cast<ir_model::ParamPassingMode>(from.pass);
		parameter.alias = static_cast<ir_model::ParamAliasMode>(from.alias);
		parameter.classes = from.classes;
		parameter.shape = record_shape(parameter_record[i], shape(from.shape_element, from.shape_count));
		parameter.object_bytes = from.object_bytes;
		note_parameter_record(static_cast<uint32_t>(program.parameters.size()), parameter_record[i]);
		program.parameters.push_back(parameter);
	}
	if (!lowir::valid_this_return(program, signature))
	{
		fail("this_return requires a void boundary with a first pointer parameter on a supporting target");
		return CPPGM_NO_ID;
	}
	return program.add_signature(signature);
}

bool CppgmLowir::symbol_fact(uint32_t id, uint32_t key_number, uint32_t value)
{
	if (!ready())
		return false;
	if (id >= program.symbols.size() || program.symbols[id].kind == lowir::SymbolKind::Unresolved)
		return fail("symbol metadata requires a declared function or global");
	const MetadataKey key = static_cast<MetadataKey>(key_number);
	if (key_number >= ir_model::kMetadataKeyCount || !ir_model::is_symbol_key(key))
		return fail("unknown symbol metadata");
	lowir::SymbolMetadata& metadata = program.symbols[id].metadata;
	const bool on_global = lowir::is_global_kind(program.symbols[id].kind);
	switch (key)
	{
	case MetadataKey::Storage:
		if (!on_global)
			return fail("storage metadata on non-global");
		if (value >= ir_model::kGlobalStorageModeCount)
			return fail("invalid global storage metadata");
		metadata.storage = static_cast<ir_model::GlobalStorageMode>(value);
		return true;
	case MetadataKey::Role:
		if (value >= ir_model::kSymbolRoleCount)
			return fail("invalid symbol role");
		if (value != ir_model::SR_NONE &&
			ir_model::is_global_role(static_cast<ir_model::SymbolRole>(value)) != on_global)
			return fail(on_global ? "function role on global" : "invalid symbol role");
		metadata.role = static_cast<ir_model::SymbolRole>(value);
		return true;
	case MetadataKey::Linkage:
		if (value >= ir_model::kLanguageLinkageModeCount)
			return fail("invalid linkage metadata");
		metadata.linkage = static_cast<ir_model::LanguageLinkageMode>(value);
		return true;
	case MetadataKey::Binding:
		if (value >= ir_model::kSymbolBindingModeCount)
			return fail("invalid binding metadata");
		metadata.binding = static_cast<ir_model::SymbolBindingMode>(value);
		return true;
	case MetadataKey::Visibility:
		if (value >= ir_model::kSymbolVisibilityCount)
			return fail("invalid symbol visibility");
		metadata.visibility = static_cast<ir_model::SymbolVisibility>(value);
		return true;
	case MetadataKey::NoBuiltin:
		if (on_global)
			return fail("no_builtin metadata requires a function");
		if (value > 1)
			return fail("no_builtin metadata is 1 or 0");
		metadata.no_builtin = value != 0;
		return true;
	case MetadataKey::TlsFor:
		if (on_global)
			return fail("tls_for metadata requires a function");
		if (value != CPPGM_NO_ID && value >= program.symbols.size())
			return fail("invalid tls_for target");
		metadata.tls_for = value;
		return true;
	case MetadataKey::Section:
	case MetadataKey::Object:
		return fail("this symbol metadata is a name: use cppgm_lowir_symbol_name");
	default:
		break;
	}
	// The flags, keep_alias to cold.
	if (on_global &&
		(key == MetadataKey::ForceInline || key == MetadataKey::InlineHint || key == MetadataKey::NoInline ||
			key == MetadataKey::Cold))
		return fail("this symbol metadata requires a function");
	if (value > 1)
		return fail("a symbol flag is 1 or 0");
	const uint8_t flag = ir_model::symbol_flag_of(key);
	metadata.flags = static_cast<uint8_t>(value != 0 ? metadata.flags | flag : metadata.flags & ~flag);
	return true;
}

bool CppgmLowir::symbol_name(uint32_t id, uint32_t key, const char* name, uint32_t length)
{
	if (!ready())
		return false;
	if (id >= program.symbols.size() || program.symbols[id].kind == lowir::SymbolKind::Unresolved)
		return fail("symbol metadata requires a declared function or global");
	const bool object = key == static_cast<uint32_t>(MetadataKey::Object);
	if (!object && key != static_cast<uint32_t>(MetadataKey::Section))
		return fail("unknown symbol name metadata");
	if ((length != 0 && name == nullptr) || (length != 0 && std::memchr(name, 0, length) != nullptr))
		return fail(object ? "invalid object name" : "invalid global section name");
	lowir::SymbolMetadata& metadata = program.symbols[id].metadata;
	if (object)
	{
		metadata.object = length != 0 ? program.names.intern(name, length) : 0;
		return true;
	}
	if (!lowir::is_global_kind(program.symbols[id].kind))
		return fail("section metadata requires a global");
	if (!section_name(name, length))
		return fail("invalid global section name");
	metadata.section = length != 0 ? program.names.intern(name, length) : 0;
	return true;
}

lowir::FunctionBody* CppgmLowir::committed_body(uint32_t symbol)
{
	if (symbol >= program.symbols.size() || program.symbols[symbol].kind != lowir::SymbolKind::FunctionDefinition)
		return nullptr;
	lowir::FunctionBody* body = program.functions[program.symbols[symbol].detail].body.get();
	return body != nullptr && body->construction_state == 2 ? body : nullptr;
}

bool CppgmLowir::argument_facts(uint32_t symbol, const CppgmArgumentFact* facts, uint32_t count)
{
	if (!ready())
		return false;
	lowir::FunctionBody* body = committed_body(symbol);
	if (body == nullptr)
		return fail("argument facts require a committed body");
	if (count != 0 && facts == nullptr)
		return fail("null argument facts");
	std::vector<lowir::ArgumentFacts> result;
	result.reserve(count);
	for (uint32_t i = 0; i < count; ++i)
	{
		const CppgmArgumentFact& fact = facts[i];
		const bool typed = fact.type != static_cast<uint8_t>(lowir::TypeKind::Void);
		const bool shaped = fact.shape_element != 0;
		if (fact.reserved != 0 || fact.reserved2 != 0 || fact.type >= static_cast<uint8_t>(lowir::TypeKind::Obj) ||
			fact.shape_element >= ir_model::kAggregateElementCount || (typed && shaped) ||
			(!shaped && fact.shape_count != 0) || (fact.classes == 0 && !typed && !shaped))
			return fail("invalid argument fact");
		if (shaped)
			result.push_back(lowir::ArgumentFacts(
				fact.instruction, fact.argument, fact.classes, shape(fact.shape_element, fact.shape_count)));
		else
			result.push_back(lowir::ArgumentFacts(
				fact.instruction, fact.argument, fact.classes, static_cast<lowir::TypeKind>(fact.type)));
	}
	body->argument_facts.swap(result);
	return true;
}
