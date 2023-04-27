section .data
    message db 'Hello, Holberton', 0x0a, 0x00 ; message to be printed

section .text
    global main ; program entry point
    extern printf ; reference to the printf function

main:
    push message ; push message address onto the stack
    call printf ; call printf with the message as argument
    add rsp, 8 ; adjust the stack pointer after the call
    xor eax, eax ; set the return value to 0
    ret ; exit the program

