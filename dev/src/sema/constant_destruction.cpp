#include "sema/constant_interpreter.h"

#include "sema/analyzer.h"
#include "support/small_list.h"

namespace sema {

bool ConstantInterpreter::destroy(const ConstPlace& place, uint32_t location)
{
	if (!analyzer_.nontrivial_destruction(place.type))
		return true;
	if (!analyzer_.cxx20_ || !analyzer_.constexpr_destructor(Analyzer::ObjectClassOf(place.type), 0))
		return fail(location, "a non-constexpr destructor in a constant expression");
	return run_destruction(place, location);
}

bool ConstantInterpreter::run_destruction(const ConstPlace& place, uint32_t location)
{
	// [class.dtor]: the destructor body precedes its non-variant members and
	// direct bases. Array elements, members and bases each end in reverse
	// construction order. Eligibility was checked for the complete tree.
	const Type* type = place.type;
	if (type->kind == TypeKind::Array)
	{
		ConstPlace element = place;
		element.type = type->element;
		const uint64_t stride = size_of(element.type, location);
		for (uint64_t i = type->bound; i-- > 0;)
		{
			element.offset = place.offset + static_cast<int64_t>(i * stride);
			if (!run_destruction(element, location))
				return false;
		}
		return true;
	}
	const ClassEntity* cls = ClassOf(type);
	const FunctionEntity* destructor = cls->destructor;
	if (destructor == nullptr || destructor->trivial)
		return true;
	if (!step(location))
		return false;
	ConstPlace self = place;
	self.type = cls->type;
	if (!destructor->implicit && !destructor->defaulted)
	{
		Result result{};
		if (!invoke(destructor, &self, nullptr, 0, result, location))
			return false;
	}
	SmallList<const VariableEntity*, 8> members;
	for (const DataMember* member = cls->key != TokenKind::KW_UNION ? cls->members : nullptr; member != nullptr;
		member = member->next)
		if (analyzer_.nontrivial_destruction(member->variable->type))
			members.push_back(static_cast<const VariableEntity*>(member->variable));
	for (size_t i = members.size(); i-- > 0;)
	{
		ConstPlace member;
		if (!member_slot(self, members[i], member, location) || !run_destruction(member, location))
			return false;
	}
	SmallList<const BaseClass*, 4> bases;
	for (const BaseClass* base = cls->bases; base != nullptr; base = base->next)
		if (analyzer_.nontrivial_destruction(base->base->type))
			bases.push_back(base);
	for (size_t i = bases.size(); i-- > 0;)
	{
		ConstPlace base = self;
		base.type = bases[i]->base->type;
		base.offset += static_cast<int64_t>(bases[i]->offset);
		if (!run_destruction(base, location))
			return false;
	}
	return true;
}

} // namespace sema
