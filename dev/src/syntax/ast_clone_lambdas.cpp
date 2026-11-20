#include "syntax/ast_clone.h"

#include "support/small_list.h"

namespace syntax {
namespace {

template<typename T>
T* Copy(Arena& arena, const T* node)
{
	return new (arena.allocate(sizeof(T), alignof(T))) T(*node);
}

const Identifier* ParameterName(const TemplateParameter& parameter)
{
	if (parameter.kind != TemplateParameterKind::NonType)
		return parameter.name;
	for (const Declarator* declarator = parameter.declarator; declarator != nullptr; declarator = declarator->nested)
		if (declarator->name != nullptr)
			return declarator->name->last().identifier;
	return nullptr;
}

// The declarator's declared name is owned here; enclosing expansions may
// rename names in its type operators, but cannot rename this declaration.
Declarator* RestoreParameterName(Arena& arena, Declarator* cloned, const Declarator* source)
{
	if (source == nullptr)
		return cloned;
	Declarator* nested = RestoreParameterName(arena, cloned->nested, source->nested);
	if (cloned->name == source->name && nested == cloned->nested)
		return cloned;
	Declarator* result = Copy(arena, cloned);
	result->name = source->name;
	result->nested = nested;
	return result;
}

} // namespace

size_t SyntaxCloner::shadow_lambda_parameters(const TemplateParameterList* list)
{
	if (expander_ == nullptr || list == nullptr)
		return 0;
	SmallList<const Identifier*, 4> names;
	for (const TemplateParameter* parameter : list->parameters)
	{
		const Identifier* name = ParameterName(*parameter);
		if (name == nullptr)
			continue;
		shadows_.push_back(std::make_pair(name, IsParameterPack(*parameter) ? -2 : -1));
		// Active outer expansion names must not rename a declaration the
		// inner lambda owns, even when it is not a pack itself.
		names.push_back(name);
	}
	renames_.insert(renames_.begin(), names.size(), std::make_pair(nullptr, nullptr));
	for (size_t i = 0; i < names.size(); ++i)
		renames_[i] = std::make_pair(names[i], names[i]);
	return names.size();
}

TemplateParameterList* SyntaxCloner::lambda_template_parameters(const TemplateParameterList* list)
{
	if (list == nullptr)
		return nullptr;
	TemplateParameter** changed = nullptr;
	const size_t shadows = shadows_.size();
	size_t renamed = 0;
	for (uint32_t i = 0; i < list->parameters.size; ++i)
	{
		const TemplateParameter* original = list->parameters[i];
		TemplateParameter parameter = *original;
		parameter.specifiers = specifiers(original->specifiers);
		parameter.declarator = RestoreParameterName(arena_, declarator(original->declarator), original->declarator);
		parameter.parameters = lambda_template_parameters(original->parameters);
		// A name enters scope at its declaration, before its default, but
		// cannot hide an enclosing pack in an earlier parameter's default.
		TemplateParameter* entry = const_cast<TemplateParameter*>(original);
		const TemplateParameterList one = { Slice<TemplateParameter*>{ &entry, 1 }, list->location };
		renamed += shadow_lambda_parameters(&one);
		parameter.default_type = type_id(original->default_type);
		parameter.default_value = expr(original->default_value);
		if (parameter.specifiers.data == original->specifiers.data && parameter.declarator == original->declarator &&
			parameter.default_type == original->default_type && parameter.default_value == original->default_value &&
			parameter.parameters == original->parameters)
			continue;
		if (changed == nullptr)
			changed = arena_.copy_array(list->parameters.data, list->parameters.size);
		changed[i] = Copy(arena_, &parameter);
	}
	renames_.erase(renames_.begin(), renames_.begin() + renamed);
	shadows_.resize(shadows);
	if (changed == nullptr)
		return const_cast<TemplateParameterList*>(list);
	TemplateParameterList* result = Copy(arena_, list);
	result->parameters.data = changed;
	return result;
}

Expr* SyntaxCloner::deferred_constraint(const Expr* source)
{
	if (source == nullptr || collecting_ != nullptr)
		return expr(source);
	// Keep the element selected by an enclosing expansion without expanding
	// a clause's own packs before satisfaction reaches that operand.
	class DeferredPacks : public PackExpander
	{
	public:
		int32_t pack_length(const Identifier*) override { return -1; }
		const Identifier* element_name(const Identifier* name, uint32_t) override { return name; }
		void mismatch(uint32_t) override {}
	} packs;
	SyntaxCloner deferred(arena_, bodies_, &packs);
	deferred.renames_ = renames_;
	return deferred.expr(source);
}

LambdaExpr* SyntaxCloner::lambda(const LambdaExpr* source)
{
	LambdaExpr* result = Copy(arena_, source);
	// Capture initializers belong to the enclosing scope, before the
	// lambda's template parameters and initialized-capture names exist.
	result->captures = captures(source->captures);
	const size_t shadows = shadows_.size();
	result->template_parameters = lambda_template_parameters(source->template_parameters);
	const size_t renamed = shadow_lambda_parameters(source->template_parameters);
	const size_t packs = parameter_packs_.size();
	result->parameters = parameter_clause(source->parameters);
	result->generic_parameters = parameter_clause(source->generic_parameters);
	if (parameter_packs_.size() > packs)
	{
		result->pattern_parameters = source->parameters;
		result->parameter_packs = copied_parameter_packs(packs);
	}
	// A parameter pack still declared by this lambda has no elements yet.
	// An expansion can name it alongside packs bound by the enclosing copy.
	if (expander_ != nullptr && result->parameters != nullptr)
		for (const ParameterDeclaration* parameter : result->parameters->parameters)
			if (parameter->declarator != nullptr && parameter->declarator->pack != PackPosition::None)
				shadow(parameter->declarator, -2);
	result->noexcept_operand = expr(source->noexcept_operand);
	// The type-id list itself is shared when no exception types change.
	if (!source->throw_types.empty())
	{
		TypeId** changed = nullptr;
		for (uint32_t i = 0; i < source->throw_types.size; ++i)
		{
			TypeId* type = type_id(source->throw_types[i]);
			if (type != source->throw_types[i] && changed == nullptr)
				changed = arena_.copy_array(source->throw_types.data, source->throw_types.size);
			if (changed != nullptr)
				changed[i] = type;
		}
		if (changed != nullptr)
			result->throw_types.data = changed;
	}
	result->trailing = type_id(source->trailing);
	result->attributes = attributes(source->attributes);
	if (source->constraints != nullptr)
	{
		result->constraints = Copy(arena_, source->constraints);
		result->constraints->head = deferred_constraint(source->constraints->head);
		result->constraints->trailing = deferred_constraint(source->constraints->trailing);
	}
	size_t initialized = 0;
	for (const LambdaCapture& capture : source->captures)
		if (capture.initializer != nullptr)
		{
			renames_.insert(renames_.begin(), std::make_pair(capture.name, capture.name));
			shadows_.push_back(std::make_pair(capture.name, -1));
			++initialized;
		}
	result->body = compound(source->body);
	renames_.erase(renames_.begin(), renames_.begin() + initialized + renamed);
	parameter_packs_.resize(packs);
	shadows_.resize(shadows);
	return result;
}

} // namespace syntax
