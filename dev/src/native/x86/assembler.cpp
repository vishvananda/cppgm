#include "native/x86/assembler.h"

#include <utility>

#include "native/backend_error.h"

namespace native {

namespace {

unsigned scale_bits(uint8_t scale)
{
	switch (scale)
	{
	case 2:
		return 1;
	case 4:
		return 2;
	case 8:
		return 3;
	default:
		return 0;
	}
}

} // namespace

uint32_t Assembler::new_label()
{
	label_pos_.push_back(-1);
	return static_cast<uint32_t>(label_pos_.size() - 1);
}

void Assembler::bind(uint32_t label)
{
	label_pos_[label] = static_cast<int32_t>(code_.size());
}

void Assembler::reset_labels()
{
	label_pos_.clear();
	label_refs_.clear();
	strings_.clear();
}

void Assembler::append_string(const std::vector<uint8_t>& bytes)
{
	if (record_strings_ && !bytes.empty())
		strings_.push_back(CodeString{ size(), static_cast<uint32_t>(bytes.size()) });
	code_.insert(code_.end(), bytes.begin(), bytes.end());
}

void Assembler::nops(unsigned bytes)
{
	// The recommended forms, `0f 1f /0` with a growing operand; the longest
	// adds a segment prefix to the nine-byte form.
	static const uint8_t forms[10][10] = {
		{ 0x90 },
		{ 0x66, 0x90 },
		{ 0x0f, 0x1f, 0x00 },
		{ 0x0f, 0x1f, 0x40, 0x00 },
		{ 0x0f, 0x1f, 0x44, 0x00, 0x00 },
		{ 0x66, 0x0f, 0x1f, 0x44, 0x00, 0x00 },
		{ 0x0f, 0x1f, 0x80, 0x00, 0x00, 0x00, 0x00 },
		{ 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
		{ 0x66, 0x2e, 0x0f, 0x1f, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00 },
	};
	while (bytes != 0)
	{
		const unsigned length = bytes < 10 ? bytes : 10;
		code_.insert(code_.end(), forms[length - 1], forms[length - 1] + length);
		bytes -= length;
	}
}

bool Assembler::resolve_labels()
{
	for (size_t i = 0; i < label_refs_.size(); ++i)
	{
		const LabelRef& ref = label_refs_[i];
		if (label_pos_[ref.label] < 0)
			return false;
		if (ref.base != kNoLabel && label_pos_[ref.base] < 0)
			return false;
		const int64_t value = static_cast<int64_t>(label_pos_[ref.label]) -
			(ref.base != kNoLabel ? label_pos_[ref.base] : static_cast<int64_t>(ref.offset) + ref.end);
		if ((ref.size == 1 && !fits_i8(value)) || (ref.size == 2 && value != static_cast<int16_t>(value)))
			return false;
		for (unsigned k = 0; k < ref.size; ++k)
			code_[ref.offset + k] = static_cast<uint8_t>(static_cast<uint64_t>(value) >> (8 * k));
	}
	label_refs_.clear();
	return true;
}

bool Assembler::record_label_references(std::vector<CodeLabelReference>& output) const
{
	for (const LabelRef& ref : label_refs_)
	{
		if (!bound(ref.label) || (ref.base != kNoLabel && !bound(ref.base)))
			return false;
		const uint32_t base = ref.base == kNoLabel ? ref.offset + ref.end : label_position(ref.base);
		output.push_back({ ref.offset, base, static_cast<uint32_t>(label_position(ref.label)), ref.size });
	}
	return true;
}

void Assembler::imm(int64_t value, unsigned bytes)
{
	for (unsigned k = 0; k < bytes; ++k)
		code_.push_back(static_cast<uint8_t>(static_cast<uint64_t>(value) >> (8 * k)));
}

void Assembler::symbol_immediate(
	uint32_t target, int64_t addend, uint8_t bytes, bool sign_extended, uint32_t subtrahend)
{
	CodeFixup fixup;
	fixup.offset = size();
	fixup.target = target;
	fixup.addend = addend;
	fixup.subtrahend = subtrahend;
	fixup.end = bytes;
	fixup.absolute = true;
	fixup.branch = false;
	fixup.kind = sign_extended ? FixupKind::SignedAddress : FixupKind::Address;
	fixups_.push_back(fixup);
	imm(0, bytes);
}

void Assembler::displacement32(const RM& rm)
{
	if (rm.absolute_symbol)
		symbol_immediate(rm.symbol, rm.disp, 4, !rm.address32, rm.subtrahend);
	else
		imm(rm.disp, 4);
}

void Assembler::memory16(unsigned reg_field, const RM& rm)
{
	unsigned base = rm.base;
	unsigned index = rm.index;
	if (base == RSI || base == RDI)
		std::swap(base, index);
	const bool absolute = base == kNoReg && index == kNoReg;
	unsigned field = 6;
	if ((base == RBX || base == RBP) && (index == RSI || index == RDI))
		field = (base == RBP ? 2 : 0) + (index == RDI);
	else if (base == kNoReg && (index == RSI || index == RDI))
		field = index == RSI ? 4 : 5;
	else if (base == RBX && index == kNoReg)
		field = 7;
	else if (!absolute && (base != RBP || index != kNoReg))
		throw BackendError("unsupported 16-bit address register combination");
	if (rm.scale != 1 || rm.ip_relative || rm.label != kNoLabel)
		throw BackendError("unsupported 16-bit memory operand");
	const unsigned mod = absolute || (!rm.absolute_symbol && rm.disp == 0 && field != 6) ? 0
		: !rm.absolute_symbol && fits_i8(rm.disp)                                        ? 1
																						 : 2;
	byte(static_cast<uint8_t>((mod << 6) | reg_field | field));
	if (rm.absolute_symbol)
		symbol_immediate(rm.symbol, rm.disp, 2, false, rm.subtrahend);
	else if (mod || absolute)
		imm(rm.disp, mod == 1 ? 1 : 2);
}

void Assembler::op(uint8_t prefix, bool rex_w, uint32_t opcode, unsigned opcode_bytes, unsigned reg, const RM& rm,
	bool byte_regs, unsigned imm_bytes)
{
	if (word_mode_ != 64)
		return op_legacy(prefix, opcode, opcode_bytes, reg, rm, byte_regs, imm_bytes);
	op_bytes(prefix, rex_w, opcode, opcode_bytes, reg, rm, byte_regs, imm_bytes);
}

void Assembler::op_legacy(uint8_t prefix, uint32_t opcode, unsigned opcode_bytes, unsigned reg, const RM& rm,
	bool byte_regs, unsigned imm_bytes)
{
	RM address = rm;
	if (reg >= 8 || (rm.is_reg && rm.reg >= 8) ||
		(!rm.is_reg && ((rm.base != kNoReg && rm.base >= 8) || (rm.index != kNoReg && rm.index >= 8))))
		throw BackendError("register unavailable in i386 code (opcode " + std::to_string(opcode) + ", registers " +
			std::to_string(reg) + "/" + std::to_string(rm.reg) + ", address " + std::to_string(rm.base) + "/" +
			std::to_string(rm.index) + ")");
	const bool byte_field = byte_regs && opcode_bytes == 1 &&
		(opcode == 0x88 || opcode == 0x8a || opcode == 0x84 || opcode == 0x86 ||
			(opcode < 0x40 && ((opcode & 7) == 0 || (opcode & 7) == 2)));
	const bool byte_escape = byte_regs && opcode_bytes == 2 && (opcode == 0x0fb0 || opcode == 0x0fc0);
	if ((byte_regs && rm.is_reg && rm.reg >= 4) || ((byte_field || byte_escape) && reg >= 4))
		throw BackendError("byte operand requires an i386 byte register (opcode " + std::to_string(opcode) +
			", registers " + std::to_string(reg) + "/" + std::to_string(rm.reg) + ")");
	if (rm.label != kNoLabel)
		throw BackendError("i386 cannot encode an instruction-pointer-relative address");
	if (!rm.is_reg)
	{
		address.ip_relative = false;
		address.absolute_symbol = rm.symbol != kNoLabel;
		// A real-mode memory access has a 16-bit segment limit. A BP
		// frame access that succeeds thus addresses the same byte in
		// either address size. LEA still computes full 32-bit offsets.
		const bool frame = rm.base == RBP && rm.disp >= INT16_MIN && rm.disp <= INT16_MAX;
		const bool absolute = rm.base == kNoReg && (address.absolute_symbol || (rm.disp >= 0 && rm.disp <= UINT16_MAX));
		if (word_mode_ == 16 && opcode != 0x8d && rm.index == kNoReg && (frame || absolute))
			address.address16 = true;
		address.address32 = !address.address16;
		if (word_mode_ == 16 && address.address32)
			byte(0x67);
	}
	if (word_mode_ == 16)
	{
		const bool extends_byte = opcode == 0x0fb6 || opcode == 0x0fbe;
		if (prefix == 0x66)
			prefix = 0;
		else if (!byte_regs || extends_byte)
			word_prefix();
	}
	op_bytes(prefix, false, opcode, opcode_bytes, reg, address, false, imm_bytes);
}

void Assembler::exchange_word(Reg a, Reg b)
{
	if (a == RAX || b == RAX)
		op_plus(0, false, 0x90, a == RAX ? b : a);
	else
		op(0, false, 0x87, 1, a, RM::r(b));
}

void Assembler::byte_operation(
	uint8_t opcode, unsigned reg, RM operand, bool register_field, int64_t immediate, unsigned imm_bytes, bool uses_cl)
{
	Reg originals[2];
	Reg replacements[2];
	unsigned swaps = 0;
	if (word_mode_ < 64)
	{
		// Only AL, CL, DL and BL have low-byte encodings. Exchange an
		// otherwise unencodable operand before the operation and restore
		// the register afterward without altering flags.
		unsigned busy = uses_cl ? 1u << RCX : 0;
		for (Reg r = RAX; r <= RBX; r = static_cast<Reg>(r + 1))
			if (operand.uses(r) || (register_field && r == reg))
				busy |= 1u << r;
		auto borrow = [&](Reg original) {
			for (unsigned i = 0; i < swaps; ++i)
				if (originals[i] == original)
					return replacements[i];
			const unsigned available = 0xf & ~busy;
			if (available == 0 || original == RSP)
				throw BackendError("cannot assign an i386 byte operand");
			const Reg low = static_cast<Reg>(__builtin_ctz(available));
			originals[swaps] = original;
			replacements[swaps++] = low;
			busy |= 1u << low;
			exchange_word(low, original);
			return low;
		};
		if (register_field && reg >= 4)
		{
			const Reg high = static_cast<Reg>(reg);
			reg = borrow(high);
			if (operand.base == high)
				operand.base = static_cast<Reg>(reg);
			if (operand.index == high)
				operand.index = static_cast<Reg>(reg);
		}
		if (operand.is_reg && operand.reg >= 4)
			operand.reg = borrow(operand.reg);
	}
	op(0, false, opcode, 1, reg, operand, true, imm_bytes);
	if (imm_bytes)
		imm(immediate, imm_bytes);
	while (swaps > 0)
	{
		--swaps;
		exchange_word(replacements[swaps], originals[swaps]);
	}
}

__attribute__((always_inline)) inline void Assembler::op_bytes(uint8_t prefix, bool rex_w, uint32_t opcode,
	unsigned opcode_bytes, unsigned reg, const RM& rm, bool byte_regs, unsigned imm_bytes)
{
	if (prefix != 0)
		byte(prefix);
	uint8_t rex = static_cast<uint8_t>(0x40 | (rex_w ? 8 : 0) | ((reg & 8) ? 4 : 0));
	bool force = false;
	if (rm.is_reg)
	{
		if (rm.reg & 8)
			rex |= 1;
		if (byte_regs && (rm.reg & 15) >= 4 && (rm.reg & 15) <= 7 && rm.reg < 16)
			force = true;
	}
	else
	{
		if (rm.base != kNoReg && (rm.base & 8))
			rex |= 1;
		if (rm.index != kNoReg && (rm.index & 8))
			rex |= 2;
	}
	// The reg field names a byte register only for the r8 forms (mov,
	// test, xchg and the ALU operations); elsewhere it is an opcode
	// extension or a full-width destination (movzx, setcc, shifts).
	const bool byte_reg_field = byte_regs &&
		((opcode_bytes == 1 &&
			 (opcode == 0x88 || opcode == 0x8a || opcode == 0x84 || opcode == 0x86 ||
				 (opcode < 0x40 && ((opcode & 7) == 0 || (opcode & 7) == 2)))) ||
			(opcode_bytes == 2 && (opcode == 0x0fb0 || opcode == 0x0fc0))); // cmpxchg, xadd r/m8, r8
	if (byte_reg_field && (reg & 15) >= 4 && (reg & 15) <= 7 && reg < 16)
		force = true;
	if (rex != 0x40 || force)
		byte(rex);
	for (unsigned k = opcode_bytes; k-- > 0;)
		byte(static_cast<uint8_t>(opcode >> (8 * k)));
	const unsigned r = (reg & 7) << 3;
	if (rm.is_reg)
	{
		byte(static_cast<uint8_t>(0xc0 | r | (rm.reg & 7)));
		return;
	}
	if (rm.address16)
	{
		memory16(r, rm);
		return;
	}
	if (rm.ip_relative || rm.label != kNoLabel)
	{
		byte(static_cast<uint8_t>(0x05 | r));
		if (rm.symbol != 0xffffffffu)
		{
			CodeFixup fixup;
			fixup.offset = size();
			fixup.target = rm.symbol;
			fixup.addend = rm.disp;
			fixup.end = static_cast<uint8_t>(4 + imm_bytes);
			fixup.absolute = false;
			fixup.branch = false;
			fixups_.push_back(fixup);
			imm(0, 4);
		}
		else if (rm.label != kNoLabel)
		{
			LabelRef ref;
			ref.offset = size();
			ref.label = rm.label;
			ref.size = 4;
			ref.end = static_cast<uint8_t>(4 + imm_bytes);
			label_refs_.push_back(ref);
			imm(rm.disp, 4);
		}
		else
			imm(rm.disp, 4);
		return;
	}
	if (rm.base == kNoReg)
	{
		byte(static_cast<uint8_t>(0x04 | r));
		const unsigned index = rm.index == kNoReg ? 4 : (rm.index & 7);
		byte(static_cast<uint8_t>((scale_bits(rm.scale) << 6) | (index << 3) | 5));
		displacement32(rm);
		return;
	}
	const unsigned base = rm.base & 7;
	unsigned mod = 2;
	if (!rm.absolute_symbol)
	{
		if (rm.disp == 0 && base != 5)
			mod = 0;
		else if (fits_i8(rm.disp))
			mod = 1;
	}
	if (rm.index != kNoReg || base == 4)
	{
		byte(static_cast<uint8_t>((mod << 6) | r | 4));
		const unsigned index = rm.index == kNoReg ? 4 : (rm.index & 7);
		byte(static_cast<uint8_t>((scale_bits(rm.scale) << 6) | (index << 3) | base));
	}
	else
		byte(static_cast<uint8_t>((mod << 6) | r | base));
	if (mod == 1)
		imm(rm.disp, 1);
	else if (mod == 2)
		displacement32(rm);
}

void Assembler::op_plus(uint8_t prefix, bool rex_w, uint8_t opcode, Reg reg)
{
	if (word_mode_ < 64)
	{
		if (reg >= 8)
			throw BackendError("register unavailable in i386 code (opcode " + std::to_string(opcode) + ")");
		rex_w = false;
		if (word_mode_ == 16)
			prefix = prefix == 0x66 ? 0 : 0x66;
	}
	if (prefix != 0)
		byte(prefix);
	if (rex_w || (reg & 8))
		byte(static_cast<uint8_t>(0x40 | (rex_w ? 8 : 0) | ((reg & 8) ? 1 : 0)));
	byte(static_cast<uint8_t>(opcode + (reg & 7)));
}

void Assembler::bswap(Reg reg, bool wide)
{
	if (word_mode_ < 64)
		word_prefix();
	else if (wide || (reg & 8))
		byte(static_cast<uint8_t>(0x40 | (wide ? 8 : 0) | ((reg & 8) ? 1 : 0)));
	byte(0x0f);
	byte(static_cast<uint8_t>(0xc8 + (reg & 7)));
}

void Assembler::mov_rr(Reg dst, Reg src)
{
	if (dst != src)
		op(0, true, 0x8b, 1, dst, RM::r(src));
}

void Assembler::mov_ri(Reg dst, int64_t value)
{
	if (value == 0)
		op(0, false, 0x33, 1, dst, RM::r(dst));
	else if (word_mode_ == 16 && dst != RSP && fits_i8(static_cast<int32_t>(value)))
	{
		word_prefix();
		byte(0x6a); // push imm8, sign-extended to a 32-bit word
		imm(value, 1);
		pop(dst);
	}
	else if (word_mode_ < 64 || (value > 0 && value <= 0xffffffffll))
	{
		op_plus(0, false, 0xb8, dst);
		imm(value, 4);
	}
	else if (fits_i32(value))
	{
		op(0, true, 0xc7, 1, 0, RM::r(dst), false, 4);
		imm(value, 4);
	}
	else
	{
		op_plus(0, true, 0xb8, dst);
		imm(value, 8);
	}
}

void Assembler::mov_load(Reg dst, const RM& src, unsigned bytes, bool sign)
{
	bytes = word_width(bytes);
	if (word_mode_ < 64 && bytes == 1 && src.is_reg && src.reg >= 4)
	{
		const Reg temporary = dst == RAX ? RCX : RAX;
		if (src.reg == dst)
		{
			push(temporary);
			mov_rr(temporary, src.reg);
			mov_load(dst, RM::r(temporary), bytes, sign);
			pop(temporary);
		}
		else
		{
			op(0, false, 0x87, 1, temporary, src);
			mov_load(dst, RM::r(temporary), bytes, sign);
			op(0, false, 0x87, 1, temporary, src);
		}
		return;
	}
	switch (bytes)
	{
	case 1:
		op(0, sign, sign ? 0x0fbe : 0x0fb6, 2, dst, src, true);
		break;
	case 2:
		op(0, sign, sign ? 0x0fbf : 0x0fb7, 2, dst, src);
		break;
	case 4:
		if (sign && word_mode_ == 64)
			op(0, true, 0x63, 1, dst, src);
		else
			op(0, false, 0x8b, 1, dst, src);
		break;
	default:
		op(0, true, 0x8b, 1, dst, src);
		break;
	}
}

void Assembler::mov_store(const RM& dst, Reg src, unsigned bytes)
{
	bytes = word_width(bytes);
	if (word_mode_ < 64 && bytes == 1 && src >= 4)
	{
		const Reg temporary = !dst.uses(RAX) ? RAX : !dst.uses(RCX) ? RCX : RDX;
		if (dst.uses(src))
		{
			push(temporary);
			mov_rr(temporary, src);
			mov_store(dst.base == RSP ? dst.displaced(4) : dst, temporary, 1);
			pop(temporary);
		}
		else
		{
			op(0, false, 0x87, 1, temporary, RM::r(src));
			mov_store(dst, temporary, 1);
			op(0, false, 0x87, 1, temporary, RM::r(src));
		}
		return;
	}
	switch (bytes)
	{
	case 1:
		op(0, false, 0x88, 1, src, dst, true);
		break;
	case 2:
		op(0x66, false, 0x89, 1, src, dst);
		break;
	case 4:
		op(0, false, 0x89, 1, src, dst);
		break;
	default:
		op(0, true, 0x89, 1, src, dst);
		break;
	}
}

void Assembler::mov_store_imm(const RM& dst, int64_t value, unsigned bytes)
{
	bytes = word_width(bytes);
	switch (bytes)
	{
	case 1:
		op(0, false, 0xc6, 1, 0, dst, true, 1);
		imm(value, 1);
		break;
	case 2:
		op(0x66, false, 0xc7, 1, 0, dst, false, 2);
		imm(value, 2);
		break;
	case 4:
		op(0, false, 0xc7, 1, 0, dst, false, 4);
		imm(value, 4);
		break;
	default:
		op(0, true, 0xc7, 1, 0, dst, false, 4);
		imm(value, 4);
		break;
	}
}

void Assembler::lea(Reg dst, const RM& src)
{
	op(0, true, 0x8d, 1, dst, src);
}

void Assembler::mov_got(Reg dst, uint32_t symbol)
{
	op(0, true, 0x8b, 1, dst, RM::rip(symbol, 0));
	fixups_.back().kind = FixupKind::Got;
}

void Assembler::i386_got(Reg dst, uint32_t table)
{
	const uint32_t next = new_label();
	call_label(next);
	bind(next);
	const uint32_t pc = size();
	pop(dst);
	op(0, false, 0x81, 1, 0, RM::r(dst), false, 4);
	symbol_immediate(table, size() - pc, 4, false);
	fixups_.back().kind = FixupKind::I386GotPc;
}

void Assembler::i386_address(Reg dst, uint32_t symbol, int32_t addend, uint32_t table)
{
	if (table != kNoLabel)
	{
		i386_got(dst, table);
		RM entry = RM::m(dst, 0);
		entry.symbol = symbol;
		mov_load(dst, entry, 4, false);
		fixups_.back().kind = FixupKind::I386Got;
		if (addend != 0)
			lea(dst, RM::m(dst, addend));
		return;
	}
	const uint32_t next = new_label();
	call_label(next);
	bind(next);
	const uint32_t pc = size();
	pop(dst);
	RM address = RM::m(dst, addend);
	address.symbol = symbol;
	lea(dst, address);
	CodeFixup& fixup = fixups_.back();
	fixup.addend += fixup.offset - pc;
	fixup.absolute = false;
	fixup.end = 0;
}

void Assembler::tls_local_exec(Reg dst, uint32_t symbol, int32_t addend)
{
	op(0x64, true, 0x8b, 1, dst, RM::m(kNoReg, 0)); // mov dst, fs:[0]
	op(0, true, 0x81, 1, 0, RM::r(dst), false, 4);  // add dst, imm32
	CodeFixup fixup;
	fixup.offset = size();
	fixup.target = symbol;
	fixup.addend = addend;
	fixup.end = 4;
	fixup.absolute = false;
	fixup.branch = false;
	fixup.kind = FixupKind::TpOff;
	fixups_.push_back(fixup);
	imm(0, 4);
}

void Assembler::tls_initial_exec(Reg dst, uint32_t symbol)
{
	op(0, true, 0x8b, 1, dst, RM::rip(symbol, 0)); // mov dst, [rip + symbol@gottpoff]
	fixups_.back().kind = FixupKind::GotTpOff;
	op(0x64, true, 0x03, 1, dst, RM::m(kNoReg, 0)); // add dst, fs:[0]
}

void Assembler::mov_tlv(Reg dst, uint32_t symbol)
{
	op(0, true, 0x8b, 1, dst, RM::rip(symbol, 0));
	fixups_.back().kind = FixupKind::Tlv;
}

void Assembler::alu_rr(unsigned digit, Reg dst, const RM& src, unsigned bytes)
{
	// Register sources use the r/m, reg direction (00+/01+), the canonical
	// form for register-register ALU operations.
	if (src.is_reg)
	{
		alu_mr(digit, RM::r(dst), src.reg, bytes);
		return;
	}
	if (bytes == 1)
		byte_operation(static_cast<uint8_t>(digit * 8 + 2), dst, src, true);
	else
		op(bytes == 2 ? 0x66 : 0, bytes == 8, digit * 8 + 3, 1, dst, src);
}

void Assembler::alu_mr(unsigned digit, const RM& dst, Reg src, unsigned bytes)
{
	if (bytes == 1)
		byte_operation(static_cast<uint8_t>(digit * 8), src, dst, true);
	else
		op(bytes == 2 ? 0x66 : 0, bytes == 8, digit * 8 + 1, 1, src, dst);
}

void Assembler::alu_ri(unsigned digit, const RM& dst, int64_t value, unsigned bytes)
{
	bytes = word_width(bytes);
	// The immediate as the operation's width reads it: 0xffffffff in a 32-bit
	// operation is the sign-extended byte -1 and takes the byte form.
	if (bytes == 4)
		value = static_cast<int32_t>(value);
	else if (bytes == 2)
		value = static_cast<int16_t>(value);
	// The accumulator's forms have no ModRM byte (04+ ib, 05+ iw/id): one
	// byte shorter where the immediate is not a sign-extended byte.
	if (dst.is_reg && dst.reg == RAX && (bytes == 1 || !fits_i8(value)))
	{
		if ((bytes == 2 && word_mode_ != 16) || (bytes == 4 && word_mode_ == 16))
			byte(0x66);
		else if (bytes == 8)
			byte(0x48);
		byte(static_cast<uint8_t>(digit * 8 + (bytes == 1 ? 4 : 5)));
		imm(value, bytes == 1 ? 1 : bytes == 2 ? 2 : 4);
		return;
	}
	if (bytes == 1)
		byte_operation(0x80, digit, dst, false, value, 1);
	else if (fits_i8(value))
	{
		op(bytes == 2 ? 0x66 : 0, bytes == 8, 0x83, 1, digit, dst, false, 1);
		imm(value, 1);
	}
	else
	{
		const unsigned n = bytes == 2 ? 2 : 4;
		op(bytes == 2 ? 0x66 : 0, bytes == 8, 0x81, 1, digit, dst, false, n);
		imm(value, n);
	}
}

void Assembler::test_rr(const RM& dst, Reg src, unsigned bytes)
{
	if (bytes == 1)
		byte_operation(0x84, src, dst, true);
	else
		op(bytes == 2 ? 0x66 : 0, bytes == 8, 0x85, 1, src, dst);
}

void Assembler::test_ri(const RM& dst, int64_t value, unsigned bytes)
{
	bytes = word_width(bytes);
	const unsigned n = bytes == 1 ? 1 : bytes == 2 ? 2 : 4;
	if (bytes == 1 && !(dst.is_reg && dst.reg == RAX))
	{
		byte_operation(0xf6, 0, dst, false, value, n);
		return;
	}
	if (dst.is_reg && dst.reg == RAX)
	{
		// A8 ib, A9 iw/id: the accumulator's form.
		if ((bytes == 2 && word_mode_ != 16) || (bytes == 4 && word_mode_ == 16))
			byte(0x66);
		else if (bytes == 8)
			byte(0x48);
		byte(bytes == 1 ? 0xa8 : 0xa9);
	}
	else
		op(bytes == 2 ? 0x66 : 0, bytes == 8, bytes == 1 ? 0xf6 : 0xf7, 1, 0, dst, bytes == 1, n);
	imm(value, n);
}

void Assembler::shift_ri(unsigned digit, const RM& dst, unsigned count, unsigned bytes)
{
	if (bytes == 1)
	{
		if (count == 1)
			byte_operation(0xd0, digit, dst, false);
		else
			byte_operation(0xc0, digit, dst, false, count, 1);
		return;
	}
	const uint8_t prefix = bytes == 2 ? 0x66 : 0;
	if (count == 1)
		op(prefix, bytes == 8, 0xd1, 1, digit, dst);
	else
	{
		op(prefix, bytes == 8, 0xc1, 1, digit, dst, false, 1);
		imm(count, 1);
	}
}

void Assembler::shift_cl(unsigned digit, const RM& dst, unsigned bytes)
{
	if (bytes == 1)
		byte_operation(0xd2, digit, dst, false, 0, 0, true);
	else
		op(bytes == 2 ? 0x66 : 0, bytes == 8, 0xd3, 1, digit, dst);
}

void Assembler::unary(unsigned digit, const RM& dst, unsigned bytes)
{
	if (bytes == 1)
		byte_operation(0xf6, digit, dst, false);
	else
		op(bytes == 2 ? 0x66 : 0, bytes == 8, 0xf7, 1, digit, dst);
}

void Assembler::step(const RM& dst, bool down, unsigned bytes)
{
	if (bytes == 1)
		byte_operation(0xfe, down ? 1 : 0, dst, false);
	else
		op(bytes == 2 ? 0x66 : 0, bytes == 8, 0xff, 1, down ? 1 : 0, dst);
}

void Assembler::imul_rr(Reg dst, const RM& src, unsigned bytes)
{
	op(bytes == 2 ? 0x66 : 0, bytes == 8, 0x0faf, 2, dst, src);
}

void Assembler::imul_rri(Reg dst, const RM& src, int32_t value, unsigned bytes)
{
	const uint8_t prefix = bytes == 2 ? 0x66 : 0;
	if (fits_i8(value))
	{
		op(prefix, bytes == 8, 0x6b, 1, dst, src, false, 1);
		imm(value, 1);
	}
	else
	{
		const unsigned n = bytes == 2 ? 2 : 4;
		op(prefix, bytes == 8, 0x69, 1, dst, src, false, n);
		imm(value, n);
	}
}

void Assembler::setcc(Cond cond, Reg dst)
{
	if (word_mode_ < 64 && dst >= 4)
	{
		op(0, false, 0x87, 1, RAX, RM::r(dst));
		setcc(cond, RAX);
		op(0, false, 0x87, 1, RAX, RM::r(dst));
		return;
	}
	op(0, false, 0x0f90 + cond, 2, 0, RM::r(dst), true);
}

void Assembler::movzx_rr8(Reg dst, Reg src)
{
	if (word_mode_ < 64)
		return mov_load(dst, RM::r(src), 1, false);
	op(0, false, 0x0fb6, 2, dst, RM::r(src), true);
}

void Assembler::jcc(Cond cond, uint32_t label)
{
	word_prefix();
	byte(0x0f);
	byte(static_cast<uint8_t>(0x80 + cond));
	relative_label(label, 4);
}

void Assembler::jmp(uint32_t label)
{
	word_prefix();
	byte(0xe9);
	relative_label(label, 4);
}

void Assembler::jmp_short(uint32_t label)
{
	branch_short(0xeb, label);
}

void Assembler::jcc_short(Cond cond, uint32_t label)
{
	branch_short(0x70 + cond, label);
}

void Assembler::branch_short(uint8_t opcode, uint32_t label)
{
	byte(opcode);
	relative_label(label, 1);
}

void Assembler::call_label(uint32_t label)
{
	word_prefix();
	byte(0xe8);
	relative_label(label, 4);
}

void Assembler::relative_label(uint32_t label, uint8_t bytes)
{
	LabelRef ref;
	ref.offset = size();
	ref.label = label;
	ref.size = bytes;
	ref.end = bytes;
	label_refs_.push_back(ref);
	imm(0, bytes);
}

void Assembler::call_symbol(uint32_t symbol)
{
	word_prefix();
	byte(0xe8);
	relative_symbol(symbol, 4);
}

void Assembler::relative_symbol(uint32_t symbol, uint8_t bytes)
{
	CodeFixup fixup;
	fixup.offset = size();
	fixup.target = symbol;
	fixup.addend = 0;
	fixup.end = bytes;
	fixup.absolute = false;
	fixup.branch = true;
	fixups_.push_back(fixup);
	imm(0, bytes);
}

void Assembler::jcc_symbol(Cond condition, uint32_t symbol)
{
	word_prefix();
	byte(0x0f);
	byte(static_cast<uint8_t>(0x80 + condition));
	relative_symbol(symbol, 4);
}

void Assembler::jmp_symbol(uint32_t symbol)
{
	word_prefix();
	byte(0xe9);
	relative_symbol(symbol, 4);
}

void Assembler::call_rm(const RM& target)
{
	op(0, false, 0xff, 1, 2, target);
}

void Assembler::jmp_rm(const RM& target)
{
	op(0, false, 0xff, 1, 4, target);
}

void Assembler::label_offset32(uint32_t label, uint32_t base)
{
	LabelRef ref;
	ref.offset = size();
	ref.label = label;
	ref.size = 4;
	ref.end = 0;
	ref.base = base;
	label_refs_.push_back(ref);
	imm(0, 4);
}

void Assembler::push(Reg reg)
{
	op_plus(0, false, 0x50, reg);
}

void Assembler::pop(Reg reg)
{
	op_plus(0, false, 0x58, reg);
}

void Assembler::sse(uint8_t prefix, uint8_t opcode, Reg dst, const RM& src, bool rex_w)
{
	op(prefix, rex_w, 0x0f00 | opcode, 2, dst & 15, src);
}

void Assembler::sse_store(uint8_t prefix, uint8_t opcode, const RM& dst, Reg src)
{
	op(prefix, false, 0x0f00 | opcode, 2, src & 15, dst);
}

void Assembler::x87(uint8_t opcode, unsigned digit, const RM& mem)
{
	op(0, false, opcode, 1, digit, mem);
}

} // namespace native
