#include "sema/analyzer.h"

#include "sema/conversions.h"
#include "support/flat_map.h"
#include "support/small_list.h"

#include <functional>
#include <memory>
#include <vector>

namespace sema {

namespace {

struct CompatibilityFacts
{
	uint64_t family;
	bool flexible;
	bool listed;
};

// An exact type can match another exact type only by canonical identity.
// A flexible type may match a distinct type in its family. Family keys omit
// array bounds and function parameters, and group enums with integer types.
// A family collision can only add a call to the ordinary compatibility test.
class GenericAssociationIndex
{
public:
	explicit GenericAssociationIndex(bool c23) : c23_(c23) {}
	bool insert(const Type* type, ConversionRules& conversions);

private:
	struct Entry
	{
		const Type* type;
		uint32_t previous;
		uint32_t previous_flexible;
	};

	struct Family
	{
		uint32_t last = PointerMap::kMissing;
		uint32_t last_flexible = PointerMap::kMissing;
	};

	CompatibilityFacts& facts(const Type* type);
	CompatibilityFacts compute_facts(const Type* type);

	FlatMap<const Type*, CompatibilityFacts, std::hash<const Type*>> types_;
	FlatMap<uint64_t, Family, std::hash<uint64_t>> families_;
	std::vector<Entry> entries_;
	bool c23_;
};

CompatibilityFacts& GenericAssociationIndex::facts(const Type* type)
{
	type = type->canonical;
	if (CompatibilityFacts* saved = types_.find(type))
		return *saved;
	types_.insert(type, compute_facts(type));
	return *types_.find(type);
}

CompatibilityFacts GenericAssociationIndex::compute_facts(const Type* type)
{
	const bool enumeration = type->kind == TypeKind::Enum;
	if (enumeration || (type->kind == TypeKind::Fundamental && IsIntegralType(type)))
		return { 0x80u | type->cv, enumeration, false };
	if (c23_ && type->kind == TypeKind::Class)
	{
		const ClassEntity* record = ClassOf(type);
		if (!record->anonymous)
			return { reinterpret_cast<uintptr_t>(record->name) * 0x517cc1b727220a95ull + type->cv, true, false };
	}
	if (type->kind != TypeKind::Array && type->kind != TypeKind::Pointer && type->kind != TypeKind::Function)
		return { type->hash, false, false };
	const CompatibilityFacts element = facts(type->element);
	const uint64_t family = element.family * 0x517cc1b727220a95ull + (static_cast<unsigned>(type->kind) << 8) +
		type->cv;
	CompatibilityFacts result{ family, element.flexible, false };
	if (type->kind == TypeKind::Array)
		result.flexible = result.flexible || !type->has_array_bound() || type->runtime_array();
	if (type->kind == TypeKind::Function)
	{
		result.flexible = result.flexible || type->c_unprototyped() || type->owner != nullptr ||
			type->function_cv != 0 || type->ref != RefQualifier::None;
		for (uint32_t i = 0; i < type->param_count && !result.flexible; ++i)
			result.flexible = facts(type->params[i]->unqualified).flexible;
	}
	return result;
}

bool GenericAssociationIndex::insert(const Type* type, ConversionRules& conversions)
{
	type = type->canonical;
	CompatibilityFacts& profile = facts(type);
	if (profile.listed)
		return false;
	Family* family = families_.find(profile.family);
	if (family == nullptr)
	{
		families_.insert(profile.family, Family());
		family = families_.find(profile.family);
	}
	uint32_t next = profile.flexible ? family->last : family->last_flexible;
	while (next != PointerMap::kMissing)
	{
		const Entry& earlier = entries_[next];
		if (conversions.c_type_compatible(earlier.type, type))
			return false;
		next = profile.flexible ? earlier.previous : earlier.previous_flexible;
	}
	const uint32_t index = static_cast<uint32_t>(entries_.size());
	entries_.push_back(Entry{ type, family->last, family->last_flexible });
	profile.listed = true;
	family->last = index;
	if (profile.flexible)
		family->last_flexible = index;
	return true;
}

} // namespace

ExprFacts* Analyzer::selection_expression(const syntax::SelectionExpr& selection, Scope* scope)
{
	if (selection.selection == syntax::SelectionKind::Choose)
	{
		const auto& expr = static_cast<const syntax::ChooseExpr&>(selection);
		++unevaluated_;
		const ExprFacts* control = typed(*expr.control, scope);
		--unevaluated_;
		if (control == nullptr)
			return nullptr;
		Constant condition;
		uint64_t high = 0;
		if (control->type == nullptr || !IsIntegralOrUnscopedEnum(control->type) ||
			!integer_constant_expression(*expr.control, scope, condition, false, &high))
			error(expr.control->location, "__builtin_choose_expr requires an integer constant condition");

		const bool choose_then = condition.bits != 0 || high != 0;
		// Check both arms in source order. Only the selected arm may require a
		// definition or have runtime effects.
		unevaluated_ += !choose_then;
		ExprFacts* then_facts = typed(*expr.then_expr, scope);
		unevaluated_ -= !choose_then;
		unevaluated_ += choose_then;
		ExprFacts* else_facts = typed(*expr.else_expr, scope);
		unevaluated_ -= choose_then;
		if (then_facts == nullptr || else_facts == nullptr)
			return nullptr;
		expr.selected = choose_then ? expr.then_expr : expr.else_expr;
		ExprFacts* selected_facts = choose_then ? then_facts : else_facts;
		expr.facts = selected_facts;
		return selected_facts;
	}
	const auto& expr = static_cast<const syntax::GenericExpr&>(selection);
	// C17 6.5.1.1: type the control without evaluating it. Lvalue,
	// array and function conversions apply, but not integer promotions.
	++unevaluated_;
	ExprFacts* control = typed(*expr.control, scope);
	if (control == nullptr)
		return nullptr;
	if (control->type == nullptr)
		error(expr.control->location, "generic controlling expression has no type");
	const Type* type = decayed(control)->unqualified;
	const syntax::Expr* selected = nullptr;
	const syntax::Expr* fallback = nullptr;
	const uint32_t short_list = 8;
	SmallList<const Type*, short_list> associations;
	std::unique_ptr<GenericAssociationIndex> index;
	if (expr.associations.size > short_list)
		index.reset(new GenericAssociationIndex(c23_));
	for (const syntax::GenericAssociation& association : expr.associations)
	{
		if (association.type == nullptr)
		{
			if (fallback != nullptr)
				error(expr.location, "more than one default generic association");
			fallback = association.expression;
		}
		else
		{
			const Type* candidate = type_id(*association.type, scope);
			uint64_t bytes = 0, alignment = 0;
			if (!object_layout(candidate, bytes, alignment))
				error(association.type->location, "generic association requires a complete object type");
			if (index != nullptr)
			{
				if (!index->insert(candidate, conversions_))
					error(association.type->location, "compatible types in two generic associations");
			}
			else
			{
				for (const Type* previous : associations)
					if (conversions_.c_type_compatible(previous, candidate))
						error(association.type->location, "compatible types in two generic associations");
				associations.push_back(candidate);
			}
			if (conversions_.c_type_compatible(type, candidate))
			{
				if (selected != nullptr)
					error(expr.control->location, "generic controlling expression matches more than one association");
				selected = association.expression;
			}
		}
		// Unselected associations must still be valid expressions.
		const ExprFacts* value = typed(*association.expression, scope);
		if (value == nullptr)
			return nullptr;
		if (value->type == nullptr)
			error(association.expression->location, "generic association requires an expression with a type");
	}
	--unevaluated_;
	expr.selected = selected != nullptr ? selected : fallback;
	if (expr.selected == nullptr)
		error(expr.location, "no matching generic association and no default");
	// As with parentheses, the selected expression retains its exact type,
	// value category, bit-field facts and subsequent contextual conversion.
	expr.facts = expr.selected->facts;
	return const_cast<ExprFacts*>(expr.facts);
}

} // namespace sema
