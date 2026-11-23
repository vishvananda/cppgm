#pragma once

#include <cstdint>
#include <vector>

#include "preprocess/source/source_buffer.h"

// SourceChar::code_point value past the last character.
constexpr int32_t kEndOfSource = -1;

// One character of the translated source together with the physical bytes
// it came from. `begin` is after any line splices deleted in front of the
// character, so `end - begin` differs from the character's UTF-8 length
// exactly when phase 1 replaced a trigraph or mapped a Windows-1252 byte.
struct SourceChar
{
	int32_t code_point;
	uint32_t begin;
	uint32_t end;
};

// Random-access view of translation phases 1 and 2 over a SourceBuffer.
// Decoding depends only on the offset and translation options. The reader
// retains diagnostic offsets separately from the decoded characters.
class TranslationReader
{
public:
	// Without `translate`, logical() is raw(): the buffer holds token
	// spellings that are already past phases 1-2.
	// With `crlf_splices`, a CR before the new-line of a splice is deleted
	// with it (hosted sources, as GCC reads them).
	explicit TranslationReader(const SourceBuffer& source, bool translate = true, bool crlf_splices = false,
		std::vector<uint32_t>* spaced_splice_offsets = nullptr)
		: bytes_(reinterpret_cast<const unsigned char*>(source.data())), size_(source.size()), translate_(translate),
		  crlf_splices_(crlf_splices), trigraphs_(source.translation().trigraphs),
		  spaced_splices_(source.translation().spaced_splices), spaced_splice_offsets_(spaced_splice_offsets)
	{}

	// Tests the physical suffix without crossing the start of this line.
	bool spliced_new_line(uint32_t from, uint32_t newline, bool consumed = false) const;

	// The next character at or after `offset` with physical characters
	// mapped (UTF-8, or Windows-1252 for a stray continuation byte),
	// trigraphs replaced and backslash-new-line splices deleted.
	// `comment` is the hosted lexer's opaque comment-byte view. It keeps
	// ASCII delimiters and phase 1-2 translation while ignoring byte encoding.
	SourceChar logical(uint32_t offset, bool comment = false) const
	{
		if (offset < size_)
		{
			const unsigned char byte = bytes_[offset];
			if ((byte < 0x80 && byte != '\\' && byte != '?') || (comment && byte >= 0x80))
				return SourceChar{ byte, offset, offset + 1 };
		}
		return logical_slow(offset, comment);
	}

	// The character at `offset` with only the physical character mapping
	// applied: the view inside a raw string literal, where trigraphs and
	// splices are reverted ([lex.pptoken] 2.5p3).
	SourceChar raw(uint32_t offset) const
	{
		if (offset < size_ && bytes_[offset] < 0x80)
			return SourceChar{ bytes_[offset], offset, offset + 1 };
		return raw_slow(offset);
	}

private:
	[[gnu::cold]] SourceChar logical_slow(uint32_t offset, bool comment) const;
	[[gnu::cold]] SourceChar raw_slow(uint32_t offset) const;
	SourceChar decode_multibyte(uint32_t offset) const;
	uint32_t skip_line_splices(uint32_t offset) const;
	uint32_t splice_end(uint32_t backslash, uint32_t after) const;
	void record_spaced_splice(uint32_t offset) const;

	const unsigned char* bytes_;
	uint32_t size_;
	bool translate_;
	bool crlf_splices_;
	bool trigraphs_;
	bool spaced_splices_;
	std::vector<uint32_t>* spaced_splice_offsets_;
};
