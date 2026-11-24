"""Run C clause probes and report their evidence by edition and target profile."""

import argparse
from collections import Counter
import json
from pathlib import Path
import platform
import re
from shutil import which
import subprocess
import sys

import c_library_headers as headers
import c_vla_cases as vla
from run_cxx11_ci_suite import LIMITS
from upstream_dg_proxy import execute, sha256, write_json


ROOT = Path(__file__).resolve().parents[1]
INVENTORY = ROOT / 'reports/c-conformance.json'
C_EDITIONS = headers.EDITIONS
PILOT_EDITIONS = (99, 11, 17)
LEGACY_STANDARDS = {90: 'c90', 95: 'iso9899:199409'}
NATIVE_PROFILES = {
    ('Linux', 'x86_64'): 'linux-x86_64-hosted',
    ('Linux', 'aarch64'): 'linux-aarch64-hosted',
    ('Darwin', 'x86_64'): 'darwin-x86_64-hosted',
    ('Darwin', 'arm64'): 'darwin-arm64-hosted',
}
RUN_STAGES = ('compile', 'link', 'run')
PAIR_STAGES = ('compile', 'compile-companion', 'link', 'run')
THREAD_PREDEFINE = ROOT / 'scripts/tests/c_thread_predefine.c'
C95_WIDE_HEADERS = ROOT / 'scripts/tests/c_c95_wide_headers.c'
PA38_GENERAL = ROOT / 'pa38/tests/general'
DISCARDED_FALLTHROUGH = PA38_GENERAL / '300-c-nonvoid-discarded-fallthrough.t'
INCLUDE_QUERY = PA38_GENERAL / '100-c-has-include-header-operands.t'
LEGACY_VERSION_PROBES = {
    90: PA38_GENERAL / '100-c90-version.t',
    95: PA38_GENERAL / '100-c95-digraphs.t',
}
C23_SOURCE_REJECTIONS = (
    ('c23.trigraph-default', '100-c23-trigraphs-bad.t', 'compile'),
    ('c23.attribute-probe-context', '100-c23-attribute-probe-context-bad.t', 'compile'),
    ('c23.attribute-probe-operand', '100-c23-attribute-probe-operand-bad.t', 'compile'),
    ('c23.embed-missing', '100-c23-embed-missing-bad.t', 'compile'),
    ('c23.embed-unsupported', '100-c23-embed-unsupported-bad.t', 'compile'),
    ('c23.embed-duplicate', '100-c23-embed-duplicate-bad.t', 'compile'),
    ('c23.embed-negative-limit', '100-c23-embed-negative-limit-bad.t', 'compile'),
    ('c23.embed-defined-limit', '100-c23-embed-defined-limit-bad.t', 'compile'),
    ('c23.embed-unbalanced', '100-c23-embed-unbalanced-bad.t', 'compile'),
    ('c23.literal-surrogate', '100-c23-literal-surrogate-bad.t', 'compile'),
    ('c23.literal-malformed-ucn', '100-c23-literal-malformed-ucn-bad.t', 'compile'),
    ('c23.identifier-escaped-start', '100-c23-unicode-escaped-start-bad.t', 'compile'),
    ('c23.identifier-raw-continue', '100-c23-unicode-raw-continue-bad.t', 'compile'),
    ('c23.identifier-nfc-reorder', '100-c23-unicode-nfc-reorder-bad.t', 'compile'),
    ('c23.identifier-nfc-singleton', '100-c23-unicode-nfc-singleton-bad.t', 'compile'),
    ('c23.identifier-nfc-paste', '100-c23-unicode-nfc-paste-bad.t', 'compile'),
    ('c23.identifier-nfc-hangul', '100-c23-unicode-nfc-hangul-bad.t', 'compile'),
    ('c23.typeof-bitfield', '300-c23-typeof-bitfield-bad.t', 'compile'),
    ('c23.typeof-unqual-bitfield', '300-c23-typeof-unqual-bitfield-bad.t', 'compile'),
    ('c23.typeof-reserved', '100-c23-typeof-reserved-bad.t', 'compile'),
    ('c23.typeof-unqual-reserved', '100-c23-typeof-unqual-reserved-bad.t', 'compile'),
    ('c23.nullptr-reserved', '100-c23-nullptr-reserved-bad.t', 'compile'),
    ('c23.nullptr-cast-int', '300-c23-nullptr-cast-int-bad.t', 'compile'),
    ('c23.nullptr-conditional', '300-c23-nullptr-conditional-bad.t', 'compile'),
    ('c23.nullptr-from-pointer', '300-c23-nullptr-from-pointer-bad.t', 'compile'),
    ('c23.nullptr-not-ice', '300-c23-nullptr-not-ice-bad.t', 'compile'),
    ('c23.nullptr-ordered', '300-c23-nullptr-ordered-bad.t', 'compile'),
    ('c23.va-start-context', '500-c23-va-start-outside-bad.t', 'compile'),
    ('c23.enum-bit-precise-base', '300-c23-enum-bit-precise-base-bad.t', 'compile'),
    ('c23.enum-qualified-forward', '300-c23-enum-fixed-qualified-forward-bad.t', 'compile'),
    ('c23.enum-fixed-overflow', '300-c23-enum-fixed-overflow-bad.t', 'compile'),
    ('c23.enum-signed-overflow', '300-c23-enum-signed-overflow-bad.t', 'compile'),
    ('c23.enum-unsigned-overflow', '300-c23-enum-unsigned-overflow-bad.t', 'compile'),
    ('c23.enum-no-compatible-type', '300-c23-enum-no-compatible-type-bad.t', 'compile'),
    ('c23.enum-redefinition-duplicate', '300-c23-enum-redefinition-duplicate-bad.t', 'compile'),
    ('c23.enum-redefinition-member', '300-c23-enum-redefinition-member-bad.t', 'compile'),
    ('c23.enum-redefinition-missing', '300-c23-enum-redefinition-missing-bad.t', 'compile'),
    ('c23.enum-redefinition-nested', '300-c23-enum-redefinition-nested-bad.t', 'compile'),
    ('c23.enum-redefinition-nested-base', '300-c23-enum-redefinition-nested-base-bad.t', 'compile'),
    ('c23.enum-redefinition-value', '300-c23-enum-redefinition-value-bad.t', 'compile'),
    ('c23.enum-redefinition-wide-value', '300-c23-enum-redefinition-wide-value-bad.t', 'compile'),
    ('c23.record-redefinition-alignment', '300-c23-record-redefinition-alignment-bad.t', 'compile'),
    ('c23.record-redefinition-anonymous', '300-c23-record-redefinition-anonymous-bad.t', 'compile'),
    ('c23.record-redefinition-array-bound', '300-c23-record-redefinition-array-bound-bad.t', 'compile'),
    ('c23.record-redefinition-bitfield', '300-c23-record-redefinition-bitfield-bad.t', 'compile'),
    ('c23.record-redefinition-nested', '300-c23-record-redefinition-nested-bad.t', 'compile'),
    ('c23.record-redefinition-pack', '300-c23-record-redefinition-pack-bad.t', 'compile'),
    ('c23.record-redefinition-shadowed-type', '300-c23-record-redefinition-shadowed-type-bad.t', 'compile'),
    ('c23.record-redefinition-union-order', '300-c23-record-redefinition-union-order-bad.t', 'compile'),
    ('c23.record-redefinition-unnamed-type', '300-c23-record-redefinition-unnamed-type-bad.t', 'compile'),
    ('c23.tag-cross-scope-enum-value', '300-c23-tag-cross-scope-enum-value-bad.t', 'compile'),
    ('c23.tag-cross-scope-flexible', '300-c23-tag-cross-scope-flexible-bad.t', 'compile'),
    ('c23.tag-cross-scope-generic', '300-c23-tag-cross-scope-generic-bad.t', 'compile'),
    ('c23.tag-cross-scope-union-order', '300-c23-tag-cross-scope-union-order-bad.t', 'compile'),
    ('c23.bitint-suffix', '100-c23-bit-precise-suffix-bad.t', 'compile'),
    ('c23.bitint-pp-range', '100-c23-bit-precise-pp-overflow-bad.t', 'compile'),
    ('c23.bitint-width-limit', '300-c23-bit-precise-width-limit-bad.t', 'compile'),
    ('c23.bitint-nonconstant-width', '300-c23-bit-precise-nonconstant-bad.t', 'compile'),
    ('c23.bitint-signed-one', '300-c23-bit-precise-signed-one-bad.t', 'compile'),
    ('c23.bitint-bitfield-width', '300-c23-bit-precise-bit-field-width-bad.t', 'compile'),
    ('c23.bitint-overflow', '300-c23-bit-precise-overflow-bad.t', 'compile'),
    ('c23.bitint-duplicate-case', '500-c23-bit-precise-duplicate-case-bad.t', 'compile'),
    ('c23.constexpr-reserved', '100-c23-constexpr-reserved-bad.t', 'compile'),
    ('c23.constexpr-no-initializer', '300-c23-constexpr-no-initializer-bad.t', 'compile'),
    ('c23.constexpr-function', '300-c23-constexpr-function-bad.t', 'compile'),
    ('c23.constexpr-extern', '300-c23-constexpr-extern-bad.t', 'compile'),
    ('c23.constexpr-ordinary-const', '300-c23-constexpr-ordinary-const-bad.t', 'compile'),
    ('c23.constexpr-array-read', '300-c23-constexpr-array-read-bad.t', 'compile'),
    ('c23.constexpr-inactive-member', '300-c23-constexpr-inactive-member-bad.t', 'compile'),
    ('c23.constexpr-subobject-qualifier', '300-c23-constexpr-subobject-qualifier-bad.t', 'compile'),
    ('c23.constexpr-atomic', '300-c23-constexpr-atomic-bad.t', 'compile'),
    ('c23.constexpr-vla', '300-c23-constexpr-vla-bad.t', 'compile'),
    ('c23.constexpr-integer-narrowing', '300-c23-constexpr-integer-narrowing-bad.t', 'compile'),
    ('c23.constexpr-floating-narrowing', '300-c23-constexpr-floating-narrowing-bad.t', 'compile'),
    ('c23.constexpr-bitfield-narrowing', '300-c23-constexpr-bitfield-narrowing-bad.t', 'compile'),
    ('c23.constexpr-string-narrowing', '300-c23-constexpr-string-narrowing-bad.t', 'compile'),
    ('c23.constexpr-pointer-nonnull', '300-c23-constexpr-pointer-nonnull-bad.t', 'compile'),
    ('c23.constexpr-overridden', '300-c23-constexpr-overridden-bad.t', 'compile'),
    ('c23.constexpr-fractional-integer', '300-c23-constexpr-fractional-integer-bad.t', 'compile'),
    ('c23.constexpr-complex-to-real', '300-c23-constexpr-complex-to-real-bad.t', 'compile'),
    ('c23.constexpr-signaling-narrowing', '300-c23-constexpr-signaling-narrowing-bad.t', 'compile'),
    ('c23.auto-pending-name', '300-c23-auto-pending-name-bad.t', 'compile'),
    ('c23.auto-sizeof-self', '300-c23-auto-sizeof-self-bad.t', 'compile'),
    ('c23.auto-multiple', '300-c23-auto-multiple-bad.t', 'compile'),
    ('c23.auto-same-scope', '300-c23-auto-same-scope-bad.t', 'compile'),
    ('c23.auto-pointer-declarator', '300-c23-auto-pointer-declarator-bad.t', 'compile'),
    ('c23.auto-array-declarator', '300-c23-auto-array-declarator-bad.t', 'compile'),
    ('c23.auto-braced-initializer', '300-c23-auto-braced-initializer-bad.t', 'compile'),
    ('c23.auto-no-initializer', '300-c23-auto-no-initializer-bad.t', 'compile'),
    ('c23.auto-no-value', '300-c23-auto-no-value-bad.t', 'compile'),
    ('c23.auto-file-explicit-type', '300-c23-auto-file-explicit-type-bad.t', 'compile'),
    ('c23.auto-explicit-storage', '300-c23-auto-explicit-storage-bad.t', 'compile'),
    ('c23.auto-parameter', '300-c23-auto-parameter-bad.t', 'compile'),
    ('c23.auto-typed-parameter', '300-c23-auto-typed-parameter-bad.t', 'compile'),
    ('c23.auto-return-type', '300-c23-auto-return-type-bad.t', 'compile'),
    ('c23.auto-type-name', '300-c23-auto-type-name-bad.t', 'compile'),
    ('c23.auto-typedef', '300-c23-auto-typedef-bad.t', 'compile'),
    ('c23.vla-nonempty', '300-c23-vla-nonempty-bad.t', 'compile'),
    ('c23.vla-static-empty', '300-c23-vla-static-empty-bad.t', 'compile'),
    ('c23.vla-compound-empty', '300-c23-vla-compound-empty-bad.t', 'compile'),
    ('c23.array-unknown-bound-empty', '300-c23-array-unknown-bound-empty-bad.t', 'compile'),
    ('c23.label-on-substatement-declaration', '300-c23-label-before-substatement-declaration-bad.t', 'compile'),
    ('c23.label-at-substatement-end', '300-c23-label-at-substatement-end-bad.t', 'compile'),
    ('c23.block-label-goto-vla', '300-c23-block-labels-goto-vla-bad.t', 'compile'),
    ('c23.block-label-case-vla', '300-c23-block-labels-case-vla-bad.t', 'compile'),
    ('c23.compound-register-address', '300-c23-compound-register-address-bad.t', 'compile'),
    ('c23.compound-register-file', '300-c23-compound-register-file-bad.t', 'compile'),
    ('c23.compound-thread-without-static', '300-c23-compound-thread-without-static-bad.t', 'compile'),
    ('c23.compound-constexpr-thread', '300-c23-compound-constexpr-thread-bad.t', 'compile'),
    ('c23.compound-duplicate-storage', '300-c23-compound-duplicate-storage-bad.t', 'compile'),
    ('c23.compound-static-runtime', '300-c23-compound-static-runtime-bad.t', 'compile'),
    ('c23.compound-constexpr-narrowing', '300-c23-compound-constexpr-narrowing-bad.t', 'compile'),
    ('c23.compound-constexpr-address', '300-c23-compound-constexpr-address-bad.t', 'compile'),
    ('c23.compound-thread-address', '300-c23-compound-thread-address-bad.t', 'compile'),
    ('c23.compound-inline-static', '300-c23-compound-inline-static-bad.t', 'compile'),
    ('c23.compound-storage-in-cast', '300-c23-compound-storage-in-cast-bad.t', 'compile'),
)
C23_SOURCE_CASES = (
    ('c23.version', '100-c23-version.t', 'preprocess'),
    ('c23.trigraph-spelling-and-splice', '100-c23-trigraph-spelling-and-splice.t', 'compile'),
    ('c23.preprocessing-conditionals', '100-c23-elifdef.t', 'compile'),
    ('c23.preprocessing-warning', '100-c23-warning.t', 'preprocess'),
    *C23_SOURCE_REJECTIONS,
)
C23_EMBED_SOURCE = PA38_GENERAL / '100-c23-embed.t'
C23_EMBED_FIXTURES = C23_EMBED_SOURCE.with_suffix('.inc')
SIZEOF_COMPOUND = PA38_GENERAL / '300-c99-sizeof-compound-literal.t'
C23_PROGRAMS = {
    'function.ignored-fallthrough': (DISCARDED_FALLTHROUGH, ()),
    'compound.sizeof': (SIZEOF_COMPOUND, ()),
    'include.query': (INCLUDE_QUERY, ('-I' + str(INCLUDE_QUERY.parent),)),
    'c23.attribute-probe': (PA38_GENERAL / '100-c23-attribute-probe.t', ()),
    'c23.embed': (C23_EMBED_SOURCE, ('--embed-dir=' + str(C23_EMBED_FIXTURES / 'resources'),
                                    '-I' + str(C23_EMBED_FIXTURES / 'headers'))),
    'c23.number-spellings': (PA38_GENERAL / '100-c23-number-spellings.t', ()),
    'c23.variadic-expansion': (PA38_GENERAL / '100-c23-variadic-macro.t', ()),
    'c23.literal-ucn': (PA38_GENERAL / '100-c23-literal-ucn.t', ()),
    'c23.unicode-identifiers': (PA38_GENERAL / '100-c23-unicode-identifiers.t', ()),
    'c23.boolean-keywords': (PA38_GENERAL / '100-c23-bool-keywords.t', ()),
    'c23.typeof-qualifiers': (PA38_GENERAL / '300-c23-typeof-qualifiers.t', ()),
    'c23.typeof-vla': (PA38_GENERAL / '300-c23-typeof-vla.t', ()),
    'c23.nullptr-conversions': (PA38_GENERAL / '300-c23-nullptr-conversions.t', ()),
    'c23.nullptr-variadic': (PA38_GENERAL / '500-c23-nullptr-variadic.t', ()),
    'c23.enum-values': (PA38_GENERAL / '300-c23-enum-values.t', ()),
    'c23.enum-fixed': (PA38_GENERAL / '300-c23-enum-fixed.t', ()),
    'c23.enum-fixed-wide': (PA38_GENERAL / '300-c23-enum-fixed-wide.t', ()),
    'c23.enum-redefinition': (PA38_GENERAL / '300-c23-enum-redefinition.t', ()),
    'c23.enum-redefinition-wide': (PA38_GENERAL / '300-c23-enum-redefinition-wide.t', ()),
    'c23.record-redefinition': (PA38_GENERAL / '300-c23-record-redefinition.t', ()),
    'c23.record-redefinition-attributes': (PA38_GENERAL / '300-c23-record-redefinition-attributes.t', ()),
    'c23.record-redefinition-with-tags': (PA38_GENERAL / '300-c23-record-redefinition-nested.t', ()),
    'c23.tag-cross-scope': (PA38_GENERAL / '300-c23-tag-cross-scope.t', ()),
    'c23.tag-cross-scope-composite': (PA38_GENERAL / '300-c23-tag-cross-scope-composite.t', ()),
    'c23.tag-cross-scope-cycles': (PA38_GENERAL / '300-c23-tag-cross-scope-cycles.t', ()),
    'c23.tag-cross-scope-fixed-forward': (PA38_GENERAL / '300-c23-tag-cross-scope-fixed-forward.t', ()),
    'c23.bitint-literals': (PA38_GENERAL / '200-c23-bit-precise-literals.t', ()),
    'c23.bitint-integers': (PA38_GENERAL / '300-c23-bit-precise-integers.t', ()),
    'c23.bitint-calls': (PA38_GENERAL / '500-c23-bit-precise-calls.t', ()),
    'c23.static-signaling-nan': (PA38_GENERAL / '500-c-static-signaling-nan.t', ()),
    'c23.bitint-bit-builtins': (PA38_GENERAL / '500-c23-bit-precise-builtins.t', ()),
    'c23.bitint-atomics': (PA38_GENERAL / '500-c23-bit-precise-atomics.t', ()),
    'c23.constexpr-scalars': (PA38_GENERAL / '300-c23-constexpr-scalars.t', ()),
    'c23.constexpr-aggregates': (PA38_GENERAL / '300-c23-constexpr-aggregates.t', ()),
    'c23.constexpr-sparse-records': (PA38_GENERAL / '300-c23-constexpr-sparse-records.t', ()),
    'c23.constexpr-sparse-copy-updates': (PA38_GENERAL / '300-c23-constexpr-sparse-copy-updates.t', ()),
    'c23.constexpr-complex': (PA38_GENERAL / '300-c23-constexpr-complex.t', ()),
    'c23.auto-inference': (PA38_GENERAL / '300-c23-auto-inference.t', ()),
    'c23.auto-qualified': (PA38_GENERAL / '300-c23-auto-qualified.t', ()),
    'c23.auto-vla': (PA38_GENERAL / '300-c23-auto-vla.t', ()),
    'c23.auto-thread-local': (PA38_GENERAL / '300-c23-auto-thread-local.t', ()),
    'c23.vla-empty': (PA38_GENERAL / '300-c23-vla-empty.t', ()),
    'c23.vla-empty-typedef': (PA38_GENERAL / '300-c23-vla-empty-typedef.t', ()),
    'c23.block-labels': (PA38_GENERAL / '300-c23-block-labels.t', ()),
    'c23.block-labels-vla': (PA38_GENERAL / '300-c23-block-labels-vla.t', ()),
    'c23.compound-storage': (PA38_GENERAL / '300-c23-compound-storage.t', ()),
    'c23.compound-constexpr': (PA38_GENERAL / '300-c23-compound-constexpr.t', ()),
    'c23.compound-thread-storage': (PA38_GENERAL / '300-c23-compound-thread-storage.t', ()),
}
FLEXIBLE_ARRAY = PA38_GENERAL / '300-c-flexible-array.t'
RECORD_CONSTRAINTS = {
    'record.flexible-only-member': ('200-c-flexible-only-member-bad.t', 'a flexible array must be the last member'),
    'record.flexible-nonfinal': ('200-c-flexible-nonfinal-bad.t', 'a flexible array must be the last member'),
    'record.flexible-union-member': ('200-c-flexible-union-member-bad.t', 'a flexible array must be the last member'),
    'record.flexible-struct-member': ('200-c-flexible-struct-member-bad.t', 'a struct member containing a flexible array'),
    'record.flexible-array-element': ('200-c-flexible-array-element-bad.t', 'an array element containing a flexible array'),
    'record.function-member': ('200-c-function-member-bad.t', 'a C record member cannot have function type'),
    'record.flexible-positional-initializer': ('300-c-flexible-positional-initializer-bad.t',
                                             'initializing a flexible array member'),
    'record.flexible-designated-initializer': ('300-c-flexible-designated-initializer-bad.t',
                                             'initializing a flexible array member'),
}
REGISTER_PROGRAM = PA38_GENERAL / '300-c-register-storage.t'
REGISTER_ADDRESS = 'taking the address of a register object'
REGISTER_CONSTRAINTS = {
    'storage.register-address': ('address', REGISTER_ADDRESS, C_EDITIONS),
    'storage.register-member-address': ('member-address', REGISTER_ADDRESS, C_EDITIONS),
    'storage.register-parameter-address': ('parameter-address', REGISTER_ADDRESS, C_EDITIONS),
    'storage.register-retained-parameter-address': ('retained-parameter-address', REGISTER_ADDRESS, (*PILOT_EDITIONS, 23)),
    'storage.register-identifier-list-address': ('identifier-list-address', REGISTER_ADDRESS,
                                                 (*LEGACY_STANDARDS, *PILOT_EDITIONS)),
    'storage.register-file-scope': ('file-scope', 'register storage requires a block-scope object', C_EDITIONS),
    'storage.register-function': ('function', 'register storage on a function declaration', C_EDITIONS),
    'storage.register-combination': ('storage-combination', 'register with an incompatible storage-class', C_EDITIONS),
}
REJECTED_CASES = {
    'line.diagnostic-location', 'error.message', *RECORD_CONSTRAINTS,
    *REGISTER_CONSTRAINTS,
    *vla.REJECTIONS,
    *(case for case, _, _ in C23_SOURCE_REJECTIONS),
}
C11_LIBRARY_SOURCES = {
    'library.c11-header-facilities': ROOT / 'scripts/tests/c_c11_header_facilities.c',
    'library.aligned-allocation': ROOT / 'scripts/tests/c_c11_allocation.c',
    'library.timespec-get': ROOT / 'scripts/tests/c_c11_time.c',
    'library.uchar-conversions': ROOT / 'scripts/tests/c_c11_unicode.c',
    'library.quick-exit': ROOT / 'scripts/tests/c_c11_quick_exit.c',
    'library.exclusive-fopen': ROOT / 'scripts/tests/c_c11_exclusive_fopen.c',
    'library.c11-atomics': ROOT / 'scripts/tests/c_c11_atomics.c',
    'library.c11-threads': ROOT / 'scripts/tests/c_c11_threads.c',
}
C23_SDK_HEADERS = ROOT / 'scripts/tests/c_c23_sdk_headers.c'
SETJMP_SOURCE = ROOT / 'scripts/tests/c_setjmp.c'
SIGNAL_SOURCE = ROOT / 'scripts/tests/c_signal.c'
LIBRARY_PROGRAMS = {
    'library.c95-wide-headers': (95, C95_WIDE_HEADERS, 'iso646 limits wchar wctype'),
    'library.assert-reinclusion': (90, ROOT / 'scripts/tests/c_assert_reinclusion.c', 'assert'),
    'library.ctype-locale': (90, ROOT / 'scripts/tests/c_ctype_locale.c', 'ctype locale stdio string'),
    'library.stddef-layout': (90, ROOT / 'scripts/tests/c_stddef_layout.c', 'stddef'),
    'library.stdio-formats': (90, ROOT / 'scripts/tests/c_stdio_formats.c', 'stdarg stdio string'),
    'library.stdio-long-double': (90, ROOT / 'scripts/tests/c_stdio_long_double.c', 'stdarg stdio string'),
    'library.stdio-streams': (90, ROOT / 'scripts/tests/c_stdio_streams.c', 'stdio string'),
    'library.stdlib-allocation': (90, ROOT / 'scripts/tests/c_stdlib_allocation.c', 'stdlib'),
    'library.stdlib-conversion': (90, ROOT / 'scripts/tests/c_stdlib_conversion.c', 'errno limits stdlib'),
    'library.stdlib-search': (90, ROOT / 'scripts/tests/c_stdlib_search.c', 'stdlib'),
    'library.string-functions': (90, ROOT / 'scripts/tests/c_string_functions.c', 'string'),
    'library.va-copy-stdio': (99, ROOT / 'scripts/tests/c_c99_va_copy.c', 'stdarg stdio string'),
    'library.inttypes-conversion': (99, ROOT / 'scripts/tests/c_c99_inttypes.c', 'inttypes stdio string'),
}
C23_VERSIONED_PROGRAMS = {
    'library.c23-assert': (ROOT / 'scripts/tests/c_c23_assert.c', 'assert'),
    'library.c23-binary-conversion': (ROOT / 'scripts/tests/c_c23_binary_conversion.c', 'stdlib inttypes'),
    'library.c23-binary-stdio': (ROOT / 'scripts/tests/c_c23_binary_stdio.c', 'stdio inttypes'),
    'library.c23-memalignment': (ROOT / 'scripts/tests/c_c23_memalignment.c', 'stdlib'),
    'library.c23-memset-explicit': (ROOT / 'scripts/tests/c_c23_memset_explicit.c', 'string'),
    'library.c23-string-allocation': (ROOT / 'scripts/tests/c_c23_string_allocation.c', 'string'),
    'library.c23-time-resolution': (ROOT / 'scripts/tests/c_c23_time_resolution.c', 'time'),
    'library.c23-uchar-utf8': (ROOT / 'scripts/tests/c_c23_uchar_utf8.c', 'uchar'),
}
WASI_SIGNAL = 'wasi-emulated-signal'
WASI_LONG_DOUBLE_STDIO = 'c-printscan-long-double'
C23_LIBRARY_SOURCES = {
    'library.c23-integer-widths': ('limits_width_macros', ROOT / 'scripts/tests/c_c23_integer_widths.c'),
    'library.c23-stdint-widths': ('stdint_width_macros', ROOT / 'scripts/tests/c_c23_stdint_widths.c'),
    'library.c23-float-constants': ('float_constants', ROOT / 'scripts/tests/c_c23_float_constants.c'),
    'library.c23-float-formats': ('float_format_macros', ROOT / 'scripts/tests/c_c23_float_formats.c'),
    'library.c23-variadics': ('stdarg.h', ROOT / 'scripts/tests/c_c23_variadics.c'),
    'library.c23-checked-arithmetic': ('stdckdint.h', ROOT / 'scripts/tests/c_c23_checked_arithmetic.c'),
    'library.c23-bit-utilities': ('stdbit.h', ROOT / 'scripts/tests/c_c23_bit_utilities.c'),
    'library.c23-bit-utilities-extended': ('stdbit.h', ROOT / 'scripts/tests/c_c23_bit_utilities_extended.c'),
}
CASES = {
    **headers.header_cases(),
    **{case: (RUN_STAGES, ('O0', 'O2')) for case in (*vla.PROGRAMS, *vla.GNU_PROGRAMS)},
    **{case: (PAIR_STAGES, ('O0', 'O2')) for case in (*vla.PAIR_SOURCES, *vla.MIXED_CASES)},
    **{case: (('compile',), ('O0', 'O2')) for case in vla.REJECTIONS},
    **{case: ((stage,), ('default',)) for case, _, stage in C23_SOURCE_CASES},
    **{case: (RUN_STAGES, ('O0', 'O2')) for case in C23_PROGRAMS},
    'limits.combined': (RUN_STAGES, ('O0', 'O2')),
    'limits.integer': (RUN_STAGES, ('O0', 'O2')),
    'limits.float': (RUN_STAGES, ('O0', 'O2')),
    'limits.rounding-default': (RUN_STAGES, ('O0', 'O2')),
    'limits.rounding-query': (RUN_STAGES, ('O0', 'O2')),
    'floating.fenv-binary': (RUN_STAGES, ('O0', 'O2')),
    'floating.fenv-convert': (RUN_STAGES, ('O0', 'O2')),
    'floating.fenv-compare': (RUN_STAGES, ('O0', 'O2')),
    'floating.fenv-quad': (RUN_STAGES, ('O0', 'O2')),
    'floating.fenv-libm': (RUN_STAGES, ('O0', 'O2')),
    'floating.fp-contract': (RUN_STAGES, ('O0', 'O2')),
    'floating.complex-range': (RUN_STAGES, ('O0', 'O2')),
    'floating.complex-fenv': (RUN_STAGES, ('O0', 'O2')),
    'floating.static-zero-division': (RUN_STAGES, ('O0', 'O2')),
    'floating.hosted-math': (RUN_STAGES, ('O0', 'O2', 'Oz')),
    'include.physical': (RUN_STAGES, ('O0',)),
    'include.query': (RUN_STAGES, ('O0',)),
    'literal.code-units': (RUN_STAGES, ('O0', 'O2')),
    'record.flexible-array': (RUN_STAGES, ('O0', 'O2')),
    'line.diagnostic-location': (('preprocess',), ('default',)),
    'error.message': (('preprocess',), ('default',)),
    'environment.thread-predefine': (('preprocess',), ('default',)),
    'environment.c-version': (('preprocess',), ('default',)),
    **{case: (RUN_STAGES, ('O0', 'O2')) for case in C11_LIBRARY_SOURCES},
    **{case: (RUN_STAGES, ('O0', 'O2')) for case in C23_LIBRARY_SOURCES},
    **{case: (RUN_STAGES, ('O0', 'O2')) for case in LIBRARY_PROGRAMS},
    **{case: (RUN_STAGES, ('O0', 'O2')) for case in C23_VERSIONED_PROGRAMS},
    'library.c17-binary-prefix-control': (RUN_STAGES, ('O0', 'O2')),
    'library.setjmp': (RUN_STAGES, ('O0', 'O2')),
    'library.signal': (RUN_STAGES, ('O0', 'O2')),
    'library.wasi-signal-emulation': (RUN_STAGES, ('O0', 'O2')),
    'library.wasi-stdio-long-double': (RUN_STAGES, ('O0', 'O2')),
    'library.c23-stdarg-version': (('preprocess',), ('default',)),
    **{case: (('compile',), ('default',)) for case in RECORD_CONSTRAINTS},
    **{case: (('compile',), ('default',)) for case in REGISTER_CONSTRAINTS},
    'storage.register-use': (RUN_STAGES, ('O0', 'O2')),
}
INTEGER_LIMITS = ROOT / 'scripts/tests/c_integer_limits.c'
FLOAT_LIMITS = ROOT / 'scripts/tests/c_float_limits.c'
DEFAULT_ROUNDING = ROOT / 'scripts/tests/c_default_rounding.c'
ROUNDING_QUERY = ROOT / 'pa30/tests/run/800-builtin-fp-rounds.t.1'
FENV_BINARY = ROOT / 'pa38/tests/general/500-c-fenv-binary.t'
FENV_CONVERT = ROOT / 'pa38/tests/general/500-c-fenv-convert.t'
FENV_COMPARE = ROOT / 'pa38/tests/general/500-c-fenv-compare.t'
FENV_QUAD = ROOT / 'pa38/tests/general/500-c-fenv-quad.t'
FENV_LIBM = ROOT / 'pa38/tests/general/500-c-fenv-libm.t'
FP_CONTRACT = ROOT / 'pa38/tests/general/500-c-fp-contract.t'
COMPLEX_RANGE = ROOT / 'pa38/tests/general/500-c-complex-limited-range.t'
COMPLEX_FENV = ROOT / 'pa38/tests/general/500-c-complex-fenv.t'
FENV_ZERO_DIVISION = ROOT / 'pa38/tests/general/500-c-fenv-static-zero-division.t'
HOSTED_MATH = ROOT / 'pa38/tests/general/500-c-hosted-math-classification.t'
# Precision of the target ABI's long double, independent of the candidate's predefines.
LONG_DOUBLE_PRECISION = {
    'x86_64-linux-gnu': 64,
    'aarch64-linux-gnu': 113,
    'x86_64-apple-darwin': 64,
    'arm64-apple-darwin': 53,
    'wasm32-unknown-unknown': 113,
    'wasm32-wasip1': 113,
}
INCLUDE_SOURCE = ROOT / 'pa38/tests/general/100-c-include-physical.t'
STRING_SOURCE = ROOT / 'pa38/tests/general/500-c-string-code-units.t'
ERROR_SOURCE = ROOT / 'pa4/tests/directives/150-error-message.t'
ERROR_MESSAGE = '#error DETAIL: physical message "payload"'


