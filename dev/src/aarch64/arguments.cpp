#include "aarch64/selector.h"

#include "aarch64/error.h"
#include "machine/call_arguments.h"
#include "machine/parallel_register_moves.h"
#include "opt/function_ir.h"

#include <algorithm>

namespace aarch64 {

using namespace lowir;

// Darwin TLV thunks accept a descriptor in x0. x0, IP0, IP1 and LR may
// change. Preserve operands already prepared by the enclosing instruction.
void Selector::darwin_tls_address(unsigned reg, SymbolId symbol)
{
	out_.emit(Op::SubI, 31, 31, 0, 48 << 10);
	if (!dynamic_stack_)
		out_.frame_rule(FrameRule::Offset, 31, frame_ + 48);
	access(true, 0, 31, 0, 8);
	access(true, 16, 31, 8, 8);
	access(true, 17, 31, 16, 8);
	access(true, 30, 31, 24, 8);
	out_.reference(Op::Adrp, Fixup::TlvPage, symbol, 0);
	out_.reference(Op::LdrX, Fixup::TlvLoad, symbol, 0, 0);
	access(false, 16, 0, 0, 8);
	out_.emit(Op::Blr, 0, 16);
	access(true, 0, 31, 32, 8);
	access(false, 0, 31, 0, 8);
	access(false, 16, 31, 8, 8);
	access(false, 17, 31, 16, 8);
	access(false, 30, 31, 24, 8);
	access(false, reg, 31, 32, 8);
	out_.emit(Op::AddI, 31, 31, 0, 48 << 10);
	if (!dynamic_stack_)
		out_.frame_rule(FrameRule::Offset, 31, frame_);
}

void Selector::copy_value(unsigned dst, Value src, Type type)
{
	if (type.kind() == TypeKind::V128)
	{
		out_.emit(Op::StrQ, vector_value(src, 16), dst);
		return;
	}
	if (type.kind() == TypeKind::I128 && src.is(ValueKind::Integer))
	{
		pair(src, 16, 17);
		access(true, 16, dst, 0, 8);
		access(true, 17, dst, 8, 8);
		return;
	}
	copy_bytes(dst, address_register(src, 11), storage_bytes(type));
}

void Selector::fp_move(bool to_fp, unsigned fp, unsigned gp, Type type)
{
	const bool single = type.kind() == TypeKind::F32;
	if (to_fp)
		out_.emit(single ? Op::FmovSW : Op::FmovDX, fp, gp);
	else
		out_.emit(single ? Op::FmovWS : Op::FmovXD, gp, fp);
}

// An aggregate may end at the last byte of a mapped page. Access only
// the bytes belonging to each general-register piece, including its tail.
void Selector::transfer(bool load, const Argument& arg, Value object, Type type)
{
	unsigned base = 10, displacement = 0;
	const bool general = arg.bank == Bank::General;
	const bool pair = level_ && general && arg.pieces == 2 && storage_bytes(type) == 16;
	const bool simd_pair = level_ && arg.bank == Bank::Simd && arg.pieces >= 2;
	const unsigned piece = general ? 8 : arg.piece_bytes;
	const Type place = type_of(object, type);
	if (level_ && (general || simd_pair) && data_alignment(place) <= 16)
	{
		const uint32_t offset = object.is(ValueKind::Slot)      ? slots_[object.index]
			: object.is(ValueKind::Temp) && memory_value(place) ? homes_[object.index]
																: kNoId;
		const unsigned limit = pair || simd_pair ? (arg.pieces >= 4 ? 61 : 63) * piece : 4080;
		if (offset <= limit && offset % piece == 0)
		{
			base = frame_base();
			displacement = offset;
		}
	}
	if (base == 10)
		address(base, object);
	if (pair)
	{
		out_.emit(load ? Op::LdpX : Op::StpX, arg.first, base, 0, ((arg.first + 1) << 10) | ((displacement / 8) << 15));
		return;
	}
	for (unsigned i = 0; i < arg.pieces; ++i)
	{
		if (general)
		{
			const unsigned reg = arg.first + i;
			unsigned offset = 0, bytes = std::min<uint64_t>(8, storage_bytes(type) - i * 8);
			for (unsigned chunk : { 8u, 4u, 2u, 1u })
			{
				if (!(bytes & chunk))
					continue;
				const unsigned part = offset ? 15 : reg;
				if (!load && offset)
					out_.emit(Op::Ubfm, 15, reg, 0, (offset * 8 << 16) | (63u << 10));
				access(!load, part, base, displacement + i * 8 + offset, chunk);
				if (load && offset)
					out_.emit(Op::Orr, reg, reg, 15, offset * 8 << 10);
				offset += chunk;
			}
		}
		else
		{
			const unsigned slot = displacement / piece + i;
			if (simd_pair && i + 1 < arg.pieces)
			{
				const Op op = piece == 16 ? (load ? Op::LdpQ : Op::StpQ)
					: piece == 8          ? (load ? Op::LdpD : Op::StpD)
										  : (load ? Op::LdpS : Op::StpS);
				out_.emit(op, arg.first + i, base, 0, ((arg.first + i + 1) << 10) | (slot << 15));
				++i;
			}
			else
			{
				const Op op = piece == 16 ? (load ? Op::LdrQ : Op::StrQ)
					: piece == 8          ? (load ? Op::LdrD : Op::StrD)
										  : (load ? Op::LdrS : Op::StrS);
				out_.emit(op, arg.first + i, base, 0, slot << 10);
			}
		}
	}
}

void Selector::parameter(TempId id, const Argument& arg)
{
	if (!arg.pieces || (level_ && !uses_[id]))
		return;
	const Type type = body_.temps[id].type;
	if (!parameter_words_.empty() && parameter_words_[id])
	{
		move(parameter_words_[id], arg.first);
		move(parameter_words_[id] + 1, arg.first + 1);
		return;
	}
	const unsigned offset = frame_ + arg.first;
	if (type.kind() == TypeKind::V128)
	{
		if (arg.bank == Bank::Stack)
		{
			frame_address(10, offset);
			out_.emit(Op::LdrQ, 16, 10);
		}
		save_vector(arg.bank == Bank::Stack ? 16 : arg.first, id);
	}
	else if (memory_value(type))
	{
		if (arg.indirect || arg.bank == Bank::Stack)
		{
			home_address(10, id);
			if (!arg.indirect)
				frame_address(11, offset);
			else if (arg.bank == Bank::Stack)
				access(false, 11, frame_base(), offset, 8);
			else
				move(11, arg.first);
			copy_bytes(10, 11, storage_bytes(type));
		}
		else
			transfer(false, arg, Value::temp(id), type);
	}
	else
	{
		if (arg.bank == Bank::Simd && vectors_[id] != kNoId)
		{
			vector_move(vectors_[id], arg.first);
			return;
		}
		// A W move or bitfield extraction can read the incoming argument
		// and write its canonical home in a single instruction.
		if (level_ && arg.bank == Bank::General && registers_[id] != kNoId)
		{
			save(arg.first, id);
			return;
		}
		const unsigned dest = registers_[id] == kNoId ? 10 : registers_[id];
		if (arg.bank == Bank::Stack)
			access(false, dest, frame_base(), offset, storage_bytes(type));
		else if (arg.bank == Bank::Simd)
			fp_move(false, arg.first, dest, type);
		else
			move(dest, arg.first);
		save(dest, id, level_ && arg.bank == Bank::Stack && type.kind() != TypeKind::I1);
	}
}

Selector::CallLayout Selector::call_layout(const lowir::Instruction& inst) const
{
	const auto* signature = program_.call_boundary(inst);
	if (!signature || inst.extra_count < signature->parameter_count ||
		(signature->boundary.arity == ir_model::CAM_FIXED && inst.extra_count != signature->parameter_count))
		throw AArch64Error("invalid AArch64 call boundary");
	const auto params = program_.parameters_of(*signature);
	CallLayout plan;
	machine::call_argument_types(body_, inst, *signature, params, plan.types);
	Arguments layout(named_.darwin);
	for (uint32_t i = 0; i < plan.types.size(); ++i)
	{
		const auto shape = i < signature->parameter_count ? params[i].shape : machine::argument_shape(body_, inst, i);
		plan.args.push_back(i < signature->parameter_count && params[i].pass == ir_model::PPM_INDIRECT_RESULT
				? Argument{ Bank::General, 8, 1, 8, false }
				: layout.next(plan.types[i], shape, i >= signature->parameter_count));
	}
	uint64_t bytes = layout.stack;
	plan.copies.resize(plan.args.size(), 0);
	for (uint32_t i = 0; i < plan.args.size(); ++i)
		if (plan.args[i].indirect)
		{
			bytes = (bytes + 15) & ~uint64_t(15);
			plan.copies[i] = bytes;
			bytes += storage_bytes(plan.types[i]) + (std::max(16u, data_alignment(plan.types[i])) - 16);
			if (bytes > INT32_MAX)
				throw AArch64Error("AArch64 call frame too large");
		}
	plan.size = bytes;
	plan.parallel = level_ && inst.ops[0].is(ValueKind::Symbol) && !bytes && !plan.args.empty() &&
		plan.args.size() <= machine::kSmallTransfers;
	for (size_t i = 0; plan.parallel && i < plan.args.size(); ++i)
	{
		const auto& arg = plan.args[i];
		const Value src = body_.operands[inst.extra_first + i];
		plan.parallel = arg.bank == Bank::General && arg.pieces == 1 && !arg.indirect &&
			(plan.types[i].is_integer() || plan.types[i].is_pointer()) && !memory_value(plan.types[i]) &&
			(src.is(ValueKind::Integer) || (src.is(ValueKind::Temp) && !memory_value(body_.temps[src.index].type)));
	}
	return plan;
}

void Selector::pass(const Argument& arg, Value src, Type type, unsigned copy_offset)
{
	if (!arg.pieces)
		return;
	if (arg.indirect)
	{
		base_address(10, 31, copy_offset, data_alignment(type));
		copy_value(10, src, type);
		if (arg.bank == Bank::Stack)
			access(true, 10, 31, arg.first, 8);
		else
			move(arg.first, 10);
	}
	else if (type.kind() == TypeKind::V128 && arg.bank == Bank::Simd)
		vector_move(arg.first, vector_value(src, 16));
	else if (arg.bank == Bank::Simd && type.is_float() && !memory_value(type))
		vector_move(arg.first, fp_operand(src, type, 16));
	else if (type.kind() == TypeKind::I128 && arg.bank == Bank::General)
		pair(src, arg.first, arg.first + 1);
	else if (memory_value(type))
	{
		if (arg.bank == Bank::Stack)
		{
			base_address(10, 31, arg.first);
			copy_value(10, src, type);
		}
		else
			transfer(true, arg, src, type);
	}
	else
	{
		if (arg.bank == Bank::General)
		{
			value(arg.first, src, type);
			if (named_.darwin && type.is_integer() && integer_bits(type.kind()) < 32)
				extend(arg.first, integer_bits(type.kind()), !is_unsigned(type.kind()) && type.kind() != TypeKind::I1);
		}
		else
		{
			const unsigned reg = operand_register(src, type, 10);
			if (arg.bank == Bank::Stack)
				access(true, reg, 31, arg.first, storage_bytes(type));
			else
				fp_move(true, arg.first, reg, type);
		}
	}
}

// Register arguments are a parallel assignment. An argument can use any
// dying GPR when the shared resolver schedules the moves, including swaps
// and repeated sources. Apply Darwin's extension after every source is read.
void Selector::pass_parallel(const lowir::Instruction& inst, const CallLayout& layout)
{
	machine::ScalarTransfer moves[machine::kSmallTransfers];
	const unsigned count = layout.args.size();
	for (unsigned i = 0; i < count; ++i)
	{
		const Value src = body_.operands[inst.extra_first + i];
		const unsigned reg = src.is(ValueKind::Temp) ? registers_[src.index] : kNoId;
		moves[i] = { layout.args[i].first, reg == kNoId ? machine::kTransferLiteral : reg };
	}
	machine::parallel_scalar_transfers(
		moves, count, [&](unsigned i) { move(15, moves[i].destination); },
		[&](unsigned i, unsigned reg) {
			const unsigned dst = moves[i].destination;
			if (reg == machine::kTransferLiteral)
				value(dst, body_.operands[inst.extra_first + i], layout.types[i]);
			else
				move(dst, reg == machine::kTransferSaved ? 15 : reg);
		});
	if (named_.darwin)
		for (unsigned i = 0; i < count; ++i)
		{
			const Type type = layout.types[i];
			if (type.is_integer() && integer_bits(type.kind()) < 32)
				extend(layout.args[i].first, integer_bits(type.kind()),
					!is_unsigned(type.kind()) && type.kind() != TypeKind::I1);
		}
}

// The sibling's return registers must already meet the caller's ABI promise.
// A narrow result from external code can have unspecified high bits on Linux.
bool Selector::tail_compatible(const lowir::Instruction& inst, const CallLayout& layout) const
{
	if (inst.next == kNoId || !inst.ops[0].is(ValueKind::Symbol) || layout.size || memory_value(inst.type) ||
		inst.type != signature_.result || program_.call_boundary(inst)->boundary.arity == ir_model::CAM_VARIADIC)
		return false;
	const auto& ret = body_.instructions[inst.next];
	if (ret.op != Opcode::Return || (!inst.type.is_void() && !(ret.ops[0] == Value::temp(inst.result))))
		return false;
	return !(inst.type.is_integer() && integer_bits(inst.type.kind()) <= 32 &&
		program_.symbols[symbol_].metadata.binding == ir_model::SBM_INTERNAL &&
		program_.symbols[inst.ops[0].index].metadata.binding != ir_model::SBM_INTERNAL);
}

InstId Selector::projected_call(const lowir::Instruction& inst)
{
	if (!inst.type.is_object() || storage_bytes(inst.type) > 16 || inst.next == kNoId || inst.result == kNoId ||
		uses_[inst.result] != 1 || out_.exceptions || dynamic_stack_)
		return kNoId;
	const auto& address = body_.instructions[inst.next];
	if (address.op != Opcode::Addr || !address.ops[0].is(ValueKind::Slot) || address.next == kNoId)
		return kNoId;
	const auto slot = address.ops[0].index;
	const auto base = Value::temp(address.result);
	const auto& copy = body_.instructions[address.next];
	if (slot == result_slot_ || copy.op != Opcode::CopyObject || !(copy.ops[0] == Value::temp(inst.result)) ||
		!(copy.ops[1] == base) || copy.immediate != static_cast<int64_t>(storage_bytes(inst.type)) ||
		body_.slots[slot].type != inst.type ||
		classify(inst.type, program_.call_boundary(inst)->boundary.result_shape).bank != Bank::General)
		return kNoId;
	struct Field
	{
		TempId result;
		unsigned offset, bits;
	};
	Field fields[8];
	unsigned count = 0, reads = 1;
	InstId last = address.next;
	while (body_.instructions[last].next != kNoId && count < 8)
	{
		auto i = body_.instructions[last].next;
		const auto& index = body_.instructions[i];
		Value ptr = base;
		unsigned offset = 0;
		if (index.op == Opcode::Index && index.ops[0] == base && index.ops[1].is(ValueKind::Integer) &&
			uses_[index.result] == 1 && index.next != kNoId)
		{
			const auto step = body_.literals[index.ops[1].index];
			const auto scale = storage_bytes(index.type);
			if (step.high || step.low > 15 || !scale || scale > 16 || scale * step.low >= storage_bytes(inst.type))
				break;
			offset = scale * step.low;
			ptr = Value::temp(index.result);
			i = index.next;
		}
		const auto& load = body_.instructions[i];
		const unsigned bits = load.type.is_pointer() ? 64 : integer_bits(load.type.kind());
		if (load.op != Opcode::Load || (load.flags & IF_VOLATILE) || !(load.ops[0] == ptr) || !bits || bits > 64 ||
			registers_[load.result] == kNoId || storage_bytes(load.type) > storage_bytes(inst.type) - offset ||
			offset % 8 * 8 + bits > 64)
			break;
		++reads;
		fields[count++] = { load.result, offset, bits };
		last = i;
	}
	if (!count || reads != uses_[address.result])
		return kNoId;
	if (slot_mentions_.empty())
	{
		slot_mentions_.resize(body_.slots.size());
		for (auto b : body_.layout)
			for (auto i = body_.blocks[b].first; i != kNoId; i = body_.instructions[i].next)
			{
				const auto& use = body_.instructions[i];
				if (use.op == Opcode::FrameAddress || use.op == Opcode::Asm)
				{
					std::fill(slot_mentions_.begin(), slot_mentions_.end(), 2);
					return kNoId;
				}
				opt::for_each_operand(body_, use, [&](Value v) {
					if (v.is(ValueKind::Slot))
						++slot_mentions_[v.index];
				});
			}
	}
	if (slot_mentions_[slot] != 1)
		return kNoId;
	const auto& layout = calls_[call_indices_[&inst - body_.instructions.data()]];
	if (layout.saved_args || layout.saved_simd || layout.tail)
		return kNoId;
	emit_call(inst, layout, true);
	unsigned src[] = { 0, 1 };
	for (unsigned k = 0; k < count; ++k)
	{
		const auto field = fields[k];
		const unsigned dest = registers_[field.result], piece = field.offset / 8, shift = (field.offset % 8) * 8;
		if (dest < 2 && src[dest] == dest && !(piece == dest && field.bits == 64))
			for (unsigned m = k + 1; m < count; ++m)
				if (fields[m].offset / 8 == dest)
				{
					src[dest] = 10 + dest;
					move(src[dest], dest);
					break;
				}
		if (field.bits == 64)
			move(dest, src[piece]);
		else if (!shift && field.bits == 32)
			out_.emit(Op::OrrW, dest, 31, src[piece]);
		else
			out_.emit(Op::Ubfm, dest, src[piece], 0, (shift << 16) | ((shift + field.bits - 1) << 10));
	}
	return last;
}

// Read a result in x0 directly through its first and only use. A mask
// of one is independent of every unspecified high bit of a narrow result.
InstId Selector::branch_on_result(const lowir::Instruction& inst, BlockId block)
{
	if (inst.result == kNoId || inst.next == kNoId || out_.exceptions || uses_[inst.result] != 1 ||
		!(inst.type.is_integer() || inst.type.is_pointer()) || storage_bytes(inst.type) > 8)
		return kNoId;
	const auto& layout = calls_[call_indices_[&inst - body_.instructions.data()]];
	if (layout.saved_args || layout.saved_simd || layout.tail)
		return kNoId;
	const auto& next = body_.instructions[inst.next];
	const bool masked = next.op == Opcode::Binary && next.sub == static_cast<unsigned>(BinaryOp::And) &&
		next.type == inst.type && next.ops[0] == Value::temp(inst.result) && next.ops[1].is(ValueKind::Integer) &&
		body_.literals[next.ops[1].index].low == 1 && uses_[next.result] == 1;
	const InstId end = masked ? next.next : inst.next;
	if (end == kNoId || body_.instructions[end].op != Opcode::Branch ||
		!(body_.instructions[end].ops[0] == Value::temp(masked ? next.result : inst.result)))
		return kNoId;
	const unsigned bits = integer_bits(inst.type.kind());
	emit_call(inst, layout, true);
	if (masked || bits == 1)
	{
		const uint32_t pc = out_.code.size();
		out_.emit(Op::AndImmW, 9, 0); // AND w9, w0, #1
		conditional_edges(block, body_.instructions[end], Op::CbzW, 9);
		bit_tests_.push_back({ pc, 0 });
	}
	else if (bits == 8 || bits == 16)
	{
		out_.emit(Op::Ubfm, 9, 0, 0, (bits - 1) << 10);
		conditional_edges(block, body_.instructions[end], Op::CbzW, 9);
	}
	else
		conditional_edges(block, body_.instructions[end], bits == 32 ? Op::CbzW : Op::Cbz, 0);
	return end;
}

void Selector::call(const lowir::Instruction& inst)
{
	const auto& layout = calls_[call_indices_[&inst - body_.instructions.data()]];
	const auto simd_transfer = [&](bool store) {
		for (unsigned mask = layout.saved_simd; mask; mask &= mask - 1)
		{
			const unsigned reg = __builtin_ctz(mask);
			fp_stack_access(store, reg, simd_call_spills_[reg], false);
		}
	};
	simd_transfer(true);
	for (unsigned mask = layout.saved_args; mask; mask &= mask - 1)
	{
		const unsigned reg = __builtin_ctz(mask);
		access(true, reg, frame_base(), argument_spills_[reg], 8);
	}
	emit_call(inst, layout);
	if (layout.tail)
		return;
	simd_transfer(false);
	for (unsigned mask = layout.saved_args; mask; mask &= mask - 1)
	{
		const unsigned reg = __builtin_ctz(mask);
		access(false, reg, frame_base(), argument_spills_[reg], 8);
	}
}

void Selector::emit_call(const lowir::Instruction& inst, const CallLayout& layout, bool projected)
{
	if (layout.parallel)
		pass_parallel(inst, layout);
	else
		for (uint32_t i = 0; i < layout.args.size(); ++i)
			pass(layout.args[i], body_.operands[inst.extra_first + i], layout.types[i], layout.copies[i]);
	if (layout.tail)
	{
		if (inst.sub == lowir::kTailCall)
		{
			move(17, operand_register(inst.ops[0], program_.pointer_type(), 17));
			finish(kNoId, 17);
		}
		else
			finish(inst.ops[0].index);
		return;
	}
	const Argument ret = classify(inst.type, program_.call_boundary(inst)->boundary.result_shape);
	if (ret.indirect)
		home_address(8, inst.result);
	if (inst.ops[0].kind == ValueKind::Symbol)
		out_.reference(Op::Bl, Fixup::Call, inst.ops[0].index);
	else
	{
		out_.emit(Op::Blr, 0, operand_register(inst.ops[0], program_.pointer_type(), 10));
	}
	record_call(inst);
	if (projected || inst.result == kNoId || ret.indirect || (level_ && !uses_[inst.result]))
		return;
	if (inst.type.kind() == TypeKind::V128)
		save_vector(0, inst.result);
	else if (memory_value(inst.type))
	{
		const auto slot = call_result_slots_.empty() ? kNoId : call_result_slots_[inst.result];
		transfer(false, ret, slot == kNoId ? Value::temp(inst.result) : Value::slot(slot), inst.type);
	}
	else if (ret.bank == Bank::Simd)
		save_fp(0, inst.result);
	else
	{
		// A locally defined callee returns its canonical scalar in x0.
		// Darwin extends signed subwords for its external calling convention.
		const auto kind = inst.type.kind();
		bool normalized = false;
		if (level_ && inst.ops[0].is(ValueKind::Symbol) && inst.type.is_integer() && integer_bits(kind) <= 32 &&
			(!named_.darwin || is_unsigned(kind) || integer_bits(kind) == 32))
		{
			const auto& callee = program_.symbols[inst.ops[0].index];
			if (callee.kind == SymbolKind::FunctionDefinition && callee.metadata.binding == ir_model::SBM_INTERNAL)
				normalized = program_.signatures[program_.functions[callee.detail].signature].result == inst.type;
		}
		save(0, inst.result, normalized);
	}
}

bool Selector::load_returns_directly(const lowir::Instruction& load) const
{
	if (level_ < 3 || result_.indirect || !load.type.is_object() || load.op != Opcode::Load ||
		(load.flags & IF_VOLATILE) || load.next == kNoId || uses_[load.result] != 1)
		return false;
	const lowir::Instruction& ret = body_.instructions[load.next];
	return ret.op == Opcode::Return && ret.type == load.type && ret.ops[0] == Value::temp(load.result);
}

void Selector::epilogue(const lowir::Instruction& inst)
{
	const Type type = signature_.result;
	if (type.kind() == TypeKind::V128)
		vector_move(0, vector_value(inst.ops[0], 16));
	else if (type.kind() == TypeKind::I128)
		pair(inst.ops[0], 0, 1);
	else if (memory_value(type))
	{
		if (result_.indirect)
		{
			if (!inst.ops[0].is(ValueKind::Slot) || inst.ops[0].index != result_slot_)
			{
				result_address(10);
				copy_value(10, inst.ops[0], type);
			}
		}
		else if (inst.ops[0].is(ValueKind::Slot) && !object_words_.empty() && object_words_[inst.ops[0].index])
		{
			const unsigned first = object_words_[inst.ops[0].index];
			move(0, first);
			move(1, first + 1);
		}
		else
			transfer(true, result_, inst.ops[0], type);
	}
	else if (type.is_float())
		vector_move(0, fp_operand(inst.ops[0], type, 16));
	else if (type.kind() != TypeKind::Void)
	{
		value(0, inst.ops[0], type);
		if (named_.darwin && type.is_integer() && integer_bits(type.kind()) < 32)
			extend(0, integer_bits(type.kind()), !is_unsigned(type.kind()) && type.kind() != TypeKind::I1);
	}
	finish();
}

void Selector::finish(SymbolId tail, unsigned indirect)
{
	const auto first_event = static_cast<uint32_t>(out_.frame_events.size());
	if (frame_)
		out_.frame_rule(FrameRule::RememberState);
	if (dynamic_stack_)
	{
		out_.emit(Op::AddI, 31, 28);
		out_.frame_rule(FrameRule::Register, 31);
	}
	saved_registers(false);
	if (tls_vectors_ != kNoId)
	{
		base_address(16, 31, tls_vectors_);
		for (unsigned v = 0; v < 32; ++v)
			out_.emit(Op::LdrD, v, 16, 0, v << 10);
	}
	stack_adjust(false);
	if (indirect != 31)
		out_.emit(Op::Br, 0, indirect);
	else if (tail == kNoId)
		out_.emit(Op::Ret, 0, 30);
	else
		out_.reference(Op::B, Fixup::Jump, tail);
	if (frame_)
	{
		out_.frame_rule(FrameRule::RestoreState);
		frame_code_.epilogues.push_back({ first_event, static_cast<uint32_t>(out_.frame_events.size()) });
	}
}

} // namespace aarch64
