// At -O3 on every target but Wasm, a short loop whose body runs only under
// a test of the pass keeps that test in each copy of a group, and a counted
// search that can leave on a match runs four passes a group, each pass's
// test in order, before the original loop finishes the rest.
const int kSize = 64;

__attribute__((noinline)) bool fits(const bool* shape, const bool* board, int extent, int at)
{
    for (int i = 0; i <= extent; ++i)
        if (shape[i] && board[at + i])
            return false;
    return true;
}

__attribute__((noinline)) void place(const bool* shape, bool* board, int extent, int at)
{
    for (int i = 0; i <= extent; ++i)
        if (shape[i])
            board[at + i] = true;
}

int main()
{
    static bool board[kSize], shape[kSize];
    for (int i = 0; i < kSize; ++i)
        shape[i] = i % 3 != 1;
    if (!fits(shape, board, 20, 5))
        return 1;
    place(shape, board, 20, 5);
    if (fits(shape, board, 20, 5) || fits(shape, board, 0, 5) || !fits(shape, board, 0, 6))
        return 2;
    int marked = 0;
    for (int i = 0; i < kSize; ++i)
        marked += board[i];
    return marked == 14 ? 0 : 3;
}
