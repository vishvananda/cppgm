#include "aarch64/link.h"
#include "aarch64/mir.h"

#include "native/link/runtime_library.h"

namespace aarch64 {

namespace obj = native::object;

namespace {
void load_symbol(Function& f, unsigned reg, uint32_t id)
{
	f.reference(Op::Adrp, Fixup::Page, id, reg);
	f.reference(Op::AddI, Fixup::PageOffset, id, reg, reg);
}

// x19 and x20 survive each callback. Walk the finalizer table backwards.
void run_array(Function& f, uint32_t label, uint32_t first, uint32_t last, bool reverse)
{
	load_symbol(f, 19, first);
	load_symbol(f, 20, last);
	f.bind(label);
	f.emit(Op::Sub, 9, 20, 19);
	f.reference(Op::Cbz, Fixup::Block, label + 1, 9);
	if (reverse)
		f.emit(Op::SubI, 20, 20, 0, 8 << 10);
	f.emit(Op::LdrX, 9, reverse ? 20 : 19);
	f.emit(Op::Blr, 0, 9);
	if (!reverse)
		f.emit(Op::AddI, 19, 19, 0, 8 << 10);
	f.reference(Op::B, Fixup::Block, label);
	f.bind(label + 1);
}
}

void add_startup(std::vector<obj::ObjectFile>& objects, bool darwin)
{
	objects.emplace_back();
	auto& object = objects.back();
	object.path = darwin ? "arm64 macOS startup" : "AArch64 Linux startup";
	object.architecture = target_model::Architecture::AArch64;
	const auto sec = object.add_section(".text", obj::SectionKind::Text, 4);
	std::vector<uint32_t> symbols;
	for (const char* name :
		{ "main", native::kInitArrayStart, native::kInitArrayEnd, native::kFiniArrayStart, native::kFiniArrayEnd })
	{
		obj::Symbol s;
		s.name = object.add_string(name);
		s.binding = obj::Binding::Global;
		symbols.push_back(object.add_symbol(s));
	}
	Function f;
	f.labels.resize(4);
	if (darwin)
	{
		f.emit(Op::SubI, 31, 31, 0, 96 << 10);
		for (unsigned r = 19; r <= 23; ++r)
			f.emit(Op::StrX, r, 31, 0, (r - 19) << 10);
		f.emit(Op::StrX, 29, 31, 0, 10 << 10);
		f.emit(Op::StrX, 30, 31, 0, 11 << 10);
		f.emit(Op::AddI, 29, 31, 0, 80 << 10);
		for (unsigned r = 0; r < 4; ++r)
			f.emit(Op::StrX, r, 31, 0, (5 + r) << 10);
	}
	run_array(f, 0, 1, 2, false);
	if (darwin)
		for (unsigned r = 0; r < 4; ++r)
			f.emit(Op::LdrX, r, 31, 0, (5 + r) << 10);
	else
	{
		f.emit(Op::LdrX, 0, 31);             // argc
		f.emit(Op::AddI, 1, 31, 0, 8 << 10); // argv
		f.emit(Op::Add, 2, 1, 0, 3 << 10);   // argv + argc
		f.emit(Op::AddI, 2, 2, 0, 8 << 10);  // envp
	}
	f.reference(Op::Bl, Fixup::Call, 0);
	f.emit(Op::Orr, 21, 31, 0);
	run_array(f, 2, 3, 4, true);
	f.emit(Op::Orr, 0, 31, 21);
	if (darwin)
	{
		for (unsigned r = 19; r <= 23; ++r)
			f.emit(Op::LdrX, r, 31, 0, (r - 19) << 10);
		f.emit(Op::LdrX, 29, 31, 0, 10 << 10);
		f.emit(Op::LdrX, 30, 31, 0, 11 << 10);
		f.emit(Op::AddI, 31, 31, 0, 96 << 10);
		f.emit(Op::Ret, 0, 30);
	}
	else
	{
		f.emit(Op::MovZ, 8, 0, 0, 94 << 5); // Linux exit_group
		f.emit(Op::Svc);
	}
	encode(f, symbols, object, sec);
	obj::Symbol s;
	s.name = object.add_string(native::kEntrySymbol);
	s.binding = obj::Binding::Global;
	s.type = obj::SymbolType::Function;
	s.section = sec;
	s.size = object.sections[sec].size;
	object.add_symbol(s);
}

} // namespace aarch64
