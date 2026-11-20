# The inner loop stores `%cell` on every pass, so its value stays in a
# register and is stored on the way out. The edge out goes to the outer
# loop's header, which comes before the block that computes `%cell`: the
# block holding that store is placed after the exiting block, not before
# the header, so every pass sees each definition before its uses.

global @sums : obj<16x4> = zero
global @cells : obj<64x4> = zero

function @fill() -> void [no_inline=yes] {
  block ^entry:
    jump ^head

  block ^head:
    %i = phi i32 [^entry: 0, ^body: %j]
    %go = cmp lt i32 %i, 16
    branch %go, ^body, ^done

  block ^body:
    %w = convert sext i64 i32 %i
    %o = binary mul i64 %w, 4
    %at = index i8 @cells, %o
    %v = binary mul i32 %i, 7
    %u = binary mod i32 %v, 11
    store i32 %u, %at
    %j = binary add i32 %i, 1
    jump ^head

  block ^done:
    return void
}

function @rows(%n : i32) -> void [no_inline=yes] {
  block ^entry:
    jump ^outer

  block ^outer:
    %r = phi i32 [^entry: 0, ^inner: %next]
    %more = cmp lt i32 %r, 4
    branch %more, ^row, ^done

  block ^row:
    %rw = convert sext i64 i32 %r
    %ro = binary mul i64 %rw, 4
    %cell = index i8 @sums, %ro
    %next = binary add i32 %r, 1
    %base = binary mul i32 %r, %n
    jump ^inner

  block ^inner:
    %k = phi i32 [^row: 0, ^step: %k1]
    %in = cmp lt i32 %k, %n
    branch %in, ^step, ^outer

  block ^step:
    %e = binary add i32 %base, %k
    %ew = convert sext i64 i32 %e
    %eo = binary mul i64 %ew, 4
    %ea = index i8 @cells, %eo
    %x = load i32 %ea
    %s = load i32 %cell
    %t = binary add i32 %s, %x
    store i32 %t, %cell
    %k1 = binary add i32 %k, 1
    jump ^inner

  block ^done:
    return void
}

function @main() -> i32 [role=entry] {
  block ^entry:
    call void @fill()
    call void @rows(4)
    %a1 = index i8 @sums, 4
    %a3 = index i8 @sums, 12
    %s0 = load i32 @sums
    %s1 = load i32 %a1
    %s3 = load i32 %a3
    %c0 = cmp eq i32 %s0, 20
    %c1 = cmp eq i32 %s1, 22
    %c3 = cmp eq i32 %s3, 26
    %c01 = binary and i1 %c0, %c1
    %c = binary and i1 %c01, %c3
    %status = select i32 %c, 0, 1
    return i32 %status
}
