// At -O3, a short loop over local arrays of doubles is not unrolled before
// the vectorizer on a target whose vector loops are unrolled after it: the
// loop runs in vector lanes first and its vector passes are then unrolled.
struct Lanes { double v[8]; };
struct Point { Lanes re, im; };

static void square_add(Point& z, const Point& c, Lanes& abs2)
{
    for (int i = 0; i < 8; ++i) {
        const double rr = z.re.v[i] * z.re.v[i], ii = z.im.v[i] * z.im.v[i], ri = z.re.v[i] * z.im.v[i];
        z.re.v[i] = rr - ii + c.re.v[i];
        z.im.v[i] = ri + ri + c.im.v[i];
        abs2.v[i] = rr + ii;
    }
}

__attribute__((noinline)) int pixels(const Point& c, int rounds)
{
    Point z = c;
    Lanes abs2;
    for (int i = 0; i < rounds; ++i) {
        for (int j = 0; j < 5; ++j)
            square_add(z, c, abs2);
        bool all = true;
        for (int k = 0; k < 8; ++k)
            all = all && abs2.v[k] > 4.0;
        if (all)
            return 0;
    }
    int bits = 0;
    for (int k = 0; k < 8; ++k)
        bits = bits * 2 + (abs2.v[k] <= 4.0);
    return bits;
}

int main()
{
    Point c;
    for (int k = 0; k < 8; ++k) {
        c.re.v[k] = 0.125 * k - 0.75;
        c.im.v[k] = 0.25;
    }
    if (pixels(c, 4) != 0x7f)
        return 1;
    for (int k = 0; k < 8; ++k)
        c.im.v[k] = 2.0;
    return pixels(c, 4) == 0 ? 0 : 2;
}
