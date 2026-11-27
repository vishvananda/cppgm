#include "wasm/assembly_parser.h"

#include <algorithm>

#include "wasm/object_reader.h"

namespace wasm {
namespace assembly {

ObjectData& Parser::data_segment()
{
	if (section_ == ".globals" || section_.compare(0, 5, ".text") == 0 ||
		section_.compare(0, 16, ".custom_section.") == 0 || section_.compare(0, 11, ".init_array") == 0)
		throw WasmError("Wasm data directive requires a data section");
	const auto section = sections_.emplace(section_, static_cast<uint32_t>(data_.size()));
	if (section.second)
	{
		ObjectData data;
		data.name = section_;
		data_.push_back(std::move(data));
	}
	return data_[section.first->second];
}

void Parser::data_label(uint32_t id)
{
	auto& bytes = data_segment().contents.bytes.data;
	auto& entry = symbols_[id];
	symbol(names_.spelling(entry.name), Kind::Data);
	entry.detail = sections_.at(section_);
	entry.offset = static_cast<uint32_t>(bytes.size());
}

uint64_t Parser::data_value(Line& line, uint32_t width)
{
	if (line.token().kind == PPTokenKind::PPNumber || line.at("+") || line.at("-"))
		return line.integer();
	const auto id = symbol(line.word());
	const bool subtract = line.accept("-");
	if (subtract && (line.token().kind == PPTokenKind::Identifier || line.at(".")))
	{
		const auto right = symbol(line.word());
		const auto& left = symbols_[id];
		const auto& base = symbols_[right];
		if (left.kind != Kind::Data || base.kind != Kind::Data || !left.defined || !base.defined ||
			left.detail != base.detail)
			throw WasmError("Wasm assembly difference requires two defined labels in the same data section");
		return uint64_t(left.offset) - base.offset;
	}
	if (width != (wide_addresses_ ? 8u : 4u))
		throw WasmError("Wasm data relocation width must match its address type");
	int64_t addend = 0;
	if (subtract)
		addend = static_cast<int64_t>(0 - line.integer());
	else if (line.at("+"))
		addend = static_cast<int64_t>(line.integer());
	auto& data = data_segment().contents;
	data.relocations.push_back({ wide_addresses_ ? RelocationKind::MemoryAddressI64 : RelocationKind::MemoryAddressI32,
		static_cast<uint32_t>(data.bytes.data.size()), id, addend });
	return 0;
}

bool Parser::data_directive(const std::string& name, Line& line)
{
	if (name == ".type")
	{
		const auto identity = line.word();
		line.expect(",");
		line.expect("@");
		const auto kind = line.word();
		if (kind != "function" && kind != "object")
			throw WasmError("unsupported Wasm assembly symbol type: " + kind);
		symbol(identity, kind == "function" ? Kind::Function : Kind::Data);
		return true;
	}
	if (name == ".size")
	{
		const auto id = symbol(line.word());
		line.expect(",");
		const uint64_t size = data_value(line, 0);
		if (size > UINT32_MAX)
			throw WasmError("overflowing Wasm assembly symbol size");
		symbols_[id].size = static_cast<uint32_t>(size);
		return true;
	}
	if (name == ".p2align")
	{
		const auto log = line.integer();
		if (log > 31)
			throw WasmError("overflowing Wasm assembly alignment");
		uint64_t fill = 0;
		if (line.accept(","))
			fill = line.integer();
		if (fill > 255)
			throw WasmError("invalid Wasm assembly padding byte");
		if (section_.compare(0, 5, ".text") != 0 && section_ != ".globals" &&
			section_.compare(0, 11, ".init_array") != 0)
		{
			auto& data = data_segment();
			const uint32_t mask = (uint32_t(1) << log) - 1;
			auto& bytes = data.contents.bytes.data;
			const uint64_t end = (bytes.size() + mask) & ~uint64_t(mask);
			if (end > UINT32_MAX)
				throw WasmError("overflowing Wasm assembly data size");
			bytes.resize(end, static_cast<uint8_t>(fill));
			data.alignment = std::max(data.alignment, static_cast<uint32_t>(log));
		}
		return true;
	}
	const unsigned width = name == ".int8" || name == ".byte" ? 1
		: name == ".int16" || name == ".short"                ? 2
		: name == ".int32" || name == ".long"                 ? 4
		: name == ".int64" || name == ".quad"                 ? 8
															  : 0;
	if (width != 0)
	{
		do
		{
			const auto value = data_value(line, width);
			data_segment().contents.bytes.fixed(value, width);
		} while (line.accept(","));
		return true;
	}
	if (name == ".ascii" || name == ".incbin")
	{
		const auto text = line.string();
		auto& output = data_segment().contents.bytes;
		if (name == ".incbin")
			output.append(read_link_file(text));
		else
			output.data.insert(output.data.end(), text.begin(), text.end());
		return true;
	}
	if (name == ".skip" || name == ".zero")
	{
		const auto count = line.integer();
		auto& output = data_segment().contents.bytes.data;
		if (count > UINT32_MAX - output.size())
			throw WasmError("overflowing Wasm assembly data size");
		output.resize(output.size() + count);
		return true;
	}
	return false;
}

} // namespace assembly
} // namespace wasm
