#if !defined(__STDC_VERSION__) || __STDC_VERSION__ != 202311L
#error C23 version macro has the wrong value
#endif
#ifdef __cplusplus
#error C mode must leave the C++ version macro undefined
#endif

int main(void) { return 0; }
