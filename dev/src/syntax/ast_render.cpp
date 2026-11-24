#include "syntax/ast_render.h"

#include "lex/identifier_table.h"

namespace syntax {

namespace {

bool IsWordStart(char c)
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_' || (c >= '0' && c <= '9') ||
		static_cast<unsigned char>(c) >= 0x80;
}

bool IsCvKeyword(TokenKind kind)
{
	return kind == TokenKind::KW_CONST || kind == TokenKind::KW_VOLATILE || kind == TokenKind::KW_RESTRICT;
}

} // namespace

void SyntaxRenderer::identifier(const Identifier* identifier)
{
	if (identifier != nullptr)
		out_.append(identifier->spelling, identifier->length);
}

void SyntaxRenderer::name(const Name& name, bool typename_keyword)
{
	if (typename_keyword && name.typename_keyword && !name.typename_implied)
		text("typename ");
	if (name.global)
		text("::");
	const bool qualified = name.qualified();
	for (uint32_t i = 0; i < name.components.size; ++i)
	{
		if (i != 0)
			text("::");
		component(name.components[i], qualified);
	}
}

void SyntaxRenderer::component(const NameComponent& component, bool qualified)
{
	if (component.template_keyword)
		text("template ");
	switch (component.kind)
	{
	case NameComponentKind::Identifier:
		identifier(component.identifier);
		break;
	case NameComponentKind::Operator:
	{
		std::string op;
		if (component.op == TokenKind::KW_NEW || component.op == TokenKind::KW_DELETE)
			op = component.array_form ? std::string(TokenKindSpelling(component.op)) + "[]"
									  : TokenKindSpelling(component.op);
		else if (component.op == TokenKind::OP_LPAREN)
			op = "()";
		else if (component.op == TokenKind::OP_LSQUARE)
			op = "[]";
		else if (component.op == TokenKind::OP_RSHIFT)
			op = ">>";
		else
			op = TokenKindSpelling(component.op, component.alternative);
		text("operator");
		if (qualified && !op.empty() && IsWordStart(op[0]))
			text(" ");
		out_ += op;
		break;
	}
	case NameComponentKind::Conversion:
	{
		const std::string type = RenderTypeId(*component.conversion);
		text("operator");
		if (qualified && !type.empty() && IsWordStart(type[0]))
			text(" ");
		out_ += type;
		break;
	}
	case NameComponentKind::LiteralOperator:
		text("operator\"\"");
		identifier(component.identifier);
		break;
	case NameComponentKind::Destructor:
		text("~");
		if (component.destructor_decltype)
		{
			text("decltype(");
			expression(*component.decltype_operand);
			text(")");
		}
		else
		{
			identifier(component.identifier);
		}
		break;
	case NameComponentKind::Decltype:
		text("decltype(");
		expression(*component.decltype_operand);
		text(")");
		break;
	}
	if (component.has_arguments)
	{
		text("<");
		template_arguments(component.arguments);
		text(">");
	}
}

void SyntaxRenderer::template_arguments(const Slice<TemplateArgument>& arguments)
{
	for (uint32_t i = 0; i < arguments.size; ++i)
	{
		if (i != 0)
			text(",");
		if (arguments[i].type != nullptr)
			type_id(*arguments[i].type);
		else
			expression(*arguments[i].expression);
		if (arguments[i].pack)
			text("...");
	}
}

void SyntaxRenderer::specifier(const DeclSpecifier& specifier)
{
	switch (specifier.kind)
	{
	case DeclSpecKind::Keyword:
		text(TokenKindSpelling(specifier.keyword));
		if (IsCvKeyword(specifier.keyword))
			text(" ");
		break;
	case DeclSpecKind::Name:
		name(*specifier.name, true);
		break;
	case DeclSpecKind::ConstrainedAuto:
		name(*specifier.name, false);
		text(specifier.keyword == TokenKind::KW_AUTO ? " auto" : " decltype(auto)");
		break;
	case DeclSpecKind::Constinit:
		text(specifier.keyword == TokenKind::KW_CONSTINIT ? "constinit " : "__constinit ");
		break;
	case DeclSpecKind::AtomicQualifier:
		text("_Atomic ");
		break;
	case DeclSpecKind::Decltype:
		text("decltype(");
		expression(*specifier.operand);
		text(")");
		break;
	case DeclSpecKind::DecltypeAuto:
		text("decltype(auto)");
		break;
	case DeclSpecKind::CAutoType:
		text(specifier.keyword == TokenKind::KW_AUTO ? "auto" : "__auto_type");
		break;
	case DeclSpecKind::Class:
		class_specifier(*specifier.class_specifier);
		break;
	case DeclSpecKind::Elaborated:
		text(TokenKindSpelling(specifier.keyword));
		text(" ");
		name(*specifier.name, true);
		break;
	case DeclSpecKind::Enum:
		enum_specifier(*specifier.enum_specifier);
		break;
	case DeclSpecKind::Mode:
		text("__attribute__((__mode__(");
		identifier(specifier.mode);
		text(")))");
		break;
	case DeclSpecKind::Vector:
		text(specifier.keyword == TokenKind::KW_SIZEOF ? "__attribute__((__vector_size__("
													   : "__attribute__((__ext_vector_type__(");
		expression(*specifier.operand);
		text(")))");
		break;
	}
}

