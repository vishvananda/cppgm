#include "sema/constant_interpreter.h"

#include "sema/analyzer.h"
#include "sema/constant_storage.h"
#include "support/small_list.h"

namespace sema {

void ConstantInterpreter::register_destruction(const ConstPlace& place, uint32_t location)
{
	if (analyzer_.nontrivial_destruction(place.type))
		class_storage().destructions.push_back({ place, location, PointerMap::kMissing, false });
}

void ConstantInterpreter::queue_temporary(const ConstPlace& place, uint32_t location)
{
	auto& pending = class_storage().temporaries;
	pending.push_back({ place, location, PointerMap::kMissing, false });
	objects_[place.object].temporary = static_cast<uint32_t>(pending.size());
}

void ConstantInterpreter::forget_temporary(const ConstPlace& place)
{
	Object& object = objects_[place.object];
	if (object.temporary != 0)
	{
		storage_->temporaries[object.temporary - 1].place.root = RootKind::Null;
		object.temporary = 0;
	}
}

void ConstantInterpreter::extend_local_temporary(const ConstPlace& place, size_t first, const syntax::Expr& expr,
	const Conversion* conversion, const ConstPlace* owner)
{
	if (place.root != RootKind::Object || place.object >= objects_.size())
		return;
	const Object& object = objects_[place.object];
	if (object.generation != place.generation || object.temporary <= first || !binds_temporary(expr, conversion))
		return;
	if (owner == nullptr)
		keep_local_temporary(place, first);
	else
		extend_with_owner(place, first, *owner);
}

bool ConstantInterpreter::initializes_local(const ConstPlace& target) const
{
	// The named destination in this frame is bound before its initializer.
	// A callee constructing its return value does not own that destination.
	const size_t first = frames_.size() == first_frame_ ? first_local_ : frames_.back().first_local;
	if (target.root != RootKind::Object || locals_.size() == first)
		return false;
	const Local& local = locals_.back();
	return local.entity != nullptr && local.entity->kind == EntityKind::Variable &&
		local.place.root == RootKind::Object && local.place.object == target.object &&
		local.place.generation == target.generation;
}

void ConstantInterpreter::extend_with_owner(const ConstPlace& place, size_t first, const ConstPlace& owner)
{
	if (initializes_local(owner))
		keep_local_temporary(place, first);
	else if (owner.root == RootKind::Object)
	{
		storage_->temporaries[objects_[place.object].temporary - 1].owner = owner.object;
		storage_->has_dependent_temporaries = true;
	}
}

void ConstantInterpreter::keep_local_temporary(const ConstPlace& place, size_t first)
{
	// Extend the complete object, including when the binding names only one
	// of its subobjects. Its dependent temporaries completed construction
	// before it. Visit owners first, then preserve construction order in
	// the lexical cleanup stack. Leave slots for the full-expression marks.
	auto& pending = storage_->temporaries;
	const size_t root = objects_[place.object].temporary - 1;
	SmallList<size_t, 8> extended;
	extended.push_back(root);
	pending[root].retained = true;
	if (storage_->has_dependent_temporaries)
	{
		for (size_t i = root; i-- > first;)
		{
			auto& entry = pending[i];
			if (entry.place.root == RootKind::Null || entry.owner >= objects_.size())
				continue;
			const uint32_t owner = objects_[entry.owner].temporary;
			if (owner != 0 && pending[owner - 1].retained)
			{
				entry.retained = true;
				extended.push_back(i);
			}
		}
	}
	for (size_t i = extended.size(); i-- > 0;)
	{
		const size_t index = extended[i];
		pending[index].retained = false;
		storage_->destructions.push_back(pending[index]);
		forget_temporary(pending[index].place);
	}
}

bool ConstantInterpreter::destroy_temporaries(size_t first)
{
	auto& pending = storage_->temporaries;
	while (pending.size() > first)
	{
		const ConstantStorage::Destruction next = pending.back();
		pending.pop_back();
		if (next.place.root == RootKind::Null)
			continue;
		objects_[next.place.object].temporary = 0;
		if (!destroy_object(next.place, next.location))
			return false;
	}
	return true;
}

bool ConstantInterpreter::destroy_object(const ConstPlace& place, uint32_t location)
{
	if (!destroy(place, location))
		return false;
	objects_[place.object].generation = ++stacks_.generation;
	return true;
}

bool ConstantInterpreter::destroy_locals(size_t first)
{
	auto& pending = storage_->destructions;
	bool done = failure_ == nullptr;
	while (!pending.empty() && pending.back().place.object >= first)
	{
		// A destructor call can grow this vector. It must finish with its own
		// locals destroyed, leaving the next object of the original scope.
		const ConstantStorage::Destruction next = pending.back();
		pending.pop_back();
		if (done)
			done = destroy_object(next.place, next.location);
	}
	return done;
}

bool ConstantInterpreter::destroy(const ConstPlace& place, uint32_t location)
{
	if (!analyzer_.nontrivial_destruction(place.type))
		return true;
	if (!analyzer_.cxx20_ || !analyzer_.constexpr_destructor(Analyzer::ObjectClassOf(place.type), 0))
		return fail(location, "a non-constexpr destructor in a constant expression");
	return run_destruction(place, location);
}

bool ConstantInterpreter::end_lifetime(const ConstPlace& place, uint32_t location)
{
	// Check the currently active object before writing its slot. In
	// particular, an explicit destruction cannot activate a union member.
	ConstValue* slot = nullptr;
	if (!locate(place, false, slot, location))
		return false;
	if (slot->kind == ValueKind::OutsideLifetime)
		return fail(location, "destruction outside an object's lifetime");
	if (!locate(place, true, slot, location) || !destroy(place, location) || !locate(place, true, slot, location))
		return false;
	*slot = ConstValue{};
	slot->kind = ValueKind::OutsideLifetime;
	slot->type = place.type;
	return true;
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
	ConstValue* slot = nullptr;
	if (!step(location) || !locate(place, false, slot, location))
		return false;
	if (slot->kind == ValueKind::OutsideLifetime)
		return fail(location, "destruction outside an object's lifetime");
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
