; LBYARCH XX22
; Rojo, Kate Lynn
; Romblon, Kathleen Mae

;	Dot Product Example
;   v1 = (2, 5, 4)
;   v2 = (3, 2, 1)
;   r = (2 * 3) + (5 * 2) + (4 * 1) = 6 + 10 + 4 = 20

; assembly part using x86-64

section .text
bits 64
default rel ; to handle address relocation

global dotprod

dotprod:
	vmulsd xmm3, xmm0, xmm1
	vaddsd xmm0, xmm3, xmm2
	ret
