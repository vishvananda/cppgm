// At -O3, the fields of a split local array of doubles that a loop updates
// only under a test of each element are carried in phis around the loop on
// every target, within a budget of 3/8 of the target's floating registers
// per loop; here none stays in its slot.
__attribute__((noinline)) unsigned escape(const double* c, double ci, unsigned limit)
{
    double zr[4], zi[4];
    for (int k = 0; k < 4; ++k) {
        zr[k] = c[k];
        zi[k] = ci;
    }
    unsigned bits = 15;
    for (unsigned i = 0; bits != 0 && i < limit; ++i)
        for (int k = 0; k < 4; ++k)
            if (bits & (1u << k)) {
                const double r = zr[k], m = zi[k];
                zr[k] = r * r - m * m + c[k];
                zi[k] = 2.0 * r * m + ci;
                if (zr[k] * zr[k] + zi[k] * zi[k] > 4.0)
                    bits &= ~(1u << k);
            }
    return bits;
}

int main()
{
    static const double inside[] = { -0.5, -0.25, 0.0, 0.25 };
    static const double outside[] = { 1.0, 0.5, -1.5, 2.5 };
    static const double mixed[] = { -0.5, 1.0, 0.25, 2.5 };
    if (escape(inside, 0.0, 50) != 15)
        return 1;
    if (escape(outside, 0.5, 50) != 0)
        return 2;
    if (escape(mixed, 0.0, 50) != 5)
        return 3;
    return escape(mixed, 0.0, 0) == 15 ? 0 : 4;
}
