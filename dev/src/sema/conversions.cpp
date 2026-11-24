#include "sema/conversions.h"

#include <functional>
#include <vector>

#include "sema/integral_arithmetic.h"
#include "sema/lookup.h"
#include "support/pointer_map.h"
#include "support/small_list.h"
#include "syntax/ast.h"

namespace sema {

namespace {

template<typename MatchType>
bool MatchCRecordMembers(
	const ClassEntity& first, const ClassEntity& second, const PointerMap& aliases, MatchType match_type)
{
	if (first.key != second.key || first.member_count != second.member_count || first.pack != second.pack ||
		first.packed != second.packed || first.c_definition_alignment != second.c_definition_alignment)
		return false;
	const DataMember* right = second.members;
	for (const DataMember* left = first.members; left != nullptr; left = left->next, right = right->next)
	{
		const auto* a = static_cast<const VariableEntity*>(left->variable);
		const auto* b = static_cast<const VariableEntity*>(right->variable);
		if (a->name != b->name || left->bit_field != right->bit_field || left->width != right->width ||
			left->packed != right->packed || a->alignment_request != b->alignment_request ||
			(aliases.size() != 0 && aliases.find(a) != aliases.find(b)))
			return false;
		if (a->type->canonical != b->type->canonical && !match_type(*a, *b))
			return false;
	}
	return true;
}

bool CAnonymousMembers(const VariableEntity& first, const VariableEntity& second)
{
	if (first.name != nullptr || second.name != nullptr || first.type->cv != second.type->cv)
		return false;
	const ClassEntity* a = ClassOf(first.type);
	const ClassEntity* b = ClassOf(second.type);
	return a != nullptr && b != nullptr && a->storage != nullptr && b->storage != nullptr;
}

uint64_t EnumeratorHigh(const EnumeratorEntity& enumerator, bool is_signed)
{
	if (enumerator.extended_value)
		return static_cast<const WideEnumeratorEntity&>(enumerator).high;
	return is_signed && (enumerator.value.bits >> 63) != 0 ? UINT64_MAX : 0;
}

const EnumeratorEntity* CEnumMember(const NameLookup& names, const EnumEntity& type, const Identifier* name)
{
	const NameEntry* entry = names.find(type.owner, name);
	if (entry == nullptr || entry->value == nullptr || entry->value->kind != BindingKind::Enumerator)
		return nullptr;
	const auto* member = static_cast<const EnumeratorEntity*>(entry->value->entity);
	return member->enumeration == &type ? member : nullptr;
}

bool IsFundamental(const Type* type, FundamentalType which)
{
	type = type->unqualified;
	return type->kind == TypeKind::Fundamental && type->fundamental == which;
}

bool IsBool(const Type* type)
{
	return IsFundamental(type, FundamentalType::Bool);
}

bool IsNullptrT(const Type* type)
{
	return IsFundamental(type, FundamentalType::NullptrT);
}

bool IsPointerLike(const Type* type)
{
	type = type->unqualified;
	return type->kind == TypeKind::Pointer || type->kind == TypeKind::MemberPointer;
}

// 3.9.3p5 (as CWG 1059 clarified): an array's cv-qualifiers are its
// elements'.
uint8_t CvOf(const Type* type)
{
	while (type->kind == TypeKind::Array)
		type = type->element;
	return type->cv;
}

// The class of a (possibly cv-qualified) class type.
const ClassEntity* ClassEntityOf(const Type* type)
{
	type = type->unqualified;
	return type->kind == TypeKind::Class ? static_cast<const ClassEntity*>(type->entity) : nullptr;
}

// 4.5: `source` (cv-unqualified) promotes to `target`.
bool IsIntegralPromotion(TypeTable& types, const Type* source, const Type* target)
{
	if (!IsIntegralOrUnscopedEnum(source) || target->kind != TypeKind::Fundamental || !IsIntegralType(target))
		return false;
	if (source->kind == TypeKind::Enum)
	{
		// 4.5p4: an enumeration with a fixed underlying type also promotes
		// to that type.
		const EnumEntity* entity = static_cast<const EnumEntity*>(source->entity);
		if (entity->fixed && entity->underlying == target)
			return true;
	}
	return PromotedType(types, source) == target && source != target;
}

// Equal but for the cv-qualifiers of array elements (an array's are its
// elements', 3.9.3p5).
bool SameArrayShape(const Type* a, const Type* b)
{
	while (a->kind == TypeKind::Array && b->kind == TypeKind::Array)
	{
		if (a->bound != b->bound)
			return false;
		a = a->element;
		b = b->element;
	}
	return a->unqualified == b->unqualified;
}

// The pointer and member-pointer levels of a type, outermost first, with
// the cv-qualifiers below each level; false once the structure differs.
bool SimilarLevels(const Type* a, const Type* b, bool& added, bool& convertible)
{
	// 4.4p4: walking down from the first level below the top, a cv added at
	// level j needs `const` at every level 0 < k < j.
	added = false;
	convertible = true;
	bool const_so_far = true;
	for (unsigned level = 0;; ++level)
	{
		a = a->unqualified;
		b = b->unqualified;
		if (a->kind != b->kind)
			return false;
		if (a->kind == TypeKind::MemberPointer && a->owner != b->owner)
			return false;
		if (a->kind != TypeKind::Pointer && a->kind != TypeKind::MemberPointer)
			return level != 0 && a == b;
		const Type* ea = a->element;
		const Type* eb = b->element;
		const uint8_t ca = CvOf(ea), cb = CvOf(eb);
		if ((ca & ~cb) != 0)
			convertible = false;
		if (ca != cb)
		{
			added = true;
			// C restrict changes only at the first pointed-to type.
			if (!const_so_far || (level != 0 && ((ca ^ cb) & kRestrict) != 0))
				convertible = false;
		}
		const_so_far = const_so_far && (cb & kConst) != 0;
		// A pointer to an array ends the chain: the arrays match but for
		// their elements' cv-qualifiers, compared above as the array's.
		if (ea->kind == TypeKind::Function || eb->kind == TypeKind::Function)
			return ea == eb;
		if (ea->kind == TypeKind::Array || eb->kind == TypeKind::Array)
			return SameArrayShape(ea, eb);
		if (ea->unqualified->kind != TypeKind::Pointer && ea->unqualified->kind != TypeKind::MemberPointer)
			return ea->unqualified == eb->unqualified;
		a = ea;
		b = eb;
	}
}

// The base class a derived-to-base conversion reaches: the class a
// pointer points to, or the class object or bound reference's class.
const Type* DerivationTarget(const Conversion& conversion)
{
	const Type* result = conversion.result->unqualified;
	return result->kind == TypeKind::Pointer ? result->element : result;
}

} // namespace

bool SameCRecordDefinition(const ClassEntity& first, const ClassEntity& second, const PointerMap& aliases)
{
	return MatchCRecordMembers(first, second, aliases, [&](const VariableEntity& a, const VariableEntity& b) {
		return CAnonymousMembers(a, b) && SameCRecordDefinition(*ClassOf(a.type), *ClassOf(b.type), aliases);
	});
}

bool SameCEnumValue(const EnumeratorEntity& original, uint64_t low, uint64_t high, bool negative)
{
	const bool is_signed = IsSignedConstant(original.value);
	return original.value.bits == low && EnumeratorHigh(original, is_signed) == high &&
		negative == (is_signed && (high >> 63) != 0);
}

size_t ConversionRules::CTagPairHash::operator()(const CTagPair& pair) const
{
	return (reinterpret_cast<uintptr_t>(pair.first) >> 3) * 0x9e3779b97f4a7c15ull ^
		(reinterpret_cast<uintptr_t>(pair.second) >> 3);
}

ConversionRules::CTagPair ConversionRules::CTagPair::symmetric_key() const
{
	return std::less<const Entity*>()(second, first) ? CTagPair{ second, first } : *this;
}

struct ConversionRules::CTagComparison
{
	CTagComparison*& active;
	FlatMap<CTagPair, bool, CTagPairHash> seen;
	std::vector<CTagPair> records;
	bool stable = true;

