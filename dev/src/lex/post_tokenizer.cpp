#include "lex/post_tokenizer.h"

#include "lex/identifier_table.h"
#include "lex/number_literal.h"
#include "lex/text_literal.h"
#include "preprocess/preprocessor.h"

PostTokenizer::PostTokenizer(PPTokenCursor& input, IdentifierTable* identifiers, NumberDialect literals,
	target_model::Target target, bool conditional_escapes, uint8_t cxx_edition)
	: input_(input), identifiers_(identifiers), literals_(literals), conditional_escapes_(conditional_escapes),
	  cxx_edition_(cxx_edition), target_(target), lookahead_(nullptr), token_(), split_suffix_(),
	  split_suffix_begin_(0), split_suffix_end_(0), after_operator_(false), scalar_()
{
	strings_.set_reserved_suffixes(HasNumberSyntax(literals, number_syntax::ReservedSuffix));
	strings_.set_conditional_escapes(conditional_escapes);
}

const PostToken& PostTokenizer::next()
{
	if (__builtin_expect(split_suffix_.length != 0, 0))
	{
		start_token(PostTokenKind::Invalid, split_suffix_, split_suffix_begin_, split_suffix_end_);
		token_.quiet_system_macro = false;
		split_suffix_.length = 0;
		convert_identifier(
			identifiers_ != nullptr ? identifiers_->intern(token_.source.text, token_.source.length) : nullptr);
	}
	else
	{
		convert(pull());
	}
	after_operator_ = token_.kind == PostTokenKind::Simple && token_.simple == TokenKind::KW_OPERATOR;
	return token_;
}

const PPToken& PostTokenizer::pull()
{
	// Only a string literal sequence leaves a lookahead token.
	if (__builtin_expect(lookahead_ == nullptr, 1))
		return pull_input();
	const PPToken& pp = *lookahead_;
	lookahead_ = nullptr;
	return pp;
}

const PPToken& PostTokenizer::pull_input()
{
	for (;;)
	{
		const PPToken& pp = input_.next();
		if (pp.kind != PPTokenKind::WhitespaceSequence && pp.kind != PPTokenKind::NewLine)
			return pp;
	}
}

void PostTokenizer::convert(const PPToken& pp)
{
	start_token(PostTokenKind::Invalid, TokenSpelling{ pp.spelling, pp.length }, pp.begin, pp.end);
	token_.quiet_system_macro = (pp.flags & kQuietSystemMacro) != 0;
	switch (pp.kind)
	{
	case PPTokenKind::Identifier:
		convert_identifier(pp.identifier);
		return;
	case PPTokenKind::PreprocessingOpOrPunc:
		convert_operator(pp.punctuator);
		return;
	case PPTokenKind::PPNumber:
		convert_number(pp);
		return;
	case PPTokenKind::CharacterLiteral:
	case PPTokenKind::UserDefinedCharacterLiteral:
		convert_character(pp);
		return;
	case PPTokenKind::StringLiteral:
	case PPTokenKind::UserDefinedStringLiteral:
		convert_string_sequence(pp);
		return;
	case PPTokenKind::EndOfFile:
		token_.kind = PostTokenKind::EndOfFile;
		token_.source.length = 0;
		return;
	case PPTokenKind::HeaderName:
	case PPTokenKind::NonWhitespaceCharacter:
	case PPTokenKind::WhitespaceSequence:
	case PPTokenKind::NewLine:
	case PPTokenKind::Placemarker:
	case PPTokenKind::SharedExpansion:
		return;
	}
}

void PostTokenizer::start_token(PostTokenKind kind, const TokenSpelling& spelling, uint32_t begin, uint32_t end)
{
	token_.kind = kind;
	token_.begin = begin;
	token_.end = end;
	token_.source = spelling;
	token_.identifier = nullptr;
	token_.multicharacter = false;
	token_.ud_suffix = TokenSpelling{ nullptr, 0 };
	token_.data = nullptr;
	token_.size = 0;
	token_.elements = 0;
}

