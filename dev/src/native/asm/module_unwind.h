#pragma once

#include <memory>
#include "native/asm/unwind_rules.h"
#include "native/object/object_file.h"
#include "native/object/host_unwind.h"
#include "native/target.h"

namespace native {
class ModuleLayout;

class ModuleUnwind
{
public:
	ModuleUnwind(object::ObjectFile& out, Target target);
	~ModuleUnwind();
	void begin(uint32_t anchor);
	void end(uint32_t anchor);
	void record(const assembly::ModuleLine& line, uint32_t anchor, assembly::SymbolLookup* symbols);
	bool pending() const { return !events_.empty(); }
	void flush(
		uint32_t section, const std::vector<uint32_t>& lines, const std::vector<uint32_t>& positions, uint32_t end);
	void boundary();
	void finish(const ModuleLayout& layout);

private:
	struct Procedure;
	struct Frame;
	void apply(const AssemblyCfiEvent& event, uint32_t section, uint32_t position);
	void emit(uint32_t end);
	void emit_frame(Frame& frame, uint32_t end, bool debug);
	uint32_t section_symbol(uint32_t section);
	object::ObjectFile& out_;
	Target target_;
	void pointer_relocation(uint32_t section, uint32_t offset, uint8_t encoding,
		const asm_model::SymbolReference& reference, bool personality);
	std::vector<AssemblyCfiEvent> events_;
	struct PositionedEvent
	{
		AssemblyCfiEvent event;
		uint32_t section;
		uint32_t offset;
		bool boundary;
	};
	std::vector<PositionedEvent> positioned_;
	std::unique_ptr<Procedure> current_;
	uint8_t sections_ = CfiEhFrame;
	bool started_ = false;
	std::vector<uint32_t> section_symbols_;
	struct Cie
	{
		CieDescription description;
		uint32_t personality;
		int64_t addend;
		uint32_t offset;
	};
	struct Frame
	{
		uint32_t section = 0;
		std::vector<Cie> cies;
	};
	Frame runtime_;
	Frame debug_;
};
} // namespace native
