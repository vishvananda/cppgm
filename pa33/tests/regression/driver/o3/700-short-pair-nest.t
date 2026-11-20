// A short outer loop around one loop over the same frame array: copying the
// outer loop's four passes gives each inner loop a constant start, so the
// inner loops unroll and the array's fields stay in registers. Only the time
// steps loop remains. The volatile inputs prevent evaluating the loops
// during compilation.
struct Body
{
    double x, v, m;
};

__attribute__((noinline)) double advance(double dt, int steps, const volatile double* start)
{
    Body b[4];
    for (int i = 0; i < 4; ++i)
        b[i] = Body{ start[i], start[i + 4], start[i + 8] };
    for (int s = 0; s < steps; ++s)
    {
        for (int i = 0; i < 4; ++i)
            for (int j = i + 1; j < 4; ++j)
            {
                double d = b[i].x - b[j].x;
                double f = dt / (d * d + 0.01);
                b[i].v -= d * b[j].m * f;
                b[j].v += d * b[i].m * f;
            }
        for (int i = 0; i < 4; ++i)
            b[i].x += dt * b[i].v;
    }
    return b[0].x + b[1].x + b[2].x + b[3].x;
}

int main()
{
    static volatile double start[12] = { 0, 1, 2, 3, 1, 0, -1, 0.5, 1, 2, 3, 4 };
    volatile int steps = 100;
    double r = advance(0.01, steps, start);
    return r > 9.33 && r < 9.35 ? 0 : 1;
}