void SyntaxRenderer::class_specifier(const ClassSpecifier& specifier)
{
	text(TokenKindSpelling(specifier.key));
	text(" ");
	if (specifier.name != nullptr)
		name(*specifier.name, true);
	if (specifier.final)
		text("final");
	if (specifier.has_base_clause)
	{
		text(":");
		for (uint32_t i = 0; i < specifier.bases.size; ++i)
		{
			const BaseSpecifier& base = specifier.bases[i];
			if (i != 0)
				text(",");
			if (base.is_virtual && base.virtual_first)
				text("virtual");
			if (base.has_access)
				text(TokenKindSpelling(base.access));
			if (base.is_virtual && !base.virtual_first)
				text("virtual");
			name(*base.name, true);
			if (base.pack)
				text("...");
		}
	}
	text("{");
	for (const Decl* member : specifier.members)
		declaration(*member);
	text("}");
}

void SyntaxRenderer::enum_specifier(const EnumSpecifier& specifier)
{
	text("enum ");
	if (specifier.scoped)
	{
		text(TokenKindSpelling(specifier.key));
		text(" ");
	}
	if (specifier.name != nullptr)
		name(*specifier.name, true);
	if (specifier.underlying != nullptr)
	{
		text(":");
		type_id(*specifier.underlying);
	}
	if (!specifier.has_body)
		return;
	text("{");
	for (uint32_t i = 0; i < specifier.enumerators.size; ++i)
	{
		const Enumerator& enumerator = specifier.enumerators[i];
		if (i != 0)
			text(",");
		identifier(enumerator.name);
		if (enumerator.value != nullptr)
		{
			text("=");
			expression(*enumerator.value);
		}
	}
	if (specifier.trailing_comma)
		text(",");
	text("}");
}

void SyntaxRenderer::specifiers(const Slice<DeclSpecifier>& specifiers)
{
	for (const DeclSpecifier& s : specifiers)
		specifier(s);
}

void SyntaxRenderer::type_id(const TypeId& type)
{
	specifiers(type.specifiers);
	if (type.declarator != nullptr)
		declarator(*type.declarator);
}

void SyntaxRenderer::declarator(const Declarator& declarator)
{
	for (const PtrOperator& pointer : declarator.pointers)
	{
		if (pointer.kind == TokenKind::OP_COLON2)
		{
			name(*pointer.class_name, true);
			text("::*");
		}
		else
		{
			text(TokenKindSpelling(pointer.kind, pointer.alternative));
		}
		for (TokenKind cv : pointer.cv)
		{
			text(TokenKindSpelling(cv));
			text(" ");
		}
		if (pointer.atomic)
			text("_Atomic ");
	}
	if (declarator.pack == PackPosition::BeforeName)
		text("...");
	if (declarator.name != nullptr)
		name(*declarator.name, true);
	if (declarator.nested != nullptr)
	{
		text("(");
		this->declarator(*declarator.nested);
		text(")");
	}
	for (const DeclaratorSuffix& suffix : declarator.suffixes)
	{
		if (suffix.kind == DeclaratorSuffixKind::Array)
		{
			text("[");
			if (suffix.array_static)
				text("static ");
			if ((suffix.array_cv & DeclaratorSuffix::kArrayConst) != 0)
				text("const ");
			if ((suffix.array_cv & DeclaratorSuffix::kArrayVolatile) != 0)
				text("volatile ");
			if ((suffix.array_cv & DeclaratorSuffix::kArrayAtomic) != 0)
				text("_Atomic ");
			if ((suffix.array_cv & DeclaratorSuffix::kArrayRestrict) != 0)
				text("restrict ");
			if (suffix.array_star)
				text("*");
			if (suffix.bound != nullptr)
				expression(*suffix.bound);
			text("]");
			continue;
		}
		parameters(*suffix.parameters);
		for (const FunctionQualifier& qualifier : suffix.qualifiers)
			function_qualifier(qualifier);
	}
}

void SyntaxRenderer::parameters(const ParameterClause& clause)
{
	text("(");
	for (uint32_t i = 0; i < clause.parameters.size; ++i)
	{
		const ParameterDeclaration& parameter = *clause.parameters[i];
		if (i != 0)
			text(",");
		specifiers(parameter.specifiers);
		if (parameter.declarator != nullptr)
			declarator(*parameter.declarator);
		if (parameter.default_argument != nullptr)
		{
			text("=");
			initializer(*parameter.default_argument);
		}
	}
	if (clause.ellipsis)
		text(clause.parameters.empty() || clause.ellipsis_without_comma ? "..." : ",...");
	text(")");
}

