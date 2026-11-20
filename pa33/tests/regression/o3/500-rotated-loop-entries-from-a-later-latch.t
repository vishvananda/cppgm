# Rotation of the first loop gives the second loop's header two entries
# that branch elsewhere too (the first loop's guard and its new latch), and
# rotating the second loop stores its header's values on each of those
# edges in a block of the edge's own. The latch comes after the second
# loop's header in layout and defines the value stored on its edge: that
# block is placed after the latch, not before the header, so every pass
# sees each definition before its uses. (`%p` may point at `@limit`, so
# the first loop's header reloads it.)

global @limit : i32 = 3
global @cells : obj<64x4> = zero

function @two(%m : i32, %p : ptr) -> i32 [no_inline=yes] {
  block ^entry:
    jump ^a_head

  block ^a_head:
    %i = phi i32 [^entry: 0, ^a_body: %i1]
    %lim = load i32 @limit
    %more = cmp lt i32 %i, %lim
    branch %more, ^a_body, ^b_head

  block ^b_head:
    %cnt = phi i32 [^a_head: %lim, ^b_latch: %c2]
    %j = phi i32 [^a_head: 0, ^b_latch: %j1]
    %go = cmp lt i32 %j, %cnt
    branch %go, ^c_pre, ^done

  block ^c_pre:
    %jj = binary mul i32 %j, 2
    jump ^c_head

  block ^c_head:
    %k = phi i32 [^c_pre: 0, ^c_body: %k1]
    %in = cmp lt i32 %k, %jj
    branch %in, ^c_body, ^b_latch

  block ^c_body:
    %kw = convert sext i64 i32 %k
    %ko = binary mul i64 %kw, 4
    %ka = index i8 @cells, %ko
    %kv = load i32 %ka
    %kn = binary add i32 %kv, %j
    store i32 %kn, %ka
    %k1 = binary add i32 %k, 1
    jump ^c_head

  block ^b_latch:
    %j1 = binary add i32 %j, 1
    %c2 = binary add i32 %cnt, %m
    jump ^b_head

  block ^a_body:
    %iw = convert sext i64 i32 %i
    %io = binary mul i64 %iw, 4
    %ia = index i8 %p, %io
    store i32 %i, %ia
    %i1 = binary add i32 %i, 1
    jump ^a_head

  block ^done:
    %r = load i32 @cells
    return i32 %r
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %v = call i32 @two(0, @cells)
    %a3 = index i8 @cells, 12
    %w = load i32 %a3
    %c0 = cmp eq i32 %v, 3
    %c3 = cmp eq i32 %w, 2
    %c = binary and i1 %c0, %c3
    %status = select i32 %c, 0, 1
    return i32 %status
}
