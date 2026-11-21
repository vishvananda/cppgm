# At -O3, a one-block loop that combines four adjacent elements into a
# carried integer with an operation that regroups exactly (add modulo the
# width, and, or, xor) keeps the four contributions in the lanes of a vector
# phi: each pass combines its vector with the phi's, and the lanes combine
# with each other and with the carried value's start once, on the loop's
# exit edge. @xor_words (one expression of the four words), @sum_shifted
# (one statement per element) and @and_masks (unsigned masks, whose phi
# starts at all ones) are kept. @running_sum reads its sum on every pass and
# combines its lanes on each; @ordered_doubles adds doubles, which do not
# regroup, and stays in source order (the driver's sums of quarters differ
# for any other grouping).
function @xor_words(%a : ptr, %n : i32) -> u32 {
  block ^entry:
    %limit = binary sub i32 %n, 3
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %x = phi u32 [^entry: 305419896, ^loop: %next]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index u32 %a, %i
    %v0 = load u32 %p0
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index u32 %a, %i1
    %v1 = load u32 %p1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index u32 %a, %i2
    %v2 = load u32 %p2
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index u32 %a, %i3
    %v3 = load u32 %p3
    %low = binary xor u32 %v0, %v1
    %high = binary xor u32 %v2, %v3
    %all = binary xor u32 %low, %high
    %next = binary xor u32 %x, %all
    %step = binary add nowrap i32 %i, 4
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^done:
    %result = phi u32 [^entry: 305419896, ^loop: %next]
    return u32 %result
}

function @sum_shifted(%a : ptr, %n : i32) -> i32 {
  block ^entry:
    %limit = binary sub i32 %n, 3
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %s = phi i32 [^entry: 7, ^loop: %s3]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index i32 %a, %i
    %v0 = load i32 %p0
    %w0 = binary shl i32 %v0, 2
    %s0 = binary add i32 %s, %w0
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index i32 %a, %i1
    %v1 = load i32 %p1
    %w1 = binary shl i32 %v1, 2
    %s1 = binary add i32 %s0, %w1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index i32 %a, %i2
    %v2 = load i32 %p2
    %w2 = binary shl i32 %v2, 2
    %s2 = binary add i32 %s1, %w2
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index i32 %a, %i3
    %v3 = load i32 %p3
    %w3 = binary shl i32 %v3, 2
    %s3 = binary add i32 %s2, %w3
    %step = binary add nowrap i32 %i, 4
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^done:
    %result = phi i32 [^entry: 7, ^loop: %s3]
    return i32 %result
}

function @and_masks(%a : ptr, %n : i32) -> u32 {
  block ^entry:
    %limit = binary sub i32 %n, 3
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %x = phi u32 [^entry: 4294967295, ^loop: %next]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index u32 %a, %i
    %v0 = load u32 %p0
    %m0 = binary or u32 %v0, 1
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index u32 %a, %i1
    %v1 = load u32 %p1
    %m1 = binary or u32 %v1, 1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index u32 %a, %i2
    %v2 = load u32 %p2
    %m2 = binary or u32 %v2, 1
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index u32 %a, %i3
    %v3 = load u32 %p3
    %m3 = binary or u32 %v3, 1
    %two = binary and u32 %m0, %m1
    %three = binary and u32 %two, %m2
    %four = binary and u32 %three, %m3
    %next = binary and u32 %x, %four
    %step = binary add nowrap i32 %i, 4
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^done:
    %result = phi u32 [^entry: 4294967295, ^loop: %next]
    return u32 %result
}

function @running_sum(%a : ptr, %out : ptr, %n : i32) -> i32 {
  block ^entry:
    %limit = binary sub i32 %n, 3
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %s = phi i32 [^entry: 0, ^loop: %next]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index i32 %a, %i
    %v0 = load i32 %p0
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index i32 %a, %i1
    %v1 = load i32 %p1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index i32 %a, %i2
    %v2 = load i32 %p2
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index i32 %a, %i3
    %v3 = load i32 %p3
    %low = binary add i32 %v0, %v1
    %high = binary add i32 %v2, %v3
    %all = binary add i32 %low, %high
    %next = binary add i32 %s, %all
    %q = index i32 %out, %i
    store i32 %next, %q
    %step = binary add nowrap i32 %i, 4
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^done:
    %result = phi i32 [^entry: 0, ^loop: %next]
    return i32 %result
}

function @ordered_doubles(%a : ptr, %n : i32) -> f64 {
  block ^entry:
    %limit = binary sub i32 %n, 3
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %s = phi f64 [^entry: 0.0, ^loop: %s3]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index f64 %a, %i
    %v0 = load f64 %p0
    %s0 = binary add f64 %s, %v0
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index f64 %a, %i1
    %v1 = load f64 %p1
    %s1 = binary add f64 %s0, %v1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index f64 %a, %i2
    %v2 = load f64 %p2
    %s2 = binary add f64 %s1, %v2
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index f64 %a, %i3
    %v3 = load f64 %p3
    %s3 = binary add f64 %s2, %v3
    %step = binary add nowrap i32 %i, 4
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^done:
    %result = phi f64 [^entry: 0.0, ^loop: %s3]
    return f64 %result
}
