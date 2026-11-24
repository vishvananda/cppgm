#include "preprocess/preprocessor.h"
#include "preprocess/source/embedded_resource.h"

#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#include <algorithm>
#include <array>
#include <cerrno>
#include <cstring>
#include <limits>

namespace {

bool IsPunctuatorToken(const PPToken& token, TokenKind kind)
{
	return token.kind == PPTokenKind::PreprocessingOpOrPunc && IsPunctuator(token.punctuator, kind);
}

enum class Parameter : uint8_t
{
	Limit,
	Prefix,
	Suffix,
	IfEmpty,
	Count
};

struct TokenRange
{
	std::size_t first;
	std::size_t last;
};

class LimitTokens final : public PPTokenCursor
{
public:
	LimitTokens(const std::vector<PPToken>& tokens, TokenRange range)
		: tokens_(tokens), current_(range.first), end_(range.last)
	{
		eof_.kind = PPTokenKind::EndOfFile;
		eof_.spelling = "";
	}

	const PPToken& next() override { return current_ == end_ ? eof_ : tokens_[current_++]; }

private:
	const std::vector<PPToken>& tokens_;
	std::size_t current_;
	std::size_t end_;
	PPToken eof_{};
};

std::string ReadResourceName(const std::vector<PPToken>& tokens, std::size_t& i, bool& angle, uint32_t location)
{
	if (tokens.empty())
		throw PreprocessError(location, "expected an embed resource name");
	const PPToken& first = tokens[i++];
	if (first.kind == PPTokenKind::HeaderName || (first.kind == PPTokenKind::StringLiteral && first.spelling[0] == '"'))
	{
		angle = first.spelling[0] == '<';
		if (first.length > 2)
			return std::string(first.spelling + 1, first.length - 2);
	}
	else if (IsPunctuatorToken(first, TokenKind::OP_LT))
	{
		angle = true;
		std::string name;
		while (i < tokens.size())
		{
			const PPToken& token = tokens[i++];
			if (IsPunctuatorToken(token, TokenKind::OP_GT))
			{
				if (!name.empty() && name.find('>') == std::string::npos)
					return name;
				break;
			}
			if ((token.flags & kLeadingSpace) != 0)
				name.push_back(' ');
			name.append(token.spelling, token.length);
		}
	}
	throw PreprocessError(location, "expected a nonempty embed resource name");
}

Parameter ReadParameterName(const std::vector<PPToken>& tokens, std::size_t& i, uint32_t location)
{
	const PPToken& token = tokens[i++];
	if (token.kind != PPTokenKind::Identifier)
		throw PreprocessError(location, "expected an embed parameter");
	if (i < tokens.size() && IsPunctuatorToken(tokens[i], TokenKind::OP_COLON2))
	{
		if (++i == tokens.size() || tokens[i++].kind != PPTokenKind::Identifier)
			throw PreprocessError(location, "expected a name after the embed parameter namespace");
		return Parameter::Count;
	}

	const char* name = token.spelling;
	uint32_t length = token.length;
	if (length > 4 && std::memcmp(name, "__", 2) == 0 && std::memcmp(name + length - 2, "__", 2) == 0)
	{
		name += 2;
		length -= 4;
	}
	if (length == 5 && std::memcmp(name, "limit", 5) == 0)
		return Parameter::Limit;
	if (length == 6 && std::memcmp(name, "prefix", 6) == 0)
		return Parameter::Prefix;
	if (length == 6 && std::memcmp(name, "suffix", 6) == 0)
		return Parameter::Suffix;
	if (length == 8 && std::memcmp(name, "if_empty", 8) == 0)
		return Parameter::IfEmpty;
	return Parameter::Count;
}

TokenRange ReadParameterTokens(const std::vector<PPToken>& tokens, std::size_t& i, uint32_t location)
{
	if (i == tokens.size() || !IsPunctuatorToken(tokens[i], TokenKind::OP_LPAREN))
		return { i, i };
	++i;
	const std::size_t start = i;
	std::vector<TokenKind> closers;
	for (; i < tokens.size(); ++i)
	{
		const PPToken& token = tokens[i];
		if (IsPunctuatorToken(token, TokenKind::OP_LPAREN))
			closers.push_back(TokenKind::OP_RPAREN);
		else if (IsPunctuatorToken(token, TokenKind::OP_LSQUARE))
			closers.push_back(TokenKind::OP_RSQUARE);
		else if (IsPunctuatorToken(token, TokenKind::OP_LBRACE))
			closers.push_back(TokenKind::OP_RBRACE);
		else if (IsPunctuatorToken(token, TokenKind::OP_RPAREN) || IsPunctuatorToken(token, TokenKind::OP_RSQUARE) ||
			IsPunctuatorToken(token, TokenKind::OP_RBRACE))
		{
			if (closers.empty() && IsPunctuatorToken(token, TokenKind::OP_RPAREN))
				return { start, i++ };
			if (closers.empty() || !IsPunctuatorToken(token, closers.back()))
				throw PreprocessError(location, "unbalanced tokens in an embed parameter");
			closers.pop_back();
		}
	}
	throw PreprocessError(location, "missing closing delimiter in an embed parameter");
}

std::vector<PPToken> CopyTokens(const std::vector<PPToken>& tokens, TokenRange range)
{
	return { tokens.begin() + range.first, tokens.begin() + range.last };
}

bool ResourceSize(const std::string& path, uint64_t& size)
{
	struct stat info;
	if (stat(path.c_str(), &info) != 0 || !S_ISREG(info.st_mode))
		return false;
	size = static_cast<uint64_t>(info.st_size);
	return true;
}

struct DecimalByte
{
	char text[4];
	uint8_t length;
};

std::array<DecimalByte, 256> DecimalBytes()
{
	std::array<DecimalByte, 256> result{};
	for (unsigned i = 0; i < result.size(); ++i)
	{
		DecimalByte& byte = result[i];
		if (i >= 100)
			byte.text[byte.length++] = static_cast<char>('0' + i / 100);
		if (i >= 10)
			byte.text[byte.length++] = static_cast<char>('0' + i / 10 % 10);
		byte.text[byte.length++] = static_cast<char>('0' + i % 10);
	}
	return result;
}

} // namespace

