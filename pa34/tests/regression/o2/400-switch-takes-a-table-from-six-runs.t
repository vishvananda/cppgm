# A dense switch of few targets jumps through a table (a bounds check and
# one indirect jump) from kNativeSwitchClusters runs: six, where LLVM takes
# one from four. `@convert`'s four runs to four targets are tested one by
# one, `@six`'s six runs take the table, and runs that all go to one target
# within 64 values (`@member`) are a bit test.
function @convert(%k : i32, %x : i64) -> i64 [no_inline=yes] {
  block ^entry:
    switch %k, ^zero, 1:^one, 2:^two, 3:^three, 4:^four
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

function @member(%k : i32, %x : i64) -> i64 [no_inline=yes] {
  block ^entry:
    switch %k, ^no, 1:^yes, 3:^yes, 5:^yes, 9:^yes
  block ^yes:
    %y = binary mul i64 %x, 3
    return i64 %y
  block ^no:
    return i64 %x
}

function @six(%k : i32, %x : i64) -> i64 [no_inline=yes] {
  block ^entry:
    switch %k, ^zero, 1:^one, 2:^two, 3:^three, 4:^four, 5:^one, 6:^two
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

function @main() -> i32 {
  block ^entry:
    %a = call i64 @convert(1, 10)
    %b = call i64 @convert(2, 10)
    %c = call i64 @convert(3, 10)
    %d = call i64 @convert(4, 10)
    %e = call i64 @convert(5, 10)
    %f = call i64 @convert(0, 10)
    %ab = binary add i64 %a, %b
    %cd = binary add i64 %c, %d
    %ef = binary add i64 %e, %f
    %abcd = binary add i64 %ab, %cd
    %convert_sum = binary add i64 %abcd, %ef
    %convert_ok = cmp eq i64 %convert_sum, 92
    %g = call i64 @member(3, 10)
    %h = call i64 @member(4, 10)
    %i = call i64 @member(9, 10)
    %gh = binary add i64 %g, %h
    %member_sum = binary add i64 %gh, %i
    %member_ok = cmp eq i64 %member_sum, 70
    %j = call i64 @six(6, 10)
    %k = call i64 @six(7, 10)
    %l = call i64 @six(5, 10)
    %jk = binary add i64 %j, %k
    %six_sum = binary add i64 %jk, %l
    %six_ok = cmp eq i64 %six_sum, 80
    %both = binary and i64 %convert_ok, %member_ok
    %all = binary and i64 %both, %six_ok
    %status = select i32 %all, 0, 1
    return i32 %status
}
