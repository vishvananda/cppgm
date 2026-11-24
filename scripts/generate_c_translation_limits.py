"""Write includes and emit the combined translation-limits program for a C edition."""

import argparse
from dataclasses import dataclass, replace
from pathlib import Path


@dataclass(frozen=True)
class Limits:
    includes: int
    conditionals: int
    macros: int
    arity: int
    blocks: int
    declarator_parentheses: int
    expression_parentheses: int
    object_bytes: int
    literal_fragments: tuple[int, int]
    line: int
    internal_significance: int
    external_significance: int
    external_names: int
    block_names: int
    cases: int
    members: int
    enumerators: int
    records: int


# ISO C 5.2.4.1. C95 retains C90's translation limits.
LEGACY = Limits(includes=8, conditionals=8, macros=1024, arity=31, blocks=15, declarator_parentheses=31,
                expression_parentheses=32, object_bytes=32767, literal_fragments=(200, 309), line=509,
                internal_significance=31, external_significance=6, external_names=511, block_names=127,
                cases=257, members=127, enumerators=127, records=15)
MODERN = Limits(includes=15, conditionals=63, macros=4095, arity=127, blocks=127, declarator_parentheses=63,
                expression_parentheses=63, object_bytes=65535, literal_fragments=(2000, 2095), line=4095,
                internal_significance=63, external_significance=31, external_names=4095, block_names=511,
                cases=1023, members=1023, enumerators=1023, records=63)

