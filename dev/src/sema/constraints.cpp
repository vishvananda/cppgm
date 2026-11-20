#include "sema/template_packs.h"

#include "syntax/ast_clone.h"

#include "sema/instantiation_context.h"

namespace sema {

syntax::Expr* Analyzer::constraint_operand(const syntax::Expr& expr, Scope* scope)
{
	FrameExpander expander(*this, scope);
	syntax::SyntaxCloner cloner(arena_, true, expander.get());
	if (expr.kind != syntax::ExprKind::Requires)
		return cloner.expr(&expr);
	const syntax::RequiresExpr& source = static_cast<const syntax::RequiresExpr&>(expr);
	syntax::RequiresExpr* copy = arena_.allocate_array<syntax::RequiresExpr>(1);
	*copy = source;
	copy->facts = nullptr;
	copy->parameters = cloner.parameter_clause(source.parameters);
	if (!cloner.parameter_packs().empty())
	{
		copy->pattern_parameters = source.parameters;
		using Pack = std::pair<const Identifier*, uint32_t>;
		copy->parameter_packs.size = static_cast<uint32_t>(cloner.parameter_packs().size());
		Pack* packs = arena_.allocate_array<Pack>(copy->parameter_packs.size);
		for (uint32_t i = 0; i < copy->parameter_packs.size; ++i)
			packs[i] = cloner.parameter_packs()[i];
		copy->parameter_packs.data = packs;
	}
	// Requirements are reached in lexical order, and nested constraints
	// short-circuit before their own operands are substituted.
	return copy;
}

ExprFacts* Analyzer::requires_expression(const syntax::RequiresExpr& expr, Scope* scope)
{
	if (expr.facts != nullptr && (expr.facts->flags & kFolded) != 0)
		return const_cast<ExprFacts*>(expr.facts);
	if (template_depth_ != 0 && expr.facts != nullptr && (expr.facts->flags & kValueDependentUse) != 0)
	{
		names_.note_value_parameter_use();
		return const_cast<ExprFacts*>(expr.facts);
	}
	ExprFacts* result = new_facts(expr, types_.fundamental(FundamentalType::Bool), ValueCategory::PRValue);
	Scope* const saved_expression_scope = expression_scope_;

	bool templated = false;
	for (const Scope* enclosing = scope; enclosing != nullptr; enclosing = enclosing->parent)
		templated = templated || enclosing->kind == ScopeKind::TemplateParameters;
	ScratchContext scratch(*this);
	const uint32_t saved_unevaluated = unevaluated_;
	++unevaluated_;
	if (templated)
	{
		SoftSubstitution substitution(*this);
		result->value = requirements_satisfied(expr, scope) && !substitution.failed();
	}
	else
		result->value = requirements_satisfied(expr, scope);
	unevaluated_ = saved_unevaluated;
	expression_scope_ = saved_expression_scope;
	if ((result->flags & kValueDependentUse) != 0)
		names_.note_value_parameter_use();
	else
		result->flags |= kFolded;
	return result;
}

bool Analyzer::requirement_parameters(const syntax::RequiresExpr& expr, Scope*& scope)
{
	if (expr.parameters != nullptr)
	{
		const syntax::ParameterClause& clause = *expr.parameters;
		Scope* local = new_scope(ScopeKind::Function, scope, nullptr, nullptr, nullptr);
		local->dumped = false;
		TypeList parameters;
		for (uint32_t i = 0; i < clause.parameters.size; ++i)
		{
			const syntax::ParameterDeclaration& declaration = *clause.parameters[i];
			const Type* type = parameter_type(declaration, local);
			if (type == nullptr || failed())
				return false;
			const bool sole_unnamed = clause.parameters.size == 1 &&
				syntax::NameOfDeclarator(clause.parameters[i]->declarator) == nullptr;
			if (sole_unnamed && template_depth_ != 0 && dependent_type(type))
				clause.dependent_sole = true;
			if (type->unqualified == types_.fundamental(FundamentalType::Void))
			{
				if (sole_unnamed && !clause.dependent_sole)
					break;
				return substitution_error(declaration.location, "void requires-expression parameter");
			}
			const Type* object = parameter_object_type(type);
			const syntax::Name* name = syntax::NameOfDeclarator(declaration.declarator);
			if (name != nullptr)
			{
				const Identifier* identifier = name->last().identifier;
				if (template_depth_ != 0)
					check_template_parameter_name(scope, identifier, name->location);
				const NameEntry* previous = names_.find(local, identifier);
				if (previous != nullptr && previous->value != nullptr)
					error(name->location, "duplicate requires-expression parameter");
			}
			if (template_depth_ != 0 && dependent_type(object))
				declaration.requirement_type_dependent = true;
			Binding* binding = declare_parameter(local, clause, i, object);
			binding->dependent = declaration.requirement_type_dependent;
			if (!expr.parameter_packs.empty())
				parameters.push_back(object);
		}
		scope = local;
		if (expr.pattern_parameters != nullptr)
			scope = parameter_pack_scope(local, *expr.pattern_parameters, expr.parameter_packs.data,
				expr.parameter_packs.size, parameters.data(), static_cast<uint32_t>(parameters.size()));
	}
	return true;
}

bool Analyzer::requirements_satisfied(const syntax::RequiresExpr& expr, Scope* scope)
{
	if (!requirement_parameters(expr, scope))
		return false;
	const auto defer = [&]() {
		const_cast<ExprFacts*>(expr.facts)->flags |= kValueDependentUse;
		return false;
	};
	if (template_depth_ != 0 && expr.parameters != nullptr)
		for (const Binding* parameter = scope->bindings; parameter != nullptr; parameter = parameter->next)
			if (parameter->type != nullptr && dependent_type(parameter->type))
				return defer();
	for (const syntax::Requirement& requirement : expr.requirements)
	{
		if (requirement.kind == syntax::RequirementKind::Type)
		{
			FrameExpander expander(*this, scope);
			syntax::SyntaxCloner cloner(arena_, true, expander.get());
			const Type* type = type_id(*cloner.type_id(requirement.type), scope);
			if (type == nullptr || failed())
				return false;
			if (template_depth_ != 0 && dependent_type(type))
				return defer();
			continue;
		}
		if (template_depth_ != 0 && instantiation_dependent(*requirement.expression, scope, true))
			return defer();
		if (requirement.kind == syntax::RequirementKind::Nested)
		{
			if (!constraint_satisfied(*requirement.expression, scope))
				return false;
			continue;
		}
		const syntax::Expr* operand = constraint_operand(*requirement.expression, scope);
		const ExprFacts* facts = typed_value(*operand, scope);
		if (facts == nullptr || failed())
			return false;
		if (requirement.is_noexcept && may_throw(*operand, 0))
			return false;
		if (requirement.return_constraint != nullptr)
		{
			// A compound requirement tests decltype((operand)), retaining
			// cv-qualifiers and the operand's value category.
			const Type* type = facts->category == ValueCategory::PRValue
				? facts->type
				: types_.reference(facts->type, facts->category == ValueCategory::XValue);
			const ConstraintStatus status = concept_constraint(*requirement.return_constraint, type, scope);
			if (status == ConstraintStatus::Dependent)
				return defer();
			if (status == ConstraintStatus::Unsatisfied)
				return false;
		}
	}
	return true;
}

bool Analyzer::constraint_satisfied(const syntax::Expr& expr, Scope* scope)
{
	// The parser's left-nested logical chains can be much deeper than
	// syntactic nesting. Visit each needed edge once without recursion;
	// do not even substitute the skipped operand.
	SmallList<const syntax::BinaryExpr*, 16> pending;
	const syntax::Expr* current = &expr;
	for (;;)
	{
		while (current->kind == syntax::ExprKind::Paren)
			current = static_cast<const syntax::ParenExpr*>(current)->inner;
		if (current->kind == syntax::ExprKind::Binary)
		{
			const syntax::BinaryExpr* binary = static_cast<const syntax::BinaryExpr*>(current);
			if (binary->op == TokenKind::OP_LAND || binary->op == TokenKind::OP_LOR)
			{
				pending.push_back(binary);
				current = binary->left;
				continue;
			}
		}
		bool value;
		if (soft_substitution_ == 0)
			value = atomic_constraint_satisfied(*constraint_operand(*current, scope), scope);
		else
		{
			// A failed atom is false, without poisoning a disjunction's
			// other operand. Hard errors in demanded bodies still diagnose.
			SoftSubstitution substitution(*this);
			value = atomic_constraint_satisfied(*constraint_operand(*current, scope), scope) && !substitution.failed();
		}
		current = nullptr;
		while (!pending.empty())
		{
			const syntax::BinaryExpr* binary = pending.back();
			pending.pop_back();
			if (value == (binary->op == TokenKind::OP_LAND))
			{
				current = binary->right;
				break;
			}
		}
		if (current == nullptr)
			return value;
	}
}

bool Analyzer::atomic_constraint_satisfied(const syntax::Expr& expr, Scope* scope)
{
	const ExprFacts* facts = typed(expr, scope);
	if (facts == nullptr || failed())
		return false;
	if (facts->type == nullptr || facts->type->unqualified != types_.fundamental(FundamentalType::Bool))
		error(expr.location, "a constraint must have type bool");
	Constant value;
	if (!integral_constant(expr, scope, value))
		error(expr.location, "a constraint must be a constant expression");
	return value.bits != 0;
}

} // namespace sema
