#pragma once

#include <cstddef>
#include <string>
#include <vector>

#include "native/target.h"

namespace driver {

struct HostLinkOptions
{
	struct Argument
	{
		size_t before_input;
		std::string value;
	};

	bool internal = false;
	bool shared = false;
	int pie = 0;
	std::vector<Argument> arguments;
};

// Without an options destination, only consume the option and its operand.
bool parse_host_link_option(
	const std::vector<std::string>& args, size_t& index, size_t input_count, HostLinkOptions* options = nullptr);
bool host_link_available(native::Target target);
int run_host_linker(const std::vector<std::string>& command);

class HostLinkObjects
{
public:
	HostLinkObjects() = default;
	HostLinkObjects(const HostLinkObjects&) = delete;
	HostLinkObjects& operator=(const HostLinkObjects&) = delete;
	~HostLinkObjects();

	const std::string& add();

private:
	std::string directory_;
	std::vector<std::string> paths_;
};

} // namespace driver