	explicit CTagComparison(CTagComparison*& current) : active(current) { active = this; }
	~CTagComparison() { active = nullptr; }

	void add_record(const CTagPair& pair)
	{
		if (seen.find(pair) != nullptr)
			return;
		seen.insert(pair, true);
		records.push_back(pair);
	}
};

bool ConversionRules::c_tag_compatible(const Type* source, const Type* target, bool anonymous_member)
{
	const Entity* first = source->entity;
	const Entity* second = target->entity;
	if (first->name != second->name || (first->name == nullptr && !anonymous_member))
		return false;
	const CTagPair pair = CTagPair{ first, second }.symmetric_key();
	if (compatible_tags_.find(pair) != nullptr)
		return true;
	if (source->kind == TypeKind::Enum)
	{
		const auto& a = static_cast<const EnumEntity&>(*first);
		const auto& b = static_cast<const EnumEntity&>(*second);
		if (a.fixed != b.fixed || (a.fixed && a.underlying != b.underlying))
			return false;
		if (a.definition == nullptr || b.definition == nullptr)
		{
			// GCC's fixed-base forward tags agree while both lists are absent.
			// Completing either tag can change the answer to this query.
			const bool compatible = a.fixed && a.definition == b.definition;
			if (compatible && c_tag_comparison_ != nullptr)
				c_tag_comparison_->stable = false;
			return compatible;
		}
		if (a.definition->name == nullptr || b.definition->name == nullptr ||
			a.definition->enumerators.size != b.definition->enumerators.size)
			return false;
		for (const syntax::Enumerator& entry : a.definition->enumerators)
		{
			const EnumeratorEntity* a_member = CEnumMember(*c23_names_, a, entry.name);
			const EnumeratorEntity* b_member = CEnumMember(*c23_names_, b, entry.name);
			if (a_member == nullptr || b_member == nullptr)
				return false;
			const bool sign = IsSignedConstant(a_member->value);
			const uint64_t high = EnumeratorHigh(*a_member, sign);
			if (!SameCEnumValue(*b_member, a_member->value.bits, high, sign && (high >> 63) != 0))
				return false;
		}
		compatible_tags_.insert(pair, true);
		return true;
	}
	const auto& a = static_cast<const ClassEntity&>(*first);
	const auto& b = static_cast<const ClassEntity&>(*second);
	if (!a.complete || !b.complete || a.key != b.key || (a.anonymous || b.anonymous) != anonymous_member ||
		a.alignment_request != b.alignment_request)
		return false;
	if (c_tag_comparison_ != nullptr)
	{
		c_tag_comparison_->add_record(pair);
		return true;
	}
	// Walk mutually recursive types as a set of ordered comparisons. A
	// revisited pair needs no new work, and only a successful closed
	// walk can publish a permanent compatibility fact.
	CTagComparison comparison(c_tag_comparison_);
	comparison.add_record(pair);
	for (size_t i = 0; i < comparison.records.size(); ++i)
	{
		const CTagPair current = comparison.records[i];
		if (!MatchCRecordMembers(static_cast<const ClassEntity&>(*current.first),
				static_cast<const ClassEntity&>(*current.second), *c23_alignments_,
				[&](const VariableEntity& left, const VariableEntity& right) {
					if (CAnonymousMembers(left, right))
						return c_tag_compatible(left.type, right.type, true);
					// A flexible array member does not match a sized member.
					if (left.type->kind == TypeKind::Array && right.type->kind == TypeKind::Array &&
						left.type->has_array_bound() != right.type->has_array_bound())
						return false;
					return c_type_compatible(left.type, right.type);
				}))
			return false;
	}
	if (comparison.stable)
		for (const CTagPair& match : comparison.records)
			compatible_tags_.insert(match, true);
	return true;
}

bool IsFloating(const Type* type)
{
	type = type->unqualified;
	return type->kind == TypeKind::Fundamental && IsFloatingFundamental(type->fundamental);
}

bool IsComplex(const Type* type)
{
	return type->unqualified->kind == TypeKind::Complex;
}

bool IsArithmetic(const Type* type)
{
	return IsIntegralType(type) || IsFloating(type);
}

bool IsIntegralOrUnscopedEnum(const Type* type)
{
	return IsIntegralType(type) || (type->unqualified->kind == TypeKind::Enum && !IsScopedEnumeration(type));
}

bool IsScalar(const Type* type)
{
	type = type->unqualified;
	return IsArithmetic(type) || type->kind == TypeKind::Enum || type->kind == TypeKind::Pointer ||
		type->kind == TypeKind::MemberPointer || IsNullptrT(type);
}

bool IsObjectPointer(const Type* type)
{
	type = type->unqualified;
	return type->kind == TypeKind::Pointer && type->element->kind != TypeKind::Function;
}

uint32_t IndirectVirtualBases(const ClassEntity* cls)
{
	uint32_t count = 0;
	for (uint32_t i = 0; i < VirtualBaseCount(cls); ++i)
		count += VirtualBases(cls)[i].direct ? 0 : 1;
	return count;
}

const ClassEntity* MemberClassOf(const Entity* member)
{
	const ClassEntity* home = static_cast<const ClassEntity*>(member->owner->entity);
	while (member->kind == EntityKind::Variable && home->anonymous && home->storage != nullptr &&
		home->storage->entity->owner->kind == ScopeKind::Class)
		home = static_cast<const ClassEntity*>(home->storage->entity->owner->entity);
	return home;
}

bool ConversionRules::is_base_of(const ClassEntity* base, const ClassEntity* derived)
{
	// Depth-first over the acyclic base graph, each class once per query
	// (its mark), so shared bases do not multiply the walk. A derived class
	// that is an instance is defined first (its bases are then complete).
	if (base == nullptr || derived == nullptr || base == derived)
		return false;
	if (!derived->complete && completer_ != nullptr)
		completer_->complete(derived);
	if (derived->bases == nullptr)
		return false;
	++visit_;
	std::vector<const ClassEntity*>& stack = base_stack_;
	stack.clear();
	stack.push_back(derived);
	while (!stack.empty())
	{
		const ClassEntity* current = stack.back();
		stack.pop_back();
		for (const BaseClass* edge = current->bases; edge != nullptr; edge = edge->next)
		{
			ClassEntity* next = static_cast<ClassEntity*>(edge->base);
			if (next == base)
				return true;
			if (next->derivation_visit != visit_)
			{
				next->derivation_visit = visit_;
				stack.push_back(next);
			}
		}
	}
	return false;
}

const Type* ConversionRules::without_cv(const Type* type)
{
	if (type->kind != TypeKind::Array)
		return type->unqualified;
	return types_.array(without_cv(type->element), type->bound);
}

bool ConversionRules::reference_related(const Type* a, const Type* b)
{
	a = without_cv(a->canonical);
	b = without_cv(b->canonical);
	if (a == b)
		return true;
	if (function_conversion(b, a))
		return true;
	bool added = false, convertible = false;
	if (IsPointerLike(a) && IsPointerLike(b) && SimilarLevels(a, b, added, convertible))
		return true;
	return is_base_of(ClassEntityOf(a), ClassEntityOf(b));
}

bool ConversionRules::function_conversion(const Type* source, const Type* target)
{
	if (c_source_ && c_function_compatible(source, target))
		return true;
	return source->is_nothrow_function() && target->kind == TypeKind::Function && target->owner == nullptr &&
		types_.function(source->element, source->params, source->param_count, source->variadic, source->function_cv,
			source->ref) == target;
}

bool ConversionRules::c_function_compatible(const Type* source, const Type* target)
{
	source = source->canonical;
	target = target->canonical;
	if (source->kind != TypeKind::Function || target->kind != TypeKind::Function)
		return false;
	if (source == target)
		return true;
	if (!source->c_unprototyped() && !target->c_unprototyped())
		return c_type_compatible(source, target);
	if (!c_type_compatible(source->element, target->element))
		return false;
	const Type* unprototyped = source->c_unprototyped() ? source : target;
	const Type* other = source->c_unprototyped() ? target : source;
	if (unprototyped->param_count != 0 && (!other->c_unprototyped() || other->param_count != 0))
	{
		if (unprototyped->param_count != other->param_count || other->variadic)
			return false;
		for (uint32_t i = 0; i < other->param_count; ++i)
			if (!c_type_compatible(unprototyped->params[i]->unqualified, other->params[i]->unqualified))
				return false;
	}
	const Type* prototype = source->c_unprototyped() ? target : source;
	if (prototype->variadic)
		return false;
	for (uint32_t i = 0; i < prototype->param_count; ++i)
	{
		const Type* parameter = prototype->params[i]->unqualified;
		IntegralKind kind;
		if (IsFundamental(parameter, FundamentalType::Float) || IsBool(parameter) ||
			parameter->kind == TypeKind::Enum || (IntegralKindOf(parameter, kind) && kind.bits < 32))
			return false;
	}
	return true;
}

bool ConversionRules::c_type_compatible(const Type* source, const Type* target, bool ignore_cv)
{
	if (source == nullptr || target == nullptr)
		return false;
	if (ignore_cv && source->kind == TypeKind::Array && target->kind == TypeKind::Array)
		return (source->bound == target->bound || !source->constant_array_bound() || !target->constant_array_bound()) &&
			c_type_compatible(source->element, target->element, true);
	if (ignore_cv)
	{
		if ((source->cv & kAtomic) != (target->cv & kAtomic))
			return false;
		source = source->unqualified;
		target = target->unqualified;
	}
	source = source->canonical;
	target = target->canonical;
	if (source == target)
		return true;
	if (source->cv != target->cv)
		return false;
	if (source->kind == TypeKind::Enum && target->kind != TypeKind::Enum)
		return c_type_compatible(static_cast<const EnumEntity*>(source->entity)->underlying, target);
	if (target->kind == TypeKind::Enum && source->kind != TypeKind::Enum)
		return c_type_compatible(source, static_cast<const EnumEntity*>(target->entity)->underlying);
	if (source->kind != target->kind)
		return false;
	if (source->kind == TypeKind::Class || source->kind == TypeKind::Enum)
		return c23_names_ != nullptr && c_tag_compatible(source, target);
	if (source->kind == TypeKind::Pointer)
		return c_type_compatible(source->element, target->element);
	if (source->kind == TypeKind::Array)
		return (source->bound == target->bound || !source->constant_array_bound() || !target->constant_array_bound()) &&
			c_type_compatible(source->element, target->element);
	if (source->kind != TypeKind::Function)
		return false;
	if (source->c_unprototyped() || target->c_unprototyped())
		return c_function_compatible(source, target);
	if (source->variadic != target->variadic || source->param_count != target->param_count ||
		!c_type_compatible(source->element, target->element))
		return false;
	for (uint32_t i = 0; i < source->param_count; ++i)
		if (!c_type_compatible(source->params[i]->unqualified, target->params[i]->unqualified))
			return false;
	return true;
}

namespace {

unsigned CArrayBoundStrength(const Type* type)
{
	if (type->constant_array_bound())
		return 3;
	if (type->runtime_bound != nullptr)
		return 2;
	return type->c_array_star() ? 1 : 0;
}

unsigned CFunctionPrototypeStrength(const Type* type)
{
	return !type->c_unprototyped() ? 2 : type->param_count != 0;
}

} // namespace

// A record can be reused only if each member already meets the composite
// requirements, including members reached through recursive pointers. Walk
// the pairs once and propagate lost reuse choices back along their edges.
struct ConversionRules::CTagComposite
{
	enum : uint8_t
	{
		Prior = 1,
		Declared = 2,
		Either = Prior | Declared
	};
	struct Record
	{
		CTagPair pair;
		uint32_t first_parent;
		uint8_t reuse;
		const Type* type;
		ClassEntity* created;
	};
	struct ParentEdge
	{
		uint32_t record;
		uint32_t next;
	};

