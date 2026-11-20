#pragma once

#include "aarch64/mir.h"

namespace aarch64 {

// Where the selector put a function's frame code. The prologue is code
// [0, prologue_end) with the first prologue_events frame events. Each
// epilogue's events run from its RememberState (at its first restore) to
// its RestoreState (after its return or tail branch).
struct FrameCode
{
	struct Epilogue
	{
		uint32_t first_event, end_event;
	};
	uint32_t prologue_end = 0, prologue_events = 0;
	std::vector<Epilogue> epilogues;
	uint32_t incoming = 0; // general registers that hold arguments at entry
	uint32_t returned = 0; // general registers a return passes back
};

// O1+, on Linux, after selection and before branch simplification: when
// the entry reaches a return without a call, a frame access or another
// instruction that needs the frame, that region runs frameless and each
// edge out of it goes through a copy of the prologue (shrink_wrap.cpp).
// Returns whether it did.
bool shrink_wrap(Function& function, const FrameCode& frame);

} // namespace aarch64