void SyntaxRenderer::function_qualifier(const FunctionQualifier& qualifier)
{
	switch (qualifier.kind)
	{
	case FunctionQualifierKind::Cv:
		text(TokenKindSpelling(qualifier.token));
		text(" ");
		break;
	case FunctionQualifierKind::Ref:
		text(TokenKindSpelling(qualifier.token));
		break;
	case FunctionQualifierKind::Noexcept:
		text("noexcept");
		if (qualifier.has_operand)
		{
			text("(");
			expression(*qualifier.noexcept_operand);
			text(")");
		}
		break;
	case FunctionQualifierKind::Throw:
		text("throw(");
		for (uint32_t i = 0; i < qualifier.throw_types.size; ++i)
		{
			if (i != 0)
				text(",");
			type_id(*qualifier.throw_types[i]);
		}
		text(")");
		break;
	case FunctionQualifierKind::Virt:
		identifier(qualifier.virt);
		break;
	case FunctionQualifierKind::TrailingReturn:
		text("->");
		type_id(*qualifier.trailing);
		break;
	case FunctionQualifierKind::Requires:
		text("requires ");
		expression(*qualifier.noexcept_operand);
		break;
	}
}

void SyntaxRenderer::initializer(const Initializer& initializer)
{
	switch (initializer.kind)
	{
	case InitializerKind::Assign:
	case InitializerKind::Braced:
		expression(*initializer.expression);
		break;
	case InitializerKind::Parenthesized:
		text("(");
		expression_list(initializer.arguments);
		text(")");
		break;
	case InitializerKind::Default:
		text("default");
		break;
	case InitializerKind::Delete:
		text("delete");
		break;
	}
}

void SyntaxRenderer::expression_list(const Slice<Expr*>& list)
{
	for (uint32_t i = 0; i < list.size; ++i)
	{
		if (i != 0)
			text(",");
		expression(*list[i]);
	}
}

void SyntaxRenderer::lambda_introducer(const LambdaExpr& lambda)
{
	text("[");
	if (lambda.has_default)
		text(TokenKindSpelling(lambda.capture_default));
	for (uint32_t i = 0; i < lambda.captures.size; ++i)
	{
		const LambdaCapture& capture = lambda.captures[i];
		if (i != 0 || lambda.has_default)
			text(",");
		if (capture.by_reference)
			text("&");
		if (capture.kind == TokenKind::OP_STAR)
			text("*this");
		else if (capture.kind == TokenKind::KW_THIS)
			text("this");
		else
			identifier(capture.name);
		if (capture.initializer != nullptr)
			initializer(*capture.initializer);
		if (capture.pack)
			text("...");
	}
	text("]");
}

const Expr* ChainOperand(const Expr& expr)
{
	switch (expr.kind)
	{
	case ExprKind::Binary:
	case ExprKind::Assign:
		return static_cast<const BinaryExpr&>(expr).left;
	case ExprKind::Call:
		return static_cast<const CallExpr&>(expr).callee;
	case ExprKind::Subscript:
		return static_cast<const SubscriptExpr&>(expr).base;
	case ExprKind::Member:
		return static_cast<const MemberExpr&>(expr).base;
	case ExprKind::Postfix:
		return static_cast<const UnaryExpr&>(expr).operand;
	default:
		return nullptr;
	}
}

void SyntaxRenderer::expression(const Expr& expr)
{
	// A chain's left operand comes first, so the spine is walked down to
	// its first operand, and each node's rest follows on the way back.
	const size_t base = spine_.size();
	const Expr* first = &expr;
	for (const Expr* left = ChainOperand(expr); left != nullptr; left = ChainOperand(*left))
	{
		spine_.push_back(first);
		first = left;
	}
	operand(*first);
	while (spine_.size() > base)
	{
		const Expr* node = spine_.back();
		spine_.pop_back();
		chain_rest(*node);
	}
}

void SyntaxRenderer::chain_rest(const Expr& expr)
{
	switch (expr.kind)
	{
	case ExprKind::Binary:
	case ExprKind::Assign:
	{
		const BinaryExpr& binary = static_cast<const BinaryExpr&>(expr);
		text(TokenKindSpelling(binary.op, binary.alternative));
		expression(*binary.right);
		break;
	}
	case ExprKind::Call:
		text("(");
		expression_list(static_cast<const CallExpr&>(expr).arguments);
		text(")");
		break;
	case ExprKind::Subscript:
		text("[");
		expression(*static_cast<const SubscriptExpr&>(expr).index);
		text("]");
		break;
	case ExprKind::Member:
	{
		const MemberExpr& member = static_cast<const MemberExpr&>(expr);
		text(TokenKindSpelling(member.op));
		name(*member.member, true);
		break;
	}
	case ExprKind::Postfix:
	{
		const UnaryExpr& postfix = static_cast<const UnaryExpr&>(expr);
		text(TokenKindSpelling(postfix.op, postfix.alternative));
		break;
	}
	default:
		break;
	}
}

