#pragma once

#include "native/object/object_file.h"

namespace aarch64 {

enum Relocation : uint32_t
{
	Abs64 = 257,
	Abs32 = 258,
	Prel32 = 261,
	AdrPrelLo21 = 274,
	AdrPrelPage21 = 275,
	AddLo12 = 277,
	Ldst8Lo12 = 278,
	TestBranch14 = 279,
	CondBranch19 = 280,
	Jump26 = 282,
	Call26 = 283,
	Ldst16Lo12 = 284,
	Ldst32Lo12 = 285,
	Ldst64Lo12 = 286,
	Ldst128Lo12 = 299,
	GotPage = 311,
	GotLo12 = 312,
	TlsGotPage = 541,
	TlsGotLo12 = 542,
	TlsAddHi12 = 549,
	TlsAddLo12 = 551,
	// Backend-only Mach-O fixups. Never written to an ELF object.
	DarwinTlvPage = 1024,
	DarwinTlvLo12,
	DarwinPointerToGot
};

bool apply_relocation(uint32_t type, uint8_t* field, uint64_t room, uint64_t value, uint64_t place, std::string& error);
bool read_input(
	const std::string& path, std::vector<native::object::ObjectFile>& objects, std::string& error, bool darwin = false);
void add_startup(std::vector<native::object::ObjectFile>& objects, bool darwin);

} // namespace aarch64
