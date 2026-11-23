#include "lower/function_lowering.h"

#include <algorithm>

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
	PointerMap saved_items;
	std::vector<StaticData> repeated;
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
		if (!child.initializer->repeat_value)
		{
			if (!static_c_initializer(*child.initializer, out))
				return false;
		}
		else
		{
			uint32_t saved = saved_items.find(child.initializer);
			if (saved == PointerMap::kMissing)
			{
				saved = static_cast<uint32_t>(repeated.size());
				repeated.emplace_back();
				if (!static_c_initializer(*child.initializer, repeated.back()))
					return false;
				auto& items = repeated.back().items;
				if (std::all_of(items.begin(), items.end(), [](const lowir::DataItem& item) {
						return item.kind == lowir::DataItemKind::Zero ||
							(item.kind == lowir::DataItemKind::Scalar && item.constant.bits.low == 0 &&
								item.constant.bits.high == 0);
					}))
					items.clear();
				saved_items.set(child.initializer, saved);
			}
			const auto& items = repeated[saved].items;
			if (items.empty())
				append_zero((child.limit - child.index) * stride, out);
			else
			{
				for (uint64_t i = child.index; i != child.limit; ++i)
					for (const lowir::DataItem& item : items)
						append_item(item, out);
			}
		}
		next = child.limit;
	}
	fill(type->bound);
	return true;
}

void FunctionLowering::c_initialize(
	const sema::CInitializer& plan, const AddressPath& path, uint8_t cv, uint32_t location, bool inherited)
{
	const sema::Type* type = lowering_.graph().types.qualified(plan.type, cv & sema::kVolatile);
	inherited = inherited && !plan.starts_value;
	if (!inherited && (type->cv & sema::kAtomic) != 0 && type->kind == sema::TypeKind::Class)
		initialize_c_atomic_padding(type, path);
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
	if (plan.has_spans)
	{
		c_initialize_spans(plan, type, path, location, inherited);
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
		next = child.limit;
	}
	if (!inherited && next < type->bound)
		omitted_array_tail(type, base, next, location);
}

void FunctionLowering::c_initialize_spans(
	const sema::CInitializer& plan, const sema::Type* array, const AddressPath& path, uint32_t location, bool inherited)
{
	PointerMap saved_values;
	std::vector<RValue> values;
	const lowir::Value base = path_address(path);
	const sema::Type* element = array->element;
	const PathStep step = element_step(element, location);
	uint64_t next = 0;
	for (const auto& child : plan.children)
	{
		if (!inherited && child.index > next)
			omitted_array_range(array, base, next, child.index - next, location);
		if (child.initializer->repeat_value)
		{
			uint32_t saved = saved_values.find(child.initializer);
			if (saved == PointerMap::kMissing)
			{
				const syntax::Expr* value = child.initializer->value;
				if (value != nullptr && value->kind == syntax::ExprKind::BracedInit)
				{
					const auto& items = static_cast<const syntax::BracedInitList*>(value)->elements;
					value = items.empty() ? nullptr : items[0];
				}
				const RValue converted = value == nullptr
					? zero_value(element)
					: fit(operand(*value, ConversionContext::Initialization), element);
				saved = static_cast<uint32_t>(values.size());
				values.push_back(converted);
				saved_values.set(child.initializer, saved);
			}
			store_initializer_span(element, base, child.index, child.limit, values[saved], location);
		}
		else
		{
			path_steps_.push_back(step);
			path_steps_.back().amount = child.index;
			c_initialize(*child.initializer, path, element->cv, location, inherited);
			path_steps_.pop_back();
		}
		next = child.limit;
	}
	if (!inherited && next < array->bound)
		omitted_array_tail(array, base, next, location);
}

void FunctionLowering::store_initializer_span(const sema::Type* element, lowir::Value base, uint64_t first,
	uint64_t limit, const RValue& value, uint32_t location)
{
	const lowir::Type storage = lowering_.storage_type(element);
	Place destination = {};
	qualify(destination, element);
	if (limit == first + 1)
	{
		destination.storage = structured_element(base, element, first, location, false);
		store_initializer(storage, value, destination);
		return;
	}
	const lowir::Type i64 = lowir::Type::scalar(lowir::TypeKind::I64);
	Place cursor = {};
	cursor.storage = lowir::Value::slot(generated_slot(lowir::SlotKind::ConstructorArrayIndex, i64));
	store(i64, integer(i64, first), cursor);
	close_region();
	const auto condition = new_block(lowir::BlockKind::ConstructorArrayCond);
	const auto body = new_block(lowir::BlockKind::ConstructorArrayBody);
	const auto end = new_block(lowir::BlockKind::ConstructorArrayEnd);
	jump(condition);
	place(condition);
	const RValue current = load(i64, cursor);
	branch(compare(lowir::ComparePredicate::Ult, i64, current, integer(i64, limit)), body, end);
	place(body);
	const RValue offset = binary(
		lowir::BinaryOp::Mul, i64, current, integer(i64, lowering_.size_of(element, location)));
	destination.storage =
		index(lowir::Type::scalar(lowir::TypeKind::I8), ir_model::IPK_ARRAY_ELEMENT, base, offset).value;
	store_initializer(storage, value, destination);
	store(i64, binary(lowir::BinaryOp::Add, i64, current, integer(i64, 1)), cursor);
	jump(condition);
	place(end);
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
