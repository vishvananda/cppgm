#include "support/unicode/identifier.h"

#include <algorithm>
#include <array>

namespace unicode {
namespace {

struct PropertyRange
{
	char32_t first;
	char32_t last;
	uint8_t combining_class;
	uint8_t flags;
};

#include "support/unicode/identifier_data.inc"

constexpr uint64_t kCodePointMask = (1ULL << 21) - 1;
constexpr char32_t kLeadingJamo = 0x1100;
constexpr char32_t kVowelJamo = 0x1161;
constexpr char32_t kTrailingJamo = 0x11A7;
constexpr char32_t kHangulSyllable = 0xAC00;
constexpr unsigned kLeadCount = 19;
constexpr unsigned kVowelCount = 21;
constexpr unsigned kTrailCount = 28;
constexpr unsigned kVowelAndTrailCount = kVowelCount * kTrailCount;
constexpr unsigned kSyllableCount = kLeadCount * kVowelAndTrailCount;

struct Unit
{
	char32_t code_point;
	uint8_t combining_class;
};

uint8_t CombiningClass(char32_t code_point)
{
	return code_point < 0x80 ? 0 : Properties(code_point).combining_class;
}

void Decompose(char32_t code_point, std::vector<Unit>& units)
{
	if (code_point >= kHangulSyllable && code_point < kHangulSyllable + kSyllableCount)
	{
		const unsigned index = code_point - kHangulSyllable;
		units.push_back({ kLeadingJamo + index / kVowelAndTrailCount, 0 });
		units.push_back({ kVowelJamo + (index % kVowelAndTrailCount) / kTrailCount, 0 });
		if (const unsigned trail = index % kTrailCount)
			units.push_back({ kTrailingJamo + trail, 0 });
		return;
	}
	if (code_point >= 0x80)
	{
		const auto end = std::end(kDecompositions);
		const auto found = std::lower_bound(std::begin(kDecompositions), end, code_point,
			[](uint64_t record, char32_t point) { return (record >> 42) < point; });
		if (found != end && (*found >> 42) == code_point)
		{
			Decompose(static_cast<char32_t>((*found >> 21) & kCodePointMask), units);
			if (const auto second = static_cast<char32_t>(*found & kCodePointMask))
				Decompose(second, units);
			return;
		}
	}
	units.push_back({ code_point, CombiningClass(code_point) });
}

char32_t Compose(char32_t first, char32_t second)
{
	if (first >= kLeadingJamo && first < kLeadingJamo + kLeadCount && second >= kVowelJamo &&
		second < kVowelJamo + kVowelCount)
	{
		return kHangulSyllable + ((first - kLeadingJamo) * kVowelCount + second - kVowelJamo) * kTrailCount;
	}
	if (first >= kHangulSyllable && first < kHangulSyllable + kSyllableCount &&
		(first - kHangulSyllable) % kTrailCount == 0 && second > kTrailingJamo && second < kTrailingJamo + kTrailCount)
	{
		return first + second - kTrailingJamo;
	}
	const uint64_t key = (static_cast<uint64_t>(first) << 21) | second;
	const auto end = std::end(kCompositions);
	const auto found = std::lower_bound(
		std::begin(kCompositions), end, key, [](uint64_t record, uint64_t key) { return (record >> 21) < key; });
	return found != end && (*found >> 21) == key ? static_cast<char32_t>(*found & kCodePointMask) : 0;
}

// Canonical reordering is stable for equal classes. Counting the fixed
// number of classes keeps even a long, unordered run linear.
void Reorder(Unit* first, Unit* last, std::vector<Unit>& scratch)
{
	std::array<std::size_t, 256> positions{};
	for (const Unit* unit = first; unit != last; ++unit)
		++positions[unit->combining_class];
	std::size_t offset = 0;
	for (std::size_t& count : positions)
	{
		const std::size_t next = offset + count;
		count = offset;
		offset = next;
	}
	scratch.resize(offset);
	for (const Unit* unit = first; unit != last; ++unit)
		scratch[positions[unit->combining_class]++] = *unit;
	std::copy(scratch.begin(), scratch.end(), first);
}

void CanonicalOrder(std::vector<Unit>& units)
{
	std::vector<Unit> scratch;
	std::size_t start = 0;
	uint8_t previous = 0;
	bool ordered = true;
	for (std::size_t i = 0; i < units.size(); ++i)
	{
		const uint8_t current = units[i].combining_class;
		if (current == 0)
		{
			if (!ordered)
				Reorder(units.data() + start, units.data() + i, scratch);
			start = i + 1;
			ordered = true;
		}
		else if (current < previous)
			ordered = false;
		previous = current;
	}
	if (!ordered)
		Reorder(units.data() + start, units.data() + units.size(), scratch);
}

void CanonicalCompose(std::vector<Unit>& units)
{
	const std::size_t no_starter = units.size();
	std::size_t starter = no_starter;
	std::size_t out = 0;
	uint8_t previous = 0;
	for (const Unit unit : units)
	{
		if (starter != no_starter && (previous == 0 || previous < unit.combining_class))
		{
			if (const char32_t composed = Compose(units[starter].code_point, unit.code_point))
			{
				units[starter].code_point = composed;
				continue;
			}
		}
		if (unit.combining_class == 0)
			starter = out;
		units[out++] = unit;
		previous = unit.combining_class;
	}
	units.resize(out);
}

} // namespace

CharacterProperties Properties(char32_t code_point)
{
	if (code_point < 0x80)
		return {};
	constexpr unsigned low_limit = 0x80 + sizeof(kLowProperties) / sizeof(kLowProperties[0]);
	if (code_point < low_limit)
	{
		const uint16_t info = kLowProperties[code_point - 0x80];
		return { static_cast<uint8_t>(info >> 8), static_cast<uint8_t>(info) };
	}
	const unsigned page = (code_point >> 8) - (low_limit >> 8);
	if (page + 1 >= sizeof(kPageStarts) / sizeof(kPageStarts[0]))
		return {};
	const auto first = kProperties + kPageStarts[page];
	constexpr std::size_t range_count = sizeof(kProperties) / sizeof(kProperties[0]);
	const auto end = kProperties + std::min<std::size_t>(range_count, kPageStarts[page + 1] + 1);
	const auto range = std::lower_bound(
		first, end, code_point, [](const PropertyRange& range, char32_t value) { return range.last < value; });
	if (range == end || code_point < range->first)
		return {};
	return { range->combining_class, range->flags };
}

bool NfcCheck::append(char32_t code_point, CharacterProperties properties)
{
	const uint8_t current = properties.combining_class;
	if (properties.nfc_no() || (current != 0 && current < last_class_))
		return false;
	if (current == 0 && !properties.nfc_maybe())
	{
		// Quick_Check Yes and class zero end the preceding NFC segment.
		if (maybe_ && !normalized())
			return false;
		starter_ = code_point;
		starter_decomposes_ = properties.decomposes();
		following_.clear();
		maybe_ = false;
	}
	else if (starter_decomposes_)
	{
		following_.push_back((code_point << 8) | current);
		maybe_ |= properties.nfc_maybe();
	}
	else
	{
		if (properties.nfc_maybe() && starter_ != NoStarter && (last_class_ == 0 || last_class_ < current) &&
			Compose(starter_, code_point) != 0)
			return false;
		if (current == 0)
			starter_ = code_point;
	}
	last_class_ = current;
	return true;
}

bool NfcCheck::normalized() const
{
	if (!maybe_)
		return true;
	std::vector<Unit> units;
	units.reserve(following_.size() + 1);
	Decompose(starter_, units);
	for (uint32_t mark : following_)
		units.push_back({ mark >> 8, static_cast<uint8_t>(mark) });
	CanonicalOrder(units);
	CanonicalCompose(units);
	if (units.size() != following_.size() + 1 || units.front().code_point != starter_)
		return false;
	return std::equal(following_.begin(), following_.end(), units.begin() + 1,
		[](uint32_t mark, Unit unit) { return (mark >> 8) == unit.code_point; });
}

} // namespace unicode
