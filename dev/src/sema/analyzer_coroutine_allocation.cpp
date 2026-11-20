#include "sema/analyzer.h"

#include "sema/coroutine_records.h"

namespace sema {

bool Analyzer::coroutine_allocation(CoroutineFacts& coroutine, Scope* scope, uint32_t location)
{
	// N4861 [dcl.fct.def.coroutine]: a promise-scope allocation function
	// takes the frame size and can also take the function's incoming
	// arguments. If no member is viable with those arguments, try size alone.
	const ClassEntity* promise = ClassOf(coroutine.promise->type);
	const Identifier* key = operator_key(TokenKind::KW_NEW);
	LookupResult found = names_.qualified(promise->scope, key, LookupFilter::Ordinary);
	const bool member = found.found() || found.ambiguous;
	if (!member)
		found = global_allocation_functions(key);
	if (found.ambiguous || !found.found() || found.binding->kind != BindingKind::Function)
		return substitution_error(location, "invalid coroutine allocation function lookup"), false;

	const Type* size_type = types_.fundamental(FundamentalType::UnsignedLongInt);
	SmallList<syntax::Expr*, 4> arguments;
	syntax::Expr* size = declval_operand(size_type, location, true);
	if (typed_value(*size, scope) == nullptr)
		return false;
	arguments.push_back(size);
	if (member)
	{
		if (coroutine.object != nullptr)
			arguments.push_back(coroutine_variable_use(coroutine.object, ValueCategory::LValue, location));
		for (const Binding* binding = scope->bindings; binding != nullptr; binding = binding->next)
			if (binding->kind == BindingKind::Parameter)
				arguments.push_back(coroutine_variable_use(binding->entity, ValueCategory::LValue, location));
	}
	else if (coroutine.return_on_allocation_failure != nullptr)
	{
		const LookupResult space = names_.qualified(graph_.global, std_key_, LookupFilter::Namespace);
		Scope* standard = space.found() && !space.ambiguous && space.binding->entity->kind == EntityKind::Namespace
			? static_cast<const NamespaceEntity*>(space.binding->entity)->scope
			: nullptr;
		const LookupResult nothrow = standard != nullptr
			? names_.qualified(standard, special_key("nothrow"), LookupFilter::Ordinary)
			: LookupResult();
		if (!nothrow.found() || nothrow.ambiguous || nothrow.binding->entity->kind != EntityKind::Variable)
			return substitution_error(location, "coroutine allocation failure requires std::nothrow from <new>"), false;
		arguments.push_back(coroutine_variable_use(nothrow.binding->entity, ValueCategory::LValue, location));
	}

	std::vector<FunctionEntity*>& set = overload_set_;
	set.clear();
	for (const FunctionList* node = found.functions; node != nullptr; node = node->next)
		set.push_back(static_cast<FunctionEntity*>(node->binding->entity));
	syntax::Slice<syntax::Expr*> actual{ arguments.data(), static_cast<uint32_t>(arguments.size()) };
	Candidate chosen = Candidate();
	Resolution resolution = resolve(actual, set, nullptr, chosen);
	if (member && resolution == Resolution::NoViable && actual.size > 1)
	{
		actual.size = 1;
		resolution = resolve(actual, set, nullptr, chosen);
	}
	if (resolution != Resolution::Selected)
		return substitution_error(location, "no unique viable coroutine allocation function"), false;

	FunctionEntity* function = chosen.function;
	expression_scope_ = scope;
	check_not_deleted(function, location);
	check_function_access(function, found.functions, member ? promise : nullptr, nullptr, scope, location);
	convert_arguments(actual, function->type->canonical, &chosen, 0);
	const bool nothrow = function_nothrow(function);
	if (coroutine.return_on_allocation_failure != nullptr && !nothrow)
		return substitution_error(location, "a coroutine allocator with a failure return object must be non-throwing"),
			   false;
	for (uint32_t i = actual.size; function->default_arguments != nullptr && i < function->type->canonical->param_count;
		++i)
		instantiate_default_argument(function, i);
	odr_use(function, true);
	if (!nothrow)
		++potentially_throwing_;
	coroutine.allocate = function;
	if (actual.size > 1)
		coroutine.allocation_arguments = { arena_.copy_array(actual.data + 1, actual.size - 1), actual.size - 1 };
	return !failed() && coroutine_deallocation(coroutine, scope, location);
}

bool Analyzer::coroutine_deallocation(CoroutineFacts& coroutine, Scope* scope, uint32_t location)
{
	// Usual deallocation for the frame. If its class declares both
	// forms, the sized form receives the actual frame allocation size.
	const ClassEntity* promise = ClassOf(coroutine.promise->type);
	const Identifier* key = operator_key(TokenKind::KW_DELETE);
	LookupResult found = names_.qualified(promise->scope, key, LookupFilter::Ordinary);
	const bool member = found.found() || found.ambiguous;
	if (!member)
		found = global_allocation_functions(key);
	if (found.ambiguous || !found.found() || found.binding->kind != BindingKind::Function)
		return substitution_error(location, "invalid coroutine deallocation function lookup"), false;

	const Type* size_type = types_.fundamental(FundamentalType::UnsignedLongInt);
	const Type* pointer = types_.pointer(types_.fundamental(FundamentalType::Void));
	FunctionEntity* selected = nullptr;
	for (const FunctionList* node = found.functions; node != nullptr; node = node->next)
	{
		auto* function = static_cast<FunctionEntity*>(node->binding->entity);
		const Type* type = function->type->canonical;
		if (function->templated || type->variadic || type->param_count == 0 || type->params[0] != pointer)
			continue;
		if (type->param_count == 2 && type->params[1] == size_type)
		{
			selected = function;
			break;
		}
		if (type->param_count == 1)
			selected = function;
	}
	if (selected == nullptr)
		return substitution_error(location, "no usual coroutine deallocation function"), false;
	check_not_deleted(selected, location);
	check_function_access(selected, found.functions, member ? promise : nullptr, nullptr, scope, location);
	odr_use(selected, true);
	coroutine.deallocate = selected;
	return !failed();
}

} // namespace sema
