# Equality tests of one value that all lead to one target (a set: as many
# runs as tests) become a switch when the set has four runs or more within
# 64 values: the selectors test it with a bounds check and one bit test.
# `@set` (1, 8, 13, 22, no two a mask apart) switches. `@three` (three
# values) and `@wide` (four values over more than 64) keep their tests.
function @set(%c : u8) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq u8 %c, 1
    branch %c0, ^yes, ^t1
  block ^t1:
    %c1 = cmp eq u8 %c, 8
    branch %c1, ^yes, ^t2
  block ^t2:
    %c2 = cmp eq u8 %c, 13
    branch %c2, ^yes, ^t3
  block ^t3:
    %c3 = cmp eq u8 %c, 22
    branch %c3, ^yes, ^no
  block ^yes:
    return i32 1
  block ^no:
    return i32 0
}

function @three(%c : u8) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq u8 %c, 1
    branch %c0, ^yes, ^t1
  block ^t1:
    %c1 = cmp eq u8 %c, 8
    branch %c1, ^yes, ^t2
  block ^t2:
    %c2 = cmp eq u8 %c, 22
    branch %c2, ^yes, ^no
  block ^yes:
    return i32 1
  block ^no:
    return i32 0
}

function @wide(%c : u8) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq u8 %c, 1
    branch %c0, ^yes, ^t1
  block ^t1:
    %c1 = cmp eq u8 %c, 8
    branch %c1, ^yes, ^t2
  block ^t2:
    %c2 = cmp eq u8 %c, 13
    branch %c2, ^yes, ^t3
  block ^t3:
    %c3 = cmp eq u8 %c, 70
    branch %c3, ^yes, ^no
  block ^yes:
    return i32 1
  block ^no:
    return i32 0
}

function @main() -> i32 {
  block ^entry:
    %s0 = call i32 @set(1)
    %s1 = call i32 @set(22)
    %s2 = call i32 @set(13)
    %s3 = call i32 @set(9)
    %s4 = call i32 @set(255)
    %sa = binary add i32 %s0, %s1
    %sb = binary add i32 %s2, %s3
    %sc = binary add i32 %sa, %sb
    %sd = binary add i32 %sc, %s4
    %set_ok = cmp eq i32 %sd, 3
    %t0 = call i32 @three(8)
    %t1 = call i32 @three(13)
    %w0 = call i32 @wide(70)
    %w1 = call i32 @wide(22)
    %ta = binary add i32 %t0, %t1
    %wa = binary add i32 %w0, %w1
    %rest = binary add i32 %ta, %wa
    %rest_ok = cmp eq i32 %rest, 2
    %all = binary and i64 %set_ok, %rest_ok
    %status = select i32 %all, 0, 1
    return i32 %status
}
