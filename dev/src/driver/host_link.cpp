#include "driver/host_link.h"

#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "support/tool_errors.h"

#if (defined(__linux__) || defined(__APPLE__)) && !defined(__wasm__)
#include <spawn.h>
#include <sys/wait.h>
#include <unistd.h>
extern char** environ;
#endif

namespace driver {

bool parse_host_link_option(
	const std::vector<std::string>& args, size_t& index, size_t input_count, HostLinkOptions* options)
{
	const std::string& arg = args[index];
	if (arg == "--internal-link")
	{
		if (options != nullptr)
			options->internal = true;
		return true;
	}
	const bool operand = arg == "-Xlinker";
	const bool pie = arg == "-pie" || arg == "-no-pie";
	const bool shared = arg == "-shared";
	if (!operand && !pie && !shared && arg != "-static" && arg.compare(0, 4, "-Wl,") != 0 &&
		arg.compare(0, 9, "-fuse-ld=") != 0)
		return false;
	if (operand && index + 1 == args.size())
		throw InvocationError("missing argument after -Xlinker");
	if (options != nullptr)
	{
		if (pie)
			options->pie = arg == "-pie" ? 1 : -1;
		options->shared |= shared;
		options->arguments.push_back({ input_count, arg });
		if (operand)
			options->arguments.push_back({ input_count, args[index + 1] });
	}
	index += operand;
	return true;
}

bool host_link_available(native::Target target)
{
#if (defined(__linux__) || defined(__APPLE__)) && !defined(__wasm__)
	return target == native::host_target();
#else
	(void)target;
	return false;
#endif
}

int run_host_linker(std::vector<std::string>& command)
{
#if (defined(__linux__) || defined(__APPLE__)) && !defined(__wasm__)
	std::vector<char*> argv;
	argv.reserve(command.size() + 1);
	for (std::string& arg : command)
		argv.push_back(const_cast<char*>(arg.c_str()));
	argv.push_back(nullptr);

	pid_t pid;
	const int error = posix_spawnp(&pid, argv.front(), nullptr, nullptr, argv.data(), environ);
	if (error != 0)
		throw InputOutputError("cannot start host link driver " + command.front() + ": " + std::strerror(error));

	int status;
	pid_t waited;
	do
		waited = waitpid(pid, &status, 0);
	while (waited < 0 && errno == EINTR);
	if (waited < 0)
		throw InputOutputError("cannot wait for host link driver: " + std::string(std::strerror(errno)));
	return WIFEXITED(status) ? WEXITSTATUS(status) : EXIT_FAILURE;
#else
	(void)command;
	throw InvocationError("host linking is unavailable on this platform");
#endif
}

HostLinkObjects::~HostLinkObjects()
{
#if (defined(__linux__) || defined(__APPLE__)) && !defined(__wasm__)
	for (const std::string& path : paths_)
		std::remove(path.c_str());
	if (!directory_.empty())
		rmdir(directory_.c_str());
#endif
}

const std::string& HostLinkObjects::add()
{
#if (defined(__linux__) || defined(__APPLE__)) && !defined(__wasm__)
	if (directory_.empty())
	{
		char name[] = "/tmp/cppgm-link-XXXXXX";
		if (mkdtemp(name) == nullptr)
			throw InputOutputError("cannot create a host link directory: " + std::string(std::strerror(errno)));
		directory_ = name;
	}
	paths_.push_back(directory_ + "/" + std::to_string(paths_.size()) + ".o");
	return paths_.back();
#else
	throw InvocationError("host linking is unavailable on this platform");
#endif
}

} // namespace driver
