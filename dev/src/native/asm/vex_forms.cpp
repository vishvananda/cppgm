#include "native/asm/vex_forms.h"

#include "native/asm/operands.h"
#include "native/asm/evex_forms.h"
#include "native/asm/vector_operands.h"
#include "native/backend_error.h"
#include "x86_asm_model.h"

namespace native {
namespace {
using asm_detail::fail;
using asm_model::RegisterBank;
using assembly::Instruction;
using assembly::Operand;
using assembly::OperandKind;
using x86_asm_model::VexForm;
using L = x86_asm_model::VexLayout;

void emit(Assembler& out, const VexForm& form, unsigned bits, unsigned reg, unsigned source, const RM& operand,
	uint8_t opcode, bool has_immediate, uint8_t control)
{
	const bool r = (reg & 8) != 0;
	const bool x = !operand.is_reg && operand.index != kNoReg && (operand.index & 8) != 0;
	const bool b = operand.is_reg ? (operand.reg & 8) != 0 : operand.base != kNoReg && (operand.base & 8) != 0;
	const uint8_t payload = static_cast<uint8_t>(((~source & 15) << 3) | (bits == 256 ? 4 : 0) | form.pp);
	if (form.map == 1 && form.w == 0 && !x && !b)
	{
		out.byte(0xc5);
		out.byte(static_cast<uint8_t>((r ? 0 : 0x80) | payload));
	}
	else
	{
		out.byte(0xc4);
		out.byte(static_cast<uint8_t>((r ? 0 : 0x80) | (x ? 0 : 0x40) | (b ? 0 : 0x20) | form.map));
		out.byte(static_cast<uint8_t>((form.w << 7) | payload));
	}
	// VEX already supplies the extension bits. Reuse the existing ModRM/SIB,
	// displacement and fixup encoder with their low fields, emitting no REX.
	RM low = operand;
	if (low.is_reg)
		low.reg &= 7;
	else
	{
		if (low.base != kNoReg)
			low.base &= 7;
		if (low.index != kNoReg)
			low.index &= 7;
	}
	out.op(0, false, opcode, 1, reg & 7, low, false, has_immediate ? 1 : 0);
	if (has_immediate)
		out.byte(control);
}

void scalar_move(Assembler& out, const Instruction& inst)
{
	const unsigned bits = inst.mnemonic == "vmovd" ? 32 : 64;
	if (inst.prefix != 0 || inst.operands.size() != 2)
		fail(inst, "scalar move requires two operands including an XMM register");
	const auto& dst = inst.operands[0];
	const auto& src = inst.operands[1];
	const bool load = dst.kind == OperandKind::Register && dst.reg.bank == RegisterBank::Vector;
	const auto& reg = load ? dst : src;
	const auto& scalar = load ? src : dst;
	const bool integer = scalar.kind == OperandKind::Register && scalar.reg.bank == RegisterBank::Gpr;
	const bool memory = scalar.kind == OperandKind::Memory;
	const bool vector = scalar.kind == OperandKind::Register && scalar.reg.bank == RegisterBank::Vector &&
		scalar.bits == 128;
	if (reg.kind != OperandKind::Register || reg.reg.bank != RegisterBank::Vector || reg.bits != 128 ||
		!(integer        ? scalar.bits == bits
				: memory ? (scalar.bits == 0 || scalar.bits == bits)
						 : bits == 64 && vector))
		fail(inst, "invalid VEX scalar move operand width");
	const bool qword_vector = bits == 64 && !integer;
	const uint8_t opcode = qword_vector ? (load ? 0x7e : 0xd6) : (load ? 0x6e : 0x7e);
	const VexForm form = { nullptr, L::Move, opcode, 1, static_cast<uint8_t>(qword_vector && load ? 2 : 1),
		static_cast<uint8_t>(bits == 64 && integer), 0, 0, 0, 0 };
	emit(out, form, 128, asm_detail::physical(reg.reg, inst), 0, asm_detail::rm(scalar, inst), opcode, false, 0);
}

void rotate_immediate(Assembler& out, const Instruction& inst, unsigned suffix)
{
	if (inst.prefix != 0 || inst.operands.size() != 3 || inst.operands[0].kind != OperandKind::Register ||
		inst.operands[2].kind != OperandKind::Immediate ||
		!fits_operation(static_cast<int64_t>(inst.operands[2].immediate), 1))
		fail(inst, "rorx requires a register destination, an integer source and a byte count");
	const unsigned bits = asm_detail::integer_width(inst, suffix);
	if (bits != 32 && bits != 64)
		fail(inst, "rorx requires 32-bit or 64-bit operands");
	const VexForm form = { nullptr, L::Move, 0xf0, 3, 3, static_cast<uint8_t>(bits == 64), 0, 0, 0, 0 };
	emit(out, form, bits, asm_detail::physical(inst.operands[0].reg, inst), 0, asm_detail::rm(inst.operands[1], inst),
		form.opcode, true, inst.operands[2].immediate);
}

} // namespace

bool encode_bmi_form(Assembler& out, const Instruction& inst)
{
	const std::string& name = inst.mnemonic;
	if (name == "rorx" || name == "rorxl" || name == "rorxq")
	{
		rotate_immediate(out, inst, name.size() == 4 ? 0 : name.back() == 'q' ? 64 : 32);
		return true;
	}
	const uint8_t prefix = name.compare(0, 4, "shlx") == 0 ? 1
		: name.compare(0, 4, "sarx") == 0                  ? 2
		: name.compare(0, 4, "shrx") == 0                  ? 3
														   : 0;
	const bool andn = name.compare(0, 4, "andn") == 0;
	if ((!andn && prefix == 0) ||
		(name.size() != 4 && (name.size() != 5 || (name.back() != 'l' && name.back() != 'q'))))
		return false;
	const unsigned reg = andn ? 1 : 2;
	const unsigned other = andn ? 2 : 1;
	if (inst.prefix != 0 || inst.operands.size() != 3 || inst.operands[0].kind != OperandKind::Register ||
		inst.operands[reg].kind != OperandKind::Register)
		fail(inst, "BMI instruction requires a register destination, register source and register or memory source");
	const unsigned suffix = name.size() == 4 ? 0 : name.back() == 'q' ? 64 : 32;
	const unsigned bits = asm_detail::integer_width(inst, static_cast<uint16_t>(suffix));
	if (bits != 32 && bits != 64)
		fail(inst, "BMI instruction requires 32-bit or 64-bit operands");
	const uint8_t opcode = andn ? 0xf2 : 0xf7;
	const VexForm form = { nullptr, L::Move, opcode, 2, prefix, static_cast<uint8_t>(bits == 64), 0, 0, 0, 0 };
	emit(out, form, bits, asm_detail::physical(inst.operands[0].reg, inst),
		asm_detail::physical(inst.operands[reg].reg, inst), asm_detail::rm(inst.operands[other], inst), form.opcode,
		false, 0);
	return true;
}

void encode_vex_plan(Assembler& out, const x86_asm_model::VexForm& form, const VectorEncodingPlan& plan)
{
	emit(out, form, plan.bits, plan.reg, plan.source, plan.other, plan.opcode, plan.has_immediate, plan.control);
}
void encode_assembly_vector_transfer(
	Assembler& out, const asm_model::Register& reg, const RM& memory, bool store, unsigned bytes)
{
	if (reg.bits == 512 || reg.number >= 16)
	{
		encode_evex_vector_transfer(out, reg, memory, store, bytes);
		return;
	}
	if (reg.bank != RegisterBank::Vector || reg.number >= 16 || (reg.bits != 128 && reg.bits != 256) ||
		reg.offset != 0 || memory.is_reg)
		throw BackendError("invalid assembly vector transfer");
	const bool scalar = bytes < 16;
	const VexForm form = { "transfer", L::Move, static_cast<uint8_t>(scalar ? 0x10 : 0x6f), 1,
		static_cast<uint8_t>(bytes == 8 ? 3 : 2), 0, 3, 0, 0, 0 };
	emit(out, form, reg.bits, reg.number, 0, memory,
		static_cast<uint8_t>(scalar ? (store ? 0x11 : 0x10) : (store ? 0x7f : 0x6f)), false, 0);
}

bool encode_vex_form(Assembler& out, const assembly::Instruction& inst)
{
	if (inst.mnemonic == "vmovd" || inst.mnemonic == "vmovq")
	{
		scalar_move(out, inst);
		return true;
	}
	if (inst.mnemonic == "vzeroupper" || inst.mnemonic == "vzeroall")
	{
		if (!inst.operands.empty() || inst.prefix != 0)
			fail(inst, "VEX zero operation takes no operands or prefixes");
		out.byte(0xc5);
		out.byte(inst.mnemonic == "vzeroupper" ? 0xf8 : 0xfc);
		out.byte(0x77);
		return true;
	}
	size_t count = 0;
	const VexForm* forms = x86_asm_model::vex_forms(count);
	for (unsigned family = 0; family < 2; ++family)
	{
		for (size_t i = 0; i < count; ++i)
			if (inst.mnemonic == forms[i].mnemonic)
			{
				if (inst.prefix != 0)
					fail(inst, "legacy instruction prefix is invalid before VEX");
				const auto plan = prepare_vector_encoding(inst, forms[i]);
				emit(out, forms[i], plan.bits, plan.reg, plan.source, plan.other, plan.opcode, plan.has_immediate,
					plan.control);
				return true;
			}
		forms = x86_asm_model::vex_fma_forms(count);
	}
	return false;
}
} // namespace native
