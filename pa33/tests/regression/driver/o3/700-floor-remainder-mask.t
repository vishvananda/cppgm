// On every target, a signed remainder by a power of two that is corrected to
// be nonnegative becomes a mask of the dividend, and a pointer stepped back
// one element for a negative remainder indexes by the arithmetic shift.
__attribute__((noinline)) int wrap(int x)
{
    const int r = x % 8;
    return r < 0 ? r + 8 : r;
}

__attribute__((noinline)) long wrap_long(long x)
{
    long r = x % 64;
    if (r < 0)
        r += 64;
    return r;
}

struct Cell { int value, pad; };

__attribute__((noinline)) const Cell* chunk(const Cell* base, long offset)
{
    const Cell* p = base + offset / 4;
    return offset % 4 < 0 ? p - 1 : p;
}

int main()
{
    static const int in[] = { -9, 9, -8, 0, 7, -1 };
    static const int out[] = { 7, 1, 0, 0, 7, 7 };
    for (int i = 0; i < 6; ++i)
        if (wrap(in[i]) != out[i] || wrap_long(in[i] * 9L) != ((in[i] * 9L) % 64 + 64) % 64)
            return 1 + i;
    static Cell cells[8];
    if (chunk(cells + 4, -5) != cells + 2 || chunk(cells + 4, -4) != cells + 3 || chunk(cells + 4, 7) != cells + 5)
        return 10;
    return 0;
}