struct Preprocessor::EmbedOperand
{
	std::string name;
	std::array<TokenRange, static_cast<std::size_t>(Parameter::Count)> parameters{};
	uint64_t limit = std::numeric_limits<uint64_t>::max();
	bool angle = false;
	bool supported = true;

	TokenRange range(Parameter parameter) const { return parameters[static_cast<std::size_t>(parameter)]; }
};

Preprocessor::EmbedOperand Preprocessor::parse_embed(const std::vector<PPToken>& tokens, uint32_t location)
{
	EmbedOperand result;
	std::size_t i = 0;
	result.name = ReadResourceName(tokens, i, result.angle, location);
	while (i < tokens.size())
	{
		const Parameter parameter = ReadParameterName(tokens, i, location);
		const bool has_arguments = i < tokens.size() && IsPunctuatorToken(tokens[i], TokenKind::OP_LPAREN);
		const TokenRange range = ReadParameterTokens(tokens, i, location);
		if (parameter == Parameter::Count)
		{
			result.supported = false;
			continue;
		}
		if (!has_arguments)
			throw PreprocessError(location, "embed parameter requires parentheses");
		TokenRange& slot = result.parameters[static_cast<std::size_t>(parameter)];
		if (slot.first != 0)
			throw PreprocessError(location, "duplicate embed parameter");
		slot = range;
	}
	const TokenRange range = result.range(Parameter::Limit);
	if (range.first != 0)
	{
		LimitTokens cursor(tokens, range);
		const auto bound = evaluator_.evaluate_embed_limit(cursor);
		if (bound.status != ControllingExpressionStatus::Valid ||
			(!bound.value.is_unsigned && static_cast<int64_t>(bound.value.bits) < 0))
			throw PreprocessError(location, "embed limit requires a nonnegative integer preprocessing expression");
		result.limit = bound.value.bits;
	}
	return result;
}

bool Preprocessor::find_embed(const EmbedOperand& operand, std::string& path, uint64_t& size)
{
	if (operand.name.find('\0') != std::string::npos)
		return false;
	if (operand.name.front() == '/')
		return ResourceSize(path = operand.name, size);
	if (!operand.angle)
	{
		const std::string& current = source_.current_inclusion().entry_name();
		const std::size_t slash = current.rfind('/');
		path.assign(current, 0, slash == std::string::npos ? 0 : slash + 1);
		path += operand.name;
		if (ResourceSize(path, size))
			return true;
	}
	for (const std::string& directory : embed_paths_)
	{
		path = directory;
		if (!path.empty() && path.back() != '/')
			path.push_back('/');
		path += operand.name;
		if (ResourceSize(path, size))
			return true;
	}
	return false;
}

