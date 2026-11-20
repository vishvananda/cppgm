# A load whose one use is a store of its value just after it (a memory
# move) reads bytes that narrower stores wrote: the move is done with the
# stored values, and the temporaries they went through are then no longer
# written. `@cross` builds three floats in `$result`, copies it to `$copy`
# and moves `$copy` out as an eightbyte and a four-byte integer (a result
# returned through a call inlined late): the three floats are stored to
# `%r` directly, the last one in place of an integer of its width. `@pair`
# moves an eightbyte of two 32-bit integers. In `@kept` the eightbyte is
# also returned, so it is not a move and is built whole.
function @cross(%r : ptr, %a : ptr, %b : ptr) -> void [no_inline=yes] {
  slot $result : obj<12x4>
  slot $copy : obj<12x4>

  block ^entry:
    %a4 = index i8 [projection=field] %a, 4
    %a8 = index i8 [projection=field] %a, 8
    %b4 = index i8 [projection=field] %b, 4
    %b8 = index i8 [projection=field] %b, 8
    %ax = load f32 %a
    %ay = load f32 %a4
    %az = load f32 %a8
    %bx = load f32 %b
    %by = load f32 %b4
    %bz = load f32 %b8
    %p1 = binary mul f32 %ay, %bz
    %q1 = binary mul f32 %az, %by
    %x = binary sub f32 %p1, %q1
    %p2 = binary mul f32 %az, %bx
    %q2 = binary mul f32 %ax, %bz
    %y = binary sub f32 %p2, %q2
    %p3 = binary mul f32 %ax, %by
    %q3 = binary mul f32 %ay, %bx
    %z = binary sub f32 %p3, %q3
    %res = addr $result
    %res4 = index i8 [projection=field] %res, 4
    %res8 = index i8 [projection=field] %res, 8
    store f32 %x, %res
    store f32 %y, %res4
    store f32 %z, %res8
    %cp = addr $copy
    copyobj 12x4 $result, %cp
    %lo = load i64 %cp
    %cp8 = index i8 [projection=field] %cp, 8
    %hi = load u32 %cp8
    %r8 = index i8 [projection=field] %r, 8
    store i64 %lo, %r8
    %r16 = index i8 [projection=field] %r, 16
    store u32 %hi, %r16
    return void
}

function @pair(%r : ptr, %a : i32, %b : i32) -> void [no_inline=yes] {
  slot $two : obj<8x4>

  block ^entry:
    %t = addr $two
    %t4 = index i8 [projection=field] %t, 4
    store i32 %a, %t
    store i32 %b, %t4
    %w = load i64 %t
    store i64 %w, %r
    return void
}

function @kept(%r : ptr, %x : f32, %y : f32) -> i64 [no_inline=yes] {
  slot $two : obj<8x4>

  block ^entry:
    %t = addr $two
    %t4 = index i8 [projection=field] %t, 4
    store f32 %x, %t
    store f32 %y, %t4
    %w = load i64 %t
    store i64 %w, %r
    return i64 %w
}

function @main() -> i32 {
  slot $a : obj<12x4>
  slot $b : obj<12x4>
  slot $out : obj<24x8>
  slot $words : obj<8x8>

  block ^entry:
    %a = addr $a
    %a4 = index i8 [projection=field] %a, 4
    %a8 = index i8 [projection=field] %a, 8
    store f32 1.0f, %a
    store f32 2.0f, %a4
    store f32 3.0f, %a8
    %b = addr $b
    %b4 = index i8 [projection=field] %b, 4
    %b8 = index i8 [projection=field] %b, 8
    store f32 4.0f, %b
    store f32 5.0f, %b4
    store f32 6.0f, %b8
    %out = addr $out
    call void @cross(%out, %a, %b)
    %o8 = index i8 [projection=field] %out, 8
    %o12 = index i8 [projection=field] %out, 12
    %o16 = index i8 [projection=field] %out, 16
    %x = load f32 %o8
    %y = load f32 %o12
    %z = load f32 %o16
    %xo = cmp eq f32 %x, -3.0f
    %yo = cmp eq f32 %y, 6.0f
    %zo = cmp eq f32 %z, -3.0f
    %w = addr $words
    call void @pair(%w, 7, -2)
    %pw = load i64 %w
    %po = cmp eq i64 %pw, -8589934585
    %k = call i64 @kept(%w, 1.0f, 2.0f)
    %kw = load i64 %w
    %ke = cmp eq i64 %k, %kw
    %kv = cmp eq i64 %k, 4611686019492741120
    %c1 = binary and i1 %xo, %yo
    %c2 = binary and i1 %c1, %zo
    %c3 = binary and i1 %c2, %po
    %c5 = binary and i1 %c3, %ke
    %c6 = binary and i1 %c5, %kv
    %status = select i32 %c6, 0, 1
    return i32 %status
}
