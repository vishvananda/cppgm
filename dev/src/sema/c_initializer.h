#pragma once

#include "sema/expression_facts.h"
#include "syntax/ast_expressions.h"

namespace sema {

struct CInitializerChild;
struct CInitializerFieldSpans;
struct CInitializerRectangle;

enum class CInitializerProjection : uint8_t
{
	None,
	Fields,
	NestedFields,
	Rectangles
};

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
	CInitializerProjection projection;

	syntax::Slice<const CInitializerFieldSpans> field_spans() const;
	syntax::Slice<const CInitializerRectangle> rectangles() const;
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

// Each lane updates one typed subobject of an array's record elements.
// The offset is to the containing record for a member, or to the
// subobject itself for a fixed array index. Ancestors precede descendants.
struct CInitializerFieldSpans
{
	const DataMember* member;
	const Type* owner;
	uint64_t offset;
	syntax::Slice<const CInitializerChild> spans;
};

struct CInitializerRectangle
{
	const CInitializer* initializer;
	uint64_t row, row_limit, column, column_limit;
};

struct CInitializerWithSpans : CInitializer
{
	union
	{
		syntax::Slice<const CInitializerFieldSpans> fields;
		syntax::Slice<const CInitializerRectangle> regions;
	};
};

inline syntax::Slice<const CInitializerFieldSpans> CInitializer::field_spans() const
{
	return projection == CInitializerProjection::Fields || projection == CInitializerProjection::NestedFields
		? static_cast<const CInitializerWithSpans*>(this)->fields
		: syntax::Slice<const CInitializerFieldSpans>{};
}

inline syntax::Slice<const CInitializerRectangle> CInitializer::rectangles() const
{
	return projection == CInitializerProjection::Rectangles ? static_cast<const CInitializerWithSpans*>(this)->regions
															: syntax::Slice<const CInitializerRectangle>{};
}

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
