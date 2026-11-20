#include "lower/function_lowering.h"

#include "lower/coroutine_frame.h"
#include "sema/conversions.h"
#include "sema/coroutine_records.h"
#include "sema/expression_facts.h"

namespace lower {

enum class CoroutineAction : uint32_t
{
	Start,
	Resume,
	Destroy
};

lowir::SymbolId FunctionLowering::coroutine_entry(const char* suffix, bool with_action)
{
	const std::string name = lowering_.function_spelling(function_) + suffix;
	const lowir::SymbolId symbol = lowering_.new_symbol(name);
	lowir::Signature signature = {};
	signature.first_parameter = static_cast<uint32_t>(program_.parameters.size());
	signature.parameter_count = with_action ? 2 : 1;
	signature.result = with_action ? program_.pointer_type() : lowir::Type::scalar(lowir::TypeKind::Void);
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

void FunctionLowering::free_coroutine_frame(
	const sema::CoroutineFacts& facts, lowir::Value allocation, lowir::Value bytes)
{
	const sema::FunctionEntity* function = facts.deallocate;
	const size_t first = arguments_.size();
	const bool throwing = call_may_throw(function);
	begin_call(throwing);
	arguments_.push_back(allocation);
	if (function->type->canonical->param_count == 2)
		arguments_.push_back(bytes);
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

lowir::Value FunctionLowering::prepare_coroutine_result(const syntax::Expr& expression, CoroutineStartup* startup)
{
	const size_t first = cleanups_.size();
	const bool region = begin_full_expression(&expression);
	lowir::Value value = lowir::Value::none();
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
		if (startup != nullptr)
			remember_coroutine_object(*startup, result, value.is(lowir::ValueKind::Slot) ? value : result_destination_);
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

lowir::Value FunctionLowering::emit_coroutine_suspend(const sema::CoroutineAwait& await, lowir::Value frame,
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
	lowir::Value transfer = lowir::Value::none();
	if (await.transfer != nullptr)
		transfer = rvalue(call).value;
	else if (boolean)
		suspended_now = truth(call);
	else
		discard(call);
	destroy_temporaries(first);
	end_full_expression(region);
	if (boolean)
		branch(suspended_now, suspended, resumed);
	else
		jump(suspended);
	return transfer;
}

void FunctionLowering::lower_coroutine_implicit_await(
	const sema::CoroutineAwait& await, CoroutineBody& body, bool final)
{
	const size_t first = cleanups_.size();
	const bool region = begin_full_expression(await.source, true);
	const syntax::Expr& resume = suspend_coroutine(await, body, final);
	if (!final && lowering_.exceptions())
	{
		const lowir::Type byte = lowir::Type::scalar(lowir::TypeKind::U8);
		store(byte, integer(byte, 1), coroutine_place(body.address, body.layout.initial_resumed));
	}
	discard(resume);
	destroy_temporaries(first);
	end_full_expression(region);
}

const syntax::Expr& FunctionLowering::lower_coroutine_await(const syntax::Expr& expression)
{
	if (coroutine_body_ == nullptr || expression.facts->coroutine_await == nullptr)
		throw LoweringError(expression.location, "a suspension requires a coroutine frame");
	return suspend_coroutine(*expression.facts->coroutine_await, *coroutine_body_, false);
}

const syntax::Expr& FunctionLowering::suspend_coroutine(
	const sema::CoroutineAwait& await, CoroutineBody& body, bool final)
{
	lowir::Value storage;
	if (await.awaiter->type->is_reference())
	{
		const lowir::Type pointer = program_.pointer_type();
		const lowir::Value referent = address(*await.source);
		Place slot = {};
		slot.storage = lowir::Value::slot(generated_slot(lowir::SlotKind::Tmpref, pointer));
		store(pointer, RValue{ referent, pointer }, slot);
		storage = address_of(slot);
	}
	else
		storage = temporary_object(*await.source);
	bind_coroutine_storage(await.awaiter, storage);

	const lowir::BlockId resume = new_block(lowir::BlockKind::IfEnd);
	const lowir::BlockId destroy = new_block(lowir::BlockKind::IfElse);
	const bool exceptions = lowering_.exceptions();
	const lowir::BlockId suspended = exceptions || await.transfer != nullptr ? new_block(lowir::BlockKind::IfElse)
																			 : body.suspend;
	const uint32_t state = static_cast<uint32_t>(body.suspensions.size());
	body.suspensions.push_back(CoroutineSuspension{
		final && !exceptions ? lowir::kNoId : resume, destroy, suspended, final, lowir::Value::none() });
	const lowir::Value transfer = emit_coroutine_suspend(
		await, body.address, body.layout.state, state, resume, suspended);
	body.suspensions[state].transfer = transfer;
	if (exceptions)
	{
		// Use conceptual continuation edges so the exception-state analysis
		// can see the lexical stack at both routes of a suspension.
		place(suspended);
		branch(integer(lowir::Type::scalar(lowir::TypeKind::I64), 1), resume, destroy);
	}
	else if (!transfer.is(lowir::ValueKind::None))
	{
		place(suspended);
		lowir::Instruction ret = lowir::make_instruction(lowir::Opcode::Return, program_.pointer_type());
		ret.ops[0] = transfer;
		terminate(ret);
	}
	place(destroy);
	destroy_cleanups(0, false, 0);
	jump(body.destroy);
	place(resume);
	// Calls in the continuation can only open cleanup regions from this
	// activation, even when they finish an initializer started before it.
	if (exceptions)
		move_expression_region_start();
	return *await.resume;
}

void FunctionLowering::dispatch_coroutine(const CoroutineBody& body, lowir::BlockId invalid, bool resume)
{
	const lowir::Type word = lowir::Type::scalar(lowir::TypeKind::U32);
	const RValue state = load(word, coroutine_place(body.address, body.layout.state));
	std::vector<lowir::Value> cases;
	for (uint32_t i = 0; i < body.suspensions.size(); ++i)
	{
		const CoroutineSuspension& point = body.suspensions[i];
		const lowir::BlockId target = resume ? point.resume : point.destroy;
		if (target == lowir::kNoId)
			continue;
		cases.push_back(integer(word, i).value);
		cases.push_back(lowir::Value::block(target));
	}
	lowir::Instruction select = lowir::make_instruction(
		lowir::Opcode::Switch, lowir::Type::scalar(lowir::TypeKind::Void));
	select.ops[0] = state.value;
	select.ops[1] = lowir::Value::block(invalid);
	select.extra_first = builder_.add_operands(cases.data(), static_cast<uint32_t>(cases.size()));
	select.extra_count = static_cast<uint32_t>(cases.size());
	terminate(select);
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
	destroy_cleanups(0, false, 0);
	jump(coroutine_final_suspend_);
}

void FunctionLowering::lower_coroutine_actor(lowir::SymbolId symbol, CoroutineFrameLayout& frame,
	const sema::CoroutineFacts& facts, const syntax::CompoundStmt& body)
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

	const lowir::BlockId create = new_block(lowir::BlockKind::IfThen);
	const lowir::BlockId resume_or_destroy = new_block(lowir::BlockKind::IfElse);
	const lowir::BlockId resume_suspended = new_block(lowir::BlockKind::IfThen);
	const lowir::BlockId suspend = new_block(lowir::BlockKind::IfEnd);
	const lowir::BlockId destroy_suspended = new_block(lowir::BlockKind::IfElse);
	const lowir::BlockId destroy_frame = new_block(lowir::BlockKind::IfEnd);
	const lowir::BlockId invalid = new_block(lowir::BlockKind::IfElse);
	coroutine_final_suspend_ = new_block(lowir::BlockKind::IfEnd);
	CoroutineBody context{ frame, self, suspend, destroy_frame, {} };

	const auto is_action = [&](CoroutineAction expected) {
		return compare(lowir::ComparePredicate::Eq, word, action, integer(word, static_cast<uint32_t>(expected)));
	};
	branch(is_action(CoroutineAction::Start), create, resume_or_destroy);
	place(resume_or_destroy);
	const bool exceptions = lowering_.exceptions();
	branch(is_action(CoroutineAction::Resume), exceptions ? invalid : resume_suspended,
		exceptions ? invalid : destroy_suspended);

	place(create);
	coroutine_body_ = &context;
	syntax::CompoundStmt caught = {};
	caught.location = location;
	syntax::Handler handler = {};
	handler.body = &caught;
	handler.exception.ellipsis = true;
	syntax::TryStmt attempt = {};
	attempt.handlers = { &handler, 1 };
	size_t enclosing = SIZE_MAX;
	if (exceptions)
		enclosing = begin_try(attempt);
	lower_coroutine_implicit_await(*facts.initial, context, false);

	const auto finish_body = [&] {
		if (terminated_)
			return;
		if (facts.return_void != nullptr)
			coroutine_return(*facts.return_void);
		else
			terminate(lowir::make_instruction(lowir::Opcode::Unreachable, result_type_));
	};
	const syntax::TryStmt* function_try = function_->body->try_block;
	const size_t source_enclosing = function_try != nullptr ? begin_try(*function_try) : SIZE_MAX;
	{
		LexicalScope lexical(*this);
		for (const syntax::Stmt* item : body.items)
			statement(*item);
		finish_body();
		leave_scope(0, body);
	}
	if (function_try != nullptr)
	{
		end_try(source_enclosing);
		finish_body();
	}
	if (exceptions)
	{
		end_try(enclosing, &facts);
		jump(coroutine_final_suspend_);
	}
	coroutine_body_ = nullptr;

	place(coroutine_final_suspend_);
	store(pointer, integer(pointer, 0), coroutine_place(self, frame.resume));
	lower_coroutine_implicit_await(*facts.final, context, true);
	jump(destroy_frame);

	lowir::Instruction ret = lowir::make_instruction(lowir::Opcode::Return, pointer);
	ret.ops[0] = integer(pointer, 0).value;
	place(suspend);
	terminate(ret);

	place(invalid);
	terminate(lowir::make_instruction(lowir::Opcode::Unreachable, result_type_));

	place(destroy_frame);
	destroy(facts.promise->type, address_of(promise), location);
	for (auto parameter = frame.parameters.rbegin(); parameter != frame.parameters.rend(); ++parameter)
		if (sema::ClassOf(parameter->type) != nullptr)
			destroy(parameter->type, coroutine_place(self, parameter->offset).storage, location);
	const lowir::Value allocation = load(pointer, coroutine_place(self, frame.raw_allocation)).value;
	const lowir::Value size = builder_.integer(0);
	free_coroutine_frame(facts, allocation, size);
	terminate(ret);
	place_late_blocks();
	lowering_.state_forward_boundaries(symbol);
	if (exceptions)
	{
		reconnect_coroutine_exception_regions(program_, symbol, builder_, context);
		lowir::FunctionBody& function = builder_.body();
		lowir::Instruction& branch = function.instructions[function.blocks[resume_or_destroy].last];
		branch.ops[1] = lowir::Value::block(resume_suspended);
		branch.ops[2] = lowir::Value::block(destroy_suspended);
	}
	place(resume_suspended);
	dispatch_coroutine(context, invalid, true);
	place(destroy_suspended);
	dispatch_coroutine(context, invalid, false);
	relocate_coroutine_storage(program_, builder_, frame);
	// Slot locations describe stack storage. Line and scope information
	// still applies after moving the variables to the frame.
	if (program_.debug && debug_function_ < program_.debug->functions.size())
		program_.debug->functions[debug_function_].locals.clear();
	// Spills extend the frame after the dispatcher is placed. The factory
	// and deallocation both use the final allocation size.
	builder_.body().literals[size.index].low = frame.allocation_bytes(lowering_);
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
	const auto resume_signature = program_.functions[program_.symbols[resume].detail].signature;

	const auto make_entry = [&](lowir::SymbolId entry, CoroutineAction action) {
		lowir::FunctionBuilder thunk(program_, entry);
		const lowir::BlockId start = thunk.add_block(lowering_.entry_name());
		thunk.place_block(start);
		thunk.set_insertion_block(start);
		const lowir::Value args[] = { lowir::Value::temp(thunk.parameter(0)),
			thunk.integer(static_cast<uint32_t>(action)) };
		const auto next = lowir::Value::temp(
			thunk.call(pointer, lowir::Value::symbol(actor), args, 2, lowir::kNoId, 0));
		if (action == CoroutineAction::Resume && facts.resume_transfer)
		{
			// The actor returns after releasing its active exception
			// regions. This ABI entry then leaves its own stack before
			// invoking the next resume entry, including foreign entries.
			const auto transfer = thunk.add_block(0, lowir::BlockKind::IfThen);
			const auto done = thunk.add_block(0, lowir::BlockKind::IfEnd);
			const auto boolean = lowir::Type::scalar(lowir::TypeKind::I64);
			auto nonnull = lowir::make_instruction(lowir::Opcode::Compare, pointer);
			nonnull.sub = static_cast<uint8_t>(lowir::ComparePredicate::Ne);
			nonnull.ops[0] = next;
			nonnull.ops[1] = thunk.integer(0);
			thunk.branch(lowir::Value::temp(thunk.append_value(nonnull, boolean, 0)), transfer, done);
			thunk.place_block(transfer);
			thunk.set_insertion_block(transfer);
			const auto target = lowir::Value::temp(thunk.load(pointer, next, 0));
			thunk.call(void_type, target, &next, 1, resume_signature, 0);
			thunk.body().instructions[thunk.last_instruction(transfer)].sub = lowir::kTailCall;
			thunk.ret(void_type, lowir::Value::none());
			thunk.place_block(done);
			thunk.set_insertion_block(done);
		}
		thunk.ret(void_type, lowir::Value::none());
		if (!lowering_.streaming())
			thunk.finish();
	};
	make_entry(resume, CoroutineAction::Resume);
	make_entry(destroy_entry, CoroutineAction::Destroy);
	{
		FunctionLowering worker(lowering_, actor, nullptr);
		worker.function_ = function_;
		worker.lower_coroutine_actor(actor, layout, facts, body);
	}
	for (lowir::SymbolId entry : { actor, resume, destroy_entry })
	{
		lowering_.release_definition(entry);
		++lowering_.counters().functions;
	}

	// A class allocator can inspect the incoming arguments before copying
	// them into the frame. Keep the original allocation for deallocation.
	const uint64_t bytes = layout.allocation_bytes(lowering_);
	if (facts.object != nullptr)
		bind_coroutine_storage(facts.object, lowir::Value::slot(this_slot_));
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
	CoroutineStartup startup;
	if (lowering_.exceptions())
	{
		const lowir::Type byte = lowir::Type::scalar(lowir::TypeKind::U8);
		store(byte, integer(byte, 0), coroutine_place(frame, layout.initial_resumed));
		startup.landing = new_block(lowir::BlockKind::ConstructionCleanup);
		startup.completed = generated_slot(lowir::SlotKind::Plain, word);
		Place completed = {};
		completed.storage = lowir::Value::slot(startup.completed);
		store(word, integer(word, 0), completed);
		emit_marker(lowir::Opcode::EhCleanup, startup.landing);
	}

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
			remember_coroutine_object(startup, type, lowir::Value::none(), parameter.offset);
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
	remember_coroutine_object(startup, facts.promise->type, lowir::Value::none(), layout.promise);
	ret.ops[0] = prepare_coroutine_result(*facts.return_object, &startup);
	const size_t first = arguments_.size();
	arguments_.push_back(frame);
	arguments_.push_back(integer(word, static_cast<uint32_t>(CoroutineAction::Start)).value);
	const RValue next{ emit_call(pointer, lowir::Value::symbol(actor), first, lowir::kNoId, lowering_.exceptions()),
		pointer };
	if (startup.landing != lowir::kNoId)
		emit_marker(lowir::Opcode::EhEnd, lowir::kNoId);
	if (facts.resume_transfer || facts.initial->transfer != nullptr)
	{
		const auto transfer = new_block(lowir::BlockKind::IfThen);
		const auto done = new_block(lowir::BlockKind::IfEnd);
		branch(compare(lowir::ComparePredicate::Ne, pointer, next, integer(pointer, 0)), transfer, done);
		place(transfer);
		const auto target = load(pointer, coroutine_place(next.value, 0)).value;
		const size_t next_argument = arguments_.size();
		arguments_.push_back(next.value);
		emit_call(void_type, target, next_argument, resume_signature, lowering_.exceptions());
		jump(done);
		place(done);
	}
	terminate(ret);
	unwind_coroutine_startup(startup, facts, layout, frame, allocation, bytes);
	place_late_blocks();
	place_terminate_landing();
	if (!lowering_.streaming())
		builder_.finish();
}

void FunctionLowering::lower_coroutine_invoker(const sema::FunctionEntity* call)
{
	// The function-pointer conversion invokes the original call operator
	// with a default-constructed captureless closure. The closure also
	// supplies the implicit object for the coroutine's promise and allocator.
	const size_t first = arguments_.size();
	uint32_t parameter = 0;
	if (lowering_.indirect_result(call))
		arguments_.push_back(lowir::Value::temp(builder_.parameter(parameter++)));
	const lowir::Type closure = lowering_.storage_type(call->owner->entity->type);
	Place object = {};
	object.storage = lowir::Value::slot(generated_slot(lowir::SlotKind::Plain, closure));
	const lowir::Value receiver = address_of(object);
	arguments_.push_back(receiver);
	for (; parameter < builder_.body().parameter_count; ++parameter)
		arguments_.push_back(lowir::Value::temp(builder_.parameter(parameter)));
	lowir::SignatureId signature = lowir::kNoId;
	const lowir::Value target = member_callee(call, receiver, false, signature);
	const lowir::Value result = emit_call(result_type_, target, first, signature, call_may_throw(call));
	lowir::Instruction ret = lowir::make_instruction(lowir::Opcode::Return, result_type_);
	if (result_type_.kind() != lowir::TypeKind::Void)
		ret.ops[0] = result;
	terminate(ret);
	if (!lowering_.streaming())
		builder_.finish();
}

} // namespace lower
