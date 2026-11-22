#!/usr/bin/env python3
"""Generate C and C++ inputs that expose frontend complexity as their size grows."""
import argparse

from editions import EDITIONS, source


def c_macro_binding_stack(size):
    print('#define VALUE 0')
    for index in range(1, size + 1):
        print('#pragma push_macro("VALUE")')
        print(f'#pragma push_macro("TEMP_{index}")\n#define TEMP_{index} 1')
        print(f'#undef VALUE\n#define VALUE {index}')
    for index in range(size, 0, -1):
        print(f'#pragma pop_macro("TEMP_{index}")')
        print(f'#ifdef TEMP_{index}\n#error undefined binding was not restored\n#endif')
        print('#pragma pop_macro("VALUE")')
        print(f'#if VALUE != {index - 1}\n#error wrong saved binding\n#endif')
    print('int main(void) { return VALUE; }')


def c_redeclarations(size):
    for _ in range(size):
        print('extern const int matrix[][3];')
        print('extern const int matrix[2][3];')
    print('const int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};')
    print('int main(void) { return matrix[1][2] != 6; }')


def c_generic_associations(size, type_pattern):
    print(f'_Static_assert(_Generic(({type_pattern.format(1)})0,')
    for bound in range(1, size + 1):
        print(f'{type_pattern.format(bound)}: {bound},')
    print('default: 0) == 1, "first compatible type");')
    print('int main(void) { return 0; }')


def c_generic_short_lists(size):
    print('#define SELECT_INT(value) _Generic((value), int: 1, float: 2, double: 3, default: 0)')
    for index in range(size):
        print(f'_Static_assert(SELECT_INT({index}) == 1, "integer type");')
    print('int main(void) { return 0; }')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('case', choices=['parameter-bases', 'plain-templates',
                                        'independent-defaults', 'chained-defaults',
                                        'nested-chained-defaults', 'macro-replacements',
                                        'c-macro-binding-stack', 'c-redeclarations',
                                        'c-generic-arrays', 'c-generic-prototypes', 'c-generic-short-lists',
                                        *EDITIONS])
    parser.add_argument('size', type=int)
    args = parser.parse_args()
    if args.size < 1:
        parser.error('size must be positive')
    if args.case in EDITIONS:
        print(source(args.case, args.size), end='')
        return
    if args.case == 'c-macro-binding-stack':
        c_macro_binding_stack(args.size)
        return
    if args.case == 'c-redeclarations':
        c_redeclarations(args.size)
        return
    if args.case == 'c-generic-arrays':
        c_generic_associations(args.size, 'int (*)[{}]')
        return
    if args.case == 'c-generic-prototypes':
        c_generic_associations(args.size, 'int (*)(int (*)[{}])')
        return
    if args.case == 'c-generic-short-lists':
        c_generic_short_lists(args.size)
        return
    if args.case == 'macro-replacements':
        print('#define EMPTY()')
        print('#define CAT_(a,b) a##b')
        print('#define CAT(a,b) CAT_(a,b)')
        print('#define VALUE_1 1\n#define VALUE_2 2')
        print('#define SELECT(n) CAT(VALUE_,n)')
        print('#define STEP(a,b) ((a)+(b)+1+2+3+4)')
        print('#define TEST(n) STEP(STEP(n,SELECT(1)),STEP(SELECT(2),EMPTY() 3))')
        for i in range(args.size):
            print(f'#if TEST({i % 10}) != {36 + i % 10}')
            print('#error incorrect macro replacement\n#endif')
        print('int macro_replacement_result;')
        return
    if args.case.endswith('-defaults'):
        parameters = ', '.join(
            f'class T{i}=' + (f'T{i - 1}' if args.case.endswith('chained-defaults') and i else 'int')
            for i in range(args.size))
        print('template<' + parameters + '> struct C {};')
        if args.case == 'nested-chained-defaults':
            print('template<class X> struct Holder { C<> member; };')
            print('static_assert(sizeof(Holder<int>) == 1, "complete");')
        else:
            print('static_assert(sizeof(C<>) == 1, "complete");')
        return
    base = ' : T' if args.case == 'parameter-bases' else ''
    for i in range(args.size):
        print(f'template<class T> struct W{i}{base} {{}};')


if __name__ == '__main__':
    main()
