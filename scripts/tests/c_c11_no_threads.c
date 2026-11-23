#if !defined(__STDC_NO_THREADS__) || __STDC_NO_THREADS__ != 1
#error the single-threaded target must advertise the optional threads exclusion
#endif

int main(void)
{
    return 0;
}
