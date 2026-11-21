// At -O3, the innermost loop of a nest that sums products read through row
// pointers is unrolled completely up to 32 passes on every target but Wasm:
// each copy reads its own row with its own address chain.
const int N = 30;

__attribute__((noinline)) void product(int** a, int** b, int** c)
{
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            int sum = 0;
            for (int k = 0; k < N; ++k)
                sum += a[i][k] * b[k][j];
            c[i][j] = sum;
        }
}

int main()
{
    static int sa[N][N], sb[N][N], sc[N][N];
    int *a[N], *b[N], *c[N];
    for (int i = 0; i < N; ++i) {
        a[i] = sa[i];
        b[i] = sb[i];
        c[i] = sc[i];
        for (int j = 0; j < N; ++j) {
            sa[i][j] = i + 2 * j - 7;
            sb[i][j] = i == j ? 3 : (i + j) % 5 - 2;
        }
    }
    product(a, b, c);
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            int sum = 0;
            for (int k = 0; k < N; ++k)
                sum += sa[i][k] * sb[k][j];
            if (sc[i][j] != sum)
                return 1;
        }
    return sc[3][4] == 0 ? 2 : 0;
}
