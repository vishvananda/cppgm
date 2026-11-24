"""PA38 cases shared by the C variable-length array qualification profiles."""

MODERN = (99, 11, 17, 23)
C11_AND_LATER = (11, 17, 23)
PRE_C23 = (99, 11, 17)

# Each source is compiled verbatim in the editions it exercises. In
# particular, the cast fixture uses 'typeof' as an identifier through C17.
PROGRAMS = {
    'vla.capability': ('300-c-vla-capability', MODERN),
    'vla.prototype-star': ('300-array-parameter-star', MODERN),
    'vla.parameters': ('300-variable-array-parameter', MODERN),
    'vla.parameter-qualifiers': ('300-array-parameters', C11_AND_LATER),
    'vla.declarations': ('300-variable-arrays', C11_AND_LATER),
    'vla.exit-edges': ('300-variable-array-exits', MODERN),
    'vla.strides': ('300-variable-array-multidimensional', MODERN),
    'vla.pointers': ('300-variable-array-pointer', MODERN),
    'vla.typedef-bounds': ('300-variable-array-typedef', MODERN),
    'vla.sizeof-type': ('300-variable-array-typeid', C11_AND_LATER),
    'vla.sizeof-operand': ('300-variable-array-sizeof-operand', MODERN),
    'vla.cast': ('300-variable-array-cast', PRE_C23),
    'vla.function-pointer': ('300-variable-array-function-pointer', MODERN),
    'vla.prototype-type-names': ('300-array-prototype-type-names', C11_AND_LATER),
    'vla.atomic-parameter': ('300-array-parameter-atomic', C11_AND_LATER),
    'vla.atomic-types': ('300-variable-array-atomic-type', C11_AND_LATER),
    'vla.type-compatibility': ('500-types-compatible-vla', C11_AND_LATER),
    'vla.legacy-definition': ('300-array-declarator-constant-and-vla', PRE_C23),
    'vla.restrict-array-parameter': ('300-restrict-kr-array', PRE_C23),
    'vla.c23-qualified-pointer': ('300-c23-qualified-vla-pointer', (23,)),
    'vla.c23-restrict-array': ('300-restrict-typedef-array-gnu', (23,)),
}

GNU_PROGRAMS = {
    'vla.gnu-typeof': ('300-variable-array-typeof', (17, 23)),
    'vla.gnu-restrict-array': ('300-restrict-typedef-array-gnu', (17,)),
}

PAIR_SOURCES = {
    'vla.external-call': '500-vla-call-c-unwind',
    'vla.parameter-abi': '300-vla-parameter-abi',
}
ABI_SOURCE = PAIR_SOURCES['vla.parameter-abi']
MIXED_CASES = ('vla.cppgm-caller', 'vla.cppgm-callee')

STAR_SCOPE = '[*] is allowed only in C function prototype scope'
AUTOMATIC = 'a variable-length array requires automatic storage'
JUMP = "bypasses a variable's initialization"
REJECTIONS = {
    'vla.before-c99': ('300-c90-variable-array-bad', (90, 95), 'variable-length arrays require C99'),
    'vla.incomplete-element': ('300-array-vla-element-incomplete-bad', MODERN, 'incomplete element type'),
    'vla.file-scope': ('300-variable-array-file-bad', MODERN, 'requires block or function prototype scope'),
    'vla.external-object': ('300-variable-array-extern-bad', MODERN, AUTOMATIC),
    'vla.linked-pointer': ('300-variable-array-extern-pointer-bad', MODERN, 'declared without linkage'),
    'vla.static-object': ('300-variable-array-static-bad', MODERN, AUTOMATIC),
    'vla.linked-function': ('300-variable-array-function-linkage-bad', MODERN, 'cannot have variably modified type'),
    'vla.noninteger-bound': ('300-variable-array-float-bad', MODERN, 'array bound must have integer type'),
    'vla.incompatible-strides': ('300-variable-array-parameter-conflict-bad', MODERN,
                                 'conflicting C function declarations'),
    'vla.star-definition': ('300-array-parameter-star-definition-reject', MODERN, STAR_SCOPE),
    'vla.star-static': ('300-array-parameter-star-static-reject', MODERN, 'without a static minimum bound'),
    'vla.star-type-name-file': ('300-array-star-type-name-file-bad', C11_AND_LATER, STAR_SCOPE),
    'vla.star-type-name-definition': ('300-array-star-type-name-definition-bad', C11_AND_LATER, STAR_SCOPE),
    'vla.star-type-name-body': ('300-array-star-type-name-body-bad', C11_AND_LATER, STAR_SCOPE),
    'vla.generic-association': ('300-array-star-generic-association-bad', C11_AND_LATER, 'variably modified type name'),
    'vla.goto-object': ('300-variable-array-goto-bad', MODERN, JUMP),
    'vla.goto-typedef': ('300-variable-array-goto-typedef-bad', MODERN, JUMP),
    'vla.goto-function-pointer': ('300-variable-array-function-pointer-goto-bad', MODERN, JUMP),
    'vla.case-object': ('300-variable-array-case-bad', MODERN, JUMP),
    'vla.case-pointer': ('300-variable-array-case-pointer-bad', MODERN, JUMP),
    'vla.nonempty-initializer': ('300-variable-array-init-bad', MODERN, 'variable-length array initializer must be empty'),
    'vla.empty-before-c23': ('300-c17-vla-empty-bad', PRE_C23, 'requires C23'),
    'vla.array-compound-literal': ('300-variable-array-compound-bad', MODERN, 'cannot have variable length array type'),
    'vla.repeated-typedef': ('300-c11-repeated-vla-typedef-bad', C11_AND_LATER, 'cannot be redefined'),
    'vla.weaker-alignment': ('300-c11-alignas-vla-weaker-bad', C11_AND_LATER, 'alignment-specifier weaker'),
    'vla.atomic-array': ('300-variable-array-atomic-direct-bad', C11_AND_LATER, '_Atomic of an array'),
    'vla.restrict-array-before-c23': ('300-restrict-typedef-array-c17-bad', PRE_C23, 'is a C23 extension'),
}
