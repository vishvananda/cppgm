#pragma once

#include <map>
#include <set>

#include "asm/module_expression.h"
#include "native/object/object_file.h"

namespace native {

// Each variable-size directive owns one staging byte. Positions before and
// after the directive therefore remain distinct even when either size is zero.
class ModuleLayout
{
public:
	enum class Kind : uint8_t
	{
		Space,
		Align,
		Origin
	};
	struct Fragment
	{
		Fragment(uint64_t at, int16_t byte, uint64_t align, uint64_t max)
			: offset(at), kind(Kind::Align), fill(byte), alignment(align), maximum(max)
		{}
		Fragment(uint64_t at, Kind type, int16_t byte, assembly::ModuleExpression plan)
			: offset(at), kind(type), fill(byte), expression(std::move(plan))
		{}
		uint64_t offset;
		Kind kind;
		int16_t fill;
		uint64_t alignment = 0;
		uint64_t maximum = 0;
		assembly::ModuleExpression expression;
		uint64_t size = 0;
		bool visiting = false;
	};

	explicit ModuleLayout(object::ObjectFile& out) : out_(out) {}
	bool pending(uint32_t section) const { return sections_.find(section) != sections_.end(); }
	bool crosses(uint32_t section, uint64_t from, uint64_t to) const;
	void append(uint32_t section, Fragment fragment);
	void finish();
	uint64_t position(uint32_t section, uint64_t old) const;

private:
	struct Section
	{
		std::vector<Fragment> fragments;
		std::set<size_t> unresolved;
		std::vector<int64_t> deltas;
		std::vector<int64_t> prefix;
		size_t boundary(uint64_t offset) const;
		int64_t subtotal(size_t count) const;
		void complete(size_t index, uint64_t size);
	};

	class Evaluator;
	int64_t shift(uint32_t section, uint64_t from, uint64_t to);
	void resolve(uint32_t section, Section& layout, size_t index);
	void materialize(uint32_t section, const Section& layout);

	object::ObjectFile& out_;
	std::map<uint32_t, Section> sections_;
	unsigned depth_ = 0;
	bool fixed_ = false;
};

} // namespace native
