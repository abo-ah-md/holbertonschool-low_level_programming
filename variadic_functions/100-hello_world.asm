_start:

mov rax, 1
mov rdi, 1
mov rsi, msg
mov rdx, len

syscall

mov rax, 60
xor rdi, rdi
syscall
