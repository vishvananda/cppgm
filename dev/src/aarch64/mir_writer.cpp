#include "aarch64/mir.h"

namespace aarch64 {
namespace {
const char* name_of(Op op)
{
	switch (op)
	{
#define A64_OPCODE(name, bits) \
	case Op::name: \
		return #name;
		CPPGM_AARCH64_OPCODES(A64_OPCODE)
#undef A64_OPCODE
	}
	return "?";
}
}

void dump_function(const Function& function, const lowir::Program& program, const char* name, std::string& dump)
{
	dump += "function ";
	dump += name;
	dump += '\n';
	for (size_t i = 0; i < function.code.size(); ++i)
	{
		const auto& inst = function.code[i];
		dump += "  " + std::to_string(i) + " " + name_of(inst.op) + " rd=" + std::to_string(inst.rd) +
			" rn=" + std::to_string(inst.rn) + " rm=" + std::to_string(inst.rm) + " bits=" + std::to_string(inst.field);
		if (inst.fixup == Fixup::Block)
			dump += " target=" + std::to_string(function.labels[inst.target]);
		else if (inst.fixup == Fixup::Resume)
			dump += " @_Unwind_Resume";
		else if (inst.fixup != Fixup::None)
		{
			const auto& symbol = program.symbols[inst.target];
			dump += " @";
			dump += program.spelling(symbol.metadata.object ? symbol.metadata.object : symbol.name);
			if (inst.addend)
				dump += "+" + std::to_string(inst.addend);
		}
		dump += '\n';
	}
}

} // namespace aarch64
