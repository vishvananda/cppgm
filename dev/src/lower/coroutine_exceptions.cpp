#include "lower/function_lowering.h"

#include "lower/coroutine_frame.h"
#include "machine/exception_layout.h"
#include "sema/coroutine_records.h"

namespace lower {

void FunctionLowering::remember_coroutine_object(
	CoroutineStartup& startup, const sema::Type* type, lowir::Value address, uint64_t offset)
{
	if (startup.landing == lowir::kNoId || !needs_destruction(type))
		return;
	startup.objects.push_back(CoroutineStartup::Object{ address, type, offset });
	const lowir::Type word = lowir::Type::scalar(lowir::TypeKind::U32);
	Place completed = {};
	completed.storage = lowir::Value::slot(startup.completed);
	store(word, integer(word, startup.objects.size()), completed);
}

void FunctionLowering::unwind_coroutine_startup(const CoroutineStartup& startup, const sema::CoroutineFacts& facts,
	const CoroutineFrameLayout& layout, lowir::Value frame, lowir::Value allocation, uint64_t bytes)
{
	if (startup.landing == lowir::kNoId)
		return;
	const lowir::Type byte = lowir::Type::scalar(lowir::TypeKind::U8);
	const lowir::Type word = lowir::Type::scalar(lowir::TypeKind::U32);
	const lowir::BlockId destroy = new_block(lowir::BlockKind::IfThen);
	const lowir::BlockId propagate = new_block(lowir::BlockKind::IfEnd);
	place(startup.landing);
	// Once initial await_resume has begun, an escaping exception leaves
	// the coroutine suspended. Before that point the factory still owns
	// the allocation and every completed object.
	const RValue started = load(byte, coroutine_place(frame, layout.initial_resumed));
	branch(compare(lowir::ComparePredicate::Eq, byte, started, integer(byte, 0)), destroy, propagate);
	place(destroy);
	Place completed = {};
	completed.storage = lowir::Value::slot(startup.completed);
	const RValue count = load(word, completed);
	for (size_t i = startup.objects.size(); i-- > 0;)
	{
		const lowir::BlockId action = new_block(lowir::BlockKind::IfThen);
		const lowir::BlockId done = new_block(lowir::BlockKind::IfEnd);
		branch(compare(lowir::ComparePredicate::Ge, word, count, integer(word, i + 1)), action, done);
		place(action);
		Cleanup cleanup = {};
		const CoroutineStartup::Object& object = startup.objects[i];
		cleanup.storage = object.storage.is(lowir::ValueKind::None) ? coroutine_place(frame, object.offset).storage
																	: object.storage;
		cleanup.type = startup.objects[i].type;
		destroy_local(cleanup, lowir::kNoId, true);
		jump(done);
		place(done);
	}
	free_coroutine_frame(facts, allocation, integer(AbiWordType(program_.target), bytes).value);
	jump(propagate);
	place(propagate);
	emit_resume();
}

void FunctionLowering::lower_coroutine_exception(const sema::CoroutineFacts& facts)
{
	CoroutineBody& body = *coroutine_body_;
	const lowir::Type byte = lowir::Type::scalar(lowir::TypeKind::U8);
	const lowir::BlockId handle = new_block(lowir::BlockKind::IfThen);
	const lowir::BlockId propagate = new_block(lowir::BlockKind::IfElse);
	const RValue started = load(byte, coroutine_place(body.address, body.layout.initial_resumed));
	branch(compare(lowir::ComparePredicate::Ne, byte, started, integer(byte, 0)), handle, propagate);
	place(propagate);
	throw_statement(nullptr, facts.initial->source->location);
	place(handle);
	const syntax::Expr& call = *facts.unhandled_exception;
	if (may_throw(&call))
	{
		// If the promise's handler throws, the coroutine is suspended at
		// completion and the caller can destroy the frame.
		const lowir::Type pointer = program_.pointer_type();
		store(pointer, integer(pointer, 0), coroutine_place(body.address, body.layout.resume));
		const lowir::Type word = lowir::Type::scalar(lowir::TypeKind::U32);
		store(word, integer(word, body.suspensions.size()), coroutine_place(body.address, body.layout.state));
		body.suspensions.push_back(
			CoroutineSuspension{ lowir::kNoId, body.destroy, lowir::kNoId, true, lowir::Value::none() });
	}
	const size_t first = cleanups_.size();
	const bool region = begin_full_expression(&call, true);
	discard(call);
	destroy_temporaries(first);
	end_full_expression(region);
}

void reconnect_coroutine_exception_regions(
	lowir::Program& program, lowir::SymbolId symbol, lowir::FunctionBuilder& builder, CoroutineBody& frame)
{
	using namespace lowir;
	machine::ExceptionLayout regions;
	machine::analyze_exception_layout(program, symbol, regions, target_model::is_wasm(program.target));
	FunctionBody& body = builder.body();
	const Type void_type = Type::scalar(TypeKind::Void);
	std::vector<std::pair<Opcode, BlockId>> stack;
	for (CoroutineSuspension& point : frame.suspensions)
	{
		if (point.suspended == kNoId)
			continue;
		const bool reached = regions.analysis.suspended_regions(regions.layout_of[point.suspended], stack);
		Instruction& transfer = body.instructions[body.blocks[point.suspended].last];
		if (reached && !point.transfer.is(ValueKind::None))
		{
			transfer = make_instruction(Opcode::Return, program.pointer_type());
			transfer.ops[0] = point.transfer;
		}
		else
		{
			transfer = make_instruction(Opcode::Jump, void_type);
			transfer.ops[0] = Value::block(frame.suspend);
		}
		if (!reached)
		{
			point.resume = point.destroy = kNoId;
			continue;
		}
		InstId after = kNoId;
		for (size_t i = 0; i < stack.size(); ++i)
			after = builder.insert_after(point.suspended, after, make_instruction(Opcode::EhEnd, void_type));
		const auto reopen = [&](BlockId target) {
			if (stack.empty())
				return target;
			const BlockId entry = builder.add_block(0, BlockKind::IfThen);
			builder.place_block(entry);
			builder.set_insertion_block(entry);
			for (auto region = stack.rbegin(); region != stack.rend(); ++region)
			{
				Instruction mark = make_instruction(region->first, void_type);
				mark.ops[0] = Value::block(region->second);
				builder.append(mark);
			}
			builder.jump(target);
			return entry;
		};
		point.resume = point.final ? kNoId : reopen(point.resume);
		point.destroy = reopen(point.destroy);
	}
}

} // namespace lower
