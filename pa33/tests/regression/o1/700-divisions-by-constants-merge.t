# Two truncating divisions by positive constants are one by their product
# when it is a value of the type: `@signed_chain` divides once by 120,
# `@unsigned_chain` by 42 and `@long_chain` by 10^9. A quotient below the
# sign bit, of an unsigned right shift or an unsigned division by at least
# 2, divided again is one unsigned division: `@shifted` by 40 and
# `@unsigned_quotient` by 12. A negative divisor (`@negative`), a product
# past the type (`@past`) and an unsigned division of a signed quotient
# (`@signed_quotient`) keep both divisions.
function @signed_chain(%x : i32) -> i32 {
  block ^entry:
    %a = binary div i32 %x, 2
    %b = binary div i32 %a, 3
    %c = binary div i32 %b, 4
    %d = binary div i32 %c, 5
    return i32 %d
}
function @unsigned_chain(%x : u32) -> u32 {
  block ^entry:
    %a = binary udiv u32 %x, 6
    %b = binary udiv u32 %a, 7
    return u32 %b
}
function @long_chain(%x : i64) -> i64 {
  block ^entry:
    %a = binary div i64 %x, 1000
    %b = binary div i64 %a, 1000000
    return i64 %b
}
function @shifted(%x : i32) -> i32 {
  block ^entry:
    %a = binary ushr i32 %x, 3
    %b = binary div i32 %a, 5
    return i32 %b
}
function @unsigned_quotient(%x : i32) -> i32 {
  block ^entry:
    %a = binary udiv i32 %x, 3
    %b = binary div i32 %a, 4
    return i32 %b
}
function @negative(%x : i32) -> i32 {
  block ^entry:
    %a = binary div i32 %x, -2
    %b = binary div i32 %a, 3
    return i32 %b
}
function @past(%x : i32) -> i32 {
  block ^entry:
    %a = binary div i32 %x, 65536
    %b = binary div i32 %a, 65536
    return i32 %b
}
function @signed_quotient(%x : i32) -> i32 {
  block ^entry:
    %a = binary div i32 %x, 3
    %b = binary udiv i32 %a, 4
    return i32 %b
}
