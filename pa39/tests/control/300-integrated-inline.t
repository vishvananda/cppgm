asm(".macro increment reg, amount\n"
    "add \\reg, \\reg, #\\amount\n"
    ".endm");

extern "C" const unsigned short asm_value;
extern "C" const __INTPTR_TYPE__ asm_delta;
int anchor = 1;

__attribute__((noinline)) void emit_value()
{
    asm volatile(".pushsection .rodata\n"
                 ".balign 2\n"
                 ".globl asm_value\n"
                 "asm_value: .hword %c0\n"
                 ".balign 8\n"
                 ".globl asm_delta\n"
                 "asm_delta: .quad %c1 - .\n"
                 ".popsection" : : "i"(17), "i"(&anchor));
}

int adjust(int value)
{
    if (value < 0)
        asm goto("cbnz %w0, %l[negative]" : : "r"(value) : : negative);
    asm volatile("b 1f\n"
                 "add %w0, %w0, #100\n"
                 "1: increment %w0, 3\n"
                 "cbz %w0, 1b" : "+r"(value));
negative:
    return value;
}

int main()
{
    emit_value();
    const auto address = reinterpret_cast<__UINTPTR_TYPE__>(&asm_delta) + asm_delta;
    return address == reinterpret_cast<__UINTPTR_TYPE__>(&anchor) && asm_value == 17 && adjust(-13) == -13 && adjust(21) == 24 ? 0 : 1;
}
