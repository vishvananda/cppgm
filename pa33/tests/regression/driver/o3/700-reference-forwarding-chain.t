// At -O3, the late inline wave gives a hinted helper that passes its small
// reference parameter straight to its callee a larger allowance: the copy of
// chain<13>::add goes into chain<25>::add, so one call runs the 25 steps.
// chain<13>::add stays out of line for its two loops.
inline unsigned step(unsigned seed) { return 914237u * (seed + 12345u) - 13u; }
inline unsigned mix(unsigned seed) { return step(seed); }

template <int F> struct chain
{
    inline static void add(unsigned& result, const unsigned* first, int n)
    {
        chain<F - 1>::add(result, first, n);
        result += mix(first[n + F - 1]);
    }
};

template <> struct chain<0>
{
    inline static void add(unsigned&, const unsigned*, int) {}
};

template <int F> __attribute__((noinline)) unsigned sum(const unsigned* first, int count)
{
    unsigned result = 0;
    int n = 0;
    for (; n < count - (F - 1); n += F)
        chain<F>::add(result, first, n);
    for (; n < count; ++n)
        result += mix(first[n]);
    return result;
}

template <int F> __attribute__((noinline)) unsigned sum_while(const unsigned* first, int count)
{
    unsigned result = 0;
    int n = 0;
    while (n < count - (F - 1))
    {
        chain<F>::add(result, first, n);
        n += F;
    }
    while (n < count)
        result += mix(first[n++]);
    return result;
}

int main()
{
    unsigned data[100];
    for (int i = 0; i < 100; ++i)
        data[i] = i * 7u - 300u;
    unsigned expected = 0;
    for (int i = 0; i < 100; ++i)
        expected += mix(data[i]);
    return sum<25>(data, 100) + sum_while<25>(data, 100) + sum<13>(data, 100) + sum_while<13>(data, 100) == 4 * expected ? 0 : 1;
}
