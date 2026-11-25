#include "native/asm/control_forms.h"

#include "native/asm/operands.h"

namespace native {
namespace {
using asm_detail::fail;
using asm_detail::rm;
using assembly::OperandKind;
}

namespace {

unsigned stack_bits(const assembly::Instruction& inst)
{
	return inst.code16gcc ? 32 : inst.code_bits;
}

bool legacy_width(const assembly::Instruction& inst, unsigned bits)
{
	return inst.code_bits != 64 && (bits == 16 || bits == 32);
}

void segment_stack(Assembler& out, const assembly::Instruction& inst, uint8_t prefix, unsigned reg, bool push)
{
	if (reg >= 6 || (!push && reg == 1) || (inst.code_bits == 64 && reg < 4))
		fail(inst, "segment is unavailable in this stack instruction");
	if (prefix != 0)
		out.byte(prefix);
	if (reg >= 4)
		out.byte(0x0f);
	out.byte((reg < 4 ? 0x06 + 8 * reg : 0xa0 + 8 * (reg - 4)) + !push);
}

void return_form(Assembler& out, const assembly::Instruction& inst, unsigned opcode, unsigned suffix)
{
	const bool far = opcode == 0xcb;
	const unsigned bits = suffix != 0 ? suffix : far && inst.code_bits == 64 ? 32 : stack_bits(inst);
	if (bits != inst.code_bits && !legacy_width(inst, bits) && !(far && (bits == 16 || bits == 32)))
		fail(inst, "return width is invalid for the current assembly mode");
	if (const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits))
		out.byte(prefix);
	else if (far && bits == 64)
		out.byte(0x48);
	if (inst.operands.empty())
		out.byte(opcode);
	else if (inst.operands.size() == 1 && inst.operands[0].kind == OperandKind::Immediate &&
		inst.operands[0].immediate <= UINT16_MAX)
	{
		out.byte(opcode - 1);
		out.imm(inst.operands[0].immediate, 2);
	}
	else
		fail(inst, "ret expects no operand or an unsigned 16-bit immediate");
}
void x87_word(Assembler& out, const assembly::Instruction& inst, const asm_detail::Form& form)
{
	if (inst.operands.size() != 1)
		fail(inst, "x87 word store requires one operand");
	const auto& dst = inst.operands[0];
	const bool memory = dst.kind == OperandKind::Memory && (dst.bits == 0 || dst.bits == 16);
	const bool accumulator = !form.memory_only && dst.kind == OperandKind::Register &&
		dst.reg.bank == asm_model::RegisterBank::Gpr && dst.reg.number == 0 && dst.bits == 16;
	if (!memory && !accumulator)
		fail(inst, "x87 word store requires 16-bit memory or an allowed AX destination");
	if (form.prefix != 0)
		out.byte(form.prefix);
	if (memory)
		out.op(0, false, form.opcode, 1, 7, rm(dst, inst));
	else
	{
		out.byte(0xdf);
		out.byte(0xe0);
	}
}

} // namespace

