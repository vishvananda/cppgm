#include "lower/function_lowering.h"

#include <algorithm>

#include "sema/conversions.h"
#include "sema/coroutine_records.h"
#include "sema/expression_facts.h"

namespace lower {

static uint64_t AlignFrameOffset(uint64_t offset, uint64_t alignment)
{
	return (offset + alignment - 1) & ~(alignment - 1);
}

enum class CoroutineAction : uint32_t
{
	Start,
	Resume,
	Destroy
};

struct FrameParameter
{
	const sema::Entity* entity;
	const sema::Type* type;
	uint64_t offset;
};

// The first two entries and the promise offset are also used by the
// coroutine handle builtins. Remaining storage is private to this function.
class CoroutineFrameLayout
{
public:
	CoroutineFrameLayout(ProgramLowering& lowering, const sema::FunctionEntity* function,
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
		initial_awaiter = reserve_type(lowering, facts.initial->awaiter->type);
		final_awaiter = reserve_type(lowering, facts.final->awaiter->type);
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

	uint64_t reserve_type(ProgramLowering& lowering, const sema::Type* type)
	{
		if (type->is_reference())
		{
			const uint64_t word = lowering.program().pointer_type().pointer_bytes();
			return reserve(word, word);
		}
		return reserve(lowering.size_of(type, location_), lowering.alignment_of(type, location_));
	}

	uint64_t reserve(uint64_t size, uint64_t alignment)
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

	uint64_t alignment() const { return alignment_; }
	uint64_t allocation_bytes(ProgramLowering& lowering) const
	{
		const uint64_t extra = over_aligned(lowering) ? alignment_ - 1 : 0;
		if (extra > limit_ - end_)
			throw LoweringError(location_, "coroutine frame allocation exceeds PTRDIFF_MAX");
		return end_ + extra;
	}

	bool over_aligned(ProgramLowering& lowering) const
	{
		return alignment_ > target_model::default_new_alignment(lowering.program().target);
	}

	uint64_t resume;
	uint64_t destroy;
	uint64_t promise;
	uint64_t raw_allocation;
	uint64_t state;
	uint64_t initial_awaiter;
	uint64_t final_awaiter;
	std::vector<FrameParameter> parameters;

private:
	uint32_t location_;
	uint64_t limit_;
	uint64_t end_ = 0;
	uint64_t alignment_ = 1;
};

lowir::SymbolId FunctionLowering::coroutine_entry(const char* suffix, bool with_action)
{
	const std::string name = lowering_.function_spelling(function_) + suffix;
	const lowir::SymbolId symbol = lowering_.new_symbol(name);
	lowir::Signature signature = {};
	signature.first_parameter = static_cast<uint32_t>(program_.parameters.size());
	signature.parameter_count = with_action ? 2 : 1;
	signature.result = lowir::Type::scalar(lowir::TypeKind::Void);
	signature.boundary.unwind = lowering_.exceptions() ? ir_model::CUM_DEFAULT : ir_model::CUM_NO;
	lowir::Parameter frame = {};
	frame.name = lowering_.intern("frame", 5);
	frame.type = program_.pointer_type();
	program_.parameters.push_back(frame);
	if (with_action)
	{
		lowir::Parameter action = {};
		action.name = lowering_.intern("action", 6);
		action.type = lowir::Type::scalar(lowir::TypeKind::U32);
		program_.parameters.push_back(action);
	}
	program_.declare_function(symbol, lowir::SymbolKind::FunctionDefinition, program_.add_signature(signature));
	program_.symbols[symbol].metadata.binding = ir_model::SBM_INTERNAL;
	return symbol;
}

lowir::Value FunctionLowering::allocate_coroutine_frame(
	const sema::CoroutineFacts& facts, uint64_t bytes, uint32_t location)
{
	const sema::FunctionEntity* allocator = facts.allocate;
	const sema::Type* signature = allocator->type->canonical;
	const size_t first = arguments_.size();
	note_call_arguments(allocator, facts.allocation_arguments);
	const bool throwing = call_may_throw(allocator);
	begin_call(throwing);
	arguments_.push_back(integer(AbiWordType(program_.target), bytes).value);
	for (uint32_t i = 0; i < facts.allocation_arguments.size; ++i)
	{
		const sema::Type* type = i + 1 < signature->param_count ? signature->params[i + 1] : nullptr;
		push_argument(*facts.allocation_arguments[i], type);
	}
	for (uint32_t i = facts.allocation_arguments.size + 1; i < signature->param_count; ++i)
		push_default_argument(allocator, i, signature->params[i], location);
	const lowir::Value result = allocation_result(allocator, first);
	end_call(throwing);
	return result;
}

void FunctionLowering::free_coroutine_frame(const sema::CoroutineFacts& facts, lowir::Value allocation, uint64_t bytes)
{
	const sema::FunctionEntity* function = facts.deallocate;
	const size_t first = arguments_.size();
	const bool throwing = call_may_throw(function);
	begin_call(throwing);
	arguments_.push_back(allocation);
	if (function->type->canonical->param_count == 2)
		arguments_.push_back(integer(AbiWordType(program_.target), bytes).value);
	lowering_.demand(function, EntryVariant::Complete);
	const lowir::Value target = lowir::Value::symbol(lowering_.function_symbol(function));
	emit_call(lowir::Type::scalar(lowir::TypeKind::Void), target, first, lowir::kNoId, throwing);
	end_call(throwing);
}

void FunctionLowering::bind_coroutine_storage(const sema::Entity* entity, lowir::Value address)
{
	Local binding = {};
	binding.slot = lowir::kNoId;
	binding.reference = entity->type->is_reference();
	binding.address = address;
	binding.depth = cleanups_.size();
	const uint32_t index = local_index_.find(entity);
	if (index != PointerMap::kMissing)
	{
		locals_[index] = binding;
		return;
	}
	local_index_.set(entity, static_cast<uint32_t>(locals_.size()));
	locals_.push_back(binding);
}

lowir::Value FunctionLowering::prepare_coroutine_result(const syntax::Expr& expression)
{
	const size_t first = cleanups_.size();
	const bool region = begin_full_expression(&expression);
	lowir::Value value;
	const sema::Type* result = function_->type->canonical->element;
	const sema::ClassEntity* shape = sema::ClassOf(result);
	if (shape != nullptr)
	{
		lowir::Value destination = result_destination_;
		if (destination.kind == lowir::ValueKind::None)
		{
			value = lowir::Value::slot(generated_slot(lowir::SlotKind::Retobj, result_type_));
			Place holder = {};
			holder.storage = value;
			destination = address_of(holder);
		}
		initialize_result(expression, expression.facts->conversion, shape, destination, expression.location);
	}
	else if (sema::IsVoid(result))
		discard(expression);
	else if (result->is_reference())
		value = bind_reference(expression, result, ConversionContext::Return);
	else
		value = fit(operand(expression, ConversionContext::Return), result).value;
	destroy_temporaries(first);
	end_full_expression(region);
	return value;
}

Place FunctionLowering::coroutine_place(lowir::Value frame, uint64_t offset)
{
	Place place = {};
	place.storage = element_address(frame, offset, 1);
	return place;
}

void FunctionLowering::initialize_coroutine_awaiter(const sema::CoroutineAwait& await, const Place& slot)
{
	const sema::Entity* source = await.source->facts->entity;
	if (await.source->kind != syntax::ExprKind::Call || source == nullptr ||
		source->kind != sema::EntityKind::Function || source->type->canonical->param_count != 0)
		throw LoweringError(await.source->location, "the await operand needs frame lowering for intermediates");
	const size_t first = cleanups_.size();
	const bool region = begin_full_expression(await.source);
	const sema::Type* type = await.awaiter->type;
	if (type->is_reference())
	{
		const lowir::Type pointer = program_.pointer_type();
		const lowir::Value referent = address(*await.source);
		store(pointer, RValue{ referent, pointer }, slot);
	}
	else
		materialize(*await.source, address_of(slot), await.source->location);
	bind_coroutine_storage(await.awaiter, slot.storage);
	if (cleanups_.size() != first)
		throw LoweringError(await.source->location, "an await operand needs frame storage for its temporaries");
	end_full_expression(region);
}

void FunctionLowering::emit_coroutine_suspend(const sema::CoroutineAwait& await, lowir::Value frame,
	uint64_t state_offset, uint32_t state, lowir::BlockId resumed, lowir::BlockId suspended)
{
	const lowir::BlockId suspending = new_block(lowir::BlockKind::IfThen);
	const size_t first = cleanups_.size();
	const bool ready_region = begin_full_expression(await.ready);
	const RValue ready = truth(*await.ready);
	destroy_temporaries(first);
	end_full_expression(ready_region);
	branch(ready, resumed, suspending);
	place(suspending);
	const lowir::Type state_type = lowir::Type::scalar(lowir::TypeKind::U32);
	store(state_type, integer(state_type, state), coroutine_place(frame, state_offset));
	const syntax::Expr& call = await.transfer != nullptr ? *await.transfer : *await.suspend;
	const bool boolean = await.transfer == nullptr && !sema::IsVoid(call.facts->type);
	const bool region = begin_full_expression(&call, !boolean);
	RValue suspended_now = {};
	if (boolean)
		suspended_now = truth(call);
	else
		discard(call);
	destroy_temporaries(first);
	end_full_expression(region);
	if (boolean)
		branch(suspended_now, suspended, resumed);
	else
		jump(suspended);
}

void FunctionLowering::finish_coroutine_awaiter(const sema::CoroutineAwait& await, const Place& slot)
{
	const bool region = begin_full_expression(await.resume, true);
	const size_t first = cleanups_.size();
	discard(*await.resume);
	destroy_temporaries(first);
	end_full_expression(region);
	if (!await.awaiter->type->is_reference())
		destroy(await.awaiter->type, address_of(slot), await.resume->location);
}

void FunctionLowering::coroutine_return(const syntax::CoroutineExpr& expr)
{
	if (expr.operand != nullptr && expr.operand->facts != nullptr && sema::IsVoid(expr.operand->facts->type))
	{
		const size_t first = cleanups_.size();
		const bool region = begin_full_expression(expr.operand, true);
		discard(*expr.operand);
		destroy_temporaries(first);
		end_full_expression(region);
	}
	coroutine_return(*expr.facts->replacement);
}

void FunctionLowering::coroutine_return(const syntax::Expr& call)
{
	const size_t first = cleanups_.size();
	const bool region = begin_full_expression(&call, true);
	discard(call);
	destroy_temporaries(first);
	end_full_expression(region);
	destroy_cleanups(0);
	jump(coroutine_final_suspend_);
}

void FunctionLowering::lower_coroutine_actor(
	CoroutineFrameLayout& frame, const sema::CoroutineFacts& facts, const syntax::CompoundStmt& body)
{
	const lowir::Value self = lowir::Value::temp(builder_.parameter(0));
	const lowir::Type word = lowir::Type::scalar(lowir::TypeKind::U32);
	const RValue action{ lowir::Value::temp(builder_.parameter(1)), word };
	const lowir::Type pointer = program_.pointer_type();
	const uint32_t location = body.location;
	for (const FrameParameter& parameter : frame.parameters)
	{
		const Place from = coroutine_place(self, parameter.offset);
		bind_coroutine_storage(parameter.entity, from.storage);
		if (parameter.entity == facts.object)
		{
			this_slot_ = new_slot(lowering_.this_name(), pointer);
			Place to = {};
			to.storage = lowir::Value::slot(this_slot_);
			store(pointer, load(pointer, from), to);
		}
	}
	closure_captures();
	const Place promise = coroutine_place(self, frame.promise);
	bind_coroutine_storage(facts.promise, promise.storage);

	const Place initial = coroutine_place(self, frame.initial_awaiter);
	const Place final = coroutine_place(self, frame.final_awaiter);
	const lowir::BlockId create = new_block(lowir::BlockKind::IfThen);
	const lowir::BlockId resume_or_destroy = new_block(lowir::BlockKind::IfElse);
	const lowir::BlockId resume = new_block(lowir::BlockKind::IfThen);
	const lowir::BlockId suspend = new_block(lowir::BlockKind::IfEnd);
	const lowir::BlockId finish = new_block(lowir::BlockKind::IfEnd);
	const lowir::BlockId destroy_suspended = new_block(lowir::BlockKind::IfElse);
	const lowir::BlockId destroy_initial = new_block(lowir::BlockKind::IfThen);
	const lowir::BlockId destroy_final = new_block(lowir::BlockKind::IfElse);
	const lowir::BlockId destroy_frame = new_block(lowir::BlockKind::IfEnd);
	coroutine_final_suspend_ = new_block(lowir::BlockKind::IfEnd);

	const auto is_action = [&](CoroutineAction expected) {
		return compare(lowir::ComparePredicate::Eq, word, action, integer(word, static_cast<uint32_t>(expected)));
	};
	branch(is_action(CoroutineAction::Start), create, resume_or_destroy);
	place(resume_or_destroy);
	branch(is_action(CoroutineAction::Resume), resume, destroy_suspended);

	place(create);
	initialize_coroutine_awaiter(*facts.initial, initial);
	emit_coroutine_suspend(*facts.initial, self, frame.state, 0, resume, suspend);
	place(resume);
	finish_coroutine_awaiter(*facts.initial, initial);

	{
		LexicalScope lexical(*this);
		for (const syntax::Stmt* item : body.items)
			statement(*item);
		if (!terminated_)
		{
			if (facts.return_void != nullptr)
				coroutine_return(*facts.return_void);
			else
				terminate(lowir::make_instruction(lowir::Opcode::Unreachable, result_type_));
		}
		leave_scope(0, body);
	}

	place(coroutine_final_suspend_);
	store(pointer, integer(pointer, 0), coroutine_place(self, frame.resume));
	initialize_coroutine_awaiter(*facts.final, final);
	emit_coroutine_suspend(*facts.final, self, frame.state, 1, finish, suspend);
	place(finish);
	finish_coroutine_awaiter(*facts.final, final);
	jump(destroy_frame);

	const lowir::Instruction ret = lowir::make_instruction(lowir::Opcode::Return, result_type_);
	place(suspend);
	terminate(ret);

	place(destroy_suspended);
	const RValue state = load(word, coroutine_place(self, frame.state));
	branch(compare(lowir::ComparePredicate::Eq, word, state, integer(word, 0)), destroy_initial, destroy_final);
	place(destroy_initial);
	if (!facts.initial->awaiter->type->is_reference())
		destroy(facts.initial->awaiter->type, address_of(initial), location);
	jump(destroy_frame);
	place(destroy_final);
	if (!facts.final->awaiter->type->is_reference())
		destroy(facts.final->awaiter->type, address_of(final), location);
	jump(destroy_frame);

	place(destroy_frame);
	destroy(facts.promise->type, address_of(promise), location);
	for (auto parameter = frame.parameters.rbegin(); parameter != frame.parameters.rend(); ++parameter)
		if (sema::ClassOf(parameter->type) != nullptr)
			destroy(parameter->type, coroutine_place(self, parameter->offset).storage, location);
	const lowir::Value allocation = load(pointer, coroutine_place(self, frame.raw_allocation)).value;
	free_coroutine_frame(facts, allocation, frame.allocation_bytes(lowering_));
	terminate(ret);
	place_late_blocks();
	if (!lowering_.streaming())
		builder_.finish();
}

void FunctionLowering::lower_coroutine(const sema::CoroutineFacts& facts, const syntax::CompoundStmt& body)
{
	CoroutineFrameLayout layout(lowering_, function_, facts, body.location);
	const lowir::SymbolId actor = coroutine_entry(".actor", true);
	const lowir::SymbolId resume = coroutine_entry(".resume", false);
	const lowir::SymbolId destroy_entry = coroutine_entry(".destroy", false);
	const lowir::Type pointer = program_.pointer_type();
	const lowir::Type word = lowir::Type::scalar(lowir::TypeKind::U32);
	const lowir::Type void_type = lowir::Type::scalar(lowir::TypeKind::Void);

	const auto make_entry = [&](lowir::SymbolId entry, CoroutineAction action) {
		lowir::FunctionBuilder thunk(program_, entry);
		const lowir::BlockId start = thunk.add_block(lowering_.entry_name());
		thunk.place_block(start);
		thunk.set_insertion_block(start);
		const lowir::Value args[] = { lowir::Value::temp(thunk.parameter(0)),
			thunk.integer(static_cast<uint32_t>(action)) };
		thunk.call(void_type, lowir::Value::symbol(actor), args, 2, lowir::kNoId, 0);
		thunk.ret(void_type, lowir::Value::none());
		if (!lowering_.streaming())
			thunk.finish();
	};
	make_entry(resume, CoroutineAction::Resume);
	make_entry(destroy_entry, CoroutineAction::Destroy);
	{
		FunctionLowering worker(lowering_, actor, nullptr);
		worker.function_ = function_;
		worker.lower_coroutine_actor(layout, facts, body);
	}
	for (lowir::SymbolId entry : { actor, resume, destroy_entry })
	{
		lowering_.release_definition(entry);
		++lowering_.counters().functions;
	}

	// A class allocator can inspect the incoming arguments before copying
	// them into the frame. Keep the original allocation for deallocation.
	const uint64_t bytes = layout.allocation_bytes(lowering_);
	const lowir::Value allocation = allocate_coroutine_frame(facts, bytes, body.location);
	lowir::Instruction ret = lowir::make_instruction(lowir::Opcode::Return, result_type_);
	if (facts.return_on_allocation_failure != nullptr)
	{
		const lowir::BlockId failed = new_block(lowir::BlockKind::IfThen);
		const lowir::BlockId allocated = new_block(lowir::BlockKind::IfElse);
		branch(compare(lowir::ComparePredicate::Eq, pointer, RValue{ allocation, pointer }, integer(pointer, 0)),
			failed, allocated);
		place(failed);
		ret.ops[0] = prepare_coroutine_result(*facts.return_on_allocation_failure);
		terminate(ret);
		place(allocated);
	}
	lowir::Value frame = allocation;
	if (layout.over_aligned(lowering_))
	{
		const lowir::Type address = AbiWordType(program_.target);
		const uint64_t mask = layout.alignment() - 1;
		const RValue base = copy(address, RValue{ allocation, pointer });
		const RValue rounded = binary(lowir::BinaryOp::Add, address, base, integer(address, mask));
		frame = copy(pointer, binary(lowir::BinaryOp::And, address, rounded, integer(address, ~mask))).value;
	}
	const auto save_pointer = [&](uint64_t offset, lowir::Value value) {
		store(pointer, RValue{ value, pointer }, coroutine_place(frame, offset));
	};
	save_pointer(layout.raw_allocation, allocation);
	save_pointer(layout.resume, lowir::Value::symbol(resume));
	save_pointer(layout.destroy, lowir::Value::symbol(destroy_entry));

	uint32_t next_copy = 0;
	for (const FrameParameter& parameter : layout.parameters)
	{
		const Place target = coroutine_place(frame, parameter.offset);
		const sema::Type* type = parameter.type;
		if (parameter.entity == facts.object)
		{
			Place source = {};
			source.storage = lowir::Value::slot(this_slot_);
			store(pointer, load(pointer, source), target);
		}
		else if (sema::ClassOf(type) != nullptr)
		{
			const sema::CoroutineParameterCopy& selected = facts.parameter_copies[next_copy++];
			construct(type, target.storage, selected.initializer, selected.constructor, EntryVariant::Complete,
				body.location);
		}
		else if (type->is_reference())
		{
			const Place incoming = variable_place(parameter.entity, type->element, body.location);
			store(pointer, RValue{ address_of(incoming), pointer }, target);
		}
		else
		{
			const lowir::Type storage = lowering_.storage_type(type);
			store(storage, load(storage, variable_place(parameter.entity, type, body.location)), target);
		}
		bind_coroutine_storage(parameter.entity, target.storage);
	}

	const Place promise = coroutine_place(frame, layout.promise);
	bind_coroutine_storage(facts.promise, promise.storage);
	construct(facts.promise->type, promise.storage, facts.promise_initializer, facts.promise->constructor,
		EntryVariant::Complete, body.location);
	ret.ops[0] = prepare_coroutine_result(*facts.return_object);
	const size_t first = arguments_.size();
	arguments_.push_back(frame);
	arguments_.push_back(integer(word, static_cast<uint32_t>(CoroutineAction::Start)).value);
	emit_call(void_type, lowir::Value::symbol(actor), first, lowir::kNoId, false);
	terminate(ret);
	place_late_blocks();
	if (!lowering_.streaming())
		builder_.finish();
}

} // namespace lower
