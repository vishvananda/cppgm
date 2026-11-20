#include "lower/coroutine_frame.h"

#include <algorithm>

#include "lower/program_lowering.h"
#include "opt/function_ir.h"
#include "opt/passes.h"
#include "sema/coroutine_records.h"

namespace lower {

static uint64_t AlignFrameOffset(uint64_t offset, uint64_t alignment)
{
	return (offset + alignment - 1) & ~(alignment - 1);
}

CoroutineFrameLayout::CoroutineFrameLayout(ProgramLowering& lowering, const sema::FunctionEntity* function,
	const sema::CoroutineFacts& facts, uint32_t location)
	: location_(location), limit_(lowering.program().pointer_type().pointer_bytes() == 4 ? INT32_MAX : INT64_MAX)
{
	const uint64_t word = lowering.program().pointer_type().pointer_bytes();
	resume = reserve(word, word);
	destroy = reserve(word, word);
	promise = reserve(
		lowering.size_of(facts.promise->type, location), lowering.alignment_of(facts.promise->type, location));
	raw_allocation = reserve(word, word);
	const lowir::Type state_type = lowir::Type::scalar(lowir::TypeKind::U32);
	state = reserve(lowir::storage_bytes(state_type), lowir::data_alignment(state_type));
	if (lowering.exceptions())
		initial_resumed = reserve(1, 1);
	if (facts.object != nullptr)
		parameters.push_back(FrameParameter{ facts.object, facts.object->type, reserve(word, word) });
	for (const sema::Binding* binding = function->scope->bindings; binding != nullptr; binding = binding->next)
	{
		if (binding->kind != sema::BindingKind::Parameter)
			continue;
		const sema::Type* type = binding->type;
		parameters.push_back(FrameParameter{ binding->entity, type, reserve_type(lowering, type) });
	}
}

uint64_t CoroutineFrameLayout::reserve_type(ProgramLowering& lowering, const sema::Type* type)
{
	if (type->is_reference())
	{
		const uint64_t word = lowering.program().pointer_type().pointer_bytes();
		return reserve(word, word);
	}
	return reserve(lowering.size_of(type, location_), lowering.alignment_of(type, location_));
}

uint64_t CoroutineFrameLayout::reserve(uint64_t size, uint64_t alignment)
{
	if (alignment > limit_ || end_ > limit_ - (alignment - 1))
		throw LoweringError(location_, "coroutine frame alignment exceeds PTRDIFF_MAX");
	const uint64_t offset = AlignFrameOffset(end_, alignment);
	if (size > limit_ - offset)
		throw LoweringError(location_, "coroutine frame size exceeds PTRDIFF_MAX");
	end_ = offset + size;
	alignment_ = std::max(alignment_, alignment);
	return offset;
}

uint64_t CoroutineFrameLayout::allocation_bytes(ProgramLowering& lowering) const
{
	const uint64_t extra = over_aligned(lowering) ? alignment_ - 1 : 0;
	if (extra > limit_ - end_)
		throw LoweringError(location_, "coroutine frame allocation exceeds PTRDIFF_MAX");
	return end_ + extra;
}

bool CoroutineFrameLayout::over_aligned(ProgramLowering& lowering) const
{
	return alignment_ > target_model::default_new_alignment(lowering.program().target);
}

namespace {

using namespace lowir;

class CoroutineSpills
{
public:
	CoroutineSpills(Program& program, FunctionBuilder& builder, CoroutineFrameLayout& frame)
		: program_(program), builder_(builder), body_(builder.body()), frame_(frame)
	{}

	void run();

private:
	void collect_spills(std::vector<uint8_t>& spill);
	Value reserve(Type type);
	void relocate_call_arguments(const Instruction& call, BlockId block, InstId& previous);
	void relocate_operand(InstId instruction, BlockId block, InstId& previous, Value& value);
	void relocate_phi(const Instruction& inst);
	InstId store_spill(BlockId block, InstId previous, TempId temp);
	void relocate(BlockId block, uint32_t original_instructions);

