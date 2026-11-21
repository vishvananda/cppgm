// At -O3 on x86, two computed floats stored to adjacent members become one
// eight-byte store of a lane pair (unpcklps, then one store), so that a later
// eight-byte copy of the pair reads one store; the third member stays a
// float store. A store whose address may be read before its neighbor's store,
// a literal and a loaded float keep their own stores. AArch64 stores the pair
// with stp already.
struct V3 {
    float x, y, z;
    V3 cross(const V3& b) const { return V3{ y * b.z - z * b.y, z * b.x - x * b.z, x * b.y - y * b.x }; }
};
struct Slot { int type, pad; V3 v; };

__attribute__((noinline)) void cross(const V3* a, const V3* b, Slot* out) { out->v = a->cross(*b); }

__attribute__((noinline)) void make(double x, double y, double z, Slot* out)
{
    out->v = V3{ float(x), float(y), float(z) };
}

__attribute__((noinline)) void chained(float s, Slot* out, const float* p)
{
    out->v.x = s * 3.0f;
    out->v.y = *p + s;
    out->v.z = 0.5f;
}

__attribute__((noinline)) void unit(Slot* out)
{
    out->v.x = 1.0f;
    out->v.y = 0.0f;
}

__attribute__((noinline)) unsigned long long low_pair(const Slot* s)
{
    unsigned long long bits;
    __builtin_memcpy(&bits, &s->v, 8);
    return bits;
}

int main()
{
    Slot s = { 1, 0, { 0, 0, 0 } };
    const V3 a = { 1.0f, 2.0f, 3.0f }, b = { -2.0f, 0.5f, 4.0f };
    cross(&a, &b, &s);
    if (s.v.x != 6.5f || s.v.y != -10.0f || s.v.z != 4.5f || s.type != 1)
        return 1;
    // The output may be an operand: the products read the old values first.
    s.v = a;
    cross(&s.v, &b, &s);
    if (s.v.x != 6.5f || s.v.y != -10.0f || s.v.z != 4.5f)
        return 2;
    make(0.25, -8.0, 1e10, &s);
    if (s.v.x != 0.25f || s.v.y != -8.0f || s.v.z != 1e10f)
        return 3;
    const unsigned long long bits = low_pair(&s);
    float lanes[2];
    __builtin_memcpy(lanes, &bits, 8);
    if (lanes[0] != 0.25f || lanes[1] != -8.0f)
        return 4;
    chained(2.0f, &s, &s.v.x);
    if (s.v.x != 6.0f || s.v.y != 8.0f || s.v.z != 0.5f)
        return 5;
    unit(&s);
    return s.v.x == 1.0f && s.v.y == 0.0f && s.v.z == 0.5f ? 0 : 6;
}
