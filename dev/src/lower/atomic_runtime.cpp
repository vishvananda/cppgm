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
	if (kind >= sema::Intrinsic::AtomicAddFetch && kind <= sema::Intrinsic::AtomicFetchNand)
	{
		const lowir::Type type = lowering_.storage_type(pointer->element);
		const lowir::Value target = operand(*operands[0], ConversionContext::Argument).value;
		const RValue input = operand(*operands[1], ConversionContext::Argument);
		const lowir::MemoryOrder order = memory_order(*operands[2]);
		return atomic_update(kind, type, target, input, order, expr.location, pointer->element->unqualified);
	}
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
		return normalize_bit_int(load(value_storage, view), value_type);
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
	return normalize_bit_int(load(value_storage, result), type);
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

void FunctionLowering::store_initializer(lowir::Type type, const RValue& value, const Place& place)
{
	if (place.is_atomic && type.kind() == lowir::TypeKind::I128 && lowering_.analyzer_->c_source())
	{
		// Initialization can store into the unshared object directly.
		// A later assignment uses the target's atomic runtime protocol.
		Place initial = place;
		initial.is_atomic = false;
		store(type, value, initial);
		return;
	}
	store(type, value, place);
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

// The atomic read-modify-writes of `_Atomic` objects' compound assignments
// and increments (expression_lowering.cpp; C11 6.5.16.2p3, 6.5.2.4p2).

bool FunctionLowering::atomic_step(const Place& place, const sema::Type* type, lowir::Type storage)
{
	// ++ and -- of an atomic integer (not bool): one atomic
	// read-modify-write (C11 6.5.2.4p2).
	const sema::Type* value = type->unqualified;
	return place.is_atomic && storage.is_integer() &&
		!(value->kind == sema::TypeKind::Fundamental && value->fundamental == FundamentalType::Bool) &&
		(value->kind != sema::TypeKind::BitInt || value->bound == lowir::integer_bits(storage.kind())) &&
		(storage.kind() != lowir::TypeKind::I128 || !lowering_.analyzer_->c_source());
}

bool FunctionLowering::atomic_bits(lowir::Type storage, lowir::Type& bits)
{
	// An integer is its own bits; a pointer or floating value (a long
	// double's 16 bytes with their padding), a binary16 or binary128
	// object, those of the integer of its size.
	uint64_t size = 0;
	switch (storage.kind())
	{
	case lowir::TypeKind::F32:
		size = 4;
		break;
	case lowir::TypeKind::F64:
		size = 8;
		break;
	case lowir::TypeKind::Ptr:
		size = storage.pointer_bytes();
		break;
	case lowir::TypeKind::F80:
		size = 16;
		break;
	case lowir::TypeKind::Obj:
		size = storage.bytes;
		break;
	default:
		bits = storage;
		return storage.is_integer();
	}
	if (size != 1 && size != 2 && size != 4 && size != 8 && size != 16)
		return false;
	bits = lowir::Type::scalar(size == 1 ? lowir::TypeKind::I8
			: size == 2                  ? lowir::TypeKind::I16
			: size == 4                  ? lowir::TypeKind::I32
			: size == 8                  ? lowir::TypeKind::I64
										 : lowir::TypeKind::I128);
	return true;
}

bool FunctionLowering::prepare_atomic_loop(lowir::Type storage, AtomicLoop& loop)
{
	loop.runtime = !target_model::is_inline_atomic_size(lowir::storage_bytes(storage)) &&
		lowering_.analyzer_->c_source();
	if (!loop.runtime)
		return atomic_bits(storage, loop.bits);
	loop.bits = storage;
	return true;
}

RValue FunctionLowering::begin_atomic_loop(
	const Place& object, lowir::Type storage, AtomicLoop& loop, uint32_t location)
{
	// The object's bits read into the expected slot (a failed exchange
	// writes what the object held there), then each try reads them as the
	// object's type.
	loop.expected = generated_slot(lowir::SlotKind::AtomicExpected, loop.bits);
	Place expected = Place();
	expected.storage = lowir::Value::slot(loop.expected);
	if (loop.runtime)
	{
		// The load and the eventual exchange must use the same runtime
		// protocol as plain reads and writes to the object.
		loop.object_address = address_of(object);
		loop.expected_address = address_of(expected);
		loop.desired_address = address_of(atomic_buffer(lowir::SlotKind::AtomicArg, storage));
		AtomicAccess access = {};
		access.object = loop.object_address;
		access.result = loop.expected_address;
		access.order = lowir::MemoryOrder::Relaxed;
		emit_atomic_access(storage, access, RValue(), location);
	}
	else
	{
		lowir::Instruction first = lowir::make_instruction(lowir::Opcode::AtomicLoad, loop.bits);
		first.ops[0] = object.storage;
		first.order = lowir::MemoryOrder::Relaxed;
		const RValue seen = { emit_value(first, loop.bits), loop.bits };
		store(loop.bits, seen, expected);
	}
	loop.retry = new_block(lowir::BlockKind::AtomicRetry);
	jump(loop.retry);
	place(loop.retry);
	if (storage == loop.bits)
	{
		const RValue raw = load(storage, expected);
		return object.bit_int_width != 0 ? normalize_bit_int(raw, object.bit_int_width, object.bit_int_signed) : raw;
	}
	if (storage.kind() == lowir::TypeKind::Ptr)
		return copy(storage, load(loop.bits, expected));
	Place view = Place();
	view.storage = address_of(expected);
	return load(storage, view);
}

void FunctionLowering::end_atomic_loop(const Place& object, lowir::Type storage, const AtomicLoop& loop,
	const RValue& updated, uint32_t location, lowir::MemoryOrder order)
{
	// The new value's bits (over a copy of the old ones: a long double's
	// padding unchanged), exchanged for the expected ones, else retried.
	// Failure only reads the value and therefore has no release part.
	using lowir::MemoryOrder;
	const MemoryOrder failure = order == MemoryOrder::Release ? MemoryOrder::Relaxed
		: order == MemoryOrder::AcqRel                        ? MemoryOrder::Acquire
															  : order;
	RValue exchanged;
	if (loop.runtime)
	{
		Place desired = {};
		desired.storage = loop.desired_address;
		desired.untyped = true;
		if (storage.kind() == lowir::TypeKind::F80)
			copy_bytes(
				loop.expected_address, desired.storage, lowir::storage_bytes(storage), lowir::data_alignment(storage));
		store(storage, updated, desired);
		AtomicAccess access = {};
		access.object = loop.object_address;
		access.expected = loop.expected_address;
		access.desired = desired.storage;
		access.order = order;
		access.failure = failure;
		exchanged = emit_atomic_access(storage, access, RValue(), location);
	}
	else
	{
		Place expected = Place();
		expected.storage = lowir::Value::slot(loop.expected);
		RValue desired = updated;
		if (storage.kind() == lowir::TypeKind::Ptr)
			desired = copy(loop.bits, updated);
		else if (storage != loop.bits)
		{
			Place fresh = Place();
			fresh.storage = lowir::Value::slot(generated_slot(lowir::SlotKind::AtomicExpected, loop.bits));
			store(loop.bits, load(loop.bits, expected), fresh);
			Place view = Place();
			view.storage = address_of(fresh);
			store(storage, updated, view);
			desired = load(loop.bits, fresh);
		}
		lowir::Instruction exchange = lowir::make_instruction(lowir::Opcode::AtomicCompareExchange, loop.bits);
		exchange.ops[0] = object.storage;
		exchange.ops[1] = address_of(expected);
		exchange.ops[2] = desired.value;
		exchange.order = order;
		exchange.sub = static_cast<uint8_t>(failure);
		exchanged.type = lowir::Type::scalar(lowir::TypeKind::I64);
		exchanged.value = emit_value(exchange, exchanged.type);
	}
	const lowir::BlockId done = new_block(lowir::BlockKind::AtomicDone);
	branch(exchanged, done, loop.retry);
	place(done);
}

RValue FunctionLowering::atomic_update(sema::Intrinsic kind, lowir::Type type, lowir::Value target, const RValue& value,
	lowir::MemoryOrder order, uint32_t location, const sema::Type* value_type)
{
	// `__atomic_<op>_fetch` (the new value) and `__atomic_fetch_<op>` (the
	// old). A subtraction adds the negated value; the bitwise updates retry
	// a compare-exchange of the value last seen (a failed exchange writes
	// the current value back into the expected slot) until it succeeds.
	using sema::Intrinsic;
	const bool fetch_first = kind >= Intrinsic::AtomicFetchAdd;
	const Intrinsic op = fetch_first
		? static_cast<Intrinsic>(static_cast<uint8_t>(kind) -
			  (static_cast<uint8_t>(Intrinsic::AtomicFetchAdd) - static_cast<uint8_t>(Intrinsic::AtomicAddFetch)))
		: kind;
	const bool runtime = type.kind() == lowir::TypeKind::I128;
	const bool partial = value_type != nullptr && value_type->kind == sema::TypeKind::BitInt &&
		value_type->bound != lowir::integer_bits(type.kind());
	if (!runtime && !partial && (op == Intrinsic::AtomicAddFetch || op == Intrinsic::AtomicSubFetch))
	{
		const RValue delta = op == Intrinsic::AtomicAddFetch ? value : unary(lowir::UnaryOp::Neg, value);
		lowir::Instruction inst = lowir::make_instruction(lowir::Opcode::AtomicAddFetch, type);
		inst.ops[0] = target;
		inst.ops[1] = delta.value;
		inst.order = order;
		RValue updated;
		updated.value = emit_value(inst, type);
		updated.type = type;
		return fetch_first ? binary(lowir::BinaryOp::Sub, type, updated, delta) : updated;
	}
	Place object = {};
	object.storage = target;
	if (partial)
		qualify(object, value_type);
	AtomicLoop loop;
	loop.bits = type;
	loop.runtime = runtime;
	const RValue previous = begin_atomic_loop(object, type, loop, location);
	using lowir::BinaryOp;
	const BinaryOp operation = op == Intrinsic::AtomicAddFetch ? BinaryOp::Add
		: op == Intrinsic::AtomicSubFetch                      ? BinaryOp::Sub
		: op == Intrinsic::AtomicOrFetch                       ? BinaryOp::Or
		: op == Intrinsic::AtomicXorFetch                      ? BinaryOp::Xor
															   : BinaryOp::And;
	// Builtin integer arithmetic wraps, even on signed operands.
	RValue updated = binary(operation, type, previous, value);
	if (op == Intrinsic::AtomicNandFetch)
		updated = unary(lowir::UnaryOp::BitNot, updated);
	if (partial)
		updated = normalize_bit_int(updated, value_type);
	end_atomic_loop(object, type, loop, updated, location, order);
	return fetch_first ? previous : updated;
}

} // namespace lower
