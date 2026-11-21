# A function with code labels copies a short block that ends in its computed
# dispatch (an indirect jump) into a jump to it: the arms of `^step`'s test
# meet at `^dispatch`, and `^odd`, which does not fall into it, ends with its
# own copy of the dispatch instead of a jump there. `^even` keeps its branch
# to `^dispatch`: its other successor, `^clamp`, is the block below, which
# the copy would leave reachable only by a taken branch. So does `^clamp`,
# whose edge to `^dispatch` is the lone jump `^skip`: threaded away, it
# leaves `^last` below `^clamp`.
declare global @run.step : i8 [binding=internal]
declare global @run.end : i8 [binding=internal]

global @ops [binding=internal] = {
  ptr addr @run.step
  ptr addr @run.end
}

global @program : obj<64x8> [binding=internal] = {
  i64 0
  i64 0
  i64 0
  i64 0
  i64 0
  i64 0
  i64 0
  i64 1
}

function @run(%n : i64) -> i64 [binding=internal, no_inline=yes] {
  code_label @run.step = ^step
  code_label @run.end = ^end
  slot $ip : i64
  slot $acc : i64

  block ^entry:
    store i64 0, $ip
    store i64 %n, $acc
    %t0_at = index ptr @ops, 0
    %t0 = load ptr %t0_at
    indirect_jump %t0, ^step, ^end

  block ^step:
    %ip = load i64 $ip
    %acc = load i64 $acc
    %bit = binary and i64 %ip, 1
    %odd = cmp ne i64 %bit, 0
    branch %odd, ^odd, ^even

  block ^odd:
    %a3 = binary mul i64 %acc, 3
    store i64 %a3, $acc
    %ipo = binary add i64 %ip, 1
    store i64 %ipo, $ip
    jump ^dispatch

  block ^even:
    %a1 = binary add i64 %acc, 1
    store i64 %a1, $acc
    %ipe = binary add i64 %ip, 1
    store i64 %ipe, $ip
    %big = cmp gt i64 %a1, 1000
    branch %big, ^clamp, ^dispatch

  block ^clamp:
    store i64 0, $acc
    %t = load i64 $ip
    %tick = cmp eq i64 %t, 3
    branch %tick, ^skip, ^last

  block ^skip:
    jump ^dispatch

  block ^last:
    store i64 1, $acc
    jump ^dispatch

  block ^dispatch:
    %ip1 = load i64 $ip
    %code = binary shl i64 %ip1, 3
    %op_at = index inbounds i8 [projection=array_element] @program, %code
    %op = load typed i64 %op_at
    %slot = binary shl i64 %op, 3
    %target_at = index inbounds i8 [projection=array_element] @ops, %slot
    %target = load ptr %target_at
    indirect_jump %target, ^step, ^end

  block ^end:
    %r = load i64 $acc
    return i64 %r
}

function @main() -> i32 [role=entry] {
  block ^entry:
    %r = call i64 @run(1)
    %off = binary sub i64 %r, 67
    %t = convert trunc i32 i64 %off
    return i32 %t
}
