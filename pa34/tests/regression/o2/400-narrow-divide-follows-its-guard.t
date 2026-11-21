# A 64-bit divide by a variable at -O2 first tests whether both operands fit
# in 32 bits. The narrow divide is the guard's likely path, so it follows the
# test, and the full divide lies apart, reached by the rare branch: the loop
# in `@digits` takes one branch per pass, back to its header.
function @digits(%n : i64, %base : i64) -> i64 [binding=internal, no_inline=yes] {
  block ^entry:
    jump ^loop

  block ^loop:
    %v = phi i64 [^entry: %n, ^loop: %q]
    %c = phi i64 [^entry: 0, ^loop: %c1]
    %q = binary div i64 %v, %base
    %c1 = binary add i64 %c, 1
    %more = cmp ne i64 %q, 0
    branch %more, ^loop, ^done

  block ^done:
    return i64 %c1
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call i64 @digits(123456, 10)
    %b = call i64 @digits(-9876543210123, 7)
    %scaled = binary mul i64 %a, 100
    %sum = binary add i64 %scaled, %b
    %t = convert trunc i32 i64 %sum
    return i32 %t
}
