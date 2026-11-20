# A function with code labels (an interpreter whose handlers end in
# indirect jumps) keeps every labeled block where its jumps find it, and
# its loops that hold no labeled block rotate as in any other function:
# the operand loop in `^add` tests at its end, with the header's test left
# as the guard. The dispatch through `^add` and `^end` holds labeled blocks
# and keeps its shape.

global @ops [storage=readonly] = {
  ptr addr @op_add
  ptr addr @op_end
}

global @codes : obj<40x4> = {
  i32 0
  i32 3
  i32 1
  i32 2
  i32 3
  i32 0
  i32 2
  i32 5
  i32 6
  i32 1
}

function @run() -> i32 [no_inline=yes] {
  slot $acc : i32
  slot $pc : i64
  code_label @op_add = ^add
  code_label @op_end = ^end
  block ^entry:
    store i32 0, $acc
    store i64 0, $pc
    %c0 = load i32 @codes
    %w0 = convert sext i64 i32 %c0
    %a0 = index ptr @ops, %w0
    %t0 = load ptr %a0
    indirect_jump %t0, ^add, ^end

  block ^add:
    %pc = load i64 $pc
    %pc1 = binary add i64 %pc, 1
    %ca = index i32 @codes, %pc1
    %count = load i32 %ca
    %first = binary add i64 %pc, 2
    jump ^sum_head

  block ^sum_head:
    %k = phi i32 [^add: 0, ^sum_body: %k1]
    %s = phi i32 [^add: 0, ^sum_body: %s1]
    %more = cmp lt i32 %k, %count
    branch %more, ^sum_body, ^sum_done

  block ^sum_body:
    %kw = convert sext i64 i32 %k
    %at = binary add i64 %first, %kw
    %pa = index i32 @codes, %at
    %v = load i32 %pa
    %s1 = binary add i32 %s, %v
    %k1 = binary add i32 %k, 1
    jump ^sum_head

  block ^sum_done:
    %old = load i32 $acc
    %new = binary add i32 %old, %s
    store i32 %new, $acc
    %cw = convert sext i64 i32 %count
    %next = binary add i64 %first, %cw
    store i64 %next, $pc
    %pn = index i32 @codes, %next
    %op = load i32 %pn
    %ow = convert sext i64 i32 %op
    %oa = index ptr @ops, %ow
    %t = load ptr %oa
    indirect_jump %t, ^add, ^end

  block ^end:
    %r = load i32 $acc
    return i32 %r
}

function @main() -> i32 {
  block ^entry:
    %r = call i32 @run()
    %ok = cmp eq i32 %r, 17
    %status = select i32 %ok, 0, 1
    return i32 %status
}
