#pragma once

#include <cstdint>
#include <vector>

#include "lowir/builder.h"

namespace sema {
struct CoroutineFacts;
struct Entity;
struct FunctionEntity;
struct Type;
}

namespace lower {

class ProgramLowering;

struct FrameParameter
{
	const sema::Entity* entity;
	const sema::Type* type;
	uint64_t offset;
};

// The entry pointers and promise use the coroutine handle ABI. The other
// fields are private to the generated functions.
class CoroutineFrameLayout
{
public:
	CoroutineFrameLayout(ProgramLowering& lowering, const sema::FunctionEntity* function,
		const sema::CoroutineFacts& facts, uint32_t location);
	uint64_t reserve_type(ProgramLowering& lowering, const sema::Type* type);
	uint64_t reserve(uint64_t size, uint64_t alignment);

	uint64_t alignment() const { return alignment_; }
	uint32_t location() const { return location_; }
	uint64_t allocation_bytes(ProgramLowering& lowering) const;
	bool over_aligned(ProgramLowering& lowering) const;

	uint64_t resume;
	uint64_t destroy;
	uint64_t promise;
	uint64_t raw_allocation;
	uint64_t state;
	std::vector<FrameParameter> parameters;

private:
	uint32_t location_;
	uint64_t limit_;
	uint64_t end_ = 0;
	uint64_t alignment_ = 1;
};

void relocate_coroutine_storage(lowir::Program& program, lowir::FunctionBuilder& builder, CoroutineFrameLayout& frame);

struct CoroutineSuspension
{
	lowir::BlockId resume;
	lowir::BlockId destroy;
};

struct CoroutineBody
{
	CoroutineFrameLayout& layout;
	lowir::Value address;
	lowir::BlockId suspend;
	lowir::BlockId destroy;
	std::vector<CoroutineSuspension> suspensions;
};

} // namespace lower
