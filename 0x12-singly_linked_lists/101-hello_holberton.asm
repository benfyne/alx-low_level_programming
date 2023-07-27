; Declare some constants
section .rodata
    msg: db "Hello, Holberton", 10 ; The message to print, followed by newline
    len: equ $ - msg ; The length of the message
    format: db "%s", 0 ; The format string for printf

; Declare the main function
section .text
    global main ; Make the main function visible to the linker

main:
    ; Call the printf function with the message as an argument
    mov rdi, format ; First argument: the format string
    mov rsi, msg ; Second argument: the message to print
    mov rax, 0 ; Indicate that there are no floating-point arguments
    call printf ; Call the printf function

    ; Exit the program with 0 as the return code
    mov rdi, 0 ; First argument: the return code
    mov rax, 60 ; The system call number for exit
    syscall ; Invoke the system call
