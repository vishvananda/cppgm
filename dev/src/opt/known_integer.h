#pragma once

#include "lowir/program.h"

namespace opt {

// Prove an integer operand has a single value, even if it combines unrelated
// runtime values. This demand-driven query is bounded and does not edit LowIR.
bool known_integer(const lowir::FunctionBody& body, lowir::Value value, lowir::Type type, lowir::Literal& result);

// True when some bit of the operand must differ from the given literal.
bool known_integer_differs(
	const lowir::FunctionBody& body, lowir::Value value, lowir::Type type, lowir::Literal literal);

} // namespace opt
