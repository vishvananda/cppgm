#include "native/asm/encoding.h"

#include "native/asm/forms.h"
#include "native/asm/control_forms.h"
#include "native/asm/bit_forms.h"
#include "native/asm/extend_forms.h"
#include "native/asm/integer_forms.h"
#include "native/asm/operands.h"
#include "native/asm/vex_forms.h"
#include "native/asm/evex_forms.h"
#include "native/asm/mask_forms.h"
#include "native/backend_error.h"

namespace native {
namespace {

using asm_detail::Encoding;
using asm_detail::Form;
using asm_model::RegisterBank;
using assembly::Operand;
using assembly::OperandKind;

using asm_detail::byte_rex;
using asm_detail::fail;
using asm_detail::integer_width;
using asm_detail::physical;
using asm_detail::rm;

void symbol_immediate(Assembler& out, const assembly::Instruction& inst, const Form& form, unsigned bits)
{
	const Operand& dst = inst.operands[0];
	const Operand& src = inst.operands[1];
	if (src.address.relocation != assembly::Relocation::Address ||
		(form.encoding != Encoding::Move && form.encoding != Encoding::Alu))
		fail(inst, "this instruction cannot encode a symbol immediate");
	const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits);
	const bool wide = bits == 64;
	const bool byte_regs = bits == 8 && byte_rex(inst);
	unsigned bytes = wide ? 4 : bits / 8;
	if (form.encoding == Encoding::Move && dst.kind == OperandKind::Register)
	{
		const Reg reg = physical(dst.reg, inst);
		if (byte_regs && reg >= 4 && reg < 8)
			out.byte(0x40);
		out.op_plus(prefix, wide, bits == 8 ? 0xb0 : 0xb8, reg);
		bytes = bits / 8;
	}
	else
	{
		const bool move = form.encoding == Encoding::Move;
		const uint8_t opcode = (move ? 0xc6 : 0x80) + (bits != 8);
		out.op(prefix, wide, opcode, 1, move ? 0 : form.opcode, rm(dst, inst), byte_regs, bytes);
	}
	out.symbol_immediate(
		src.address.symbol.symbol, src.address.displacement, bytes, wide && bytes == 4, src.address.subtrahend);
}

void integer(Assembler& out, const assembly::Instruction& inst, const Form& form, uint16_t suffix)
{
	if (inst.operands.size() != 2)
		fail(inst, "expected two operands");
	const Operand& dst = inst.operands[0];
	const Operand& src = inst.operands[1];
	if (form.encoding == Encoding::Move && encode_system_register_move(out, inst, suffix))
		return;
	const unsigned bits = integer_width(inst, suffix);
	if (form.bits != 0 &&
		(bits != form.bits || dst.kind != OperandKind::Register ||
			(src.kind != OperandKind::Immediate && src.kind != OperandKind::Symbol)))
		fail(inst, "this absolute move form requires a 64-bit register and immediate");
	const unsigned bytes = bits / 8;
	const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits);
	const bool byte_regs = bits == 8 && byte_rex(inst);
	const bool wide = bits == 64;
	if ((dst.kind != OperandKind::Register && dst.kind != OperandKind::Memory) ||
		(dst.kind == OperandKind::Memory && src.kind == OperandKind::Memory))
		fail(inst, "invalid integer destination or two memory operands");
	if (src.kind == OperandKind::Symbol)
		return symbol_immediate(out, inst, form, bits);
	if (form.encoding == Encoding::Move)
	{
		if (src.kind == OperandKind::Immediate)
		{
			const int64_t value = static_cast<int64_t>(src.immediate);
			if (dst.kind == OperandKind::Register)
			{
				if (bits != 64 && !fits_operation(value, bytes))
					fail(inst, "immediate exceeds the destination width");
				const Reg reg = physical(dst.reg, inst);
				if (wide && form.bits == 0 && fits_i32(value))
				{
					out.op(0, true, 0xc7, 1, 0, RM::r(reg), false, 4);
					out.imm(value, 4);
					return;
				}
				// Byte B0+r needs the same low-byte REX rule as ModRM.
				if (byte_regs && reg >= 4 && reg < 8)
					out.byte(0x40);
				out.op_plus(prefix, wide, bits == 8 ? 0xb0 : 0xb8, reg);
				out.imm(value, bytes);
			}
			else
			{
				if (!fits_operation(value, bytes))
					fail(inst, "immediate exceeds the memory form's encoding");
				const unsigned immediate = bits == 64 ? 4 : bytes;
				out.op(prefix, wide, bits == 8 ? 0xc6 : 0xc7, 1, 0, rm(dst, inst), false, immediate);
				out.imm(value, immediate);
			}
		}
		else if (dst.kind == OperandKind::Register && src.kind != OperandKind::Register)
			out.op(prefix, wide, bits == 8 ? 0x8a : 0x8b, 1, physical(dst.reg, inst), rm(src, inst), byte_regs);
		else
			out.op(prefix, wide, bits == 8 ? 0x88 : 0x89, 1, physical(src.reg, inst), rm(dst, inst), byte_regs);
	}
	else if (form.encoding == Encoding::Lea)
	{
		if (bits == 8 || dst.kind != OperandKind::Register || src.kind != OperandKind::Memory)
			fail(inst, "lea requires a non-byte register and memory address");
		out.op(prefix, wide, 0x8d, 1, physical(dst.reg, inst), rm(src, inst));
	}
	else if (form.encoding == Encoding::Exchange)
	{
		if (src.kind == OperandKind::Immediate ||
			(dst.kind != OperandKind::Register && src.kind != OperandKind::Register))
			fail(inst, "xchg requires a register operand");
		const bool dst_reg = dst.kind == OperandKind::Register;
		out.op(prefix, wide, bits == 8 ? 0x86 : 0x87, 1, physical(dst_reg ? dst.reg : src.reg, inst),
			rm(dst_reg ? src : dst, inst), byte_regs);
	}
	else
	{
		const unsigned digit = form.opcode;
		if (src.kind == OperandKind::Immediate)
		{
			const int64_t value = static_cast<int64_t>(src.immediate);
			const bool bitwise = digit == 1 || digit == 4 || digit == 6;
			const bool extended_mask = bits < 64 && bitwise && (src.immediate >> bits) == (UINT64_MAX >> bits);
			if (!fits_operation(value, bytes) && !extended_mask)
				fail(inst, "ALU immediate exceeds the instruction encoding");
			const bool small = bits != 8 && fits_i8(value);
			const unsigned immediate = small || bits == 8 ? 1 : bits == 64 ? 4 : bytes;
			out.op(prefix, wide, bits == 8 ? 0x80 : small ? 0x83 : 0x81, 1, digit, rm(dst, inst), byte_regs, immediate);
			out.imm(value, immediate);
		}
		else if (dst.kind == OperandKind::Register)
			out.op(prefix, wide, digit * 8 + (bits == 8 ? 2 : 3), 1, physical(dst.reg, inst), rm(src, inst), byte_regs);
		else
			out.op(prefix, wide, digit * 8 + (bits == 8 ? 0 : 1), 1, physical(src.reg, inst), rm(dst, inst), byte_regs);
	}
}

