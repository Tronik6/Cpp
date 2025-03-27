;TASK 1
.686
.model flat, C

.stack 1000h


.data
a DD 3
b DD 5



.code
main proc

mov eax, [a]
add eax, [b]



main endp
end main
.end