void SyntaxRenderer::call_like(const Expr& expr)
{
	const FunctionalCastExpr& cast = static_cast<const FunctionalCastExpr&>(expr);
	specifiers(cast.type);
	if (cast.braced != nullptr)
	{
		expression(*cast.braced);
		return;
	}
	text("(");
	expression_list(cast.arguments);
	text(")");
}

void SyntaxRenderer::selection(const SelectionExpr& expr)
{
	const bool choose = expr.selection == SelectionKind::Choose;
	text(choose ? "__builtin_choose_expr(" : "_Generic(");
	expression(*expr.control);
	if (choose)
	{
		const auto& choice = static_cast<const ChooseExpr&>(expr);
		text(",");
		expression(*choice.then_expr);
		text(",");
		expression(*choice.else_expr);
	}
	else
	{
		for (const GenericAssociation& association : static_cast<const GenericExpr&>(expr).associations)
		{
			text(",");
			if (association.type != nullptr)
				type_id(*association.type);
			else
				text("default");
			text(":");
			expression(*association.expression);
		}
	}
	text(")");
}

void SyntaxRenderer::operand(const Expr& expr)
{
	// Chain nodes are handled by expression().
	switch (expr.kind)
	{
	case ExprKind::Concept:
	case ExprKind::Id:
		name(*static_cast<const IdExpr&>(expr).name, true);
		break;
	case ExprKind::Literal:
		text(static_cast<const LiteralExpr&>(expr).spelling);
		break;
	case ExprKind::KeywordLiteral:
		text(TokenKindSpelling(static_cast<const KeywordLiteralExpr&>(expr).keyword));
		break;
	case ExprKind::LabelAddress:
		text("&&");
		identifier(static_cast<const LabelAddressExpr&>(expr).label);
		break;
	case ExprKind::Paren:
		text("(");
		expression(*static_cast<const ParenExpr&>(expr).inner);
		text(")");
		break;
	case ExprKind::Requires:
	{
		const RequiresExpr& required = static_cast<const RequiresExpr&>(expr);
		text("requires");
		if (required.parameters != nullptr)
			parameters(*required.parameters);
		text("{");
		for (const Requirement& requirement : required.requirements)
		{
			if (requirement.type != nullptr)
			{
				if (!requirement.type->specifiers[0].name->typename_keyword)
					text("typename ");
				type_id(*requirement.type);
			}
			else
			{
				if (requirement.kind == RequirementKind::Nested)
					text("requires ");
				if (requirement.kind == RequirementKind::Compound)
					text("{");
				expression(*requirement.expression);
				if (requirement.kind == RequirementKind::Compound)
					text("}");
				if (requirement.is_noexcept)
					text("noexcept");
				if (requirement.return_constraint != nullptr)
				{
					text("->");
					name(*requirement.return_constraint, true);
				}
			}
			text(";");
		}
		text("}");
		break;
	}
	case ExprKind::Selection:
		selection(static_cast<const SelectionExpr&>(expr));
		break;
	case ExprKind::Conditional:
	{
		const ConditionalExpr& conditional = static_cast<const ConditionalExpr&>(expr);
		expression(*conditional.condition);
		text("?");
		if (conditional.then_expr != nullptr)
			expression(*conditional.then_expr);
		text(":");
		expression(*conditional.else_expr);
		break;
	}
	case ExprKind::Unary:
	{
		const UnaryExpr& unary = static_cast<const UnaryExpr&>(expr);
		text(TokenKindSpelling(unary.op, unary.alternative));
		expression(*unary.operand);
		break;
	}
	case ExprKind::FunctionalCast:
		call_like(expr);
		break;
	case ExprKind::Cast:
	{
		const CastExpr& cast = static_cast<const CastExpr&>(expr);
		if (cast.cast == TokenKind::OP_LPAREN)
		{
			text("(");
			type_id(*cast.type);
			text(")");
			expression(*cast.operand);
			break;
		}
		text(TokenKindSpelling(cast.cast));
		text("<");
		type_id(*cast.type);
		text(">(");
		expression(*cast.operand);
		text(")");
		break;
	}
	case ExprKind::Sizeof:
	{
		const SizeofExpr& size = static_cast<const SizeofExpr&>(expr);
		text("sizeof");
		if (size.type != nullptr || size.parenthesized)
			text("(");
		if (size.type != nullptr)
			type_id(*size.type);
		else
			expression(*size.operand);
		if (size.type != nullptr || size.parenthesized)
			text(")");
		break;
	}
	case ExprKind::SizeofPack:
		text("sizeof...(");
		identifier(static_cast<const SizeofPackExpr&>(expr).pack);
		text(")");
		break;
	case ExprKind::TypeTrait:
	{
		const TypeTraitExpr& trait = static_cast<const TypeTraitExpr&>(expr);
		text(TokenKindSpelling(trait.keyword));
		text("(");
		if (trait.type != nullptr)
			type_id(*trait.type);
		else
			expression(*trait.operand);
		text(")");
		break;
	}
	case ExprKind::New:
	{
		const NewExpr& allocation = static_cast<const NewExpr&>(expr);
		if (allocation.global)
			text("::");
		text("new");
		if (allocation.has_placement)
		{
			text("(");
			expression_list(allocation.placement);
			text(")");
		}
		if (allocation.parenthesized_type)
			text("(");
		type_id(*allocation.type);
		if (allocation.parenthesized_type)
			text(")");
		if (allocation.initializer != nullptr)
			initializer(*allocation.initializer);
		break;
	}
	case ExprKind::Delete:
	{
		const DeleteExpr& deallocation = static_cast<const DeleteExpr&>(expr);
		if (deallocation.global)
			text("::");
		text(deallocation.array ? "delete[]" : "delete");
		expression(*deallocation.operand);
		break;
	}
	case ExprKind::Lambda:
		lambda(static_cast<const LambdaExpr&>(expr));
		break;
	case ExprKind::Statement:
		text("(");
		statement(*static_cast<const StatementExpr&>(expr).body);
		text(")");
		break;
	case ExprKind::BuiltinTrait:
	{
		const BuiltinTraitExpr& trait = static_cast<const BuiltinTraitExpr&>(expr);
		text(GnuTraitName(trait.trait));
		text("(");
		for (uint32_t i = 0; i < trait.types.size; ++i)
		{
			if (i != 0)
				text(", ");
			type_id(*trait.types[i]);
		}
		if (trait.operand != nullptr)
			expression(*trait.operand);
		text(")");
		break;
	}
	case ExprKind::BracedInit:
	{
		const BracedInitList& list = static_cast<const BracedInitList&>(expr);
		text("{");
		const CDesignatedEntry* designation = list.c_designators.begin();
		for (uint32_t i = 0; i < list.elements.size; ++i)
		{
			if (i != 0)
				text(",");
			if (list.designators != nullptr && list.designators[i] != nullptr)
			{
				text(".");
				identifier(list.designators[i]);
				text("=");
			}
			if (designation != list.c_designators.end() && designation->element == i)
			{
				for (const CDesignator& step : designation->path)
				{
					if (step.index == nullptr)
					{
						text(".");
						identifier(step.member);
					}
					else
					{
						text("[");
						expression(*step.index);
						if (step.range_end != nullptr)
						{
							text(" ... ");
							expression(*step.range_end);
						}
						text("]");
					}
				}
				++designation;
				text("=");
			}
			expression(*list.elements[i]);
		}
		if (list.trailing_comma)
			text(",");
		text("}");
		break;
	}
	case ExprKind::PackExpansion:
		expression(*static_cast<const PackExpansionExpr&>(expr).pattern);
		text("...");
		break;
	case ExprKind::Fold:
	{
		// ( pattern op ... [op init] ) or ( ... op pattern ).
		const FoldExpr& fold = static_cast<const FoldExpr&>(expr);
		text("(");
		if (!fold.right)
		{
			text("...");
			text(TokenKindSpelling(fold.op));
		}
		expression(*fold.pattern);
		if (fold.right)
		{
			text(TokenKindSpelling(fold.op));
			text("...");
		}
		if (fold.init != nullptr)
		{
			text(TokenKindSpelling(fold.op));
			expression(*fold.init);
		}
		text(")");
		break;
	}
	case ExprKind::Coroutine:
	{
		const CoroutineExpr& operation = static_cast<const CoroutineExpr&>(expr);
		text(TokenKindSpelling(operation.operation));
		if (operation.operand != nullptr)
		{
			text(" ");
			expression(*operation.operand);
		}
		break;
	}
	case ExprKind::Throw:
		text("throw");
		if (static_cast<const ThrowExpr&>(expr).operand != nullptr)
			expression(*static_cast<const ThrowExpr&>(expr).operand);
		break;
	case ExprKind::Binary:
	case ExprKind::Assign:
	case ExprKind::Call:
	case ExprKind::Subscript:
	case ExprKind::Member:
	case ExprKind::Postfix:
		break;
	}
}