def load(path):
    return json.loads(path.read_text())


def by_id(rows, kind):
    indexed = {}
    for row in rows:
        name = row.get('id')
        if not isinstance(name, str) or not re.fullmatch(r'[a-z0-9]+(?:[._-][a-z0-9]+)*', name):
            raise ValueError(f'missing or invalid {kind} ID: {name!r}')
        if name in indexed:
            raise ValueError(f'duplicate {kind}: {name}')
        indexed[name] = row
    return indexed


def inventory(path):
    document = load(path)
    if document['schema'] != 1:
        raise ValueError('unsupported C inventory schema')
    profiles = by_id(document['profiles'], 'profile')
    rules = by_id([*document['rules'], *headers.header_rules()], 'rule')
    for name, profile in profiles.items():
        if profile['environment'] not in {'hosted', 'freestanding'} or not profile['target']:
            raise ValueError(f'invalid environment or target for {name}')
    for name, rule in rules.items():
        editions, cases = rule['editions'], rule['cases']
        if not editions or len(set(editions)) != len(editions) or set(editions) - set(C_EDITIONS):
            raise ValueError(f'invalid editions on {name}')
        if not rule['clause'] or not rule['requirement'] or rule['environment'] not in {'all', 'hosted', 'freestanding'}:
            raise ValueError(f'invalid applicability on {name}')
        if rule['kind'] not in {'required', 'conditional', 'implementation-defined', 'gnu'}:
            raise ValueError(f'invalid rule kind on {name}')
        target_limits = rule.get('profiles')
        if target_limits is not None and (
                not target_limits or len(set(target_limits)) != len(target_limits)
                or set(target_limits) - profiles.keys() or not rule.get('outside_profile')):
            raise ValueError(f'invalid profiles or missing reason on {name}')
        if len(set(cases)) != len(cases) or set(cases) - CASES.keys():
            raise ValueError(f'duplicate or unrecognized case on {name}')
    return profiles, rules