void encode_control_form(
	Assembler& out, const assembly::Instruction& inst, const asm_detail::Form& form, unsigned suffix)
{
	if (inst.prefix != 0)
		fail(inst, "invalid stack-control prefix");
	if (form.opcode == 0xc3 || form.opcode == 0xcb)
		return return_form(out, inst, form.opcode, suffix);
	if (inst.operands.size() != 1)
		fail(inst, "push/pop expects one operand");
	const assembly::Operand& operand = inst.operands[0];
	const unsigned bits = suffix != 0 ? suffix : operand.bits != 0 ? operand.bits : stack_bits(inst);
	if ((bits != 16 && bits != inst.code_bits && !legacy_width(inst, bits)) ||
		(operand.bits != 0 && operand.bits != bits))
		fail(inst, "push/pop width is invalid for the current assembly mode");
	const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits);
	if (operand.kind == OperandKind::Symbol && form.opcode == 0x50 &&
		operand.address.relocation == assembly::Relocation::Address)
	{
		if (prefix != 0)
			out.byte(prefix);
		out.byte(0x68);
		out.symbol_immediate(operand.address.symbol.symbol, operand.address.displacement, bits == 16 ? 2 : 4,
			bits == 64, operand.address.subtrahend);
	}
	else if (operand.kind == OperandKind::Register)
	{
		if (operand.reg.bank == asm_model::RegisterBank::Segment)
			return segment_stack(out, inst, prefix, operand.reg.number, form.opcode == 0x50);
		if (operand.reg.bank != asm_model::RegisterBank::Gpr)
			fail(inst, "push/pop requires a general-purpose register");
		out.op_plus(prefix, false, form.opcode, asm_detail::physical(operand.reg, inst));
	}
	else if (operand.kind == OperandKind::Memory)
		out.op(prefix, false, form.opcode == 0x50 ? 0xff : 0x8f, 1, form.opcode == 0x50 ? 6 : 0, rm(operand, inst));
	else if (operand.kind == OperandKind::Immediate && form.opcode == 0x50)
	{
		const int64_t value = static_cast<int64_t>(operand.immediate);
		if (!fits_operation(value, bits / 8))
			fail(inst, "push immediate exceeds its signed encoding");
		if (prefix != 0)
			out.byte(prefix);
		const bool small = fits_i8(value);
		out.byte(small ? 0x6a : 0x68);
		out.imm(value, small ? 1 : bits == 16 ? 2 : 4);
	}
	else
		fail(inst, "invalid push/pop operand");
}

bool encode_system_register_move(Assembler& out, const assembly::Instruction& inst, unsigned suffix)
{
	using asm_model::RegisterBank;
	const auto is_system_register = [](const assembly::Operand& operand) {
		return operand.kind == OperandKind::Register &&
			(operand.reg.bank == RegisterBank::Segment || operand.reg.bank == RegisterBank::Control ||
				operand.reg.bank == RegisterBank::Debug);
	};
	const auto& dst = inst.operands[0];
	const auto& src = inst.operands[1];
	const bool write = is_system_register(dst);
	if (!write && !is_system_register(src))
		return false;
	const auto& special = write ? dst : src;
	const auto& ordinary = write ? src : dst;
	if (inst.prefix != 0 || is_system_register(ordinary))
		fail(inst, "invalid system-register move");
	if (special.reg.bank == RegisterBank::Segment)
	{
		const bool gp = ordinary.kind == OperandKind::Register && ordinary.reg.bank == RegisterBank::Gpr &&
			(ordinary.reg.bits == 16 || ordinary.reg.bits == 32 || ordinary.reg.bits == 64);
		const bool memory = ordinary.kind == OperandKind::Memory && (suffix == 0 || suffix == 16);
		if ((!gp && !memory) || (gp && suffix != 0 && suffix != ordinary.reg.bits) ||
			(write && special.reg.number == 1))
			fail(inst, "invalid segment-register move");
		const unsigned prefix = !write && gp ? asm_detail::operand_size_prefix(inst, ordinary.reg.bits) : 0;
		out.op(prefix, false, write ? 0x8e : 0x8c, 1, special.reg.number, rm(ordinary, inst));
		return true;
	}
	const unsigned register_bits = inst.code_bits == 64 ? 64 : 32;
	if (ordinary.kind != OperandKind::Register || ordinary.reg.bank != RegisterBank::Gpr ||
		ordinary.reg.bits != register_bits || (suffix != 0 && suffix != register_bits))
		fail(inst, "control and debug moves require a general register of the current mode's width");
	const uint32_t opcode = 0x0f20 + (special.reg.bank == RegisterBank::Debug ? 1 : 0) + (write ? 2 : 0);
	out.op(0, false, opcode, 2, special.reg.number, rm(ordinary, inst));
	return true;
}

