#if EXPECT_NO_THREADS
#if !defined(__STDC_NO_THREADS__) || __STDC_NO_THREADS__ != 1
#error the Darwin target must predefine __STDC_NO_THREADS__ to 1
#endif
#elif defined(__STDC_NO_THREADS__)
#error unexpected __STDC_NO_THREADS__ predefine
#endif
