; Define constants
section .data
    msg: db "Hello, Holberton", 10 ; The message to print
    len: equ $ - msg ; The length of the message

; Define the main function
section .text
    global main ; Declare main as global

main:
    ; Call printf with msg and len as arguments
    mov rdi, msg ; First argument: the message
    mov rsi, len ; Second argument: the length
    extern printf ; Declare printf as external
    call printf ; Call printf

    ; Exit the program with 0 as return value
    mov rax, 60 ; System call number for exit
    mov rdi, 0 ; Return value
    syscall ; Invoke the system call
