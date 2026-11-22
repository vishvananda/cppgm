# C conformance notes

These notes record WG14 rules exercised by the course regressions and the
initial upstream campaign. Clause numbers use the named edition or draft.

## C99 bit-field width

C99 6.7.2.1 constrains a bit-field's width by the declared type. Its
corrigendum and DR 335 clarify the representation and value semantics
of `_Bool` bit-fields. cppgm's C target profiles use one value bit for
`_Bool`. They diagnose a wider field declaration. This check belongs to
C declaration semantics before target record layout. The C99 regression
and the upstream width diagnostic exercise the constraint. The upstream
runtime case exercises valid one-bit fields.

[C99 with corrigenda, N1256](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf) ·
[WG14 DR 335](https://www.open-std.org/jtc1/sc22/wg14/www/docs/dr_335.htm) ·
[PA38 width regression](../pa38/tests/general/300-bool-bitfield-width-bad.t)

## VLA scope and C objects

C17 6.2.4 specifies the lifetime of a variable-length array. C17 6.8.6.1
constrains jumps into a variably modified identifier's scope. Scope exits
restore dynamic stack storage. An ordinary C compilation defaults to the
C unwind policy and emits a VLA object that can link through a C driver.
The hosted c-testsuite case checks this by linking the cppgm-produced object
with GCC's C driver. PA38 checks a VLA that stays live across a call.

[C11 draft, N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf) ·
[WG14 tracked editions](https://www.open-std.org/jtc1/sc22/wg14/www/projects.html) ·
[PA38 VLA call regression](../pa38/tests/general/500-vla-call-c-unwind.t)
