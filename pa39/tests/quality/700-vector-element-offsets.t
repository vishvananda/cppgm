// The vector loop reads three arrays and writes a fourth at one element
// index. A Q access takes its register offset in bytes, so the index is
// scaled once each pass, not once for each access.
extern "C" void blend(int* out, const int* a, const int* b, const int* c, int lo, int hi) {
    for (int i = lo; i < hi; ++i)
        out[i] = a[i] * b[i] - c[i] * a[i];
}
