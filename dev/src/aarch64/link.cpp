#include "aarch64/link.h"

#include "native/object/elf_format.h"

namespace aarch64 {

bool apply_relocation(uint32_t type, uint8_t* field, uint64_t room, uint64_t value, uint64_t place, std::string& error)
{
	if (type == 0)
		return true;
	const unsigned bytes = type == Abs64 || type == Prel64 ? 8 : 4;
	if (room < bytes)
	{
		error = "AArch64 relocation exceeds its section";
		return false;
	}
	const int64_t delta = static_cast<int64_t>(value - place);
	uint64_t word = native::object::get_le(field, bytes);
	bool fits = true;
	switch (type)
	{
	case Abs64:
		word = value;
		break;
	case Abs32:
		fits = value <= UINT32_MAX;
		word = value;
		break;
	case Prel64:
		word = delta;
		break;
	case Prel32:
		fits = delta >= INT32_MIN && delta <= INT32_MAX;
		word = delta;
		break;
	case MovwUabsG0:
	case MovwUabsG0Nc:
	case MovwUabsG1:
	case MovwUabsG1Nc:
	case MovwUabsG2:
	case MovwUabsG2Nc:
	case MovwUabsG3:
	case MovwSabsG0:
	case MovwSabsG1:
	case MovwSabsG2:
	{
		const unsigned shift = wide_move_chunk(type) * 16;
		if (type >= MovwSabsG0)
		{
			const int64_t signed_value = static_cast<int64_t>(value);
			const int64_t limit = int64_t(1) << (shift + 16);
			fits = signed_value >= -limit && signed_value < limit;
			if (signed_value < 0)
			{
				word &= ~(1u << 30); // MOVN
				value = ~value;
			}
			else
				word |= 1u << 30; // MOVZ
		}
		else if (type != MovwUabsG3 && (type - MovwUabsG0) % 2 == 0)
			fits = (value >> (shift + 16)) == 0;
		word = (word & ~(0xffffu << 5)) | (((value >> shift) & 0xffffu) << 5);
		break;
	}
	case Jump26:
	case Call26:
		fits = !(delta & 3) && delta >= -(1ll << 27) && delta < (1ll << 27);
		word = (word & 0xfc000000u) | ((uint64_t(delta) >> 2) & 0x03ffffff);
		break;
	case TestBranch14:
	case CondBranch19:
	{
		const unsigned bits = type == TestBranch14 ? 14 : 19;
		const int64_t limit = int64_t(1) << (bits + 1);
		const uint32_t mask = (1u << bits) - 1;
		fits = !(delta & 3) && delta >= -limit && delta < limit;
		word = (word & ~(mask << 5)) | (((uint64_t(delta) >> 2) & mask) << 5);
		break;
	}
	case AdrPrelLo21:
	case AdrPrelPage21:
	case GotPage:
	{
		const int64_t offset = type == AdrPrelLo21 ? delta : int64_t(value >> 12) - int64_t(place >> 12);
		fits = offset >= -(1ll << 20) && offset < (1ll << 20);
		word = (word & ~0x60ffffe0u) | ((uint64_t(offset) & 3) << 29) | (((uint64_t(offset) >> 2) & 0x7ffff) << 5);
		break;
	}
	case AddLo12:
	case Ldst8Lo12:
	case Ldst16Lo12:
	case Ldst32Lo12:
	case Ldst64Lo12:
	case GotLo12:
	case Ldst128Lo12:
	{
		unsigned scale = type == Ldst16Lo12           ? 1
			: type == Ldst32Lo12                      ? 2
			: (type == Ldst64Lo12 || type == GotLo12) ? 3
			: type == Ldst128Lo12                     ? 4
													  : 0;
		fits = (value & ((1u << scale) - 1)) == 0;
		word = (word & ~(0xfffu << 10)) | (((value & 4095) >> scale) << 10);
		break;
	}
	default:
		error = "unsupported AArch64 relocation " + std::to_string(type);
		return false;
	}
	if (!fits)
	{
		error = "misaligned or out-of-range AArch64 relocation " + std::to_string(type);
		return false;
	}
	for (unsigned i = 0; i < bytes; ++i)
		field[i] = static_cast<uint8_t>(word >> (i * 8));
	return true;
}

} // namespace aarch64
