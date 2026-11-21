# At -O3, a kept lane sum (600-kept-lane-reductions) whose pass has more
# than one pack of four contributions feeds the packs to up to four carried
# vectors in turn, so that no pack waits on the one before it; the edge out
# combines the vectors, then their lanes. A pack of a sum that adds a literal
# c to what varies adds 4c to the sum, which the scalar carry takes, and the
# carried vectors take only what varies. @shifted_twelve has three packs a
# pass (three carried vectors) and @shifted_twenty five (four vectors, the
# fifth pack feeding the first again), both with an offset (the second's 4c
# wraps); @xor_twelve's offset stays in its lanes, since lanes that combine
# by xor do not combine a splat into four times it.
function @shifted_twelve(%a : ptr, %n : i32) -> i32 {
  block ^entry:
    %limit = binary sub i32 %n, 11
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %s = phi i32 [^entry: 9, ^loop: %s11]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index i32 %a, %i
    %v0 = load i32 %p0
    %w0 = binary shl i32 %v0, 1
    %c0 = binary add i32 %w0, 5
    %s0 = binary add i32 %s, %c0
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index i32 %a, %i1
    %v1 = load i32 %p1
    %w1 = binary shl i32 %v1, 1
    %c1 = binary add i32 %w1, 5
    %s1 = binary add i32 %s0, %c1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index i32 %a, %i2
    %v2 = load i32 %p2
    %w2 = binary shl i32 %v2, 1
    %c2 = binary add i32 %w2, 5
    %s2 = binary add i32 %s1, %c2
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index i32 %a, %i3
    %v3 = load i32 %p3
    %w3 = binary shl i32 %v3, 1
    %c3 = binary add i32 %w3, 5
    %s3 = binary add i32 %s2, %c3
    %i4 = binary add nowrap i32 %i, 4
    %p4 = index i32 %a, %i4
    %v4 = load i32 %p4
    %w4 = binary shl i32 %v4, 1
    %c4 = binary add i32 %w4, 5
    %s4 = binary add i32 %s3, %c4
    %i5 = binary add nowrap i32 %i, 5
    %p5 = index i32 %a, %i5
    %v5 = load i32 %p5
    %w5 = binary shl i32 %v5, 1
    %c5 = binary add i32 %w5, 5
    %s5 = binary add i32 %s4, %c5
    %i6 = binary add nowrap i32 %i, 6
    %p6 = index i32 %a, %i6
    %v6 = load i32 %p6
    %w6 = binary shl i32 %v6, 1
    %c6 = binary add i32 %w6, 5
    %s6 = binary add i32 %s5, %c6
    %i7 = binary add nowrap i32 %i, 7
    %p7 = index i32 %a, %i7
    %v7 = load i32 %p7
    %w7 = binary shl i32 %v7, 1
    %c7 = binary add i32 %w7, 5
    %s7 = binary add i32 %s6, %c7
    %i8 = binary add nowrap i32 %i, 8
    %p8 = index i32 %a, %i8
    %v8 = load i32 %p8
    %w8 = binary shl i32 %v8, 1
    %c8 = binary add i32 %w8, 5
    %s8 = binary add i32 %s7, %c8
    %i9 = binary add nowrap i32 %i, 9
    %p9 = index i32 %a, %i9
    %v9 = load i32 %p9
    %w9 = binary shl i32 %v9, 1
    %c9 = binary add i32 %w9, 5
    %s9 = binary add i32 %s8, %c9
    %i10 = binary add nowrap i32 %i, 10
    %p10 = index i32 %a, %i10
    %v10 = load i32 %p10
    %w10 = binary shl i32 %v10, 1
    %c10 = binary add i32 %w10, 5
    %s10 = binary add i32 %s9, %c10
    %i11 = binary add nowrap i32 %i, 11
    %p11 = index i32 %a, %i11
    %v11 = load i32 %p11
    %w11 = binary shl i32 %v11, 1
    %c11 = binary add i32 %w11, 5
    %s11 = binary add i32 %s10, %c11
    %step = binary add nowrap i32 %i, 12
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^done:
    %result = phi i32 [^entry: 9, ^loop: %s11]
    return i32 %result
}

