#pragma once

#include <cstdint>

#include "lex/token_kind.h"
#include "lex/token_spelling.h"
#include "types/fundamental_type.h"

struct Identifier;

// The categories of tokens after translation phases 5-7.
enum class PostTokenKind : uint8_t
{
	Simple,
	Identifier,
	Literal,
	UserDefinedLiteral,
	Invalid,
	EndOfFile
};

// The literal grammar a Literal or UserDefinedLiteral token matched.
enum class LiteralForm : uint8_t
{
	Integer,
	Floating,
	Character,
	String,
	Imaginary
};

// One token from PostTokenizer. Pointers are borrowed and valid until the
// next token is requested.
struct PostToken
{
	PostTokenKind kind;
	// Simple: the keyword, operator or punctuator.
	TokenKind simple;
	// Literal and UserDefinedLiteral.
	LiteralForm form;
	// Literal, and user-defined character and string literals: the type, or
	// the element type of a string literal's array.
	FundamentalType type;
	// Physical source offsets from the first pp-token's start to the last
	// one's end.
	uint32_t begin;
	uint32_t end;
	// The source: the pp-token's spelling, or for a concatenated string
	// literal the spellings of its pieces separated by single spaces.
	TokenSpelling source;
	union
	{
		// Interned when the input interns identifiers.
		const Identifier* identifier;
		// Imaginary literal: integer component or end of the floating value text.
		uint64_t imaginary_value;
	};
	// A multicharacter literal (lex/text_literal.h), which the PA2 writer
	// reports as invalid.
	bool multicharacter;
	// A replacement-list token from a system macro with warnings suppressed.
	bool quiet_system_macro;
	// String literal: contains an octal or hexadecimal escape.
	bool numeric_string_escapes;
	// UserDefinedLiteral: the ud-suffix. For integer and floating forms the
	// rest of the source is the literal's text without it.
	TokenSpelling ud_suffix;
	// Literal and user-defined character and string literals: the value in
	// its x86-64 representation. A string's code units include the
	// terminating null, and `elements` is its array bound.
	const unsigned char* data;
	uint32_t size;
	uint32_t elements;
};