def evidence_key(row, profiles):
    case, profile, edition, variant = key = tuple(row[name] for name in ('case', 'profile', 'edition', 'variant'))
    if case not in CASES or profile not in profiles or edition not in C_EDITIONS or variant not in CASES[case][1]:
        raise ValueError(f'unknown case or configuration: {key}')
    if any(row[name] != profiles[profile][name] for name in ('target', 'environment')):
        raise ValueError(f'target or environment mismatch: {key}')
    stages, _ = CASES[case]
    names = tuple(stage['name'] for stage in row['stages'])
    if not names or names != stages[:len(names)] or row['status'] not in {'passed', 'failed'}:
        raise ValueError(f'invalid stage history or outcome: {key}')
    if row['status'] == 'passed':
        want = ('rejection', 1) if case in REJECTED_CASES else ('success', 0)
        outcomes = [(stage['classification'], stage['returncode']) for stage in row['stages']]
        if names != stages or outcomes != [want] * len(stages):
            raise ValueError(f'passing result lacks stage evidence: {key}')
        if profile == 'wasm-freestanding' and names[-1] == 'run' and row['stages'][-1].get('stdout') != '0\n':
            raise ValueError(f'passing result lacks bare Wasm return value: {key}')
    return key


def read_evidence(paths, profiles, header_checks=None):
    receipts = {}
    revision = None
    for path in paths:
        document = load(path)
        if document['schema'] != 1:
            raise ValueError(f'unsupported receipt schema in {path}')
        if revision is None:
            revision = document['revision']
        elif revision != document['revision']:
            raise ValueError('receipts must describe the same source revision')
        for row in document['results']:
            key = evidence_key(row, profiles)
            if key in receipts:
                raise ValueError(f'duplicate receipt: {key}')
            receipts[key] = row['status']
        if header_checks is not None:
            for profile, editions in document.get('header_checks', {}).items():
                for edition, checked in editions.items():
                    header_checks[(profile, int(edition))] = checked
    return receipts


