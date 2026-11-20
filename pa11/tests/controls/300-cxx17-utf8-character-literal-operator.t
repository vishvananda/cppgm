// expect exit 0
constexpr int operator""_byte(char c) { return c; }
constexpr int operator""_byte(char32_t) { return 0; }

int main() { return u8'A'_byte == 65 ? 0 : 1; }
