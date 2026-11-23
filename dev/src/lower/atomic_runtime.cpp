#include "lower/function_lowering.h"

#include <cstring>

#include "sema/analyzer.h"
#include "sema/conversions.h"
#include "sema/expression_facts.h"

namespace lower {

lowir::SymbolId ProgramLowering::atomic_runtime_function(sema::Intrinsic kind)
{
	// The generic ABI uses size_t, pointers and int orders. Compare-exchange
	// has no weak argument: a strong operation also satisfies a weak request.
	const char* name = nullptr;
	const char* parameters = nullptr;
	lowir::TypeKind result = lowir::TypeKind::Void;
	switch (kind)
	{
	case sema::Intrinsic::AtomicLoad:
		name = "__atomic_load";
		parameters = "sppi";
		break;
	case sema::Intrinsic::AtomicStore:
		name = "__atomic_store";
		parameters = "sppi";
		break;
	case sema::Intrinsic::AtomicExchange:
		name = "__atomic_exchange";
		parameters = "spppi";
		break;
	case sema::Intrinsic::AtomicCompareExchange:
		name = "__atomic_compare_exchange";
		parameters = "spppii";
		result = lowir::TypeKind::I1;
		break;
	case sema::Intrinsic::AtomicIsLockFree:
		name = "__atomic_is_lock_free";
		parameters = "sp";
		result = lowir::TypeKind::U8;
		break;
	default:
		throw LoweringError(0, "an atomic builtin without a generic runtime form");
	}
	const lowir::SymbolId symbol = external_symbol(name, std::string("__cppgm_generic_") + (name + 2));
	if (program_.symbols[symbol].kind != lowir::SymbolKind::Unresolved)
		return symbol;
	lowir::Signature signature = lowir::Signature();
	signature.first_parameter = static_cast<uint32_t>(program_.parameters.size());
	signature.parameter_count = static_cast<uint32_t>(std::strlen(parameters));
	for (uint32_t i = 0; i < signature.parameter_count; ++i)
	{
		lowir::Parameter parameter = lowir::Parameter();
		parameter.name = argument_name(i);
		parameter.type = parameters[i] == 'p'
			? program_.pointer_type()
			: lowir::Type::scalar(parameters[i] == 's' && program_.pointer_type().pointer_bytes() == 8
					  ? lowir::TypeKind::I64
					  : lowir::TypeKind::I32);
		program_.parameters.push_back(parameter);
	}
	signature.result = lowir::Type::scalar(result);
	signature.boundary.unwind = ir_model::CUM_NO;
	program_.declare_function(symbol, lowir::SymbolKind::FunctionDeclaration, program_.add_signature(signature));
	lowir::SymbolMetadata& metadata = program_.symbols[symbol].metadata;
	metadata.linkage = ir_model::LLM_C;
	metadata.binding = ir_model::SBM_STRONG;
	metadata.object = intern(name, static_cast<uint32_t>(std::strlen(name)));
	++counters_.declarations;
	return symbol;
}

RValue FunctionLowering::atomic_runtime_call(const syntax::CallExpr& expr, sema::Intrinsic kind)
{
	if (!lowering_.host_objects() && !target_model::is_wasm(program_.target) && !lowering_.analyzer_->c_source())
		throw LoweringError(expr.location, "a generic atomic runtime call requires host object mode");
	const bool compare = kind == sema::Intrinsic::AtomicCompareExchange;
	const syntax::Slice<syntax::Expr*>& operands = expr.arguments;
	const sema::Type* pointer = operands[0]->facts->type->unqualified;
	const size_t base = arguments_.size();
	arguments_.push_back(integer(
		lowir::Type::scalar(program_.pointer_type().pointer_bytes() == 4 ? lowir::TypeKind::I32 : lowir::TypeKind::I64),
		lowering_.size_of(pointer->element, expr.location))
			.value);
	for (uint32_t i = 0; i < operands.size; ++i)
	{
		if (compare && i == 3)
			discard(*operands[i]);
		else if (i >= operands.size - (compare ? 2 : 1))
		{
			const lowir::MemoryOrder order = memory_order(*operands[i]);
			arguments_.push_back(
				integer(lowir::Type::scalar(lowir::TypeKind::I32), static_cast<uint64_t>(order)).value);
		}
		else
			arguments_.push_back(operand(*operands[i], ConversionContext::Argument).value);
	}
	RValue result;
	result.type = lowir::Type::scalar(compare ? lowir::TypeKind::I1 : lowir::TypeKind::Void);
	result.value = emit_call(
		result.type, lowir::Value::symbol(lowering_.atomic_runtime_function(kind)), base, lowir::kNoId, false);
	return result;
}

RValue FunctionLowering::atomic_buffered(const syntax::CallExpr& expr, sema::Intrinsic kind)
{
	using lowir::Type;
	using lowir::Value;
	using sema::Intrinsic;
	const auto& operands = expr.arguments;
	const auto address = [&](uint32_t i) { return operand(*operands[i], ConversionContext::Argument).value; };
	const auto* object_type = operands[0]->facts->type->unqualified->element;
	const auto* value_type = object_type->unqualified;
	const Type value_storage = lowering_.storage_type(value_type);
	const Type atomic_storage = lowering_.storage_type(object_type);
	const uint64_t size = lowir::storage_bytes(value_storage);
	const uint64_t width = lowir::storage_bytes(atomic_storage);
	const bool padded = size != width;
	const Value target = address(0);
	const auto write_value = [&](uint32_t i, Value destination) {
		const auto& source = *operands[i];
		if (value_type->kind == sema::TypeKind::Class)
			initialize_from(source, source.facts->conversion, destination, expr.location);
		else
		{
			Place place = {};
			place.storage = destination;
			store(value_storage, operand(source, ConversionContext::Argument), place);
		}
	};
	if (kind == Intrinsic::AtomicStoreN && operands.size == 2)
	{
		// Clang's atomic_init initializes storage before it is shared.
		write_value(1, target);
		clear_atomic_padding(target, size, width);
		return RValue();
	}
	const bool by_value = kind == Intrinsic::AtomicLoadN || kind == Intrinsic::AtomicStoreN ||
		kind == Intrinsic::AtomicExchangeN || kind == Intrinsic::AtomicCompareExchangeN;
	const bool reads = kind == Intrinsic::AtomicLoadN || kind == Intrinsic::AtomicLoad ||
		kind == Intrinsic::AtomicExchangeN || kind == Intrinsic::AtomicExchange;
	const bool writes = kind != Intrinsic::AtomicLoadN && kind != Intrinsic::AtomicLoad;
	const bool compare = kind == Intrinsic::AtomicCompareExchangeN || kind == Intrinsic::AtomicCompareExchange;
	const Value expected = compare ? address(1) : Value();
	const uint32_t input_index = compare ? 2 : 1;
	const Value input = writes && !by_value ? address(input_index) : Value();
	const Value desired = writes ? address_of(atomic_buffer(lowir::SlotKind::AtomicArg, atomic_storage)) : Value();
	if (writes && by_value)
		write_value(input_index, desired);
	const Value output = reads && !by_value ? address(writes ? 2 : 1) : Value();
	const Value result = reads ? address_of(atomic_buffer(lowir::SlotKind::AtomicResult, atomic_storage)) : Value();
	const Value staged_expected = compare && padded
		? address_of(atomic_buffer(lowir::SlotKind::AtomicExpected, atomic_storage))
		: expected;
	if (compare)
		discard(*operands[3]);
	const bool runtime = (expr.facts->value & sema::kAtomicRuntimeCall) != 0;
	RValue dynamic_order = {};
	const lowir::MemoryOrder order = memory_order(
		*operands[operands.size - (compare ? 2 : 1)], !runtime && !reads && !compare ? &dynamic_order : nullptr);
	const lowir::MemoryOrder failure = compare ? memory_order(*operands[operands.size - 1])
											   : lowir::MemoryOrder::Relaxed;
	if (writes)
	{
		if (!by_value)
			copy_bytes(input, desired, size, 1);
		clear_atomic_padding(desired, size, width);
	}
	if (compare && padded)
	{
		copy_bytes(expected, staged_expected, size, 1);
		clear_atomic_padding(staged_expected, size, width);
	}

	AtomicAccess access = {};
	access.object = target;
	access.expected = staged_expected;
	access.desired = desired;
	access.result = result;
	access.order = order;
	access.failure = failure;
	const RValue success = emit_atomic_access(atomic_storage, access, dynamic_order, expr.location);
	if (compare && padded)
	{
		// Only failure changes the caller's expected object, and that
		// object has space for the value bytes only.
		const auto failed = new_block(lowir::BlockKind::IfElse);
		const auto done = new_block(lowir::BlockKind::AtomicDone);
		branch(success, done, failed);
		place(failed);
		copy_bytes(staged_expected, expected, size, 1);
		jump(done);
		place(done);
	}
	if (!reads)
		return success;
	if (by_value)
	{
		Place view = {};
		view.storage = result;
		return load(value_storage, view);
	}
	copy_bytes(result, output, size, 1);
	return RValue();
}

RValue FunctionLowering::emit_atomic_access(
	lowir::Type storage, const AtomicAccess& access, const RValue& dynamic_order, uint32_t location)
{
	using lowir::Opcode;
	using lowir::Type;
	using lowir::TypeKind;
	using lowir::Value;
	using sema::Intrinsic;
	const bool compare = access.expected.kind != lowir::ValueKind::None;
	const bool reads = access.result.kind != lowir::ValueKind::None;
	const bool writes = access.desired.kind != lowir::ValueKind::None;
	const uint64_t width = lowir::storage_bytes(storage);
	RValue success = {};
	if (!target_model::is_inline_atomic_size(width))
	{
		if (!lowering_.analyzer_->atomics_enabled())
			throw LoweringError(location, "a generic atomic runtime call with atomics disabled by -mno-atomics");
		if (!lowering_.host_objects() && !target_model::is_wasm(program_.target) && !lowering_.analyzer_->c_source())
			throw LoweringError(location, "a generic atomic runtime call requires host object mode");
		const Type i32 = Type::scalar(TypeKind::I32);
		const Type size_type = program_.pointer_type().pointer_bytes() == 4 ? i32 : Type::scalar(TypeKind::I64);
		const size_t base = arguments_.size();
		arguments_.push_back(integer(size_type, width).value);
		arguments_.push_back(access.object);
		if (compare)
			arguments_.push_back(access.expected);
		if (writes)
			arguments_.push_back(access.desired);
		if (reads)
			arguments_.push_back(access.result);
		arguments_.push_back(integer(i32, static_cast<uint64_t>(access.order)).value);
		if (compare)
			arguments_.push_back(integer(i32, static_cast<uint64_t>(access.failure)).value);
		const Intrinsic operation = compare ? Intrinsic::AtomicCompareExchange
			: !writes                       ? Intrinsic::AtomicLoad
			: reads                         ? Intrinsic::AtomicExchange
											: Intrinsic::AtomicStore;
		success.type = Type::scalar(compare ? TypeKind::I1 : TypeKind::Void);
		success.value = emit_call(
			success.type, Value::symbol(lowering_.atomic_runtime_function(operation)), base, lowir::kNoId, false);
	}
	else
	{
		Type bits;
		if (!atomic_bits(storage, bits))
			throw LoweringError(location, "an inline atomic object without an integer representation");
		const auto raw = [](Value address) {
			Place place = {};
			place.storage = address;
			place.untyped = true;
			return place;
		};
		const Value value = writes ? load(bits, raw(access.desired)).value : Value();
		const Opcode op = compare ? Opcode::AtomicCompareExchange
			: !writes             ? Opcode::AtomicLoad
			: reads               ? Opcode::AtomicExchange
								  : Opcode::AtomicStore;
		lowir::Instruction inst = lowir::make_instruction(op, bits);
		inst.order = access.order;
		if (compare)
		{
			inst.ops[0] = access.object;
			inst.ops[1] = access.expected;
			inst.ops[2] = value;
			inst.sub = static_cast<uint8_t>(access.failure);
			success.type = Type::scalar(TypeKind::I64);
			success.value = emit_value(inst, success.type);
		}
		else if (reads)
		{
			inst.ops[0] = access.object;
			inst.ops[1] = value;
			store(bits, RValue{ emit_value(inst, bits), bits }, raw(access.result));
		}
		else
		{
			inst.ops[0] = value;
			inst.ops[1] = access.object;
			emit_ordered(inst, dynamic_order);
		}
	}
	return success;
}

bool FunctionLowering::uses_atomic_buffer(lowir::Type storage)
{
	return storage.is_object() || !target_model::is_inline_atomic_size(lowir::storage_bytes(storage));
}

Place FunctionLowering::atomic_buffer(lowir::SlotKind kind, lowir::Type storage)
{
	Place buffer = {};
	buffer.storage = lowir::Value::slot(generated_slot(kind, storage));
	buffer.untyped = true;
	return buffer;
}

void FunctionLowering::clear_atomic_padding(lowir::Value object, uint64_t size, uint64_t width)
{
	if (size < width)
		zero_bytes(field_address(object, size), width - size, 1);
}

void FunctionLowering::initialize_c_atomic_padding(const sema::Type* type, const AddressPath& path)
{
	if (!lowering_.analyzer_->c_source())
		return;
	const uint64_t size = lowir::storage_bytes(lowering_.storage_type(type->unqualified));
	const uint64_t width = lowir::storage_bytes(lowering_.storage_type(type));
	if (size < width)
		clear_atomic_padding(path_address(path), size, width);
}

RValue FunctionLowering::read_c_atomic_value(
	const sema::Type* type, lowir::Type storage, const Place& place, uint32_t location)
{
	const lowir::Type value_storage = lowering_.storage_type(type->unqualified);
	Place result = {};
	result.storage = address_of(atomic_buffer(lowir::SlotKind::AtomicResult, storage));
	result.untyped = true;
	AtomicAccess access = {};
	access.object = address_of(place);
	access.result = result.storage;
	emit_atomic_access(storage, access, RValue(), location);
	return load(value_storage, result);
}

void FunctionLowering::write_c_atomic_value(
	lowir::Type storage, const RValue& value, const Place& place, uint32_t location)
{
	Place desired = {};
	desired.storage = address_of(atomic_buffer(lowir::SlotKind::AtomicArg, storage));
	desired.untyped = true;
	store(value.type, value, desired);
	clear_atomic_padding(desired.storage, lowir::storage_bytes(value.type), lowir::storage_bytes(storage));
	AtomicAccess access = {};
	access.object = address_of(place);
	access.desired = desired.storage;
	emit_atomic_access(storage, access, RValue(), location);
}

RValue FunctionLowering::atomic_lock_free(const syntax::CallExpr& expr)
{
	const lowir::Type boolean = lowir::Type::scalar(lowir::TypeKind::U8);
	const lowir::Type pointer_type = program_.pointer_type();
	const RValue size = operand(*expr.arguments[0], ConversionContext::Argument);
	const RValue pointer = expr.arguments.size == 2 ? operand(*expr.arguments[1], ConversionContext::Argument)
													: integer(pointer_type, 0);
	if ((expr.facts->value >> 8) != 0)
		return integer(boolean, 0);
	if (!target_model::is_wasm(program_.target) && !target_model::is_darwin(program_.target))
	{
		const size_t base = arguments_.size();
		arguments_.push_back(size.value);
		arguments_.push_back(pointer.value);
		const lowir::SymbolId symbol = lowering_.atomic_runtime_function(sema::Intrinsic::AtomicIsLockFree);
		return RValue{ emit_call(boolean, lowir::Value::symbol(symbol), base, lowir::kNoId, false), boolean };
	}
	// The Wasm and Darwin inline instruction profiles cover naturally
	// aligned powers of two through eight bytes. Zero wraps out of range.
	using lowir::BinaryOp;
	using lowir::ComparePredicate;
	const lowir::Type type = size.type;
	const RValue mask = binary(BinaryOp::Sub, type, size, integer(type, 1));
	const RValue in_range = compare(
		ComparePredicate::Ult, type, mask, integer(type, target_model::inline_atomic_max_bytes));
	const RValue alignment_bits = binary(BinaryOp::Or, type, size, copy(type, pointer));
	const RValue low_bits = binary(BinaryOp::And, type, alignment_bits, mask);
	const RValue aligned_power = compare(ComparePredicate::Eq, type, low_bits, integer(type, 0));
	return convert_op(lowir::ConvertOp::Trunc, boolean, binary(BinaryOp::And, in_range.type, in_range, aligned_power));
}

} // namespace lower