def missing_library_reason(case, profile, checked_c23):
    if case == 'library.stdio-long-double' and profile == 'wasi-hosted':
        return f'The selected WASI SDK requires -l{WASI_LONG_DOUBLE_STDIO}'
    if case in C23_VERSIONED_PROGRAMS and checked_c23:
        _, required = C23_VERSIONED_PROGRAMS[case]
        missing = [f'<{name}.h>' for name in required.split()
                   if checked_c23.get(name, {}).get('version') != 'current']
        if missing:
            return f"Current C23 header version unverified for {', '.join(missing)}"
    return None


def coverage(profiles, rules, receipts, header_checks=None):
    header_checks = header_checks or {}
    for rule in rules.values():
        for edition in rule['editions']:
            for profile, info in profiles.items():
                keys = [(case, profile, edition, variant)
                        for case in rule['cases'] for variant in CASES[case][1]]
                outside_profile = None
                if rule['environment'] not in {'all', info['environment']}:
                    outside_profile = f"rule applies to {rule['environment']} environments"
                if 'profiles' in rule and profile not in rule['profiles']:
                    outside_profile = rule['outside_profile']
                name = rule.get('header')
                header = header_checks.get((profile, edition), {}).get(name, {})
                if (rule['kind'] == 'conditional' and header.get('include') == 'disabled'
                        and (macro := headers.OPTIONAL_HEADERS.get(name)) and header.get('macro') == macro
                        and not any(key in receipts for key in keys)):
                    outside_profile = f'{macro} is 1'
                if outside_profile:
                    status = 'inapplicable'
                elif any(receipts.get(key) == 'failed' for key in keys):
                    status = 'failing'
                elif keys and all(receipts.get(key) == 'passed' for key in keys):
                    status = 'passing'
                else:
                    status = 'uncovered'
                row = dict(rule=rule['id'], clause=rule['clause'], kind=rule['kind'],
                           requirement=rule['requirement'], edition=edition, profile=profile,
                           status=status, environment=rule['environment'],
                           missing=[list(key) for key in keys if key not in receipts] if status == 'uncovered' else [])
                if outside_profile:
                    row['reason'] = outside_profile
                elif status == 'uncovered' and header:
                    if header.get('include') == 'missing':
                        row['reason'] = f'<{name}.h> absent from the selected SDK include search'
                    elif header.get('include') == 'sdk-opt-in':
                        row['reason'] = f'<{name}.h> requires the SDK emulation opt-in'
                    elif rule['id'].startswith('library.header-version.') and header.get('version') == 'missing':
                        row['reason'] = f'<{name}.h> omits its C23 version macro'
                    elif reason := missing_library_reason(rule['id'], profile, header_checks.get((profile, 23))):
                        row['reason'] = reason
                yield row


