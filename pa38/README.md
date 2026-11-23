## CPPGM Programming Assignment 38 (`cppgm --emit-lowir -x c`)

### Overview

This optional assignment adds C input to the existing compiler. It uses the
same LowIR boundary as PA10 through PA23: a `.t` source file is parsed and
analyzed once, then lowered to the PA8 LowIR model. Both output backends use
those typed facts. A C input must not be translated into C++ or passed to an
external C compiler.

PA38 is experimental and is excluded from the normal C++ test report. It does
not change the required C++ assignments or their language rules.

### Prerequisites

Complete the source frontend, typed LowIR lowering and hosted-header work
through PA30. PA37 is needed for the additional Wasm test target.

### Driver and output

The assignment's test mode is:

```sh
cppgm --emit-lowir -O0 -x c -std=c17 -o output.lowir input.t
```

`-std=gnu17` selects the GNU extension dialect. It also accepts discarding
immediate object-pointer qualifiers and conditional character/string escapes
such as `\%` (whose value is `%`), as hosted GNU C libraries require. This does
not make differently qualified types compatible or allow unrelated pointer
conversions, nested qualifier removal, or removal of atomic qualification.
Strict `-std=c17` retains its qualifier and escape diagnostics. The C input
profile also accepts `-std=c99`, `-std=gnu99`, `-std=c11`, and `-std=gnu11`,
with the selected edition's value of `__STDC_VERSION__`. The input language and target
are separate choices. `-x c++` continues to select C++; a language and standard
that disagree must be diagnosed. The existing `.c` handling is unchanged unless
C is selected explicitly.

With `-pedantic`, diagnose C11 syntax such as `_Generic` and `_Atomic` in
C99 modes. With `-pedantic-errors`, reject those uses. System headers suppress
these diagnostics unless `-Wsystem-headers` is set. A message-free
`_Static_assert` is a C23 extension in the C modes above.
`__VA_OPT__` also receives a C23 extension diagnostic in the earlier
editions when pedantic diagnostics are enabled. Treat
`_Alignof(expression)` as a GNU extension. The GNU spelling
`__alignof__` accepts the expression. A standard type-name operand must
be complete. For an expression that names an object or member, report its
declared alignment, including a packed member's reduced alignment. Reject
bit-field designators. Alignment queries leave their operands unevaluated.

In ISO C99, lex `u`, `U`, and `u8` before a quote as identifiers.
Use the same edition for macro pasting. C11 and GNU99 accept Unicode
literal prefixes.

The output is ordinary [PA8 LowIR](../pa8/lowir.md). Preserve target sizes,
alignment, function signatures, object names, qualifiers and conversions. C
functions and objects use their C ABI names. A C++ `extern "C"` declaration
continues to have C++ syntax and semantics; language linkage does not select C.

### Initial C profile

The first fixture set covers these parts of the C17 input profile:

- C keywords, preprocessing tokens, feature macros and C++ keywords used as
  ordinary C identifiers; `_Bool`, `_Static_assert`, `_Alignas`, `_Alignof`
  and `_Noreturn` use their C meanings.
- Accept an alignment specifier anywhere in the declaration specifier list.
  Use the strictest nonzero request for the object or member, including an
  anonymous member. Preserve the declared type's own alignment. Diagnose
  alignment specifiers on typedefs, bit-fields, functions, parameters, and
  register objects, and requests weaker than an object's type. A type
  operand uses the type's alignment without evaluating VLA bounds.
- In pedantic modes, check an explicit definition against every declaration
  of the same linked object in the translation unit. If a declaration's
  strongest standard alignment request exceeds the type's alignment, the
  definition must supply the same request. The definition may supply that
  alignment through GNU `aligned` when it has no nonzero standard request.
  Treat zero and the type's natural alignment as neutral requests. Use the
  strongest applicable alignment for storage supplied by a tentative
  definition alone.
- Procedural scalar and pointer expressions, control flow, prototype-based
  function declarations, calls, callbacks and variadic argument promotions;
  declarations without prototypes use default argument promotions and compatible
  later prototypes retain their parameter checks. C17 identifier-list (K&R)
  definitions retain each parameter's declared object type while their public
  signature uses default argument promotions; declarations and earlier/later
  prototypes must remain compatible.
  A tag introduced in a prototype's parameter list has scope through the
  end of the declarator. A tag introduced in a function definition's own
  parameter list remains visible in its body.
