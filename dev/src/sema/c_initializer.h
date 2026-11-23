#pragma once

#include "sema/expression_facts.h"
#include "syntax/ast_expressions.h"

namespace sema {

struct CInitializerChild;

// A resolved C initializer. Children are sparse and ordered by storage
// position. A whole-object expression may supply the value the children
// update. An explicit brace pair starts a new value at its destination.
struct CInitializer
{
	const Type* type;
	const syntax::Expr* value;
	syntax::Slice<const CInitializerChild> children;
	bool starts_value;
	bool has_spans;
	// A source expression shared by all surviving spans of one write.
	bool repeat_value;
};

struct CInitializerChild
{
	const CInitializer* initializer;
	union
	{
		const DataMember* member; // record member
		uint64_t limit;           // exclusive end of an array span
	};
	uint64_t index;
};

inline const syntax::Expr* CInitializerOperand(const syntax::Expr* value)
{
	while (value->kind == syntax::ExprKind::Paren)
		value = static_cast<const syntax::ParenExpr*>(value)->inner;
	return value;
}

inline const CInitializer* CInitializerOf(const syntax::BracedInitList* list)
{
	return list != nullptr && list->facts != nullptr && (list->facts->flags & kCInitializer) != 0
		? list->facts->c_initializer
		: nullptr;
}

} // namespace sema