void vector_immediate(Assembler& out, const assembly::Instruction& inst, const Form& form)
{
	if (inst.prefix != 0 || inst.operands.size() != 3)
		fail(inst, "expected a vector register, register or memory operand, and lane index");
	const bool extract = form.encoding == Encoding::VectorExtractImmediate;
	const auto& reg = inst.operands[extract ? 1 : 0];
	const auto& other = inst.operands[extract ? 0 : 1];
	const auto& lane = inst.operands[2];
	if (reg.kind != OperandKind::Register || reg.reg.bank != RegisterBank::Vector || reg.bits != 128 ||
		(other.kind == OperandKind::Register
				? other.reg.bank != (form.bits == 128 ? RegisterBank::Vector : RegisterBank::Gpr) ||
					other.bits != form.bits
				: other.kind != OperandKind::Memory || (other.bits != 0 && other.bits != form.bits)) ||
		lane.kind != OperandKind::Immediate || !fits_operation(static_cast<int64_t>(lane.immediate), 1))
		fail(inst, "invalid immediate-control vector instruction");
	out.op(form.prefix, form.bits == 64, form.opcode, form.opcode > UINT16_MAX ? 3 : 2, physical(reg.reg, inst),
		rm(other, inst), false, 1);
	out.byte(lane.immediate);
}