# C23 retains the modern source limits and specifies 32767 hosted object bytes.
C23 = replace(MODERN, object_bytes=32767)
LIMITS = {90: LEGACY, 95: LEGACY, 99: MODERN, 11: MODERN, 17: MODERN, 23: C23}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('directory', type=Path)
    parser.add_argument('--edition', type=int, choices=LIMITS, default=99)
    args = parser.parse_args()
    legacy = args.edition in (90, 95)
    limits = LIMITS[args.edition]
    output = args.directory
    output.mkdir(parents=True, exist_ok=True)
    for level in range(limits.includes):
        line = f'#include "level_{level + 1}.h"\n' if level + 1 < limits.includes else '#define INCLUDED_LAST 1\n'
        (output / f'level_{level}.h').write_text(line)

    print('#include "level_0.h"')
    for _ in range(limits.conditionals):
        print('#if INCLUDED_LAST')
    print('#define CONDITIONAL_DEPTH 2')
    for _ in range(limits.conditionals):
        print('#endif')
    # The two macros above, MANY, and the two long names bring the
    # simultaneously defined source macros to the limit.
    extra_macros = limits.macros - 5
    for index in range(extra_macros):
        print(f'#define M{index:04d} {index}')
    arguments = ','.join(str(i) for i in range(1, limits.arity + 1))
    macro_parameters = ','.join(f'm{i}' for i in range(limits.arity))
    function_parameters = ','.join(f'int p{i}' for i in range(limits.arity))
    last_parameter = limits.arity - 1
    print(f'#define MANY({macro_parameters}) ((m0) + (m{last_parameter}))')
    print(f'static int many({function_parameters}) {{ return p0 + p{last_parameter}; }}')
    print('static int deeply_nested_block(int x) {')
    print('{' * (limits.blocks - 1) + 'x += 1;' + '}' * (limits.blocks - 1))
    print('return x; }')
    print('static int ' + '(' * limits.declarator_parentheses + 'deep_declarator' +
          ')' * limits.declarator_parentheses + ' = 11;')
    expression = '(' * limits.expression_parentheses + 'deep_declarator + 2' + ')' * limits.expression_parentheses
    print(f'static int deep_expression(void) {{ return {expression}; }}')
    print('static int ' + '*' * 9 + '(*derived_declarator[1])(void);')
    object_end = limits.object_bytes - 1
    object_initializer = '' if legacy else f' = {{ [{object_end}] = 9 }}'
    print(f'static volatile unsigned char large_object[{limits.object_bytes}]{object_initializer};')
    print('static const char narrow_literal[] =')
    for count in limits.literal_fragments:
        print('"' + 'a' * count + '"')
    print(';')
    print('static int wide_literal(void) { return sizeof(')
    for count in limits.literal_fragments:
        print('L"' + 'a' * count + '"')
    literal_size = sum(limits.literal_fragments) + 1
    print(f') == sizeof L"" * {literal_size}; }}')
    line_head, line_end = 'static int long_logical_line(void) { return', '13; }'
    print(line_head + ' ' * (limits.line - len(line_head) - len(line_end)) + line_end)
    internal = 'i' * (limits.internal_significance - 1)
    external = 'x' * (limits.external_significance - 1)
    print(f'static int {internal}A = 5, {internal}B = 7;')
    print(f'#define {internal}A_macro 29\n#define {internal}B_macro 31')
    print(f'volatile int {external}A = 37, {external}B = 41;')
    # Count the two names above and main. Keep every other external name
    # distinct within the edition's significant prefix.
    external_pattern = 'e{:05d}' if legacy else 'external_{}'
    for index in range(limits.external_names - 3):
        print(f'int {external_pattern.format(index)} = {index};')
    last_external = limits.external_names - 4
    print('static int block_identifiers(void) {')
    for index in range(limits.block_names):
        print(f'int b{index} = {index};')
    last_local = limits.block_names - 1
    print(f'return b0 + b{last_local}; }}')
    print('static int switch_labels(int input) { switch (input) {')
    for index in range(limits.cases):
        print(f'case {index}: return {index};')
    print('default: return -1; } }')
    print('struct BigStructure {')
    for index in range(limits.members):
        print(f'unsigned char member{index};')
    print('};')
    print('enum BigEnumeration {')
    for index in range(limits.enumerators):
        print(f'E{index}' + (',' if index + 1 < limits.enumerators else ''))
    print('};')
    print('struct Outer {')
    for index in range(limits.records):
        print(f'struct Nested{index} {{')
    print('int payload;')
    for index in reversed(range(limits.records)):
        print(f'}} part{index};')
    print('};')
    print('int main(void) {')
    last_member = limits.members - 1
    member_initializer = '2' if legacy else f'.member0 = 2, .member{last_member} = 6'
    print(f'static struct BigStructure big = {{ {member_initializer} }};')
    print('struct Outer outer = {0};')
    if legacy:
        print(f'large_object[{object_end}] = 9;')
        print(f'big.member{last_member} = 6;')
    nested = 'outer.' + '.'.join(f'part{i}' for i in range(limits.records)) + '.payload'
    print(nested + ' = 8;')
    last_case = limits.cases - 1
    checks = [
        'INCLUDED_LAST == 1 && CONDITIONAL_DEPTH == 2',
        f'M{extra_macros - 1:04d} == {extra_macros - 1}',
        'deeply_nested_block(3) == 4',
        'deep_expression() == 13',
        'derived_declarator[0] == 0',
        f'sizeof large_object == {limits.object_bytes} && large_object[{object_end}] == 9',
        f"sizeof narrow_literal == {literal_size} && narrow_literal[{literal_size - 2}] == 'a'"
        f" && narrow_literal[{literal_size - 1}] == 0",
        'wide_literal()',
        'long_logical_line() == 13',
        f'{internal}A == 5 && {internal}B == 7',
        f'{internal}A_macro == 29 && {internal}B_macro == 31',
        f'{external}A == 37 && {external}B == 41 && {external_pattern.format(last_external)} == {last_external}',
        f'block_identifiers() == {last_local}',
        f'many({arguments}) == {limits.arity + 1}',
        f'MANY({arguments}) == {limits.arity + 1}',
        f'switch_labels({last_case}) == {last_case} && switch_labels(-1) == -1',
        f'big.member0 == 2 && big.member{last_member} == 6',
        f'E{limits.enumerators - 1} == {limits.enumerators - 1}',
        nested + ' == 8',
    ]
    for num, check in enumerate(checks, 1):
        print(f'if (!({check})) return {num};')
    print('return 0; }')


if __name__ == '__main__':
    main()
