#include "wasm/mir.h"

namespace wasm {

unsigned natural_memory_alignment(Op op)
{
	switch (op)
	{
	case Op::I32Load8S:
	case Op::I32Load8U:
	case Op::I64Load8S:
	case Op::I64Load8U:
	case Op::I32Store8:
	case Op::I64Store8:
		return 0;
	case Op::I32Load16S:
	case Op::I32Load16U:
	case Op::I64Load16S:
	case Op::I64Load16U:
	case Op::I32Store16:
	case Op::I64Store16:
		return 1;
	case Op::I64Load:
	case Op::I64Store:
	case Op::F64Load:
	case Op::F64Store:
		return 3;
	default:
		break;
	}
	const auto simd = simd_info(op);
	if (simd.form != SimdForm::None)
		return simd.alignment;
	const auto atomic = atomic_info(op);
	return atomic.form == AtomicForm::None ? 2 : atomic.alignment;
}

uint16_t effects(Op op)
{
	using namespace machine_model;
	const unsigned code = static_cast<unsigned>(op);
	if ((code >> 8) == 0xfe)
		return ReadMemory | WriteMemory |
			(wasm_model::atomic_info(op).form == wasm_model::AtomicForm::Fence ? 0 : MayTrap);
	if (code >= 0x28 && code <= 0x3e)
		return (code >= 0x36 ? WriteMemory : ReadMemory) | MayTrap;
	const SimdForm simd = simd_info(op).form;
	if (simd == SimdForm::Load || simd == SimdForm::LoadLane)
		return ReadMemory | MayTrap;
	if (simd == SimdForm::Store)
		return WriteMemory | MayTrap;
	switch (op)
	{
	case Op::MemoryCopy:
		return ReadMemory | WriteMemory | MayTrap;
	case Op::MemoryFill:
		return WriteMemory | MayTrap;
	case Op::MemorySize:
		return ReadMemory;
	case Op::MemoryGrow:
		return ReadMemory | WriteMemory;
	case Op::GlobalGet:
		return ReadGlobal;
	case Op::GlobalSet:
		return WriteGlobal;
	case Op::TableGet:
		return ReadGlobal | MayTrap;
	case Op::TableSize:
		return ReadGlobal;
	case Op::TableSet:
	case Op::TableFill:
	case Op::TableCopy:
		return ReadGlobal | WriteGlobal | MayTrap;
	case Op::TableGrow:
		return ReadGlobal | WriteGlobal;
	case Op::Call:
	case Op::CallIndirect:
		return Call | ReadMemory | WriteMemory | ReadGlobal | WriteGlobal | MayTrap | MayThrow;
	case Op::ReturnCallIndirect:
		return Control | Call | ReadMemory | WriteMemory | ReadGlobal | WriteGlobal | MayTrap | MayThrow;
	case Op::Throw:
	case Op::ThrowRef:
		return Control | MayThrow;
	case Op::Unreachable:
	case Op::I32DivS:
	case Op::I32DivU:
	case Op::I32RemS:
	case Op::I32RemU:
	case Op::I64DivS:
	case Op::I64DivU:
	case Op::I64RemS:
	case Op::I64RemU:
	case Op::I32TruncF32S:
	case Op::I32TruncF32U:
	case Op::I32TruncF64S:
	case Op::I32TruncF64U:
	case Op::I64TruncF32S:
	case Op::I64TruncF32U:
	case Op::I64TruncF64S:
	case Op::I64TruncF64U:
		return MayTrap;
	case Op::Block:
	case Op::Loop:
	case Op::If:
	case Op::Else:
	case Op::End:
	case Op::Br:
	case Op::BrIf:
	case Op::BrTable:
	case Op::Return:
	case Op::TryTable:
		return Control;
	default:
		return 0;
	}
}

} // namespace wasm