bool xmm(const Operand& operand)
{
	return operand.kind == OperandKind::Register && operand.reg.bank == RegisterBank::Vector && operand.bits == 128;
}

void packed_shift(Assembler& out, const assembly::Instruction& inst, const Form& form)
{
	if (inst.prefix != 0 || inst.operands.size() != 2 || !xmm(inst.operands[0]))
		fail(inst, "packed shift requires an XMM destination and a count");
	const auto& dst = inst.operands[0];
	const auto& count = inst.operands[1];
	if (count.kind == OperandKind::Immediate)
	{
		if (!fits_operation(static_cast<int64_t>(count.immediate), 1))
			fail(inst, "packed shift count exceeds one byte");
		out.op(form.prefix, false, 0x0f00 | (form.opcode >> 16), 2, form.opcode & 255, rm(dst, inst), false, 1);
		out.byte(count.immediate);
	}
	else
	{
		if ((form.opcode & 0xff00) == 0)
			fail(inst, "this packed shift requires an immediate count");
		if (!xmm(count) && (count.kind != OperandKind::Memory || (count.bits != 0 && count.bits != 128)))
			fail(inst, "packed shift count requires an XMM register, memory or an immediate");
		out.op(form.prefix, false, 0x0f00 | ((form.opcode >> 8) & 255), 2, physical(dst.reg, inst), rm(count, inst));
	}
}

void scalar_vector_move(Assembler& out, const assembly::Instruction& inst, unsigned bits)
{
	if (inst.prefix != 0 || inst.operands.size() != 2 || (bits != 32 && bits != 64))
		fail(inst, "invalid scalar/vector move");
	const auto& dst = inst.operands[0];
	const auto& src = inst.operands[1];
	const bool to_vector = xmm(dst);
	const auto& reg = to_vector ? dst : src;
	const auto& other = to_vector ? src : dst;
	if (!xmm(reg))
		fail(inst, "scalar/vector move requires an XMM register");
	unsigned prefix = 0x66;
	unsigned opcode = to_vector ? 0x0f6e : 0x0f7e;
	bool rex_w = bits == 64;
	if (other.kind == OperandKind::Register && other.reg.bank == RegisterBank::Gpr)
	{
		if (other.bits != bits)
			fail(inst, "scalar/vector register move has the wrong integer width");
	}
	else
	{
		if (!(other.kind == OperandKind::Memory && (other.bits == 0 || other.bits == bits)) &&
			!(bits == 64 && xmm(other)))
			fail(inst, "invalid source or destination for scalar/vector move");
		if (bits == 64)
		{
			prefix = to_vector ? 0xf3 : 0x66;
			opcode = to_vector ? 0x0f7e : 0x0fd6;
			rex_w = false;
		}
	}
	out.op(prefix, rex_w, opcode, 2, physical(reg.reg, inst), rm(other, inst));
}

void vector(Assembler& out, const assembly::Instruction& inst, const Form& form)
{
	const bool explicit_xmm0 = (form.opcode == 0x0f38cb || form.opcode == 0x0f3810) && inst.operands.size() == 3 &&
		xmm(inst.operands[2]) && inst.operands[2].reg.number == 0;
	if (inst.operands.size() != 2 && !explicit_xmm0)
		fail(inst, "expected two vector operands");
	const Operand& dst = inst.operands[0];
	const Operand& src = inst.operands[1];
	bool store = form.encoding == Encoding::VectorMR;
	uint32_t opcode = form.opcode;
	if (!store && dst.kind == OperandKind::Memory && (opcode == 0x0f28 || opcode == 0x0f10 || opcode == 0x0f6f))
	{
		store = true;
		opcode += opcode == 0x0f6f ? 0x10 : 1;
	}
	const Operand& reg = store ? src : dst;
	const Operand& other = store ? dst : src;
	if (reg.kind != OperandKind::Register || reg.reg.bank != RegisterBank::Vector || reg.bits != 128 ||
		other.kind == OperandKind::Immediate || (form.memory_only && other.kind != OperandKind::Memory) ||
		(other.kind == OperandKind::Register && (other.reg.bank != RegisterBank::Vector || other.bits != 128)) ||
		(other.kind == OperandKind::Memory && other.bits != 0 && other.bits != form.bits))
		fail(inst, "invalid vector register or memory form");
	out.op(form.prefix, false, opcode, opcode > UINT16_MAX ? 3 : 2, physical(reg.reg, inst), rm(other, inst));
}

} // namespace

