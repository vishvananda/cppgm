# A sparse switch is searched by halves (one compare against the middle
# run's lowest value, then each half) from machine::kNativeSearchRuns runs:
# five. `@four`'s four runs to four targets are tested one by one: a search
# of them saves fewer compares than it adds taken branches. `@five`'s five
# runs search, and `@consecutive`'s five consecutive values keep their
# order (no gaps).
function @four(%k : i32, %x : i64) -> i64 [no_inline=yes] {
  block ^entry:
    switch %k, ^zero, 1:^one, 5:^two, 9:^three, 40:^four
  block ^one:
    %a = binary mul i64 %x, 3
    return i64 %a
  block ^two:
    %b = binary mul i64 %x, 5
    return i64 %b
  block ^three:
    %c = binary xor i64 %x, 7
    return i64 %c
  block ^four:
    %d = binary sub i64 %x, 11
    return i64 %d
  block ^zero:
    return i64 0
}

function @five(%k : i32, %x : i64) -> i64 [no_inline=yes] {
  block ^entry:
    switch %k, ^zero, 1:^one, 5:^two, 9:^three, 40:^four, 77:^five
  block ^one:
    %a = binary mul i64 %x, 3
    return i64 %a
  block ^two:
    %b = binary mul i64 %x, 5
    return i64 %b
  block ^three:
    %c = binary xor i64 %x, 7
    return i64 %c
  block ^four:
    %d = binary sub i64 %x, 11
    return i64 %d
  block ^five:
    %e = binary add i64 %x, 13
    return i64 %e
  block ^zero:
    return i64 0
}

function @consecutive(%k : i32, %x : i64) -> i64 [no_inline=yes] {
  block ^entry:
    switch %k, ^zero, 20:^one, 21:^two, 22:^three, 23:^four, 24:^five
  block ^one:
    %a = binary mul i64 %x, 3
    return i64 %a
  block ^two:
    %b = binary mul i64 %x, 5
    return i64 %b
  block ^three:
    %c = binary xor i64 %x, 7
    return i64 %c
  block ^four:
    %d = binary sub i64 %x, 11
    return i64 %d
  block ^five:
    %e = binary add i64 %x, 13
    return i64 %e
  block ^zero:
    return i64 0
}

function @main() -> i32 {
  block ^entry:
    %a = call i64 @four(1, 10)
    %b = call i64 @four(40, 10)
    %c = call i64 @four(6, 10)
    %d = call i64 @four(-1, 10)
    %ab = binary add i64 %a, %b
    %cd = binary add i64 %c, %d
    %four_sum = binary add i64 %ab, %cd
    %four_ok = cmp eq i64 %four_sum, 29
    %e = call i64 @five(9, 10)
    %f = call i64 @five(77, 10)
    %g = call i64 @five(41, 10)
    %h = call i64 @five(5, 10)
    %ef = binary add i64 %e, %f
    %gh = binary add i64 %g, %h
    %five_sum = binary add i64 %ef, %gh
    %five_ok = cmp eq i64 %five_sum, 86
    %i = call i64 @consecutive(24, 10)
    %j = call i64 @consecutive(19, 10)
    %k = call i64 @consecutive(21, 10)
    %ij = binary add i64 %i, %j
    %consecutive_sum = binary add i64 %ij, %k
    %consecutive_ok = cmp eq i64 %consecutive_sum, 73
    %both = binary and i64 %four_ok, %five_ok
    %all = binary and i64 %both, %consecutive_ok
    %status = select i32 %all, 0, 1
    return i32 %status
}