namespace {

void segment_selector(Assembler& out, const assembly::Instruction& inst, const asm_detail::Form& form, unsigned suffix)
{
	using asm_model::RegisterBank;
	using x86_asm_model::Encoding;
	const bool query = form.encoding == Encoding::DescriptorQuery;
	if (inst.operands.size() != (query ? 2u : 1u))
		fail(inst, "incorrect selector operand count");
	const assembly::Operand& source = inst.operands.back();
	const unsigned source_bits = source.bits;
	if (source.kind == OperandKind::Register
			? source.reg.bank != RegisterBank::Gpr || (source_bits != 16 && source_bits != 32 && source_bits != 64)
			: source.kind != OperandKind::Memory || (source_bits != 0 && source_bits != 16))
		fail(inst, "invalid selector register or memory width");
	const auto& first = inst.operands[0];
	const unsigned bits = suffix != 0 ? suffix : first.bits != 0 ? first.bits : 16;
	if (bits != 16 && bits != 32 && bits != 64)
		fail(inst, "invalid selector instruction width");
	if (query)
	{
		if (first.kind != OperandKind::Register || first.reg.bank != RegisterBank::Gpr || first.bits != bits)
			fail(inst, "selector query requires a general register destination");
		out.op(bits == 16 ? 0x66 : 0, false, form.opcode, 2, asm_detail::physical(first.reg, inst), rm(source, inst));
	}
	else
	{
		if ((form.bits != 0 && bits != form.bits) || (source_bits != 0 && source_bits != bits))
			fail(inst, "invalid selector instruction width");
		const unsigned prefix = form.bits == 0 && source.kind == OperandKind::Register && bits == 16 ? 0x66 : 0;
		out.op(prefix, false, form.opcode >> 8, 2, form.opcode & 255, rm(source, inst));
	}
}

} // namespace

