#pragma once

#include <cstdint>
#include <vector>

namespace unicode {

struct CharacterProperties
{
	uint8_t combining_class;
	// XID_Start, XID_Continue, NFC_Quick_Check No and Maybe, and a
	// canonical decomposition, respectively.
	uint8_t flags;

	bool xid_start() const { return (flags & 1) != 0; }
	bool xid_continue() const { return (flags & 2) != 0; }
	bool nfc_no() const { return (flags & 4) != 0; }
	bool nfc_maybe() const { return (flags & 8) != 0; }
	bool decomposes() const { return (flags & 16) != 0; }
};

// ASCII identifier characters use the lexer's byte classification.
CharacterProperties Properties(char32_t code_point);

// Checks the decoded characters in one pass. NFC Quick_Check says when a
// character starts a new segment and when a segment needs normalization for
// comparison. Plain runs of starters never allocate a buffer.
class NfcCheck
{
public:
	// False if this character makes the prefix incompatible with NFC.
	bool append(char32_t code_point, CharacterProperties properties);
	bool normalized() const;

private:
	static constexpr char32_t NoStarter = 0x110000;
	char32_t starter_ = NoStarter;
	// Code points followed by their combining classes in the low 8 bits.
	// Needed only when the starter itself can decompose.
	std::vector<uint32_t> following_;
	uint8_t last_class_ = 0;
	bool starter_decomposes_ = false;
	bool maybe_ = false;
};

} // namespace unicode
