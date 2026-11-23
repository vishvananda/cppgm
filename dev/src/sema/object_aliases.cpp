#include "sema/analyzer.h"

#include "sema/string_literals.h"

namespace sema {

void Analyzer::object_alias_attribute(Entity* entity, const syntax::Attribute& source)
{
	const syntax::Attribute* attribute = &source;
	if ((entity->kind != EntityKind::Function && entity->kind != EntityKind::Variable) || entity->owner == nullptr ||
		entity->owner->kind != ScopeKind::Namespace)
		error(attribute->location, "an alias attribute requires a namespace-scope function or variable");
	if (target_model::is_darwin(graph_.types.target()))
		error(attribute->location, "GNU object aliases are not supported by the Mach-O profile");
	if (attribute->expression == nullptr || attribute->expression->kind != syntax::ExprKind::Literal)
		error(attribute->location, "an alias target requires an ordinary string literal");
	StringLiteralFacts facts;
	std::vector<uint64_t> scratch;
	const StringCodeUnits units = ReadStringCodeUnits(
		static_cast<const syntax::LiteralExpr&>(*attribute->expression), scratch, &facts);
	if (!units || facts.element != FundamentalType::Char || facts.suffix_length != 0)
		error(attribute->location, "an alias target requires an ordinary string literal");
	std::string target;
	for (size_t i = 0; i + 1 < units.size(); ++i)
	{
		if (units[i] == 0)
			error(attribute->location, "null byte in alias target");
		target.push_back(static_cast<char>(units[i]));
	}
	if (target.empty())
		error(attribute->location, "empty alias target");
	const uint32_t previous = graph_.object_alias_index.find(entity);
	if (previous != PointerMap::kMissing)
	{
		if (target != graph_.object_aliases[previous].target)
			error(attribute->location, "conflicting alias declarations");
		return;
	}
	graph_.object_alias_index.set(entity, static_cast<uint32_t>(graph_.object_aliases.size()));
	graph_.object_aliases.push_back(
		SemanticGraph::ObjectAlias{ entity, copy_label(target.data(), target.size()), attribute->location });
}

} // namespace sema
