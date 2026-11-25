#include "aarch64/selector.h"

#include "aarch64/error.h"

#include "machine/call_arguments.h"

namespace aarch64 {

using namespace lowir;

void Selector::save_variadic_registers()
{
	if (variadic_area_ == kNoId)
		return;
	frame_address(10, variadic_area_);
	for (unsigned i = 0; i < 8; ++i)
	{
		access(true, i, 10, i * 8, 8);
		if (!general_regs_only_)
			out_.emit(Op::StrQ, i, 10, 0, (4 + i) << 10);
	}
}

void Selector::emit_va_start(const lowir::Instruction& inst)
{
	value(15, inst.ops[0], program_.pointer_type());
	frame_address(10, frame_ + (named_.darwin ? (named_.stack + 7) & ~7u : named_.stack));
	access(true, 10, 15, 0, 8);
	if (named_.darwin)
		return;
	frame_address(10, variadic_area_ + 64);
	access(true, 10, 15, 8, 8);
	constant(10, uint32_t((named_.general - 8) * 8));
	access(true, 10, 15, 24, 4);
	if (general_regs_only_)
	{
		// Offsets of zero route FP access to the stack. There is no FP
		// register save area in the general-register variadic convention.
		access(true, 31, 15, 16, 8);
		access(true, 31, 15, 28, 4);
	}
	else
	{
		frame_address(10, variadic_area_ + 192);
		access(true, 10, 15, 16, 8);
		constant(10, uint32_t((named_.simd - 8) * 16));
		access(true, 10, 15, 28, 4);
	}
}

// x11 addresses the register save area or incoming stack slot.
void Selector::read_variadic_value(const lowir::Instruction& inst, const Argument& arg, bool stacked)
{
	const Type type = inst.type;
	if (!memory_value(type))
	{
		access(false, 9, 11, 0, storage_bytes(type));
		save(9, inst.result);
		return;
	}
	if (type.kind() == TypeKind::V128)
	{
		out_.emit(Op::LdrQ, 16, 11);
		save_vector(16, inst.result);
		return;
	}
	home_address(10, inst.result);
	if (arg.indirect)
		access(false, 11, 11, 0, 8);
	if (!stacked && arg.bank == Bank::Simd && arg.pieces > 1 && arg.piece_bytes < 16)
	{
		for (unsigned i = 0; i < arg.pieces; ++i)
		{
			access(false, 9, 11, i * 16, arg.piece_bytes);
			access(true, 9, 10, i * arg.piece_bytes, arg.piece_bytes);
		}
	}
	else
		copy_bytes(10, 11, storage_bytes(type));
}

void Selector::stack_va_arg(const lowir::Instruction& inst, const Argument& arg, bool aligned)
{
	access(false, 11, 15, 0, 8);
	if (aligned)
	{
		out_.emit(Op::AddI, 11, 11, 0, 15 << 10);
		constant(9, ~uint64_t(15));
		out_.emit(Op::And, 11, 11, 9);
	}
	constant(9, arg.indirect ? 8 : (storage_bytes(inst.type) + 7) & ~uint64_t(7));
	out_.emit(Op::Add, 9, 11, 9);
	access(true, 9, 15, 0, 8);
	read_variadic_value(inst, arg, true);
}

void Selector::emit_va_arg(const lowir::Instruction& inst)
{
	const auto arg = classify(inst.type, machine::argument_shape(body_, inst, 0));
	const bool simd = arg.bank == Bank::Simd;
	if (general_regs_only_ && simd)
		throw AArch64Error("-mgeneral-regs-only cannot read a SIMD variadic argument");
	const unsigned offs = simd ? 28 : 24;
	const bool aligned = !arg.indirect && data_alignment(inst.type) > 8;
	value(15, inst.ops[0], program_.pointer_type());
	if (named_.darwin)
	{
		stack_va_arg(inst, arg, aligned);
		return;
	}
	const uint32_t stacked = out_.labels.size(), done = stacked + 1;
	out_.labels.resize(done + 1);
	access(false, 9, 15, offs, 4);
	extend(9, 32, true);
	out_.emit(Op::Subs, 31, 9, 31);
	out_.reference(Op::BCond, Fixup::Block, stacked, 10); // GE
	if (!simd && aligned)
	{
		out_.emit(Op::AddI, 9, 9, 0, 15 << 10);
		constant(10, ~uint64_t(15));
		out_.emit(Op::And, 9, 9, 10);
	}
	out_.emit(Op::AddI, 10, 9, 0, (arg.pieces * (simd ? 16 : 8)) << 10);
	access(true, 10, 15, offs, 4);
	out_.emit(Op::Subs, 31, 10, 31);
	out_.reference(Op::BCond, Fixup::Block, stacked, 12); // GT
	access(false, 11, 15, simd ? 16 : 8, 8);
	out_.emit(Op::Add, 11, 11, 9);
	read_variadic_value(inst, arg, false);
	out_.reference(Op::B, Fixup::Block, done);
	out_.bind(stacked);
	stack_va_arg(inst, arg, aligned);
	out_.bind(done);
}

} // namespace aarch64