unsigned Preprocessor::has_embed(const std::vector<PPToken>& tokens, uint32_t location)
{
	const EmbedOperand operand = parse_embed(tokens, location);
	std::string path;
	uint64_t size;
	if (!operand.supported || !find_embed(operand, path, size))
		return 0;
	embed_dependencies_.emplace_back(std::move(path), in_system_header(location));
	return std::min(size, operand.limit) == 0 ? 2 : 1;
}

void Preprocessor::run_embed(const PPToken& directive)
{
	if (!allow_c_extension(directive.begin, CEdition::C23, "#embed is a C23 extension"))
		throw PreprocessError(directive.begin, "#embed requires C23");

	source_.request_header_name();
	const PPToken first = source_.next_in_line();
	line_tokens_.clear();
	if (first.kind != PPTokenKind::NewLine)
	{
		source_.begin_line_input(&first);
		directive_expander_->set_controlling_expression(true);
		directive_expander_->set_embed_operand(true);
		read_replaced_line(line_tokens_);
		directive_expander_->set_embed_operand(false);
		directive_expander_->set_controlling_expression(false);
		source_.end_line_input();
	}
	const EmbedOperand operand = parse_embed(line_tokens_, directive.begin);
	if (!operand.supported)
		throw PreprocessError(directive.begin, "unsupported embed parameter");
	std::string path;
	uint64_t size;
	if (!find_embed(operand, path, size))
		throw PreprocessError(directive.begin, "embed resource not found");

	size = std::min(size, operand.limit);
	std::vector<PPToken> prefix = CopyTokens(
		line_tokens_, operand.range(size ? Parameter::Prefix : Parameter::IfEmpty));
	std::vector<PPToken> suffix;
	if (size != 0)
		suffix = CopyTokens(line_tokens_, operand.range(Parameter::Suffix));
	if (size != 0 || !prefix.empty())
		source_.embed(std::unique_ptr<EmbeddedResource>(
			new EmbeddedResource(path, size, directive.begin, std::move(prefix), std::move(suffix))));
	embed_dependencies_.emplace_back(std::move(path), in_system_header(directive.begin));
}

EmbeddedResource::EmbeddedResource(
	const std::string& path, uint64_t size, uint32_t location, std::vector<PPToken> prefix, std::vector<PPToken> suffix)
	: prefix_(std::move(prefix)), suffix_(std::move(suffix)),
	  fd_(size == 0 ? -1 : open(path.c_str(), O_RDONLY | O_NONBLOCK)), unread_(size), location_(location)
{
	if (size != 0 && fd_ < 0)
		throw PreprocessError(location_, "cannot open embed resource");
}

EmbeddedResource::~EmbeddedResource()
{
	if (fd_ >= 0)
		close(fd_);
}

unsigned char EmbeddedResource::read_byte()
{
	if (byte_cursor_ == bytes_buffered_)
	{
		const std::size_t count = static_cast<std::size_t>(std::min<uint64_t>(bytes_.size(), unread_));
		ssize_t received;
		do
		{
			received = read(fd_, bytes_.data(), count);
		} while (received < 0 && errno == EINTR);
		if (received <= 0)
			throw PreprocessError(location_, "cannot read embed resource");
		bytes_buffered_ = static_cast<std::size_t>(received);
		unread_ -= bytes_buffered_;
		byte_cursor_ = 0;
	}
	return bytes_[byte_cursor_++];
}

bool EmbeddedResource::take_token(PPToken& token)
{
	if (parameter_cursor_ < prefix_.size())
	{
		token = prefix_[parameter_cursor_++];
		return true;
	}
	if (unread_ == 0 && byte_cursor_ == bytes_buffered_)
	{
		const std::size_t i = parameter_cursor_ - prefix_.size();
		if (i == suffix_.size())
			return false;
		token = suffix_[i];
		++parameter_cursor_;
		return true;
	}
	token = PPToken();
	token.begin = token.end = location_;
	if (needs_comma_)
	{
		token.kind = PPTokenKind::PreprocessingOpOrPunc;
		token.punctuator = PunctuatorOf(TokenKind::OP_COMMA);
		token.spelling = ",";
		token.length = 1;
	}
	else
	{
		static const auto decimal_bytes = DecimalBytes();
		const DecimalByte& byte = decimal_bytes[read_byte()];
		token.kind = PPTokenKind::PPNumber;
		token.spelling = byte.text;
		token.length = byte.length;
	}
	needs_comma_ = !needs_comma_;
	return true;
}

bool EmbeddedResource::next(PPToken& token)
{
	if (!take_token(token))
		return false;
	if (first_)
	{
		first_ = false;
		token.flags |= kStartOfLine | kLeadingSpace;
	}
	return true;
}