	CTagComposite*& active;
	FlatMap<CTagPair, uint32_t, CTagPairHash> indices;
	std::vector<Record> records;
	std::vector<ParentEdge> parents;

	explicit CTagComposite(CTagComposite*& current) : active(current) { active = this; }
	~CTagComposite() { active = nullptr; }

	uint32_t add_record(const CTagPair& pair)
	{
		if (const uint32_t* found = indices.find(pair))
			return *found;
		const uint32_t index = static_cast<uint32_t>(records.size());
		indices.insert(pair, index);
		records.push_back(Record{ pair, PointerMap::kMissing, Either, nullptr, nullptr });
		return index;
	}

	void prefer(uint32_t index, unsigned prior, unsigned declared)
	{
		if (prior != declared)
			records[index].reuse &= prior > declared ? Prior : Declared;
	}

	void require_members(const Type* prior, const Type* declared, uint32_t index)
	{
		if (prior->canonical == declared->canonical)
			return;
		switch (declared->kind)
		{
		case TypeKind::Pointer:
			require_members(prior->element, declared->element, index);
			break;
		case TypeKind::Array:
			prefer(index, CArrayBoundStrength(prior), CArrayBoundStrength(declared));
			require_members(prior->element, declared->element, index);
			break;
		case TypeKind::Function:
			prefer(index, CFunctionPrototypeStrength(prior), CFunctionPrototypeStrength(declared));
			require_members(prior->element, declared->element, index);
			if (!prior->c_unprototyped() && !declared->c_unprototyped())
				for (uint32_t i = 0; i < declared->param_count; ++i)
					require_members(prior->params[i]->unqualified, declared->params[i]->unqualified, index);
			break;
		case TypeKind::Class:
		{
			const uint32_t child = add_record(CTagPair{ prior->entity, declared->entity });
			Record& link = records[child];
			parents.push_back(ParentEdge{ index, link.first_parent });
			link.first_parent = static_cast<uint32_t>(parents.size() - 1);
			break;
		}
		default:
			break;
		}
	}

