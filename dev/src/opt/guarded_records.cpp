#include "lowir/builder.h"
#include "opt/loops.h"
#include "opt/passes.h"

namespace opt {

using namespace lowir;

namespace {

struct GuardedStore
{
	InstId id;
	uint32_t offset;
	uint64_t mask;
};

bool collect_guarded_stores(
	const FunctionBody& body, BlockId entry, Value home, uint32_t bytes, std::vector<GuardedStore>& stores)
{
	for (InstId id = body.blocks[entry].first; id != body.blocks[entry].last; id = body.instructions[id].next)
	{
		const Instruction& inst = body.instructions[id];
		if (inst.op == Opcode::Store)
		{
			if (stores.size() == 16)
				return false;
			const Located at = locate(body, inst.ops[1]);
			const uint64_t width = storage_bytes(inst.type);
			if ((inst.flags & IF_VOLATILE) || !at.known || !(at.root == home) || at.offset < 0 || width == 0 ||
				width > 8 || static_cast<uint64_t>(at.offset) + width > bytes || locate(body, inst.ops[0]).root == home)
				return false;
			const auto offset = static_cast<uint32_t>(at.offset);
			stores.push_back({ id, offset, ((uint64_t(1) << width) - 1) << offset });
		}
		else
		{
			if (!is_pure(inst) || inst.op == Opcode::FrameAddress || inst.op == Opcode::Phi)
				return false;
			bool names_home = false;
			for_each_operand(body, inst, [&](Value v) { names_home = names_home || locate(body, v).root == home; });
			if (names_home && (inst.result == kNoId || !(locate(body, Value::temp(inst.result)).root == home)))
				return false;
		}
	}
	uint64_t written = 0;
	for (auto it = stores.rbegin(); it != stores.rend(); ++it)
	{
		const uint64_t overlap = written & it->mask;
		if (overlap != 0 && overlap != it->mask)
			return false;
		written |= it->mask;
		if (overlap)
			it->mask = 0;
	}
	return written == (uint64_t(1) << bytes) - 1;
}

void distribute_guarded_stores(FunctionBody& body, BlockId entry, BlockId fast, BlockId slow, BlockId join,
	InstId copy_id, const std::vector<GuardedStore>& fields)
{
	const Instruction copy = body.instructions[copy_id];
	InstId fast_tail = kNoId, slow_tail = kNoId;
	for (const GuardedStore& field : fields)
	{
		Instruction store = body.instructions[field.id];
		unlink_after(body, entry, previous_in_block(body, entry, field.id), field.id);
		if (!field.mask)
			continue;
		const InstId moved = append_instruction(body, store);
		insert_after(body, slow, slow_tail, moved);
		slow_tail = moved;
		Value dest = copy.ops[1];
		if (field.offset != 0)
		{
			Instruction address = make_instruction(Opcode::Index, Type::scalar(TypeKind::U8));
			address.ops[0] = dest;
			address.ops[1] = integer_value(body, integer_literal(field.offset));
			address.location = copy.location;
			const InstId id = append_instruction(body, address);
			const TempId result = append_temp(body, body.pointer_type(), id);
			body.instructions[id].result = result;
			insert_after(body, fast, fast_tail, id);
			fast_tail = id;
			dest = Value::temp(result);
		}
		store.ops[1] = dest;
		store.flags &= ~IF_TYPED;
		const InstId id = append_instruction(body, store);
		insert_after(body, fast, fast_tail, id);
		fast_tail = id;
	}
	unlink_after(body, fast, fast_tail, copy_id);
	unlink_after(body, fast, fast_tail, copy.next);
	std::vector<std::pair<TempId, TempId>> remap;
	for (InstId id = body.blocks[join].first; id != kNoId; id = body.instructions[id].next)
	{
		Instruction copied = body.instructions[id];
		for_each_operand(body, copied, [&](Value& value) {
			if (value.is(ValueKind::Temp))
				for (const auto& pair : remap)
					if (value.index == pair.first)
					{
						value.index = pair.second;
						break;
					}
		});
		const InstId new_id = append_instruction(body, copied);
		if (copied.result != kNoId)
		{
			const TempId result = append_temp(body, body.temps[copied.result].type, new_id);
			remap.emplace_back(copied.result, result);
			body.instructions[new_id].result = result;
		}
		insert_after(body, fast, fast_tail, new_id);
		fast_tail = new_id;
	}
}

} // namespace

bool split_guarded_record(FunctionContext& context)
{
	FunctionBody& body = context.body;
	if (body.layout.size() != 4 || body.slots.empty() || !body.locations.empty() || !context.no_eh())
		return false;
	const BlockId entry = body.layout[0];
	const Instruction& branch = body.instructions[body.blocks[entry].last];
	if (branch.op != Opcode::Branch || branch.sub == static_cast<uint8_t>(BranchPrediction::None))
		return false;
	const bool likely = branch.sub == static_cast<uint8_t>(BranchPrediction::Likely);
	const BlockId fast = branch.ops[likely ? 1 : 2].index;
	const BlockId slow = branch.ops[likely ? 2 : 1].index;
	const InstId copy_id = body.blocks[fast].first;
	const Instruction copy = body.instructions[copy_id];
	const Instruction& call = body.instructions[body.blocks[slow].first];
	if (fast == entry || slow == entry || fast == slow || copy.op != Opcode::CopyObject || (copy.flags & IF_VOLATILE) ||
		copy.immediate < 8 || copy.immediate > 32 || call.op != Opcode::Call || copy.next == kNoId ||
		call.next == kNoId || copy.next != body.blocks[fast].last || call.next != body.blocks[slow].last ||
		!copy.ops[1].is(ValueKind::Temp) || copy.ops[1].index >= body.parameter_count)
		return false;
	const Instruction& fast_end = body.instructions[copy.next];
	const Instruction& slow_end = body.instructions[call.next];
	const BlockId join = fast_end.ops[0].index;
	if (fast_end.op != Opcode::Jump || slow_end.op != Opcode::Jump || !(slow_end.ops[0] == fast_end.ops[0]) ||
		join == entry || join == fast || join == slow || body.instructions[body.blocks[join].last].op != Opcode::Return)
		return false;
	const Located source = locate(body, copy.ops[0]);
	if (!source.known || !source.root.is(ValueKind::Slot) || source.offset != 0 ||
		body.slots[source.root.index].type.bytes != static_cast<uint64_t>(copy.immediate))
		return false;
	bool passed = false;
	for_each_operand(body, call, [&](Value value) { passed = passed || locate(body, value).root == source.root; });
	if (!passed)
		return false;
	unsigned suffix_length = 0;
	for (InstId id = body.blocks[join].first; id != kNoId; id = body.instructions[id].next)
	{
		const Instruction& inst = body.instructions[id];
		if (++suffix_length > 8 || inst.extra_count != 0 || (inst.flags & IF_VOLATILE) ||
			(inst.op != Opcode::Index && inst.op != Opcode::Load && inst.op != Opcode::Binary &&
				inst.op != Opcode::Return))
			return false;
		bool names_home = false;
		for_each_operand(
			body, inst, [&](Value value) { names_home = names_home || locate(body, value).root == source.root; });
		if (names_home)
			return false;
	}
	// This four-block diamond has one addressed path and a short return.
	// Move initialization to that call and write the same final bytes
	// straight into the destination when no address of the home is needed.
	std::vector<GuardedStore> stores;
	if (!collect_guarded_stores(body, entry, source.root, static_cast<uint32_t>(copy.immediate), stores))
		return false;
	distribute_guarded_stores(body, entry, fast, slow, join, copy_id, stores);
	context.invalidate_cfg();
	context.invalidate_block_of();
	return true;
}

} // namespace opt
