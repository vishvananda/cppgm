#include "sema/instantiation_context.h"

namespace sema {

const ConstraintPredicate* Analyzer::function_constraint(const FunctionEntity* function) const
{
	if (!cxx20_ || function == nullptr)
		return nullptr;
	if (function->primary != nullptr)
		function = function->primary;
	const uint32_t index = function_constraint_index_.find(function);
	return index == PointerMap::kMissing ? template_constraint(HeadOf(function)) : template_constraints_[index];
}

Scope* Analyzer::constraint_prototype(const DeclaratorInfo& info)
{
	const Type* type = info.type->canonical;
	Scope* prototype = prototype_scope(*info.parameters, type->params, type->param_count, info.after);
	prototype->dumped = false;
	return prototype;
}

void Analyzer::attach_function_constraint(
	FunctionEntity* function, const DeclaratorInfo& info, const ClassEntity* befriending)
{
	const syntax::Expr* source = syntax::RequiresClause(info.function_suffix);
	if (!cxx20_ || source == nullptr || function_constraint_index_.find(function) != PointerMap::kMissing)
		return;
	// A friend is templated by the class that declares it.
	bool templated = function->templated;
	for (const Scope* scope = befriending != nullptr ? befriending->scope : function->owner; scope != nullptr;
		scope = scope->parent)
		if (scope->kind == ScopeKind::Class && scope->entity != nullptr)
			templated = templated || static_cast<const ClassEntity*>(scope->entity)->templ != nullptr;
	if (!templated)
		error(source->location, "a trailing requires-clause requires a templated function");
	if (function->is_virtual)
		error(source->location, "a virtual function cannot have a requires-clause");
	ConstraintPredicate* predicate = const_cast<ConstraintPredicate*>(template_constraint(HeadOf(function)));
	uint32_t index;
	if (predicate == nullptr)
	{
		predicate = new_entity<ConstraintPredicate>(EntityKind::ConstraintPredicate, nullptr,
			function->templated ? template_scope_->parent : info.after, types_.fundamental(FundamentalType::Bool));
		predicate->head = HeadOf(function);
		predicate->parameters = function->templated ? template_scope_ : nullptr;
		predicate->location = source->location;
		index = static_cast<uint32_t>(template_constraints_.size());
		template_constraints_.push_back(predicate);
		if (predicate->head != nullptr)
			template_constraint_index_.set(predicate->head, index);
	}
	else
		index = template_constraint_index_.find(predicate->head);
	predicate->trailing = source;
	predicate->prototype = constraint_prototype(info);
	if (function->member && !function->is_static)
	{
		const uint32_t closure = graph_.closure_index.find(function->owner->entity);
		predicate->this_type = closure != PointerMap::kMissing
			? (body_ != nullptr ? body_->this_type : nullptr)
			: types_.pointer(types_.qualified(function->owner->entity->type, function->type->function_cv));
	}
	function_constraint_index_.set(function, index);
	// Member clauses see the complete class, including later declarations.
	if (function->owner->kind != ScopeKind::Class)
		check_constraint_definition(*source, predicate->prototype);
}

bool Analyzer::function_constraints_equivalent(const FunctionEntity* function, const DeclaratorInfo& info)
{
	const ConstraintPredicate* predicate = function_constraint(function);
	const syntax::Expr* earlier = predicate == nullptr ? nullptr : predicate->trailing;
	const syntax::Expr* next = syntax::RequiresClause(info.function_suffix);
	if (earlier == nullptr || next == nullptr)
		return earlier == next;
	BodyContext context = BodyContext();
	BodyContext* saved = body_;
	context.this_type = predicate->this_type;
	body_ = &context;
	const bool result = constraints_equivalent(earlier, predicate->prototype, next, constraint_prototype(info));
	body_ = saved;
	return result;
}

bool Analyzer::equivalent_function_constraints(
	const FunctionEntity* function, bool templated, const DeclaratorInfo& info)
{
	return (!templated ||
			   template_constraints_equivalent(
				   HeadOf(function), current_template_constraint(), template_list_, template_scope_)) &&
		function_constraints_equivalent(function, info);
}

uint64_t Analyzer::constraint_redeclaration_hash(const ConstraintPredicate* earlier, const DeclaratorInfo* next)
{
	// Reuse the same resolved structural words as constraint equivalence.
	// The head and the trailing clause retain their separate roles.
	const size_t base = decltype_words_.size();
	const syntax::Expr* head = next != nullptr ? current_template_constraint()
		: earlier != nullptr                   ? earlier->definition
											   : nullptr;
	const syntax::Expr* trailing = next != nullptr ? syntax::RequiresClause(next->function_suffix)
		: earlier != nullptr                       ? earlier->trailing
												   : nullptr;
	Scope* scope = next != nullptr ? template_scope_ : earlier != nullptr ? earlier->parameters : nullptr;
	bool known = constraint_words(head, scope);
	const auto append_type = [&](uint32_t index, const syntax::Name* name) {
		decltype_words_.push_back(index);
		return constraint_name_words(*name, scope);
	};
	if (next != nullptr && template_list_ != nullptr)
	{
		for (uint32_t i = 0; known && i < template_list_->parameters.size; ++i)
			if (const syntax::Name* name = syntax::TypeParameterConstraint(*template_list_->parameters[i]))
				known = append_type(i, name);
	}
	else if (earlier != nullptr)
	{
		for (uint32_t i = 0; known && i < earlier->type_constraint_count; ++i)
		{
			const TypeConstraint& type = earlier->type_constraints[i];
			known = append_type(type.index, type.name);
		}
	}
	if (known && trailing != nullptr)
	{
		BodyContext context = BodyContext();
		BodyContext* saved = body_;
		body_ = &context;
		known = constraint_words(trailing, next != nullptr ? constraint_prototype(*next) : earlier->prototype);
		body_ = saved;
	}
	const uint64_t hash = known ? static_cast<uint64_t>(DecltypeHash()(DecltypeKey{ decltype_words_.data() + base,
									  static_cast<uint32_t>(decltype_words_.size() - base) })) |
			1
								: 0;
	decltype_words_.resize(base);
	return hash;
}

const FunctionList* Analyzer::constrained_overload_variant(const FunctionList* primary,
	const NameLookup::OverloadVariant* variants, const Scope* where, bool templated, const DeclaratorInfo& info)
{
	const auto equivalent = [&](const FunctionList* node) {
		const auto* function = static_cast<const FunctionEntity*>(node->binding->entity);
		return function->owner == where && equivalent_function_constraints(function, templated, info);
	};
	// Namespace declarations can use a stable lexical key. Incomplete
	// classes may still acquire members used in a trailing constraint.
	if (templated && where->kind == ScopeKind::Namespace && class_depth_ == 0)
	{
		const uint64_t hash = constraint_redeclaration_hash(nullptr, &info);
		if (hash != 0)
		{
			uint32_t group = constraint_overload_groups_.find(primary);
			if (group == PointerMap::kMissing)
			{
				group = static_cast<uint32_t>(indexed_constraint_overloads_.size());
				constraint_overload_groups_.set(primary, group);
				indexed_constraint_overloads_.push_back(nullptr);
			}
			const NameLookup::OverloadVariant* indexed = indexed_constraint_overloads_[group];
			for (const NameLookup::OverloadVariant* variant = variants; variant != indexed; variant = variant->next)
			{
				const auto* function = static_cast<const FunctionEntity*>(variant->node->binding->entity);
				const ConstraintOverloadKey key = { primary,
					constraint_redeclaration_hash(function_constraint(function), nullptr) };
				ConstraintOverload** bucket = constraint_overloads_.find(key);
				ConstraintOverload* entry = arena_.allocate_array<ConstraintOverload>(1);
				*entry = ConstraintOverload{ variant->node, bucket != nullptr ? *bucket : nullptr };
				if (bucket != nullptr)
					*bucket = entry;
				else
					constraint_overloads_.insert(key, entry);
			}
			indexed_constraint_overloads_[group] = variants;
			for (uint64_t key : { hash, uint64_t(0) })
				if (ConstraintOverload* const* bucket = constraint_overloads_.find(
						ConstraintOverloadKey{ primary, key }))
					for (const ConstraintOverload* candidate = *bucket; candidate != nullptr;
						candidate = candidate->next)
						if (equivalent(candidate->node))
							return candidate->node;
			return nullptr;
		}
	}
	for (const NameLookup::OverloadVariant* variant = variants; variant != nullptr; variant = variant->next)
		if (equivalent(variant->node))
			return variant->node;
	return nullptr;
}

Scope* Analyzer::constraint_trailing_scope(const ConstraintPredicate* predicate, const TypeList& arguments)
{
	return predicate->head == nullptr
		? predicate->prototype
		: substituted_scope(predicate->prototype, substitution_of(predicate->head, arguments.data()));
}

bool Analyzer::function_constraints_satisfied(const FunctionEntity* function)
{
	const ConstraintPredicate* predicate = function_constraint(function);
	if (predicate == nullptr)
		return true;
	TypeList arguments;
	if (function->primary != nullptr)
		for (uint32_t i = 0; i < HeadOf(function->primary)->count; ++i)
			arguments.push_back(ArgumentsOf(function)[i]);
	return predicate_result(predicate, arguments, 0) != ConstraintStatus::Unsatisfied;
}

bool Analyzer::function_constraints_subsume(const FunctionEntity* first, const FunctionEntity* second)
{
	return predicates_subsume(function_constraint(first), function_constraint(second));
}

} // namespace sema
