global @seen : i64 [binding=internal] = 0
global @written : i64 [binding=internal] = 0

function @record(%first : i64, %second : i64) -> void
    [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    store i64 %first, @seen
    store i64 %second, @written
    return void
}

function @tail_transfer(%first : i64, %second : i64) -> void
    [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    %take_fast = cmp ne i64 %first, 0
    branch %take_fast, ^fast, ^slow

  block ^fast:
    %sum0 = binary add i64 %first, %second
    %sum1 = binary add i64 %sum0, 1
    %sum2 = binary add i64 %sum1, 2
    %sum3 = binary add i64 %sum2, 3
    %sum4 = binary add i64 %sum3, 4
    %sum5 = binary add i64 %sum4, 5
    store i64 %sum5, @written
    return void

  block ^slow:
    call void @record(%first, %second)
    return void
}

function @changed_argument(%first : i64, %second : i64) -> void
    [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    %changed = binary add i64 %first, 1
    call void @record(%changed, %second)
    return void
}

function @record_slot(%slot : ptr, %second : i64) -> void
    [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    %first = load i64 %slot
    store i64 %first, @seen
    store i64 %second, @written
    return void
}

function @local_storage(%first : i64, %second : i64) -> void
    [binding=internal, no_inline=yes, unwind=no] {
  slot $temporary : i64
  block ^entry:
    store i64 %first, $temporary
    %address = addr $temporary
    call void @record_slot(%address, %second)
    return void
}

# The callee receives the address of memory the caller allocated on the
# stack, which the caller's epilogue releases: an ordinary call.
function @dynamic_storage(%first : i64, %second : i64) -> void
    [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    %memory = stack_alloc 16
    store i64 %first, %memory
    call void @record_slot(%memory, %second)
    return void
}

function @wide_record(%a : i64, %b : i64, %c : i64, %d : i64, %e : i64, %f : i64, %g : i64, %h : i64) -> void
    [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    %sum = binary add i64 %g, %h
    store i64 %sum, @seen
    return void
}

# One path passes stack arguments (%first and %second are the seventh and
# eighth); the call the other path returns from at once is still a tail
# jump: those arguments end when @wide_record returns.
function @beside_stack_arguments(%first : i64, %second : i64) -> void
    [binding=internal, no_inline=yes, unwind=no] {
  block ^entry:
    %wide = cmp eq i64 %first, 0
    branch %wide, ^wide, ^narrow

  block ^wide:
    call void @wide_record(1, 2, 3, 4, 5, 6, %first, %second)
    store i64 %second, @written
    return void

  block ^narrow:
    call void @record(%first, %second)
    return void
}

function @main() -> i32 [role=entry, unwind=no] {
  block ^entry:
    call void @beside_stack_arguments(0, 9)
    %wide_seen = load i64 @seen
    %wide_written = load i64 @written
    %wide_seen_bad = cmp ne i64 %wide_seen, 9
    %wide_written_bad = cmp ne i64 %wide_written, 9
    call void @beside_stack_arguments(4, 5)
    %narrow_seen = load i64 @seen
    %narrow_seen_bad = cmp ne i64 %narrow_seen, 4
    call void @changed_argument(20, 23)
    call void @local_storage(31, 37)
    call void @dynamic_storage(41, 43)
    %dynamic_seen = load i64 @seen
    %dynamic_bad = cmp ne i64 %dynamic_seen, 41
    call void @tail_transfer(0, 13)
    %slow_first = load i64 @seen
    %slow_second = load i64 @written
    %slow_first_bad = cmp ne i64 %slow_first, 0
    %slow_second_bad = cmp ne i64 %slow_second, 13
    call void @tail_transfer(1, 2)
    %fast_result = load i64 @written
    %fast_bad = cmp ne i64 %fast_result, 18
    %bad0 = binary or i32 %slow_first_bad, %slow_second_bad
    %bad1 = binary or i32 %bad0, %fast_bad
    %bad2 = binary or i32 %wide_seen_bad, %wide_written_bad
    %bad3 = binary or i32 %bad2, %narrow_seen_bad
    %bad4 = binary or i32 %bad3, %dynamic_bad
    %bad = binary or i32 %bad1, %bad4
    return i32 %bad
}
