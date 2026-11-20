#include "sema/analyzer.h"

#include <cstring>

#include "lex/identifier_table.h"
#include "sema/coroutine_records.h"

namespace sema {

namespace {

template<typename T>
T* CoroutineExpression(Arena& arena, syntax::ExprKind kind, uint32_t location)
{
	T* expr = arena.allocate_array<T>(1);
	*expr = T();
	expr->kind = kind;
	expr->location = location;
	return expr;
}

} // namespace

void Analyzer::check_coroutine_definition(const FunctionEntity* function, const syntax::CompoundStmt& body)
{
	// N4861 [dcl.fct.def.coroutine] and [stmt.return.coroutine]. These
	// restrictions apply to the parsed definition, including discarded arms.
	if (function->constructor || function->destructor)
		error(body.location, "a constructor or destructor cannot be a coroutine");
	if (function->is_constexpr || function->is_consteval)
		error(body.location, "a constexpr or consteval function cannot be a coroutine");
	if (function->type->canonical->variadic)
		error(body.location, "a coroutine cannot have a variable parameter list");
	if (holds_auto(function->type->canonical->element) || function == deducing_call_)
		error(body.location, "a coroutine must declare its return type");
	if (function->owner == graph_.global && function->name != nullptr &&
		std::strcmp(function->name->spelling, "main") == 0)
		error(body.location, "main cannot be a coroutine");
	if ((body.function_body_syntax & syntax::kOrdinaryReturn) != 0)
		error(body.location, "a coroutine cannot contain an ordinary return statement");
}

ClassEntity* Analyzer::coroutine_library_template(const char* name, uint32_t location)
{
	const LookupResult space = names_.qualified(graph_.global, std_key_, LookupFilter::Namespace);
	const LookupResult found = space.found() && !space.ambiguous && space.binding->entity->kind == EntityKind::Namespace
		? names_.qualified(
			  static_cast<NamespaceEntity*>(space.binding->entity)->scope, special_key(name), LookupFilter::Elaborated)
		: LookupResult();
	ClassEntity* pattern = found.found() && !found.ambiguous ? class_template_of(found.binding->entity) : nullptr;
	if (pattern == nullptr)
		substitution_error(
			location, "a coroutine requires std::coroutine_traits and std::coroutine_handle from <coroutine>");
	return pattern;
}

const Type* Analyzer::coroutine_promise_type(const FunctionEntity* function, Scope* scope, uint32_t location)
{
	ClassEntity* traits = coroutine_library_template("coroutine_traits", location);
	if (traits == nullptr)
		return nullptr;
	const Type* signature = function->type->canonical;
	TypeList arguments;
	arguments.push_back(signature->element);
	if (function->member && !function->is_static)
	{
		const Type* object = types_.qualified(function->owner->entity->type, signature->function_cv);
		arguments.push_back(types_.reference(object, signature->ref == RefQualifier::RValue));
	}
	for (uint32_t i = 0; i < signature->param_count; ++i)
		arguments.push_back(signature->params[i]);
	ClassEntity* current = class_specialization(traits, arguments, location);
	if (current == nullptr || !require_complete(current))
		return nullptr;
	const LookupResult found = names_.qualified(current->scope, special_key("promise_type"), LookupFilter::Ordinary);
	const bool is_type = found.found() && !found.ambiguous &&
		(found.binding->kind == BindingKind::Type || found.binding->kind == BindingKind::TypeAlias);
	const Type* promise = is_type ? found.binding->type : nullptr;
	if (promise == nullptr || ClassOf(promise) == nullptr)
		return substitution_error(location, "std::coroutine_traits does not provide a class promise_type"), nullptr;
	check_access(found.binding, current, nullptr, scope, location);
	return require_complete(ClassOf(promise)) ? promise : nullptr;
}

syntax::Expr* Analyzer::coroutine_variable_use(
	const VariableEntity* variable, ValueCategory category, uint32_t location)
{
	syntax::IdExpr* expr = CoroutineExpression<syntax::IdExpr>(arena_, syntax::ExprKind::Id, location);
	expr->name = implicit_name(variable->name, location);
	const Type* type = variable->type->is_reference() ? variable->type->element : variable->type;
	ExprFacts* facts = new_facts(*expr, type, category);
	facts->flags = kImplicit;
	facts->entity = variable;
	return expr;
}

syntax::Expr* Analyzer::coroutine_member_call(
	syntax::Expr* object, const Identifier* name, syntax::Expr* argument, Scope* scope, uint32_t location)
{
	syntax::MemberExpr* member = CoroutineExpression<syntax::MemberExpr>(arena_, syntax::ExprKind::Member, location);
	member->op = TokenKind::OP_DOT;
	member->base = object;
	member->member = implicit_name(name, location);
	syntax::CallExpr* call = CoroutineExpression<syntax::CallExpr>(arena_, syntax::ExprKind::Call, location);
	call->callee = member;
	if (argument != nullptr)
		call->arguments = syntax::Slice<syntax::Expr*>{ arena_.copy_array(&argument, 1), 1 };
	ExprFacts* facts = typed_value(*call, scope);
	if (facts == nullptr)
		return nullptr;
	facts->flags |= kImplicit;
	return call;
}

const CoroutineAwait* Analyzer::coroutine_await(
	syntax::Expr* source, const CoroutineFacts& coroutine, Scope* scope, uint32_t location, bool explicit_await)
{
	if (source == nullptr)
		return nullptr;
	if (explicit_await)
	{
		const Identifier* transform = special_key("await_transform");
		const auto* promise = ClassOf(coroutine.promise->type);
		if (names_.qualified(promise->scope, transform, LookupFilter::Ordinary).found())
		{
			syntax::Expr* object = coroutine_variable_use(coroutine.promise, ValueCategory::LValue, location);
			source = coroutine_member_call(object, transform, source, scope, location);
			if (source == nullptr)
				return nullptr;
		}
	}
	ExprFacts* operand = typed_value(*source, scope);
	if (operand == nullptr)
		return nullptr;
	operand->flags |= kImplicit;
	if (ClassOf(operand->type) != nullptr || operand->type->kind == TypeKind::Enum)
	{
		syntax::UnaryExpr* operation = CoroutineExpression<syntax::UnaryExpr>(
			arena_, syntax::ExprKind::Unary, location);
		operation->op = TokenKind::KW_CO_AWAIT;
		operation->operand = source;
		if (ExprFacts* selected = unary_operator(*operation, false, scope))
		{
			selected->flags |= kImplicit;
			source = operation;
			operand = selected;
		}
		else if (failed())
			return nullptr;
	}
	const Type* type = operand->type;
	if (ClassOf(type) == nullptr)
		return substitution_error(location, "an awaiter must have a class type"), nullptr;
	if (operand->category == ValueCategory::PRValue)
		check_temporary_destruction(operand, location);
	else
		type = types_.reference(type, operand->category == ValueCategory::XValue);
	const VariableEntity* awaiter = new_entity<VariableEntity>(
		EntityKind::Variable, special_key("<awaiter>"), scope, type);
	const auto invoke = [&](const char* name, syntax::Expr* argument) {
		return coroutine_member_call(coroutine_variable_use(awaiter, ValueCategory::LValue, location),
			special_key(name), argument, scope, location);
	};
	const syntax::Expr* ready = invoke("await_ready", nullptr);
	if (ready == nullptr)
		return nullptr;
	convert_to_bool(*ready);
	const syntax::Expr* suspend = invoke(
		"await_suspend", coroutine_variable_use(coroutine.handle, ValueCategory::PRValue, location));
	if (suspend == nullptr)
		return nullptr;
	const Type* result = suspend->facts->type;
	const ClassEntity* cls = ClassOf(result);
	const ClassEntity* handle = ClassOf(coroutine.handle->type)->templ->pattern;
	const bool transfer = cls != nullptr && cls->templ != nullptr && cls->templ->pattern == handle;
	const bool boolean = result->unqualified == types_.fundamental(FundamentalType::Bool);
	if (suspend->facts->category != ValueCategory::PRValue || (!IsVoid(result) && !boolean && !transfer))
		return substitution_error(location, "await_suspend must return void, bool, or a coroutine_handle by value"),
			   nullptr;
	const syntax::Expr* resume = invoke("await_resume", nullptr);
	if (resume == nullptr)
		return nullptr;
	CoroutineAwait* facts = arena_.allocate_array<CoroutineAwait>(1);
	*facts = CoroutineAwait{ source, awaiter, ready, suspend, resume };
	return facts;
}

const CoroutineFacts* Analyzer::analyze_coroutine(const FunctionEntity* function, Scope* scope, uint32_t location)
{
	const Type* promise = coroutine_promise_type(function, scope, location);
	if (promise == nullptr)
		return nullptr;
	ClassEntity* handle_template = coroutine_library_template("coroutine_handle", location);
	if (handle_template == nullptr)
		return nullptr;
	TypeList handle_arguments;
	handle_arguments.push_back(promise);
	ClassEntity* handle = class_specialization(handle_template, handle_arguments, location);
	if (handle == nullptr)
		return nullptr;
	CoroutineFacts* facts = arena_.allocate_array<CoroutineFacts>(1);
	*facts = CoroutineFacts();
	facts->promise = new_entity<VariableEntity>(EntityKind::Variable, special_key("<promise>"), scope, promise);
	facts->handle = new_entity<VariableEntity>(
		EntityKind::Variable, special_key("<coroutine-handle>"), scope, handle->type);
	const auto invoke = [&](const Identifier* name) {
		return coroutine_member_call(
			coroutine_variable_use(facts->promise, ValueCategory::LValue, location), name, nullptr, scope, location);
	};
	const Identifier* return_void = special_key("return_void");
	Scope* promise_scope = ClassOf(promise)->scope;
	if (names_.qualified(promise_scope, return_void, LookupFilter::Ordinary).found())
	{
		if (names_.qualified(promise_scope, special_key("return_value"), LookupFilter::Ordinary).found())
			return substitution_error(location, "a coroutine promise declares both return_void and return_value"),
				   nullptr;
		facts->return_void = invoke(return_void);
		if (facts->return_void == nullptr)
			return nullptr;
		if (!IsVoid(facts->return_void->facts->type))
			return substitution_error(location, "coroutine return_void must return void"), nullptr;
	}
	syntax::Expr* return_object = invoke(special_key("get_return_object"));
	if (return_object == nullptr)
		return nullptr;
	facts->return_object = return_object;
	syntax::ValueStmt returned = syntax::ValueStmt();
	returned.kind = syntax::StmtKind::Return;
	returned.location = location;
	returned.value = return_object;
	return_statement(returned, scope);
	if (failed())
		return nullptr;
	facts->unhandled_exception = exceptions_ ? invoke(special_key("unhandled_exception")) : nullptr;
	if (exceptions_ && facts->unhandled_exception == nullptr)
		return nullptr;
	facts->initial = coroutine_await(invoke(special_key("initial_suspend")), *facts, scope, location, false);
	if (facts->initial == nullptr)
		return nullptr;
	const uint32_t throwing = potentially_throwing_;
	facts->final = coroutine_await(invoke(special_key("final_suspend")), *facts, scope, location, false);
	if (facts->final == nullptr)
		return nullptr;
	if (potentially_throwing_ != throwing)
		return substitution_error(location, "a coroutine's final suspend expression must be non-throwing"), nullptr;
	graph_.set_coroutine(function, facts);
	return facts;
}

ExprFacts* Analyzer::coroutine_operation(const syntax::CoroutineExpr& expr, Scope* scope)
{
	const uint32_t location = expr.location;
	if (!cxx20_)
		return substitution_error(location, "a coroutine operation requires C++20"), nullptr;
	if (body_ == nullptr || body_->function == nullptr || body_->coroutine == nullptr || unevaluated_ != 0 ||
		body_->default_argument_parent != nullptr)
		return substitution_error(location, "a coroutine operation outside a potentially evaluated coroutine body"),
			   nullptr;
	const CoroutineFacts& coroutine = *body_->coroutine;
	if (expr.operation != TokenKind::KW_CO_RETURN)
	{
		for (const Scope* parent = scope; parent != nullptr && parent->kind != ScopeKind::Function;
			parent = parent->parent)
			if (parent->exception_handler)
				return substitution_error(location, "a coroutine cannot suspend in an exception handler"), nullptr;
	}
	const auto promise_call = [&](const char* name, syntax::Expr* argument) {
		return coroutine_member_call(coroutine_variable_use(coroutine.promise, ValueCategory::LValue, location),
			special_key(name), argument, scope, location);
	};
	if (expr.operation == TokenKind::KW_CO_RETURN)
	{
		syntax::Expr* argument = expr.operand;
		if (argument != nullptr && argument->kind != syntax::ExprKind::BracedInit)
		{
			ExprFacts* operand = typed_value(*argument, scope);
			if (operand == nullptr)
				return nullptr;
			operand->flags |= kImplicit;
			if (IsVoid(operand->type))
				argument = nullptr;
		}
		const syntax::Expr* call = argument != nullptr ? promise_call("return_value", argument) : coroutine.return_void;
		if (call == nullptr)
			return failed() ? nullptr
							: (substitution_error(location, "co_return requires a promise return operation"), nullptr);
		if (!IsVoid(call->facts->type))
			return substitution_error(location, "a coroutine promise's return operation must return void"), nullptr;
		ExprFacts* facts = new_facts(expr, call->facts->type, ValueCategory::PRValue);
		facts->replacement = call;
		return facts;
	}
	const bool await = expr.operation == TokenKind::KW_CO_AWAIT;
	syntax::Expr* source = await ? expr.operand : promise_call("yield_value", expr.operand);
	const CoroutineAwait* facts = coroutine_await(source, coroutine, scope, location, await);
	if (facts == nullptr)
		return nullptr;
	ExprFacts* result = new_facts(expr, facts->resume->facts->type, facts->resume->facts->category);
	result->coroutine_await = facts;
	return result;
}

} // namespace sema