void integer_system_binary(Assembler& out, const assembly::Instruction& inst, const Form& form)
{
	if (inst.prefix != 0 || inst.operands.size() != 2 || inst.operands[0].kind != OperandKind::Register ||
		inst.operands[0].reg.bank != RegisterBank::Gpr)
		fail(inst, "expected a general register and a register or memory operand");
	const auto& dst = inst.operands[0];
	const auto& src = inst.operands[1];
	if (form.encoding == Encoding::UndefinedOperands)
	{
		const unsigned bits = integer_width(inst, 0);
		if (bits == 8)
			fail(inst, "undefined instruction requires a word operand");
		out.op(asm_detail::operand_size_prefix(inst, bits), bits == 64, form.opcode, 2, physical(dst.reg, inst),
			rm(src, inst));
		return;
	}
	const unsigned bits = form.bits != 0 ? form.bits : src.bits != 0 ? src.bits : dst.bits;
	const bool wide = dst.bits == 64;
	if ((bits != 8 && bits != 16 && bits != 32 && bits != 64) || (dst.bits != 32 && !wide) ||
		(bits != 8 && wide != (bits == 64)) ||
		(src.kind == OperandKind::Register ? src.reg.bank != RegisterBank::Gpr || src.bits != bits ||
					(src.reg.offset != 0 && (wide || dst.reg.number >= 8))
										   : src.kind != OperandKind::Memory || (src.bits != 0 && src.bits != bits)))
		fail(inst, "invalid CRC32 operand widths");
	if (const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits))
		out.byte(prefix);
	const uint32_t opcode = form.bits == 0 ? form.opcode + (bits != 8) : form.opcode;
	out.op(form.prefix, wide, opcode, 3, physical(dst.reg, inst), rm(src, inst), bits == 8 && byte_rex(inst));
}

