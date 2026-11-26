#pragma once

#include "asm/module_expand.h"
#include "lowir/program.h"

namespace lowir {
struct AssemblyGlobal;
}

namespace native {

// Snapshots refer to a prefix of ordered module invocations. Typed symbol
// spans retain program identities until object placement, never rendered names.
class AssemblyEnvironment
{
public:
	using PrepareGlobal = void (*)(
		const lowir::Program&, const lowir::AssemblyGlobal&, uint64_t, std::string&, std::vector<assembly::SymbolUse>&);
	explicit AssemblyEnvironment(const lowir::Program& program, PrepareGlobal prepare = nullptr);
	assembly::ModuleExpander snapshot(uint32_t prefix);
	const std::vector<std::vector<assembly::ModuleLine>>& globals();

private:
	void ensure(uint32_t prefix);
	const lowir::Program& program_;
	PrepareGlobal prepare_;
	assembly::ModuleExpander current_;
	std::vector<assembly::ModuleExpander> snapshots_;
	std::vector<std::vector<assembly::ModuleLine>> sources_;
};

} // namespace native
