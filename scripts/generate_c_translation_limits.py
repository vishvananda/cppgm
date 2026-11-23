"""Write include files in the given directory and emit the C99–C17 limits program."""

import argparse
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path)
    output = parser.parse_args().directory
    output.mkdir(parents=True, exist_ok=True)
    for level in range(15):
        line = f'#include "level_{level + 1}.h"\n' if level < 14 else '#define INCLUDED_LAST 1\n'
        (output / f'level_{level}.h').write_text(line)

    print('#include "level_0.h"')
    for _ in range(63):
        print('#if INCLUDED_LAST')
    print('#define CONDITIONAL_DEPTH 2')
    for _ in range(63):
        print('#endif')
    for index in range(4095):
        print(f'#define M{index:04d} {index}')
    arguments = [str(i) for i in range(1, 128)]
    macro_parameters = [f'm{i}' for i in range(127)]
    function_parameters = [f'int p{i}' for i in range(127)]
    print('#define MANY(' + ','.join(macro_parameters) + ') ((m0) + (m126))')
    print('static int many(' + ','.join(function_parameters) + ') { return p0 + p126; }')
    print('static int deeply_nested_block(int x) {')
    print('{' * 126 + 'x += 1;' + '}' * 126)
    print('return x; }')
    print('static int ' + '(' * 63 + 'deep_declarator' + ')' * 63 + ' = 11;')
    expression = '(' * 63 + 'deep_declarator + 2' + ')' * 63
    print(f'static int deep_expression(void) {{ return {expression}; }}')
    print('static int ' + '*' * 9 + '(*derived_declarator[1])(void);')
    print('static volatile unsigned char large_object[65535] = { [65534] = 9 };')
    print('static const char narrow_literal[] =')
    for count in (2000, 2095):
        print('"' + 'a' * count + '"')
    print(';')
    print('static int wide_literal(void) { return sizeof(')
    for count in (2000, 2095):
        print('L"' + 'a' * count + '"')
    print(') == sizeof L"" * 4096; }')
    line_head, line_end = 'static int long_logical_line(void) { return', '13; }'
    print(line_head + ' ' * (4095 - len(line_head) - len(line_end)) + line_end)
    internal = 'i' * 62
    external = 'x' * 30
    print(f'static int {internal}A = 5, {internal}B = 7;')
    print(f'#define {internal}A_macro 29\n#define {internal}B_macro 31')
    print(f'volatile int {external}A = 37, {external}B = 41;')
    for index in range(4092):
        print(f'int external_{index} = {index};')
    print('static int block_identifiers(void) {')
    for index in range(511):
        print(f'int b{index} = {index};')
    print('return b0 + b510; }')
    print('static int switch_labels(int input) { switch (input) {')
    for index in range(1023):
        print(f'case {index}: return {index};')
    print('default: return -1; } }')
    print('struct BigStructure {')
    for index in range(1023):
        print(f'unsigned char member{index};')
    print('};')
    print('enum BigEnumeration {')
    for index in range(1023):
        print(f'E{index}' + (',' if index < 1022 else ''))
    print('};')
    print('struct Outer {')
    for index in range(63):
        print(f'struct Nested{index} {{')
    print('int payload;')
    for index in reversed(range(63)):
        print(f'}} part{index};')
    print('};')
    print('int main(void) {')
    print('static struct BigStructure big = { .member0 = 2, .member1022 = 6 };')
    print('struct Outer outer = {0};')
    nested = 'outer.' + '.'.join(f'part{i}' for i in range(63)) + '.payload'
    print(nested + ' = 8;')
    checks = [
        'INCLUDED_LAST == 1 && CONDITIONAL_DEPTH == 2',
        'M4094 == 4094',
        'deeply_nested_block(3) == 4',
        'deep_expression() == 13',
        'derived_declarator[0] == 0',
        'sizeof large_object == 65535 && large_object[65534] == 9',
        'sizeof narrow_literal == 4096 && narrow_literal[4094] == \'a\' && narrow_literal[4095] == 0',
        'wide_literal()',
        'long_logical_line() == 13',
        f'{internal}A == 5 && {internal}B == 7',
        f'{internal}A_macro == 29 && {internal}B_macro == 31',
        f'{external}A == 37 && {external}B == 41 && external_4091 == 4091',
        'block_identifiers() == 510',
        'many(' + ','.join(arguments) + ') == 128',
        'MANY(' + ','.join(arguments) + ') == 128',
        'switch_labels(1022) == 1022 && switch_labels(-1) == -1',
        'big.member0 == 2 && big.member1022 == 6',
        'E1022 == 1022',
        nested + ' == 8',
    ]
    for num, check in enumerate(checks, 1):
        print(f'if (!({check})) return {num};')
    print('return 0; }')


if __name__ == '__main__':
    main()
