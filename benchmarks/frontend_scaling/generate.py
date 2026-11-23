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


def c_composite_redeclarations(size):
    print('extern int (*object)[];\nint (*object)[3];')
    for _ in range(size):
        print('extern int (*object)[];')
    print('_Static_assert(sizeof *object == 3 * sizeof(int), "array bound");')


def c_tentative_arrays(size):
    for index in range(size):
        print(f'int array_{index}[];')


def c_linked_redeclarations(size, file_first):
    if file_first:
        print('extern int (*object)[];')
    print('void use(void) {')
    for _ in range(size):
        print('    { extern int (*object)[3]; (void)sizeof *object; }')
    print('}\nint (*object)[3];')


def c_block_function_redeclarations(size, distinct):
    print('void use(void) {')
    for index in range(size):
        name = f'read_{index}' if distinct else 'read'
        print(f'    {{ extern int (*{name}(void))[3]; (void)sizeof *{name}(); }}')
    print('}')
    for index in range(size if distinct else 1):
        name = f'read_{index}' if distinct else 'read'
        print(f'extern int (*{name}(void))[];')


def c_conditional_composites(size):
    print('extern int (*a)[];\nextern int (*b)[3];')
    for _ in range(size):
        print('_Static_assert(sizeof *(1 ? a : b) == 3 * sizeof(int), "conditional result");')


def c_inline_late_linkage(size):
    for index in range(size):
        print(f'inline int f_{index}(int n) {{ static int value; return value += n; }}')
    for index in range(size):
        print(f'extern int f_{index}(int);')


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


def c_integer_constant_expressions(size, chain):
    if chain:
        terms = ' + '.join('1' for _ in range(size))
        print(f'_Static_assert({terms} == {size}, "arithmetic chain");')
    else:
        for _ in range(size):
            print('_Static_assert(1, "integer literal");')


def c_static_initializers(size, expressions):
    print('static int values[] = {')
    for value in range(1, size + 1):
        print(f'    {value - 1} + 1,' if expressions else f'    {value},')
    print('};')
    print(f'int main(void) {{ return values[0] != 1 || values[{size - 1}] != {size}; }}')


def c_array_declarators(size, bound):
    for index in range(size):
        print(f'int f_{index}(int n) {{ int a[{bound}]; return sizeof(a); }}')


def c_restrict_parameters(size):
    for index in range(size):
        print(f'int f_{index}(int n, int source[restrict static n], int *restrict extra)')
        print('{ return source[n - 1] + *extra; }')


def c_vla_prototype_type_names(size, star):
    bound = '*' if star else '1'
    for index in range(size):
        print(f'int f_{index}(int (*p)[_Alignof(int[{bound}])]);')
        print(f'int f_{index}(int (*p)[_Alignof(int)]) {{ return (*p)[0]; }}')


def c_vla_atomic_parameters(size, type_specifier):
    param = '_Atomic(int (*)[++n]) p' if type_specifier else 'int (*_Atomic p)[++n]'
    for index in range(size):
        print(f'unsigned long f_{index}(int n, {param}) {{ return sizeof *p; }}')


def c_identifier_list_parameters(size):
    print('int sample(' + ', '.join(f'arg{index}' for index in range(size)) + ')')
    for index in reversed(range(size)):
        print(f'int arg{index};')
    print(f'{{ return arg0 + arg{size - 1}; }}')


def c_vla_dimensions(size):
    print('static unsigned long run(int n) {')
    print('typedef int Tensor' + '[n][1]' * size + ';')
    print('Tensor value;')
    print('return sizeof value;')
    print('}')
    print('int main(void) { return run(1) != sizeof(int); }')


def c_vla_extent_uses(size):
    print('static unsigned long run(int n) {')
    print('typedef int Tensor' + '[1]' * 64 + '[n];')
    print('unsigned long sum = 0;')
    for _ in range(size):
        print('sum += sizeof(Tensor);')
    print('return sum;')
    print('}')
    print(f'int main(void) {{ return run(3) != {size}UL * 3 * sizeof(int); }}')


def c_typeof_shared_bounds(size):
    print('static int increment(int *value) { return ++*value; }')
    print('int main(void) {')
    print('    int matrix[2][3], n = 3, effects = 0; unsigned long bytes = 0;')
    aliases = ', '.join(f'Row{index}' for index in range(size))
    print('    typedef __typeof__(*(int (*)[n++])(increment(&effects), matrix)) ' + aliases + ';')
    for index in range(size):
        print(f'    bytes += sizeof (Row{index});')
    print(f'    return !(n == 4 && effects == {size} && bytes == {size} * sizeof matrix[0]);')
    print('}')


def c_designated_overwrites(size):
    print('struct inner { int member; };')
    print('struct outer { struct inner inner; };')
    print('static struct outer object = {')
    for value in range(1, size + 1):
        print(f'    .inner.member = {value},')
    print('};')
    print(f'int main(void) {{ return object.inner.member != {size}; }}')


def c_designated_sparse(size):
    print(f'unsigned char table[] = {{ [{size - 1}] = 7 }};')
    print(f'_Static_assert(sizeof table == {size}, "completed bound");')


def c_alignment_specifiers(size, interleaved):
    if interleaved:
        print('const _Alignas(16) ' * size + 'char value = 1;')
    else:
        print('_Alignas(16) ' * size + 'const ' * size + 'char value = 1;')


