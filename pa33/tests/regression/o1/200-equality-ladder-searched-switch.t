# A chain of equality tests of one value whose tests each lead to their own
# target (a ladder: as many runs as tests) becomes a switch when it has at
# least four runs with two gaps between them: the selectors search such a
# switch by halves, so a missed value takes about log2 of the tests.
# `@ladder` (3, 1, 6, 2, 21) and `@joined` (9, 2, 40, 17, the arms' results
# joined by one phi) switch. `@consecutive` (four consecutive values) and
# `@three` (three tests) keep their tests: a switch of either is lowered as
# the same compares, and the source order is kept.
function @ladder(%op : u8) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq u8 %op, 3
    branch %c0, ^a, ^t1
  block ^t1:
    %c1 = cmp eq u8 %op, 1
    branch %c1, ^b, ^t2
  block ^t2:
    %c2 = cmp eq u8 %op, 6
    branch %c2, ^c, ^t3
  block ^t3:
    %c3 = cmp eq u8 %op, 2
    branch %c3, ^d, ^t4
  block ^t4:
    %c4 = cmp eq u8 %op, 21
    branch %c4, ^e, ^miss
  block ^a:
    return i32 10
  block ^b:
    return i32 20
  block ^c:
    return i32 30
  block ^d:
    return i32 40
  block ^e:
    return i32 50
  block ^miss:
    return i32 7
}

function @joined(%n : i32) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq i32 %n, 9
    branch %c0, ^join, ^t1
  block ^t1:
    %c1 = cmp eq i32 %n, 2
    branch %c1, ^join, ^t2
  block ^t2:
    %c2 = cmp eq i32 %n, 40
    branch %c2, ^join, ^t3
  block ^t3:
    %c3 = cmp eq i32 %n, 17
    branch %c3, ^join, ^miss
  block ^miss:
    %m = binary mul i32 %n, 3
    jump ^join
  block ^join:
    %r = phi i32 [^entry: 1, ^t1: 2, ^t2: 1, ^t3: 4, ^miss: %m]
    return i32 %r
}

function @consecutive(%op : u8) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq u8 %op, 42
    branch %c0, ^a, ^t1
  block ^t1:
    %c1 = cmp eq u8 %op, 43
    branch %c1, ^b, ^t2
  block ^t2:
    %c2 = cmp eq u8 %op, 44
    branch %c2, ^c, ^t3
  block ^t3:
    %c3 = cmp eq u8 %op, 45
    branch %c3, ^d, ^miss
  block ^a:
    return i32 1
  block ^b:
    return i32 2
  block ^c:
    return i32 3
  block ^d:
    return i32 4
  block ^miss:
    return i32 0
}

function @three(%op : u8) -> i32 [no_inline=yes] {
  block ^entry:
    %c0 = cmp eq u8 %op, 7
    branch %c0, ^a, ^t1
  block ^t1:
    %c1 = cmp eq u8 %op, 1
    branch %c1, ^b, ^t2
  block ^t2:
    %c2 = cmp eq u8 %op, 30
    branch %c2, ^c, ^miss
  block ^a:
    return i32 1
  block ^b:
    return i32 2
  block ^c:
    return i32 3
  block ^miss:
    return i32 0
}

function @main() -> i32 {
  block ^entry:
    %l0 = call i32 @ladder(3)
    %l1 = call i32 @ladder(21)
    %l2 = call i32 @ladder(4)
    %l3 = call i32 @ladder(255)
    %l4 = call i32 @ladder(0)
    %la = binary add i32 %l0, %l1
    %lb = binary add i32 %l2, %l3
    %lc = binary add i32 %la, %lb
    %ld = binary add i32 %lc, %l4
    %ladder_ok = cmp eq i32 %ld, 81
    %j0 = call i32 @joined(9)
    %j1 = call i32 @joined(40)
    %j2 = call i32 @joined(17)
    %j3 = call i32 @joined(18)
    %j4 = call i32 @joined(-5)
    %ja = binary add i32 %j0, %j1
    %jb = binary add i32 %j2, %j3
    %jc = binary add i32 %ja, %jb
    %jd = binary add i32 %jc, %j4
    %joined_ok = cmp eq i32 %jd, 45
    %k0 = call i32 @consecutive(45)
    %k1 = call i32 @consecutive(41)
    %k2 = call i32 @three(30)
    %k3 = call i32 @three(2)
    %ka = binary add i32 %k0, %k1
    %kb = binary add i32 %k2, %k3
    %kc = binary add i32 %ka, %kb
    %rest_ok = cmp eq i32 %kc, 7
    %both = binary and i64 %ladder_ok, %joined_ok
    %all = binary and i64 %both, %rest_ok
    %status = select i32 %all, 0, 1
    return i32 %status
}