def report(receipts, output, profiles, rules):
    header_checks = {}
    evidence = read_evidence(receipts, profiles, header_checks)
    rows = list(coverage(profiles, rules, evidence, header_checks))
    print('### C clause evidence\n')
    print('| Edition | Profile | Passing | Failing | Uncovered | Inapplicable |')
    print('| --- | --- | ---: | ---: | ---: | ---: |')
    counts = {}
    for row in rows:
        counts.setdefault((row['edition'], row['profile']), Counter())[row['status']] += 1
    for (edition, profile), outcomes in counts.items():
        values = [outcomes[status] for status in ('passing', 'failing', 'uncovered', 'inapplicable')]
        print(f'| C{edition} | {profile} | ' + ' | '.join(map(str, values)) + ' |')
    if output:
        write_json(output, dict(schema=1, rows=rows))
    return int(any(row['status'] == 'failing' for row in rows))


def run_stages(directory, commands, capture_run_stdout=False):
    directory.mkdir(parents=True)
    stages = []
    for name, command in commands:
        # Wasmtime reserves virtual memory for guards as well as linear memory.
        limits = dict(LIMITS, address_space_bytes=64 * 1024 ** 3) if name == 'run' else LIMITS
        cwd = directory if name == 'run' else None
        result, stdout, diagnostic = execute(command, directory / name, limits, cwd=cwd)
        if capture_run_stdout and name == 'run':
            result['stdout'] = stdout
        stages.append(dict(name=name, **result))
        if result['classification'] != 'success':
            break
    return stages, diagnostic


def receipt(case, profile, edition, variant, passed, stages):
    return dict(case=case, profile=profile['id'], target=profile['target'],
                environment=profile['environment'], edition=edition, variant=variant,
                status='passed' if passed else 'failed', stages=stages)


def numeric_sources(profile, bare_sdk):
    target = profile['target']
    wasm = target.startswith('wasm32-')
    rounding_link = () if wasm else ('-lm',)
    float_link = ()
    if profile['id'] == 'wasm-freestanding':
        if not bare_sdk:
            return []
        include_dir, builtins = bare_sdk
        include = ('-isystem', str(include_dir))
        float_link = (str(builtins),)
    else:
        include = ()
    long_bits = 32 if wasm else 64
    contract_flags = ('-ffp-contract=off',)
    if target.startswith(('aarch64-', 'arm64-')):
        contract_flags += ('-DEXPECT_FUSED',)
    sources = [
        ('limits.integer', INTEGER_LIMITS, (*include, f'-DEXPECT_LONG_BITS={long_bits}'), ()),
        ('limits.float', FLOAT_LIMITS, (*include, f'-DEXPECT_LDBL_MANT_DIG={LONG_DOUBLE_PRECISION[target]}'), float_link),
        ('limits.rounding-default', DEFAULT_ROUNDING, include, rounding_link),
        ('floating.fenv-quad', FENV_QUAD, include, rounding_link),
        ('floating.fp-contract', FP_CONTRACT, contract_flags, ()),
        ('floating.complex-range', COMPLEX_RANGE, (), float_link),
        ('floating.complex-fenv', COMPLEX_FENV, (), rounding_link),
        ('floating.static-zero-division', FENV_ZERO_DIVISION, include, rounding_link),
    ]
    if profile['environment'] == 'hosted':
        sources.extend([
            ('floating.hosted-math', HOSTED_MATH, (), rounding_link),
            ('floating.fenv-libm', FENV_LIBM, (), rounding_link),
        ])
    if not wasm:
        sources.extend([
            ('limits.rounding-query', ROUNDING_QUERY, (), rounding_link),
            ('floating.fenv-binary', FENV_BINARY, (), rounding_link),
            ('floating.fenv-convert', FENV_CONVERT, (), rounding_link),
            ('floating.fenv-compare', FENV_COMPARE, (), rounding_link),
        ])
    return sources


def c11_library_sources(profile, edition):
    target = profile['target']
    wasm = target.startswith('wasm32-')
    linux = target.endswith('-linux-gnu')
    for case, source in C11_LIBRARY_SOURCES.items():
        if profile['environment'] != 'hosted':
            continue
        if edition == 23 and case == 'library.c11-header-facilities':
            # C23 replaces the alignas/alignof macros with keywords.
            continue
        if case == 'library.c11-threads':
            if linux:
                yield case, source, ('-pthread',), ('-pthread',)
            continue
        # The selected Darwin SDK's Unicode conversion interface is still
        # unqualified. Its required rule remains uncovered in the matrix.
        if case == 'library.uchar-conversions' and not (linux or wasm):
            continue
        yield case, source, (), ()


