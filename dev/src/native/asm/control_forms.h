#pragma once
#include "native/asm/forms.h"
#include "native/x86/assembler.h"
#include "asm/parser.h"

namespace native {
void encode_control_form(
	Assembler& out, const assembly::Instruction& inst, const asm_detail::Form& form, unsigned suffix);
bool encode_system_register_move(Assembler& out, const assembly::Instruction& inst, unsigned suffix);
void encode_system_form(
	Assembler& out, const assembly::Instruction& inst, const asm_detail::Form& form, unsigned suffix);
void encode_far_branch(
	Assembler& out, const assembly::Instruction& inst, const asm_detail::Form& form, unsigned suffix);
bool encode_assembly_branch(Assembler& out, const assembly::Instruction& inst, const std::vector<uint32_t>& labels);
} // namespace native
