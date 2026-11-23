#include "lower/function_lowering.h"

#include "lowir/literals.h"
#include "sema/aggregates.h"
#include "sema/constant_values.h"
#include "sema/c_initializer.h"

namespace lower {

bool ProgramLowering::static_c_value(const sema::ConstValue& value, StaticValue& out, uint32_t location)
{
	out = StaticValue();
	switch (value.kind)
	{
	case sema::ValueKind::Integer:
		out.kind = StaticValue::Kind::Integer;
		out.bits = value.bits;
		out.high = value.high;
		return true;
	case sema::ValueKind::Floating:
		out.kind = StaticValue::Kind::Floating;
		out.floating = value.floating;
		return true;
	case sema::ValueKind::Binary128:
		out.kind = StaticValue::Kind::Soft;
		out.bits = value.bits;
		out.high = value.high;
		return true;
	case sema::ValueKind::Pointer:
		if (value.root == sema::RootKind::Null)
		{
			out.kind = StaticValue::Kind::Null;
			return true;
		}
		if (value.root == sema::RootKind::AbsoluteAddress)
		{
			out.kind = StaticValue::Kind::Integer;
			out.bits = static_cast<uint64_t>(value.address.offset);
			return true;
		}
		lowir::DataItem item;
		if (!constant_item(value.type, value, item, location))
			return false;
		out.kind = StaticValue::Kind::Address;
		out.symbol = item.address;
		out.offset = item.amount;
		return true;
	default:
		return false;
	}
}

bool ProgramLowering::static_c_initializer(const sema::CInitializer& plan, StaticData& out)
{
	const sema::Type* type = plan.type;
	if (plan.value != nullptr && plan.children.empty())
		return static_element(type, *plan.value, out);
	if (type->kind != sema::TypeKind::Array)
	{
		uint32_t next = 0;
		return plan.value == nullptr && static_aggregate(type, nullptr, next, out, &plan);
	}

	std::vector<uint64_t> units;
	if (plan.value != nullptr)
	{
		const syntax::Expr* literal = sema::CInitializerOperand(plan.value);
		if (literal->kind == syntax::ExprKind::BracedInit)
			literal = sema::CInitializerOperand(static_cast<const syntax::BracedInitList*>(literal)->elements[0]);
		sema::StringLiteralFacts facts;
		if (literal->kind != syntax::ExprKind::Literal ||
			!sema::StringLiteralUnits(static_cast<const syntax::LiteralExpr*>(literal)->spelling, facts, units))
			return false;
	}
	const uint64_t stride = size_of(type->element, 0);
	uint64_t next = 0;
	const auto fill = [&](uint64_t limit) {
		for (; next < limit && next < units.size(); ++next)
		{
			lowir::DataItem item = lowir::DataItem();
			item.kind = lowir::DataItemKind::Scalar;
			item.type = storage_type(type->element);
			item.constant = { lowir::ValueKind::Integer, lowir::TypeKind::Void,
				lowir::integer_literal(static_cast<int64_t>(units[static_cast<size_t>(next)])) };
			append_item(item, out);
		}
		if (next < limit)
			append_zero((limit - next) * stride, out);
		next = limit;
	};
	for (const auto& child : plan.children)
	{
		fill(child.index);
		if (!static_c_initializer(*child.initializer, out))
			return false;
		next = child.index + 1;
	}
	fill(type->bound);
	return true;
}

void FunctionLowering::c_initialize(
	const sema::CInitializer& plan, const AddressPath& path, uint8_t cv, uint32_t location, bool inherited)
{
	const sema::Type* type = lowering_.graph().types.qualified(plan.type, cv & sema::kVolatile);
	inherited = inherited && !plan.starts_value;
	if (plan.value != nullptr)
	{
		syntax::Expr* value = const_cast<syntax::Expr*>(plan.value);
		syntax::BracedInitList view = syntax::BracedInitList();
		view.elements = { &value, 1 };
		uint32_t next = 0;
		aggregate_item(type, path, &view, next, true, value->location);
		if (plan.children.empty())
			return;
		inherited = true;
	}
	if (type->kind != sema::TypeKind::Array)
	{
		c_initialize_record(plan, path, type->cv, location, inherited);
		return;
	}

	const lowir::Value base = path_address(path);
	const PathStep step = element_step(type->element, location);
	uint64_t next = 0;
	for (const auto& child : plan.children)
	{
		if (!inherited && child.index > next)
			omitted_array_range(type, base, next, child.index - next, location);
		path_steps_.push_back(step);
		path_steps_.back().amount = child.index;
		c_initialize(*child.initializer, path, type->element->cv, location, inherited);
		path_steps_.pop_back();
		next = child.index + 1;
	}
	if (!inherited && next < type->bound)
		omitted_array_tail(type, base, next, location);
}

void FunctionLowering::c_initialize_record(
	const sema::CInitializer& plan, const AddressPath& path, uint8_t cv, uint32_t location, bool inherited)
{
	const sema::ClassEntity* record = sema::ClassOf(plan.type);
	const bool variant = record->key == TokenKind::KW_UNION;
	const auto* current = plan.children.begin();
	const auto* end = plan.children.end();
	const auto* selected = variant ? (current == end ? sema::UnionListMember(record, true) : current->member) : nullptr;
	const uint64_t saved_limit = bit_limit_;
	bit_limit_ = inherited ? 0 : UINT64_MAX;
	bit_high_ = bit_unit_ = 0;
	for (const sema::DataMember* member = record->members; member != nullptr; member = member->next)
	{
		const auto* variable = static_cast<const sema::VariableEntity*>(member->variable);
		if ((member->bit_field && variable->name == nullptr) || (selected != nullptr && member != selected))
			continue;
		const sema::CInitializer* child = current != end && current->member == member ? (current++)->initializer
																					  : nullptr;
		if (child == nullptr && inherited)
			continue;
		if (member->bit_field)
		{
			const syntax::Expr* value = child != nullptr ? child->value : nullptr;
			if (value != nullptr && value->kind == syntax::ExprKind::BracedInit)
			{
				const auto& list = static_cast<const syntax::BracedInitList&>(*value);
				value = list.elements.empty() ? nullptr : list.elements[0];
			}
			initialize_bit_field(member, variable, path, value, true, location, cv);
		}
		else
		{
			path_steps_.push_back(PathStep{ PathStep::Kind::Field, lowering_.member_offset(variable, location),
				lowir::Type(), 0, through_union(variable, record) });
			if (child != nullptr)
				c_initialize(*child, path, cv, location, inherited);
			else
			{
				uint32_t none = 0;
				const sema::Type* type = lowering_.graph().types.qualified(variable->type, cv & sema::kVolatile);
				aggregate_item(type, path, nullptr, none, true, location);
			}
			path_steps_.pop_back();
			bit_unit_ = 0;
		}
		bit_high_ = member_end_bits(member, location);
		if (variant)
			break;
	}
	bit_unit_ = 0;
	bit_limit_ = saved_limit;
}

} // namespace lower