void SyntaxRenderer::lambda(const LambdaExpr& lambda)
{
	lambda_introducer(lambda);
	if (lambda.explicit_template_parameter_count != 0)
	{
		TemplateParameterList source = *lambda.template_parameters;
		source.parameters.size = lambda.explicit_template_parameter_count;
		template_parameters(source, true);
	}
	if (lambda.constraints != nullptr && lambda.constraints->head != nullptr)
	{
		text(" requires ");
		expression(*lambda.constraints->head);
	}
	if (lambda.has_declarator)
	{
		parameters(*lambda.parameters);
		if (lambda.is_mutable)
			text("mutable");
		if (lambda.is_constexpr || lambda.is_consteval)
		{
			if (lambda.is_mutable)
				text(" ");
			text(lambda.is_consteval ? "consteval" : "constexpr");
			if (lambda.has_noexcept || lambda.has_throw)
				text(" ");
		}
		if (lambda.has_noexcept)
		{
			text("noexcept");
			if (lambda.noexcept_operand != nullptr)
			{
				text("(");
				expression(*lambda.noexcept_operand);
				text(")");
			}
		}
		if (lambda.has_throw)
		{
			FunctionQualifier thrown = FunctionQualifier();
			thrown.kind = FunctionQualifierKind::Throw;
			thrown.throw_types = lambda.throw_types;
			function_qualifier(thrown);
		}
		if (lambda.trailing != nullptr)
		{
			text("->");
			type_id(*lambda.trailing);
		}
	}
	if (lambda.constraints != nullptr && lambda.constraints->trailing != nullptr)
	{
		text(" requires ");
		expression(*lambda.constraints->trailing);
	}
	statement(*lambda.body);
}

