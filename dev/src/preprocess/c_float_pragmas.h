#pragma once

#include <cstdint>

enum class CFloatPragma : uint8_t
{
	None,
	FenvAccess,
	FpContract
};

enum class CPragmaSetting : uint8_t
{
	Unspecified, // No directive at this token.
	Default,
	Off,
	On
};

struct CFloatPragmas
{
	CPragmaSetting fenv = CPragmaSetting::Unspecified;
	CPragmaSetting contract = CPragmaSetting::Unspecified;
};
