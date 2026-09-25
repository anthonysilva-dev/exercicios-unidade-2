	.file	"q5.c"
	.text
	.section .rdata,"dr"
	.align 8
.LC0:
	.ascii "Digite, respectivamente, a base e a altura: \0"
.LC1:
	.ascii "%f %f\0"
.LC2:
	.ascii "\303\201rea: %.2f\12\0"
.LC3:
	.ascii "Per\303\255metro: %.2f\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-8(%rbp), %rdx
	leaq	-4(%rbp), %rax
	leaq	.LC1(%rip), %rcx
	movq	%rdx, %r8
	movq	%rax, %rdx
	call	scanf
	movss	-4(%rbp), %xmm1
	movss	-8(%rbp), %xmm0
	mulss	%xmm1, %xmm0
	cvtss2sd	%xmm0, %xmm0
	movapd	%xmm0, %xmm1
	movapd	%xmm1, %xmm0
	movq	%xmm1, %rdx
	leaq	.LC2(%rip), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	movss	-4(%rbp), %xmm1
	movss	-8(%rbp), %xmm0
	addss	%xmm1, %xmm0
	addss	%xmm0, %xmm0
	cvtss2sd	%xmm0, %xmm0
	movapd	%xmm0, %xmm1
	movapd	%xmm1, %xmm0
	movq	%xmm1, %rdx
	leaq	.LC3(%rip), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev3, Built by MSYS2 project) 16.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
