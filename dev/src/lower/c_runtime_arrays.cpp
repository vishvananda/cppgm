#include "lower/function_lowering.h"

#include "sema/conversions.h"
#include "sema/declaration_records.h"

namespace lower {

FunctionLowering::RuntimeArrayStride FunctionLowering::runtime_array_stride(const sema::Type* type)
{
	if (type->runtime_bound != nullptr)
		return { type->runtime_bound, 1 };
	if (const RuntimeArrayStride* retained = runtime_strides_.find(type))
		return *retained;
	RuntimeArrayStride stride = runtime_array_stride(type->element);
	stride.multiplier *= type->bound;
	runtime_strides_.insert(type, stride);
	return stride;
}

RValue FunctionLowering::runtime_array_size(const sema::Type* type, uint32_t location)
{
	const RuntimeArrayStride stride = runtime_array_stride(type);
	const auto slot = runtime_sizes_.find(stride.bound);
	if (slot == PointerMap::kMissing)
		throw LoweringError(location, "a runtime array extent without an evaluated declaration");
	Place place = Place();
	place.storage = lowir::Value::slot(slot);
	const lowir::Type size = lowering_.storage_type(
		lowering_.graph().types.fundamental(FundamentalType::UnsignedLongInt));
	const RValue bytes = load(size, place);
	return stride.multiplier == 1 ? bytes : binary(lowir::BinaryOp::Mul, size, bytes, integer(size, stride.multiplier));
}

RValue FunctionLowering::dynamic_stack_allocate(RValue bytes, uint64_t alignment)
{
	const lowir::Type pointer = program_.pointer_type();
	const lowir::Type size = bytes.type;
	lowir::Instruction allocate = lowir::make_instruction(lowir::Opcode::StackAlloc, pointer);
	allocate.ops[0] = alignment > 16 ? binary(lowir::BinaryOp::Add, size, bytes, integer(size, alignment - 1)).value
									 : bytes.value;
	RValue address{ emit_value(allocate, pointer), pointer };
	if (alignment > 16)
	{
		sema::TypeTable& types = lowering_.graph().types;
		const sema::Type* size_type = types.fundamental(FundamentalType::UnsignedLongInt);
		const sema::Type* pointer_type = types.pointer(types.fundamental(FundamentalType::Void));
		RValue bits = convert(address, pointer_type, size_type, ConversionContext::Cast);
		bits = binary(lowir::BinaryOp::Add, size, bits, integer(size, alignment - 1));
		bits = binary(lowir::BinaryOp::And, size, bits, integer(size, 0 - alignment));
		address = convert(bits, size_type, pointer_type, ConversionContext::Cast);
	}
	return address;
}

void FunctionLowering::initialize_repeated_type(const sema::RepeatedTypeEvaluation& evaluation)
{
	// Declarators repeat an evaluated typeof operand. Its written type-name
	// bounds are shared, including when the operand only reaches a bound
	// conditionally. Reset the captures on every entry to this declaration.
	const lowir::Type flag = lowir::Type::scalar(lowir::TypeKind::U8);
	for (const syntax::Expr* bound : evaluation.bounds)
	{
		auto slot = runtime_bound_guards_.find(bound);
		if (slot == PointerMap::kMissing)
		{
			slot = generated_slot(lowir::SlotKind::Tmpobj, flag);
			runtime_bound_guards_.set(bound, slot);
		}
		Place guard = Place();
		guard.storage = lowir::Value::slot(slot);
		store(flag, integer(flag, 0), guard);
	}
}

RValue FunctionLowering::evaluate_array_bound(
	const sema::Type* array, const sema::Type* size_type, lowir::Type size, bool use_extent)
{
	const syntax::Expr& bound = *array->runtime_bound;
	const auto guard_slot = runtime_bound_guards_.find(&bound);
	const lowir::Type flag = lowir::Type::scalar(lowir::TypeKind::U8);
	Place guard = Place();
	lowir::BlockId ready = lowir::kNoId;
	if (guard_slot != PointerMap::kMissing)
	{
		guard.storage = lowir::Value::slot(guard_slot);
		const lowir::BlockId capture = new_block(lowir::BlockKind::IfThen);
		ready = new_block(lowir::BlockKind::IfEnd);
		branch(compare(lowir::ComparePredicate::Eq, flag, load(flag, guard), integer(flag, 0)), capture, ready);
		place(capture);
	}
	const RValue count = convert(rvalue(bound), bound.facts->type, size_type, ConversionContext::Initialization);
	const RValue stride = array->element->runtime_array()
		? runtime_array_size(array->element, bound.location)
		: integer(size, lowering_.size_of(array->element, bound.location));
	const RValue bytes = binary(lowir::BinaryOp::Mul, size, count, stride);
	auto slot = runtime_sizes_.find(&bound);
	if (slot == PointerMap::kMissing)
	{
		slot = generated_slot(lowir::SlotKind::Tmpobj, size);
		runtime_sizes_.set(&bound, slot);
	}
	Place saved = Place();
	saved.storage = lowir::Value::slot(slot);
	store(size, bytes, saved);
	if (ready == lowir::kNoId)
		return bytes;
	store(flag, integer(flag, 1), guard);
	jump(ready);
	place(ready);
	return use_extent ? load(size, saved) : RValue();
}

RValue FunctionLowering::evaluate_runtime_bounds(
	const sema::RuntimeTypeEvaluation* bounds, const sema::Type* result, uint32_t location)
{
	if (bounds == nullptr)
		return result == nullptr ? RValue() : runtime_array_size(result, location);
	sema::TypeTable& types = lowering_.graph().types;
	const sema::Type* size_type = types.fundamental(FundamentalType::UnsignedLongInt);
	const lowir::Type size = lowering_.storage_type(size_type);
	RValue result_bytes = RValue();
	bool computed = false;
	for (const sema::RuntimeTypeEvaluation* current = bounds; current != nullptr; current = current->next)
	{
		switch (current->kind)
		{
		case sema::RuntimeTypeEvaluation::Kind::Operand:
			discard(*current->operand);
			continue;
		case sema::RuntimeTypeEvaluation::Kind::Sequence:
			evaluate_runtime_bounds(current->sequence, nullptr, location);
			continue;
		case sema::RuntimeTypeEvaluation::Kind::Repeated:
			throw LoweringError(location, "a repeated type evaluation needs a declaration");
		case sema::RuntimeTypeEvaluation::Kind::ArrayBound:
			break;
		}
		const sema::Type* array = current->array;
		const RValue bytes = evaluate_array_bound(array, size_type, size, array == result);
		if (array == result)
		{
			result_bytes = bytes;
			computed = true;
		}
	}
	return computed || result == nullptr ? result_bytes : runtime_array_size(result, location);
}

void FunctionLowering::local_runtime_array(
	const sema::VariableEntity* variable, const sema::RuntimeTypeEvaluation* bounds, uint32_t location)
{
	const sema::Type* type = variable->type;
	const RValue bytes = evaluate_runtime_bounds(bounds, type, location);
	const lowir::Type pointer = program_.pointer_type();
	const uint64_t natural = lowering_.alignment_of(type, location);
	const uint64_t alignment = variable->alignment_request > natural ? variable->alignment_request : natural;
	// StackAlloc guarantees sixteen-byte alignment. Stronger alignments
	// reserve padding and round the returned address, retaining the original
	// mark for all exits from this declaration's scope.
	lowir::Instruction save = lowir::make_instruction(lowir::Opcode::StackSave, pointer);
	const lowir::Value mark = emit_value(save, pointer);
	const RValue address = dynamic_stack_allocate(bytes, alignment);
	Cleanup cleanup = Cleanup();
	cleanup.storage = mark;
	cleanup.type = type;
	cleanup.variable = variable;
	cleanup.unwind = cleanup.shared_return = cleanup.conditional = lowir::kNoId;
	cleanup.restores_stack = true;
	cleanups_.push_back(cleanup);
	Local local = Local();
	local.slot = lowir::kNoId;
	local.address = address.value;
	local.depth = cleanups_.size();
	local_index_.set(variable, static_cast<uint32_t>(locals_.size()));
	locals_.push_back(local);
}

} // namespace lower
