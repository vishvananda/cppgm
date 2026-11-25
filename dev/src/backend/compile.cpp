#include "backend/compile.h"

#include "native/backend.h"
#include "aarch64/link.h"
#include "support/file_handle.h"
#include "aarch64/backend.h"
#include "native/backend_error.h"
#include "native/link/linker.h"
#include "opt/optimizer.h"
#include "wasm/backend.h"

namespace backend {

bool compile_program(lowir::Program& program, const Options& options, std::string& error, std::string* stats_line)
{
	if (program.explicit_target && program.target != options.target)
	{
		error = "input and output target profiles differ";
		return false;
	}
	if (target_model::is_aarch64(options.target))
	{
		if (!options.exports.empty() || options.wasm_link.requested())
		{
			error = "Wasm exports and imports require a Wasm target";
			return false;
		}
		program.target = options.target;
		try
		{
			if (options.optimization_level && options.lowir_passes)
			{
				opt::OptimizerOptions optimization;
				if (options.optimizer)
					optimization = *options.optimizer;
				optimization.level = options.optimization_level;
				if (options.general_regs_only)
					optimization.vectorize = false;
				opt::optimize_program(program, optimization, nullptr);
			}
			std::vector<native::object::ObjectFile> objects(1);
			std::string dump;
			if (!options.machine_ir.empty())
				dump = "machine_ir aarch64 1\n";
			const bool darwin = target_model::is_darwin(options.target);
			aarch64::compile_object(program, objects.front(), options.optimization_level, darwin,
				dump.empty() ? nullptr : &dump, false, darwin, options.optimizer && options.optimizer->minimize_size,
				false, false, options.general_regs_only);
			if (!dump.empty())
			{
				FileHandle file(std::fopen(options.machine_ir.c_str(), "wb"));
				if (!file.get() || std::fwrite(dump.data(), 1, dump.size(), file.get()) != dump.size() || !file.close())
				{
					error = "cannot write " + options.machine_ir;
					return false;
				}
			}
			if (stats_line)
				*stats_line = "aarch64 object symbols=" + std::to_string(objects.front().symbols.size() - 1);
			if (options.output.empty())
				return true;
			for (const auto& path : options.link_inputs)
				if (!aarch64::read_input(path, objects, error, target_model::is_darwin(options.target)))
					return false;
			return native::link_executable(
				objects, options.output, error, nullptr, options.target, !options.no_startfiles);
		}
		catch (const native::BackendError& failure)
		{
			error = failure.what();
			return false;
		}
	}
	if (target_model::is_wasm(options.target))
		return wasm::compile_program(program, options, error);
	if (!options.sysroot.empty() || !options.resource_directory.empty() || options.no_standard_libraries ||
		options.no_startfiles)
	{
		error = "target runtime directory/options currently require a Wasm target";
		return false;
	}
	if (!options.link_inputs.empty())
	{
		error = "additional object inputs require a Wasm target";
		return false;
	}
	if (!options.exports.empty())
	{
		error = "explicit function exports require a Wasm target";
		return false;
	}
	return native::compile_program(program, options, error, stats_line);
}

} // namespace backend
