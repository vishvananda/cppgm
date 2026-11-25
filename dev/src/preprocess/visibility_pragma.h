#pragma once

#include "ir_symbol_model.h"

struct VisibilityPragma
{
	ir_model::SymbolVisibility value = ir_model::SV_DEFAULT;
	bool specified = false;
};
