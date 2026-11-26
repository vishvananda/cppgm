#include "driver/native_assembly.h"

#include <iostream>

#include "asm/module_expand.h"
#include "native/asm/module.h"
#include "native/backend_error.h"
#include "preprocess/preprocessor.h"

namespace driver {

std::string assembly_source(Preprocessor& preprocessor, native::Target target)
{
	std::string source;
	bool comment = false;
	const bool hash_comment = !target_model::is_aarch64(target);
	for (;;)
	{
		const PPToken& token = preprocessor.next();
		if (token.kind == PPTokenKind::EndOfFile)
			return source;
		if ((token.flags & kStartOfLine) != 0)
		{
			if (!source.empty())
				source.push_back('\n');
			comment = false;
		}
		if (hash_comment && token.punctuator == kHashPunctuator)
			comment = true;
		if (comment || token.kind == PPTokenKind::WhitespaceSequence || token.kind == PPTokenKind::NewLine)
			continue;
		if ((token.flags & kLeadingSpace) != 0 && !source.empty() && source.back() != '\n')
			source.push_back(' ');
		source.append(token.spelling, token.length);
	}
}

PreprocessorOptions assembly_preprocessor_options(const PreprocessorOptions& base)
{
	PreprocessorOptions options = base;
	options.assembler = true;
	options.language = SourceLanguage::C;
	options.cxx_edition = 0;
	options.builtin_declarations.clear();
	return options;
}

bool compile_native_assembly(const std::string& path, const PreprocessorOptions& base, native::Target target,
	native::object::ObjectFile& object, std::vector<std::string>* headers, bool include_system_headers, bool code16gcc)
{
	const std::string name = path == "-" ? "<stdin>" : path;
	try
	{
		const PreprocessorOptions options = assembly_preprocessor_options(base);
		Preprocessor preprocessor(options, name, path == "-" ? &std::cin : nullptr);
		try
		{
			const auto dialect = target_model::is_aarch64(target) ? asm_model::Dialect::AArch64
																  : asm_model::Dialect::Att;
			assembly::ModuleExpander expander(dialect);
			const auto lines = expander.expand(
				assembly::module_lines(assembly_source(preprocessor, target), {}, {}, dialect));
			object.path = path;
			object.architecture = target_model::describe(target).architecture;
			native::ModuleAssembler assembler(object, target, code16gcc);
			assembler.begin(dialect);
			for (const auto& line : lines)
				assembler.declare(line);
			for (const auto& line : lines)
				assembler.append(line);
			assembler.finish();
			if (headers != nullptr)
				*headers = preprocessor.dependency_headers(include_system_headers);
			return true;
		}
		catch (const PreprocessError& failure)
		{
			std::cerr << "ERROR: " << preprocessor.describe(failure) << '\n';
			return false;
		}
	}
	catch (const assembly::AssemblyError& failure)
	{
		std::cerr << "ERROR: " << path << ':' << failure.line << ": " << failure.message << '\n';
	}
	catch (const native::BackendError& failure)
	{
		std::cerr << "ERROR: " << path << ": " << failure.what() << '\n';
	}
	catch (const SourceError& failure)
	{
		std::cerr << "ERROR: " << path << ": " << failure.what() << '\n';
	}
	catch (const PreprocessError& failure)
	{
		std::cerr << "ERROR: " << path << ": " << failure.what() << '\n';
	}
	return false;
}

} // namespace driver
