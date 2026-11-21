# At -O3, a loop sum that a handler in its loop reads stays a scalar: the
# handler reads the sum inside a pass, and kept lanes are combined only on
# the loop's exit edge. @xor_until combines four adjacent words a pass and
# then calls @probe, which may throw; the handler returns the sum so far
# combined with what was thrown.
declare function @probe(%i : i32) -> void

global @words : obj<512x16> = {
  zero 512
}

function @xor_until(%n : i32) -> u32 {
  block ^entry:
    %limit = binary sub i32 %n, 3
    %enter = cmp gt i32 %limit, 0
    branch %enter, ^loop, ^done

  block ^loop:
    %x = phi u32 [^entry: 305419896, ^loop: %next]
    %i = phi i32 [^entry: 0, ^loop: %step]
    %p0 = index u32 @words, %i
    %v0 = load u32 %p0
    %x1 = binary xor u32 %x, %v0
    %i1 = binary add nowrap i32 %i, 1
    %p1 = index u32 @words, %i1
    %v1 = load u32 %p1
    %x2 = binary xor u32 %x1, %v1
    %i2 = binary add nowrap i32 %i, 2
    %p2 = index u32 @words, %i2
    %v2 = load u32 %p2
    %x3 = binary xor u32 %x2, %v2
    %i3 = binary add nowrap i32 %i, 3
    %p3 = index u32 @words, %i3
    %v3 = load u32 %p3
    %next = binary xor u32 %x3, %v3
    eh_try ^caught
    call void @probe(%i)
    eh_end
    %step = binary add nowrap i32 %i, 4
    %more = cmp lt i32 %step, %limit
    branch %more, ^loop, ^done

  block ^caught:
    %thrown = exception i64
    %low = convert trunc u32 i64 %thrown
    %sofar = binary xor u32 %next, %low
    return u32 %sofar

  block ^done:
    %result = phi u32 [^entry: 305419896, ^loop: %next]
    return u32 %result
}