void encode_instruction(Assembler& out, const assembly::Instruction& inst)
{
	if (!inst.mnemonic.empty() && inst.mnemonic[0] == 'v' &&
		(encode_evex_form(out, inst) || encode_vex_form(out, inst)))
		return;
	if (!inst.mnemonic.empty() && inst.mnemonic[0] == 'k' && encode_mask_form(out, inst))
		return;
	uint16_t suffix = 0;
	const Form* form = asm_detail::assembly_form(inst.mnemonic, suffix, static_cast<uint32_t>(inst.operands.size()));
	if (form == nullptr)
	{
		if (encode_bmi_form(out, inst))
			return;
		fail(inst, "instruction form is not implemented");
	}
	if (inst.code_bits != 64 &&
		(suffix == 64 ||
			(form->bits == 64 &&
				(form->encoding == Encoding::Zero || form->encoding == Encoding::ControlMemory ||
					form->encoding == Encoding::String))))
		fail(inst, "64-bit instruction in a legacy code sequence");
	if (form->encoding == Encoding::FarBranch)
		return encode_far_branch(out, inst, *form, suffix);
	if (form->encoding == Encoding::Control)
	{
		encode_control_form(out, inst, *form, suffix);
		return;
	}
	if (form->encoding == Encoding::Interrupt)
	{
		if (inst.prefix != 0 || inst.operands.size() != 1 || inst.operands[0].kind != OperandKind::Immediate ||
			inst.operands[0].immediate > 255)
			fail(inst, "interrupt requires an unsigned byte immediate and no prefix");
		const uint8_t vector = inst.operands[0].immediate;
		out.byte(vector == 3 ? 0xcc : 0xcd);
		if (vector != 3)
			out.byte(vector);
		return;
	}
	if (form->encoding == Encoding::ExtendMove)
	{
		encode_extend_form(out, inst, *form);
		return;
	}
	if (form->encoding == Encoding::VectorImmediate || form->encoding == Encoding::VectorExtractImmediate)
		return vector_immediate(out, inst, *form);
	if (form->encoding == Encoding::PackedShift)
		return packed_shift(out, inst, *form);
	if (form->encoding == Encoding::VectorScalarMove ||
		(form->encoding == Encoding::Move && suffix == 64 && inst.operands.size() == 2 &&
			(xmm(inst.operands[0]) || xmm(inst.operands[1]))))
		return scalar_vector_move(out, inst, suffix != 0 ? suffix : form->bits);
	if (form->encoding == Encoding::UndefinedOperands || form->encoding == Encoding::Crc32)
		return integer_system_binary(out, inst, *form);
	if (form->encoding >= Encoding::ControlMemory)
	{
		encode_system_form(out, inst, *form, suffix);
		return;
	}
	if (form->encoding >= Encoding::ConditionMove)
	{
		encode_bit_form(out, inst, *form, suffix);
		return;
	}
	if (form->encoding >= Encoding::Unary && form->encoding != Encoding::String)
	{
		encode_integer_form(out, inst, *form, integer_width(inst, suffix, form->encoding == Encoding::Shift ? 1 : 5));
		return;
	}
	if (form->encoding == Encoding::String &&
		(inst.prefix == 0xf0 ||
			(inst.prefix == 0xf2 && (form->opcode & 0xfe) != 0xa6 && (form->opcode & 0xfe) != 0xae)))
		fail(inst, "prefix is invalid for this string instruction");
	if (inst.prefix != 0 && form->encoding != Encoding::String && !(inst.prefix == 0xf3 && inst.mnemonic == "nop") &&
		!(inst.prefix == 0xf0 &&
			(form->encoding == Encoding::Exchange || (form->encoding == Encoding::Alu && form->opcode != 7)) &&
			!inst.operands.empty() && inst.operands[0].kind == OperandKind::Memory))
		fail(inst, "prefix is invalid for this instruction form");
	if (inst.prefix != 0)
		out.byte(inst.prefix);
	if (form->encoding == Encoding::Zero || form->encoding == Encoding::String)
	{
		if (!inst.operands.empty())
			fail(inst, "instruction takes no operands");
		if (form->encoding == Encoding::String)
		{
			const uint8_t prefix = form->bits == 64 ? 0x48 : asm_detail::operand_size_prefix(inst, form->bits);
			if (prefix != 0)
				out.byte(prefix);
		}
		else
		{
			const unsigned opcode = form->opcode;
			if ((opcode == 0x60 || opcode == 0x61) && inst.code_bits == 64)
				fail(inst, "all-register stack instructions require a legacy code mode");
			unsigned bits = form->bits;
			if (bits == 0 && inst.code16gcc &&
				(opcode == 0x60 || opcode == 0x61 || opcode == 0x9c || opcode == 0x9d || opcode == 0xc9))
				bits = 32;
			if (const uint8_t prefix = asm_detail::operand_size_prefix(inst, bits))
				out.byte(prefix);
		}
		const unsigned bytes = form->opcode > 0xffffff ? 4 : form->opcode > 0xffff ? 3 : form->opcode > 0xff ? 2 : 1;
		for (unsigned i = bytes; i != 0; --i)
			out.byte(static_cast<uint8_t>(form->opcode >> ((i - 1) * 8)));
	}
	else if (form->encoding == Encoding::VectorRM || form->encoding == Encoding::VectorMR)
		vector(out, inst, *form);
	else
		integer(out, inst, *form, suffix);
}

