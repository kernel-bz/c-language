	.file	"ch0608_union.c"
	.section	.rodata
.LC0:
	.string	"st=%d, un=%d\n"
.LC1:
	.string	"%d,%d,%d,%d\n"
	.text
.globl main
	.type	main,@function
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	andl	$-16, %esp
	movl	$0, %eax
	subl	%eax, %esp
	subl	$4, %esp
	pushl	$4
	pushl	$16
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	subl	$12, %esp
	pushl	$4
	pushl	$4
	pushl	$4
	pushl	$1
	pushl	$.LC1
	call	printf
	addl	$32, %esp
	movl	$0, %eax
	leave
	ret
.Lfe1:
	.size	main,.Lfe1-main
	.ident	"GCC: (GNU) 3.2.2 20030222 (Red Hat Linux 3.2.2-5)"
