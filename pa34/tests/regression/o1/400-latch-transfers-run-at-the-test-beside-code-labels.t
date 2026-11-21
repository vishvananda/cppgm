# A function with code labels takes the latch rule too: the loop block that
# ends in a test and repeats the loop through an edge block of register
# transfers (%i takes %half) runs the transfers at the test, so it closes
# the loop with its own conditional branch and the loop executes no
# unconditional jump. The addressed blocks ^even and ^odd keep their
# places.
declare global @halvings.even : i8 [binding=internal]
declare global @halvings.odd : i8 [binding=internal]

global @parity [binding=internal] = {
  ptr addr @halvings.even
  ptr addr @halvings.odd
}

function @halvings(%n : i64) -> i64 [binding=internal, no_inline=yes] {
  code_label @halvings.even = ^even
  code_label @halvings.odd = ^odd
  block ^entry:
    jump ^loop

  block ^loop:
    %i = phi i64 [^entry: %n, ^loop: %half]
    %steps = phi i64 [^entry: 0, ^loop: %more]
    %half = binary ushr i64 %i, 1
    %more = binary add i64 %steps, 1
    %go = cmp ugt i64 %i, 1
    branch %go, ^loop, ^done

  block ^done:
    %bit = binary and i64 %more, 1
    %table = addr @parity
    %entry = index ptr %table, %bit
    %target = load ptr %entry
    indirect_jump %target, ^even, ^odd

  block ^even:
    return i64 %more

  block ^odd:
    %odd = binary add i64 %more, 100
    return i64 %odd
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call i64 @halvings(40)
    %b = call i64 @halvings(1)
    %scaled = binary mul i64 %a, 10
    %sum = binary add i64 %scaled, %b
    %t = convert trunc i32 i64 %sum
    return i32 %t
}
