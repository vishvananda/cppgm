#define PRESENT
#if __has_embed("embed-fixtures/bytes.bin" limit(defined(PRESENT)))
int yes;
#endif
