#include "native/asm/forms.h"

#include "asm/parser.h"

namespace native {
namespace asm_detail {
int branch_condition(const std::string& mnemonic)
{
	for (const x86_asm_model::Branch& branch : x86_asm_model::branches)
		if (mnemonic == branch.name)
			return branch.condition;
	return -1;
}

namespace {

using E = Encoding;

const Form* find(const std::string& mnemonic, const std::vector<assembly::Operand>& operands)
{
	std::size_t count = 0;
	const Form* forms = x86_asm_model::forms(count);
	for (std::size_t i = 0; i < count; ++i)
	{
		if (mnemonic != forms[i].mnemonic)
			continue;
		// The two explicit string operands are both memory. Scalar MOVSD
		// has at least one XMM operand.
		if (forms[i].encoding != E::String || mnemonic != "movsd" || operands.empty() ||
			(operands.size() == 2 && operands[0].kind == assembly::OperandKind::Memory &&
				operands[1].kind == assembly::OperandKind::Memory))
			return forms + i;
	}
	return nullptr;
}

} // namespace

const Form* assembly_form(const assembly::Instruction& inst, uint16_t& suffix)
{
	const auto& mnemonic = inst.mnemonic;
	suffix = 0;
	if (const Form* form = find(mnemonic, inst.operands))
		return form;
	if (mnemonic.size() < 2)
		return nullptr;
	const char last = mnemonic.back();
	suffix = last == 'b' ? 8 : last == 'w' ? 16 : last == 'l' ? 32 : last == 'q' ? 64 : 0;
	if (suffix == 0)
		return nullptr;
	const Form* form = find(mnemonic.substr(0, mnemonic.size() - 1), inst.operands);
	return form != nullptr && form->encoding >= E::Move &&
			(form->encoding <= E::Alu || (form->encoding >= E::Unary && form->encoding <= E::Atomic) ||
				form->encoding == E::Control ||
				(form->encoding == E::ControlMemory && form->opcode >= 0x0f0100 && form->opcode <= 0x0f0103) ||
				form->encoding == E::Port || form->encoding == E::NonTemporalStore ||
				form->encoding == E::DescriptorQuery || form->encoding == E::SystemWord ||
				form->encoding == E::FarBranch || form->encoding == E::SystemRegister ||
				(form->encoding >= E::ConditionMove && form->encoding <= E::DoubleShift))
		? form
		: nullptr;
}

} // namespace asm_detail
} // namespace native
