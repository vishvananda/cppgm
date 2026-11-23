#include "sema/analyzer.h"

#include "lex/interchange_float.h"
#include "support/small_list.h"

namespace sema {
namespace {

enum class Variation : uint8_t
{
	Fixed,
	Real,
	Complex
};

using MathColumns = SmallList<Variation, 4>;
using MathSignatures = SmallList<const Type*, 16>;

const Type* Component(const Type* type)
{
	return IsComplex(type) ? type->unqualified->element->unqualified : type->unqualified;
}

FundamentalType FloatKind(const Type* component)
{
	// GNU C also spells _Float128 as __float128.
	return component->fundamental == FundamentalType::GnuFloat128 ? FundamentalType::Float128 : component->fundamental;
}

unsigned VariantKey(const Type* component, bool complex)
{
	return static_cast<unsigned>(FloatKind(component)) + (complex ? kFundamentalTypeCount : 0);
}

bool SameMathType(const Type* first, const Type* second)
{
	if (first == second)
		return true;
	const Type* a = Component(first);
	const Type* b = Component(second);
	return IsComplex(first) == IsComplex(second) && IsFloating(a) && IsFloating(b) && FloatKind(a) == FloatKind(b);
}

const Type* MathSignature(const ExprFacts* facts)
{
	const Type* type = facts->type->unqualified;
	if (type->kind == TypeKind::Pointer)
		type = type->element;
	return type->kind == TypeKind::Function && !type->c_unprototyped() && !type->variadic && type->param_count != 0
		? type->canonical
		: nullptr;
}

const Type* SignatureType(const Type* signature, uint32_t column)
{
	return (column == 0 ? signature->element : signature->params[column - 1])->unqualified;
}

bool ClassifyColumns(const Type* first, const Type* signature, MathColumns& columns)
{
	for (uint32_t i = 0; i < columns.size(); ++i)
	{
		const Type* a = SignatureType(first, i);
		const Type* b = SignatureType(signature, i);
		if (SameMathType(a, b))
			continue;
		if (!IsFloating(Component(a)) || !IsFloating(Component(b)))
			return false;
		if (IsComplex(a) || IsComplex(b))
			columns[i] = Variation::Complex;
		else if (columns[i] == Variation::Fixed)
			columns[i] = Variation::Real;
	}
	return true;
}

uint32_t GenericParameter(const MathColumns& columns)
{
	// A family varying in the complex domain needs a parameter that does so.
	// Columns with the same type in every candidate do not participate.
	Variation domain = columns[0];
	uint32_t parameter = 0;
	for (uint32_t i = 1; i < columns.size(); ++i)
	{
		if (columns[i] > domain || (parameter == 0 && columns[i] == domain && domain != Variation::Fixed))
		{
			parameter = i;
			domain = columns[i];
		}
	}
	return parameter;
}

bool MatchesVariant(const Type* signature, const Type* variant, const MathColumns& columns)
{
	for (uint32_t i = 0; i < columns.size(); ++i)
	{
		if (columns[i] == Variation::Fixed)
			continue;
		const Type* expected = columns[i] == Variation::Real ? Component(variant) : variant;
		if (!SameMathType(expected, SignatureType(signature, i)))
			return false;
	}
	return true;
}

unsigned MathSubrank(FundamentalType kind)
{
	switch (kind)
	{
	case FundamentalType::Float16:
	case FundamentalType::Float32:
	case FundamentalType::Float64:
	case FundamentalType::Float128:
		return 4;
	case FundamentalType::LongDouble:
		return 3;
	case FundamentalType::Double:
		return 2;
	case FundamentalType::Float:
	case FundamentalType::Float64x:
		return 1;
	default:
		return 0;
	}
}

unsigned MathRank(const Type* component)
{
	const FundamentalType kind = FloatKind(component);
	// At equal precision GCC prefers interchange, then standard, then
	// extended formats. Long double's representation depends on the target.
	return FloatingRank(FloatingRepresentation(kind, component->target)) * 5 + MathSubrank(kind);
}

InterchangeFormat Format(const Type* component)
{
	switch (FloatingRepresentation(component->fundamental, component->target))
	{
	case FundamentalType::BFloat16:
		return kBFloat16;
	case FundamentalType::Float16:
		return kBinary16;
	case FundamentalType::Float:
		return { 24, 127 };
	case FundamentalType::Double:
		return { 53, 1023 };
	case FundamentalType::LongDouble:
		return kExtended80;
	default:
		return kBinary128;
	}
}

bool HoldsFormat(const Type* type, bool complex, InterchangeFormat source)
{
	if (IsComplex(type) != complex)
		return false;
	const InterchangeFormat destination = Format(Component(type));
	return destination.precision >= source.precision && destination.max_exponent >= source.max_exponent;
}

struct GenericArguments
{
	const Type* component = nullptr;
	unsigned rank = 0;
	bool complex;
	bool integral = false;
	bool extended = false;

	explicit GenericArguments(bool all_complex) : complex(all_complex) {}

