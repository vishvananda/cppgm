#include "sema/constant_interpreter.h"

#include "sema/analyzer.h"
#include "sema/constant_storage.h"
#include "support/small_list.h"

namespace sema {

void ConstantInterpreter::register_destruction(const ConstPlace& place, uint32_t location)
{
	if (analyzer_.nontrivial_destruction(place.type))
		class_storage().destructions.push_back({ place, location });
}

void ConstantInterpreter::queue_temporary(const ConstPlace& place, uint32_t location)
{
	auto& pending = class_storage().temporaries;
	pending.push_back({ place, location });
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

void ConstantInterpreter::extend_local_temporary(
	const ConstPlace& place, size_t first, const syntax::Expr& expr, const Conversion* conversion)
{
	if (place.root != RootKind::Object || place.object >= objects_.size())
		return;
	const Object& object = objects_[place.object];
	if (object.generation != place.generation || object.temporary <= first || !binds_temporary(expr, conversion))
		return;
	keep_local_temporary(place);
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

void ConstantInterpreter::keep_local_temporary(const ConstPlace& place)
{
	// Extend the complete object, including when the binding names only one
	// of its subobjects. Leave the slot so enclosing full-expression marks
	// still refer to the same stack positions.
	const auto& pending = storage_->temporaries[objects_[place.object].temporary - 1];
	storage_->destructions.push_back(pending);
	forget_temporary(place);
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