def probe_c23_source_cases(output, profile, compiler, setup):
    flags = [compiler, '--target=' + profile['target'], *setup, '-x', 'c', '-std=c23', '-pedantic-errors']
    work = output / profile['id'] / 'c23'
    for case, name, stage in C23_SOURCE_CASES:
        source = str(PA38_GENERAL / name)
        options = ['-E', source, '-o', '/dev/null'] if stage == 'preprocess' else ['-fsyntax-only', source]
        stages, text = run_stages(work / case, [(stage, [*flags, *options])])
        outcome = 'rejection' if case in REJECTED_CASES else 'success'
        passed = stages[0]['classification'] == outcome
        if case == 'c23.preprocessing-warning':
            passed = passed and '#warning translation continues after a warning WORD' in text
            passed = passed and 'a skipped warning' not in text
        yield receipt(case, profile, 23, 'default', passed, stages)


def probe_units(work, profile, case, units, link, runner, link_flags=()):
    bare_wasm = profile['id'] == 'wasm-freestanding'
    for variant in CASES[case][1]:
        directory = work / case / variant
        binary = str(directory / 'case.exe')
        objects = [str(directory / name) for name in ('case.o', 'companion.o')[:len(units)]]
        commands = [(name, [*flags, '-' + variant, '-c', str(source), '-o', obj])
                    for name, (source, flags), obj in zip(PAIR_STAGES, units, objects)]
        stages, _ = run_stages(directory, [*commands,
            ('link', [*link, *objects, *link_flags, '-o', binary]),
            ('run', [*runner, binary]),
        ], capture_run_stdout=bare_wasm)
        last = stages[-1]
        passed = last['name'] == 'run' and last['classification'] == 'success'
        if passed and bare_wasm:
            # Wasmtime's process succeeds even when the exported function returns nonzero.
            passed = last['stdout'] == '0\n'
        yield variant, passed, stages


def probe_program(work, profile, case, source, flags, link, runner, link_flags=()):
    yield from probe_units(work, profile, case, ((source, flags),), link, runner, link_flags)


def probe_vlas(work, profile, edition, flags, link, runner, reference):
    sources = [(case, stem, flags) for case, (stem, editions) in vla.PROGRAMS.items() if edition in editions]
    if edition in (17, 23):
        gnu_flags = [*flags[:-2], f'-std=gnu{edition}']
        sources.extend((case, stem, gnu_flags) for case, (stem, editions) in vla.GNU_PROGRAMS.items()
                       if edition in editions)
    for case, stem, source_flags in sources:
        for variant, passed, stages in probe_program(work, profile, case, PA38_GENERAL / (stem + '.t'),
                                                      source_flags, link, runner):
            yield receipt(case, profile, edition, variant, passed, stages)
    for case, (stem, editions, diagnostic) in vla.REJECTIONS.items():
        if edition not in editions:
            continue
        source = PA38_GENERAL / (stem + '.t')
        for level in CASES[case][1]:
            stages, text = run_stages(work / case / level, [
                ('compile', [*flags, '-' + level, '-fsyntax-only', str(source)]),
            ])
            rejected = stages[0]['classification'] == 'rejection' and stages[0]['returncode'] == 1
            yield receipt(case, profile, edition, level, rejected and diagnostic in text, stages)
    if edition not in vla.MODERN:
        return
    pairs = {case: ((PA38_GENERAL / (stem + '.t'), flags), (PA38_GENERAL / (stem + '.t.1'), flags))
             for case, stem in vla.PAIR_SOURCES.items()}
    if reference:
        # GCC 13 and earlier use the transitional C2x flag. The paired
        # function uses the same adjusted parameter in all four editions.
        standard = 'c2x' if edition == 23 else f'c{edition}'
        reference_flags = [*reference, '-x', 'c', '-std=' + standard, '-pedantic-errors']
        caller, callee = pairs['vla.parameter-abi']
        pairs.update({
            'vla.cppgm-caller': (caller, (callee[0], reference_flags)),
            'vla.cppgm-callee': ((caller[0], reference_flags), callee),
        })
    for case, units in pairs.items():
        pair_runner, link_flags = runner, ()
        if profile['id'] == 'wasm-freestanding' and case != 'vla.external-call':
            # Clang can give the exported 'main' a startup signature.
            # Exercise the same ordinary function in both mixed directions.
            entry = 'check_vla_parameter'
            pair_runner = [*runner[:-1], entry]
            link_flags = ('--export', entry)
        for variant, passed, stages in probe_units(work, profile, case, units, link, pair_runner, link_flags):
            yield receipt(case, profile, edition, variant, passed, stages)


def register_constraint_source(suffix):
    return PA38_GENERAL / f'300-c-register-{suffix}-bad.t'


def probe_registers(work, profile, edition, flags, link, runner):
    case = 'storage.register-use'
    for variant, passed, stages in probe_program(work, profile, case, REGISTER_PROGRAM, flags, link, runner):
        yield receipt(case, profile, edition, variant, passed, stages)
    for case, (suffix, diagnostic, editions) in REGISTER_CONSTRAINTS.items():
        if edition not in editions:
            continue
        source = register_constraint_source(suffix)
        stages, text = run_stages(work / case, [('compile', [*flags, '-fsyntax-only', str(source)])])
        rejected = stages[0]['classification'] == 'rejection' and stages[0]['returncode'] == 1
        yield receipt(case, profile, edition, 'default', rejected and diagnostic in text, stages)


def probe_c23_library(work, profile, flags, link, runner, bare_sdk, sdk_headers):
    if profile['id'] == 'wasm-freestanding' and not bare_sdk:
        return
    include_flags = []
    link_flags = []
    if bare_sdk:
        include, builtins = bare_sdk
        include_flags = ['-isystem', str(include)]
        link_flags = [str(builtins)]
    flags = [*flags, *include_flags]
    availability = work / 'sdk-headers' / 'available.txt'
    stages, diagnostic = run_stages(availability.parent, [
        ('preprocess', [*flags, '-E', str(C23_SDK_HEADERS), '-o', str(availability)]),
    ])
    if stages[0]['classification'] != 'success':
        raise RuntimeError(f"cannot identify C23 SDK headers for {profile['id']}: {diagnostic.strip()}")
    markers = {line.removeprefix('identifier ') for line in availability.read_text().splitlines()
               if line.startswith('identifier CPP_GM_')}
    if 'CPP_GM_SDK_HEADERS' not in markers:
        raise ValueError(f"unexpected C23 SDK header probe output for {profile['id']}")
    facilities = {
        'stdarg.h': 'CPP_GM_STDARG',
        'stdckdint.h': 'CPP_GM_STDCKDINT',
        'stdbit.h': 'CPP_GM_STDBIT',
        'limits_width_macros': 'CPP_GM_LIMITS_WIDTHS',
        'stdint_width_macros': 'CPP_GM_STDINT_WIDTHS',
        'float_constants': 'CPP_GM_FLOAT_CONSTANTS',
        'float_format_macros': 'CPP_GM_FLOAT_FORMATS',
    }
    available = {name: marker in markers for name, marker in facilities.items()}
    has_stdarg_version = 'CPP_GM_STDARG_VERSION' in markers
    sdk_headers[profile['id']] = dict(available, stdarg_version_macro=has_stdarg_version)
    for case, (header, source) in C23_LIBRARY_SOURCES.items():
        if available[header]:
            for variant, passed, stages in probe_program(work, profile, case, source, flags, link, runner, link_flags):
                yield receipt(case, profile, 23, variant, passed, stages)


def probe_header_version(work, inputs, profile, flags, name, status):
    source = inputs / f'{name}-version.c'
    source.write_text(headers.version_source(name))
    case = f'library.header-version.{name}'
    directory = work / case
    tokens_path = directory / 'version.tokens'
    stages, _ = run_stages(directory, [
        ('preprocess', [*flags, '-DCPPGM_PROBE_VERSION_TOKENS', '-E', str(source), '-o', str(tokens_path)]),
        ('compile', [*flags, '-fsyntax-only', str(source)]),
    ])
    passed = stages[-1]['classification'] == 'success'
    if passed:
        tokens = headers.version_tokens(tokens_path.read_text())
        if tokens is None:
            status['version'] = 'missing'
            return
        if name in headers.VERSION_TOKEN:
            passed = headers.current_version_token(tokens)
    status['version'] = 'current' if passed else 'failed'
    yield receipt(case, profile, 23, 'default', passed, stages)