def c_alignment_agreement(size, distinct):
    if distinct:
        for index in range(size):
            print(f'_Alignas(32) char value{index} = 1;')
    else:
        for _ in range(size):
            print('extern _Alignas(32) char value;')
        print('_Alignas(32) char value = 1;')


def c_for_declarators(size):
    print('int main(void) {')
    print('    for (int ' + ',\n             '.join(f'value{i} = {i}' for i in range(size)) + '; ; )')
    print(f'        return value0 + value{size - 1} != {size - 1};')
    print('}')


def c_prototype_tag_references(size):
    print('struct Record { int value; };')
    for index in range(size):
        print(f'int use{index}(struct Record *item);')


def c_member_alignment_queries(size):
    print('struct Record {')
    for index in range(size):
        print(f'    int field{index};')
    print('};')
    print('extern struct Record value;')
    for index in range(size):
        print(f'_Static_assert(__alignof__(value.field{index}) == _Alignof(int), "member");')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('case', choices=['parameter-bases', 'plain-templates',
                                        'independent-defaults', 'chained-defaults',
                                        'nested-chained-defaults', 'macro-replacements',
                                        'c-macro-binding-stack', 'c-redeclarations',
                                        'c-composite-redeclarations', 'c-tentative-arrays',
                                        'c-linked-redeclarations', 'c-block-first-redeclarations',
                                        'c-block-function-redeclarations', 'c-block-function-names',
                                        'c-conditional-composites', 'c-inline-late-linkage',
                                        'c-generic-arrays', 'c-generic-prototypes', 'c-generic-short-lists',
                                        'c-ice-atoms', 'c-ice-chain',
                                        'c-static-atoms', 'c-static-expressions', 'c-alignment-interleaved',
                                        'c-alignment-prefix', 'c-alignment-redeclarations',
                                        'c-alignment-definitions', 'c-for-declarators',
                                        'c-prototype-tag-references', 'c-member-alignment-queries',
                                        'c-vla-declarators', 'c-fixed-array-declarators',
                                        'c-identifier-list-parameters', 'c-restrict-parameters',
                                        'c-vla-prototype-type-names', 'c-fixed-prototype-type-names',
                                        'c-vla-atomic-type', 'c-vla-atomic-qualifier',
                                        'c-vla-dimensions', 'c-vla-extent-uses',
                                        'c-typeof-shared-bounds', 'c-designated-overwrites', 'c-designated-sparse',
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
    if args.case == 'c-composite-redeclarations':
        c_composite_redeclarations(args.size)
        return
    if args.case == 'c-tentative-arrays':
        c_tentative_arrays(args.size)
        return
    if args.case in ('c-linked-redeclarations', 'c-block-first-redeclarations'):
        c_linked_redeclarations(args.size, file_first=args.case == 'c-linked-redeclarations')
        return
    if args.case in ('c-block-function-redeclarations', 'c-block-function-names'):
        c_block_function_redeclarations(args.size, distinct=args.case == 'c-block-function-names')
        return
    if args.case == 'c-conditional-composites':
        c_conditional_composites(args.size)
        return
    if args.case == 'c-inline-late-linkage':
        c_inline_late_linkage(args.size)
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
    if args.case in ('c-ice-atoms', 'c-ice-chain'):
        c_integer_constant_expressions(args.size, chain=args.case == 'c-ice-chain')
        return
    if args.case in ('c-static-atoms', 'c-static-expressions'):
        c_static_initializers(args.size, expressions=args.case == 'c-static-expressions')
        return
    if args.case in ('c-alignment-prefix', 'c-alignment-interleaved'):
        c_alignment_specifiers(args.size, interleaved=args.case == 'c-alignment-interleaved')
        return
    if args.case in ('c-alignment-redeclarations', 'c-alignment-definitions'):
        c_alignment_agreement(args.size, distinct=args.case == 'c-alignment-definitions')
        return
    if args.case == 'c-for-declarators':
        c_for_declarators(args.size)
        return
    if args.case == 'c-prototype-tag-references':
        c_prototype_tag_references(args.size)
        return
    if args.case == 'c-member-alignment-queries':
        c_member_alignment_queries(args.size)
        return
    if args.case in ('c-vla-declarators', 'c-fixed-array-declarators'):
        c_array_declarators(args.size, 'n' if args.case == 'c-vla-declarators' else '2')
        return
    if args.case == 'c-identifier-list-parameters':
        c_identifier_list_parameters(args.size)
        return
    if args.case == 'c-restrict-parameters':
        c_restrict_parameters(args.size)
        return
    if args.case in ('c-vla-prototype-type-names', 'c-fixed-prototype-type-names'):
        c_vla_prototype_type_names(args.size, star=args.case == 'c-vla-prototype-type-names')
        return
    if args.case in ('c-vla-atomic-type', 'c-vla-atomic-qualifier'):
        c_vla_atomic_parameters(args.size, type_specifier=args.case == 'c-vla-atomic-type')
        return
    if args.case == 'c-vla-dimensions':
        c_vla_dimensions(args.size)
        return
    if args.case == 'c-vla-extent-uses':
        c_vla_extent_uses(args.size)
        return
    if args.case == 'c-typeof-shared-bounds':
        c_typeof_shared_bounds(args.size)
        return
    if args.case == 'c-designated-overwrites':
        c_designated_overwrites(args.size)
        return
    if args.case == 'c-designated-sparse':
        c_designated_sparse(args.size)
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
