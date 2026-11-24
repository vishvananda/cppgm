#define COMBINE(a, b) a ## b
#if 0b10 != 2 || 1'234 != 1234
#error bad separated or binary preprocessing number
#endif

#line 1'234
#if __LINE__ != 1234
#error incorrect decimal line number
#endif

int main(void)
{
    return COMBINE(0x, 2'A) != 42 || 1.2'5e+0'1 != 12.5 || 0x0'e-0xe != 0;
}