	Program& program_;
	FunctionBuilder& builder_;
	FunctionBody& body_;
	CoroutineFrameLayout& frame_;
	InstId entry_end_ = kNoId;
	std::vector<InstId> edge_insertion_;
	std::vector<Value> slots_;
	std::vector<Value> spills_;
};

void CoroutineSpills::collect_spills(std::vector<uint8_t>& spill)
{
	// Dispatcher edges enter a continuation without running the previous
	// activation's instructions. A use no longer dominated by its SSA
	// definition needs the value saved in the frame.
	opt::Cfg cfg;
	opt::build_cfg(program_, body_, cfg);
	std::vector<BlockId> blocks;
	opt::map_instruction_blocks(body_, blocks);
	const auto mark = [&](BlockId use, Value value) {
		if (!value.is(ValueKind::Temp) || value.index < body_.parameter_count)
			return;
		const InstId definition_index = body_.temps[value.index].def;
		const BlockId definition = definition_index != kNoId ? blocks[definition_index] : kNoId;
		if (definition != use && cfg.reachable(use) &&
			(definition == kNoId || !cfg.reachable(definition) || !cfg.dominates(definition, use)))
			spill[value.index] = 1;
	};
	for (BlockId block : body_.layout)
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
		{
			const Instruction& inst = body_.instructions[i];
			if (inst.op == Opcode::StackAlloc)
				throw LoweringError(frame_.location(), "dynamic stack allocation in a suspending coroutine");
			if (inst.op == Opcode::Phi)
			{
				for (uint32_t j = 0; j < inst.extra_count; j += 2)
					mark(body_.operands[inst.extra_first + j].index, body_.operands[inst.extra_first + j + 1]);
			}
			else
				opt::for_each_operand(body_, inst, [&](Value value) { mark(block, value); });
		}
}

Value CoroutineSpills::reserve(Type type)
{
	const uint64_t offset = frame_.reserve(storage_bytes(type), data_alignment(type));
	Instruction index = make_instruction(Opcode::Index, Type::scalar(TypeKind::I8));
	index.sub = ir_model::IPK_ARRAY_ELEMENT;
	index.ops[0] = Value::temp(builder_.parameter(0));
	index.ops[1] = builder_.integer(offset);
	entry_end_ = builder_.insert_after(body_.layout.front(), entry_end_, index);
	const TempId address = builder_.add_temp(0);
	builder_.bind(address, body_.pointer_type(), entry_end_);
	return Value::temp(address);
}

void CoroutineSpills::relocate_call_arguments(const Instruction& call, BlockId block, InstId& previous)
{
	const Signature* signature = program_.call_boundary(call);
	if (signature == nullptr)
		return;
	const Parameter* parameters = program_.parameters_of(*signature);
	const uint32_t written = std::min(signature->parameter_count, call.extra_count);
	for (uint32_t i = 0; i < written; ++i)
	{
		Value& argument = body_.operands[call.extra_first + i];
		const Parameter& parameter = parameters[i];
		if (!argument.is(ValueKind::Slot) || !parameter.type.is_object() || parameter.pass != ir_model::PPM_DIRECT)
			continue;
		// A direct aggregate argument is a value. Snapshot the relocated
		// slot so inlining and call lowering still see its original type.
		argument = opt::materialize_slot_read(
			body_, block, previous, slots_[argument.index], parameter.type, call.location);
	}
}

void CoroutineSpills::relocate_operand(InstId instruction, BlockId block, InstId& previous, Value& value)
{
	if (value.is(ValueKind::Slot))
	{
		value = slots_[value.index];
		return;
	}
	if (!value.is(ValueKind::Temp) || value.index >= spills_.size() || spills_[value.index].is(ValueKind::None))
		return;
	const Type type = body_.temps[value.index].type;
	const uint32_t location = body_.instructions[instruction].location;
	value = opt::materialize_slot_read(body_, block, previous, spills_[value.index], type, location);
}

void CoroutineSpills::relocate_phi(const Instruction& inst)
{
	for (uint32_t j = 0; j < inst.extra_count; j += 2)
	{
		const BlockId from = body_.operands[inst.extra_first + j].index;
		relocate_operand(
			body_.blocks[from].last, from, edge_insertion_[from], body_.operands[inst.extra_first + j + 1]);
	}
}

InstId CoroutineSpills::store_spill(BlockId block, InstId previous, TempId temp)
{
	if (temp == kNoId || spills_[temp].is(ValueKind::None))
		return previous;
	Instruction store = make_instruction(Opcode::Store, body_.temps[temp].type);
	store.ops[0] = Value::temp(temp);
	store.ops[1] = spills_[temp];
	store.location = body_.instructions[body_.temps[temp].def].location;
	return builder_.insert_after(block, previous, store);
}

void CoroutineSpills::relocate(BlockId block, uint32_t original_instructions)
{
	InstId previous = kNoId;
	std::vector<TempId> phis;
	for (InstId id = body_.blocks[block].first; id != kNoId;)
	{
		Instruction inst = body_.instructions[id];
		const InstId next = inst.next;
		if (id >= original_instructions)
		{
			previous = id;
			id = next;
			continue;
		}
		if (inst.op == Opcode::Phi)
		{
			relocate_phi(inst);
			phis.push_back(inst.result);
			previous = id;
			id = next;
			continue;
		}
		for (TempId phi : phis)
			previous = store_spill(block, previous, phi);
		phis.clear();
		if (inst.op == Opcode::Addr && inst.ops[0].is(ValueKind::Slot))
			inst.op = Opcode::Copy;
		if (inst.op == Opcode::Call)
			relocate_call_arguments(inst, block, previous);
		opt::for_each_operand(body_, inst, [&](Value& value) { relocate_operand(id, block, previous, value); });
		// Inserting loads may also move the incoming edge to this instruction.
		inst.next = body_.instructions[id].next;
		body_.instructions[id] = inst;
		previous = store_spill(block, id, inst.result);
		id = next;
	}
}

void CoroutineSpills::run()
{
	opt::materialize_storage_arguments(program_, body_);
	std::vector<uint8_t> spill(body_.temps.size(), 0);
	collect_spills(spill);
	const auto original_instructions = static_cast<uint32_t>(body_.instructions.size());
	for (const Slot& slot : body_.slots)
		slots_.push_back(reserve(slot.type));
	spills_.resize(spill.size());
	for (TempId i = body_.parameter_count; i < spill.size(); ++i)
		if (spill[i])
			spills_[i] = reserve(body_.temps[i].type);

	edge_insertion_.resize(body_.blocks.size(), kNoId);
	for (BlockId block : body_.layout)
	{
		const InstId terminal = body_.blocks[block].last;
		for (InstId i = body_.blocks[block].first; i != terminal && i != kNoId; i = body_.instructions[i].next)
			edge_insertion_[block] = i;
	}
	for (BlockId block : body_.layout)
		relocate(block, original_instructions);
	body_.slots.clear();
}

} // namespace

void relocate_coroutine_storage(lowir::Program& program, lowir::FunctionBuilder& builder, CoroutineFrameLayout& frame)
{
	CoroutineSpills(program, builder, frame).run();
}

} // namespace lower