	void add_float(const Type* real)
	{
		const FundamentalType kind = real->fundamental;
		extended |= kind == FundamentalType::Float32x || kind == FundamentalType::Float64x;
		const unsigned candidate = MathRank(real);
		if (candidate > rank)
		{
			component = real;
			rank = candidate;
		}
	}
};

} // namespace

ExprFacts* Analyzer::type_generic_math(const syntax::CallExpr& expr, Scope* scope)
{
	if (expr.arguments.size < 3)
		error(expr.location, "__builtin_tgmath requires at least two functions and an argument");
	MathSignatures signatures;
	MathColumns columns;
	uint32_t candidates = 1;
	for (uint32_t i = 0; i < candidates; ++i)
	{
		const syntax::Expr& candidate = *expr.arguments[i];
		// Candidate expressions are all checked. Only the selected expression
		// belongs to the evaluated call and can demand its dependencies.
		++unevaluated_;
		const ExprFacts* facts = typed_value(candidate, scope);
		--unevaluated_;
		if (facts == nullptr)
			return nullptr;
		const Type* signature = MathSignature(facts);
		if (signature == nullptr)
			error(
				candidate.location, "type-generic candidate requires a nonvariadic function prototype with parameters");
		if (i == 0)
		{
			if (signature->param_count > expr.arguments.size - 2)
				error(expr.location, "__builtin_tgmath requires at least two functions followed by all call arguments");
			candidates = expr.arguments.size - signature->param_count;
			columns.resize(static_cast<size_t>(signature->param_count) + 1);
		}
		else if (signature->param_count != signatures[0]->param_count)
			error(candidate.location, "type-generic candidates have different parameter counts");
		else if (!ClassifyColumns(signatures[0], signature, columns))
			error(candidate.location, "a varying type in a type-generic signature must be floating-point");
		signatures.push_back(signature);
	}
	const uint32_t parameter = GenericParameter(columns);
	if (parameter == 0)
		error(expr.location, "type-generic candidates lack a varying parameter of the required domain");

	// Index the canonical floating components and their two domains. Entries
	// are one-based, so the same table checks duplicates and finds the winner.
	uint32_t by_type[2 * kFundamentalTypeCount] = {};
	bool all_complex = true;
	for (uint32_t i = 0; i < candidates; ++i)
	{
		const Type* variant = SignatureType(signatures[i], parameter);
		if (!MatchesVariant(signatures[i], variant, columns))
			error(expr.arguments[i]->location, "type-generic candidate has inconsistent varying types");
		const bool complex = IsComplex(variant);
		uint32_t& index = by_type[VariantKey(Component(variant), complex)];
		if (index != 0)
			error(expr.arguments[i]->location, "duplicate type-generic candidate type");
		index = i + 1;
		all_complex &= complex;
	}
	GenericArguments actual(all_complex);
	for (uint32_t i = 1; i < columns.size(); ++i)
	{
		const syntax::Expr& argument = *expr.arguments[candidates + i - 1];
		const ExprFacts* facts = typed(argument, scope);
		if (facts == nullptr)
			return nullptr;
		if (columns[i] == Variation::Fixed)
			continue;
		const Type* component = Component(facts->type);
		actual.complex |= IsComplex(facts->type);
		if (IsFloating(component))
			actual.add_float(component);
		else if (IsIntegralOrUnscopedEnum(component))
			actual.integral = true;
		else
			error(argument.location, "type-generic argument requires an arithmetic type");
	}
	if (actual.integral)
		actual.add_float(types_.fundamental(actual.extended ? FundamentalType::Float32x : FundamentalType::Double));
	uint32_t selected = by_type[VariantKey(actual.component, actual.complex)];
	if (selected == 0 && columns[0] == Variation::Fixed && IsFloating(SignatureType(signatures[0], 0)))
	{
		const InterchangeFormat source = Format(actual.component);
		for (uint32_t i = 0; i < candidates && selected == 0; ++i)
			if (HoldsFormat(SignatureType(signatures[i], parameter), actual.complex, source))
				selected = i + 1;
	}
	if (selected == 0)
		error(expr.location, "no matching function for type-generic call");

	// Normalize the call just as for __builtin_invoke. The selected callee
	// and the tail of the original argument slice already have typed facts.
	syntax::CallExpr& call = const_cast<syntax::CallExpr&>(expr);
	call.callee = expr.arguments[selected - 1];
	call.arguments = syntax::Slice<syntax::Expr*>{ expr.arguments.data + candidates, expr.arguments.size - candidates };
	expression_scope_ = scope;
	ExprFacts* callee = facts_of(*call.callee);
	ExprFacts* result = indirect_call(call, callee);
	const syntax::Expr* named = call.callee;
	while (named->kind == syntax::ExprKind::Paren)
		named = static_cast<const syntax::ParenExpr*>(named)->inner;
	if (result != nullptr && named->kind == syntax::ExprKind::Id && callee->type->kind == TypeKind::Function &&
		callee->entity != nullptr && callee->entity->kind == EntityKind::Function)
	{
		result->entity = callee->entity;
		result->flags |= kDirectCall;
		odr_use(static_cast<FunctionEntity*>(const_cast<Entity*>(callee->entity)), true);
	}
	return result;
}

} // namespace sema