void encode_system_form(
	Assembler& out, const assembly::Instruction& inst, const asm_detail::Form& form, unsigned suffix)
{
	using E = asm_detail::Encoding;
	if (inst.prefix != 0)
		fail(inst, "invalid system instruction prefix");
	if (form.encoding == E::SystemWord || form.encoding == E::DescriptorQuery)
		return segment_selector(out, inst, form, suffix);
	if (form.encoding == E::X87Word)
		return x87_word(out, inst, form);
	if (form.encoding == E::X87StackPop)
	{
		const auto& operands = inst.operands;
		if (operands.size() != 2 || operands[0].kind != OperandKind::Register ||
			operands[1].kind != OperandKind::Register || operands[0].reg.bank != asm_model::RegisterBank::X87 ||
			operands[1].reg.bank != asm_model::RegisterBank::X87 || operands[1].reg.number != 0)
			fail(inst, "x87 subtract/pop requires an x87 stack destination and ST(0) source");
		const unsigned opcode = form.opcode ^ (inst.dialect == asm_model::Dialect::Intel ? 8 : 0);
		out.byte(0xde);
		out.byte(opcode | operands[0].reg.number);
		return;
	}
	if (form.encoding == E::SystemRegister)
	{
		if (inst.operands.size() != 1 || inst.operands[0].kind != OperandKind::Register)
			fail(inst, "system instruction requires a general register");
		const unsigned required = form.bits == 64 && inst.code_bits != 64 ? 32 : form.bits;
		const unsigned bits = asm_detail::integer_width(inst, suffix != 0 ? suffix : required);
		if ((required != 0 && bits != required) || (bits != 32 && bits != 64 && (bits != 16 || form.prefix != 0)))
			fail(inst, "invalid system instruction register width");
		out.op(bits == 16 ? 0x66 : form.prefix, form.bits == 0 && bits == 64, form.opcode >> 8, 2, form.opcode & 255,
			rm(inst.operands[0], inst));
		return;
	}
	if (form.encoding == E::InvalidateContext)
	{
		if (inst.operands.size() != 2 || inst.operands[0].kind != OperandKind::Register ||
			inst.operands[0].reg.bank != asm_model::RegisterBank::Gpr || inst.operands[0].bits != inst.code_bits ||
			inst.operands[1].kind != OperandKind::Memory ||
			(inst.operands[1].bits != 0 && inst.operands[1].bits != 128))
			fail(inst, "context invalidation requires a mode-width general register and 128-bit memory");
		out.op(form.prefix, false, form.opcode, 3, asm_detail::physical(inst.operands[0].reg, inst),
			rm(inst.operands[1], inst));
		return;
	}
	if (form.encoding == E::ControlMemory)
	{
		if (inst.operands.size() != 1 || inst.operands[0].kind != OperandKind::Memory)
			fail(inst, "expected one memory operand");
		if (suffix != 0 && suffix != inst.code_bits && !legacy_width(inst, suffix))
			fail(inst, "descriptor operand width is unavailable in this code mode");
		const uint32_t opcode = form.opcode >> 8;
		const uint8_t prefix = asm_detail::operand_size_prefix(inst, suffix);
		out.op(prefix == 0 ? form.prefix : prefix, form.bits == 64, opcode, opcode <= 255 ? 1 : 2, form.opcode & 255,
			rm(inst.operands[0], inst));
		return;
	}
	if (form.encoding == E::NonTemporalStore)
	{
		if (inst.operands.size() != 2 || inst.operands[0].kind != OperandKind::Memory ||
			inst.operands[1].kind != OperandKind::Register)
			fail(inst, "non-temporal integer store requires a register and a memory operand");
		const unsigned bits = asm_detail::integer_width(inst, suffix);
		if (bits != 32 && bits != 64)
			fail(inst, "non-temporal integer store requires a 32-bit or 64-bit operand");
		out.op(0, bits == 64, form.opcode, 2, asm_detail::physical(inst.operands[1].reg, inst),
			rm(inst.operands[0], inst));
		return;
	}
	if (inst.operands.size() != 2)
		fail(inst, "port I/O requires an accumulator and a port");
	const bool write = form.opcode == 0xe6;
	const auto& accumulator = inst.operands[write ? 1 : 0];
	const auto& port = inst.operands[write ? 0 : 1];
	const unsigned bits = suffix != 0 ? suffix : accumulator.reg.bits;
	if (accumulator.kind != OperandKind::Register || accumulator.reg.bank != asm_model::RegisterBank::Gpr ||
		accumulator.reg.number != 0 || accumulator.reg.offset != 0 || accumulator.reg.bits != bits ||
		(bits != 8 && bits != 16 && bits != 32))
		fail(inst, "port I/O requires AL, AX or EAX");
	const bool immediate = port.kind == OperandKind::Immediate && port.immediate <= 255;
	if (!immediate &&
		(port.kind != OperandKind::Register || port.reg.bank != asm_model::RegisterBank::Gpr || port.reg.number != 2 ||
			port.reg.bits != 16 || port.reg.offset != 0))
		fail(inst, "port I/O requires DX or an unsigned byte port");
	if (const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits))
		out.byte(prefix);
	out.byte(form.opcode + (immediate ? 0 : 8) + (bits != 8));
	if (immediate)
		out.byte(port.immediate);
}

void encode_far_branch(Assembler& out, const assembly::Instruction& inst, const asm_detail::Form& form, unsigned suffix)
{
	const unsigned bits = suffix != 0 ? suffix : inst.code_bits == 16 ? 16 : 32;
	if (inst.prefix != 0 || (bits != 16 && bits != 32 && (bits != 64 || inst.code_bits != 64)))
		fail(inst, "invalid far branch width or prefix");
	const bool call = form.opcode == 0x9a;
	if (inst.operands.size() == 1 && inst.operands[0].kind == OperandKind::Memory)
	{
		out.op(
			asm_detail::operand_size_prefix(inst, bits), bits == 64, 0xff, 1, call ? 3 : 5, rm(inst.operands[0], inst));
		return;
	}
	if (inst.code_bits == 64 || inst.operands.size() != 2 || inst.operands[1].kind != OperandKind::Immediate ||
		inst.operands[1].immediate > UINT16_MAX)
		fail(inst, "far branch requires a memory pointer, or a segment and offset in legacy code");
	const auto& address = inst.operands[0];
	if (const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits))
		out.byte(prefix);
	out.byte(form.opcode);
	if (address.kind == OperandKind::Symbol && address.address.relocation == assembly::Relocation::Address)
		out.symbol_immediate(
			address.address.symbol.symbol, address.address.displacement, bits / 8, false, address.address.subtrahend);
	else if (address.kind == OperandKind::Immediate &&
		fits_operation(static_cast<int64_t>(address.immediate), bits / 8))
		out.imm(address.immediate, bits / 8);
	else
		fail(inst, "invalid far branch offset");
	out.imm(inst.operands[1].immediate, 2);
}

