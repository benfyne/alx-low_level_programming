; Declare some constants
section .rodata
    msg: db "Hello, Holberton", 10 ; The message to print, followed by newline
    len: equ $ - msg ; The length of the message

; Declare the main function
section .text
    global main ; Make the main function visible to the linker

main:
    ; Call the write system call with the message and its length as arguments
    mov rdi, 1 ; First argument: the file descriptor (stdout)
    mov rsi, msg ; Second argument: the message to print
    mov rdx, len ; Third argument: the length of the message
    mov rax, 1 ; The system call number for write
    syscall ; Invoke the system call

    ; Exit the program with 0 as the return code
    mov rdi, 0 ; First argument: the return code
    mov rax, 60 ; The system call number for exit
    syscall ; Invoke the system call
