# A function with code labels orders its frame too: the two cells of `$acc`,
# which every handler reads and writes at a dynamic index, move nearest the
# frame register, below which they take one-byte displacements, and the
# large `$big`, which the entry fills and the handlers read once each, moves
# below them.
declare global @run.add : i8 [binding=internal]
declare global @run.sub : i8 [binding=internal]
declare global @run.end : i8 [binding=internal]

global @ops [binding=internal] = {
  ptr addr @run.add
  ptr addr @run.sub
  ptr addr @run.end
}

global @program : obj<56x8> [binding=internal] = {
  i64 0
  i64 1
  i64 0
  i64 0
  i64 1
  i64 0
  i64 2
}

function @fill(%p : ptr) -> void [binding=internal, no_inline=yes] {
  block ^entry:
    jump ^loop

  block ^loop:
    %i = phi i64 [^entry: 0, ^loop: %i1]
    %offset = binary mul i64 %i, 8
    %cell = index inbounds i8 [projection=array_element] %p, %offset
    %v = binary add i64 %i, 3
    store i64 %v, %cell
    %i1 = binary add i64 %i, 1
    %more = cmp lt i64 %i1, 128
    branch %more, ^loop, ^done

  block ^done:
    return void
}

function @run(%n : i64) -> i64 [binding=internal, no_inline=yes] {
  code_label @run.add = ^add
  code_label @run.sub = ^sub
  code_label @run.end = ^end
  slot $big : obj<1024x8>
  slot $acc : obj<16x8>

  block ^entry:
    %bp = addr $big
    call void @fill(%bp)
    %a0 = addr $acc
    store i64 %n, %a0
    %a1 = index inbounds i8 [projection=array_element] %a0, 8
    store i64 0, %a1
    jump ^next

  block ^next:
    %ip = phi i64 [^entry: 0, ^add: %ipa, ^sub: %ips]
    %code = binary mul i64 %ip, 8
    %op_at = index inbounds i8 [projection=array_element] @program, %code
    %op = load typed i64 %op_at
    %target_at = index ptr @ops, %op
    %target = load ptr %target_at
    indirect_jump %target, ^add, ^sub, ^end

  block ^add:
    %pa = binary and i64 %ip, 1
    %oa = binary mul i64 %pa, 8
    %ca = index inbounds i8 [projection=array_element] %a0, %oa
    %xa = load typed i64 %ca
    %ba = index inbounds i8 [projection=array_element] %bp, %code
    %va = load typed i64 %ba
    %ya = binary add i64 %xa, %va
    store i64 %ya, %ca
    %ipa = binary add i64 %ip, 1
    jump ^next

  block ^sub:
    %ps = binary and i64 %ip, 1
    %os = binary mul i64 %ps, 8
    %cs = index inbounds i8 [projection=array_element] %a0, %os
    %xs = load typed i64 %cs
    %bs = index inbounds i8 [projection=array_element] %bp, %code
    %vs = load typed i64 %bs
    %ys = binary sub i64 %xs, %vs
    store i64 %ys, %cs
    %ips = binary add i64 %ip, 1
    jump ^next

  block ^end:
    %e0 = load i64 %a0
    %e1 = load i64 %a1
    %e = binary add i64 %e0, %e1
    return i64 %e
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %r = call i64 @run(100)
    %off = binary sub i64 %r, 111
    %t = convert trunc i32 i64 %off
    return i32 %t
}
