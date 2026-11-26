#define STEP 3
#define SAVE_LR(unused) stp x29, x30, [sp, #-16]!

.macro increment, reg, uaccess
  add \reg, \reg, #\uaccess
.endm

.text
padding_start:
.word 0
padding_end:
.space padding_end - padding_start
.globl from_assembly
.type from_assembly, %function
from_assembly:
  argument .req w0
  hint #34
  SAVE_LR(0)
  cbz argument, 1f
  increment argument, STEP
1:
  .unreq argument
  adrp x1, value
  ldr w1, [x1, :lo12:value]
  and w1, w1, #7
  lsl w1, w1, #1
  eor w1, w1, #0xf
  orr w1, w1, #2
  movz w2, #1, lsl #16
  movk w2, #0x1234
  lsr w2, w2, #16
  add w1, w1, w2, uxtb
  sub w1, w1, #1
  movz x2, :abs_g1_s:value
  movk x2, :abs_g0_nc:value
  ldr w2, [x2]
  add w1, w1, w2
  sub w1, w1, #11
  add w0, w0, w1
  bl from_cpp
  add x2, sp, xzr
  ldp x29, x30, [x2], #16
  mov sp, x2
  ret
.size from_assembly, .-from_assembly

.section .rodata
.balign 4
.word 255
value:
.word 11
.word 0xfefefefe
