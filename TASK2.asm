;TASK 2
.686
.model flat, C

.stack 1000h


.data
 A dd 13     ; Dividendo
 B dd 4      ; Divisor
 quo dd 0    ; Cociente
 rem dd 0    ; Resto


.code
main proc

 mov eax, A
 mov ebx, B
 mov ecx, 0

division_loop:

 cmp eax, ebx
 jl end_div
 sub eax, ebx
 inc ecx
 jmp division_loop

end_div:

 mov quo, ecx
 mov rem, eax


main endp
end main
.end
