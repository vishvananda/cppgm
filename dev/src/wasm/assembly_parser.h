#pragma once

#include <map>

#include "preprocess/tokens/pp_token_cursor.h"
#include "wasm/object.h"

namespace wasm {
namespace assembly {

class Line
{
public:
	std::vector<PPToken> tokens;
	bool empty() const { return at_ == tokens.size(); }
	const PPToken& token() const;
	bool at(const char* spelling) const;
	bool accept(const char* spelling);
	void expect(const char* spelling);
	std::string word();
	std::string string();
	uint64_t integer();
	void done() const;

private:
	size_t at_ = 0;
};

enum class Kind : uint8_t
{
	Unknown,
	Function,
	Global,
	Data
};
struct Symbol
{
	lowir::NameId name;
	Kind kind = Kind::Unknown;
	uint32_t detail = lowir::kNoId;
	uint32_t flags = 2;
	uint32_t offset = 0;
	uint32_t size = 0;
	bool defined = false;
};
struct FunctionRecord
{
	Signature signature;
	std::string import_module;
	std::string import_name;
	bool explicit_module = false;
	bool explicit_name = false;
	Function body;
	uint32_t symbol;
	bool typed = false;
};
struct GlobalRecord
{
	uint32_t symbol;
	ValueType type = ValueType::I32;
	bool mutable_value = true;
	bool typed = false;
};

class Parser
{
public:
	Parser(PPTokenCursor& input, uint32_t& location, bool wide_addresses)
		: input_(input), location_(location), names_(arena_), wide_addresses_(wide_addresses)
	{}
	void run(Object& object);

private:
	bool next_line(Line& line);
	uint32_t symbol(const std::string& name, Kind kind = Kind::Unknown);
	void label(Line& line);
	void directive(const std::string& name, Line& line);
	void function_type(Line& line);
	void global_type(Line& line);
	void import_binding(Line& line, bool module);
	void data_label(uint32_t id);
	ObjectData& data_segment();
	bool data_directive(const std::string& name, Line& line);
	uint64_t data_value(Line& line, uint32_t width);
	void instruction(const std::string& name, Line& line);
	void emit(Object& object);
	ValueType type(Line& line);
	void type_list(Line& line, std::vector<ValueType>& types);

	PPTokenCursor& input_;
	uint32_t& location_;
	PPToken next_ = {};
	bool started_ = false;
	Arena arena_;
	lowir::NameTable names_;
	std::vector<uint32_t> by_name_;
	std::vector<Symbol> symbols_;
	std::vector<FunctionRecord> functions_;
	std::vector<GlobalRecord> globals_;
	std::vector<ObjectData> data_;
	std::map<std::string, uint32_t> sections_;
	std::vector<std::pair<uint32_t, uint32_t>> initializers_;
	Bytes features_;
	std::string section_ = ".text";
	uint32_t pending_label_ = lowir::kNoId;
	uint32_t active_ = lowir::kNoId;
	bool memory_ = false;
	bool bulk_ = false;
	bool wide_addresses_;
};

} // namespace assembly
} // namespace wasm
