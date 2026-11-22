extern __thread int tls;

int main(void) { return __alignof__(int) != __alignof(int); }