- Implicit conversions between object pointers and qualified `void*`, without
  discarding pointee qualifiers; integral initialization of enumeration objects.
- GNU C pointer extensions used by hosted libraries: implicit conversions
  between function pointers and `void*`, and between pointers to corresponding
  signed/unsigned integer types (including the three character types).
  Pointer-sign conversions preserve the address and accept qualification
  differences as LLVM does. They do not make the pointed-to types compatible
  for `_Generic` or `__builtin_types_compatible_p`.
- `_Generic` selections preserve the selected expression's type and value
  category. The control and unselected associations are not evaluated.
  Diagnose compatible types in the same association list and a controlling
  type compatible with more than one association.
- The GNU conditional expression with one void arm has type `void`.
  Evaluate the selected arm for effects and diagnose the extension under
  the pedantic policy.
- C character and string literal types, including the compatible integer
  types of wide, UTF-16 and UTF-32 literals. An identifier immediately after a
  quoted literal is a separate preprocessing token and can expand as a macro.
  Comparisons and logical operators
  produce `int`. Assignment, comma, conditional and prefix increment results
  do not become C++ lvalues.
- Check the operand forms of integer constant expressions for assertions,
  case labels, enumeration values, bit-field widths, alignment, and array
  designators. An evaluated comma operator is invalid in these expressions.
  A floating literal may be the immediate operand of a cast to an integer.
  Check operand forms in conditional branches that evaluation skips. A
  foldable array bound can still declare a variable-length array. Use C's
  integer constant expressions of value zero for null pointer conversions.
- Under the pedantic policy through C17, a declaration in a `for`
  initializer may introduce identifiers only for automatic or register
  objects. Reuse of a visible tag is allowed. A static assertion also fits
  because it introduces no identifier. The restriction was removed in C23.
- When the two pointer operands of `?:` point to compatible types, form
  the composite pointed-to type and combine their qualifiers. A bound or
  a prototype from either operand can determine the result type. Evaluate
  the selected operand and preserve the existing null-pointer rules.
  Apply the usual arithmetic conversions to two arithmetic operands,
  including equal narrow integer and bit-field types.
- Separate tag and ordinary identifier namespaces, including typedefs that
  reuse a tag spelling for an unrelated type; struct and enum tags, typedefs,
  aggregate initialization, C member and array
  designators, member access,
  function parameters and results, compatible record copy and assignment, C object
  linkage and tentative definitions. A C inline definition with
  external linkage supplies the external symbol if a file-scope declaration
  uses `extern` or leaves out `inline`. GNU `gnu_inline` and `always_inline`
  attributes can also occur after the return type's pointer operator.
- In an inline-only definition with external linkage, diagnose references to
  internal-linkage identifiers and definitions of modifiable static or
  thread-local objects. Use all file-scope declarations of the function to
  settle whether its definition supplies the external symbol.
  Under `-pedantic-errors`, diagnose an external inline declaration that
  still has no definition at the end of its translation unit.
- Give a redeclared C object or function the composite of its compatible
  types. Combine bounds and prototypes through pointers, array elements,
  function parameters, and return types. A block declaration can refine
  its local view of an object or function and constrain later declarations
  of the same entity. Keep the refined bound or prototype visible only
  where the declaration applies. A block function declaration inherits the
  linkage of a visible prior declaration with linkage and forms a composite
  type with that declaration. Otherwise it has external linkage and uses
  its written type.
  At the end of a translation unit, complete
  a still-incomplete tentative array with external linkage as a one-element
  array. Use a bound or a record definition supplied later in the file
  when available. Under `-pedantic-errors`, reject an incomplete tentative
  declaration with internal linkage at its declaration.
- Resolve each initializer designator from the aggregate of the closest
  brace pair. Continue with the next subobject after the designated one,
  including through nested arrays, records, and a union's selected member.
  A later designator replaces the value of the subobject it names. An
  initializer in braces supplies a new value for the whole subobject,
  including implicit zeros. Check overwritten expressions for valid names,
  types, and the constant-expression requirements for static storage.
  Infer the size of an incomplete array from its highest initialized index
  and keep implicit zero ranges compact.
