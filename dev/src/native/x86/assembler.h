#pragma once

#include <cstdint>
#include <vector>

#include "native/mir/mir.h"

// x86-64 instruction encoding: prefixes, REX, opcode, ModRM/SIB,
// displacement and immediate, with local labels (resolved per function)
// and symbol fixups (resolved by the image after layout).
namespace native {

// A RIP-relative or absolute reference to an image symbol, patched after
// layout. `end` is the distance from the patched field to the end of its
// instruction (the PC-relative base).
// How a code fixup reaches its target (host objects besides Address):
// the target's GOT entry, its thread-local offset from the thread
// pointer (TPOFF32, an absolute imm32), or the GOT entry holding that
// offset (GOTTPOFF, pc-relative).
enum class FixupKind : uint8_t
{
	Address,
	SignedAddress, // sign-extended absolute disp32 or imm32
	Got,
	TpOff,
	GotTpOff,
	Tlv,
	I386Got,
	I386GotPc
};

struct CodeFixup
{
	uint32_t offset;
	uint32_t target; // image symbol
	int64_t addend;
	uint32_t subtrahend = 0xffffffffu; // symbolic difference, when present
	uint8_t end; // bytes from the PC-relative field to the instruction end, or the absolute field width
	bool absolute;
	bool branch; // a call's or jump's target (else an address or operand)
	FixupKind kind = FixupKind::Address;
};

const uint32_t kNoLabel = 0xffffffffu;

// A register or memory operand of one encoded instruction.
struct RM
{
	bool is_reg = true;
	Reg reg = kNoReg;
	Reg base = kNoReg; // memory: GPR, or kNoReg (absolute / RIP)
	Reg index = kNoReg;
	uint8_t scale = 1;
	bool absolute_symbol = false;
	bool address32 = false;
	bool address16 = false;
	bool ip_relative = false;
	int64_t disp = 0;
	uint32_t symbol = 0xffffffffu; // image symbol, normally RIP-relative
	uint32_t subtrahend = 0xffffffffu;
	uint32_t label = 0xffffffffu; // RIP-relative local label

	static RM r(Reg reg)
	{
		RM rm;
		rm.reg = reg;
		return rm;
	}
	static RM m(Reg base, int64_t disp, Reg index = kNoReg, uint8_t scale = 1)
	{
		RM rm;
		rm.is_reg = false;
		rm.base = base;
		rm.index = index;
		rm.scale = scale;
		rm.disp = disp;
		return rm;
	}
	static RM rip(uint32_t symbol, int64_t addend)
	{
		RM rm;
		rm.is_reg = false;
		rm.symbol = symbol;
		rm.ip_relative = true;
		rm.disp = addend;
		return rm;
	}
	bool uses(Reg r) const { return is_reg ? reg == r : (base == r || index == r); }
	RM displaced(int32_t delta) const
	{
		RM rm = *this;
		rm.disp += delta;
		return rm;
	}
};

// A string directive in the encoded bytes, retained for the optional
// textual assembly output.
struct CodeString
{
	uint32_t offset;
	uint32_t size;
};

struct CodeLabelReference
{
	uint32_t offset, base, target;
	uint8_t size;
};

class Assembler
{
public:
	explicit Assembler(std::vector<uint8_t>& code) : code_(code) {}

	std::vector<uint8_t>& code() { return code_; }
	// Generated integer instructions use the target's natural word.
	// The module assembler supplies its widths and prefixes explicitly.
	void set_word_mode(unsigned bits) { word_mode_ = static_cast<uint8_t>(bits); }
	unsigned word_mode() const { return word_mode_; }
	void word_prefix()
	{
		if (word_mode_ == 16)
			byte(0x66);
	}
	uint32_t size() const { return static_cast<uint32_t>(code_.size()); }
	std::vector<CodeFixup>& fixups() { return fixups_; }
	void record_strings(bool enabled) { record_strings_ = enabled; }
	const std::vector<CodeString>& strings() const { return strings_; }
	void append_string(const std::vector<uint8_t>& bytes);

	// Local labels: created unbound, bound to the current position.
	uint32_t new_label();
	void bind(uint32_t label);
	bool bound(uint32_t label) const { return label_pos_[label] >= 0; }
	int32_t label_position(uint32_t label) const { return label_pos_[label]; }
	// Patches every label reference; false if a label is unbound.
	bool resolve_labels();
	bool record_label_references(std::vector<CodeLabelReference>& output) const;
	void reset_labels();

	void byte(uint8_t b) { code_.push_back(b); }
	void imm(int64_t value, unsigned bytes);
	void nops(unsigned bytes); // padding, in the fewest instructions

	// [prefix] [REX] opcode (1-3 bytes) ModRM [SIB] [disp] for `rm`, with
	// `reg` the ModRM.reg field (a register or an opcode extension) and
	// `imm_bytes` the immediate size that will follow (for RIP bases).
	// `byte_regs` forces REX for spl/bpl/sil/dil operands.
	void op(uint8_t prefix, bool rex_w, uint32_t opcode, unsigned opcode_bytes, unsigned reg, const RM& rm,
		bool byte_regs = false, unsigned imm_bytes = 0);
	// [REX] opcode+reg (for B8+r, C8+r, ...).
	void op_plus(uint8_t prefix, bool rex_w, uint8_t opcode, Reg reg);
	void symbol_immediate(
		uint32_t target, int64_t addend, uint8_t bytes, bool sign_extended, uint32_t subtrahend = 0xffffffffu);

