#include "sema/template_packs.h"

#include "syntax/ast_clone.h"

namespace sema {
namespace {

bool FormValue(const ConstraintNode* node, const PointerMap& atoms)
{
	struct Work
	{
		const ConstraintNode* node;
		uint8_t stage;
	};
	SmallList<Work, 16> pending;
	PointerMap values;
	pending.push_back(Work{ node, 0 });
	bool result = false;
	while (!pending.empty())
	{
		Work& current = pending.back();
		node = current.node;
		if (current.stage == 0)
		{
			const uint32_t known = values.find(node);
			if (known != PointerMap::kMissing)
				result = known != 0;
			else if (node->kind == ConstraintNodeKind::Atom)
			{
				const uint32_t present = atoms.find(node);
				result = present != PointerMap::kMissing && present != 0;
			}
			else
			{
				current.stage = 1;
				pending.push_back(Work{ node->left, 0 });
				continue;
			}
		}
		else if (current.stage == 1 && result == (node->kind == ConstraintNodeKind::Conjunction))
		{
			current.stage = 2;
			pending.push_back(Work{ node->right, 0 });
			continue;
		}
		values.set(node, result);
		pending.pop_back();
	}
	return result;
}

struct ConstraintStep
{
	ConstraintNodeKind kind;
	uint32_t left;
	uint32_t right;
	uint8_t roles;
	uint8_t variable;
};

uint32_t AppendConstraint(const ConstraintNode* root, SmallList<ConstraintStep, 32>& steps, PointerMap& indices)
{
	SmallList<const ConstraintNode*, 16> pending;
	pending.push_back(root);
	while (!pending.empty())
	{
		const ConstraintNode* node = pending.back();
		if (indices.find(node) != PointerMap::kMissing)
		{
			pending.pop_back();
			continue;
		}
		uint32_t left = 0, right = 0;
		if (node->kind != ConstraintNodeKind::Atom)
		{
			left = indices.find(node->left);
			right = indices.find(node->right);
			if (left == PointerMap::kMissing || right == PointerMap::kMissing)
			{
				pending.push_back(left == PointerMap::kMissing ? node->left : node->right);
				continue;
			}
		}
		indices.set(node, static_cast<uint32_t>(steps.size()));
		steps.push_back(ConstraintStep{ node->kind, left, right, 0, 0 });
		pending.pop_back();
	}
	return indices.find(root);
}

bool TryBitwiseSubsumption(const ConstraintNode* first, const ConstraintNode* second, bool& subsumes)
{
	// A counterexample makes the first form true and the second false.
	// The forms are monotone in their atoms. Set first-only atoms true
	// and second-only atoms false; only shared atoms need enumeration.
	constexpr uint8_t kMaxVariables = 20;
	constexpr uint8_t kFirst = 1, kSecond = 2;
	SmallList<ConstraintStep, 32> steps;
	PointerMap indices;
	const uint32_t premise = AppendConstraint(first, steps, indices);
	const uint32_t conclusion = AppendConstraint(second, steps, indices);
	steps[premise].roles |= kFirst;
	steps[conclusion].roles |= kSecond;
	uint8_t variables = 0;
	for (size_t i = steps.size(); i-- != 0;)
	{
		ConstraintStep& step = steps[i];
		if (step.kind != ConstraintNodeKind::Atom)
		{
			steps[step.left].roles |= step.roles;
			steps[step.right].roles |= step.roles;
		}
		else if (step.roles == (kFirst | kSecond))
		{
			step.variable = variables++;
			if (variables > kMaxVariables)
				return false;
		}
	}
	// Each word evaluates the postordered graph for 64 assignments.
	constexpr uint64_t kPatterns[] = { 0xaaaaaaaaaaaaaaaaULL, 0xccccccccccccccccULL, 0xf0f0f0f0f0f0f0f0ULL,
		0xff00ff00ff00ff00ULL, 0xffff0000ffff0000ULL, 0xffffffff00000000ULL };
	const uint32_t batches = 1u << (variables > 6 ? variables - 6 : 0);
	SmallList<uint64_t, 32> values(steps.size(), 0);
	for (uint32_t batch = 0; batch < batches; ++batch)
	{
		for (size_t i = 0; i < steps.size(); ++i)
		{
			const ConstraintStep& step = steps[i];
			if (step.kind == ConstraintNodeKind::Conjunction)
				values[i] = values[step.left] & values[step.right];
			else if (step.kind == ConstraintNodeKind::Disjunction)
				values[i] = values[step.left] | values[step.right];
			else if (step.roles != (kFirst | kSecond))
				values[i] = step.roles == kFirst ? ~uint64_t(0) : 0;
			else
				values[i] = step.variable < 6 ? kPatterns[step.variable]
											  : uint64_t(0) - ((batch >> (step.variable - 6)) & 1u);
		}
		if ((values[premise] & ~values[conclusion]) != 0)
		{
			subsumes = false;
			return true;
		}
	}
	subsumes = true;
	return true;
}

bool Subsumes(const ConstraintNode* first, const ConstraintNode* second)
{
	if (second == nullptr || first == second)
		return true;
	if (first == nullptr)
		return false;
	// Stream the first form's DNF clauses. Testing the second form with
	// just one clause's atoms set is equivalent to checking that clause
	// against every clause of the second form's CNF. No expanded CNF or
	// cross-product is retained. Persistent pending links let alternatives
	// roll back without copying the work or atom set.
	struct Pending
	{
		const ConstraintNode* node;
		uint32_t next;
	};
	struct Choice
	{
		const ConstraintNode* node;
		uint32_t next;
		uint32_t work;
		uint32_t atoms;
	};
	const uint32_t end = 0xffffffffu;
	SmallList<Pending, 16> work;
	SmallList<Choice, 8> choices;
	SmallList<const ConstraintNode*, 16> trail;
	PointerMap atoms;
	work.push_back(Pending{ first, end });
	uint32_t next = 0;
	uint32_t clauses = 0;
	for (;;)
	{
		while (next != end)
		{
			const Pending current = work[next];
			next = current.next;
			const ConstraintNode* node = current.node;
			const uint32_t present = atoms.find(node);
			if (present != PointerMap::kMissing && present != 0)
				continue;
			atoms.set(node, 1);
			trail.push_back(node);
			if (node->kind != ConstraintNodeKind::Atom)
			{
				if (node->kind == ConstraintNodeKind::Disjunction)
					choices.push_back(Choice{
						node->right, next, static_cast<uint32_t>(work.size()), static_cast<uint32_t>(trail.size()) });
				else
				{
					work.push_back(Pending{ node->right, next });
					next = static_cast<uint32_t>(work.size() - 1);
				}
				work.push_back(Pending{ node->left, next });
				next = static_cast<uint32_t>(work.size() - 1);
			}
		}
		if (!FormValue(second, atoms))
			return false;
		if (choices.empty())
			return true;
		// Small forms finish with the streaming algorithm. Larger forms
		// can have many more clauses than there are assignments to shared atoms.
		if (clauses < 128 && ++clauses == 128)
		{
			bool result;
			if (TryBitwiseSubsumption(first, second, result))
				return result;
		}
		const Choice choice = choices.back();
		choices.pop_back();
		while (trail.size() != choice.atoms)
		{
			atoms.set(trail.back(), 0);
			trail.pop_back();
		}
		work.resize(choice.work);
		work.push_back(Pending{ choice.node, choice.next });
		next = static_cast<uint32_t>(work.size() - 1);
	}
}

} // namespace

const ConstraintNode* Analyzer::normalized_constraint(const ConstraintPredicate* predicate)
{
	if (predicate == nullptr)
		return nullptr;
	if (predicate->normalization_state == FactState::InProgress)
		error(predicate->location, "recursive constraint normalization");
	if (predicate->normalization_state == FactState::Done)
		return predicate->normalized;
	predicate->normalization_state = FactState::InProgress;
	TypeList arguments;
	for (uint32_t i = 0; predicate->head != nullptr && i < predicate->head->count; ++i)
	{
		const TemplateParameterEntity* parameter = predicate->head->parameters[i];
		const Type* argument = synthesized_argument(parameter, i);
		arguments.push_back(parameter->pack ? types_.pack(&argument, 1) : argument);
	}
	InstantiationContext context(*this, enter_instantiation(instantiation_depth_ + 1, predicate->location), false,
		predicate->head != nullptr ? predicate->head->ordinal : NameLookup::kNoLimit);
	// These are symbolic mappings, not evaluations of actual arguments.
	template_depth_ = 1;
	Scope* frame = predicate->head != nullptr ? instantiation_frame(predicate->parameters, arguments.data(),
													static_cast<uint32_t>(arguments.size()), predicate->owner)
											  : predicate->owner;
	const ConstraintNode* result = nullptr;
	const auto append = [&](const ConstraintNode* next) {
		if (result == nullptr)
			result = next;
		else
		{
			ConstraintNode* node = arena_.allocate_array<ConstraintNode>(1);
			*node = ConstraintNode{ ConstraintNodeKind::Conjunction, result, next };
			result = node;
		}
	};
	for (uint32_t i = 0; i < predicate->type_constraint_count; ++i)
	{
		const TypeConstraint& constraint = predicate->type_constraints[i];
		if (predicate->head->parameters[constraint.index]->pack)
		{
			// In C++20 the fold introduced by a constrained pack is one
			// atomic expression at this declaration, not the expanded
			// concept body (fold-expanded ordering belongs to C++26).
			ConstraintNode* node = arena_.allocate_array<ConstraintNode>(1);
			*node = ConstraintNode{ ConstraintNodeKind::Atom, nullptr, nullptr };
			append(node);
		}
		else
			append(normalize_type_constraint(*constraint.name, arguments[constraint.index], frame));
	}
	if (predicate->definition != nullptr)
		append(normalize_constraint(*predicate->definition, frame));
	if (predicate->trailing != nullptr)
	{
		BodyContext body = BodyContext();
		body.this_type = predicate->this_type;
		body_ = &body;
		append(normalize_constraint(*predicate->trailing, constraint_trailing_scope(predicate, arguments)));
		body_ = nullptr;
	}
	predicate->normalized = result;
	predicate->normalization_state = FactState::Done;
	return predicate->normalized;
}

const ConstraintNode* Analyzer::normalize_type_constraint(const syntax::Name& source, const Type* type, Scope* scope)
{
	syntax::SyntaxCloner cloner(arena_, true);
	const syntax::Name* name = cloner.name(&source);
	const LookupResult found = lookup_name(*name, scope, LookupFilter::Ordinary);
	if (!found.found() || found.binding->kind != BindingKind::Concept)
		error(source.location, "a type-constraint must name a concept");
	const ConceptEntity* definition = static_cast<const ConceptEntity*>(found.binding->entity);
	TypeList arguments;
	if (!concept_arguments(definition, name->last(), scope, arguments, type))
		error(source.location, "invalid type-constraint argument mapping");
	ConstraintNormalization* normalization = constraint_normalization(definition, arguments, source.location);
	if (normalization->state == FactState::Done)
		return normalization->node;
	normalization->state = FactState::InProgress;
	InstantiationContext context(
		*this, enter_instantiation(instantiation_depth_ + 1, source.location), false, definition->head->ordinal);
	template_depth_ = 1;
	Scope* frame = instantiation_frame(
		definition->parameters, arguments.data(), static_cast<uint32_t>(arguments.size()), definition->owner);
	normalization->node = normalize_constraint(*definition->definition, frame);
	normalization->state = FactState::Done;
	return normalization->node;
}

ConstraintNormalization* Analyzer::constraint_normalization(
	const ConceptEntity* definition, const TypeList& arguments, uint32_t location)
{
	SpecializationKey key{ definition, arguments.data(), static_cast<uint32_t>(arguments.size()) };
	if (ConstraintNormalization** known = constraint_normalizations_.find(key))
	{
		if ((*known)->state == FactState::InProgress)
			error(location, "recursive concept normalization");
		return *known;
	}
	ConstraintNormalization* normalization = arena_.allocate_array<ConstraintNormalization>(1);
	normalization->state = FactState::NotStarted;
	normalization->node = nullptr;
	key.arguments = arena_.copy_array(arguments.data(), arguments.size());
	constraint_normalizations_.insert(key, normalization);
	return normalization;
}

const ConstraintNode* Analyzer::normalize_constraint(const syntax::Expr& expression, Scope* scope)
{
	struct Work
	{
		const syntax::Expr* expr;
		Scope* scope;
		const ConstraintNode* left;
		ConstraintNormalization* normalization;
		uint32_t depth;
		uint32_t limit;
		uint8_t stage;
	};
	SmallList<Work, 16> pending;
	const uint32_t saved_limit = names_.limit();
	pending.push_back(Work{ &expression, scope, nullptr, nullptr, instantiation_depth_, saved_limit, 0 });
	const ConstraintNode* result = nullptr;
	while (!pending.empty())
	{
		Work& current = pending.back();
		names_.set_limit(current.limit);
		while (current.expr->kind == syntax::ExprKind::Paren)
			current.expr = static_cast<const syntax::ParenExpr*>(current.expr)->inner;
		const syntax::Expr* expr = current.expr;
		const syntax::BinaryExpr* binary = expr->kind == syntax::ExprKind::Binary
			? static_cast<const syntax::BinaryExpr*>(expr)
			: nullptr;
		if (binary != nullptr && (binary->op == TokenKind::OP_LAND || binary->op == TokenKind::OP_LOR))
		{
			if (current.stage == 0)
			{
				current.stage = 1;
				pending.push_back(
					Work{ binary->left, current.scope, nullptr, nullptr, current.depth, current.limit, 0 });
			}
			else if (current.stage == 1)
			{
				current.stage = 2;
				current.left = result;
				pending.push_back(
					Work{ binary->right, current.scope, nullptr, nullptr, current.depth, current.limit, 0 });
			}
			else
			{
				if (current.left != result)
				{
					ConstraintNode* node = arena_.allocate_array<ConstraintNode>(1);
					*node = ConstraintNode{ binary->op == TokenKind::OP_LAND ? ConstraintNodeKind::Conjunction
																			 : ConstraintNodeKind::Disjunction,
						current.left, result };
					result = node;
				}
				pending.pop_back();
			}
			continue;
		}
		if (expr->kind == syntax::ExprKind::Concept)
		{
			if (current.stage != 0)
			{
				current.normalization->node = result;
				current.normalization->state = FactState::Done;
				pending.pop_back();
				continue;
			}
			syntax::SyntaxCloner cloner(arena_, true);
			const syntax::Name* name = cloner.name(static_cast<const syntax::IdExpr*>(expr)->name);
			const LookupResult found = lookup_name(*name, current.scope, LookupFilter::Ordinary);
			if (!found.found() || found.binding->kind != BindingKind::Concept)
				error(expr->location, "a normalized concept-id must name a concept");
			const ConceptEntity* definition = static_cast<const ConceptEntity*>(found.binding->entity);
			TypeList arguments;
			if (!concept_arguments(definition, name->last(), current.scope, arguments))
				error(expr->location, "invalid concept argument mapping");
			current.normalization = constraint_normalization(definition, arguments, expr->location);
			if (current.normalization->state == FactState::Done)
			{
				result = current.normalization->node;
				pending.pop_back();
				continue;
			}
			current.normalization->state = FactState::InProgress;
			Scope* frame = instantiation_frame(
				definition->parameters, arguments.data(), static_cast<uint32_t>(arguments.size()), definition->owner);
			current.stage = 1;
			const uint32_t depth = enter_instantiation(current.depth + 1, expr->location);
			pending.push_back(
				Work{ definition->definition, frame, nullptr, nullptr, depth, definition->head->ordinal, 0 });
			continue;
		}
		// Atomic identity includes the original expression and only the
		// parameters it actually uses, after canonical argument mapping.
		const size_t base = decltype_words_.size();
		decltype_words_.push_back(reinterpret_cast<uintptr_t>(expr));
		syntax::SyntaxCloner cloner(arena_, true);
		if (!constraint_words(cloner.expr(expr), current.scope))
			error(expr->location, "unsupported atomic constraint structure");
		DecltypeKey key{ decltype_words_.data() + base, static_cast<uint32_t>(decltype_words_.size() - base) };
		if (const ConstraintNode* const* known = constraint_atoms_.find(key))
			result = *known;
		else
		{
			ConstraintNode* node = arena_.allocate_array<ConstraintNode>(1);
			*node = ConstraintNode{ ConstraintNodeKind::Atom, nullptr, nullptr };
			key.words = arena_.copy_array(key.words, key.count);
			constraint_atoms_.insert(key, node);
			result = node;
		}
		decltype_words_.resize(base);
		pending.pop_back();
	}
	names_.set_limit(saved_limit);
	return result;
}

bool Analyzer::constraints_subsume(const TemplateHead* first, const TemplateHead* second)
{
	return predicates_subsume(template_constraint(first), template_constraint(second));
}

bool Analyzer::predicates_subsume(const ConstraintPredicate* from, const ConstraintPredicate* to)
{
	if (to == nullptr || from == to)
		return true;
	if (from == nullptr)
		return false;
	const EntityPair key{ from, to };
	if (const bool* known = constraint_subsumptions_.find(key))
		return *known;
	const bool result = Subsumes(normalized_constraint(from), normalized_constraint(to));
	constraint_subsumptions_.insert(key, result);
	return result;
}

} // namespace sema
