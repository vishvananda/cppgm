// At -O3, a loop of one block that runs at least once and carries sixteen
// doubles, updated in pairs by the same operations and stored in adjacent
// pairs after the loop, keeps them in two-lane vector phis on every target.
// Each lane computes what its scalar computed, so the results are bit-exact.
#define LOAD(k) double r##k = re[k], i##k = im[k];
#define STEP(k)                                                                \
    {                                                                          \
        const double rr = r##k * r##k, ii = i##k * i##k, ri = r##k * i##k;     \
        r##k = rr - ii + 0.25;                                                 \
        i##k = ri + ri - 0.125;                                                \
    }
#define ALL(F) F(0) F(1) F(2) F(3) F(4) F(5) F(6) F(7)

extern "C" __attribute__((noinline)) void orbit(double* re, double* im, unsigned steps)
{
    ALL(LOAD)
    do {
        ALL(STEP)
    } while (--steps != 0);
    re[0] = r0; re[1] = r1; re[2] = r2; re[3] = r3;
    re[4] = r4; re[5] = r5; re[6] = r6; re[7] = r7;
    im[0] = i0; im[1] = i1; im[2] = i2; im[3] = i3;
    im[4] = i4; im[5] = i5; im[6] = i6; im[7] = i7;
}

int main()
{
    double re[8], im[8], sre[8], sim[8];
    for (int k = 0; k < 8; ++k) {
        re[k] = sre[k] = 0.0625 * k - 0.25;
        im[k] = sim[k] = 0.03125 * k;
    }
    orbit(re, im, 1);
    orbit(re, im, 8);
    for (int s = 0; s < 9; ++s)
        for (int k = 0; k < 8; ++k) {
            const volatile double rr = sre[k] * sre[k], ii = sim[k] * sim[k], ri = sre[k] * sim[k];
            sre[k] = rr - ii + 0.25;
            sim[k] = ri + ri - 0.125;
        }
    for (int k = 0; k < 8; ++k)
        if (re[k] != sre[k] || im[k] != sim[k])
            return 1 + k;
    return 0;
}
