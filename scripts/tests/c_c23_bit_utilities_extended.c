#include <stdbit.h>

__extension__ typedef unsigned __int128 U128;
typedef unsigned _BitInt(64) U64;

int main(void)
{
	volatile U128 high = (U128)1 << 93;
	volatile U64 bit_precise = (U64)1 << 63;
	if (stdc_leading_zeros(high) != 34 || stdc_trailing_zeros(high) != 93 || stdc_count_ones(high) != 1 ||
		stdc_bit_width(high) != 94 || stdc_bit_floor(high + 1) != high || !stdc_has_single_bit(high))
		return 1;
	return !(stdc_bit_width(bit_precise) == 64 && stdc_trailing_zeros(bit_precise) == 63);
}