void SyntaxRenderer::statement(const Stmt& stmt)
{
	switch (stmt.kind)
	{
	case StmtKind::Ambiguous:
		// The reading the parser found first.
		statement(*static_cast<const AmbiguousStmt&>(stmt).readings[0]);
		break;
	case StmtKind::Compound:
		text("{");
		for (const Stmt* item : static_cast<const CompoundStmt&>(stmt).items)
			statement(*item);
		text("}");
		break;
	case StmtKind::Expression:
		if (static_cast<const ExpressionStmt&>(stmt).expression != nullptr)
			expression(*static_cast<const ExpressionStmt&>(stmt).expression);
		text(";");
		break;
	case StmtKind::Declaration:
		declaration(*static_cast<const DeclarationStmt&>(stmt).declaration);
		break;
	case StmtKind::If:
	{
		const IfStmt& branch = static_cast<const IfStmt&>(stmt);
		text("if(");
		condition(branch.condition);
		text(")");
		statement(*branch.then_branch);
		if (branch.else_branch != nullptr)
		{
			text("else");
			statement(*branch.else_branch);
		}
		break;
	}
	case StmtKind::Switch:
	case StmtKind::While:
	{
		const ConditionalLoopStmt& loop = static_cast<const ConditionalLoopStmt&>(stmt);
		text(stmt.kind == StmtKind::Switch ? "switch(" : "while(");
		condition(loop.condition);
		text(")");
		statement(*loop.body);
		break;
	}
	case StmtKind::Do:
	{
		const DoStmt& loop = static_cast<const DoStmt&>(stmt);
		text("do");
		statement(*loop.body);
		text("while(");
		expression(*loop.condition);
		text(");");
		break;
	}
	case StmtKind::For:
	{
		const ForStmt& loop = static_cast<const ForStmt&>(stmt);
		text("for(");
		if (loop.init_declaration != nullptr)
		{
			declaration(*loop.init_declaration);
		}
		else
		{
			if (loop.init_expression != nullptr)
				expression(*loop.init_expression);
			text(";");
		}
		if (loop.condition != nullptr)
			condition(*loop.condition);
		text(";");
		if (loop.iteration != nullptr)
			expression(*loop.iteration);
		text(")");
		statement(*loop.body);
		break;
	}
	case StmtKind::RangeFor:
	{
		const RangeForStmt& loop = static_cast<const RangeForStmt&>(stmt);
		text("for(");
		specifiers(loop.specifiers);
		declarator(*loop.declarator);
		text(":");
		expression(*loop.range);
		text(")");
		statement(*loop.body);
		break;
	}
	case StmtKind::Case:
	{
		const CaseStmt& label = static_cast<const CaseStmt&>(stmt);
		text("case");
		expression(*label.value);
		if (label.range_end != nullptr)
		{
			text("...");
			expression(*label.range_end->expression);
		}
		text(":");
		statement(*label.body);
		break;
	}
	case StmtKind::Default:
	case StmtKind::Labeled:
	{
		const LabeledStmt& label = static_cast<const LabeledStmt&>(stmt);
		if (stmt.kind == StmtKind::Default)
			text("default");
		else
			identifier(label.label);
		text(":");
		statement(*label.body);
		break;
	}
	case StmtKind::Asm:
		text("asm(...);");
		break;
	case StmtKind::Break:
		text("break;");
		break;
	case StmtKind::Continue:
		text("continue;");
		break;
	case StmtKind::Goto:
		text("goto");
		if (const Expr* target = static_cast<const GotoStmt&>(stmt).target)
		{
			text("*");
			expression(*target);
		}
		else
			identifier(static_cast<const GotoStmt&>(stmt).label);
		text(";");
		break;
	case StmtKind::Return:
	case StmtKind::Throw:
	{
		const ValueStmt& jump = static_cast<const ValueStmt&>(stmt);
		text(stmt.kind == StmtKind::Return ? "return" : "throw");
		if (jump.value != nullptr)
			expression(*jump.value);
		text(";");
		break;
	}
	case StmtKind::Try:
	{
		const TryStmt& attempt = static_cast<const TryStmt&>(stmt);
		text("try");
		statement(*attempt.body);
		handlers(attempt.handlers);
		break;
	}
	}
}