def probe_headers(output, work, profile, edition, flags, bare_sdk, header_checks):
    expected = dict(headers.edition_headers(edition, profile['environment']))
    if bare_sdk:
        flags = [*flags, '-isystem', str(bare_sdk[0])]
    inputs = output / 'inputs' / profile['id'] / f'c{edition}' / 'headers'
    inputs.mkdir(parents=True)
    query = inputs / 'availability.c'
    query.write_text(headers.availability_source(expected, edition))
    tokens = work / 'header-availability' / 'available.tokens'
    stages, diagnostic = run_stages(tokens.parent, [
        ('preprocess', [*flags, '-E', str(query), '-o', str(tokens)]),
    ])
    if stages[0]['classification'] != 'success':
        raise RuntimeError(f"cannot identify SDK headers for {profile['id']} C{edition}: {diagnostic.strip()}")
    markers = set(tokens.read_text().splitlines())
    if 'identifier CPPGM_HEADERS_PROBE' not in markers:
        raise ValueError('unexpected SDK header probe output')
    checked = {}
    header_checks.setdefault(profile['id'], {})[str(edition)] = checked
    combined = []
    unavailable = []
    for name, case in expected.items():
        status = checked[name] = {}
        if f'identifier CPPGM_HEADER_DISABLED_{name}' in markers:
            status.update(include='disabled', macro=headers.OPTIONAL_HEADERS[name])
            continue
        if f'identifier CPPGM_HEADER_FOUND_{name}' not in markers:
            status['include'] = 'missing'
            unavailable.append(name)
            continue
        source = inputs / f'{name}.c'
        source.write_text(headers.include_source((name, name)))
        stages, diagnostic = run_stages(work / case, [('compile', [*flags, '-fsyntax-only', str(source)])])
        stage = stages[0]
        if (profile['id'] == 'wasi-hosted' and name == 'signal' and stage['classification'] == 'rejection'
                and 'wasm lacks signal support' in diagnostic and '-lwasi-emulated-signal' in diagnostic):
            status['include'] = 'sdk-opt-in'
            unavailable.append(name)
            continue
        combined.append(name)
        passed = stage['classification'] == 'success'
        status['include'] = 'usable' if passed else 'failed'
        yield receipt(case, profile, edition, 'default', passed, stages)
        if passed and edition == 23 and name in headers.HEADER_VERSIONS:
            if name != 'stdlib' or profile['environment'] == 'hosted':
                yield from probe_header_version(work, inputs, profile, flags, name, status)
    if combined:
        case = 'library.headers.combined'
        source = inputs / 'combined.c'
        source.write_text(headers.include_source(combined))
        stages, _ = run_stages(work / case, [('compile', [*flags, '-fsyntax-only', str(source)])])
        passed = stages[0]['classification'] == 'success'
        if not passed or not unavailable:
            yield receipt(case, profile, edition, 'default', passed, stages)


def library_sources(profile, edition, checked, checked_c23, wasi_libraries):
    def usable(names):
        return all(checked.get(name, {}).get('include') == 'usable' for name in names.split())

    position = C_EDITIONS.index(edition)
    hosted = profile['environment'] == 'hosted'
    for case, (introduced, source, required) in LIBRARY_PROGRAMS.items():
        if position < C_EDITIONS.index(introduced) or not usable(required):
            continue
        if not hosted and case not in ('library.stddef-layout', 'library.string-functions'):
            continue
        if case == 'library.stdio-long-double' and profile['id'] == 'wasi-hosted':
            if WASI_LONG_DOUBLE_STDIO in wasi_libraries:
                yield 'library.wasi-stdio-long-double', source, (), ('-l' + WASI_LONG_DOUBLE_STDIO,)
        else:
            yield case, source, (), ()
    if usable('setjmp'):
        yield 'library.setjmp', SETJMP_SOURCE, (), ()
    if usable('signal'):
        yield 'library.signal', SIGNAL_SOURCE, (), ()
    elif checked.get('signal', {}).get('include') == 'sdk-opt-in' and WASI_SIGNAL in wasi_libraries:
        yield 'library.wasi-signal-emulation', SIGNAL_SOURCE, ('-D_WASI_EMULATED_SIGNAL',), ('-l' + WASI_SIGNAL,)
        checked['signal']['emulation_archive'] = str(wasi_libraries[WASI_SIGNAL])

    if edition == 17:
        source, required = C23_VERSIONED_PROGRAMS['library.c23-binary-conversion']
        if usable(required):
            yield 'library.c17-binary-prefix-control', source, (), ()
    if edition != 23:
        return
    for case, (source, required) in C23_VERSIONED_PROGRAMS.items():
        if not hosted and case not in ('library.c23-memset-explicit', 'library.c23-memalignment'):
            continue
        if not usable(required):
            continue
        # Freestanding C23 requires memalignment even though the rest of
        # stdlib.h, including its version macro, is outside that profile.
        use_version = hosted or case != 'library.c23-memalignment'
        if use_version and any(checked_c23.get(name, {}).get('version') != 'current'
                               for name in required.split()):
            continue
        yield case, source, (), ()


def probe_header_programs(work, profile, edition, flags, link, runner, header_checks, wasi_libraries, bare_sdk):
    editions = header_checks[profile['id']]
    sources = library_sources(profile, edition, editions[str(edition)], editions['23'], wasi_libraries)
    if bare_sdk:
        flags = [*flags, '-isystem', str(bare_sdk[0])]
    for case, source, source_flags, link_flags in sources:
        for variant, passed, stages in probe_program(work, profile, case, source, [*flags, *source_flags],
                                                      link, runner, link_flags):
            yield receipt(case, profile, edition, variant, passed, stages)


def probe_target(output, profile, compiler, setup, link, runner, sdk_headers, header_checks,
                 bare_sdk=(), wasi_libraries=None, reference=()):
    bare_wasm = profile['id'] == 'wasm-freestanding'
    if runner and (executable := which(runner[0])):
        runner = [str(Path(executable).absolute()), *runner[1:]]
    numeric = numeric_sources(profile, bare_sdk)
    wasi_libraries = wasi_libraries or {}
    expect_no_threads = int(profile['target'].endswith('-apple-darwin'))
    yield from probe_c23_source_cases(output, profile, compiler, setup)
    c23_flags = [compiler, '--target=' + profile['target'], *setup, '-x', 'c', '-std=c23', '-pedantic-errors']
    c23_work = output / profile['id'] / 'c23'
    yield from probe_vlas(c23_work, profile, 23, c23_flags, link, runner, reference)
    yield from probe_headers(output, c23_work, profile, 23, c23_flags, bare_sdk, header_checks)
    yield from probe_header_programs(c23_work, profile, 23, c23_flags, link, runner,
                                     header_checks, wasi_libraries, bare_sdk)
    yield from probe_registers(c23_work, profile, 23, c23_flags, link, runner)
    c23_limits = output / 'inputs/c23/combined.c'
    for variant, passed, stages in probe_program(c23_work, profile, 'limits.combined', c23_limits,
                                                  c23_flags, link, runner):
        yield receipt('limits.combined', profile, 23, variant, passed, stages)
    yield from probe_c23_library(c23_work, profile, c23_flags, link, runner, bare_sdk, sdk_headers)
    c23_programs = [(case, source, flags, ()) for case, (source, flags) in C23_PROGRAMS.items()]
    c23_programs.extend(numeric)
    c23_programs.extend(c11_library_sources(profile, 23))
    for case, source, flags, link_flags in c23_programs:
        for variant, passed, stages in probe_program(c23_work, profile, case, source,
                                                      [*c23_flags, *flags], link, runner, link_flags):
            yield receipt(case, profile, 23, variant, passed, stages)
    for edition in (*LEGACY_STANDARDS, *PILOT_EDITIONS):
        legacy = edition in LEGACY_STANDARDS
        standard = LEGACY_STANDARDS.get(edition, f'c{edition}')
        flags = [compiler, '--target=' + profile['target'], *setup, '-x', 'c', f'-std={standard}', '-pedantic-errors']
        work = output / profile['id'] / f'c{edition}'
        yield from probe_vlas(work, profile, edition, flags, link, runner, reference)
        yield from probe_headers(output, work, profile, edition, flags, bare_sdk, header_checks)
        yield from probe_header_programs(work, profile, edition, flags, link, runner,
                                         header_checks, wasi_libraries, bare_sdk)
        yield from probe_registers(work, profile, edition, flags, link, runner)
        stages, _ = run_stages(work / 'thread-predefine', [
            ('preprocess', [*flags, f'-DEXPECT_NO_THREADS={expect_no_threads}', '-E', str(THREAD_PREDEFINE), '-o', '/dev/null']),
        ])
        yield receipt('environment.thread-predefine', profile, edition, 'default',
                      stages[0]['classification'] == 'success', stages)
        limits_directory = 'legacy' if legacy else 'modern'
        sources = [
            ('limits.combined', output / 'inputs' / limits_directory / 'combined.c', (), ()),
            ('function.ignored-fallthrough', DISCARDED_FALLTHROUGH, (), ()),
        ]
        if legacy:
            stages, _ = run_stages(work / 'version', [
                ('preprocess', [*flags, '-E', str(LEGACY_VERSION_PROBES[edition]), '-o', '/dev/null']),
            ])
            yield receipt('environment.c-version', profile, edition, 'default',
                          stages[0]['classification'] == 'success', stages)
        else:
            sources.extend([
                ('compound.sizeof', SIZEOF_COMPOUND, (), ()),
                ('include.physical', INCLUDE_SOURCE, (), ()),
                ('include.query', INCLUDE_QUERY, ('-I' + str(INCLUDE_QUERY.parent),), ()),
                ('record.flexible-array', FLEXIBLE_ARRAY, (), ()),
                *numeric,
            ])
        if edition in (11, 17):
            sources.append(('literal.code-units', STRING_SOURCE, (), ()))
            sources.extend(c11_library_sources(profile, edition))
        for case, source, source_flags, link_flags in sources:
            for variant, passed, stages in probe_program(work, profile, case, source, [*flags, *source_flags],
                                                          link, runner, link_flags):
                yield receipt(case, profile, edition, variant, passed, stages)
        if legacy:
            continue
        for case, (source, diagnostic) in RECORD_CONSTRAINTS.items():
            stages, text = run_stages(work / case, [
                ('compile', [*flags, '-fsyntax-only', str(PA38_GENERAL / source)]),
            ])
            matched = diagnostic in text and stages[0]['classification'] == 'rejection' and stages[0]['returncode'] == 1
            yield receipt(case, profile, edition, 'default', matched, stages)
        stages, text = run_stages(work / 'error', [
            ('preprocess', [*flags, '-E', str(ERROR_SOURCE), '-o', '/dev/null']),
        ])
        rejected = stages[0]['classification'] == 'rejection' and stages[0]['returncode'] == 1
        for case, found in (
            ('line.diagnostic-location', 'generated-error.cpp:40:2: #error' in text),
            ('error.message', ERROR_MESSAGE in text and '#error skipped' not in text),
        ):
            yield receipt(case, profile, edition, 'default', rejected and found, stages)


