#include "driver/native_assembly.h"

#include <iostream>

#include "asm/module_expand.h"
#include "native/asm/module.h"
#include "native/backend_error.h"
#include "preprocess/preprocessor.h"

namespace driver {
namespace {

std::string assembly_source(Preprocessor& preprocessor)
{
	std::string source;
	bool comment = false;
	for (;;)
	{
		const PPToken& token = preprocessor.next();
		if (token.kind == PPTokenKind::EndOfFile)
			return source;
		if ((token.flags & kStartOfLine) != 0)
		{
			source.push_back('\n');
			comment = false;
		}
		if (token.punctuator == kHashPunctuator)
			comment = true;
		if (comment || token.kind == PPTokenKind::WhitespaceSequence || token.kind == PPTokenKind::NewLine)
			continue;
		if ((token.flags & kLeadingSpace) != 0)
			source.push_back(' ');
		source.append(token.spelling, token.length);
	}
}

} // namespace

bool compile_native_assembly(
	const std::string& path, const PreprocessorOptions& base, native::Target target, native::object::ObjectFile& object)
{
	PreprocessorOptions options = base;
	options.assembler = true;
	options.language = SourceLanguage::C;
	options.cxx_edition = 0;
	options.builtin_declarations.clear();
	try
	{
		Preprocessor preprocessor(options, path);
		try
		{
			assembly::ModuleExpander expander;
			const auto lines = expander.expand(assembly::module_lines(assembly_source(preprocessor), {}));
			object.path = path;
			native::ModuleAssembler assembler(object, target);
			assembler.begin(asm_model::Dialect::Att);
			for (const auto& line : lines)
				assembler.declare(line);
			for (const auto& line : lines)
				assembler.append(line);
			assembler.finish();
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
