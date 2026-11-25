#pragma once

#include <cstdint>
#include <stdexcept>
#include <vector>

#include "lex/post_tokenizer.h"
#include "preprocess/c_float_pragmas.h"
#include "preprocess/visibility_pragma.h"
#include "support/memory/arena.h"
#include "support/telemetry.h"

struct StringLiteralValue;

namespace syntax {

enum class ParseTokenKind : uint8_t
{
	Simple,
	Identifier,
	Literal,
	UserDefinedLiteral,
	ImaginaryLiteral,
	FloatingLiteral,
	BitIntLiteral,
	EndOfFile
};

// ParseToken::flags.
enum ParseTokenFlag : uint8_t
{
	// The first half of a `>>` token (the grammar's ST_RSHIFT_1); the next
	// token is its second half (ST_RSHIFT_2). Both are OP_GT, so a template
	// argument list can close on either, while the expression grammar joins
	// an adjacent pair back into one shift operator.
	kFirstShiftHalf = 1,
	kSecondShiftHalf = 2,
	// From a system macro's replacement list, with diagnostics suppressed.
	kQuietSystemToken = 32,
	// A string literal or a concatenation of string literals.
	kStringLiteral = 128,
	// ImaginaryLiteral uses the low five bits for the component type.
	kImaginaryTypeMask = 31,
	kWideImaginaryLiteral = 64,
	kUnsignedBitIntLiteral = 1,
	kStoredBitIntLiteral = 2
};

static_assert(kFundamentalTypeCount <= kImaginaryTypeMask + 1, "the component type fits in the token flags");

// A phase-7 token as the parser sees it: compact, with a stable spelling
// (the preprocessor's token spellings live as long as the translation
// unit; concatenated string sources are copied once into the stream's
// arena) and the interned identifier.
struct ParseToken
{
	ParseTokenKind kind;
	union
	{
		TokenKind simple;
		uint8_t bit_int_width;
	};
	uint8_t flags;
	uint32_t location;
	TokenSpelling spelling;
	union
	{
		const Identifier* identifier;
		std::uintptr_t imaginary_value;
		const uint64_t* wide_imaginary_value;
		const uint64_t* floating_bits;
		uintptr_t bit_int_low;
		const uint64_t* bit_int_words;
		const StringLiteralValue* string_value;
	};

	bool is(TokenKind kind_) const { return kind == ParseTokenKind::Simple && simple == kind_; }
	bool is_identifier() const { return kind == ParseTokenKind::Identifier; }
	bool is_literal() const
	{
		return kind == ParseTokenKind::Literal || kind == ParseTokenKind::UserDefinedLiteral ||
			kind == ParseTokenKind::ImaginaryLiteral || kind == ParseTokenKind::FloatingLiteral ||
			kind == ParseTokenKind::BitIntLiteral;
	}
	bool is_end() const { return kind == ParseTokenKind::EndOfFile; }
	FundamentalType imaginary_type() const { return static_cast<FundamentalType>(flags & kImaginaryTypeMask); }
	uint64_t imaginary_component() const
	{
		if (sizeof(std::uintptr_t) < sizeof(uint64_t) && (flags & kWideImaginaryLiteral) != 0)
			return *wide_imaginary_value;
		return imaginary_value;
	}
};

// A retained token run (a member function body whose parsing waits for its
// class to be complete, 9.2p2), replayed through the same stream later.
// `origin` is the first token's ordinal in the translation unit, so a
// replayed token keeps the absolute position it had when it was read.
struct TokenRun
{
	const ParseToken* tokens;
	uint32_t size;
	uint64_t origin;
};

// A fatal error of phases 7-8 at a translation-unit location.
class ParseError : public std::runtime_error
{
public:
	ParseError(uint32_t location, const char* message) : std::runtime_error(message), location_(location) {}

	uint32_t location() const { return location_; }

private:
	uint32_t location_;
};

// The parser's cursor: a window of tokens pulled from the post-tokenizer on
// demand. Positions stay valid while the window is retained (a parser
// checkpoint or a body capture is open); otherwise consumed tokens are
// discarded, so the window is bounded by the longest speculative region
// rather than the translation unit. Replayed runs stack above the window.
class ParseTokenStream
{
public:
	ParseTokenStream(PostTokenizer& input, Arena& spellings, bool c_source);

	// Tokens are returned by value: a later peek may grow (reallocate) the
	// window and advance() may compact it, so no reference into it may be
	// held.
	ParseToken peek(uint32_t ahead = 0) { return buffered_token(ahead); }

	// Immediate predicates read the needed fields while the buffer is
	// stable. Callers that retain a token still obtain a value from peek().
	bool at(TokenKind kind, uint32_t ahead) { return buffered_token(ahead).is(kind); }
	bool at_identifier(uint32_t ahead) { return buffered_token(ahead).is_identifier(); }
	bool at_name(const Identifier* identifier)
	{
		const ParseToken& token = buffered_token(0);
		return token.is_identifier() && token.identifier == identifier;
	}
	bool at_kind_with_flag(TokenKind kind, uint8_t flag)
	{
		const ParseToken& token = buffered_token(0);
		return token.is(kind) && (token.flags & flag) != 0;
	}
	uint32_t location() { return buffered_token(0).location; }

