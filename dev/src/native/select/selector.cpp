#include "native/select/selector.h"

#include "native/select/function_selector.h"

namespace native {

Selector::Selector(const lowir::Program& program) : state_(new FunctionSelector(program, stats_))
{}

Selector::~Selector()
{
	delete state_;
}

void Selector::select(lowir::SymbolId function, Function& out, uint32_t extra_preserved_gprs)
{
	state_->select(function, out, extra_preserved_gprs);
}

AssemblyEnvironment& Selector::assembly_environment()
{
	return state_->assembly_environment();
}

void Selector::set_eh_model(EhModel model)
{
	state_->set_eh_model(model);
}

void Selector::set_position_independent(bool enabled)
{
	state_->set_position_independent(enabled);
}

void Selector::set_target(Target target)
{
	state_->set_target(target);
}

void Selector::set_i386_abi(uint8_t regparm, uint8_t stack_alignment, bool code16gcc)
{
	state_->set_i386_abi(regparm, stack_alignment, code16gcc);
}

void Selector::set_sse2(bool enabled)
{
	state_->set_sse2(enabled);
}

void Selector::set_jump_tables(bool enabled)
{
	state_->set_jump_tables(enabled);
}

void Selector::set_kernel_model(bool enabled)
{
	state_->set_kernel_model(enabled);
}

void Selector::set_optimization_level(int level)
{
	state_->set_optimization_level(level);
}

} // namespace native
