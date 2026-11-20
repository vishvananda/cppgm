#pragma once

#include "lowir/program.h"

namespace lowir {

// The size whose eightbytes a value's classes name
// (ir_model::append_object_classes).
inline uint64_t object_classes_bytes(Type type)
{
	if (type.is_object())
		return type.bytes;
	return type.kind() == TypeKind::I128 || type.kind() == TypeKind::F80 ? 16 : (integer_bits(type.kind()) + 7) / 8;
}

// Classes a value of `type` may state (lowir.md "Object ABI Conventions"):
// none; on a direct object `memory`, `x87` (16 bytes), `complex_x87` (32
// bytes) or, on one of at most 16 bytes, a class for each eightbyte it has
// (`sseup` only after `sse`); `integer_integer` on an i128 and `sse_sseup`
// on a v128.
bool valid_object_classes(Type type, uint8_t classes);
bool valid_aggregate_shape(Type type, ir_model::AggregateShape shape);
bool valid_parameter_shape(Type type, ir_model::AggregateShape shape, target_model::Target target);
bool valid_this_return(const Program& program, const Signature& signature);

// Returns a diagnostic for malformed per-argument metadata, or null.
const char* validate_argument_facts(const Program& program, const FunctionBody& body, InstId& instruction);

} // namespace lowir
