extern "C" {
    static int add_from_asm(int value) __attribute__((used));
    static int add_from_asm(int value) { return value + 5; }
}

asm(".pushsection .text\n"
    ".globl call_file_asm\n"
    ".type call_file_asm,@function\n"
    "call_file_asm:\n"
    "jmp add_from_asm\n"
    ".size call_file_asm,.-call_file_asm\n"
    ".popsection\n");
