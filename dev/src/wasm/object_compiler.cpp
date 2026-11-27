#include "wasm/backend.h"

#include <chrono>
#include <iostream>

#include "lowir/assembly.h"
#include "machine/wide_helpers.h"
#include "opt/optimizer.h"
#include "support/telemetry.h"

namespace wasm {

namespace {

bool only_empty_assembly(const lowir::Program& program)
{
	if (!program.assembly)
		return true;
	const auto& assembly = *program.assembly;
	if (!assembly.functions.empty() || !assembly.globals.empty())
		return false;
	for (const auto& definition : assembly.templates)
	{
		if (definition.clobber_count != 0 || definition.piece_count != 0 ||
			(definition.properties & asm_model::AP_NORETURN) != 0)
			return false;
		for (uint32_t i = 0; i < definition.operand_count; ++i)
		{
			const auto& operand = assembly.operands[definition.first_operand + i];
			if (operand.output != asm_model::kNoId &&
				(operand.input == asm_model::kNoId || operand.input_storage ||
					(operand.flags & (asm_model::AO_FLAG | asm_model::AO_EXIT_TAG)) != 0 ||
					storage_bytes(operand.type) > 8))
				return false;
		}
	}
	return true;
}

} // namespace

void optimize_object_program(lowir::Program& program, const backend::Options& options, opt::OptimizerStats* stats)
{
	// The object follows the program's order: the one its LowIR text has,
	// also for the symbols the optimizer adds (such as a switch's table).
	lowir::order_as_written(program);
	if (!options.lowir_passes)
		return;
	opt::OptimizerOptions optimization;
	if (options.optimizer != nullptr)
		optimization = *options.optimizer;
	optimization.level = options.optimization_level;
	optimization.has_gnu_sincos = target_model::has_gnu_sincos(program.target);
	opt::optimize_program(program, optimization, stats);
	lowir::order_as_written(program);
}

bool build_object(
	lowir::Program& program, const backend::Options& options, Object& object, std::string& dump, std::string& error)
{
	if (!program.explicit_target || program.target != options.target)
	{
		error = "Wasm compilation requires a matching explicit LowIR target profile";
		return false;
	}
	if (options.target != target_model::Target::Wasm64 && !options.assembly_text && !only_empty_assembly(program))
	{
		error = "assembly is not supported by this Wasm profile";
		return false;
	}
	try
	{
		opt::OptimizerStats stats;
		optimize_object_program(program, options, &stats);
#if CPPGM_TELEMETRY_ENABLED
		const auto object_start = std::chrono::steady_clock::now();
#endif
		prepare_finalizers(program);
		if (!machine::legalize_wide_helpers(program))
			throw WasmError("conflicting Wasm arithmetic helper identity");
		make_object(program, options, object, dump);
#if CPPGM_TELEMETRY_ENABLED
		if (options.stats)
		{
			std::cerr << opt::describe_stats(stats) << std::endl;
			const double object_ms =
				std::chrono::duration<double, std::milli>(std::chrono::steady_clock::now() - object_start).count();
			std::cerr << "cppgm wasm object stats: functions=" << object.functions.size()
					  << " optimize_ms=" << stats.optimize_ms << " object_ms=" << object_ms << std::endl;
		}
#endif
		return true;
	}
	catch (const WasmError& failure)
	{
		error = failure.what();
		return false;
	}
}

} // namespace wasm
