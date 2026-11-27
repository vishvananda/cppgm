#include "wasm/nonlocal_jumps.h"

#include "wasm/exceptions.h"
#include "wasm/selector.h"
#include "wasm/validation.h"
#include "wasm/object_cursor.h"

namespace wasm {

using namespace lowir;

void make_nonlocal_wrapper(const Module& module, Function& function)
{
	// Emscripten's Wasm SJLJ ABI: the tag carries &env->arg, a pair
	// containing the jump buffer and the nonzero return value.
	function.parameter_count = 2;
	function.locals = { ValueType::I32, ValueType::I32 };
	function.emit(Op::LocalGet, { 0 });
	function.emit(Op::LocalGet, { 0 });
	function.emit(Op::I32Store, { 2, 8 });
	function.emit(Op::LocalGet, { 0 });
	function.emit(Op::I32Const, { 1 });
	function.emit(Op::LocalGet, { 1 });
	function.emit(Op::LocalGet, { 1 });
	function.emit(Op::I32Eqz);
	function.emit(Op::Select);
	function.emit(Op::I32Store, { 2, 12 });
	function.emit(Op::LocalGet, { 0 });
	function.emit(Op::I32Const, { 8 });
	function.emit(Op::I32Add);
	function.emit(Op::Throw, { module.nonlocal_tag_index });
	function.relocate(RelocationKind::TagIndex, module.nonlocal_tag_symbol);
	function.emit(Op::End);
}

void append_nonlocal_objects(const Module& module, Object& object, std::vector<uint32_t>& symbols)
{
	if (module.nonlocal_tag_symbol == kNoId)
		return;
	symbols[module.nonlocal_tag_symbol] = static_cast<uint32_t>(object.symbols.size());
	ObjectTag tag;
	tag.type = module.tag_types[module.nonlocal_tag_index];
	tag.name = "__c_longjmp";
	ObjectSymbol identity;
	identity.kind = 4;
	identity.index = module.nonlocal_tag_index;
	identity.name = tag.name;
	identity.flags = 1;
	object.symbols.push_back(std::move(identity));
	object.tags.push_back(std::move(tag));
	for (SymbolId id : module.nonlocal_wrappers)
	{
		Function function;
		make_nonlocal_wrapper(module, function);
		ObjectFunction& destination = object.functions[module.function_indices[id]];
		validate_function(function, object.types[destination.type], module);
		if (!object.assembly_bodies.empty())
		{
			for (auto& relocation : function.relocations)
				relocation.index = symbols[relocation.index];
			write_assembly_body(function, object, object.assembly_bodies[module.function_indices[id]]);
			continue;
		}
		Bytes encoded;
		encode_function(function, encoded, &destination.code.relocations);
		Cursor body(encoded);
		body.u32();
		const uint32_t prefix = body.position();
		destination.code.bytes = body.bytes();
		for (Relocation& relocation : destination.code.relocations)
		{
			relocation.offset -= prefix;
			relocation.index = symbols[relocation.index];
		}
	}
}

void Selector::plan_nonlocal_jumps()
{
	if (module_.nonlocal_calls.empty())
		return;
	bool any = false;
	for (BlockId block : body_.layout)
		for (InstId i = body_.blocks[block].first; i != kNoId; i = body_.instructions[i].next)
		{
			const auto& inst = body_.instructions[i];
			any = any ||
				(inst.op == Opcode::Call && inst.ops[0].is(ValueKind::Symbol) &&
					module_.nonlocal_function(inst.ops[0].index) == NonlocalFunction::Setjmp);
		}
	if (!any)
		return;
	nonlocal_sites_.assign(body_.instructions.size(), kNoId);
	number_pc_cases();
	// (The code after a setjmp call continues as a case past the blocks'.)
	uint32_t next = static_cast<uint32_t>(body_.layout.size());
	for (BlockId block : body_.layout)
	{
		if (exceptions_ != nullptr && exceptions_->active &&
			exceptions_->analysis.eh_live_[exceptions_->layout_of[block]] == 0)
			continue;
		InstId first = body_.blocks[block].first, previous = kNoId;
		uint32_t id = pc_cases_[block];
		for (InstId i = first; i != kNoId; i = body_.instructions[i].next)
		{
			const auto& inst = body_.instructions[i];
			if (inst.op != Opcode::Call || !inst.ops[0].is(ValueKind::Symbol) ||
				module_.nonlocal_function(inst.ops[0].index) != NonlocalFunction::Setjmp)
				continue;
			const auto* type = program_.call_boundary(inst);
			if (type == nullptr || inst.type.kind() != TypeKind::I32 || inst.extra_count == 0 || inst.extra_count > 2 ||
				program_.parameters_of(*type)[0].type.kind() != TypeKind::Ptr)
				throw WasmError("setjmp requires its typed C pointer boundary");
			nonlocal_sites_[i] = next;
			nonlocal_fragments_.push_back({ id, block, first, inst.next, previous, next });
			id = next++;
			first = inst.next;
			previous = i;
		}
		nonlocal_fragments_.push_back({ id, block, first, kNoId, previous, kNoId });
	}
	jump_result_ = add_local(ValueType::I32);
	jump_payload_ = add_local(ValueType::I32);
	jump_environment_ = add_local(ValueType::I32);
	jump_reference_ = add_local(ValueType::ExnRef);
}

bool Selector::nonlocal_call(const lowir::Instruction& inst)
{
	if (nonlocal_sites_.empty() || nonlocal_sites_[current_inst_] == kNoId)
		return false;
	value(body_.operands[inst.extra_first], program_.pointer_type());
	out_.emit(Op::LocalSet, { jump_environment_ });
	out_.emit(Op::LocalGet, { jump_environment_ });
	out_.emit(Op::LocalGet, { frame_ });
	out_.emit(Op::I32Store, { 2, 0 });
	out_.emit(Op::LocalGet, { jump_environment_ });
	out_.emit(Op::I32Const, { nonlocal_sites_[current_inst_] });
	out_.emit(Op::I32Store, { 2, 4 });
	// This private word follows the shared ABI payload. Preserve a dynamic
	// allocation made before setjmp, while discarding younger stack frames.
	out_.emit(Op::LocalGet, { jump_environment_ });
	out_.emit(Op::GlobalGet, { 0 });
	out_.relocate(RelocationKind::GlobalIndex, module_.stack_symbol);
	out_.emit(Op::I32Store, { 2, 16 });
	out_.emit(Op::I32Const, { 0 });
	out_.emit(Op::LocalSet, { jump_result_ });
	return true;
}

void Selector::nonlocal_dispatch()
{
	pc_ = add_local(ValueType::I32);
	out_.emit(Op::I32Const, { 0 }); // the entry's case
	out_.emit(Op::LocalSet, { pc_ });
	out_.emit(Op::Loop, { block_type(ValueType::Void) });
	out_.emit(Op::Block, { module_.nonlocal_pair_type });
	out_.relocate(RelocationKind::TypeIndex, module_.nonlocal_pair_type);
	out_.emit(Op::TryTable,
		{ block_type(ValueType::Void), 1, static_cast<uint64_t>(CatchKind::TagRef), module_.nonlocal_tag_index, 0 });
	out_.relocate(RelocationKind::TagIndex, module_.nonlocal_tag_symbol, 3);
	const uint32_t count = static_cast<uint32_t>(nonlocal_fragments_.size());
	std::vector<uint32_t> depths(body_.layout.size() + count + 1, count);
	for (uint32_t i = 0; i < count; ++i)
		depths[nonlocal_fragments_[i].id] = i;
	for (uint32_t i = 0; i <= count; ++i)
		out_.emit(Op::Block, { block_type(ValueType::Void) });
	nesting_ = count + 4;
	out_.emit(Op::LocalGet, { pc_ });
	out_.emit(Op::BrTable);
	for (uint32_t depth : depths)
		out_.operands.push_back(depth);
	out_.instructions.back().operands.count = static_cast<uint32_t>(depths.size());
	for (const auto& fragment : nonlocal_fragments_)
	{
		out_.emit(Op::End);
		--nesting_;
		current_block_ = fragment.block;
		if (fragment.result_call != kNoId)
		{
			const auto result = body_.instructions[fragment.result_call].result;
			if (result != kNoId)
			{
				out_.emit(Op::LocalGet, { jump_result_ });
				out_.emit(Op::LocalSet, { locals_[result] });
			}
		}
		for (InstId i = fragment.first; i != fragment.past; i = body_.instructions[i].next)
		{
			current_inst_ = i;
			out_.location = body_.instructions[i].location;
			instruction(body_.instructions[i]);
		}
		if (fragment.next != kNoId)
		{
			out_.emit(Op::I32Const, { fragment.next });
			out_.emit(Op::LocalSet, { pc_ });
			out_.emit(Op::Br, { nesting_ - 1 });
		}
	}
	out_.emit(Op::End);
	out_.emit(Op::Unreachable);
	out_.emit(Op::End);
	out_.emit(Op::Unreachable);
	out_.emit(Op::End);
	out_.emit(Op::LocalSet, { jump_reference_ });
	out_.emit(Op::LocalTee, { jump_payload_ });
	out_.emit(Op::I32Load, { 2, 0 });
	out_.emit(Op::LocalSet, { jump_environment_ });
	out_.emit(Op::LocalGet, { jump_environment_ });
	out_.emit(Op::I32Load, { 2, 0 });
	out_.emit(Op::LocalGet, { frame_ });
	out_.emit(Op::I32Eq);
	out_.emit(Op::If, { block_type(ValueType::Void) });
	out_.emit(Op::LocalGet, { jump_environment_ });
	out_.emit(Op::I32Load, { 2, 16 });
	out_.emit(Op::GlobalSet, { 0 });
	out_.relocate(RelocationKind::GlobalIndex, module_.stack_symbol);
	out_.emit(Op::LocalGet, { jump_environment_ });
	out_.emit(Op::I32Load, { 2, 4 });
	out_.emit(Op::LocalSet, { pc_ });
	out_.emit(Op::LocalGet, { jump_payload_ });
	out_.emit(Op::I32Load, { 2, 4 });
	out_.emit(Op::LocalSet, { jump_result_ });
	out_.emit(Op::Br, { 1 });
	out_.emit(Op::End);
	restore_stack();
	out_.emit(Op::LocalGet, { jump_reference_ });
	out_.emit(Op::ThrowRef);
	out_.emit(Op::End);
	out_.emit(Op::Unreachable);
	nesting_ = 0;
}

} // namespace wasm
