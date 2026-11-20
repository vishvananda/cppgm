# A store of zero to the bytes just before a zeroing, with only address
# arithmetic between them, joins the zeroing: `@fill` stores a zero byte at
# offset 8 and zeroes the 15 bytes after it (a member array's `{0}`), and
# one zeroing of 16 bytes writes them all. In `@read` a call that reads the
# byte comes between the two, and in `@gap` the stored byte ends before the
# zeroing starts: both keep their store.
function @fill(%p : ptr) -> void [no_inline=yes] {
  block ^entry:
    store i32 0, %p
    %b = index i8 [projection=field] %p, 8
    store u8 0, %b
    %rest = index i8 [projection=field] %p, 9
    zeroinit 15x1 %rest
    return void
}

function @peek(%p : ptr) -> i32 [no_inline=yes] {
  block ^entry:
    %b = index i8 [projection=field] %p, 8
    %v = load u8 %b
    %w = convert zext i32 u8 %v
    return i32 %w
}

function @read(%p : ptr) -> i32 [no_inline=yes] {
  block ^entry:
    %b = index i8 [projection=field] %p, 8
    store u8 0, %b
    %seen = call i32 @peek(%p)
    %rest = index i8 [projection=field] %p, 9
    zeroinit 15x1 %rest
    return i32 %seen
}

function @gap(%p : ptr) -> void [no_inline=yes] {
  block ^entry:
    %b = index i8 [projection=field] %p, 7
    store u8 0, %b
    %rest = index i8 [projection=field] %p, 9
    zeroinit 15x1 %rest
    return void
}

function @reset(%p : ptr) -> void [no_inline=yes] {
  block ^entry:
    %p8 = index i8 [projection=field] %p, 8
    %p16 = index i8 [projection=field] %p, 16
    %p24 = index i8 [projection=field] %p, 24
    store i64 -1, %p
    store i64 -1, %p8
    store i64 -1, %p16
    store i64 -1, %p24
    return void
}

function @main() -> i32 {
  slot $buf : obj<32x8>

  block ^entry:
    %p = addr $buf
    %p4 = index i8 [projection=field] %p, 4
    %p7 = index i8 [projection=field] %p, 7
    %p8 = index i8 [projection=field] %p, 8
    %p16 = index i8 [projection=field] %p, 16
    %p24 = index i8 [projection=field] %p, 24
    call void @reset(%p)
    call void @fill(%p)
    %f0 = load i32 %p
    %f4 = load i32 %p4
    %f8 = load i64 %p8
    %f16 = load i64 %p16
    %f24 = load i64 %p24
    %a0 = cmp eq i32 %f0, 0
    %a4 = cmp eq i32 %f4, -1
    %a8 = cmp eq i64 %f8, 0
    %a16 = cmp eq i64 %f16, 0
    %a24 = cmp eq i64 %f24, -1
    call void @reset(%p)
    %seen = call i32 @read(%p)
    %r8 = load i64 %p8
    %b0 = cmp eq i32 %seen, 0
    %b8 = cmp eq i64 %r8, 0
    call void @reset(%p)
    call void @gap(%p)
    %g7 = load u8 %p7
    %g8 = load u8 %p8
    %g16 = load i64 %p16
    %c7 = cmp eq u8 %g7, 0
    %c8 = cmp eq u8 %g8, 255
    %c16 = cmp eq i64 %g16, 0
    %k1 = binary and i1 %a0, %a4
    %k2 = binary and i1 %k1, %a8
    %k3 = binary and i1 %k2, %a16
    %k4 = binary and i1 %k3, %a24
    %k5 = binary and i1 %k4, %b0
    %k6 = binary and i1 %k5, %b8
    %k7 = binary and i1 %k6, %c7
    %k8 = binary and i1 %k7, %c8
    %k9 = binary and i1 %k8, %c16
    %status = select i32 %k9, 0, 1
    return i32 %status
}
