#pragma once

#include <cstdint>

#include "syntax/ast_names.h"

namespace syntax {
struct Expr;
struct Initializer;
}

namespace sema {

struct Entity;
struct FunctionEntity;
struct VariableEntity;

// A value parameter of class type is moved or copied from its incoming
// object into the frame before the promise is constructed.
struct CoroutineParameterCopy
{
	const Entity* parameter;
	const FunctionEntity* constructor;
	const syntax::Initializer* initializer;
};

// The selected calls at an await point. The awaiter is initialized from
// source once and lives until await_resume finishes or the frame is destroyed.
struct CoroutineAwait
{
	const syntax::Expr* source;
	const VariableEntity* awaiter;
	const syntax::Expr* ready;
	const syntax::Expr* suspend;
	const syntax::Expr* resume;
	const syntax::Expr* transfer;
};

// The implicit expressions of the complete coroutine definition. Ordinary
// overload resolution and expression facts describe every selected call.
struct CoroutineFacts
{
	const VariableEntity* promise;
	const VariableEntity* object;
	const syntax::Initializer* promise_initializer;
	const CoroutineParameterCopy* parameter_copies;
	uint32_t parameter_copy_count;
	const FunctionEntity* allocate;
	const FunctionEntity* deallocate;
	// Explicit arguments following the size. Default arguments belong to
	// the selected allocation function.
	syntax::Slice<syntax::Expr*> allocation_arguments;
	const syntax::Expr* return_on_allocation_failure;
	const VariableEntity* handle;
	const syntax::Expr* make_handle;
	const syntax::Expr* return_object;
	const syntax::Expr* unhandled_exception;
	const syntax::Expr* return_void;
	const CoroutineAwait* initial;
	const CoroutineAwait* final;
};

} // namespace sema
