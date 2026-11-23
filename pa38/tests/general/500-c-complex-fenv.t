#include <fenv.h>

#pragma STDC FENV_ACCESS ON
static volatile double _Complex zero;
static volatile double one = 1.0;
static volatile double three = 3.0;

int main(void)
{
    double _Complex left = zero, right = zero;
    if (feclearexcept(FE_ALL_EXCEPT))
        return 1;
    (void)(left / right);
    if (!fetestexcept(FE_INVALID))
        return 2;
    if (feclearexcept(FE_ALL_EXCEPT))
        return 3;
    {
        #pragma STDC CX_LIMITED_RANGE ON
        (void)(__builtin_complex(one, 0.0) / __builtin_complex(three, 0.0));
    }
    return !fetestexcept(FE_INEXACT) ? 4 : 0;
}