namespace {

void check_legacy_operand(const assembly::Instruction& inst, const Operand& operand)
{
	if (operand.kind == OperandKind::Register &&
		(operand.reg.number >= 8 ||
			(operand.reg.bank == RegisterBank::Gpr &&
				(operand.reg.bits == 64 ||
					(operand.reg.bits == 8 && operand.reg.offset == 0 && operand.reg.number >= 4)))))
		fail(inst, "register requires 64-bit code mode");
	if (operand.kind == OperandKind::Memory &&
		(operand.address.rip ||
			(operand.address.has_base && (operand.address.base.bits > 32 || operand.address.base.number >= 8)) ||
			(operand.address.has_index && (operand.address.index.bits > 32 || operand.address.index.number >= 8))))
		fail(inst, "legacy code requires a legacy address register");
}

} // namespace

void encode_assembly(Assembler& out, const std::vector<assembly::Instruction>& instructions, const RM& exit_frame,
	std::vector<uint32_t>* positions)
{
	if (positions != nullptr)
		positions->clear();
	std::vector<uint32_t> labels(instructions.size(), kNoLabel);
	for (size_t i = 0; i < instructions.size(); ++i)
		if (instructions[i].label)
			labels[i] = out.new_label();
	for (const assembly::Instruction& original : instructions)
	{
		const size_t index = &original - instructions.data();
		assembly::Instruction inst = original;
		uint8_t segment = inst.segment;
		bool address_override = false;
		for (auto& operand : inst.operands)
		{
			if (inst.code_bits != 64)
				check_legacy_operand(inst, operand);
			if (operand.kind != OperandKind::Memory)
				continue;
			if (operand.address.label != asm_model::kNoId)
				operand.address.label = labels[operand.address.label];
			if (operand.address.segment != 0)
			{
				if (segment != 0 && segment != operand.address.segment)
					fail(inst, "conflicting assembly segment overrides");
				segment = operand.address.segment;
			}
			address_override |= (operand.address.has_base && operand.address.base.bits != inst.code_bits) ||
				(operand.address.has_index && operand.address.index.bits != inst.code_bits);
		}
		if (positions != nullptr)
			positions->push_back(out.size());
		if (inst.alignment)
		{
			const uint32_t count = (uint32_t(0) - out.size()) & (inst.alignment - 1);
			if (count <= inst.max_padding)
			{
				if (inst.fill < 0 && inst.code_bits != 16)
					out.nops(count);
				else
					for (uint32_t i = 0; i < count; ++i)
						out.byte(inst.fill < 0 ? 0x90 : inst.fill);
			}
			continue;
		}
		if (inst.data)
		{
			if (inst.string_data)
				out.append_string(inst.bytes);
			else
				out.code().insert(out.code().end(), inst.bytes.begin(), inst.bytes.end());
			continue;
		}
		if (inst.is_exit)
		{
			out.mov_store_imm(exit_frame, inst.exit_tag, 4);
			continue;
		}
		if (inst.label)
		{
			out.bind(labels[index]);
			continue;
		}
		if (inst.mnemonic.empty() || inst.mnemonic[0] != 'v')
			for (const auto& operand : inst.operands)
				if (operand.mask || operand.zero || operand.broadcast)
					fail(inst, "decorator requires an EVEX instruction form");
		if (segment != 0)
			for (uint8_t prefix = 0; prefix < std::max<uint8_t>(1, inst.segment_count); ++prefix)
				out.byte(segment);
		if (address_override)
			out.byte(0x67);
		if (!encode_assembly_branch(out, inst, labels))
		{
			const size_t first = out.fixups().size();
			encode_instruction(out, inst);
			for (const assembly::Operand& operand : inst.operands)
				if (operand.kind == OperandKind::Memory && operand.address.relocation != assembly::Relocation::Address)
					for (size_t i = first; i < out.fixups().size(); ++i)
						out.fixups()[i].kind = operand.address.relocation == assembly::Relocation::Got ? FixupKind::Got
							: operand.address.relocation == assembly::Relocation::GotTpOff ? FixupKind::GotTpOff
																						   : FixupKind::Tlv;
		}
	}
}

} // namespace native
