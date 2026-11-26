#include "native/asm/environment.h"

#include "lowir/assembly.h"
#include "native/asm/binding.h"
#include "native/backend_error.h"

namespace native {

AssemblyEnvironment::AssemblyEnvironment(const lowir::Program& program, PrepareGlobal prepare)
	: program_(program), prepare_(prepare), current_(prepare ? asm_model::Dialect::AArch64 : asm_model::Dialect::Att)
{
	snapshots_.push_back(current_);
}
void AssemblyEnvironment::ensure(uint32_t prefix)
{
	if ((!program_.assembly && prefix != 0) || (program_.assembly && prefix > program_.assembly->globals.size()))
		throw BackendError("assembly environment prefix is out of range");
	while (sources_.size() < prefix)
	{
		const lowir::AssemblyGlobal& item = program_.assembly->globals[sources_.size()];
		std::string source;
		std::vector<assembly::SymbolUse> symbols;
		std::vector<assembly::LabelUse> labels;
		if (prepare_)
			prepare_(program_, item, sources_.size(), source, symbols);
		else
		{
			lowir::FunctionBody constants;
			constants.literals = item.literals;
			prepare_assembly_source(
				*program_.assembly, item.definition, constants, item.arguments, source, symbols, labels);
		}
		const auto dialect = prepare_ ? asm_model::Dialect::AArch64 : asm_model::Dialect::Att;
		sources_.push_back(current_.expand(assembly::module_lines(source, symbols, labels, dialect)));
		snapshots_.push_back(current_);
	}
}
assembly::ModuleExpander AssemblyEnvironment::snapshot(uint32_t prefix)
{
	ensure(prefix);
	return snapshots_[prefix];
}
const std::vector<std::vector<assembly::ModuleLine>>& AssemblyEnvironment::globals()
{
	ensure(program_.assembly ? static_cast<uint32_t>(program_.assembly->globals.size()) : 0);
	return sources_;
}

} // namespace native