bool encode_assembly_branch(Assembler& out, const assembly::Instruction& inst, const std::vector<uint32_t>& labels)
{
	const int condition = asm_detail::branch_condition(inst.mnemonic);
	const bool call = inst.mnemonic == "call" || inst.mnemonic == "callq" || inst.mnemonic == "calll" ||
		inst.mnemonic == "callw";
	const bool jump = inst.mnemonic == "jmp" || inst.mnemonic == "jmpq" || inst.mnemonic == "jmpl" ||
		inst.mnemonic == "jmpw";
	const unsigned loop = inst.mnemonic == "loop"                ? 0xe2
		: inst.mnemonic == "loope" || inst.mnemonic == "loopz"   ? 0xe1
		: inst.mnemonic == "loopne" || inst.mnemonic == "loopnz" ? 0xe0
																 : 0;
	if (!call && !jump && condition < 0 && loop == 0)
		return false;
	if (inst.prefix != 0 || inst.operands.size() != 1)
		fail(inst, "expected one branch target matching the code mode");
	const assembly::Operand& target = inst.operands[0];
	const bool indirect = target.kind == OperandKind::Register || target.kind == OperandKind::Memory;
	unsigned bits = call ? stack_bits(inst) : inst.code_bits;
	if ((call && inst.mnemonic.size() == 5) || (jump && inst.mnemonic.size() == 4))
		bits = inst.mnemonic.back() == 'q' ? 64 : inst.mnemonic.back() == 'l' ? 32 : 16;
	else if (indirect && target.bits != 0)
		bits = target.bits;
	if ((bits != inst.code_bits && !legacy_width(inst, bits)) || (indirect && target.bits != 0 && target.bits != bits))
		fail(inst, "branch target width does not match the code mode");
	if (loop != 0)
	{
		if (target.kind != OperandKind::Label)
			fail(inst, "loop requires a local label within its signed byte displacement");
		out.branch_short(loop, labels[target.label]);
		return true;
	}
	const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits);
	if (indirect)
	{
		if (condition >= 0)
			fail(inst, "conditional branch requires a direct label or symbol");
		out.op(prefix, false, 0xff, 1, call ? 2 : 4, rm(target, inst));
		return true;
	}
	if (prefix != 0)
		out.byte(prefix);
	if (condition >= 0)
		out.byte(0x0f);
	out.byte(condition >= 0 ? 0x80 + condition : call ? 0xe8 : 0xe9);
	const uint8_t bytes = bits == 16 ? 2 : 4;
	if (target.kind == OperandKind::Label)
		out.relative_label(labels[target.label], bytes);
	else if (target.kind == OperandKind::Symbol &&
		(target.address.relocation == assembly::Relocation::Address ||
			target.address.relocation == assembly::Relocation::Plt))
	{
		if (target.address.subtrahend != asm_model::kNoId)
			fail(inst, "direct branch does not support a symbol difference");
		out.relative_symbol(target.address.symbol.symbol, bytes);
		out.fixups().back().addend = target.address.displacement;
	}
	else
		fail(inst, "invalid direct or indirect branch target");
	return true;
}
} // namespace native
