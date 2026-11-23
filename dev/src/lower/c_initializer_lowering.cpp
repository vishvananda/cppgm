#include "lower/function_lowering.h"

#include "sema/aggregates.h"
#include "sema/c_initializer.h"

namespace lower {

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
		if (plan.children.empty() && plan.projection == sema::CInitializerProjection::None)
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
				saved = static_cast<uint32_t>(values.size());
				values.push_back(c_initializer_span_value(*child.initializer, element, location));
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
	if (plan.projection == sema::CInitializerProjection::Fields)
		c_initialize_field_spans(plan, base, location);
	else if (plan.projection == sema::CInitializerProjection::Rectangles)
		c_initialize_rectangles(plan, base, location);
}

RValue FunctionLowering::c_initializer_span_value(
	const sema::CInitializer& initializer, const sema::Type* element, uint32_t location)
{
	if (sema::IsSubaggregate(element))
	{
		const auto slot = generated_slot(lowir::SlotKind::Tmpobj, lowering_.storage_type(element));
		const AddressPath path{ AddressPath::Root::Storage, lowir::Value::slot(slot), path_steps_.size() };
		sema::CInitializerWithSpans snapshot;
		static_cast<sema::CInitializer&>(snapshot) = initializer;
		if (initializer.projection == sema::CInitializerProjection::Rectangles)
			snapshot.regions = initializer.rectangles();
		else
			snapshot.fields = initializer.field_spans();
		snapshot.type = initializer.type->unqualified;
		c_initialize(snapshot, path, 0, location);
		return RValue{ path_address(path), program_.pointer_type() };
	}

	const syntax::Expr* value = initializer.value;
	if (value != nullptr && value->kind == syntax::ExprKind::BracedInit)
	{
		const auto& items = static_cast<const syntax::BracedInitList*>(value)->elements;
		value = items.empty() ? nullptr : items[0];
	}
	return value == nullptr ? zero_value(element) : fit(operand(*value, ConversionContext::Initialization), element);
}

void FunctionLowering::store_initializer_span(const sema::Type* element, lowir::Value base, uint64_t first,
	uint64_t limit, const RValue& value, uint32_t location)
{
	for_initializer_span(element, base, first, limit, location,
		[&](lowir::Value address) { store_initializer_value(element, value, address, location); });
}

void FunctionLowering::store_initializer_value(
	const sema::Type* type, const RValue& value, lowir::Value address, uint32_t location)
{
	if (sema::IsSubaggregate(type))
	{
		if ((type->cv & sema::kVolatile) != 0)
			copy_volatile_record(type, value.value, address, false, true, location);
		else
			copy_object(type, value.value, address, location);
		return;
	}
	Place destination = {};
	destination.storage = address;
	qualify(destination, type);
	store_initializer(lowering_.storage_type(type), value, destination);
}

template<typename Store>
void FunctionLowering::for_initializer_span(
	const sema::Type* element, lowir::Value base, uint64_t first, uint64_t limit, uint32_t location, Store put)
{
	if (limit == first + 1)
	{
		put(structured_element(base, element, first, location, false));
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
	put(index(lowir::Type::scalar(lowir::TypeKind::I8), ir_model::IPK_ARRAY_ELEMENT, base, offset).value);
	store(i64, binary(lowir::BinaryOp::Add, i64, current, integer(i64, 1)), cursor);
	jump(condition);
	place(end);
}

void FunctionLowering::c_initialize_field_spans(const sema::CInitializer& plan, lowir::Value base, uint32_t location)
{
	for (const auto& lane : plan.field_spans())
	{
		PointerMap saved;
		std::vector<RValue> values;
		const auto* variable = static_cast<const sema::VariableEntity*>(lane.member->variable);
		const sema::Type* type = variable->type;
		BitField bits = {};
		uint64_t offset;
		if (lane.member->bit_field)
		{
			bits = bit_field(variable, location);
			offset = bits.unit_offset;
		}
		else
			offset = lowering_.member_offset(variable, location);
		for (const auto& span : lane.spans)
		{
			uint32_t index = saved.find(span.initializer);
			if (index == PointerMap::kMissing)
			{
				index = static_cast<uint32_t>(values.size());
				RValue value = c_initializer_span_value(*span.initializer, type, location);
				if (lane.member->bit_field)
					value = to_unit(bits, value, type);
				values.push_back(value);
				saved.set(span.initializer, index);
			}
			const RValue value = values[index];
			for_initializer_span(plan.type->element, base, span.index, span.limit, location, [&](lowir::Value row) {
				const lowir::Value address = field_address(row, offset);
				if (lane.member->bit_field)
				{
					Place unit = {};
					unit.storage = address;
					unit.untyped = true;
					qualify(unit, type);
					write_bit_field(bits, unit, value, false);
				}
				else
					store_initializer_value(type, value, address, location);
			});
		}
	}
}

void FunctionLowering::c_initialize_rectangles(const sema::CInitializer& plan, lowir::Value base, uint32_t location)
{
	const sema::Type* row_type = plan.type->element;
	const sema::Type* cell_type = row_type->element;
	const uint64_t cell_size = lowering_.size_of(cell_type, location);
	PointerMap saved;
	std::vector<RValue> values;
	for (const auto& rectangle : plan.rectangles())
	{
		uint32_t entry = saved.find(rectangle.initializer);
		if (entry == PointerMap::kMissing)
		{
			entry = static_cast<uint32_t>(values.size());
			values.push_back(c_initializer_span_value(*rectangle.initializer, cell_type, location));
			saved.set(rectangle.initializer, entry);
		}
		const RValue value = values[entry];
		if (cell_size == 0)
			continue;
		if (rectangle.column == 0 && rectangle.column_limit == row_type->bound)
		{
			store_initializer_span(cell_type, base, rectangle.row * row_type->bound,
				rectangle.row_limit * row_type->bound, value, location);
			continue;
		}
		for_initializer_span(row_type, base, rectangle.row, rectangle.row_limit, location, [&](lowir::Value row) {
			store_initializer_span(cell_type, row, rectangle.column, rectangle.column_limit, value, location);
		});
	}
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
