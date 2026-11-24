#include "lower/program_lowering.h"

#include <unordered_map>

#include "sema/analyzer.h"
#include "sema/conversions.h"

namespace lower {

void ProgramLowering::prepare_source_object_aliases(const syntax::TranslationUnit& unit)
{
	// Only units with explicit aliases build this ABI-name index. Read analyzed
	// declaration identities; never recover names or types from rendered source.
	std::unordered_map<std::string, const sema::Entity*> objects;
	std::vector<const syntax::Decl*> work(unit.declarations.begin(), unit.declarations.end());
	const auto note = [&](const sema::Binding* binding) {
		if (binding == nullptr || binding->entity == nullptr)
			return;
		const sema::Entity* entity = binding->entity;
		if (entity->kind == sema::EntityKind::Function)
		{
			const auto* function = static_cast<const sema::FunctionEntity*>(entity);
			if (function->templ == nullptr)
				objects.emplace(function_object(function, EntryVariant::Complete), entity);
		}
		else if (entity->kind == sema::EntityKind::Variable)
			objects.emplace(variable_object(static_cast<const sema::VariableEntity*>(entity)), entity);
	};
	while (!work.empty())
	{
		const syntax::Decl* declaration = work.back();
		work.pop_back();
		if (declaration->kind == syntax::DeclKind::Namespace)
		{
			const auto children = static_cast<const syntax::NamespaceDecl*>(declaration)->declarations;
			work.insert(work.end(), children.begin(), children.end());
		}
		else if (declaration->kind == syntax::DeclKind::Linkage)
		{
			const auto children = static_cast<const syntax::LinkageDecl*>(declaration)->declarations;
			work.insert(work.end(), children.begin(), children.end());
		}
		else if (declaration->kind == syntax::DeclKind::Function)
			note(static_cast<const syntax::FunctionDecl*>(declaration)->declared);
		else if (declaration->kind == syntax::DeclKind::Simple)
			for (const auto& init : static_cast<const syntax::SimpleDecl*>(declaration)->declarators)
				note(init.declared);
	}
	std::vector<const sema::Entity*> resolved(graph_->object_aliases.size(), nullptr);
	std::vector<bool> visiting(graph_->object_aliases.size(), false);
	std::vector<uint32_t> path;
	for (const auto& alias : graph_->object_aliases)
	{
		const sema::Entity* target = alias.entity;
		for (;;)
		{
			const uint32_t index = graph_->object_alias_index.find(target);
			if (index == PointerMap::kMissing)
				break;
			if (resolved[index] != nullptr)
			{
				target = resolved[index];
				break;
			}
			if (visiting[index])
				throw LoweringError(alias.location, "cyclic GNU object aliases");
			visiting[index] = true;
			path.push_back(index);
			const auto& edge = graph_->object_aliases[index];
			const auto found = objects.find(edge.target);
			if (found == objects.end())
				throw LoweringError(edge.location, "an alias target is not defined in this translation unit");
			const sema::Entity* next = found->second;
			if (target->kind != next->kind ||
				(target->kind != sema::EntityKind::Function &&
					!(analyzer_->c_source()
							? sema::ConversionRules(graph_->types).c_type_compatible(target->type, next->type, true)
							: target->type->canonical->unqualified == next->type->canonical->unqualified)))
				throw LoweringError(edge.location, "an alias and its target require compatible types");
			target = next;
		}
		for (uint32_t index : path)
			resolved[index] = target;
		path.clear();
		const bool function = target->kind == sema::EntityKind::Function;
		const bool defined = function ? static_cast<const sema::FunctionEntity*>(target)->defined
									  : static_cast<const sema::VariableEntity*>(target)->defined;
		const bool alias_defined = function ? static_cast<const sema::FunctionEntity*>(alias.entity)->defined
											: static_cast<const sema::VariableEntity*>(alias.entity)->defined;
		if (!defined || alias_defined)
			throw LoweringError(
				alias.location, "an alias requires a definition of its target and no separate definition");
		source_object_aliases_.push_back(SourceObjectAlias{ alias.entity, target });
	}
}

void ProgramLowering::emit_source_object_aliases()
{
	for (const auto& alias : source_object_aliases_)
	{
		const sema::Entity* target = alias.target;
		const bool function = target->kind == sema::EntityKind::Function;

		lowir::SymbolId source;
		lowir::SymbolId destination;
		lowir::NameId object;
		if (function)
		{
			const auto* own = static_cast<const sema::FunctionEntity*>(alias.entity);
			const auto* body = static_cast<const sema::FunctionEntity*>(target);
			source = function_symbol(own);
			destination = function_symbol(body);
			object = function_metadata(own, source).object;
			demand(body);
			emit_demanded();
		}
		else
		{
			const auto* own = static_cast<const sema::VariableEntity*>(alias.entity);
			source = variable_symbol(own);
			destination = variable_symbol(static_cast<const sema::VariableEntity*>(target));
			object = variable_metadata(own, source).object;
		}
		if (object == 0)
			object = program_.symbols[source].name;
		program_.aliases.push_back(lowir::ObjectAlias{ object, destination });
	}
}

} // namespace lower
