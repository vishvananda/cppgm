# A compare with zero reads an `and` through a truncation: only the bits of
# the compare's own width count. Each `and` here has bits only above that
# width, so every compare is equal to zero; testing the whole `and` (its
# mask, its bit or its other register) would see them.
function @branch_compare(%x : i64) -> i32 [binding=strong, no_inline=yes] {
  block ^entry:
    %m = binary and i64 %x, 8388606
    %w = convert trunc i32 i64 %m
    %h = convert trunc u16 i32 %w
    %z = cmp eq u16 %h, 0
    branch %z, ^zero, ^nonzero
  block ^zero:
    return i32 1
  block ^nonzero:
    return i32 0
}
function @value_compare(%x : i64) -> i32 [binding=strong, no_inline=yes] {
  block ^entry:
    %m = binary and i64 %x, 8388606
    %h = convert trunc u16 i64 %m
    %z = cmp eq u16 %h, 0
    %r = convert zext i32 i1 %z
    return i32 %r
}
function @bit_compare(%x : i64, %k : i64) -> i32 [binding=strong, no_inline=yes] {
  block ^entry:
    %b = binary shl i64 1, %k
    %m = binary and i64 %x, %b
    %h = convert trunc u16 i64 %m
    %z = cmp eq u16 %h, 0
    branch %z, ^zero, ^nonzero
  block ^zero:
    return i32 1
  block ^nonzero:
    return i32 0
}
function @register_compare(%x : i64, %y : i64) -> i32 [binding=strong, no_inline=yes] {
  block ^entry:
    %m = binary and i64 %x, %y
    %h = convert trunc u8 i64 %m
    %z = cmp ne u8 %h, 0
    branch %z, ^nonzero, ^zero
  block ^zero:
    return i32 1
  block ^nonzero:
    return i32 0
}
function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call i32 @branch_compare(65536)
    %b = call i32 @value_compare(65536)
    %c = call i32 @bit_compare(65536, 16)
    %d = call i32 @register_compare(256, 256)
    %ab = binary and i32 %a, %b
    %cd = binary and i32 %c, %d
    %all = binary and i32 %ab, %cd
    %bad = binary xor i32 %all, 1
    return i32 %bad
}
