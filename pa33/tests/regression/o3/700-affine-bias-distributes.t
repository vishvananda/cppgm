# At -O3, a multiply by a literal of a sum with a literal, read only by an
# addition of a literal, distributes: (x + 3) * 12 + 5 is x * 12 + 41. In a
# loop the product of the counter then steps by the multiplier.

function @scaled_bias(%x : i64) -> i64 [no_inline=yes] {
  block ^entry:
    %a = binary add i64 %x, 3
    %b = binary mul i64 %a, 12
    %c = binary add i64 %b, 5
    return i64 %c
}

function @scaled_rows(%p : ptr, %n : i32, %w : i32) -> i32 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi i32 [^entry: 0, ^body: %t]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %r = binary add i32 %i, 2
    %k = binary mul i32 %r, 24
    %o = binary add i32 %k, 7
    %e = convert sext i64 i32 %o
    %q = index i8 %p, %e
    %v = load i8 %q
    %x = convert zext i32 i8 %v
    %t = binary add i32 %s, %x
    %next = binary add nowrap i32 %i, 1
    jump ^head
  block ^done:
    return i32 %s
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call i64 @scaled_bias(4)
    %low = convert trunc i32 i64 %a
    return i32 %low
}
