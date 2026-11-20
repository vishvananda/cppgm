#include "aarch64/abi.h"

#include <algorithm>
#include "aarch64/error.h"

namespace aarch64 {

using namespace lowir;

bool memory_value(Type type)
{
	return type.is_object() || type.kind() == TypeKind::V128 || type.kind() == TypeKind::I128;
}

Argument classify(Type type, ir_model::AggregateShape shape)
{
	using ir_model::AggregateElement;
	const auto bytes = storage_bytes(type);
	if (type.kind() == TypeKind::Void)
		return Argument{ Bank::General, 0, 0, 0, false };
	if (type.kind() == TypeKind::F80)
		throw AArch64Error("x87 values require an x86 target");
	if (type.is_object())
	{
		if (shape.element == AggregateElement::None)
			throw AArch64Error("AArch64 object boundary requires an aggregate shape");
		const unsigned piece = shape.element == AggregateElement::F32                                   ? 4
			: shape.element == AggregateElement::F64                                                    ? 8
			: (shape.element == AggregateElement::F128 || shape.element == AggregateElement::Vector128) ? 16
																										: 0;
		if (piece && shape.count >= 1 && shape.count <= 4 && bytes == piece * shape.count)
			return Argument{ Bank::Simd, 0, shape.count, piece, false };
		if (bytes > 16)
			return Argument{ Bank::General, 0, 1, 8, true };
	}
	if (type.is_float() || type.kind() == TypeKind::V128)
		return Argument{ Bank::Simd, 0, 1, static_cast<unsigned>(bytes), false };
	return Argument{ Bank::General, 0, static_cast<unsigned>((bytes + 7) / 8), 8, false };
}

Argument Arguments::next(Type type, ir_model::AggregateShape shape, bool unnamed)
{
	Argument arg = classify(type, shape);
	if (darwin && shape.element == ir_model::AggregateElement::Empty)
		return Argument{ Bank::General, 0, 0, 0, false };
	unsigned& used = arg.bank == Bank::Simd ? simd : general;
	// A member function pointer is an eight-aligned pair of words.
	// Its declared argument carries the pair shape on its i128 value.
	const bool pair = type.kind() == TypeKind::I128 && shape.element == ir_model::AggregateElement::Mixed;
	const unsigned alignment = arg.indirect || pair ? 8 : std::min(16u, data_alignment(type));
	if (!darwin && arg.bank == Bank::General && alignment == 16)
		used = (used + 1) & ~1u;
	if (!(darwin && unnamed) && used + arg.pieces <= 8)
	{
		arg.first = used;
		used += arg.pieces;
		return arg;
	}
	used = 8;
	// Darwin passes direct general-register records in whole x-register
	// pieces even after that bank fills. Ordinary scalars and homogeneous
	// floating records retain their natural size and alignment on the stack.
	const bool packed = darwin && !unnamed && !(type.is_object() && arg.bank == Bank::General);
	const unsigned align = packed ? alignment : std::max(8u, alignment);
	stack = (stack + align - 1) & ~(align - 1);
	arg.bank = Bank::Stack;
	arg.first = stack;
	const unsigned size = arg.indirect ? 8 : storage_bytes(type);
	stack += packed ? size : (size + 7) & ~7u;
	return arg;
}

} // namespace aarch64
