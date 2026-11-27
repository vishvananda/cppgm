#include "lower/function_lowering.h"

#include "sema/analyzer.h"

namespace lower {

bool FunctionLowering::auto_init_eligible(const sema::VariableEntity& variable) const
{
	return !variable.uninitialized && !variable.is_constexpr && !variable.type->is_reference() &&
		!variable.c_stack_pointer && variable.asm_gpr == 0;
}

void FunctionLowering::initialize_automatic(
	const sema::VariableEntity& variable, lowir::Value storage, bool written, uint32_t location)
{
	if (!auto_init_eligible(variable))
		return;
	const sema::Type* type = variable.type;
	const bool aggregate = type->kind == sema::TypeKind::Array || sema::ClassOf(type) != nullptr;
	if (written && (!aggregate || unreachable_storage_))
		return;
	const uint64_t bytes = lowering_.size_of(type, location);
	if (bytes == 0)
		return;
	const uint64_t alignment = std::max<uint64_t>(variable.alignment_request, lowering_.alignment_of(type, location));
	if (!unreachable_storage_)
		emit_auto_init(type, storage, bytes, alignment);
	if (!written)
	{
		if (auto_init_flow_ == nullptr)
			auto_init_flow_.reset(new AutoInitFlow);
		auto& locals = auto_init_flow_->locals;
		locals.push_back(AutoInitLocal{ type, storage, bytes, alignment, auto_init_current_, 0 });
		auto_init_current_ = static_cast<uint32_t>(locals.size());
	}
}

void FunctionLowering::emit_auto_init(const sema::Type* type, lowir::Value storage, uint64_t bytes, uint64_t alignment)
{
	const lowir::Type value_type = lowering_.storage_type(type);
	if (value_type.is_object())
	{
		if (volatile_auto_init(type))
		{
			const lowir::Type size = lowir::Type::scalar(lowir::TypeKind::I64);
			zero_volatile_range(storage, integer(size, bytes));
		}
		else
			zero_bytes(storage, bytes, alignment);
		if (!lowering_.analyzer_->c_source())
			null_data_member_pointers(type, storage, 0, true);
		return;
	}
	Place place = {};
	place.storage = storage;
	qualify(place, type);
	store_initializer(value_type, zero_value(type), place);
}

bool FunctionLowering::volatile_auto_init(const sema::Type* type)
{
	while (type->kind == sema::TypeKind::Array)
		type = type->element;
	return (type->cv & sema::kVolatile) != 0;
}

void FunctionLowering::zero_volatile_range(lowir::Value storage, const RValue& bytes)
{
	// LowIR bulk zero has no volatile form. An explicitly volatile
	// aggregate or VLA needs stores that survive dead-store elimination.
	const lowir::Type byte = lowir::Type::scalar(lowir::TypeKind::I8);
	Place cursor = {};
	cursor.storage = lowir::Value::slot(generated_slot(lowir::SlotKind::ConstructorArrayIndex, bytes.type));
	store(bytes.type, integer(bytes.type, 0), cursor);
	const lowir::BlockId test = new_block(lowir::BlockKind::WhileCond);
	const lowir::BlockId body = new_block(lowir::BlockKind::WhileBody);
	const lowir::BlockId end = new_block(lowir::BlockKind::WhileEnd);
	jump(test);
	place(test);
	const RValue offset = load(bytes.type, cursor);
	branch(compare(lowir::ComparePredicate::Ult, bytes.type, offset, bytes), body, end);
	place(body);
	Place element = {};
	element.storage = index(byte, ir_model::IPK_NONE, storage, offset).value;
	element.is_volatile = true;
	store(byte, integer(byte, 0), element);
	store(bytes.type, binary(lowir::BinaryOp::Add, bytes.type, offset, integer(bytes.type, 1)), cursor);
	jump(test);
	place(end);
}

void FunctionLowering::close_auto_init_scope(uint32_t parent)
{
	auto& locals = auto_init_flow_->locals;
	// Preorder indices let a branch test ancestry with one interval check.
	// Every declaration's interval closes once, at its scope's end.
	while (auto_init_current_ != parent)
	{
		AutoInitLocal& local = locals[auto_init_current_ - 1];
		local.last_descendant = static_cast<uint32_t>(locals.size());
		auto_init_current_ = local.parent;
	}
}

void FunctionLowering::record_auto_init_edge()
{
	if (auto_init_flow_ == nullptr)
		auto_init_flow_.reset(new AutoInitFlow);
	auto_init_flow_->edges.push_back(
		AutoInitFlow::Edge{ static_cast<lowir::InstId>(builder_.body().instructions.size() - 1), auto_init_current_ });
}

uint32_t FunctionLowering::common_auto_init_scope(uint32_t target, uint32_t source) const
{
	// The target has missed exactly the declarations down to the first
	// ancestor it shares with the source.
	while (target != 0)
	{
		const AutoInitLocal& local = auto_init_flow_->locals[target - 1];
		if (target <= source && source <= local.last_descendant)
			break;
		target = local.parent;
	}
	return target;
}

void FunctionLowering::place_indirect_auto_inits(uint32_t common)
{
	// A computed goto can choose any address-taken label. Clear the
	// potentially bypassed slots at function entry, so code label addresses
	// keep their identity and no dispatch is added to the indirect jump.
	lowir::FunctionBody& body = builder_.body();
	const AutoInitFlow& flow = *auto_init_flow_;
	std::vector<bool> bypassed(flow.locals.size());
	bool any = false;
	for (const lowir::CodeLabel& label : body.code_labels)
	{
		if (label.block >= flow.labels.size())
			continue;
		uint32_t node = flow.labels[label.block];
		while (node != 0 && !bypassed[node - 1])
		{
			const AutoInitLocal& local = flow.locals[node - 1];
			if (node <= common && common <= local.last_descendant)
				break;
			bypassed[node - 1] = true;
			any = true;
			node = local.parent;
		}
	}
	if (!any)
		return;
	const size_t first = body.layout.size();
	const lowir::BlockId entry = body.layout.front();
	place(new_block(lowir::BlockKind::Goto));
	for (size_t i = 0; i < flow.locals.size(); ++i)
	{
		if (!bypassed[i])
			continue;
		const AutoInitLocal& local = flow.locals[i];
		emit_auto_init(local.type, local.storage, local.bytes, local.alignment);
	}
	jump(entry);
	std::rotate(body.layout.begin(), body.layout.begin() + first, body.layout.end());
}

void FunctionLowering::place_auto_init_edges()
{
	close_auto_init_scope(0);
	const AutoInitFlow& flow = *auto_init_flow_;
	if (flow.labels.empty())
		return;
	struct Entry
	{
		lowir::BlockId block;
		lowir::BlockId target;
		uint32_t first;
		uint32_t common;
	};
	std::vector<Entry> entries;
	uint32_t indirect_scope = lowir::kNoId;
	lowir::FunctionBody& body = builder_.body();
	for (const AutoInitFlow::Edge& edge : flow.edges)
	{
		const auto redirect = [&](lowir::Value& destination) {
			const lowir::BlockId target = destination.index;
			if (target >= flow.labels.size())
				return;
			const uint32_t first = flow.labels[target];
			const uint32_t common = common_auto_init_scope(first, edge.from);
			if (first == common)
				return;
			const lowir::BlockId entry = new_block(lowir::BlockKind::Goto);
			entries.push_back(Entry{ entry, target, first, common });
			destination = lowir::Value::block(entry);
		};
		lowir::Instruction& inst = body.instructions[edge.instruction];
		if (inst.op == lowir::Opcode::IndirectJump)
			indirect_scope = indirect_scope == lowir::kNoId ? edge.from
															: common_auto_init_scope(indirect_scope, edge.from);
		else if (inst.op == lowir::Opcode::Jump)
			redirect(inst.ops[0]);
		else
		{
			redirect(inst.ops[1]);
			if (inst.op == lowir::Opcode::Branch)
				redirect(inst.ops[2]);
			else
				for (uint32_t i = 1; i < inst.extra_count; i += 2)
					redirect(body.operands[inst.extra_first + i]);
		}
	}
	std::vector<uint32_t> skipped;
	for (const Entry& entry : entries)
	{
		place(entry.block);
		for (uint32_t node = entry.first; node != entry.common; node = flow.locals[node - 1].parent)
			skipped.push_back(node);
		for (auto it = skipped.rbegin(); it != skipped.rend(); ++it)
		{
			const AutoInitLocal& local = flow.locals[*it - 1];
			emit_auto_init(local.type, local.storage, local.bytes, local.alignment);
		}
		skipped.clear();
		jump(entry.target);
	}
	if (indirect_scope != lowir::kNoId)
		place_indirect_auto_inits(indirect_scope);
}

} // namespace lower
