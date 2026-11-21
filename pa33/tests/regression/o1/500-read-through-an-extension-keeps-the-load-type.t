# -O1: a rewrite that reads through an instruction to its operand gives that
# operand a reader. In @f the load's one reader is a sign extension. The
# truncation of the masked extension keeps only the load's bits, so it is the
# load; the copy at the other sign then reads the load beside the extension.
# The load keeps its type: the extension reads it as `i32`.
function @f(%p : ptr) -> i64 [binding=strong, no_inline=yes] {
  block ^entry:
    %x = load typed i32 %p
    %s = convert sext i64 i32 %x
    %m = binary and i64 %s, -4611685743549480961
    %w = convert trunc i32 i64 %m
    %u = copy u32 %w
    %z = convert zext i64 u32 %u
    %r = binary xor i64 %m, %z
    return i64 %r
}

function @main() -> i32 [role=entry] {
  slot $v : i32
  block ^entry:
    store typed i32 -5, $v
    %a = addr $v
    %r = call i64 @f(%a)
    %ok = cmp eq i64 %r, -4611685747844448256
    %rc = select i32 %ok, 0, 1
    return i32 %rc
}