function @shifted_twenty(%a : ptr, %n : i32) -> i32 {
  block ^entry:
    %limit = binary sub i32 %n, 19
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %s = phi i32 [^entry: 0, ^loop: %s19]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index i32 %a, %i
    %v0 = load i32 %p0
    %w0 = binary shl i32 %v0, 3
    %c0 = binary add i32 %w0, 1000000007
    %s0 = binary add i32 %s, %c0
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index i32 %a, %i1
    %v1 = load i32 %p1
    %w1 = binary shl i32 %v1, 3
    %c1 = binary add i32 %w1, 1000000007
    %s1 = binary add i32 %s0, %c1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index i32 %a, %i2
    %v2 = load i32 %p2
    %w2 = binary shl i32 %v2, 3
    %c2 = binary add i32 %w2, 1000000007
    %s2 = binary add i32 %s1, %c2
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index i32 %a, %i3
    %v3 = load i32 %p3
    %w3 = binary shl i32 %v3, 3
    %c3 = binary add i32 %w3, 1000000007
    %s3 = binary add i32 %s2, %c3
    %i4 = binary add nowrap i32 %i, 4
    %p4 = index i32 %a, %i4
    %v4 = load i32 %p4
    %w4 = binary shl i32 %v4, 3
    %c4 = binary add i32 %w4, 1000000007
    %s4 = binary add i32 %s3, %c4
    %i5 = binary add nowrap i32 %i, 5
    %p5 = index i32 %a, %i5
    %v5 = load i32 %p5
    %w5 = binary shl i32 %v5, 3
    %c5 = binary add i32 %w5, 1000000007
    %s5 = binary add i32 %s4, %c5
    %i6 = binary add nowrap i32 %i, 6
    %p6 = index i32 %a, %i6
    %v6 = load i32 %p6
    %w6 = binary shl i32 %v6, 3
    %c6 = binary add i32 %w6, 1000000007
    %s6 = binary add i32 %s5, %c6
    %i7 = binary add nowrap i32 %i, 7
    %p7 = index i32 %a, %i7
    %v7 = load i32 %p7
    %w7 = binary shl i32 %v7, 3
    %c7 = binary add i32 %w7, 1000000007
    %s7 = binary add i32 %s6, %c7
    %i8 = binary add nowrap i32 %i, 8
    %p8 = index i32 %a, %i8
    %v8 = load i32 %p8
    %w8 = binary shl i32 %v8, 3
    %c8 = binary add i32 %w8, 1000000007
    %s8 = binary add i32 %s7, %c8
    %i9 = binary add nowrap i32 %i, 9
    %p9 = index i32 %a, %i9
    %v9 = load i32 %p9
    %w9 = binary shl i32 %v9, 3
    %c9 = binary add i32 %w9, 1000000007
    %s9 = binary add i32 %s8, %c9
    %i10 = binary add nowrap i32 %i, 10
    %p10 = index i32 %a, %i10
    %v10 = load i32 %p10
    %w10 = binary shl i32 %v10, 3
    %c10 = binary add i32 %w10, 1000000007
    %s10 = binary add i32 %s9, %c10
    %i11 = binary add nowrap i32 %i, 11
    %p11 = index i32 %a, %i11
    %v11 = load i32 %p11
    %w11 = binary shl i32 %v11, 3
    %c11 = binary add i32 %w11, 1000000007
    %s11 = binary add i32 %s10, %c11
    %i12 = binary add nowrap i32 %i, 12
    %p12 = index i32 %a, %i12
    %v12 = load i32 %p12
    %w12 = binary shl i32 %v12, 3
    %c12 = binary add i32 %w12, 1000000007
    %s12 = binary add i32 %s11, %c12
    %i13 = binary add nowrap i32 %i, 13
    %p13 = index i32 %a, %i13
    %v13 = load i32 %p13
    %w13 = binary shl i32 %v13, 3
    %c13 = binary add i32 %w13, 1000000007
    %s13 = binary add i32 %s12, %c13
    %i14 = binary add nowrap i32 %i, 14
    %p14 = index i32 %a, %i14
    %v14 = load i32 %p14
    %w14 = binary shl i32 %v14, 3
    %c14 = binary add i32 %w14, 1000000007
    %s14 = binary add i32 %s13, %c14
    %i15 = binary add nowrap i32 %i, 15
    %p15 = index i32 %a, %i15
    %v15 = load i32 %p15
    %w15 = binary shl i32 %v15, 3
    %c15 = binary add i32 %w15, 1000000007
    %s15 = binary add i32 %s14, %c15
    %i16 = binary add nowrap i32 %i, 16
    %p16 = index i32 %a, %i16
    %v16 = load i32 %p16
    %w16 = binary shl i32 %v16, 3
    %c16 = binary add i32 %w16, 1000000007
    %s16 = binary add i32 %s15, %c16
    %i17 = binary add nowrap i32 %i, 17
    %p17 = index i32 %a, %i17
    %v17 = load i32 %p17
    %w17 = binary shl i32 %v17, 3
    %c17 = binary add i32 %w17, 1000000007
    %s17 = binary add i32 %s16, %c17
    %i18 = binary add nowrap i32 %i, 18
    %p18 = index i32 %a, %i18
    %v18 = load i32 %p18
    %w18 = binary shl i32 %v18, 3
    %c18 = binary add i32 %w18, 1000000007
    %s18 = binary add i32 %s17, %c18
    %i19 = binary add nowrap i32 %i, 19
    %p19 = index i32 %a, %i19
    %v19 = load i32 %p19
    %w19 = binary shl i32 %v19, 3
    %c19 = binary add i32 %w19, 1000000007
    %s19 = binary add i32 %s18, %c19
    %step = binary add nowrap i32 %i, 20
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^done:
    %result = phi i32 [^entry: 0, ^loop: %s19]
    return i32 %result
}

