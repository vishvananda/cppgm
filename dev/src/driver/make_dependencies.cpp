#include "driver/make_dependencies.h"

#include <ostream>

namespace driver {

std::string quote_make_name(const std::string& name)
{
	std::string quoted;
	size_t backslashes = 0;
	for (char c : name)
	{
		// Make counts the backslashes before whitespace when unquoting it,
		// so preserve an existing run as well as escaping the whitespace.
		if (c == ' ' || c == '\t')
			quoted.append(backslashes + 1, '\\');
		else if (c == '#')
			quoted.push_back('\\');
		else if (c == '$')
			quoted.push_back('$');
		quoted.push_back(c);
		backslashes = c == '\\' ? backslashes + 1 : 0;
	}
	return quoted;
}

void write_make_rule(std::ostream& out, const MakeDependencies& options, const std::string& default_target,
	const std::string& source, const std::vector<std::string>& headers)
{
	size_t column = 0;
	if (options.targets.empty())
	{
		const std::string quoted = quote_make_name(default_target);
		out << quoted;
		column = quoted.size();
	}
	else
	{
		for (const std::string& target : options.targets)
		{
			if (column != 0)
				out << ' ';
			out << target;
			column += target.size() + 1;
		}
	}
	out << ':';
	++column;
	const auto prerequisite = [&](const std::string& path) {
		const std::string quoted = quote_make_name(path);
		if (column + 1 + quoted.size() > 75)
		{
			out << " \\\n";
			column = 0;
		}
		out << ' ' << quoted;
		column += 1 + quoted.size();
	};
	if (!source.empty())
		prerequisite(source);
	for (const std::string& header : headers)
		prerequisite(header);
	out << '\n';
	if (options.phony)
		for (const std::string& header : headers)
			out << quote_make_name(header) << ":\n";
}

} // namespace driver