	void advance();

	uint32_t position() const { return position_; }
	void rewind(uint32_t position) { position_ = position; }

	// The current token's ordinal in the translation unit's token sequence
	// (stable across window compaction and the same when replayed).
	uint64_t absolute_position() const { return (replays_.empty() ? base_ : replays_.back().run.origin) + position_; }

	// The current token's ordinal among the unit's own tokens: those after a
	// leading prelude (the built-in declarations, see set_prelude).
	uint64_t unit_position() const
	{
		const uint64_t position = absolute_position();
		return position >= prelude_tokens_ ? position - prelude_tokens_ : 0;
	}
	// Tokens located in [begin, end) at the start of the input form the
	// prelude.
	void set_prelude(uint32_t begin, uint32_t end)
	{
		prelude_begin_ = begin;
		prelude_end_ = end;
	}

	// While retained, positions stay valid (the window is not compacted).
	void retain() { ++retained_; }
	void release() { --retained_; }

	// Copies the tokens between two positions into `arena`.
	TokenRun capture(uint32_t begin, uint32_t end, Arena& arena) const;

	// Reads `run` (then EndOfFile) until pop_run() restores the position.
	void push_run(TokenRun run);
	void pop_run();

	telemetry::Counter tokens_read() const { return tokens_read_; }
	telemetry::SmallCounter peak_window() const { return peak_window_; }

	// Drops the identifier from the token sequence (GNU __restrict and
	// __extension__, which the course's grammar has no use for).
	void ignore(const Identifier* identifier) { ignored_[ignored_count_++] = identifier; }
	// Reads the identifier as an integer literal of the given source (GNU
	// __null, a null pointer constant of pointer width: 4.10p1).
	void read_as_literal(const Identifier* identifier, TokenSpelling literal)
	{
		literal_name_ = identifier;
		literal_spelling_ = literal;
	}

	// The packing (#pragma pack) in effect at a token ordinal, observed from
	// `state` as each token is taken from the input.
	void observe_pack(const uint32_t* state) { pack_state_ = state; }
	uint32_t pack_at(uint64_t ordinal) const;

	static void note_c_float_pragma(void* stream, CFloatPragma pragma, CPragmaSetting setting);
	void apply_c_float_pragmas(CFloatPragmas& state);
	static void note_visibility_pragma(void* stream, VisibilityPragma visibility);
	VisibilityPragma visibility_at(uint64_t ordinal) const
	{
		return visibility_changes_.empty() ? VisibilityPragma() : observed_visibility_at(ordinal);
	}

private:
	const ParseToken& buffered_token(uint32_t ahead)
	{
		if (!replays_.empty())
			return peek_replay(ahead);
		const uint32_t index = position_ + ahead;
		if (index >= window_.size())
			fill(index + 1);
		return window_[index];
	}
	struct Replay
	{
		TokenRun run;
		uint32_t saved_position;
	};

	const ParseToken& peek_replay(uint32_t ahead) const
	{
		const TokenRun& run = replays_.back().run;
		const uint32_t index = position_ + ahead;
		return __builtin_expect(index < run.size, 1) ? run.tokens[index] : end_;
	}
	void fill(uint32_t count);
	void pull();

	PostTokenizer& input_;
	Arena& spellings_;
	bool c_source_;
	std::vector<ParseToken> window_;
	std::vector<Replay> replays_;
	uint32_t position_;
	uint32_t retained_;
	// Tokens dropped from the front of the window so far.
	uint64_t base_;
	bool finished_;
	ParseToken end_;
	telemetry::Counter tokens_read_;
	telemetry::SmallCounter peak_window_;
	// Where the packing changed: (first token ordinal, packing), in order.
	struct PackChange
	{
		uint64_t ordinal;
		uint32_t pack;
	};
	const uint32_t* pack_state_;
	uint32_t last_pack_;
	std::vector<PackChange> pack_changes_;
	struct VisibilityChange
	{
		uint64_t ordinal;
		VisibilityPragma visibility;
	};
	std::vector<VisibilityChange> visibility_changes_;
	VisibilityPragma observed_visibility_at(uint64_t ordinal) const;
	struct FloatPragmaChange
	{
		uint64_t ordinal;
		CFloatPragmas settings;
	};
	std::vector<FloatPragmaChange> float_pragma_changes_;
	const Identifier* ignored_[4];
	uint32_t ignored_count_;
	uint32_t prelude_begin_ = 0;
	uint32_t prelude_end_ = 0;
	bool prelude_done_ = false;
	uint64_t prelude_tokens_ = 0;
	const Identifier* literal_name_;
	TokenSpelling literal_spelling_;
};

} // namespace syntax