function @xor_twelve(%a : ptr, %n : i32) -> u32 {
  block ^entry:
    %limit = binary sub i32 %n, 11
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %s = phi u32 [^entry: 305419896, ^loop: %s11]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index u32 %a, %i
    %v0 = load u32 %p0
    %w0 = binary shl u32 %v0, 1
    %c0 = binary add u32 %w0, 5
    %s0 = binary xor u32 %s, %c0
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index u32 %a, %i1
    %v1 = load u32 %p1
    %w1 = binary shl u32 %v1, 1
    %c1 = binary add u32 %w1, 5
    %s1 = binary xor u32 %s0, %c1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index u32 %a, %i2
    %v2 = load u32 %p2
    %w2 = binary shl u32 %v2, 1
    %c2 = binary add u32 %w2, 5
    %s2 = binary xor u32 %s1, %c2
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index u32 %a, %i3
    %v3 = load u32 %p3
    %w3 = binary shl u32 %v3, 1
    %c3 = binary add u32 %w3, 5
    %s3 = binary xor u32 %s2, %c3
    %i4 = binary add nowrap i32 %i, 4
    %p4 = index u32 %a, %i4
    %v4 = load u32 %p4
    %w4 = binary shl u32 %v4, 1
    %c4 = binary add u32 %w4, 5
    %s4 = binary xor u32 %s3, %c4
    %i5 = binary add nowrap i32 %i, 5
    %p5 = index u32 %a, %i5
    %v5 = load u32 %p5
    %w5 = binary shl u32 %v5, 1
    %c5 = binary add u32 %w5, 5
    %s5 = binary xor u32 %s4, %c5
    %i6 = binary add nowrap i32 %i, 6
    %p6 = index u32 %a, %i6
    %v6 = load u32 %p6
    %w6 = binary shl u32 %v6, 1
    %c6 = binary add u32 %w6, 5
    %s6 = binary xor u32 %s5, %c6
    %i7 = binary add nowrap i32 %i, 7
    %p7 = index u32 %a, %i7
    %v7 = load u32 %p7
    %w7 = binary shl u32 %v7, 1
    %c7 = binary add u32 %w7, 5
    %s7 = binary xor u32 %s6, %c7
    %i8 = binary add nowrap i32 %i, 8
    %p8 = index u32 %a, %i8
    %v8 = load u32 %p8
    %w8 = binary shl u32 %v8, 1
    %c8 = binary add u32 %w8, 5
    %s8 = binary xor u32 %s7, %c8
    %i9 = binary add nowrap i32 %i, 9
    %p9 = index u32 %a, %i9
    %v9 = load u32 %p9
    %w9 = binary shl u32 %v9, 1
    %c9 = binary add u32 %w9, 5
    %s9 = binary xor u32 %s8, %c9
    %i10 = binary add nowrap i32 %i, 10
    %p10 = index u32 %a, %i10
    %v10 = load u32 %p10
    %w10 = binary shl u32 %v10, 1
    %c10 = binary add u32 %w10, 5
    %s10 = binary xor u32 %s9, %c10
    %i11 = binary add nowrap i32 %i, 11
    %p11 = index u32 %a, %i11
    %v11 = load u32 %p11
    %w11 = binary shl u32 %v11, 1
    %c11 = binary add u32 %w11, 5
    %s11 = binary xor u32 %s10, %c11
    %step = binary add nowrap i32 %i, 12
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^done:
    %result = phi u32 [^entry: 305419896, ^loop: %s11]
    return u32 %result
}