void PostTokenizer::convert_identifier(const Identifier* identifier)
{
	TokenKind kind;
	bool keyword;
	if (identifier != nullptr)
		keyword = identifier->simple_token(kind);
	else
	{
		// The compiler's interned identifiers already carry the selected
		// dialect's keyword fact. Only the standalone lexer needs this gate.
		keyword = FindSimpleToken(token_.source.text, token_.source.length, kind);
		if (keyword && IsCxx20Keyword(kind) && cxx_edition_ < 20)
			keyword = false;
	}
	if (keyword)
	{
		token_.kind = PostTokenKind::Simple;
		token_.simple = kind;
	}
	else
	{
		token_.kind = PostTokenKind::Identifier;
		token_.identifier = identifier;
	}
}

void PostTokenizer::convert_operator(uint8_t punctuator)
{
	// `#`, `##`, `%:` and `%:%:` have no simple token and stay Invalid.
	TokenKind kind;
	if (punctuator == kHashPunctuator || punctuator == kHashHashPunctuator)
		return;
	if (punctuator != kNoPunctuator)
		kind = static_cast<TokenKind>(punctuator - 1);
	else if (!FindSimpleToken(token_.source.text, token_.source.length, kind))
		return;
	token_.kind = PostTokenKind::Simple;
	token_.simple = kind;
}

void PostTokenizer::convert_number(const PPToken& pp)
{
	const NumberLiteral number = ClassifyNumber(pp.spelling, pp.length, literals_, target_);
	switch (number.kind)
	{
	case NumberLiteralKind::Integer:
		set_scalar(LiteralForm::Integer, number.type, number.integer);
		return;
	case NumberLiteralKind::Floating:
		if (!ScanFloatingValue(pp.spelling, number.suffix_begin, number.type, floating_text_, scalar_, target_) &&
			cxx_edition_ != 0)
			return;
		token_.kind = PostTokenKind::Literal;
		token_.form = LiteralForm::Floating;
		token_.type = number.type;
		token_.data = scalar_;
		token_.size = FundamentalTypeSize(number.type, target_);
		return;
	case NumberLiteralKind::UserDefinedInteger:
		token_.kind = PostTokenKind::UserDefinedLiteral;
		token_.form = LiteralForm::Integer;
		set_ud_suffix(number.suffix_begin);
		return;
	case NumberLiteralKind::UserDefinedFloating:
		token_.kind = PostTokenKind::UserDefinedLiteral;
		token_.form = LiteralForm::Floating;
		set_ud_suffix(number.suffix_begin);
		return;
	case NumberLiteralKind::ImaginaryInteger:
	case NumberLiteralKind::ImaginaryFloating:
		convert_imaginary(pp, number);
		return;
	case NumberLiteralKind::Invalid:
		return;
	}
}

void PostTokenizer::convert_imaginary(const PPToken& pp, const NumberLiteral& number)
{
	const bool floating = number.kind == NumberLiteralKind::ImaginaryFloating;
	if (!defer_imaginary_values_)
	{
		if (floating)
			ScanFloatingValue(pp.spelling, number.suffix_begin, number.type, floating_text_, scalar_, target_);
		else
			set_scalar(LiteralForm::Imaginary, number.type, number.integer);
		token_.size = FundamentalTypeSize(number.type, target_);
		token_.data = scalar_;
	}
	token_.kind = PostTokenKind::Literal;
	token_.form = LiteralForm::Imaginary;
	token_.type = number.type;
	token_.imaginary_value = floating ? number.suffix_begin : number.integer;
}

void PostTokenizer::convert_character(const PPToken& pp)
{
	if ((pp.spelling_flags & kC23LiteralUcn) != 0 && positions_ != nullptr)
		positions_->diagnose_c23_literal_ucn(pp.begin);
	const CharacterLiteralValue value = EvaluateCharacterLiteral(pp.spelling, pp.length,
		HasNumberSyntax(literals_, number_syntax::GnuCharacter) ? CharacterDialect::Gnu : CharacterDialect::Course,
		conditional_escapes_, cxx_edition_);
	if (!value.valid)
		return;
	set_scalar(LiteralForm::Character, value.type, value.code_point);
	token_.multicharacter = value.multicharacter;
	if (value.suffix_begin != pp.length)
	{
		token_.kind = PostTokenKind::UserDefinedLiteral;
		set_ud_suffix(value.suffix_begin);
	}
}

