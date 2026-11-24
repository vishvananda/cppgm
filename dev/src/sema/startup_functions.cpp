#include "sema/analyzer.h"

namespace sema {

void Analyzer::check_startup_redeclaration(const FunctionEntity* function, const Type* type, uint32_t location)
{
	// A C declaration without a prototype can acquire parameters later.
	// A lifetime hook still requires a void() boundary.
	if (type->canonical->param_count == 0)
		return;
	if (!graph_.startup_functions.entries.empty() &&
		graph_.startup_functions.index.find(function) != PointerMap::kMissing)
		error(location, "a constructor function cannot acquire parameters in a later declaration");
	if (!graph_.shutdown_functions.entries.empty() &&
		graph_.shutdown_functions.index.find(function) != PointerMap::kMissing)
		error(location, "a destructor function cannot acquire parameters in a later declaration");
}

void Analyzer::startup_attribute(Entity* entity, const syntax::Attribute& attribute)
{
	const bool shutdown = attribute.kind == syntax::AttributeKind::Shutdown;
	if (entity->kind != EntityKind::Function || entity->owner->kind != ScopeKind::Namespace)
		error(attribute.location,
			shutdown ? "a destructor attribute requires a namespace-scope function"
					 : "a constructor attribute requires a namespace-scope function");
	FunctionEntity* function = static_cast<FunctionEntity*>(entity);
	const Type* type = function->type->canonical;
	if (!IsVoid(type->element) || type->param_count != 0 || type->variadic || function->templ != nullptr)
		error(attribute.location,
			shutdown ? "a destructor attribute requires a non-template void function with no parameters"
					 : "a constructor attribute requires a non-template void function with no parameters");
	uint32_t priority = 65535;
	if (attribute.expression != nullptr)
	{
		if (semantic())
			integral_constant_operand(*attribute.expression, entity->owner, nullptr);
		Constant value;
		if (!constant_value(*attribute.expression, entity->owner, value, true))
			return;
		if (!IsIntegralOrUnscopedEnum(value.type) || value.bits > 65535)
			error(attribute.location,
				shutdown ? "destructor priority must be an integer from 0 through 65535"
						 : "constructor priority must be an integer from 0 through 65535");
		priority = static_cast<uint32_t>(value.bits);
	}
	auto& functions = shutdown ? graph_.shutdown_functions : graph_.startup_functions;
	const uint32_t prior = functions.index.find(function);
	if (prior != PointerMap::kMissing)
	{
		if (functions.entries[prior].priority != priority)
			error(attribute.location,
				shutdown ? "conflicting destructor priorities" : "conflicting constructor priorities");
		return;
	}
	function->used = true;
	functions.index.set(function, static_cast<uint32_t>(functions.entries.size()));
	functions.entries.push_back(SemanticGraph::LifetimeFunction{ function, priority });
}

} // namespace sema
