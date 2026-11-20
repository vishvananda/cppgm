# A chain of one integer operation in a loop, each step read only by the
# next, combines its invariant operands first, and that combination leaves
# the loop: i + a + b + c is i + ((a + b) + c). Subtracted operands keep their
# signs, the regrouped steps lose their no-wrap facts, and a multiplication
# regroups in a loop with a call (an addition there stays). A step with a
# second reader ends the chain. A narrow chain of no-wrap steps keeps its
# order when an index, an extension or its counter's phi reads it: those
# widen it only with the fact.

declare function @note(%x : i64) -> void

# s + (i + a + b + c), the sum wrapping: two additions per pass remain.
function @sum_chain(%n : i64, %a : i64, %b : i64, %c : i64) -> i64 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi i64 [^entry: 0, ^body: %t]
    %more = cmp lt i64 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %x = binary add nowrap i64 %i, %a
    %y = binary add nowrap i64 %x, %b
    %z = binary add nowrap i64 %y, %c
    %t = binary add i64 %s, %z
    %next = binary add i64 %i, 1
    jump ^head
  block ^done:
    return i64 %s
}

# s - a - b + 5, no-wrap: the invariants are 5 - a - b.
function @difference_chain(%n : i32, %a : i32, %b : i32) -> i32 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi i32 [^entry: 0, ^body: %t]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %x = binary sub nowrap i32 %s, %a
    %y = binary sub nowrap i32 %x, %b
    %z = binary add nowrap i32 %y, 5
    %t = binary xor i32 %z, %i
    %next = binary add nowrap i32 %i, 1
    jump ^head
  block ^done:
    return i32 %s
}

# i + a + b, no-wrap, is an i32 index: it stays.
global @cells : obj<512x8> = { zero 512 }

function @indexed_offset(%n : i32, %a : i32, %b : i32) -> i64 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi i64 [^entry: 0, ^body: %t]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %x = binary add nowrap i32 %i, %a
    %y = binary add nowrap i32 %x, %b
    %p = index i64 @cells, %y
    %v = load i64 %p
    %t = binary add i64 %s, %v
    %next = binary add nowrap i32 %i, 1
    jump ^head
  block ^done:
    return i64 %s
}

# i + a + b, no-wrap, is the i32 counter's next value: it stays.
function @counter_step(%n : i32, %a : i32, %b : i32) -> i32 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi i32 [^entry: 0, ^body: %t]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %t = binary xor i32 %s, %i
    %x = binary add nowrap i32 %i, %a
    %next = binary add nowrap i32 %x, %b
    jump ^head
  block ^done:
    return i32 %s
}

# a - i - b: the loop's own operand is subtracted from a - b.
function @subtracted_counter(%n : i64, %a : i64, %b : i64) -> i64 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi i64 [^entry: 0, ^body: %t]
    %more = cmp lt i64 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %x = binary sub i64 %a, %i
    %y = binary sub i64 %x, %b
    %t = binary xor i64 %s, %y
    %next = binary add i64 %i, 1
    jump ^head
  block ^done:
    return i64 %s
}

# i - a - b: only subtracted invariants, so i - (a + b).
function @subtracted_invariants(%n : i64, %a : i64, %b : i64) -> i64 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi i64 [^entry: 0, ^body: %t]
    %more = cmp lt i64 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %x = binary sub i64 %i, %a
    %y = binary sub i64 %x, %b
    %t = binary xor i64 %s, %y
    %next = binary add i64 %i, 1
    jump ^head
  block ^done:
    return i64 %s
}

# (i * a) * b with a call in the loop: the product a * b leaves; the sum
# s + (i + a) + b stays, as an addition held across the call would.
function @product_with_call(%n : i64, %a : i64, %b : i64) -> i64 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi i64 [^entry: 0, ^body: %t]
    %more = cmp lt i64 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %x = binary mul i64 %i, %a
    %y = binary mul i64 %x, %b
    call void @note(%y)
    %u = binary add i64 %i, %a
    %v = binary add i64 %u, %b
    %w = binary add i64 %s, %v
    %t = binary add i64 %w, %y
    %next = binary add i64 %i, 1
    jump ^head
  block ^done:
    return i64 %s
}

# i ^ a, read twice, ends the chain: (i ^ a) ^ b keeps its order.
function @shared_step(%n : u32, %a : u32, %b : u32) -> u32 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi u32 [^entry: 0, ^body: %next]
    %s = phi u32 [^entry: 0, ^body: %t]
    %more = cmp lt u32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %x = binary xor u32 %i, %a
    %y = binary xor u32 %x, %b
    %z = binary and u32 %x, %y
    %t = binary add u32 %s, %z
    %next = binary add u32 %i, 1
    jump ^head
  block ^done:
    return u32 %s
}

# A load between the steps: (i & a) & load & b, the load's step placed after
# its definition.
global @mask : i64 = 1023

function @masked_load(%n : i64, %a : i64, %b : i64) -> i64 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi i64 [^entry: 0, ^body: %t]
    %more = cmp lt i64 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %x = binary or i64 %i, %a
    %m = load volatile i64 @mask
    %y = binary or i64 %x, %m
    %z = binary or i64 %y, %b
    %t = binary add i64 %s, %z
    %next = binary add i64 %i, 1
    jump ^head
  block ^done:
    return i64 %s
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call i64 @sum_chain(17, 9223372036854775700, 90, -3)
    %b = call i32 @difference_chain(13, 1000, -100)
    %h = call i32 @counter_step(100, 9, -2)
    %k = call i64 @indexed_offset(40, 100, 7)
    %c = call i64 @subtracted_counter(9, 5, -7)
    %d = call i64 @subtracted_invariants(11, -9223372036854775807, 4)
    %e = call i64 @product_with_call(7, 3037000500, 3037000500)
    %f = call u32 @shared_step(10, 12345, 678)
    %g = call i64 @masked_load(12, 4096, 65536)
    %bh = binary xor i32 %b, %h
    %b64 = convert sext i64 i32 %bh
    %f64 = convert zext i64 u32 %f
    %ab = binary xor i64 %a, %b64
    %abc = binary xor i64 %ab, %c
    %abcd = binary xor i64 %abc, %d
    %abcde = binary xor i64 %abcd, %e
    %abcdef = binary xor i64 %abcde, %f64
    %abcdefg = binary xor i64 %abcdef, %g
    %all = binary xor i64 %abcdefg, %k
    %folded = binary shr i64 %all, 32
    %mixed = binary xor i64 %all, %folded
    %low = convert trunc i32 i64 %mixed
    %code = binary and i32 %low, 127
    return i32 %code
}
