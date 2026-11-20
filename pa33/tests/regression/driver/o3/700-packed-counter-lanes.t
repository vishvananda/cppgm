// At -O3, a two-lane floating loop whose 64-bit counter is read only through
// a truncation to int keeps that counter in 32-bit lanes; the scalar counter
// stays 64-bit for the addresses, the trip test and the remainder. The
// counters start near 2^32 so the truncation wraps inside the loop.
__attribute__((noinline)) void rows(double* out, long count, long start)
{
    for (long j = 0, i = start; j < count; ++j, ++i)
        out[j] = 1.0 / (static_cast<double>(static_cast<int>(i)) + 0.5);
}

__attribute__((noinline)) double weighted(const double* data, long count, long start)
{
    double sum = 0;
    for (long j = 0, i = start; j < count; ++j, ++i)
        sum += data[j] * static_cast<double>(static_cast<int>(i));
    return sum;
}

int main()
{
    double out[9];
    rows(out, 9, 4294967292L);
    for (int k = 0; k < 9; ++k)
        if (out[k] != 1.0 / ((k - 4) + 0.5))
            return 1 + k;
    static const double ones[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    return weighted(ones, 9, 6442450941L) == -6442450935.0 ? 0 : 20;
}
