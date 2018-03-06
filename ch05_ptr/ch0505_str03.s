	.file	"ch0505_str03.c"
	.section	.rodata
.LC0:
	.string	"message1"
.LC1:
	.string	"message12"
.LC2:
	.string	"message123"
.LC3:
	.string	"%d: %X,%X,%s\n"
	.text
.globl message_out
	.type	message_out,@function
message_out:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	$0, -4(%ebp)
	cmpl	$0, 8(%ebp)
	jne	.L2
	movl	$.LC0, -4(%ebp)
	jmp	.L3
.L2:
	cmpl	$1, 8(%ebp)
	jne	.L4
	movl	$.LC1, -4(%ebp)
	jmp	.L3
.L4:
	cmpl	$2, 8(%ebp)
	jne	.L3
	movl	$.LC2, -4(%ebp)
.L3:
	cmpl	$0, -4(%ebp)
	je	.L1
	subl	$12, %esp
	pushl	-4(%ebp)
	pushl	-4(%ebp)
	leal	-4(%ebp), %eax
	pushl	%eax
	pushl	8(%ebp)
	pushl	$.LC3
	call	printf
	addl	$32, %esp
.L1:
	leave
	ret
.Lfe1:
	.size	message_out,.Lfe1-message_out
.globl message_out2
	.type	message_out2,@function
message_out2:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	$.LC0, -4(%ebp)
	movl	$.LC1, -8(%ebp)
	movl	$.LC2, -12(%ebp)
	movl	$0, -16(%ebp)
	cmpl	$0, 8(%ebp)
	jne	.L9
	movl	-4(%ebp), %eax
	movl	%eax, -16(%ebp)
	jmp	.L10
.L9:
	cmpl	$1, 8(%ebp)
	jne	.L11
	movl	-8(%ebp), %eax
	movl	%eax, -16(%ebp)
	jmp	.L10
.L11:
	cmpl	$2, 8(%ebp)
	jne	.L10
	movl	-12(%ebp), %eax
	movl	%eax, -16(%ebp)
.L10:
	cmpl	$0, -16(%ebp)
	je	.L8
	subl	$12, %esp
	pushl	-16(%ebp)
	pushl	-16(%ebp)
	leal	-16(%ebp), %eax
	pushl	%eax
	pushl	8(%ebp)
	pushl	$.LC3
	call	printf
	addl	$32, %esp
.L8:
	leave
	ret
.Lfe2:
	.size	message_out2,.Lfe2-message_out2
.globl message_out3
	.type	message_out3,@function
message_out3:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	$0, -4(%ebp)
	cmpl	$0, 8(%ebp)
	jne	.L16
	movl	$.LC0, -4(%ebp)
	jmp	.L17
.L16:
	cmpl	$1, 8(%ebp)
	jne	.L18
	movl	$.LC1, -4(%ebp)
	jmp	.L17
.L18:
	cmpl	$2, 8(%ebp)
	jne	.L17
	movl	$.LC2, -4(%ebp)
.L17:
	cmpl	$0, -4(%ebp)
	je	.L15
	subl	$12, %esp
	pushl	-4(%ebp)
	pushl	-4(%ebp)
	leal	-4(%ebp), %eax
	pushl	%eax
	pushl	8(%ebp)
	pushl	$.LC3
	call	printf
	addl	$32, %esp
.L15:
	leave
	ret
.Lfe3:
	.size	message_out3,.Lfe3-message_out3
	.section	.rodata
.LC4:
	.string	"%X,%s\n"
.LC5:
	.string	"\nPress any key to end..."
	.text
.globl main
	.type	main,@function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	andl	$-16, %esp
	movl	$0, %eax
	subl	%eax, %esp
	subl	$12, %esp
	pushl	$0
	call	message_out
	addl	$16, %esp
	subl	$12, %esp
	pushl	$1
	call	message_out
	addl	$16, %esp
	subl	$12, %esp
	pushl	$2
	call	message_out
	addl	$16, %esp
	subl	$12, %esp
	pushl	$3
	call	message_out
	addl	$16, %esp
	subl	$12, %esp
	pushl	$0
	call	message_out2
	addl	$16, %esp
	subl	$12, %esp
	pushl	$1
	call	message_out2
	addl	$16, %esp
	subl	$12, %esp
	pushl	$2
	call	message_out2
	addl	$16, %esp
	subl	$12, %esp
	pushl	$3
	call	message_out2
	addl	$16, %esp
	subl	$12, %esp
	pushl	$0
	call	message_out3
	addl	$16, %esp
	subl	$12, %esp
	pushl	$1
	call	message_out3
	addl	$16, %esp
	subl	$12, %esp
	pushl	$2
	call	message_out3
	addl	$16, %esp
	subl	$12, %esp
	pushl	$3
	call	message_out3
	addl	$16, %esp
	subl	$4, %esp
	pushl	$.LC0
	pushl	$.LC0
	pushl	$.LC4
	call	printf
	addl	$16, %esp
	subl	$4, %esp
	pushl	$.LC1
	pushl	$.LC1
	pushl	$.LC4
	call	printf
	addl	$16, %esp
	subl	$4, %esp
	pushl	$.LC2
	pushl	$.LC2
	pushl	$.LC4
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$.LC5
	call	printf
	addl	$16, %esp
	call	getchar
	movl	$0, %eax
	leave
	ret
.Lfe4:
	.size	main,.Lfe4-main
	.ident	"GCC: (GNU) 3.2.2 20030222 (Red Hat Linux 3.2.2-5)"
