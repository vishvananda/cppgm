# A switch whose arms each give the address of a read-only array, or null,
# to one join reads that address from a table of addresses; holes and the
# default keep their edge. When every entry is the address of a symbol the
# program defines, the loaded address is not null (`copy nonnull`), and the
# join's null test is then decided on each edge. In `@maybe` case 2 goes to
# the join with null and no arm between: its entry is null, and that case
# then goes to the null side by itself.
global @one [storage=readonly, binding=internal] = {
  i32 11
  i32 0
}
global @two [storage=readonly, binding=internal] = {
  i32 22
  i32 0
}
global @three [storage=readonly, binding=internal] = {
  i32 33
  i32 0
}
global @five [storage=readonly, binding=internal] = {
  i32 55
  i32 0
}

function @first(%k : i32) -> i32 [no_inline=yes] {
  block ^entry:
    switch %k, ^none, 1:^a1, 2:^a2, 3:^a3, 5:^a5
  block ^a1:
    %p1 = addr @one
    jump ^join
  block ^a2:
    %p2 = addr @two
    jump ^join
  block ^a3:
    %p3 = addr @three
    jump ^join
  block ^a5:
    %p5 = addr @five
    jump ^join
  block ^none:
    jump ^join
  block ^join:
    %p = phi ptr [^a1: %p1, ^a2: %p2, ^a3: %p3, ^a5: %p5, ^none: 0]
    branch %p, ^read, ^empty
  block ^read:
    %v = load i32 %p
    return i32 %v
  block ^empty:
    return i32 -1
}

function @maybe(%k : i32) -> i32 [no_inline=yes] {
  block ^entry:
    switch %k, ^other, 1:^a1, 2:^join, 3:^a3, 4:^a4, 6:^a6
  block ^a1:
    %p1 = addr @one
    jump ^join
  block ^a3:
    %p3 = addr @three
    jump ^join
  block ^a4:
    %p4 = addr @five
    jump ^join
  block ^a6:
    %p6 = addr @two
    jump ^join
  block ^other:
    return i32 -2
  block ^join:
    %p = phi ptr [^a1: %p1, ^entry: 0, ^a3: %p3, ^a4: %p4, ^a6: %p6]
    branch %p, ^read, ^empty
  block ^read:
    %v = load i32 %p
    return i32 %v
  block ^empty:
    return i32 -1
}

function @main() -> i32 {
  block ^entry:
    %a = call i32 @first(1)
    %b = call i32 @first(3)
    %c = call i32 @first(4)
    %d = call i32 @first(5)
    %e = call i32 @first(9)
    %ab = binary add i32 %a, %b
    %cd = binary add i32 %c, %d
    %abcd = binary add i32 %ab, %cd
    %first_sum = binary add i32 %abcd, %e
    %first_ok = cmp eq i32 %first_sum, 97
    %f = call i32 @maybe(1)
    %g = call i32 @maybe(2)
    %h = call i32 @maybe(4)
    %i = call i32 @maybe(7)
    %fg = binary add i32 %f, %g
    %hi = binary add i32 %h, %i
    %maybe_sum = binary add i32 %fg, %hi
    %maybe_ok = cmp eq i32 %maybe_sum, 63
    %all = binary and i64 %first_ok, %maybe_ok
    %status = select i32 %all, 0, 1
    return i32 %status
}
