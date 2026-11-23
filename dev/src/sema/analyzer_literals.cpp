#include "sema/analyzer.h"

#include <cstring>
#include <string>

#include "lex/identifier_table.h"
#include "lex/number_literal.h"
#include "lex/text_literal.h"
#include "sema/instantiation_context.h"
#include "sema/string_literals.h"

// Clause 2.14 literals as expressions (semantics mode): their types and
// values, user-defined literals (13.5.8) as calls of their literal
// operators, and the keyword literals (true, false, nullptr, this).
namespace sema {

namespace {

bool LiteralCharacter(const Type* type)
{
	return type->kind == TypeKind::Fundamental &&
		(type->fundamental == FundamentalType::Char || type->fundamental == FundamentalType::Char8T ||
			type->fundamental == FundamentalType::WcharT || type->fundamental == FundamentalType::Char16T ||
			type->fundamental == FundamentalType::Char32T);
}

const Type* StringLiteralParameter(const TemplateParameterEntity* parameter)
{
	const Type* type = parameter->value_type;
	return !parameter->pack && type != nullptr && (ClassOf(type) != nullptr || DeducedClassParameter(type)) ? type
																											: nullptr;
}

} // namespace

void Analyzer::literal_operator_declaration(const FunctionEntity& function, uint32_t location)
{
	// 13.5.8p2-p6: these constraints describe the declaration, even if no
	// user-defined literal ever calls it. Friends have their namespace owner.
	if (function.owner->kind != ScopeKind::Namespace)
		error(location, "a literal operator must be a namespace-scope function");
	if (function.c_linkage)
		error(location, "a literal operator cannot have C language linkage");
	const Type* type = function.type->canonical;
	if (function.templated)
	{
		const auto* parameter = template_entities_.size() == 1 ? template_entities_[0] : nullptr;
		const Type* string = cxx20_ && parameter != nullptr ? StringLiteralParameter(parameter) : nullptr;
		const bool numeric = parameter != nullptr && parameter->pack && parameter->value_type != nullptr &&
			parameter->value_type->unqualified == types_.fundamental(FundamentalType::Char);
		if (type->param_count != 0 || type->variadic || (!numeric && string == nullptr))
			error(location,
				"a literal operator template needs no function parameters and a char pack or a structural class "
				"parameter");
		if (string != nullptr && !DeducedClassParameter(string) && !dependent_type(string) &&
			!structural_class_type(string))
			error(location, "a string literal operator template requires a structural class parameter");
		return;
	}
	if (type->variadic || (type->param_count != 1 && type->param_count != 2))
		error(location, "invalid literal operator parameter clause");
	const Type* first = type->params[0]->unqualified;
	const Type* pointee = first->kind == TypeKind::Pointer ? first->element : nullptr;
	const bool character_pointer = pointee != nullptr && pointee->cv == kConst && LiteralCharacter(pointee);
	if (type->param_count == 1)
	{
		if (first == types_.fundamental(FundamentalType::UnsignedLongLongInt) ||
			first == types_.fundamental(FundamentalType::LongDouble) || LiteralCharacter(first) ||
			(character_pointer && pointee->fundamental == FundamentalType::Char))
			return;
	}
	else if (character_pointer && type->params[1]->unqualified == types_.fundamental(FundamentalType::UnsignedLongInt))
		return;
	error(location, "invalid literal operator parameter types");
}

ExprFacts* Analyzer::literal(const syntax::LiteralExpr& expr)
{
	if (expr.imaginary)
	{
		const auto& imaginary = static_cast<const syntax::ImaginaryLiteralExpr&>(expr);
		const Type* component = types_.fundamental(imaginary.component_type);
		ExprFacts* facts = new_facts(expr, types_.complex(component), ValueCategory::PRValue);
		facts->value = imaginary.value;
		return facts;
	}
	const TokenSpelling& spelling = expr.spelling;
	TextLiteralParts parts;
	if (SplitTextLiteral(spelling.text, spelling.length, parts))
	{
		if (parts.quote == '\'')
		{
			// Lexing has already validated escapes for the source dialect.
			const CharacterLiteralValue character = EvaluateCharacterLiteral(
				spelling.text, spelling.length, CharacterDialect::Gnu, true, cxx_edition_);
			if (character.valid && character.suffix_begin != spelling.length)
				return user_character_literal(expr, character);
			if (!character.valid || character.suffix_begin != spelling.length)
				error(expr.location, "invalid or user-defined character literal");
			const Type* type = types_.fundamental(c_source_
					? (parts.prefix == EncodingPrefix::None ? FundamentalType::Int
															: CCharacterType(character.type, types_.target()))
					: character.type);
			ExprFacts* facts = new_facts(expr, type, ValueCategory::PRValue);
			IntegralKind kind;
			IntegralKindOf(type, kind);
			facts->value = ConvertIntegral(character.code_point, kind);
			return facts;
		}
		// 2.14.5p8: an lvalue array of const code units with the null.
		StringLiteralFacts string;
		if (!AnalyzeStringLiteral(spelling, string, cxx20_))
			error(expr.location, "invalid string literal");
		const Type* element = types_.qualified(
			types_.fundamental(c_source_ ? CCharacterType(string.element, types_.target()) : string.element),
			c_source_ ? 0 : kConst);
		if (string.suffix_length != 0)
			return user_string_literal(expr, types_.array(element, string.units), string);
		return new_facts(expr, types_.array(element, string.units), ValueCategory::LValue);
	}
	const NumberLiteral number = ClassifyNumber(spelling.text, spelling.length, number_dialect_, types_.target());
	if (number.kind == NumberLiteralKind::Integer)
	{
		ExprFacts* facts = new_facts(expr, types_.fundamental(number.type), ValueCategory::PRValue);
		facts->value = number.integer;
		if (number.integer == 0)
			facts->flags |= kNullLiteral;
		return facts;
	}
	if (number.kind == NumberLiteralKind::Floating)
	{
		ExprFacts* facts = new_facts(expr, types_.fundamental(number.type), ValueCategory::PRValue);
		facts->value = number.suffix_begin;
		return facts;
	}
	if (number.kind == NumberLiteralKind::UserDefinedInteger || number.kind == NumberLiteralKind::UserDefinedFloating)
		return user_numeric_literal(expr, number);
	error(expr.location, "invalid numeric literal");
}

ExprFacts* Analyzer::user_numeric_literal(const syntax::LiteralExpr& expr, const NumberLiteral& number)
{
	// 2.14.8p3-p4: `n X` calls `operator "" X(n ULL)` (for a floating
	// literal `n L`, a long double) when the literal operators of its name
	// (found by unqualified lookup, 13.5.8) have one of that parameter,
	// else the raw literal operator (`const char*`) with n's characters,
	// `operator "" X("n")`, else the literal operator template's
	// specialization of n's characters, `operator "" X<'c1', ..., 'ck'>()`.
	const TokenSpelling& spelling = expr.spelling;
	const std::string suffix(spelling.text + number.suffix_begin, spelling.length - number.suffix_begin);
	const Identifier* key = special_key((std::string("operator\"\" ") + suffix).c_str());
	const LookupResult found = names_.unqualified(expression_scope_, key, LookupFilter::Ordinary);
	if (!found.found() || found.binding->kind != BindingKind::Function)
		error(expr.location, "no literal operator for the user-defined literal");
	const Type* cooked = types_.fundamental(number.kind == NumberLiteralKind::UserDefinedInteger
			? FundamentalType::UnsignedLongLongInt
			: FundamentalType::LongDouble);
	FunctionEntity* function = nullptr;
	uint64_t form = kLiteralCallCooked;
	for (const FunctionList* node = found.functions; node != nullptr; node = node->next)
	{
		FunctionEntity* candidate = static_cast<FunctionEntity*>(node->binding->entity);
		const Type* type = candidate->type->canonical;
		if (!node->binding->invisible && !candidate->templated && type->param_count == 1 && !type->variadic &&
			type->params[0]->unqualified == cooked)
		{
			if (function != nullptr && function != candidate)
				substitution_error(expr.location, "ambiguous literal operator lookup");
			function = candidate;
		}
	}
	const Type* raw = types_.pointer(types_.qualified(types_.fundamental(FundamentalType::Char), kConst));
	for (const FunctionList* node = found.functions; node != nullptr && function == nullptr; node = node->next)
	{
		FunctionEntity* candidate = static_cast<FunctionEntity*>(node->binding->entity);
		const Type* type = candidate->type->canonical;
		if (!node->binding->invisible && !candidate->templated && type->param_count == 1 && !type->variadic &&
			type->params[0]->unqualified == raw)
		{
			function = candidate;
			form = kLiteralCallRaw;
		}
	}
	for (const FunctionList* node = found.functions; node != nullptr && function == nullptr; node = node->next)
	{
		// 13.5.8p5: a literal operator template has one non-type parameter
		// pack of element type char.
		FunctionEntity* primary = static_cast<FunctionEntity*>(node->binding->entity);
		const TemplateHead* head = HeadOf(primary);
		if (!primary->templated || head == nullptr || head->count != 1 || !head->parameters[0]->pack ||
			head->parameters[0]->value_type == nullptr ||
			head->parameters[0]->value_type->unqualified != types_.fundamental(FundamentalType::Char))
			continue;
		TypeList characters;
		for (uint32_t i = 0; i < number.suffix_begin; ++i)
			characters.push_back(types_.value(types_.fundamental(FundamentalType::Char),
				ConvertIntegral(static_cast<uint64_t>(static_cast<int64_t>(static_cast<signed char>(spelling.text[i]))),
					IntegralKind{ 8, true })));
		TypeList arguments;
		arguments.push_back(types_.pack(characters.data(), static_cast<uint32_t>(characters.size())));
		function = specialize(primary, arguments);
		form = kLiteralCallTemplate;
	}
	if (function == nullptr)
		error(expr.location, "no literal operator the user-defined literal can call");
	// `n ULL` names a value unsigned long long represents (2.14.2p3).
	uint64_t digits = 0;
	if (form == kLiteralCallCooked && number.kind == NumberLiteralKind::UserDefinedInteger &&
		!UserIntegerValue(spelling.text, number.suffix_begin, digits))
		error(expr.location, "a user-defined integer literal beyond unsigned long long");
	return literal_call(expr, function, form | (uint64_t(number.suffix_begin) << 8));
}

ExprFacts* Analyzer::literal_call(const syntax::LiteralExpr& expr, FunctionEntity* function, uint64_t form)
{
	// A user-defined literal's call of the literal operator chosen (its
	// value and category are the call's, 5.2.2p10).
	check_not_deleted(function, expr.location);
	if (!require_deduced(function, expr.location))
		return nullptr;
	odr_use(function, true);
	if (!function->nothrow)
		++potentially_throwing_;
	ValueCategory category;
	const Type* result = result_category(function->type->canonical->element, category);
	ExprFacts* facts = new_facts(expr, result, category);
	facts->entity = function;
	facts->flags |= kDirectCall | kUserLiteral;
	facts->value = form;
	if (function->is_consteval)
		immediate_invocation(expr, function);
	return facts;
}

ExprFacts* Analyzer::user_character_literal(const syntax::LiteralExpr& expr, const CharacterLiteralValue& character)
{
	// 2.14.8p6: `ch X` is the call `operator "" X(ch)`, ch the literal
	// without its ud-suffix, of the literal operators of its name found by
	// unqualified lookup (13.5.8), resolved as that call (13.3).
	const TokenSpelling& spelling = expr.spelling;
	const std::string suffix(spelling.text + character.suffix_begin, spelling.length - character.suffix_begin);
	const Identifier* key = special_key((std::string(kLiteralOperatorPrefix) + suffix).c_str());
	const LookupResult found = names_.unqualified(expression_scope_, key, LookupFilter::Ordinary);
	if (!found.found() || found.binding->kind != BindingKind::Function)
		error(expr.location, "no literal operator for the user-defined character literal");
	syntax::LiteralExpr* value = static_cast<syntax::LiteralExpr*>(
		arena_.allocate(sizeof(syntax::LiteralExpr), alignof(syntax::LiteralExpr)));
	*value = syntax::LiteralExpr();
	value->kind = syntax::ExprKind::Literal;
	value->location = expr.location;
	value->spelling = TokenSpelling{ spelling.text, character.suffix_begin };
	const Type* type = types_.fundamental(character.type);
	IntegralKind kind;
	IntegralKindOf(type, kind);
	new_facts(*value, type, ValueCategory::PRValue)->value = ConvertIntegral(character.code_point, kind);
	syntax::Expr** arguments = static_cast<syntax::Expr**>(
		arena_.allocate(sizeof(syntax::Expr*), alignof(syntax::Expr*)));
	arguments[0] = value;
	syntax::Slice<syntax::Expr*> call_arguments;
	call_arguments.data = arguments;
	call_arguments.size = 1;
	std::vector<FunctionEntity*>& set = overload_set_;
	set.clear();
	for (const FunctionList* node = found.functions; node != nullptr; node = node->next)
	{
		if (!node->binding->invisible)
			set.push_back(static_cast<FunctionEntity*>(node->binding->entity));
	}
	const Candidate chosen = best_viable(call_arguments, expr.location, set, nullptr);
	IntegralKind parameter;
	IntegralKindOf(chosen.function->type->canonical->params[0], parameter);
	const uint64_t argument = ConvertIntegral(ConvertIntegral(character.code_point, kind), parameter);
	// Every cooked character parameter is at most 32 bits on these targets.
	return literal_call(expr, chosen.function, kLiteralCallCharacter | uint64_t(static_cast<uint32_t>(argument)) << 8);
}

ExprFacts* Analyzer::user_string_literal(
	const syntax::LiteralExpr& expr, const Type* array, const StringLiteralFacts& string)
{
	// 2.14.8p5: `operator "" X(str, len)`, str the literal without its
	// suffix and len its code units without the null, found by unqualified
	// lookup of the literal operator's name (13.5.8).
	Scope* scope = expression_scope_;
	const Identifier* key = special_key(
		(std::string("operator\"\" ") + std::string(string.suffix, string.suffix_length)).c_str());
	const LookupResult found = names_.unqualified(scope, key, LookupFilter::Ordinary);
	if (!found.found() || found.binding->kind != BindingKind::Function)
		error(expr.location, "no literal operator for the user-defined string literal");
	syntax::LiteralExpr* text = static_cast<syntax::LiteralExpr*>(
		arena_.allocate(sizeof(syntax::LiteralExpr), alignof(syntax::LiteralExpr)));
	*text = syntax::LiteralExpr();
	text->kind = syntax::ExprKind::Literal;
	text->location = expr.location;
	text->spelling = expr.spelling;
	new_facts(*text, array, ValueCategory::LValue)->flags |= kImplicit;
	if (cxx20_)
	{
		// [lex.ext] prefers a string literal template when the string
		// is an admissible argument for its class-valued parameter.
		FunctionEntity* chosen = nullptr;
		for (const FunctionList* node = found.functions; node != nullptr; node = node->next)
		{
			auto* primary = static_cast<FunctionEntity*>(node->binding->entity);
			const TemplateHead* head = HeadOf(primary);
			if (node->binding->invisible || head == nullptr || head->count != 1)
				continue;
			const Type* target = StringLiteralParameter(head->parameters[0]);
			if (target == nullptr)
				continue;
			FunctionEntity* candidate = nullptr;
			{
				SoftSubstitution probe(*this);
				const Type* argument = class_template_argument(*text, scope, target);
				if (argument != nullptr)
				{
					TypeList arguments;
					arguments.push_back(argument);
					candidate = specialize(primary, arguments);
				}
				if (probe.failed())
					candidate = nullptr;
			}
			if (candidate == nullptr)
				continue;
			if (chosen != nullptr && chosen != candidate)
				return substitution_error(expr.location, "ambiguous string literal operator"), nullptr;
			chosen = candidate;
		}
		if (chosen != nullptr)
			return literal_call(expr, chosen, kLiteralCallTemplate);
	}
	syntax::LiteralExpr* length = static_cast<syntax::LiteralExpr*>(
		arena_.allocate(sizeof(syntax::LiteralExpr), alignof(syntax::LiteralExpr)));
	*length = syntax::LiteralExpr();
	length->kind = syntax::ExprKind::Literal;
	length->location = expr.location;
	new_facts(*length, types_.fundamental(FundamentalType::UnsignedLongInt), ValueCategory::PRValue);
	syntax::Expr** arguments = static_cast<syntax::Expr**>(
		arena_.allocate(sizeof(syntax::Expr*) * 2, alignof(syntax::Expr*)));
	arguments[0] = text;
	arguments[1] = length;
	syntax::Slice<syntax::Expr*> call_arguments;
	call_arguments.data = arguments;
	call_arguments.size = 2;
	std::vector<FunctionEntity*>& set = overload_set_;
	set.clear();
	for (const FunctionList* node = found.functions; node != nullptr; node = node->next)
	{
		if (!node->binding->invisible)
			set.push_back(static_cast<FunctionEntity*>(node->binding->entity));
	}
	const Candidate chosen = best_viable(call_arguments, expr.location, set, nullptr);
	FunctionEntity* function = chosen.function;
	check_not_deleted(function, expr.location);
	odr_use(function, true);
	if (!function->nothrow)
		++potentially_throwing_;
	ValueCategory category;
	const Type* result = result_category(function->type->canonical->element, category);
	ExprFacts* facts = new_facts(expr, result, category);
	facts->entity = function;
	facts->flags |= kDirectCall | kUserLiteral;
	facts->value = kLiteralCallString | uint64_t(string.units - 1) << 8;
	if (function->is_consteval)
		immediate_invocation(expr, function);
	return facts;
}

ExprFacts* Analyzer::keyword_literal(const syntax::KeywordLiteralExpr& expr, Scope* scope)
{
	(void)scope;
	switch (expr.keyword)
	{
	case TokenKind::KW_TRUE:
	case TokenKind::KW_FALSE:
	{
		ExprFacts* facts = new_facts(expr, types_.fundamental(FundamentalType::Bool), ValueCategory::PRValue);
		facts->value = expr.keyword == TokenKind::KW_TRUE ? 1u : 0u;
		return facts;
	}
	case TokenKind::KW_NULLPTR:
		return new_facts(expr, types_.fundamental(FundamentalType::NullptrT), ValueCategory::PRValue);
	default:
	{
		// `this` is type-dependent in a templated class (14.6.2.2p2; a
		// local class's, conservatively in any).
		names_.note_dependent_use();
		ExprFacts* facts = this_expression(expr.location);
		expr.facts = facts;
		return facts;
	}
	}
}

} // namespace sema
