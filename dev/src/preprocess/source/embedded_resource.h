#pragma once

#include <array>
#include <string>
#include <vector>

#include "preprocess/lexer/pp_token.h"

// The selected byte range, fetched only as its tokens are consumed. The
// spellings of byte values are shared and remain valid after the stream ends.
class EmbeddedResource
{
public:
	EmbeddedResource(const std::string& path, uint64_t size, uint32_t location, std::vector<PPToken> prefix,
		std::vector<PPToken> suffix);
	~EmbeddedResource();
	EmbeddedResource(const EmbeddedResource&) = delete;
	EmbeddedResource& operator=(const EmbeddedResource&) = delete;

	bool next(PPToken& token);

private:
	bool take_token(PPToken& token);
	unsigned char read_byte();

	std::vector<PPToken> prefix_;
	std::vector<PPToken> suffix_;
	int fd_;
	uint64_t unread_;
	uint32_t location_;
	std::size_t parameter_cursor_ = 0;
	std::size_t byte_cursor_ = 0;
	std::size_t bytes_buffered_ = 0;
	std::array<unsigned char, 4096> bytes_;
	bool needs_comma_ = false;
	bool first_ = true;
};