void SyntaxRenderer::handlers(const Slice<Handler>& handlers)
{
	for (const Handler& handler : handlers)
	{
		text("catch(");
		if (handler.exception.ellipsis)
		{
			text("...");
		}
		else
		{
			specifiers(handler.exception.specifiers);
			if (handler.exception.declarator != nullptr)
				declarator(*handler.exception.declarator);
		}
		text(")");
		statement(*handler.body);
	}
}

void SyntaxRenderer::condition(const Condition& condition)
{
	if (condition.declaration == nullptr)
	{
		expression(*condition.expression);
		return;
	}
	specifiers(condition.declaration->specifiers);
	declarator(*condition.declaration->declarator);
	if (condition.declaration->initializer->kind == InitializerKind::Assign)
		text("=");
	initializer(*condition.declaration->initializer);
}

void SyntaxRenderer::init_declarators(const Slice<InitDeclarator>& declarators)
{
	for (uint32_t i = 0; i < declarators.size; ++i)
	{
		const InitDeclarator& init = declarators[i];
		if (i != 0)
			text(",");
		declarator(*init.declarator);
		if (init.initializer == nullptr)
			continue;
		const InitializerKind kind = init.initializer->kind;
		if (kind == InitializerKind::Assign || kind == InitializerKind::Default || kind == InitializerKind::Delete)
			text("=");
		initializer(*init.initializer);
	}
}

void SyntaxRenderer::function_body(const FunctionBody& body)
{
	if (body.try_block)
		text("try");
	if (body.ctor_initializer != nullptr)
	{
		text(":");
		const Slice<MemInitializer>& members = body.ctor_initializer->initializers;
		for (uint32_t i = 0; i < members.size; ++i)
		{
			const MemInitializer& member = members[i];
			if (i != 0)
				text(",");
			name(*member.name, true);
			if (member.braced)
			{
				expression(*member.list);
			}
			else
			{
				text("(");
				expression_list(member.arguments);
				text(")");
			}
			if (member.pack)
				text("...");
		}
	}
	statement(*body.body);
	if (body.try_block)
		handlers(body.try_block->handlers);
}

void SyntaxRenderer::template_parameters(const TemplateParameterList& list, bool lambda)
{
	text(lambda ? "<" : "template<");
	for (uint32_t i = 0; i < list.parameters.size; ++i)
	{
		const TemplateParameter& parameter = *list.parameters[i];
		if (i != 0)
			text(",");
		if (parameter.kind == TemplateParameterKind::NonType)
		{
			specifiers(parameter.specifiers);
			if (parameter.pack)
				text("...");
			if (parameter.declarator != nullptr)
				declarator(*parameter.declarator);
			if (parameter.default_value != nullptr)
			{
				text("=");
				expression(*parameter.default_value);
			}
			continue;
		}
		if (parameter.kind == TemplateParameterKind::Template)
			template_parameters(*parameter.parameters);
		if (const Name* constraint = TypeParameterConstraint(parameter))
			name(*constraint, false);
		else
			text(TokenKindSpelling(parameter.key));
		text(" ");
		if (parameter.pack)
			text("...");
		identifier(parameter.name);
		if (parameter.default_type != nullptr)
		{
			text("=");
			type_id(*parameter.default_type);
		}
	}
	text(">");
}

