#if EXPECT_HOSTED != __STDC_HOSTED__
#error unexpected C execution environment
#endif

#if __STDC_HOSTED__
int main(void)
{
    if (__STDC_HOSTED__ != 1)
        return 1;
}
#else
static inline int main(int value) { return value + 2; }

__SIZE_TYPE__ strlen(const char *);

int freestanding_probe(void)
{
    return main(40) != 42 || strlen("abc") != 17 || __builtin_popcount(0x55u) != 4;
}
#endif
