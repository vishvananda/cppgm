#include "lower/function_lowering.h"

#include "sema/conversions.h"
#include "sema/aggregates.h"

namespace lower {

Place FunctionLowering::compound_literal(const syntax::FunctionalCastExpr& expr)
{
	if ((expr.facts->flags & sema::kRuntimeTypeEvaluation) != 0)
		evaluate_runtime_bounds(lowering_.graph().runtime_bounds(&expr), nullptr, expr.location);
	Place object = Place();
	const sema::Type* type = expr.facts->type;
	if (expr.compound_static)
	{
		object.storage = lowir::Value::symbol(lowering_.compound_literal(expr));
		return object;
	}
	// One anonymous object per occurrence, alive until its block exits.
	// Fixed frame storage survives full-expression cleanup, and evaluating
	// the occurrence again initializes that same object again.
	auto slot = compound_slots_.find(&expr);
	if (slot == PointerMap::kMissing)
	{
		slot = generated_slot(lowir::SlotKind::Tmpobj, lowering_.storage_type(type));
		compound_slots_.set(&expr, slot);
	}
	object.storage = lowir::Value::slot(slot);
	object.is_volatile = (type->cv & sema::kVolatile) != 0;
	object.is_atomic = (type->cv & sema::kAtomic) != 0;
	if (type->kind == sema::TypeKind::Array)
		aggregate_array_object(type, object, *expr.braced, nullptr, expr.location);
	else if (sema::ClassOf(type) != nullptr)
		aggregate_object(type, AddressPath{ AddressPath::Root::Storage, object.storage, path_steps_.size() },
			expr.braced, true, expr.location);
	else if (sema::LaneList(type, *expr.braced))
		store(lowering_.storage_type(type), vector_list(type, *expr.braced), object);
	else
	{
		const RValue value = expr.braced->elements.empty()
			? zero_value(type)
			: fit(operand(*expr.braced->elements[0], ConversionContext::Initialization), type);
		store_initializer(lowering_.storage_type(type), value, object);
	}
	return object;
}

lowir::SymbolId ProgramLowering::compound_literal(const syntax::FunctionalCastExpr& expr)
{
	const auto found = compound_globals_.find(&expr);
	if (found != PointerMap::kMissing)
		return found;
	StaticData data;
	if (!static_element(expr.facts->type, *expr.braced, data))
		throw LoweringError(expr.location, "file-scope C compound literal requires a constant initializer");
	const lowir::SymbolId symbol = static_temporary(expr.facts->type);
	compound_globals_.set(&expr, symbol);
	auto& global = program_.globals[program_.symbols[symbol].detail];
	global.typed = false;
	global.init = lowir::GlobalInit::Data;
	global.first_item = static_cast<uint32_t>(program_.data_items.size());
	global.item_count = static_cast<uint32_t>(data.items.size());
	program_.data_items.insert(program_.data_items.end(), data.items.begin(), data.items.end());
	return symbol;
}

} // namespace lower
