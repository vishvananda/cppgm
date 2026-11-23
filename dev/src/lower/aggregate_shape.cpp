#include "lower/program_lowering.h"

#include "lowir/aggregate_shape.h"
#include "sema/analyzer.h"
#include <algorithm>

namespace lower {

namespace {

using ir_model::AggregateElement;
using ir_model::AggregateShape;

using lowir::merge_shape;
using lowir::scalar_element;
using lowir::shape;

} // namespace

bool ProgramLowering::aarch64_member_pointer_pair(const sema::Type* type) const
{
	const sema::Type* bare = type->unqualified;
	return bare->kind == sema::TypeKind::MemberPointer && bare->element->kind == sema::TypeKind::Function &&
		target_model::is_aarch64(program_.target);
}

ir_model::AggregateShape ProgramLowering::aggregate_shape(const sema::Type* type)
{
	type = type->unqualified;
	if (type->kind == sema::TypeKind::Array)
	{
		AggregateShape result = aggregate_shape(type->element);
		if (result.element > AggregateElement::Mixed)
		{
			if (type->bound > UINT16_MAX / result.count)
				return shape(AggregateElement::Mixed);
			result.count = static_cast<uint16_t>(result.count * type->bound);
			if (result.count == 0)
				return shape(AggregateElement::Empty);
		}
		return result;
	}
	if (type->kind == sema::TypeKind::Complex)
	{
		AggregateShape result = aggregate_shape(type->element);
		merge_shape(result, result);
		return result;
	}
	if (type->kind != sema::TypeKind::Class)
	{
		if (aarch64_member_pointer_pair(type))
			return shape(AggregateElement::Mixed);
		if (SoftFloatOf(type) == SoftFloat::Quad ||
			(type->kind == sema::TypeKind::Fundamental &&
				FloatingRepresentation(type->fundamental, type->target) == FundamentalType::Float128))
			return shape(AggregateElement::F128, 1);
		const auto element = scalar_element(storage_type(type).kind());
		return shape(element, element == AggregateElement::Mixed ? 0 : 1);
	}
	const auto* cls = static_cast<const sema::ClassEntity*>(type->entity);
	const uint32_t known = aggregate_shapes_.find(cls);
	if (known != PointerMap::kMissing)
		return shape(static_cast<AggregateElement>(known >> 16), static_cast<uint16_t>(known));
	const bool aarch64 = target_model::is_aarch64(program_.target);
	AggregateShape result = shape(cls->dynamic ? AggregateElement::Mixed : AggregateElement::Empty);
	for (const sema::BaseClass* base = cls->bases; base != nullptr; base = base->next)
		merge_shape(result, aggregate_shape(base->base->type));
	for (const sema::DataMember* member = cls->members; member != nullptr; member = member->next)
	{
		// A nonzero unnamed field participates in Arm aggregate classification.
		if (member->bit_field && (member->width == 0 || (!aarch64 && member->variable->name == nullptr)))
			continue;
		const AggregateShape part = aggregate_shape(member->variable->type);
		// Overlapping union alternatives occupy the same register lanes in AAPCS64.
		if (aarch64 && cls->key == TokenKind::KW_UNION && result.element == part.element)
			result.count = std::max(result.count, part.count);
		else
			merge_shape(result, part);
	}
	aggregate_shapes_.set(cls, (static_cast<uint32_t>(result.element) << 16) | result.count);
	return result;
}

} // namespace lower