	void plan(const CTagPair& root)
	{
		add_record(root);
		for (size_t i = 0; i < records.size(); ++i)
		{
			const CTagPair pair = records[i].pair;
			const auto& prior = static_cast<const ClassEntity&>(*pair.first);
			const auto& declared = static_cast<const ClassEntity&>(*pair.second);
			prefer(static_cast<uint32_t>(i), prior.may_alias, declared.may_alias);
			const DataMember* b = declared.members;
			for (const DataMember* a = prior.members; a != nullptr; a = a->next, b = b->next)
				require_members(a->variable->type, b->variable->type, static_cast<uint32_t>(i));
		}
		propagate_reuse();
		plan_anonymous_members();
	}

	void propagate_reuse()
	{
		std::vector<uint32_t> pending;
		for (size_t i = 0; i < records.size(); ++i)
			if (records[i].reuse != Either)
				pending.push_back(static_cast<uint32_t>(i));
		for (size_t i = 0; i < pending.size(); ++i)
		{
			const Record& child = records[pending[i]];
			for (uint32_t link = child.first_parent; link != PointerMap::kMissing; link = parents[link].next)
			{
				const uint32_t index = parents[link].record;
				Record& parent = records[index];
				const uint8_t reuse = parent.reuse & child.reuse;
				if (reuse == parent.reuse)
					continue;
				parent.reuse = reuse;
				pending.push_back(index);
			}
		}
	}

