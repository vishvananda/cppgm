# A latch takes no copy of a guard, a test whose branch is hinted to one
# side (here `^check`'s bounds test, hinted unlikely, to a trap): the copy
# would close the loop with a taken branch as the jump does, and `^step`,
# which decides the loop's exit, would then leave it by a taken branch.
# `^step` closes the loop with one branch back to `^check`, and when the loop
# ends it runs into `^done`.
global @values : obj<64x8> [binding=internal] = {
  i64 3
  i64 1
  i64 4
  i64 1
  i64 5
  i64 9
  i64 2
  i64 6
}
global @size : i64 [binding=internal] = 8
global @last : i64 [binding=internal] = 0

declare function @abort() -> void [unwind=no, return=noreturn, linkage=c, binding=strong]

function @record(%v : i64) -> i64 [binding=internal, no_inline=yes] {
  block ^entry:
    %r = binary mul i64 %v, 3
    return i64 %r
}

function @total(%n : i64) -> i64 [binding=internal, no_inline=yes] {
  block ^entry:
    %some = cmp gt i64 %n, 0
    branch %some, ^check, ^empty

  block ^empty:
    return i64 0

  block ^check:
    %i = phi i64 [^entry: 0, ^step: %i1]
    %s = phi i64 [^entry: 0, ^step: %s1]
    %limit = load i64 @size
    %outside = cmp uge i64 %i, %limit
    branch unlikely %outside, ^crash, ^body

  block ^crash:
    call void @abort()
    unreachable

  block ^body:
    %offset = binary mul i64 %i, 8
    %slot = index inbounds i8 [projection=array_element] @values, %offset
    %v = load typed i64 %slot
    %r = call i64 @record(%v)
    %s1 = binary add i64 %s, %r
    jump ^step

  block ^step:
    %i1 = binary add i64 %i, 1
    %more = cmp lt i64 %i1, %n
    branch %more, ^check, ^done

  block ^done:
    store i64 %s1, @last
    return i64 %s1
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call i64 @total(8)
    %b = call i64 @total(3)
    %c = load i64 @last
    %ab0 = binary add i64 %a, %b
    %ab = binary add i64 %ab0, %c
    %t = convert trunc i32 i64 %ab
    return i32 %t
}
