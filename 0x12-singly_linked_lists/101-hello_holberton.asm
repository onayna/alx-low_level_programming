section .data
    hello db "Hello, Holberton,", 0
    format db "%s", 0

section .text
    global main
    extern printf

main:
    push rbp                ; Preserve the base pointer
    mov rdi, format         ; Load the format string
    lea rsi, [hello]        ; Load the address of the hello string
    call printf             ; Call printf function
    pop rbp                 ; Restore the base pointer
    ret                     ; Return from main






