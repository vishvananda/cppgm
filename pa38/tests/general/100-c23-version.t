#if !defined(__STDC_VERSION__) || __STDC_VERSION__ != 202311L
#error C23 version macro has the wrong value
#endif
#ifdef __cplusplus
#error C mode must leave the C++ version macro undefined
#endif

static_assert(_Generic((__CHAR8_TYPE__)0, unsigned char: 1, default: 0));

int main(void) { return 0; }
