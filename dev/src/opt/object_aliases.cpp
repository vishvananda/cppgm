#include "opt/passes.h"

namespace opt {

void canonicalize_object_aliases(lowir::Program& program)
{
	using namespace lowir;
	if (program.aliases.empty())
		return;
	std::vector<SymbolId> targets;
	if (object_alias_targets(program, {}, targets) != kNoId)
		return; // Object emission diagnoses unresolved/invalid aliases.
	for (SymbolId id : program.order)
	{
		if (targets[id] == kNoId)
			continue;
		const auto& alias = program.symbols[id].metadata;
		const auto& target = program.symbols[targets[id]].metadata;
		// Either name can be replaced independently at link time. Keep those
		// references attached to their own object identity and public ABI.
		if (alias.binding == ir_model::SBM_WEAK || target.binding == ir_model::SBM_WEAK ||
			((alias.flags | target.flags) & SF_REPLACEABLE) != 0 ||
			(is_function_kind(program.symbols[id].kind) && !program.same_entry_abi(id, targets[id])))
			targets[id] = kNoId;
	}
	const auto replace = [&](Value& value) {
		if (value.kind == ValueKind::Symbol && targets[value.index] != kNoId)
			value.index = targets[value.index];
	};
	for (SymbolId id : program.order)
	{
		const Symbol& symbol = program.symbols[id];
		if (symbol.kind == SymbolKind::FunctionDefinition && program.functions[symbol.detail].body != nullptr)
		{
			auto& body = *program.functions[symbol.detail].body;
			for (auto& inst : body.instructions)
				for (Value& value : inst.ops)
					replace(value);
			for (Value& value : body.operands)
				replace(value);
		}
		else if (symbol.kind == SymbolKind::GlobalDefinition)
		{
			auto& global = program.globals[symbol.detail];
			if (global.init == GlobalInit::Address && targets[global.address] != kNoId)
				global.address = targets[global.address];
			for (uint32_t i = 0; global.init == GlobalInit::Data && i < global.item_count; ++i)
			{
				auto& item = program.data_items[global.first_item + i];
				if (item.has_address() && targets[item.address] != kNoId)
					item.address = targets[item.address];
			}
		}
	}
}

} // namespace opt
