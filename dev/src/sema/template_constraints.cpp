#include "sema/template_packs.h"

#include <algorithm>

#include "sema/placeholder_words.h"
#include "syntax/ast_clone.h"

namespace sema {

namespace {
struct ConstraintKeying
{
	bool& state;
	bool previous;
	explicit ConstraintKeying(bool& value) : state(value), previous(value) { state = true; }
	~ConstraintKeying() { state = previous; }
};
} // namespace

bool Analyzer::constraint_words(const syntax::Expr* expr, Scope* scope)
{
	ConstraintKeying keying(constraint_keying_);
	return decltype_words(expr, scope);
}

bool Analyzer::constraint_name_words(const syntax::Name& name, Scope* scope)
{
	ConstraintKeying keying(constraint_keying_);
	return name_words(name, scope, true);
}

const ConstraintPredicate* Analyzer::template_constraint(const TemplateHead* head) const
{
	if (!cxx20_ || head == nullptr)
		return nullptr;
	const uint32_t index = template_constraint_index_.find(head);
	return index == PointerMap::kMissing ? nullptr : template_constraints_[index];
}

const syntax::Expr* Analyzer::current_template_constraint() const
{
	if (!cxx20_ || template_scope_ == nullptr)
		return nullptr;
	const uint32_t index = template_clause_index_.find(template_scope_);
	return index == PointerMap::kMissing ? nullptr : template_clauses_[index];
}

bool Analyzer::HasTypeConstraints(const syntax::TemplateParameterList& list)
{
	for (const syntax::TemplateParameter* parameter : list.parameters)
		if (syntax::TypeParameterConstraint(*parameter) != nullptr)
			return true;
	return false;
}

void Analyzer::attach_template_constraint(
	TemplateHead* head, Scope* parameters, const syntax::TemplateParameterList& list)
{
	ConstraintPredicate* predicate = new_entity<ConstraintPredicate>(
		EntityKind::ConstraintPredicate, nullptr, parameters->parent, types_.fundamental(FundamentalType::Bool));
	predicate->head = head;
	predicate->parameters = parameters;
	predicate->definition = &list == template_list_ ? current_template_constraint() : nullptr;
	predicate->location = list.location;
	SmallList<TypeConstraint, 4> constraints;
	for (uint32_t i = 0; i < list.parameters.size; ++i)
	{
		const syntax::Name* name = syntax::TypeParameterConstraint(*list.parameters[i]);
		if (name == nullptr)
			continue;
		const TemplateParameterEntity* parameter = head->parameters[i];
		const Type* type = parameter->non_type ? synthesized_type(i) : parameter->type->canonical;
		concept_constraint(*name, type, parameters);
		constraints.push_back(TypeConstraint{ name, i });
	}
	predicate->type_constraints = arena_.copy_array(constraints.data(), constraints.size());
	predicate->type_constraint_count = static_cast<uint32_t>(constraints.size());
	if (predicate->definition != nullptr)
		check_constraint_definition(*predicate->definition, parameters);
	template_constraint_index_.set(head, static_cast<uint32_t>(template_constraints_.size()));
	template_constraints_.push_back(predicate);
}

bool Analyzer::type_constraints_satisfied(const ConstraintPredicate* predicate, const TypeList& arguments, Scope* frame)
{
	for (uint32_t i = 0; i < predicate->type_constraint_count; ++i)
	{
		const TypeConstraint& constraint = predicate->type_constraints[i];
		const Type* argument = arguments[constraint.index];
		const Type* value_type = predicate->head->parameters[constraint.index]->value_type;
		const uint32_t count = argument->kind == TypeKind::Pack ? argument->param_count : 1;
		for (uint32_t element = 0; element < count; ++element)
		{
			syntax::SyntaxCloner cloner(arena_, true);
			const syntax::Name* name = cloner.name(constraint.name);
			const Type* type = argument->kind == TypeKind::Pack ? argument->params[element] : argument;
			if (value_type != nullptr)
			{
				if (type->kind != TypeKind::Value)
					return false;
				type = deduced_value_placeholder(value_type, type->element);
				if (type == nullptr)
					return false;
			}
			if (concept_constraint(*name, type, frame) == ConstraintStatus::Unsatisfied || failed())
				return false;
		}
	}
	return true;
}

bool Analyzer::template_constraints_equivalent(
	const TemplateHead* head, const syntax::Expr* expression, const syntax::TemplateParameterList* list, Scope* scope)
{
	const ConstraintPredicate* earlier = template_constraint(head);
	if (!constraints_equivalent(earlier == nullptr ? nullptr : earlier->definition,
			earlier == nullptr ? nullptr : earlier->parameters, expression, scope))
		return false;
	uint32_t index = 0;
	for (uint32_t i = 0; list != nullptr && i < list->parameters.size; ++i)
	{
		const syntax::Name* next = syntax::TypeParameterConstraint(*list->parameters[i]);
		if (next == nullptr)
			continue;
		if (earlier == nullptr || index == earlier->type_constraint_count ||
			earlier->type_constraints[index].index != i)
			return false;
		const size_t base = decltype_words_.size();
		bool known = constraint_name_words(*earlier->type_constraints[index].name, earlier->parameters);
		const size_t middle = decltype_words_.size();
		known = known && constraint_name_words(*next, scope);
		const bool equal = known && decltype_words_.size() - middle == middle - base &&
			std::equal(decltype_words_.begin() + static_cast<std::ptrdiff_t>(base),
				decltype_words_.begin() + static_cast<std::ptrdiff_t>(middle),
				decltype_words_.begin() + static_cast<std::ptrdiff_t>(middle));
		decltype_words_.resize(base);
		if (!equal)
			return false;
		++index;
	}
	return index == (earlier == nullptr ? 0 : earlier->type_constraint_count);
}

void Analyzer::check_constraint_definition(const syntax::Expr& expression, Scope* scope)
{
	SmallList<const syntax::Expr*, 16> pending;
	pending.push_back(&expression);
	ScratchContext scratch(*this);
	++unevaluated_;
	while (!pending.empty())
	{
		const syntax::Expr* expr = pending.back();
		pending.pop_back();
		while (expr->kind == syntax::ExprKind::Paren)
			expr = static_cast<const syntax::ParenExpr*>(expr)->inner;
		if (expr->kind == syntax::ExprKind::Binary)
		{
			const syntax::BinaryExpr* binary = static_cast<const syntax::BinaryExpr*>(expr);
			if (binary->op == TokenKind::OP_LAND || binary->op == TokenKind::OP_LOR)
			{
				pending.push_back(binary->right);
				pending.push_back(binary->left);
				continue;
			}
		}
		expression_walk(expr, scope, true);
		if (type_dependent(expr, scope) || instantiation_dependent(*expr, scope, true))
			continue;
		const ExprFacts* facts = typed(*expr, scope);
		if (facts == nullptr || facts->type == nullptr ||
			facts->type->unqualified != types_.fundamental(FundamentalType::Bool))
			error(expr->location, "a constraint must have type bool");
	}
	--unevaluated_;
}

bool Analyzer::template_constraints_satisfied(const TemplateHead* head, const TypeList& arguments, uint32_t location)
{
	const ConstraintPredicate* predicate = template_constraint(head);
	return predicate == nullptr || predicate_result(predicate, arguments, location) != ConstraintStatus::Unsatisfied;
}

bool Analyzer::constraints_equivalent(const syntax::Expr* first, Scope* earlier, const syntax::Expr* next, Scope* scope)
{
	if (first == nullptr || next == nullptr)
		return first == next;
	if (first == next && earlier == scope)
		return true;
	// The existing structural key resolves template parameters by their
	// canonical positions and names by lexical declaration identity.
	std::vector<uint64_t>& words = decltype_words_;
	const size_t base = words.size();
	bool known = constraint_words(first, earlier);
	const size_t middle = words.size();
	known = known && constraint_words(next, scope);
	const bool equivalent = known && words.size() - middle == middle - base &&
		std::equal(words.begin() + static_cast<std::ptrdiff_t>(base),
			words.begin() + static_cast<std::ptrdiff_t>(middle), words.begin() + static_cast<std::ptrdiff_t>(middle));
	words.resize(base);
	return equivalent;
}

bool Analyzer::requires_words(const syntax::RequiresExpr& expr, Scope* scope)
{
	std::vector<uint64_t>& words = decltype_words_;
	words.push_back(Word(kWordNode, static_cast<uint64_t>(syntax::ExprKind::Requires)));
	if (!requirement_parameters(expr, scope))
		return false;
	const uint32_t count = expr.parameters == nullptr ? 0 : expr.parameters->parameters.size;
	words.push_back(count);
	for (uint32_t i = 0; i < count; ++i)
	{
		const Type* type = parameter_type(*expr.parameters->parameters[i], scope);
		if (type == nullptr || failed())
			return false;
		words.push_back(reinterpret_cast<uintptr_t>(type->canonical));
	}
	words.push_back(expr.requirements.size);
	for (const syntax::Requirement& requirement : expr.requirements)
	{
		words.push_back(static_cast<uint64_t>(requirement.kind) | static_cast<uint64_t>(requirement.is_noexcept) << 8);
		if (requirement.kind == syntax::RequirementKind::Type)
		{
			const Type* type = type_id(*requirement.type, scope);
			if (type == nullptr || failed())
				return false;
			words.push_back(reinterpret_cast<uintptr_t>(type->canonical));
		}
		else if (!decltype_words(requirement.expression, scope))
			return false;
		if (requirement.return_constraint == nullptr)
			words.push_back(kWordAbsent);
		else if (!name_words(*requirement.return_constraint, scope, true))
			return false;
	}
	return true;
}

} // namespace sema
