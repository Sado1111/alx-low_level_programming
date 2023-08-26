section .data
hello_msg db "Hello, Holberton", 0

section .text
global main
extern printf

main:
sub rsp, 8            ; Align the stack
mov rdi, hello_msg   ; Load the address of hello_msg into rdi
call printf          ; Call the printf function
add rsp, 8            ; Restore the stack
ret