def probes(args, profiles, rules):
    host = (platform.system(), platform.machine())
    native = NATIVE_PROFILES.get(host)
    if native is None:
        raise ValueError(f'no C probe profile for {host[0]} {host[1]}')
    output = args.output.resolve()
    work = output / 'inputs'
    work.mkdir(parents=True)
    for variant, edition in (('legacy', 90), ('modern', 99), ('c23', 23)):
        directory = work / variant
        directory.mkdir()
        with (directory / 'combined.c').open('wb') as file:
            subprocess.run([sys.executable, str(ROOT / 'scripts/generate_c_translation_limits.py'),
                            '--edition', str(edition), str(directory)], stdout=file, check=True)
    compiler = str(args.candidate.resolve())
    sdk_headers = {}
    header_checks = {}
    sdk_inputs = []
    results = list(probe_target(output, profiles[native], compiler, [], [args.cc], [], sdk_headers, header_checks,
                                reference=[args.cc]))
    wasm_reference = which('wasm-ref-clang++')
    if args.wasi_sysroot:
        wasi = profiles['wasi-hosted']
        if args.wasi_resource_dir is None:
            raise ValueError('--wasi-resource-dir is required for a WASI replay')
        sysroot = '--sysroot=' + str(args.wasi_sysroot)
        setup = [sysroot, '-resource-dir=' + str(args.wasi_resource_dir)]
        link = [compiler, '--target=' + wasi['target'], *setup]
        library_dir = args.wasi_sysroot.resolve() / 'lib/wasm32-wasip1'
        wasi_libraries = {name: archive for name in (WASI_SIGNAL, WASI_LONG_DOUBLE_STDIO)
                          if (archive := library_dir / f'lib{name}.a').is_file()}
        sdk_inputs.extend(wasi_libraries.values())
        reference = [wasm_reference, '--target=' + wasi['target'], *setup] if wasm_reference else ()
        results.extend(probe_target(output, wasi, compiler, setup, link, [args.wasmtime, 'run', '--dir=.'],
                                    sdk_headers, header_checks, wasi_libraries=wasi_libraries, reference=reference))
    if args.bare_wasm:
        bare = profiles['wasm-freestanding']
        bare_sdk = ()
        if args.wasi_resource_dir:
            resource_dir = args.wasi_resource_dir.resolve()
            include_dir = resource_dir / 'include'
            builtins = resource_dir / 'lib/wasm32-unknown-wasip1/libclang_rt.builtins.a'
            bare_sdk = (include_dir, builtins)
            sdk_inputs.extend([include_dir / 'float.h', include_dir / '__float_float.h', include_dir / 'limits.h', builtins])
        link = [compiler, '--target=' + bare['target'], '-nostdlib', '--export', 'main']
        runner = [args.wasmtime, 'run', '--invoke', 'main']
        reference = [wasm_reference, '--target=' + bare['target'], '-ffreestanding', '-nostdinc'] if wasm_reference else ()
        results.extend(probe_target(output, bare, compiler, ['-ffreestanding', '-nostdinc'], link, runner,
                                    sdk_headers, header_checks, bare_sdk, reference=reference))
    revision = subprocess.check_output(['git', '-C', str(ROOT), 'rev-parse', 'HEAD'], text=True).strip()
    inputs = sorted([*(path for path in work.rglob('*') if path.is_file()),
                     ERROR_SOURCE, INCLUDE_SOURCE, STRING_SOURCE, INCLUDE_QUERY, THREAD_PREDEFINE,
                     *LEGACY_VERSION_PROBES.values(),
                     *(PA38_GENERAL / source for _, source, _ in C23_SOURCE_CASES),
                     *(source for source, _ in C23_PROGRAMS.values()), *C23_EMBED_FIXTURES.rglob('*.bin'),
                     INTEGER_LIMITS, FLOAT_LIMITS, DEFAULT_ROUNDING, ROUNDING_QUERY,
                     FENV_BINARY, FENV_CONVERT, FENV_COMPARE, FENV_QUAD, FENV_LIBM, FP_CONTRACT,
                     COMPLEX_RANGE, COMPLEX_FENV, FENV_ZERO_DIVISION, HOSTED_MATH, FLEXIBLE_ARRAY,
                     *(PA38_GENERAL / source for source, _ in RECORD_CONSTRAINTS.values()),
                     REGISTER_PROGRAM, *(register_constraint_source(suffix)
                                         for suffix, _, _ in REGISTER_CONSTRAINTS.values()),
                     *sdk_inputs, *C11_LIBRARY_SOURCES.values(), SETJMP_SOURCE, SIGNAL_SOURCE,
                     Path(headers.__file__).resolve(),
                     INCLUDE_QUERY.parent / 'c-header  spaces.h',
                     INCLUDE_SOURCE.parent / 'c-include-physical.h', INCLUDE_SOURCE.parent / 'c-include-local.h'])
    inputs.extend([C23_SDK_HEADERS, *(source for _, source in C23_LIBRARY_SOURCES.values())])
    inputs.extend(source for _, source, _ in LIBRARY_PROGRAMS.values())
    inputs.extend(source for source, _ in C23_VERSIONED_PROGRAMS.values())
    inputs.extend(PA38_GENERAL / (stem + '.t') for stem, *_ in (
        *vla.PROGRAMS.values(), *vla.GNU_PROGRAMS.values(), *vla.REJECTIONS.values()))
    inputs.extend(PA38_GENERAL / (stem + suffix) for stem in vla.PAIR_SOURCES.values() for suffix in ('.t', '.t.1'))
    inputs.extend(PA38_GENERAL / header for header in vla.HEADERS)
    inputs.append(Path(vla.__file__).resolve())
    receipt_path = output / 'receipts.json'
    write_json(receipt_path, dict(schema=1, revision=revision, compiler_sha256=sha256(Path(compiler)),
                                  inputs={str(source): sha256(source) for source in inputs}, sdk_headers=sdk_headers,
                                  header_checks=header_checks, results=results))
    report_status = report([receipt_path], output / 'matrix.json', profiles, rules) if args.report else 0
    return report_status or int(any(row['status'] == 'failed' for row in results))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--inventory', type=Path, default=INVENTORY)
    commands = parser.add_subparsers(required=True)
    run = commands.add_parser('probe')
    run.add_argument('--output', type=Path, required=True)
    run.add_argument('--candidate', type=Path, default=ROOT / 'dev/cppgm')
    run.add_argument('--cc', default='cc')
    run.add_argument('--wasi-sysroot', type=Path)
    run.add_argument('--wasi-resource-dir', type=Path)
    run.add_argument('--wasmtime', default='wasmtime')
    run.add_argument('--bare-wasm', action='store_true')
    run.add_argument('--report', action='store_true', help='print and save the clause matrix after probing')
    run.set_defaults(command=probes)
    show = commands.add_parser('report')
    show.add_argument('receipts', nargs='*', type=Path)
    show.add_argument('--output', type=Path)
    show.set_defaults(command=lambda args, profiles, rules: report(args.receipts, args.output, profiles, rules))
    args = parser.parse_args()
    try:
        return args.command(args, *inventory(args.inventory))
    except (OSError, ValueError, KeyError, subprocess.CalledProcessError) as error:
        parser.exit(2, f'{error}\n')


if __name__ == '__main__':
    sys.exit(main())
