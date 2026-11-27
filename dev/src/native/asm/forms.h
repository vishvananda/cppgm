#pragma once

#include "x86_asm_model.h"
#include <string>

namespace assembly {
struct Instruction;
}

namespace native {
namespace asm_detail {
int branch_condition(const std::string& mnemonic);

using x86_asm_model::Encoding;
using x86_asm_model::Form;

const Form* assembly_form(const assembly::Instruction& inst, uint16_t& suffix);

} // namespace asm_detail
} // namespace native