	void plan_anonymous_members()
	{
		// An anonymous member's storage binding belongs to its containing
		// object. A synthesized parent needs its own anonymous child.
		for (size_t i = 0; i < records.size(); ++i)
		{
			if (records[i].reuse != 0)
				continue;
			const CTagPair pair = records[i].pair;
			const DataMember* b = static_cast<const ClassEntity*>(pair.second)->members;
			for (const DataMember* a = static_cast<const ClassEntity*>(pair.first)->members; a != nullptr;
				a = a->next, b = b->next)
			{
				const auto& left = static_cast<const VariableEntity&>(*a->variable);
				const auto& right = static_cast<const VariableEntity&>(*b->variable);
				if (!CAnonymousMembers(left, right))
					continue;
				const CTagPair child{ left.type->entity, right.type->entity };
				if (const uint32_t* index = indices.find(child))
					records[*index].reuse = 0;
			}
		}
	}
};

const Type* ConversionRules::c_composite_record(const Type* prior, const Type* declared)
{
	const CTagPair pair{ prior->entity, declared->entity };
	if (c_tag_composite_ != nullptr)
		return types_.qualified(c_tag_composite_->records[*c_tag_composite_->indices.find(pair)].type, declared->cv);
	if (const Type* const* saved = composite_tags_.find(pair.symmetric_key()))
		return types_.qualified(*saved, declared->cv);
	CTagComposite composite(c_tag_composite_);
	composite.plan(pair);
	for (CTagComposite::Record& item : composite.records)
	{
		const auto& a = static_cast<const ClassEntity&>(*item.pair.first);
		const auto& b = static_cast<const ClassEntity&>(*item.pair.second);
		if (item.reuse == 0)
		{
			if (!b.anonymous)
				if (const Type* const* saved = composite_tags_.find(item.pair.symmetric_key()))
				{
					item.type = *saved;
					continue;
				}
			item.created = completer_->begin_c_composite_record(b);
			item.created->may_alias = a.may_alias || b.may_alias;
			item.type = item.created->type;
		}
		else
			item.type = (item.reuse & CTagComposite::Declared) != 0 ? b.type : a.type;
	}
	std::vector<const Type*> members;
	// Direct anonymous children follow their parent in the walk. Bind
	// their members before the parent injects them into its own scope.
	for (auto item = composite.records.rbegin(); item != composite.records.rend(); ++item)
	{
		if (item->created == nullptr)
			continue;
		const auto& target = static_cast<const ClassEntity&>(*item->pair.second);
		const DataMember* b = target.members;
		members.clear();
		for (const DataMember* a = static_cast<const ClassEntity*>(item->pair.first)->members; a != nullptr;
			a = a->next, b = b->next)
			members.push_back(c_composite_type(a->variable->type, b->variable->type));
		completer_->finish_c_composite_record(*item->created, target, members.data());
	}
	for (const CTagComposite::Record& item : composite.records)
	{
		const CTagPair key = item.pair.symmetric_key();
		if (!static_cast<const ClassEntity*>(item.pair.second)->anonymous && composite_tags_.find(key) == nullptr)
			composite_tags_.insert(key, item.type);
	}
	return types_.qualified(composite.records.front().type, declared->cv);
}

const Type* ConversionRules::c_composite_type(const Type* prior, const Type* declared)
{
	if (prior->canonical == declared->canonical)
		return declared;
	// 6.2.7p3: preserve the stronger bounds and prototypes through each
	// derived type. Reuse either existing type if its children already fit.
	switch (declared->kind)
	{
	case TypeKind::Class:
		return c_composite_record(prior, declared);
	case TypeKind::Pointer:
	{
		const Type* element = c_composite_type(prior->element, declared->element);
		return element == declared->element ? declared
			: element == prior->element     ? prior
											: types_.qualified(types_.pointer(element), declared->cv);
	}
	case TypeKind::Array:
	{
		const Type* bounds = declared;
		if (!declared->constant_array_bound() &&
			(prior->constant_array_bound() ||
				(declared->runtime_bound == nullptr && (prior->runtime_bound != nullptr || prior->c_array_star()))))
			bounds = prior;
		const Type* element = c_composite_type(prior->element, declared->element);
		if (element == bounds->element)
			return bounds;
		if (bounds->c_array_star())
			return types_.c_array_star(element);
		return types_.array(element, bounds->bound, nullptr, bounds->runtime_bound, bounds->zero_length_array());
	}
	case TypeKind::Function:
		return c_composite_function(prior, declared);
	default:
		return declared;
	}
}

const Type* ConversionRules::c_composite_function(const Type* prior, const Type* declared)
{
	const Type* result = c_composite_type(prior->element, declared->element);
	const Type* shape = declared;
	if (declared->c_unprototyped() && (!prior->c_unprototyped() || prior->param_count > declared->param_count))
		shape = prior;
	const Type* const* parameters = shape->params;
	SmallList<const Type*, 8> combined;
	if (!prior->c_unprototyped() && !declared->c_unprototyped())
	{
		for (uint32_t i = 0; i < declared->param_count; ++i)
		{
			const Type* type = c_composite_type(prior->params[i]->unqualified, declared->params[i]->unqualified);
			if (combined.empty())
			{
				if (type == declared->params[i]->unqualified)
					continue;
				combined.assign(declared->params, i);
			}
			combined.push_back(type);
		}
		if (!combined.empty())
			parameters = combined.data();
	}
	if (result == shape->element && parameters == shape->params)
		return shape;
	const Type* type = types_.function(
		result, parameters, shape->param_count, shape->variadic, shape->function_cv, shape->ref);
	return shape->c_unprototyped() ? types_.c_unprototyped(type) : type;
}

bool ConversionRules::c_pointer_extension(const Type* source, const Type* target)
{
	if ((IsVoid(source) && target->kind == TypeKind::Function) ||
		(IsVoid(target) && source->kind == TypeKind::Function))
		return true;
	if (((source->cv | target->cv) & kAtomic) != 0)
		return false;
	source = source->unqualified;
	target = target->unqualified;
	if (source->kind != TypeKind::Fundamental || target->kind != TypeKind::Fundamental ||
		source->fundamental == target->fundamental)
		return false;
	const auto family = [](FundamentalType type) {
		switch (type)
		{
		case FundamentalType::Char:
		case FundamentalType::SignedChar:
			return FundamentalType::UnsignedChar;
		case FundamentalType::ShortInt:
			return FundamentalType::UnsignedShortInt;
		case FundamentalType::Int:
			return FundamentalType::UnsignedInt;
		case FundamentalType::LongInt:
			return FundamentalType::UnsignedLongInt;
		case FundamentalType::LongLongInt:
			return FundamentalType::UnsignedLongLongInt;
		case FundamentalType::Int128:
			return FundamentalType::UnsignedInt128;
		default:
			return type;
		}
	};
	return family(source->fundamental) == family(target->fundamental);
}

bool ConversionRules::qualification_convertible(const Type* from, const Type* to)
{
	bool added = false, convertible = false;
	return SimilarLevels(from, to, added, convertible) && convertible;
}

bool ConversionRules::casts_away_constness(const Type* from, const Type* to)
{
	// Over the pointer levels both types have, from the outermost, the
	// pointed-to qualifiers of `from` admit no qualification conversion
	// (4.4p4) to those of `to`; member pointers count as pointers.
	bool const_so_far = true;
	for (;;)
	{
		from = from->unqualified;
		to = to->unqualified;
		if (!IsPointerLike(from) || !IsPointerLike(to))
			return false;
		const uint8_t cf = CvOf(from->element), ct = CvOf(to->element);
		if ((cf & ~ct) != 0 || (cf != ct && !const_so_far))
			return true;
		const_so_far = const_so_far && (ct & kConst) != 0;
		from = from->element;
		to = to->element;
	}
}

bool ConversionRules::const_castable(const Type* from, const Type* to)
{
	// 5.2.11p3: the same pointer and member pointer levels (of one class
	// each) down to one object type or void; a pointer to function is such
	// an object type below a level (its function type is not qualified).
	for (unsigned levels = 0;; ++levels)
	{
		from = from->unqualified;
		to = to->unqualified;
		if (!IsPointerLike(from) || !IsPointerLike(to))
			return levels != 0 && !IsPointerLike(from) && !IsPointerLike(to) && from->kind != TypeKind::Function &&
				SameArrayShape(from, to);
		if (from->kind != to->kind || (from->kind == TypeKind::MemberPointer && from->owner != to->owner))
			return false;
		if (from->element->kind == TypeKind::Function || to->element->kind == TypeKind::Function)
			return levels != 0 && from->canonical == to->canonical;
		from = from->element;
		to = to->element;
	}
}

bool ConversionRules::implicit(const Operand& from, const Type* target, bool direct, Conversion& out)
{
	target = target->canonical;
	out = Conversion();
	out.target = target;
	if (target->is_reference())
		return reference(from, target, out);
	return standard(from, target, direct, out);
}

bool ConversionRules::c_overload(const Operand& from, const Type* target, Conversion& out)
{
	const bool valid = implicit(from, target, false, out);
	const Type* source = from.type->unqualified;
	if (source->kind == TypeKind::Array && !array_decays(from.category))
		return valid;
	target = target->unqualified;
	if (target->kind == TypeKind::Pointer)
	{
		const Type* pointee = source->kind == TypeKind::Function                   ? source
			: source->kind == TypeKind::Pointer || source->kind == TypeKind::Array ? source->element
																				   : nullptr;
		if (pointee == nullptr || (valid && out.rank == ConversionRank::Exact))
			return valid;
		const Type* to = target->element;
		if (valid && IsVoid(to) && !IsVoid(pointee) && (pointee->cv & ~to->cv) == 0)
			return true;
		const bool qualified = (pointee->cv & ~to->cv) == 0 && ((pointee->cv ^ to->cv) & kAtomic) == 0;
		const bool compatible = qualified &&
			(c_type_compatible(pointee->unqualified, to->unqualified) ||
				(IsVoid(pointee) && to->kind != TypeKind::Function));
		out.second = ValueConversion::CPointer;
		out.result = target;
		out.rank = compatible ? ConversionRank::CCompatible : ConversionRank::CIncompatiblePointer;
		return true;
	}
	if (!valid)
		return false;
	if (target->kind == TypeKind::Complex && source->kind == TypeKind::Complex)
	{
		source = source->element->unqualified;
		target = target->element->unqualified;
	}
	else if (source->kind == TypeKind::Complex && out.second == ValueConversion::Complex)
		out.rank = ConversionRank::ComplexReal;
	if ((IsFundamental(source, FundamentalType::Float) || IsFundamental(source, FundamentalType::Double)) &&
		(IsFundamental(target, FundamentalType::LongDouble) || IsFundamental(target, FundamentalType::Float128)))
		out.rank = ConversionRank::Promotion;
	return true;
}

bool ConversionRules::standard(const Operand& from, const Type* target, bool direct, Conversion& out)
{
	out.form = ConversionForm::Standard;
	out.rank = ConversionRank::Exact;
	const Type* goal = target->unqualified;
	const Type* source = from.type->canonical;
	// 13.3.3.1p6: a class operand converts to its own class (identity) or
	// to a base (a derived-to-base Conversion); user-defined conversions
	// are not considered here.
	if (source->unqualified->kind == TypeKind::Class || goal->kind == TypeKind::Class)
	{
		if (source->unqualified == goal ||
			(c23_names_ != nullptr && goal->kind == TypeKind::Class && c_type_compatible(source->unqualified, goal)))
		{
			out.result = goal;
			return true;
		}
		if (goal->kind == TypeKind::Class && ClassEntityOf(source) != nullptr &&
			is_base_of(ClassEntityOf(goal), ClassEntityOf(source)))
		{
			out.second = ValueConversion::DerivedToBase;
			out.rank = ConversionRank::Conversion;
			out.result = goal;
			return true;
		}
		return false;
	}
	// The lvalue transformation (4.1, 4.2, 4.3).
	if (source->kind == TypeKind::Array)
	{
		if (!array_decays(from.category))
		{
			out.result = goal;
			return source->unqualified == goal;
		}
		out.first = LvalueTransform::ArrayToPointer;
		source = types_.pointer(source->element);
	}
	else if (source->kind == TypeKind::Function)
	{
		out.first = LvalueTransform::FunctionToPointer;
		source = types_.pointer(source);
	}
	else
	{
		if (from.category != ValueCategory::PRValue)
			out.first = LvalueTransform::LvalueToRvalue;
		// 3.10p4: a prvalue of non-class type is cv-unqualified.
		source = source->unqualified;
	}
	if (IsVoid(source) || IsVoid(goal))
		return false;
	if (source == goal)
	{
		out.result = goal;
		return true;
	}
	if (source->kind == TypeKind::Vector && goal->kind == TypeKind::Vector && source->owner == nullptr &&
		goal->owner == nullptr && source->bound == goal->bound && source->element == goal->element)
	{
		out.result = goal;
		return true;
	}
	return value_conversion(source, from.flags, goal, direct, out);
}

bool ConversionRules::value_conversion(
	const Type* source, uint16_t flags, const Type* goal, bool direct, Conversion& out)
{
	if (IsPointerLike(source) && source->kind == goal->kind &&
		(source->kind != TypeKind::MemberPointer || source->owner == goal->owner) &&
		function_conversion(source->element, goal->element))
	{
		out.second = ValueConversion::FunctionPointer;
		out.result = goal;
		return true;
	}
	// A qualification adjustment alone (4.4).
	if (IsPointerLike(source) && IsPointerLike(goal) && qualification_convertible(source, goal))
	{
		out.qualification = true;
		out.result = goal;
		return true;
	}
	// 4.5, 4.6: promotions.
	if (IsIntegralPromotion(types_, source, goal))
	{
		out.second = source->kind == TypeKind::Enum && static_cast<const EnumEntity*>(source->entity)->fixed &&
				static_cast<const EnumEntity*>(source->entity)->underlying == goal
			? ValueConversion::FixedEnumPromotion
			: ValueConversion::IntegralPromotion;
		out.rank = ConversionRank::Promotion;
		out.result = goal;
		return true;
	}
	if ((IsFundamental(source, FundamentalType::Float) && IsFundamental(goal, FundamentalType::Double)) ||
		(IsFundamental(source, FundamentalType::StorageHalf) && IsFundamental(goal, FundamentalType::Float)))
	{
		out.second = ValueConversion::FloatingPromotion;
		out.rank = ConversionRank::Promotion;
		out.result = goal;
		return true;
	}
	out.rank = ConversionRank::Conversion;
	out.result = goal;
	// 4.12: to bool (a GNU complex value too, true unless both parts are
	// zero). An enum with a bool base has the same conversions in C.
	const bool c_enum = c_source_ && goal->kind == TypeKind::Enum;
	if (IsBool(goal) || (c_enum && IsBooleanEnumeration(goal)))
	{
		if (IsArithmetic(source) || IsIntegralOrUnscopedEnum(source) || IsComplex(source))
		{
			out.second = ValueConversion::Boolean;
			return true;
		}
		if (IsPointerLike(source) || (IsNullptrT(source) && (direct || c_source_)))
		{
			out.second = ValueConversion::PointerBoolean;
			return true;
		}
		return false;
	}
	// GNU: to a complex type from a real or complex one (GCC converts no
	// complex value to a real type implicitly in C++); a complex value
	// whose parts promote (4.5, 4.6: _Complex short to _Complex int,
	// _Complex char32_t to _Complex unsigned, complex float to complex
	// double) is promoted, as GCC ranks it (Clang alike but for the
	// character types' parts; a bool part promotes in neither).
	if (IsComplex(goal) && (IsArithmetic(source) || IsIntegralOrUnscopedEnum(source) || IsComplex(source)))
	{
		out.second = ValueConversion::Complex;
		const Type* from = IsComplex(source) ? source->element->unqualified : nullptr;
		const Type* to = goal->unqualified->element->unqualified;
		if (from == nullptr)
			out.rank = ConversionRank::ComplexReal;
		else if ((IsFundamental(from, FundamentalType::Float) && IsFundamental(to, FundamentalType::Double)) ||
			(!IsBool(from) && IsIntegralPromotion(types_, from, to)))
			out.rank = ConversionRank::Promotion;
		return true;
	}
	// C99 6.3.1.7: convert the real component to the destination type.
	if (c_source_ && IsComplex(source) && (IsArithmetic(goal) || c_enum))
	{
		out.second = ValueConversion::Complex;
		return true;
	}
	// 4.7, 4.8, 4.9.
	const bool integral_goal = c_enum || IsIntegralType(goal);
	if (integral_goal && IsIntegralOrUnscopedEnum(source))
	{
		out.second = ValueConversion::IntegralConversion;
		return true;
	}
	if (IsFloating(goal) && IsFloating(source))
	{
		// Clang converts between bfloat16 and binary16 by the usual
		// arithmetic conversions only (no initialization, cast or overload
		// converts one to the other).
		const FundamentalType from = source->unqualified->fundamental;
		const FundamentalType to = goal->unqualified->fundamental;
		if (!arithmetic_ &&
			((from == FundamentalType::BFloat16 && to == FundamentalType::Float16) ||
				(from == FundamentalType::Float16 && to == FundamentalType::BFloat16)))
			return false;
		out.second = ValueConversion::FloatingConversion;
		return true;
	}
	if ((IsFloating(goal) && IsIntegralOrUnscopedEnum(source)) || (integral_goal && IsFloating(source)))
	{
		out.second = ValueConversion::FloatingIntegral;
		return true;
	}
	// 4.10p1, 4.11p1: a null pointer constant (an integer literal zero, or
	// a std::nullptr_t prvalue) to a pointer, member pointer or nullptr_t.
	const bool null_constant = (flags & kNullLiteral) != 0 || IsNullptrT(source);
	if (null_constant && (IsPointerLike(goal) || (IsNullptrT(goal) && (flags & kNullLiteral) != 0)))
	{
		out.second = ValueConversion::NullPointer;
		return true;
	}
	// 4.11p2: a pointer to member of a class to one of a class derived
	// from it, then a qualification adjustment.
	if (source->kind == TypeKind::MemberPointer && goal->kind == TypeKind::MemberPointer)
	{
		const ClassEntity* base = ClassEntityOf(source->owner);
		const ClassEntity* derived = ClassEntityOf(goal->owner);
		if (base == nullptr || derived == nullptr || !is_base_of(base, derived))
			return false;
		const Type* adjusted = types_.member_pointer(goal->owner, source->element);
		out.second = ValueConversion::MemberToDerived;
		out.qualification = adjusted != goal;
		return adjusted == goal || qualification_convertible(adjusted, goal);
	}
	if (source->kind != TypeKind::Pointer || goal->kind != TypeKind::Pointer)
		return false;
	// 4.10p2: pointer to cv T (an object type) to pointer to cv void, then
	// a qualification adjustment.
	const Type* pointee = source->element;
	if (c_source_)
	{
		const Type* destination = goal->element;
		const bool qualified = (pointee->cv & ~destination->cv) == 0 &&
			((pointee->cv ^ destination->cv) & kAtomic) == 0;
		const bool relaxed = c_extensions_ && ((pointee->cv | destination->cv) & kAtomic) == 0;
		if (c_pointer_extension(pointee, destination) ||
			((qualified || relaxed) && c_type_compatible(pointee->unqualified, destination->unqualified)) ||
			(relaxed &&
				((IsVoid(pointee) && destination->kind != TypeKind::Function) ||
					(IsVoid(destination) && pointee->kind != TypeKind::Function))))
		{
			out.second = ValueConversion::CPointer;
			out.result = goal;
			return true;
		}
	}
	if (c_source_ && IsVoid(pointee) && goal->element->kind != TypeKind::Function &&
		(CvOf(pointee) & ~CvOf(goal->element)) == 0)
	{
		out.second = ValueConversion::PointerToVoid;
		return true;
	}
	if (IsVoid(goal->element) && pointee->kind != TypeKind::Function && !IsVoid(pointee))
	{
		const Type* adjusted = types_.pointer(
			types_.qualified(types_.fundamental(FundamentalType::Void), CvOf(pointee)));
		out.second = ValueConversion::PointerToVoid;
		out.qualification = adjusted != goal;
		return adjusted == goal || qualification_convertible(adjusted, goal);
	}
	// 4.10p3: pointer to a class to pointer to its base class.
	const ClassEntity* derived = ClassEntityOf(pointee);
	const ClassEntity* base = ClassEntityOf(goal->element);
	if (derived != nullptr && base != nullptr && is_base_of(base, derived))
	{
		const Type* adjusted = types_.pointer(types_.qualified(base->type, pointee->cv));
		out.second = ValueConversion::DerivedToBase;
		out.qualification = adjusted != goal;
		return adjusted == goal || qualification_convertible(adjusted, goal);
	}
	return false;
}

bool ConversionRules::reference(const Operand& from, const Type* target, Conversion& out)
{
	// 8.5.3p5.
	out.form = ConversionForm::Reference;
	out.rank = ConversionRank::Exact;
	const bool rvalue_reference = target->kind == TypeKind::RValueReference;
	out.rvalue_reference = rvalue_reference;
	const Type* referenced = target->element;
	const Type* source = from.type->canonical;
	const bool related = reference_related(referenced, source);
	bool compatible = related && (CvOf(source) & ~CvOf(referenced)) == 0;
	if (compatible && IsPointerLike(source) && IsPointerLike(referenced) &&
		without_cv(source) != without_cv(referenced))
	{
		compatible = qualification_convertible(types_.pointer(source), types_.pointer(referenced->canonical));
		out.qualification = compatible;
	}
	const bool function_lvalue = source->kind == TypeKind::Function && from.category == ValueCategory::LValue;
	out.function_lvalue = function_lvalue;
	const bool function_adjustment = function_conversion(source, referenced);
	const bool derived = related && source->unqualified->kind == TypeKind::Class &&
		without_cv(source) != without_cv(referenced) && !function_adjustment;
	if (function_adjustment)
		out.second = ValueConversion::FunctionPointer;
	const bool const_lvalue = !rvalue_reference && CvOf(referenced) == kConst;
	// CWG 2352, as both hosts and the course apply it in C++11 mode: a
	// pointer whose pointer converts to a pointer to the referenced type by
	// a qualification conversion is reference-compatible with it, an lvalue
	// bound directly (`const int* const& r = p` for an `int* p`).
	if (!related && !rvalue_reference && from.category == ValueCategory::LValue && IsPointerLike(source->unqualified) &&
		IsPointerLike(referenced->unqualified) &&
		qualification_convertible(types_.pointer(source), types_.pointer(referenced->canonical)))
	{
		out.result = referenced;
		out.qualification = true;
		return true;
	}
	// An lvalue that is not a bit-field binds an lvalue reference directly;
	// a const one binds to a temporary copy of a bit-field's value. To
	// another lvalue reference a bit-field is an lvalue of its type in the
	// conversion sequence (13.3.3.1.4p4), a binding the analysis rejects
	// once it is used (8.5.3p5, see Analyzer::convert).
	if (!rvalue_reference && from.category == ValueCategory::LValue && compatible &&
		((from.flags & kBitField) == 0 || !const_lvalue))
	{
		out.result = referenced;
		if (derived)
		{
			out.second = ValueConversion::DerivedToBase;
			out.rank = ConversionRank::Conversion;
		}
		return true;
	}
	if (!rvalue_reference && !const_lvalue)
		return false;
	// An xvalue, class or array prvalue, or function lvalue binds a const
	// lvalue or an rvalue reference directly.
	const bool direct_kind = from.category == ValueCategory::XValue ||
		(from.category == ValueCategory::PRValue &&
			(source->unqualified->kind == TypeKind::Class || source->kind == TypeKind::Array)) ||
		function_lvalue;
	if (direct_kind && compatible && (from.flags & kBitField) == 0)
	{
		out.result = referenced;
		if (derived)
		{
			out.second = ValueConversion::DerivedToBase;
			out.rank = ConversionRank::Conversion;
		}
		return true;
	}
	if (related)
	{
		// The cv-qualification may not decrease, and an rvalue reference
		// does not bind an lvalue of a related type.
		if ((CvOf(source) & ~CvOf(referenced)) != 0)
			return false;
		if (rvalue_reference && from.category == ValueCategory::LValue)
			return false;
	}
	if (referenced->kind == TypeKind::Function)
		return false;
	// Otherwise a temporary of the referenced type is copy-initialized from
	// the operand (8.5.3p5, last bullet).
	Conversion temporary = Conversion();
	temporary.target = referenced->unqualified;
	if (!standard(from, referenced->unqualified, false, temporary))
		return false;
	out.first = temporary.first;
	out.second = temporary.second;
	out.qualification = temporary.qualification;
	out.rank = temporary.rank;
	out.temporary = true;
	out.result = referenced;
	return true;
}

int ConversionRules::compare(const Conversion& a, const Conversion& b)
{
	// 13.3.3.2p2: a standard conversion sequence beats an ellipsis one.
	const bool a_ellipsis = a.form == ConversionForm::Ellipsis;
	const bool b_ellipsis = b.form == ConversionForm::Ellipsis;
	if (a_ellipsis || b_ellipsis)
		return a_ellipsis == b_ellipsis ? 0 : a_ellipsis ? -1 : 1;
	// p2: a standard conversion sequence beats a user-defined one; p3: two
	// user-defined ones by different constructors are indistinguishable,
	// by one constructor they compare by their second standard conversion.
	const bool a_user = a.rank == ConversionRank::UserDefined;
	const bool b_user = b.rank == ConversionRank::UserDefined;
	if (a_user != b_user)
		return a_user ? -1 : 1;
	if (a.ambiguous || b.ambiguous)
		return 0;
	// p3: of two list-initialization sequences, one converting to
	// std::initializer_list<X> beats one that does not.
	if (a.initializer_list != b.initializer_list)
		return a.initializer_list ? 1 : -1;
	// CWG1307: the same array element type, initialized from a list,
	// prefers the smaller viable bound. Ordinary array bindings do not.
	if (a.array_list && b.array_list && a.result->element == b.result->element && a.result->bound != b.result->bound)
		return a.result->bound < b.result->bound ? 1 : -1;
	if (a_user && a.constructor != b.constructor)
		return 0;
	// One conversion function: its second standard conversions decide.
	if (a_user && a.after != nullptr && b.after != nullptr)
		return compare(*a.after, *b.after);
	// p3: a proper subsequence (the second and third steps, lvalue
	// transformations excluded; identity is a subsequence of any other).
	const bool a_identity = a.second == ValueConversion::None && !a.qualification;
	const bool b_identity = b.second == ValueConversion::None && !b.qualification;
	if (a_identity != b_identity)
		return a_identity ? 1 : -1;
	if (a.second == b.second && a.qualification != b.qualification)
		return a.qualification ? -1 : 1;
	if (a.rank != b.rank)
		return a.rank < b.rank ? 1 : -1;
	if (a.second == ValueConversion::FixedEnumPromotion && b.second == ValueConversion::IntegralPromotion)
		return 1;
	if (b.second == ValueConversion::FixedEnumPromotion && a.second == ValueConversion::IntegralPromotion)
		return -1;
	// p4: of the same rank, a conversion that does not convert a pointer,
	// member pointer or nullptr_t to bool beats one that does.
	const bool a_bool = a.second == ValueConversion::PointerBoolean;
	const bool b_bool = b.second == ValueConversion::PointerBoolean;
	if (a_bool != b_bool)
		return a_bool ? -1 : 1;
	// B* to A* beats B* to void*.
	if (a.second == ValueConversion::DerivedToBase && b.second == ValueConversion::PointerToVoid)
		return 1;
	if (b.second == ValueConversion::DerivedToBase && a.second == ValueConversion::PointerToVoid)
		return -1;
	// Of two derived-to-base conversions from one class (of pointers, of
	// class objects or reference bindings), the one to the more derived
	// base is better.
	if (a.second == ValueConversion::DerivedToBase && b.second == ValueConversion::DerivedToBase)
	{
		const ClassEntity* ca = ClassEntityOf(DerivationTarget(a));
		const ClassEntity* cb = ClassEntityOf(DerivationTarget(b));
		if (ca != cb && ca != nullptr && cb != nullptr)
		{
			if (is_base_of(cb, ca))
				return 1;
			if (is_base_of(ca, cb))
				return -1;
		}
	}
	// Of two pointer to member conversions from one class, the one to the
	// less derived class is better (p4: A::* to B::* beats A::* to C::*).
	if (a.second == ValueConversion::MemberToDerived && b.second == ValueConversion::MemberToDerived)
	{
		const ClassEntity* ca = ClassEntityOf(a.result->unqualified->owner);
		const ClassEntity* cb = ClassEntityOf(b.result->unqualified->owner);
		if (ca != cb && ca != nullptr && cb != nullptr)
		{
			if (is_base_of(ca, cb))
				return 1;
			if (is_base_of(cb, ca))
				return -1;
		}
	}
	// Differing only in their qualification conversions, yielding similar
	// types: the less qualified result is better.
	if (a.second == b.second && a.qualification && b.qualification && a.form == ConversionForm::Standard &&
		b.form == ConversionForm::Standard && a.result != b.result && IsPointerLike(a.result) &&
		IsPointerLike(b.result))
	{
		if (qualification_convertible(a.result, b.result))
			return 1;
		if (qualification_convertible(b.result, a.result))
			return -1;
	}
	if (a.form == ConversionForm::Reference && b.form == ConversionForm::Reference)
	{
		// An rvalue reference bound to an rvalue beats an lvalue reference.
		const bool a_rvalue = a.rvalue_reference && !a.function_lvalue;
		const bool b_rvalue = b.rvalue_reference && !b.function_lvalue;
		if (a_rvalue != b_rvalue && !a.function_lvalue && !b.function_lvalue && !a.implicit_object &&
			!b.implicit_object && (a_rvalue ? !b.rvalue_reference : !a.rvalue_reference))
			return a_rvalue ? 1 : -1;
		// An lvalue reference bound to a function lvalue beats an rvalue one.
		if (a.function_lvalue && b.function_lvalue && a.rvalue_reference != b.rvalue_reference)
			return a.rvalue_reference ? -1 : 1;
		// References to the same type but for cv (an array's its elements',
		// 3.9.3p5): the less qualified wins.
		const Type* ra = a.target->element;
		const Type* rb = b.target->element;
		const uint8_t cva = CvOf(ra), cvb = CvOf(rb);
		if (cva != cvb && without_cv(ra->canonical) == without_cv(rb->canonical))
		{
			if ((cva & ~cvb) == 0)
				return 1;
			if ((cvb & ~cva) == 0)
				return -1;
		}
	}
	return 0;
}

} // namespace sema
