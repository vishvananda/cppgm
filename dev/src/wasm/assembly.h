#pragma once

#include <cstdint>

#include "target_model.h"

class PPTokenCursor;

namespace wasm {
struct Object;

// GNU Wasm assembly consumes the preprocessor's tokens directly. Instruction
// selection is already explicit; reuse the typed machine IR and object writer.
// `location` identifies the current statement if a WasmError is thrown.
void assemble(PPTokenCursor& tokens, Object& object, target_model::Target target, std::uint32_t& location);
} // namespace wasm
