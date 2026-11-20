#include "sema/analyzer.h"

#include "sema/constant_interpreter.h"

namespace sema {

bool Analyzer::immediate_context() const
{
	if (body_ == nullptr)
		return false;
	if (body_->function != nullptr)
		return body_->function->is_consteval;
	return default_argument_scope_ != nullptr && body_->closure_context != nullptr &&
		body_->closure_context->kind == EntityKind::Function &&
		static_cast<const FunctionEntity*>(body_->closure_context)->is_consteval;
}

void Analyzer::immediate_invocation(const syntax::Expr& expr, const FunctionEntity* function)
{
	if (!semantic() || unevaluated_ != 0 || immediate_context() || failed())
		return;
	if (!function->is_consteval)
		return;
	allow_immediate_names(expr);
	if ((expr.facts->flags & kImmediateValue) != 0)
		return;
	ConstantInterpreter interpreter(*this);
	const ConstValue* value = interpreter.evaluate_immediate(expr);
	ExprFacts* facts = facts_of(expr);
	const bool default_context = body_ != nullptr && body_->function == nullptr &&
		(default_argument_scope_ != nullptr ||
			(body_->closure_context != nullptr && body_->closure_context->kind == EntityKind::Variable));
	if (default_context && interpreter.uses_source_site())
	{
		source_immediate_index_.set(facts, static_cast<uint32_t>(source_immediates_.size()));
		source_immediates_.push_back(*facts);
	}
	else if (value == nullptr)
	{
		error(expr.location, "an immediate invocation is not a constant expression");
		return;
	}
	facts->immediate = value;
	facts->flags |= kImmediateValue;
}

const ConstValue* Analyzer::immediate_result(
	const syntax::Expr& expr, uint32_t site, const FunctionEntity* function, uint32_t* source_site_uses)
{
	const uint32_t index = source_immediate_index_.find(expr.facts);
	if (index == PointerMap::kMissing)
		return expr.facts->immediate;
	// The same default may be used at several locations. Evaluate its
	// typed invocation with the caller's location, keeping the original
	// expression and its default-argument bindings intact.
	if (source_site_uses != nullptr)
		++*source_site_uses;
	ExprFacts facts = source_immediates_[index];
	struct ScopedFacts
	{
		const syntax::Expr& expr;
		const ExprFacts* old;
		~ScopedFacts() { expr.facts = old; }
	} saved{ expr, expr.facts };
	expr.facts = &facts;
	ConstantInterpreter interpreter(*this);
	return interpreter.evaluate_immediate_at(expr, site, function);
}

const ConstValue* Analyzer::immediate_conversion(const syntax::Expr& expr) const
{
	return immediate_construction(expr.facts);
}

void Analyzer::check_immediate_conversion(const syntax::Expr& expr, const Conversion& conversion)
{
	if (!semantic() || unevaluated_ != 0 || immediate_context() || failed())
		return;
	allow_immediate_names(expr);
	if (immediate_conversion(expr) != nullptr)
		return;
	ConstantInterpreter interpreter(*this);
	const ConstValue* value = interpreter.evaluate_immediate_conversion(expr, conversion);
	if (value == nullptr)
	{
		error(expr.location, "an immediate conversion is not a constant expression");
		return;
	}
	immediate_conversion_index_.set(expr.facts, static_cast<uint32_t>(immediate_conversions_.size()));
	immediate_conversions_.push_back(value);
}

const ConstValue* Analyzer::immediate_construction(const void* key) const
{
	const uint32_t index = immediate_conversion_index_.find(key);
	return index != PointerMap::kMissing ? immediate_conversions_[index] : nullptr;
}

void Analyzer::check_immediate_construction(const void* key, const Type* type, const syntax::Initializer* initializer,
	const FunctionEntity* constructor, uint32_t location)
{
	allow_immediate_names(initializer);
	if (immediate_construction(key) != nullptr)
		return;
	ConstantInterpreter interpreter(*this);
	const ConstValue* value = interpreter.evaluate_immediate_construction(type, initializer, constructor, location);
	if (value == nullptr)
		error(location, "an immediate subobject construction is not a constant expression");
	immediate_conversion_index_.set(key, static_cast<uint32_t>(immediate_conversions_.size()));
	immediate_conversions_.push_back(value);
}

void Analyzer::check_immediate_subobject(const SubobjectInit& init, uint32_t location)
{
	for (uint32_t i = 0; i < init.inner_count; ++i)
		check_immediate_subobject(init.inner[i], location);
	if (init.constructor == nullptr || !init.constructor->is_consteval)
		return;
	if (init.forwards)
		error(location, "an immediate inherited constructor requires an immediate function context");
	syntax::Initializer view = syntax::Initializer();
	const syntax::Initializer* initializer = init.default_initializer;
	if (init.mem_initializer != nullptr)
	{
		const syntax::MemInitializer& written = *init.mem_initializer;
		view.kind = written.braced ? syntax::InitializerKind::Braced : syntax::InitializerKind::Parenthesized;
		view.expression = written.list;
		view.arguments = written.arguments;
		view.location = written.location;
		initializer = &view;
		location = written.location;
	}
	const Type* type = init.base != nullptr ? init.base->base->type : init.member->variable->type;
	check_immediate_construction(&init, type, initializer, init.constructor, location);
}

} // namespace sema
