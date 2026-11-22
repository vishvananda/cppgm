#include "sema/analyzer.h"

namespace sema {

void Analyzer::bind_c_block_function(FunctionEntity* function, const Specifiers& specifiers, const DeclaratorInfo& info,
	const DeclaredName& name, Scope* scope, Scope* where, uint32_t location)
{
	// 6.2.2p4-p5 and 6.2.7p4: only the visible prior declaration supplies
	// linkage and a composite type in this scope.
	const Binding* visible = names_.unqualified(where->parent, name.key, LookupFilter::Ordinary).binding;
	FunctionEntity* target = nullptr;
	if (visible != nullptr && visible->kind == BindingKind::Function)
	{
		if (!conversions_.c_function_compatible(visible->type, info.type))
			error(location, "conflicting C function declarations");
		function->type = conversions_.c_composite_type(visible->type, info.type);
		target = static_cast<FunctionEntity*>(visible->entity);
		if (target->denotes != nullptr)
			target = target->denotes;
	}
	else
	{
		const uint32_t index = c_function_index_.find(name.key);
		if (index != PointerMap::kMissing)
			target = c_functions_[index];
	}
	if (target == nullptr)
	{
		if (const NameEntry* entry = names_.find(graph_.global, name.key))
		{
			const Binding* global = entry->value;
			if (global != nullptr &&
				(global->kind != BindingKind::Function ||
					static_cast<FunctionEntity*>(global->entity)->internal_linkage))
				error(location, "a block-scope C function conflicts with a file-scope declaration");
		}
		// A first declaration in a block has a symbol but adds no file-scope
		// binding. Subsequent blocks reuse this target by interned name.
		target = new_function(specifiers, info, name, scope, graph_.global, function->signature, false, location);
		note_block_linkage(target, where, true);
	}
	function->denotes = target;
	function->internal_linkage = target->internal_linkage;
	function->c_linkage = target->c_linkage;
}

void Analyzer::note_c_function_linkage(FunctionEntity* function, const Type* type, bool definition, uint32_t location)
{
	const bool file = function->denotes == nullptr;
	FunctionEntity* target = file ? function : function->denotes;
	const uint32_t index = c_function_linkage_index_.find(target);
	if (index == PointerMap::kMissing && file)
		return;
	const Type* prior = index == PointerMap::kMissing ? target->type : c_function_linkages_[index].type;
	// An empty identifier list in a definition fixes the parameter count.
	const bool empty_definition = definition && type->c_unprototyped() && type->param_count == 0;
	const bool empty_defined = target->defined && target->type->c_unprototyped() && target->type->param_count == 0;
	if (!conversions_.c_function_compatible(prior, type) || (empty_definition && prior->param_count != 0) ||
		(empty_defined && type->param_count != 0))
		error(location, "conflicting declarations of a C function with linkage");
	const Type* composite = conversions_.c_composite_type(prior, type);
	if (!file && graph_.asm_label(target) == nullptr)
		if (const char* label = graph_.asm_label(function))
			graph_.set_asm_label(target, label);
	if (index == PointerMap::kMissing)
	{
		const NameEntry* entry = names_.find(graph_.global, target->name);
		const bool file_declared = entry != nullptr && entry->value != nullptr && entry->value->entity == target;
		c_function_linkage_index_.set(target, static_cast<uint32_t>(c_function_linkages_.size()));
		c_function_linkages_.push_back({ composite, file_declared });
		return;
	}
	CFunctionLinkage& linkage = c_function_linkages_[index];
	linkage.type = composite;
	if (file && !linkage.file_declared)
	{
		// The first file-scope binding must keep its written type. Earlier
		// block prototypes still constrain compatibility through this record.
		function->type = type;
		linkage.file_declared = true;
	}
}

} // namespace sema
