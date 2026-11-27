#pragma once

#include <cstdint>
#include <set>
#include <string>
#include <vector>

#include "target_model.h"

namespace opt {
struct OptimizerOptions;
}

namespace backend {

struct WasmLinkOptions
{
	std::set<std::string> imports;
	bool export_table = false;
	bool export_constructors = false;
	// Link-time identical code folding over resolved Wasm objects.
	bool fold_functions = false;
	bool compact_relocations = false;
	bool requested() const { return export_table || export_constructors || fold_functions || !imports.empty(); }
};

struct Options
{
	target_model::Target target = target_model::Target::Linux;
	std::string output;
	std::string machine_ir;
	int optimization_level = 0;
	bool stats = false;
	bool* undefined_symbol = nullptr;
	std::vector<std::string> exports;
	std::vector<std::string> link_inputs;
	std::string sysroot;
	std::string resource_directory;
	bool cxx_runtime = false;
	bool exceptions = true;
	bool no_standard_libraries = false;
	bool no_startfiles = false;
	uint32_t wasm_stack_size = 1024 * 1024;
	bool general_regs_only = false;
	bool wasm_atomics = true;
	bool assembly_text = false;
	WasmLinkOptions wasm_link;
	const opt::OptimizerOptions* optimizer = nullptr;
	// -fno-lowir-passes: the back end takes the program as it is.
	bool lowir_passes = true;
};

} // namespace backend