- Check the initializer of an object with static or thread storage duration
  during analysis. Apply the same rules to scalar values, braced leaves,
  and file-scope compound literals. An address constant may name a static
  object or a function. An offset from that address uses an integer constant
  expression and the element size. Diagnose an evaluated call or comma
  operator, a read of an ordinary variable, and an address of an automatic
  object. Emit the checked initializer as data.
- A read or write of a volatile-qualified structure or union remains
  observable, including a discarded value, a return, an argument, or a copy.
  Use scalar volatile accesses for the qualified storage and ordinary accesses
  for any unqualified temporary. Keep the accesses through optimization.
- Bit-field widths fit the C declared type. A `_Bool` member has at most one
  value bit. Diagnose a wider declaration.
- C compound literals of scalar, pointer, record and array types, including
  array-bound deduction and designators. Each occurrence denotes an lvalue;
  block-scope objects survive the full expression and file-scope objects have
  static storage with constant initialization.
- Block-scope variable-length arrays with automatic or register storage can
  mix fixed and runtime dimensions. Evaluate each written runtime bound once
  at its declaration. A typedef captures its extent when execution reaches
  the typedef, and later declarations using that typedef reuse it. Use the
  captured sizes for `sizeof`, subscripting and pointer arithmetic. Release
  the storage on every scope exit and preserve alignment requests. Diagnose
  jumps and switch labels that enter the scope of a variably modified
  identifier past its declaration.
- An array parameter adjusts to a pointer. In a prototype, runtime bounds
  and `[*]` describe unspecified variable lengths. In a definition, evaluate
  the written runtime bounds on entry, including any bound in the adjusted
  outer bracket. Retain the inner strides. Require a bound with `static`.
- Evaluate the runtime bounds needed by a `sizeof` type name. A bound in a
  pointer type whose value cannot change the result may be elided.
  `_Alignof` uses the element alignment of a variable-length array.
- Evaluate a `sizeof` expression operand when it has variable-length array
  type. Preserve the effects of evaluated bounds in casts and compound
  literals even if the pointer result is discarded. A compound literal may
  have pointer-to-VLA type. Diagnose a compound literal of VLA type.
- Accept `typeof` in GNU C and the alternate spellings `__typeof` and
  `__typeof__` in all the C modes above. Preserve the operand type. Evaluate
  the operand only when its type is variably modified. For declarators
  sharing a specifier, repeat the evaluated expression operand for each
  declarator and capture written type-name bounds during the first
  declarator's evaluation.
- Hosted C header declarations and their builtin operations through the
  existing hosted environment, including PA30's GNU startup-function attributes.

This is an initial profile, not a claim of complete C17 conformance. Use
`(void)` for a prototype with no parameters; an empty `()` declares a function
without a prototype. Extend the profile and its tests together.
Do not silently apply a C++ rule where a supported C construct has a
different meaning.

Share preprocessing, declarator parsing, type storage, ABI classification,
optimization and backend machinery with the C++ path. Record the source
language explicitly. Retain semantic facts through lowering rather than
reclassifying rendered source or LowIR text.

### Tests and reference tools

The directory and test commands follow the other LowIR frontend assignments:

```sh
make
make test
make check TEST=tests/general/100-language-facts.t
make run INPUT=tests/general/100-language-facts.t
make ref-test
```

`tests/general/*.t` inputs produce LowIR and are compared with the checked-in
reference outputs. A `.c-standard` sidecar selects `c99`, `gnu99`, `c11`, `gnu11`,
`c17`, or `gnu17` for an
individual fixture; controls use the same convention. Rejected inputs have the usual failure-status reference.
An adjacent `.t.1` adds another translation unit, as in the earlier source
assignments. `tests/controls/*.t` state an expected program result and run the
generated LowIR through the supplied native backend. There is no second C
compiler or compiler-to-compiler comparison in this assignment's test lane.

`make test-wasm` runs the same source inputs through PA37's Wasm checker and
their `.wasm-expect` result sidecars. It requires the pinned Wasm tools and SDK.
From the repository root, `make test-pa38` selects this assignment explicitly;
`make test-c` and `make test-c-wasm` are convenience aliases.
