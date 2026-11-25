#include "target/target.h"

namespace target {

bool parse(const std::string& text, Target& result)
{
	// The initial Apple Silicon profile has a macOS 11 deployment floor.
	for (const char* arch : { "arm64-apple-", "aarch64-apple-" })
		for (const char* os : { "macos", "macos11", "macos11.0", "macos11.0.0", "darwin", "darwin20" })
			if (text == std::string(arch) + os)
			{
				result = Target::AArch64MacOS;
				return true;
			}
	if (text == spelling(Target::AArch64Linux) || text == "aarch64-unknown-linux-gnu")
	{
		result = Target::AArch64Linux;
		return true;
	}
	if (text == spelling(Target::I386Linux) || text == "i686-linux-gnu" || text == "i386-unknown-linux-gnu")
	{
		result = Target::I386Linux;
		return true;
	}
	if (text == spelling(Target::Wasm32))
	{
		result = Target::Wasm32;
		return true;
	}
	if (text == spelling(Target::Wasi))
	{
		result = Target::Wasi;
		return true;
	}
	if (text == spelling(Target::Emscripten))
	{
		result = Target::Emscripten;
		return true;
	}
	const std::string darwin = "x86_64-apple-darwin";
	const std::string macos = "x86_64-apple-macos";
	if (text == "macos" || text == "darwin" || text == "osx" || text.compare(0, darwin.size(), darwin) == 0 ||
		text.compare(0, macos.size(), macos) == 0)
	{
		result = Target::MacOS;
		return true;
	}
	if (text == "linux")
	{
		result = Target::Linux;
		return true;
	}
	if (text.compare(0, 7, "x86_64-") != 0)
		return false;
	const size_t at = text.find("linux", 7);
	const bool vendor = at == 7 || (at != std::string::npos && text[at - 1] == '-' && text.find('-', 7) == at - 1);
	if (!vendor || (at + 5 != text.size() && text[at + 5] != '-'))
		return false;
	result = Target::Linux;
	return true;
}

} // namespace target