void PostTokenizer::convert_string_sequence(const PPToken& first)
{
	if ((first.spelling_flags & kC23LiteralUcn) != 0 && positions_ != nullptr)
		positions_->diagnose_c23_literal_ucn(first.begin);
	strings_.clear();
	strings_.add(first.spelling, first.length);
	uint32_t end = first.end;
	for (;;)
	{
		const PPToken& pp = pull_input();
		if (pp.kind != PPTokenKind::StringLiteral && pp.kind != PPTokenKind::UserDefinedStringLiteral)
		{
			lookahead_ = &pp;
			break;
		}
		if ((pp.spelling_flags & kC23LiteralUcn) != 0 && positions_ != nullptr)
			positions_->diagnose_c23_literal_ucn(pp.begin);
		strings_.add(pp.spelling, pp.length);
		end = pp.end;
	}
	finish_string_sequence(first.begin, end);
	split_literal_operator_suffix(first);
}

bool PostTokenizer::split_literal_operator_suffix(const PPToken& first)
{
	// A literal-operator-id is `operator "" identifier` ([over.literal]
	// 13.5.8p1), but phase 3 lexes `""identifier` as one
	// user-defined-string-literal by maximal munch. Directly after
	// `operator` the compiler dialect splits it back into the empty string and the
	// identifier. Standalone posttoken mode keeps the maximal-munch token
	// and validates its suffix.
	// The identifier's source range starts at the earliest
	// offset it can have; splices may lie in between.
	if (!HasNumberSyntax(literals_, number_syntax::ReservedSuffix) || !after_operator_ ||
		token_.kind == PostTokenKind::Invalid || strings_.encoding_prefix() != EncodingPrefix::None ||
		token_.elements != 1)
	{
		return false;
	}
	// Phase 6 has already concatenated the entire sequence and checked its
	// suffix agreement. Only its empty ordinary string can name an operator.
	split_suffix_ = token_.ud_suffix;
	split_suffix_begin_ = first.begin + 2;
	split_suffix_end_ = split_suffix_begin_ + split_suffix_.length;
	token_.kind = PostTokenKind::Literal;
	token_.source = TokenSpelling{ "\"\"", 2 };
	token_.ud_suffix = TokenSpelling{ nullptr, 0 };
	return true;
}

void PostTokenizer::finish_string_sequence(uint32_t begin, uint32_t end)
{
	const bool well_formed = strings_.concatenate();
	token_.begin = begin;
	token_.end = end;
	token_.source = strings_.source();
	if (!well_formed)
		return;
	const TokenSpelling suffix = strings_.ud_suffix();
	token_.kind = suffix.length == 0 ? PostTokenKind::Literal : PostTokenKind::UserDefinedLiteral;
	token_.form = LiteralForm::String;
	token_.type = cxx_edition_ >= 20 && strings_.encoding_prefix() == EncodingPrefix::Utf8 ? FundamentalType::Char8T
																						   : strings_.element_type();
	token_.ud_suffix = suffix;
	token_.data = strings_.data();
	token_.size = strings_.size();
	token_.elements = strings_.element_count();
	token_.numeric_string_escapes = strings_.numeric_escapes();
}

void PostTokenizer::set_scalar(LiteralForm form, FundamentalType type, uint64_t value)
{
	// Little-endian, as x86-64 stores it.
	const unsigned size = FundamentalTypeSize(type, target_);
	for (unsigned i = 0; i < size; ++i)
		scalar_[i] = static_cast<unsigned char>(value >> (8 * i));
	token_.kind = PostTokenKind::Literal;
	token_.form = form;
	token_.type = type;
	token_.data = scalar_;
	token_.size = size;
}

void PostTokenizer::set_ud_suffix(uint32_t suffix_begin)
{
	token_.ud_suffix = TokenSpelling{ token_.source.text + suffix_begin, token_.source.length - suffix_begin };
}
