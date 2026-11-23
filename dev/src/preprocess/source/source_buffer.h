#pragma once

#include <cstddef>
#include <cstdint>
#include <iosfwd>
#include <stdexcept>
#include <string>

struct SourceTranslation
{
	bool c_line_endings = false;
	bool trigraphs = true;
	bool spaced_splices = false;
};

// An immutable physical source file image. Source offsets are byte offsets
// into this image; tokens and diagnostics refer to it instead of copying text.
//
// Construction skips a leading UTF-8 byte order mark and supplies a final
// new-line when needed. In C mode a standalone carriage return maps to a
// new-line in place, preserving the physical byte offsets.
class SourceBuffer
{
public:
	explicit SourceBuffer(std::string bytes, SourceTranslation translation = {});

	static SourceBuffer ReadFrom(std::istream& in, SourceTranslation translation = {});

	// Token spellings to be lexed again, as pasted tokens are: no byte order
	// mark is recognized, and a new-line always ends the text.
	static SourceBuffer ForTokenText(std::string text);

	const char* data() const { return bytes_.data(); }
	uint32_t size() const { return static_cast<uint32_t>(bytes_.size()); }

	// Offset of the first source character (after any byte order mark).
	uint32_t begin_offset() const { return begin_; }
	SourceTranslation translation() const { return translation_; }

private:
	struct TokenTextTag
	{};
	SourceBuffer(std::string bytes, TokenTextTag);

	std::string bytes_;
	uint32_t begin_;
	SourceTranslation translation_;
};

struct SourcePosition
{
	std::size_t line;
	std::size_t column;
};

// Maps non-decreasing offsets (from begin_offset()) to 1-based physical lines
// and byte columns in time proportional to the bytes passed over.
class SourceLineCursor
{
public:
	explicit SourceLineCursor(const SourceBuffer& source);

	SourcePosition advance_to(uint32_t offset);

private:
	const SourceBuffer& source_;
	uint32_t offset_;
	uint32_t line_start_;
	std::size_t line_;
};

// A fatal lexical error at a source offset.
class SourceError : public std::runtime_error
{
public:
	SourceError(uint32_t offset, const std::string& message) : std::runtime_error(message), offset_(offset) {}

	uint32_t offset() const { return offset_; }

private:
	uint32_t offset_;
};

// Renders `line:column: message` for a diagnostic about `source`.
std::string FormatSourceError(const SourceBuffer& source, const SourceError& error);
