asm(".section .text.module_default\nret\n"
    ".section .data.module_default\n.byte 0x21\n"
    ".section .rodata.module_default\n.byte 0x22\n"
    ".section .module_default\n.byte 0x23\n"
    ".section .module_reopened,\"a\"\n.byte 0x24\n"
    ".data\n.section .module_reopened\n.byte 0x25\n");
