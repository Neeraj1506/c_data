	.file	"iteration.c"
	.section	.rodata
	.align 8
.LC0:
	.string	"enter any value to demonstrate  "
.LC1:
	.string	"%d"
	.align 8
.LC2:
	.string	"enter how many times you want to print: "
	.text
.globl main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$.LC0, %edi
	call	puts
	movl	$.LC1, %eax
	leaq	-4(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC2, %eax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$.LC1, %eax
	leaq	-8(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	fun_whi
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	fun_dwhi
	movl	$0, %eax
	leave
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC3:
	.string	"%d prints %d times in while loop \n"
	.text
.globl fun_whi
	.type	fun_whi, @function
fun_whi:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	$1, -4(%rbp)
	jmp	.L4
.L5:
	movl	$.LC3, %eax
	movl	-4(%rbp), %edx
	movl	-20(%rbp), %ecx
	movl	%ecx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	addl	$1, -4(%rbp)
.L4:
	movl	-4(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L5
	leave
	ret
	.cfi_endproc
.LFE1:
	.size	fun_whi, .-fun_whi
	.section	.rodata
	.align 8
.LC4:
	.string	"%d prints %d times in do-while loop \n"
	.text
.globl fun_dwhi
	.type	fun_dwhi, @function
fun_dwhi:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	$0, -4(%rbp)
.L8:
	addl	$1, -4(%rbp)
	movl	$.LC4, %eax
	movl	-4(%rbp), %edx
	movl	-20(%rbp), %ecx
	movl	%ecx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	-4(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L8
	leave
	ret
	.cfi_endproc
.LFE2:
	.size	fun_dwhi, .-fun_dwhi
	.ident	"GCC: (Ubuntu/Linaro 4.4.7-8ubuntu1) 4.4.7"
	.section	.note.GNU-stack,"",@progbits
