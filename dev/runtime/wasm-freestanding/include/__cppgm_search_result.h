#ifndef __CPPGM_SEARCH_RESULT_H
#define __CPPGM_SEARCH_RESULT_H

// The conditional merges pointer qualifiers in an unevaluated expression.
#define __CPPGM_SEARCH_RESULT(s, type) typeof(1 ? (s) : (type*)nullptr)

#endif
