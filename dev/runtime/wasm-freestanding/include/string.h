#ifndef __CPPGM_FREESTANDING_STRING_H
#define __CPPGM_FREESTANDING_STRING_H

#ifdef __wasi__
#include_next <string.h>
#else
#include <stddef.h>
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_STRING_H__ 202311L
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(__wasi__)
void* memccpy(void* __restrict, const void* __restrict, int, size_t);
void* memchr(const void*, int, size_t);
int memcmp(const void*, const void*, size_t);
void* memcpy(void* __restrict, const void* __restrict, size_t);
void* memmove(void*, const void*, size_t);
void* memset(void*, int, size_t);
void* memset_explicit(void*, int, size_t);
char* strcat(char* __restrict, const char* __restrict);
char* strchr(const char*, int);
int strcmp(const char*, const char*);
char* strcpy(char* __restrict, const char* __restrict);
size_t strcspn(const char*, const char*);
size_t strlen(const char*);
char* strncat(char* __restrict, const char* __restrict, size_t);
int strncmp(const char*, const char*, size_t);
char* strncpy(char* __restrict, const char* __restrict, size_t);
char* strpbrk(const char*, const char*);
char* strrchr(const char*, int);
size_t strspn(const char*, const char*);
char* strstr(const char*, const char*);
#elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
void* memccpy(void* __restrict, const void* __restrict, int, size_t);
void* memset_explicit(void*, int, size_t);
char* strdup(const char*);
char* strndup(const char*, size_t);
#endif

#ifdef __cplusplus
}
#endif

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
// The cast makes the conditional merge pointer qualifiers in an unevaluated expression.
#define __CPPGM_SEARCH_RESULT(s, type) typeof(1 ? (s) : (type*)nullptr)
#define memchr(s, c, n) ((__CPPGM_SEARCH_RESULT(s, void))(memchr)((s), (c), (n)))
#define strchr(s, c) ((__CPPGM_SEARCH_RESULT(s, char))(strchr)((s), (c)))
#define strpbrk(s, accept) ((__CPPGM_SEARCH_RESULT(s, char))(strpbrk)((s), (accept)))
#define strrchr(s, c) ((__CPPGM_SEARCH_RESULT(s, char))(strrchr)((s), (c)))
#define strstr(s, needle) ((__CPPGM_SEARCH_RESULT(s, char))(strstr)((s), (needle)))
#endif

#endif
