#include "lower/program_lowering.h"

#include <algorithm>

#include "lowir/builder.h"

namespace lower {

void ProgramLowering::startup_functions()
{
	emit_lifetime_functions(graph_->startup_functions, false);
	emit_lifetime_functions(graph_->shutdown_functions, true);
}

void ProgramLowering::emit_lifetime_functions(const sema::SemanticGraph::LifetimeFunctions& list, bool shutdown)
{
	if (list.entries.empty())
		return;
	const bool register_callback = shutdown &&
		(target_model::is_wasm(program_.target) || target_model::is_darwin(program_.target));
	std::vector<sema::SemanticGraph::LifetimeFunction> functions(list.entries);
	std::stable_sort(functions.begin(), functions.end(),
		[](const sema::SemanticGraph::LifetimeFunction& a, const sema::SemanticGraph::LifetimeFunction& b) {
			return a.priority < b.priority;
		});
	for (const auto& hook : functions)
	{
		if (hook.function->body == nullptr)
			continue;
		demand(hook.function);
		lowir::SymbolId function = function_symbol(hook.function);
		if (register_callback)
			function = shutdown_registration(function);
		const bool fini = shutdown && !register_callback;
		const lowir::SymbolId table = new_symbol(fini ? "__cppgm_shutdown" : "__cppgm_startup");
		lowir::Global global = lowir::Global();
		global.typed = true;
		global.type = program_.pointer_type();
		global.init = lowir::GlobalInit::Address;
		global.address = function;
		program_.declare_global(table, lowir::SymbolKind::GlobalDefinition, global);
		const std::string section = (fini ? ".fini_array." : ".init_array.") + std::to_string(hook.priority);
		program_.symbols[table].metadata.section = intern(section.data(), static_cast<uint32_t>(section.size()));
		program_.symbols[table].metadata.binding = ir_model::SBM_INTERNAL;
		program_.symbols[table].metadata.flags = lowir::SF_OBJECT_ROOT;
		++counters_.globals;
	}
}

lowir::SymbolId ProgramLowering::cxa_atexit_function()
{
	if (cxa_atexit_ != lowir::kNoId)
		return cxa_atexit_;
	lowir::Signature signature = lowir::Signature();
	signature.first_parameter = static_cast<uint32_t>(program_.parameters.size());
	signature.parameter_count = 3;
	signature.result = lowir::Type::scalar(lowir::TypeKind::I32);
	signature.boundary.unwind = ir_model::CUM_NO;
	lowir::Parameter parameter = lowir::Parameter();
	parameter.type = program_.pointer_type();
	program_.parameters.insert(program_.parameters.end(), signature.parameter_count, parameter);
	cxa_atexit_ = new_symbol("__cppgm_runtime_cxa_atexit");
	program_.declare_function(cxa_atexit_, lowir::SymbolKind::FunctionDeclaration, program_.add_signature(signature));
	lowir::SymbolMetadata& metadata = program_.symbols[cxa_atexit_].metadata;
	metadata.linkage = ir_model::LLM_C;
	metadata.binding = ir_model::SBM_STRONG;
	metadata.object = intern("__cxa_atexit", 12);
	return cxa_atexit_;
}

lowir::SymbolId ProgramLowering::shutdown_registration(lowir::SymbolId callback)
{
	// Darwin's host runtime associates the handler with the image. WASI
	// and the standalone runtime use their existing C exit callback list.
	const bool darwin = darwin_host_objects();
	const lowir::SymbolId registrar = darwin ? cxa_atexit_function() : atexit_function();
	const lowir::SymbolId dso = darwin ? dso_handle() : lowir::kNoId;
	const lowir::SymbolId symbol = new_symbol("__cppgm_register_shutdown");
	lowir::Signature signature = lowir::Signature();
	signature.result = lowir::Type::scalar(lowir::TypeKind::Void);
	program_.declare_function(symbol, lowir::SymbolKind::FunctionDefinition, program_.add_signature(signature));
	program_.symbols[symbol].metadata.binding = ir_model::SBM_INTERNAL;
	lowir::FunctionBuilder body(program_, symbol);
	const lowir::BlockId entry = body.add_block(entry_name());
	body.place_block(entry);
	body.set_insertion_block(entry);
	lowir::Value args[] = { lowir::Value::symbol(callback), lowir::Value::none(), lowir::Value::none() };
	if (darwin)
	{
		args[1] = body.integer(0);
		args[2] = lowir::Value::symbol(dso);
	}
	body.call(lowir::Type::scalar(lowir::TypeKind::I32), lowir::Value::symbol(registrar), args, darwin ? 3 : 1,
		lowir::kNoId, 0);
	body.ret(signature.result, lowir::Value::none());
	body.finish();
	release_definition(symbol);
	++counters_.functions;
	return symbol;
}

} // namespace lower
