#include "wasm/selector.h"

#include "lowir/assembly.h"
#include "wasm/source_assembly.h"

namespace wasm {

namespace {

struct InlineLocal
{
	uint32_t local = lowir::kNoId;
	uint32_t owner = lowir::kNoId;
	bool initialized = false;
};

const lowir::AssemblyAlternative& local_constraint(
	const lowir::AssemblyModule& assembly, const lowir::AssemblyOperand& operand)
{
	if (operand.alternative_count != 1 || operand.input_storage ||
		(operand.flags & (asm_model::AO_FLAG | asm_model::AO_EXIT_TAG)) != 0 || lowir::storage_bytes(operand.type) > 8)
		throw WasmError("Wasm inline assembly requires one scalar local constraint");
	const auto& alternative = assembly.alternatives[operand.first_alternative];
	if (alternative.locations != asm_model::AL_REGISTER && alternative.matching == lowir::kNoId)
		throw WasmError("Wasm inline assembly requires register constraints");
	return alternative;
}

std::string marker(const InlineTemplate& plan, const lowir::AssemblyOperand* operands, const lowir::Value* values,
	const lowir::FunctionBody& body)
{
	std::string result = plan.directive;
	if (plan.immediate_operand != lowir::kNoId)
	{
		const auto& operand = operands[plan.immediate_operand];
		if (operand.input == asm_model::kNoId)
			throw WasmError("Wasm assembly .ascii requires an integer constant");
		const auto value = values[operand.input];
		if (!value.is(lowir::ValueKind::Integer))
			throw WasmError("Wasm assembly .ascii requires an integer constant");
		const uint64_t bits = body.literals[value.index].low;
		const auto kind = operand.type.kind();
		const auto number = lowir::is_unsigned(kind) ? std::to_string(bits)
													 : std::to_string(static_cast<int64_t>(bits));
		result.replace(result.find('\1'), 1, number);
	}
	return result;
}

} // namespace

void Selector::inline_assembly(const lowir::Instruction& inst)
{
	const auto& assembly = *program_.assembly;
	const auto& definition = assembly.templates[inst.immediate];
	const auto& plan = module_.source_assembly->templates[inst.immediate];
	const auto* operands = assembly.operands.data() + definition.first_operand;
	const auto* arguments = body_.operands.data() + inst.extra_first;
	if (definition.clobber_count != 0 || (definition.properties & asm_model::AP_NORETURN) != 0)
		throw WasmError("unsupported Wasm inline assembly clobber or control flow");
	if (!plan.directive.empty())
	{
		out_.assembly_directives += marker(plan, operands, arguments, body_);
		out_.assembly_directives += '\n';
		return;
	}
	std::vector<InlineLocal> bindings(definition.operand_count);
	for (uint32_t i = 0; i < definition.operand_count; ++i)
	{
		const auto& operand = operands[i];
		if (plan.statements.empty() &&
			(operand.input_storage ||
				(operand.output == asm_model::kNoId &&
					(operand.alternative_count == 0 ||
						assembly.alternatives[operand.first_alternative].matching == lowir::kNoId))))
			continue; // An empty barrier has already captured its inputs in LowIR.
		const auto& alternative = local_constraint(assembly, operand);
		if (alternative.matching == lowir::kNoId)
		{
			bindings[i].local = add_local(value_type(operand.type));
			bindings[i].owner = i;
		}
		else
			bindings[i].owner = alternative.matching;
	}
	for (uint32_t i = 0; i < definition.operand_count; ++i)
	{
		const auto& operand = operands[i];
		const auto owner = bindings[i].owner;
		if (owner == lowir::kNoId || operand.input == asm_model::kNoId)
			continue;
		auto& binding = bindings[owner];
		if (binding.local == lowir::kNoId || binding.initialized ||
			value_type(operands[owner].type) != value_type(operand.type))
			throw WasmError("incompatible tied Wasm assembly operands");
		value(arguments[operand.input], operand.type);
		out_.emit(Op::LocalSet, { binding.local });
		binding.initialized = true;
	}
	for (const auto& statement : plan.statements)
	{
		const auto op = statement.op;
		const uint32_t index = statement.index;
		if (op == Op::GlobalGet || op == Op::GlobalSet)
		{
			out_.emit(op, { index });
			out_.relocate(RelocationKind::GlobalIndex,
				index == 0 ? module_.stack_symbol : module_.assembly_global_symbol + index - 1);
		}
		else if (op == Op::LocalGet || op == Op::LocalSet || op == Op::LocalTee)
		{
			const auto owner = bindings[index].owner;
			auto& binding = bindings[owner];
			if ((op == Op::LocalGet && !binding.initialized) ||
				(op != Op::LocalGet && operands[owner].output == asm_model::kNoId))
				throw WasmError("Wasm inline assembly local use conflicts with its operand direction");
			out_.emit(op, { binding.local });
			binding.initialized = true;
		}
		else
			out_.emit(op);
	}
	for (uint32_t i = 0; i < definition.operand_count; ++i)
	{
		const auto& operand = operands[i];
		if (operand.output == asm_model::kNoId || bindings[i].local == lowir::kNoId)
			continue;
		if (!bindings[i].initialized && (!plan.statements.empty() || !module_.wide_addresses()))
			throw WasmError("Wasm inline assembly has an uninitialized output");
		const auto place = memory_access(arguments[operand.output]);
		if (bindings[i].initialized)
			out_.emit(Op::LocalGet, { bindings[i].local });
		else
			constant(lowir::Literal{}, operand.type);
		access(memory_op(operand.type, true), place);
	}
}

} // namespace wasm
