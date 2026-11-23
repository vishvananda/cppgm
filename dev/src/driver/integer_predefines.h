#pragma once

#include <string>

#include "target_model.h"

namespace driver {

// Scalar integer roles and limits used by cross-target compiler headers.
const std::string& target_integer_predefines(target_model::Target target);

} // namespace driver
