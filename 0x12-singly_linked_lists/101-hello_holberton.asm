section .data
    hello db "Hello, Holberton,", 0
    format db "%s", 0

section .text
    global main
    extern printf

main:
    push rdi               ; Preserve registers
    push rsi
    push rdx
    push rcx
    push r8
    push r9

    mov rdi, format        ; Load the format string
    lea rsi, [hello]       ; Load the address of the hello string
    call printf           ; Call printf function

    pop r9                ; Restore registers
    pop r8
    pop rcx
    pop rdx
    pop rsi
    pop rdi

    ret                    ; Return from main

