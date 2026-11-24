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
    cli
    sti
    hlt
    leaveq
    lgdt (%rax)
    lidt (%r8)
    sgdt (%eax)
    sidt %gs:(%rax)
    invlpg (%rdx)
    movq %cr3,%rax
    movq %rdi,%cr3
    movq %cr8,%r9
    movq %r8,%cr8
    movq %dr6,%r12
    movq %r13,%dr7
    movq %ds,%rax
    movl %fs,%ecx
    movw %gs,(%rax)
    movw %ax,%ds
    movl %ecx,%fs
    movw (%rbx),%gs
    inb %dx,%al
    inw $42,%ax
    inl %dx,%eax
    outb %al,$42
    outw %ax,%dx
    outl %eax,%dx
    movntiq %rax,(%rbx)
    movntil %ecx,12(%rdx)
    iretq

.data
example_array:
    .long 23, 47, 0, 0
.section .note.GNU-stack,"",@progbits
