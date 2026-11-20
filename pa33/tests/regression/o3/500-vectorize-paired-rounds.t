# Two lanes of short code between bounds that are not both literals run twice
# a round when the lanes may finish the loop: one test serves four passes.
# Four lanes, and a sum in the order of its passes alone, do so too on a
# native target. Literal bounds keep one copy of the lanes' code.

function @two_lanes(%d : ptr, %x : ptr, %from : i64, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    %any = cmp ult i64 %from, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: %from, ^body: %next]
    %p = index f64 %x, %i
    %v = load typed f64 %p
    %o = index f64 %d, %i
    %w = load typed f64 %o
    %r = binary add f64 %w, %v
    store typed f64 %r, %o
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    return void
}

# A sum of words: the second copy adds to what the first leaves.
function @sum_of_words(%x : ptr, %n : i64) -> i64 [no_inline=yes] {
  block ^entry:
    %any = cmp lt i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi i64 [^entry: 0, ^body: %sum]
    %p = index i64 %x, %i
    %v = load typed i64 %p
    %sum = binary add i64 %s, %v
    %next = binary add i64 %i, 1
    %c = cmp lt i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    %out = phi i64 [^entry: 0, ^body: %sum]
    return i64 %out
}

function @four_lanes(%d : ptr, %x : ptr, %n : i64) -> void [no_inline=yes] {
  block ^entry:
    %any = cmp ult i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %p = index f32 %x, %i
    %v = load typed f32 %p
    %o = index f32 %d, %i
    %w = load typed f32 %o
    %r = binary add f32 %w, %v
    store typed f32 %r, %o
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    return void
}

function @literal_bounds(%d : ptr, %x : ptr) -> void [no_inline=yes] {
  block ^entry:
    jump ^body
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %p = index f64 %x, %i
    %v = load typed f64 %p
    %o = index f64 %d, %i
    %w = load typed f64 %o
    %r = binary add f64 %w, %v
    store typed f64 %r, %o
    %next = binary add i64 %i, 1
    %c = cmp ult i64 %next, 100
    branch %c, ^body, ^done
  block ^done:
    return void
}

function @ordered_sum(%x : ptr, %y : ptr, %n : i64) -> f64 [no_inline=yes] {
  block ^entry:
    %any = cmp lt i64 0, %n
    branch %any, ^body, ^done
  block ^body:
    %i = phi i64 [^entry: 0, ^body: %next]
    %s = phi f64 [^entry: 0.0, ^body: %sum]
    %p = index f64 %x, %i
    %v = load typed f64 %p
    %q = index f64 %y, %i
    %w = load typed f64 %q
    %m = binary mul f64 %v, %w
    %sum = binary add f64 %s, %m
    %next = binary add i64 %i, 1
    %c = cmp lt i64 %next, %n
    branch %c, ^body, ^done
  block ^done:
    %out = phi f64 [^entry: 0.0, ^body: %sum]
    return f64 %out
}
