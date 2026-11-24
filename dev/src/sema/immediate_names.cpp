#include "sema/analyzer.h"

#include "support/small_list.h"

namespace sema {
namespace {

using Expressions = SmallList<const syntax::Expr*, 16>;

void InitializerOperands(const syntax::Initializer* initializer, Expressions& pending)
{
	if (initializer == nullptr)
		return;
	pending.push_back(initializer->expression);
	for (const syntax::Expr* argument : initializer->arguments)
		pending.push_back(argument);
}

// Walk only the written operands of a selected immediate invocation.
// Function bodies have their own immediate-function context; unevaluated
// operands never recorded a potentially evaluated function designation.
void InvocationOperands(const syntax::Expr& expr, Expressions& pending)
{
	switch (expr.kind)
	{
	case syntax::ExprKind::Paren:
		pending.push_back(static_cast<const syntax::ParenExpr&>(expr).inner);
		break;
	case syntax::ExprKind::Binary:
	case syntax::ExprKind::Assign:
		pending.push_back(static_cast<const syntax::BinaryExpr&>(expr).left);
		pending.push_back(static_cast<const syntax::BinaryExpr&>(expr).right);
		break;
	case syntax::ExprKind::Unary:
	case syntax::ExprKind::Postfix:
		pending.push_back(static_cast<const syntax::UnaryExpr&>(expr).operand);
		break;
	case syntax::ExprKind::Conditional:
	{
		const syntax::ConditionalExpr& choice = static_cast<const syntax::ConditionalExpr&>(expr);
		pending.push_back(choice.condition);
		pending.push_back(choice.then_expr);
		pending.push_back(choice.else_expr);
		break;
	}
	case syntax::ExprKind::Call:
	{
		const syntax::CallExpr& call = static_cast<const syntax::CallExpr&>(expr);
		pending.push_back(call.callee);
		for (const syntax::Expr* argument : call.arguments)
			pending.push_back(argument);
		break;
	}
	case syntax::ExprKind::FunctionalCast:
	{
		const syntax::FunctionalCastExpr& cast = static_cast<const syntax::FunctionalCastExpr&>(expr);
		pending.push_back(cast.braced);
		for (const syntax::Expr* argument : cast.arguments)
			pending.push_back(argument);
		break;
	}
	case syntax::ExprKind::Subscript:
		pending.push_back(static_cast<const syntax::SubscriptExpr&>(expr).base);
		pending.push_back(static_cast<const syntax::SubscriptExpr&>(expr).index);
		break;
	case syntax::ExprKind::Member:
		pending.push_back(static_cast<const syntax::MemberExpr&>(expr).base);
		break;
	case syntax::ExprKind::Cast:
		pending.push_back(static_cast<const syntax::CastExpr&>(expr).operand);
		break;
	case syntax::ExprKind::BracedInit:
		for (const syntax::Expr* element : static_cast<const syntax::BracedInitList&>(expr).elements)
			pending.push_back(element);
		break;
	case syntax::ExprKind::Lambda:
		for (const syntax::LambdaCapture& capture : static_cast<const syntax::LambdaExpr&>(expr).captures)
			InitializerOperands(capture.initializer, pending);
		break;
	case syntax::ExprKind::PackExpansion:
		pending.push_back(static_cast<const syntax::PackExpansionExpr&>(expr).pattern);
		break;
	case syntax::ExprKind::Fold:
		pending.push_back(static_cast<const syntax::FoldExpr&>(expr).pattern);
		pending.push_back(static_cast<const syntax::FoldExpr&>(expr).init);
		break;
	case syntax::ExprKind::Selection:
		pending.push_back(static_cast<const syntax::SelectionExpr&>(expr).selected);
		break;
	case syntax::ExprKind::BuiltinTrait:
		pending.push_back(static_cast<const syntax::BuiltinTraitExpr&>(expr).operand);
		break;
	default:
		break;
	}
}

} // namespace

void Analyzer::note_immediate_name(const syntax::Expr& expr)
{
	if (immediate_name_index_.find(&expr) != PointerMap::kMissing)
		return;
	immediate_name_index_.set(&expr, static_cast<uint32_t>(immediate_names_.size()));
	immediate_names_.push_back(ImmediateName{ &expr, false });
	++outstanding_immediate_names_;
}

void Analyzer::allow_immediate_names(const syntax::Expr& root)
{
	if (outstanding_immediate_names_ == 0)
		return;
	Expressions pending;
	pending.push_back(&root);
	while (!pending.empty() && outstanding_immediate_names_ != 0)
	{
		const syntax::Expr* expr = pending.back();
		pending.pop_back();
		if (expr == nullptr)
			continue;
		const uint32_t index = immediate_name_index_.find(expr);
		if (index != PointerMap::kMissing && !immediate_names_[index].allowed)
		{
			immediate_names_[index].allowed = true;
			--outstanding_immediate_names_;
		}
		InvocationOperands(*expr, pending);
	}
}

void Analyzer::allow_immediate_names(const syntax::Initializer* initializer)
{
	if (outstanding_immediate_names_ == 0 || initializer == nullptr)
		return;
	if (initializer->expression != nullptr)
		allow_immediate_names(*initializer->expression);
	for (const syntax::Expr* argument : initializer->arguments)
		allow_immediate_names(*argument);
}

void Analyzer::check_immediate_names()
{
	if (outstanding_immediate_names_ == 0)
		return;
	for (const ImmediateName& name : immediate_names_)
		if (!name.allowed)
			error(name.expression->location, "an immediate function named outside an immediate invocation");
}

} // namespace sema
