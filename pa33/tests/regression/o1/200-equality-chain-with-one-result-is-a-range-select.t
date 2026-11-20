# Equality tests of one value that each set the same result (`if (n == 0)
# r = 3; if (n == 1) r = 3; ...`, its slot forwarded) reach one join on
# edges that carry 3 or the starting value, some through blocks that only
# pass a phi value on. The edges that reach the join with the same value are
# one target of the switch the tests form: here one run of consecutive
# values, then one range test and a select. `@two_results` keeps its tests:
# its cases give different values, as many runs as tests.
function @three(%n : i32) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq i32 %n, 0
    branch %c0, ^pass0, ^test1
  block ^test1:
    %c1 = cmp eq i32 %n, 1
    branch %c1, ^pass1, ^test2
  block ^test2:
    %c2 = cmp eq i32 %n, 2
    branch %c2, ^join, ^pass0
  block ^pass0:
    %r0 = phi i32 [^test2: 0, ^entry: 3]
    jump ^pass1
  block ^pass1:
    %r1 = phi i32 [^pass0: %r0, ^test1: 3]
    jump ^join
  block ^join:
    %r = phi i32 [^pass1: %r1, ^test2: 3]
    return i32 %r
}

function @offset(%n : u8) -> i64 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq u8 %n, 5
    branch %c0, ^pass0, ^test1
  block ^test1:
    %c1 = cmp eq u8 %n, 6
    branch %c1, ^pass1, ^test2
  block ^test2:
    %c2 = cmp eq u8 %n, 7
    branch %c2, ^pass2, ^test3
  block ^test3:
    %c3 = cmp eq u8 %n, 8
    branch %c3, ^join, ^pass0
  block ^pass0:
    %r0 = phi i64 [^test3: 2, ^entry: 9]
    jump ^pass1
  block ^pass1:
    %r1 = phi i64 [^pass0: %r0, ^test1: 9]
    jump ^pass2
  block ^pass2:
    %r2 = phi i64 [^pass1: %r1, ^test2: 9]
    jump ^join
  block ^join:
    %r = phi i64 [^pass2: %r2, ^test3: 9]
    return i64 %r
}

function @two_results(%n : i32) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq i32 %n, 0
    branch %c0, ^pass0, ^test1
  block ^test1:
    %c1 = cmp eq i32 %n, 1
    branch %c1, ^join, ^pass0
  block ^pass0:
    %r0 = phi i32 [^test1: 0, ^entry: 3]
    jump ^join
  block ^join:
    %r = phi i32 [^pass0: %r0, ^test1: 4]
    return i32 %r
}

function @main() -> i32 {
  block ^entry:
    %a = call i32 @three(0)
    %b = call i32 @three(2)
    %c = call i32 @three(3)
    %d = call i32 @three(-1)
    %ab = binary mul i32 %a, 10
    %abb = binary add i32 %ab, %b
    %cc = binary mul i32 %abb, 10
    %ccc = binary add i32 %cc, %c
    %dd = binary mul i32 %ccc, 10
    %ddd = binary add i32 %dd, %d
    %three_ok = cmp eq i32 %ddd, 3300
    %e = call i64 @offset(4)
    %f = call i64 @offset(5)
    %g = call i64 @offset(8)
    %h = call i64 @offset(9)
    %ef = binary mul i64 %e, 10
    %eff = binary add i64 %ef, %f
    %gg = binary mul i64 %eff, 10
    %ggg = binary add i64 %gg, %g
    %hh = binary mul i64 %ggg, 10
    %hhh = binary add i64 %hh, %h
    %offset_ok = cmp eq i64 %hhh, 2992
    %i = call i32 @two_results(0)
    %j = call i32 @two_results(1)
    %k = call i32 @two_results(2)
    %ij = binary mul i32 %i, 10
    %ijj = binary add i32 %ij, %j
    %kk = binary mul i32 %ijj, 10
    %kkk = binary add i32 %kk, %k
    %two_ok = cmp eq i32 %kkk, 340
    %both = binary and i64 %three_ok, %offset_ok
    %all = binary and i64 %both, %two_ok
    %status = select i32 %all, 0, 1
    return i32 %status
}