void SyntaxRenderer::declaration(const Decl& decl)
{
	switch (decl.kind)
	{
	case DeclKind::Empty:
		text(";");
		break;
	case DeclKind::Namespace:
	{
		const NamespaceDecl& ns = static_cast<const NamespaceDecl&>(decl);
		text(ns.is_inline ? "inlinenamespace" : "namespace");
		identifier(ns.name);
		text("{");
		for (const Decl* member : ns.declarations)
			declaration(*member);
		text("}");
		break;
	}
	case DeclKind::NamespaceAlias:
	{
		const NamespaceAliasDecl& alias = static_cast<const NamespaceAliasDecl&>(decl);
		text("namespace");
		identifier(alias.name);
		text("=");
		name(*alias.target, true);
		text(";");
		break;
	}
	case DeclKind::UsingDirective:
		text("usingnamespace");
		name(*static_cast<const UsingDecl&>(decl).target, true);
		text(";");
		break;
	case DeclKind::UsingDeclaration:
	{
		const UsingDecl& declaration = static_cast<const UsingDecl&>(decl);
		text("using");
		for (const UsingDecl* part = &declaration; part != nullptr; part = part->following)
		{
			if (part != &declaration)
				text(",");
			if (part->using_enum || part->typename_keyword)
				text(part->using_enum ? "enum " : "typename ");
			name(*part->target, true);
			if (part->pack)
				text("...");
		}
		text(";");
		break;
	}
	case DeclKind::Concept:
	{
		const ConceptDecl& definition = static_cast<const ConceptDecl&>(decl);
		text("concept ");
		identifier(definition.name);
		text("=");
		expression(*definition.constraint);
		text(";");
		break;
	}
	case DeclKind::Alias:
	{
		const AliasDecl& alias = static_cast<const AliasDecl&>(decl);
		text("using");
		identifier(alias.name);
		text("=");
		type_id(*alias.type);
		text(";");
		break;
	}
	case DeclKind::ExplicitInstantiation:
	{
		const ExplicitInstantiationDecl& instantiation = static_cast<const ExplicitInstantiationDecl&>(decl);
		text(instantiation.is_extern ? "extern" : "");
		text("template ");
		declaration(*instantiation.declaration);
		break;
	}
	case DeclKind::ConstrainedTemplate:
	case DeclKind::Template:
	{
		const TemplateDecl& templated = static_cast<const TemplateDecl&>(decl);
		template_parameters(*templated.parameters);
		if (const Expr* constraint = TemplateConstraint(templated))
		{
			text("requires ");
			expression(*constraint);
			text(" ");
		}
		declaration(*templated.declaration);
		break;
	}
	case DeclKind::Class:
		specifier(static_cast<const ClassDecl&>(decl).specifier);
		text(";");
		break;
	case DeclKind::Enum:
		enum_specifier(*static_cast<const EnumDecl&>(decl).enum_specifier);
		text(";");
		break;
	case DeclKind::StaticAssert:
	{
		const StaticAssertDecl& assertion = static_cast<const StaticAssertDecl&>(decl);
		text("static_assert(");
		expression(*assertion.condition);
		if (assertion.has_message)
		{
			text(",");
			text(assertion.message);
		}
		text(");");
		break;
	}
	case DeclKind::SpecialMember:
	{
		const SpecialMemberDecl& member = static_cast<const SpecialMemberDecl&>(decl);
		specifiers(member.specifiers);
		declarator(*member.declarator);
		if (member.definition)
		{
			function_body(member.body);
			break;
		}
		if (member.initializer != nullptr)
		{
			text("=");
			initializer(*member.initializer);
		}
		text(";");
		break;
	}
	case DeclKind::Function:
	{
		const FunctionDecl& function = static_cast<const FunctionDecl&>(decl);
		specifiers(function.specifiers);
		declarator(*function.declarator);
		function_body(function.body);
		break;
	}
	case DeclKind::DeductionGuide:
	{
		const DeductionGuideDecl& guide = static_cast<const DeductionGuideDecl&>(decl);
		if (guide.is_explicit)
			text("explicit ");
		identifier(guide.name);
		parameters(*guide.parameters);
		text("->");
		type_id(*guide.result);
		text(";");
		break;
	}
	case DeclKind::Simple:
	{
		const SimpleDecl& simple = static_cast<const SimpleDecl&>(decl);
		specifiers(simple.specifiers);
		init_declarators(simple.declarators);
		text(";");
		break;
	}
	case DeclKind::Asm:
		text("asm(");
		text(static_cast<const AsmDecl&>(decl).text);
		text(");");
		break;
	case DeclKind::Linkage:
	{
		const LinkageDecl& linkage = static_cast<const LinkageDecl&>(decl);
		text("extern\"");
		text(linkage.language);
		text("\"{");
		for (const Decl* member : linkage.declarations)
			declaration(*member);
		text("}");
		break;
	}
	case DeclKind::BitField:
	{
		const BitFieldDecl& field = static_cast<const BitFieldDecl&>(decl);
		specifiers(field.specifiers);
		uint32_t next = 0;
		for (uint32_t i = 0; i < field.declarators.size; ++i)
		{
			const Expr* width = field.take_width(i, next);
			if (i != 0)
				text(",");
			if (width == nullptr)
			{
				init_declarators(Slice<InitDeclarator>{ field.declarators.data + i, 1 });
				continue;
			}
			const InitDeclarator& member = field.declarators[i];
			if (member.declarator != nullptr)
				declarator(*member.declarator);
			text(":");
			expression(*width);
			if (member.initializer != nullptr)
				initializer(*member.initializer);
		}
		text(";");
		break;
	}
	case DeclKind::Access:
		text(TokenKindSpelling(static_cast<const AccessDecl&>(decl).access));
		text(":");
		break;
	}
}

std::string RenderName(const Name& name)
{
	std::string out;
	SyntaxRenderer(out).name(name, false);
	return out;
}

std::string RenderTypeId(const TypeId& type)
{
	std::string out;
	SyntaxRenderer(out).type_id(type);
	return out;
}

std::string RenderExpression(const Expr& expr)
{
	std::string out;
	SyntaxRenderer(out).expression(expr);
	return out;
}

} // namespace syntax
