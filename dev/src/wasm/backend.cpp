#include "wasm/backend.h"

#include <cstdio>

#include "wasm/object_reader.h"

namespace wasm {

namespace {

bool write_file(const std::string& path, const void* data, size_t size, std::string& error)
{
	std::FILE* file = std::fopen(path.c_str(), "wb");
	if (file == nullptr)
	{
		error = "cannot write " + path;
		return false;
	}
	const bool written = size == 0 || std::fwrite(data, 1, size, file) == size;
	const bool closed = std::fclose(file) == 0;
	if (!written || !closed)
	{
		std::remove(path.c_str());
		error = "cannot write " + path;
		return false;
	}
	return true;
}

} // namespace

bool compile_object(
	lowir::Program& program, const backend::Options& options, Object& object, std::string& dump, std::string& error)
{
	return build_object(program, options, object, dump, error) &&
		(options.machine_ir.empty() || write_file(options.machine_ir, dump.data(), dump.size(), error));
}

bool output_objects(LinkInputs& inputs, const backend::Options& options, bool relocatable, std::string& error)
{
	auto& objects = inputs.objects;
	try
	{
		if (!relocatable)
		{
			if (options.target == target_model::Target::Wasm64)
				throw WasmError("use an external wasm64 linker to link these objects");
			add_runtime_inputs(inputs, options);
		}
		if (options.assembly_text)
		{
			if (objects.size() != 1 || !relocatable)
				throw WasmError("one source input is required for Wasm assembly output");
			std::string text;
			write_assembly(objects.front(), text);
			return write_file(options.output, text.data(), text.size(), error);
		}
		for (const Object& object : objects)
			validate_object(object);
		Bytes bytes;
		if (relocatable)
		{
			if (objects.size() != 1)
				throw WasmError("one source input is required for a Wasm object output");
			write_object(objects.front(), bytes);
		}
		else
			link_objects(objects, options, bytes);
		return options.output.empty() || write_file(options.output, bytes.data.data(), bytes.data.size(), error);
	}
	catch (const WasmError& failure)
	{
		error = failure.what();
		return false;
	}
}

bool compile_program(lowir::Program& program, const backend::Options& options, std::string& error)
{
	Object object;
	std::string dump = program.target == target_model::Target::Wasm64 ? "machine_ir wasm64 1\n"
																	  : "machine_ir wasm32 1\n";
	if (!compile_object(program, options, object, dump, error))
		return false;
	LinkInputs inputs;
	inputs.objects.push_back(std::move(object));
	try
	{
		for (const std::string& path : options.link_inputs)
			read_link_inputs(path, inputs);
	}
	catch (const WasmError& failure)
	{
		error = failure.what();
		return false;
	}
	backend::Options link = options;
	link.cxx_runtime = program.exception_abi == lowir::ExceptionAbi::Cxx;
	return output_objects(inputs, link, false, error);
}

} // namespace wasm
