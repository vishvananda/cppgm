#include "lowir/startup_sections.h"

#include <algorithm>

namespace lowir {

bool startup_functions(const Program& program, std::vector<StartupFunction>& out, std::string& error,
	std::vector<StartupFunction>* finalizers)
{
	for (SymbolId id : program.order)
	{
		const Symbol& source = program.symbols[id];
		uint32_t priority = 0;
		if (source.kind != SymbolKind::GlobalDefinition || source.metadata.section == 0)
			continue;
		const char* name = program.spelling(source.metadata.section);
		const bool init = initializer_section(name, priority);
		if (!init && (finalizers == nullptr || !finalizer_section(name, priority)))
			continue;
		auto& functions = init ? out : *finalizers;
		const char* invalid_table = init ? "an initialization section requires a function-address table"
										 : "a finalization section requires a function-address table";
		const auto add = [&](SymbolId function, int64_t addend) {
			if (function >= program.symbols.size() || !is_function_kind(program.symbols[function].kind) || addend != 0)
			{
				error = init ? "an initialization section requires function addresses without offsets"
							 : "a finalization section requires function addresses without offsets";
				return false;
			}
			const SignatureId signature = program.functions[program.symbols[function].detail].signature;
			if (signature == kNoId || !program.signatures[signature].result.is_void() ||
				program.signatures[signature].parameter_count != 0 ||
				program.signatures[signature].boundary.arity != ir_model::CAM_FIXED)
			{
				error = init ? "an initialization function must have type void()"
							 : "a finalization function must have type void()";
				return false;
			}
			functions.push_back(StartupFunction{ function, priority });
			return true;
		};
		const Global& global = program.globals[source.detail];
		if (global.typed && global.type.is_pointer() && global.init == GlobalInit::Address)
		{
			if (!add(global.address, global.addend))
				return false;
		}
		else if (!global.typed && global.init == GlobalInit::Data)
		{
			for (uint32_t i = 0; i < global.item_count; ++i)
			{
				const DataItem& item = program.data_items[global.first_item + i];
				if (item.kind != DataItemKind::Address)
				{
					error = invalid_table;
					return false;
				}
				if (!add(item.address, item.amount))
					return false;
			}
		}
		else
		{
			error = invalid_table;
			return false;
		}
	}
	const auto by_priority = [](const StartupFunction& a, const StartupFunction& b) { return a.priority < b.priority; };
	std::stable_sort(out.begin(), out.end(), by_priority);
	if (finalizers != nullptr)
		std::stable_sort(finalizers->begin(), finalizers->end(), by_priority);
	return true;
}

} // namespace lowir
