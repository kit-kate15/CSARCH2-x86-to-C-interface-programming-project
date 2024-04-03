; LBYARCH XX22
; Rojo, Kate Lynn
; Romblon, Kathleen Mae

;	Dot Product Example
;   v1 = (2, 5, 4)
;   v2 = (3, 2, 1)
;   r = (2 * 3) + (5 * 2) + (4 * 1) = 6 + 10 + 4 = 20

; assembly part using x86-64

section .data
zero dq 0.0

section .text
bits 64
default rel

global dotprod

dotprod:
	push rbp
	mov rbp, rsp
	; rcx -> vector a ; rdx -> vector b ; r8 -> size
	xor rax, rax			; counter

	movsd xmm0, [zero]

DOT_PROD:
	cmp rax, r8
	jge END

	movsd xmm5, qword[rcx + rax*8]
	movsd xmm6, qword[rdx + rax*8]

	vmulsd xmm4, xmm5, xmm6
	addsd xmm0, xmm4

	inc rax
	jmp DOT_PROD
	
END:
	pop rbp
	ret
