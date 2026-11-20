#pragma once

namespace syntax {
struct Expr;
}

namespace sema {

struct VariableEntity;

// The selected calls at an await point. The awaiter is initialized from
// source once and lives until await_resume finishes or the frame is destroyed.
struct CoroutineAwait
{
	const syntax::Expr* source;
	const VariableEntity* awaiter;
	const syntax::Expr* ready;
	const syntax::Expr* suspend;
	const syntax::Expr* resume;
};

// The implicit expressions of the complete coroutine definition. Ordinary
// overload resolution and expression facts describe every selected call.
struct CoroutineFacts
{
	const VariableEntity* promise;
	const VariableEntity* handle;
	const syntax::Expr* return_object;
	const syntax::Expr* unhandled_exception;
	const syntax::Expr* return_void;
	const CoroutineAwait* initial;
	const CoroutineAwait* final;
};

} // namespace sema
