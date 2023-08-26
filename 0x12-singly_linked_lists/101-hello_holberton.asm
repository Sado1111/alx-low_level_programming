section .data
hello_msg db "Hello, Holberton", 0

section .text
global main

main:
mov rdi, hello_msg
call printf
ret
