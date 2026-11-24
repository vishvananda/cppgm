#define REGISTER(name) % name

.text
.globl load_array_element
.type load_array_element,@function
load_array_element:
    movl (example_array + 4)(REGISTER(RIP)), REGISTER(eax)
    ret

.globl system_instructions
.type system_instructions,@function
system_instructions:
    movq REGISTER(gs):(example_array + 8)(REGISTER(rip)), REGISTER(rax)
    pushfq
    popfq
    rdmsr
    wrmsr
    clac
    stac
    swapgs
    iretq

.data
example_array:
    .long 23, 47, 0, 0
.section .note.GNU-stack,"",@progbits
