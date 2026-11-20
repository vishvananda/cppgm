# A loop-carried integer narrower than 32 bits that its loop only adds to,
# subtracts, multiplies, masks and shifts left by a literal keeps its low
# bits at a wider width, so it stays wide through the loop: a narrow step
# reads the wide value a truncation came from, an extension of the narrow
# value and the truncation back go, the steps lose their no-wrap facts, and
# what reads the value after the loop reads a truncation. A compare or a
# division in the loop needs the narrow value: that recurrence stays narrow.

# s += (i16)(i * 3): i16 steps on truncations of i32 values.
function @truncated_steps(%n : i32) -> i16 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi i16 [^entry: 5, ^body: %t]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %w = binary mul i32 %i, 3
    %q = convert trunc i16 i32 %w
    %t = binary add i16 %s, %q
    %next = binary add nowrap i32 %i, 1
    jump ^head
  block ^done:
    %r = binary xor i16 %s, 1
    return i16 %r
}

# s = (i16)(s + i * 7), the int addition no-wrap: the extension and the
# truncation go, and the addition wraps.
function @extended_sum(%n : i32) -> i16 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi i16 [^entry: -3, ^body: %t]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %e = convert sext i32 i16 %s
    %w = binary mul nowrap i32 %i, 7000
    %sum = binary add nowrap i32 %e, %w
    %t = convert trunc i16 i32 %sum
    %next = binary add nowrap i32 %i, 1
    jump ^head
  block ^done:
    return i16 %s
}

# s = (s << 3) * 5 - ~s ^ c, u8 from a u8 parameter: u32 steps.
function @shifted_bytes(%n : i32, %c : u8) -> u8 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi u8 [^entry: %c, ^body: %t]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %a = binary shl u8 %s, 3
    %b = binary mul u8 %a, 5
    %k = unary bitnot u8 %s
    %d = binary sub u8 %b, %k
    %t = binary xor u8 %d, %c
    %next = binary add nowrap i32 %i, 1
    jump ^head
  block ^done:
    return u8 %s
}

# A compare reads the sum in the loop: it stays i16.
function @compared_sum(%n : i32) -> i32 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi i16 [^entry: 0, ^body: %t]
    %c = phi i32 [^entry: 0, ^body: %count]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %w = binary mul i32 %i, 9001
    %q = convert trunc i16 i32 %w
    %t = binary add i16 %s, %q
    %below = cmp lt i16 %t, 0
    %one = convert zext i32 i1 %below
    %count = binary add nowrap i32 %c, %one
    %next = binary add nowrap i32 %i, 1
    jump ^head
  block ^done:
    %e = convert sext i32 i16 %s
    %r = binary add i32 %c, %e
    return i32 %r
}

# A division reads the sum: it stays i16.
function @divided_sum(%n : i32) -> i16 [no_inline=yes] {
  block ^entry:
    jump ^head
  block ^head:
    %i = phi i32 [^entry: 0, ^body: %next]
    %s = phi i16 [^entry: 1, ^body: %t]
    %more = cmp lt i32 %i, %n
    branch %more, ^body, ^done
  block ^body:
    %h = binary div i16 %s, 3
    %w = convert trunc i16 i32 %i
    %t = binary add i16 %h, %w
    %next = binary add nowrap i32 %i, 1
    jump ^head
  block ^done:
    return i16 %s
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %a = call i16 @truncated_steps(1000)
    %b = call i16 @extended_sum(777)
    %c = call u8 @shifted_bytes(300, 201)
    %d = call i32 @compared_sum(500)
    %e = call i16 @divided_sum(90)
    %a32 = convert sext i32 i16 %a
    %b32 = convert sext i32 i16 %b
    %c32 = convert zext i32 u8 %c
    %e32 = convert sext i32 i16 %e
    %ab = binary xor i32 %a32, %b32
    %abc = binary xor i32 %ab, %c32
    %abcd = binary xor i32 %abc, %d
    %all = binary xor i32 %abcd, %e32
    %folded = binary shr i32 %all, 16
    %mixed = binary xor i32 %all, %folded
    %code = binary and i32 %mixed, 127
    return i32 %code
}
