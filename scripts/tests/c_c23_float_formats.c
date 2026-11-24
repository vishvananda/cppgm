#include <float.h>

#if FLT_IS_IEC_60559 != 1 || DBL_IS_IEC_60559 != 1 || LDBL_IS_IEC_60559 != 1
#error incorrect ISO/IEC 60559 format characteristics
#endif

int main(void)
{
	return 0;
}