	// Common forms.
	void mov_rr(Reg dst, Reg src);                                    // 64-bit
	void mov_ri(Reg dst, int64_t value);                              // shortest
	void mov_load(Reg dst, const RM& src, unsigned bytes, bool sign); // extending load
	void mov_store(const RM& dst, Reg src, unsigned bytes);
	void mov_store_imm(const RM& dst, int64_t value, unsigned bytes); // value fits
	void lea(Reg dst, const RM& src);
	// mov dst, [rip + symbol@GOTPCREL]: the address of the symbol's GOT
	// entry's value (R_X86_64_REX_GOTPCRELX, psABI 4.4.1).
	void mov_got(Reg dst, uint32_t symbol);
	void i386_got(Reg dst, uint32_t table);
	void i386_address(Reg dst, uint32_t symbol, int32_t addend, uint32_t table = kNoLabel);
	// A thread-local object's address for the executing thread: local
	// exec (mov dst, fs:0; add dst, symbol@tpoff + addend) for one the
	// executable defines, initial exec (mov dst, [rip + symbol@gottpoff];
	// add dst, fs:0) otherwise (psABI / Drepper's TLS models).
	void tls_local_exec(Reg dst, uint32_t symbol, int32_t addend);
	void tls_initial_exec(Reg dst, uint32_t symbol);
	void mov_tlv(Reg dst, uint32_t symbol);
	// add/or/adc/sbb/and/sub/xor/cmp by ModRM digit 0-7.
	void alu_rr(unsigned digit, Reg dst, const RM& src, unsigned bytes);       // dst op= src
	void alu_mr(unsigned digit, const RM& dst, Reg src, unsigned bytes);       // [dst] op= src
	void alu_ri(unsigned digit, const RM& dst, int64_t value, unsigned bytes); // value fits imm32
	void test_rr(const RM& dst, Reg src, unsigned bytes);
	void test_ri(const RM& dst, int64_t value, unsigned bytes); // value fits imm32
	void shift_ri(unsigned digit, const RM& dst, unsigned count, unsigned bytes);
	void shift_cl(unsigned digit, const RM& dst, unsigned bytes);
	void unary(unsigned digit, const RM& dst, unsigned bytes); // F7 /digit
	void step(const RM& dst, bool down, unsigned bytes);       // inc or dec
	void imul_rr(Reg dst, const RM& src, unsigned bytes);
	void imul_rri(Reg dst, const RM& src, int32_t value, unsigned bytes);
	void setcc(Cond cond, Reg dst);
	void movzx_rr8(Reg dst, Reg src);
	void jcc(Cond cond, uint32_t label);
	void jmp(uint32_t label);
	void jmp_short(uint32_t label);
	void branch_short(uint8_t opcode, uint32_t label);
	void jcc_short(Cond cond, uint32_t label);
	void call_symbol(uint32_t symbol);
	void call_label(uint32_t label);
	void jmp_symbol(uint32_t symbol);
	void jcc_symbol(Cond condition, uint32_t symbol);
	void call_rm(const RM& target);
	void jmp_rm(const RM& target);
	void relative_label(uint32_t label, uint8_t bytes);
	void relative_symbol(uint32_t symbol, uint8_t bytes);
	// A 32-bit entry holding label - base (a jump table's, after both bind).
	void label_offset32(uint32_t label, uint32_t base);
	void push(Reg reg);
	void pop(Reg reg);
	void ret()
	{
		word_prefix();
		byte(0xc3);
	}
	void bswap(Reg reg, bool wide);
	// SSE scalar: prefix F3 (ss) or F2 (sd), 0F op.
	void sse(uint8_t prefix, uint8_t opcode, Reg dst, const RM& src, bool rex_w = false);
	void sse_store(uint8_t prefix, uint8_t opcode, const RM& dst, Reg src);
	// x87 memory forms: opcode, ModRM digit.
	void x87(uint8_t opcode, unsigned digit, const RM& mem);

private:
	void exchange_word(Reg a, Reg b);
	void byte_operation(uint8_t opcode, unsigned reg, RM operand, bool register_field, int64_t immediate = 0,
		unsigned imm_bytes = 0, bool uses_cl = false);
	unsigned word_width(unsigned bytes) const { return word_mode_ < 64 && bytes == 8 ? 4 : bytes; }
	void op_bytes(uint8_t prefix, bool rex_w, uint32_t opcode, unsigned opcode_bytes, unsigned reg, const RM& rm,
		bool byte_regs, unsigned imm_bytes);
	void op_legacy(uint8_t prefix, uint32_t opcode, unsigned opcode_bytes, unsigned reg, const RM& rm, bool byte_regs,
		unsigned imm_bytes);
	void memory16(unsigned reg_field, const RM& rm);
	void displacement32(const RM& rm);
	struct LabelRef
	{
		uint32_t offset;
		uint32_t label;
		uint8_t size; // 1 or 4
		uint8_t end;
		uint32_t base = kNoLabel; // a label: the value is label - base (no PC base)
	};

	std::vector<uint8_t>& code_;
	std::vector<CodeFixup> fixups_;
	std::vector<int32_t> label_pos_;
	std::vector<LabelRef> label_refs_;
	std::vector<CodeString> strings_;
	bool record_strings_ = false;
	uint8_t word_mode_ = 64;
};

inline bool fits_i8(int64_t v)
{
	return v >= -128 && v <= 127;
}
inline bool fits_i32(int64_t v)
{
	return v >= INT32_MIN && v <= INT32_MAX;
}
// Whether an immediate of a `bytes`-wide operation encodes without losing
// bits: sign-extended imm32 at 8 bytes, else a signed or unsigned value of
// that width.
inline bool fits_operation(int64_t v, unsigned bytes)
{
	if (bytes >= 8)
		return fits_i32(v);
	const int64_t limit = int64_t(1) << (8 * bytes);
	return v >= -(limit / 2) && v < limit;
}

} // namespace native
