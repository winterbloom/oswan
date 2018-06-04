	.file	"reed_solomon.c"
	.text
	.def	_pol_evaluate;	.scl	3;	.type	32;	.endef
_pol_evaluate:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	movl	%ecx, %edi
	pushl	%esi
	movl	%eax, %esi
	pushl	%ebx
	xorl	%eax, %eax
	xorl	%ebx, %ebx
L2:
	testl	%edx, %edx
	js	L11
	movzbl	(%esi,%edx), %ecx
	testb	%cl, %cl
	je	L3
	movzbl	1049088(%ecx), %ecx
	xorb	1048576(%ebx,%ecx), %al
L3:
	addl	%edi, %ebx
	leal	-255(%ebx), %ecx
	cmpl	$255, %ebx
	cmovge	%ecx, %ebx
	decl	%edx
	jmp	L2
L11:
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret
	.def	_gf_mul;	.scl	3;	.type	32;	.endef
_gf_mul:
	pushl	%ebp
	testb	%al, %al
	movl	%esp, %ebp
	je	L14
	testb	%dl, %dl
	je	L14
	movzbl	%al, %eax
	movzbl	%dl, %edx
	movzbl	1049088(%eax), %ecx
	movzbl	1049088(%edx), %eax
	movb	1048576(%ecx,%eax), %al
	jmp	L12
L14:
	xorl	%eax, %eax
L12:
	popl	%ebp
	ret
	.def	_gauss_solve.constprop.2;	.scl	3;	.type	32;	.endef
_gauss_solve.constprop.2:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$36, %esp
	movl	%eax, -28(%ebp)
	movl	%edx, -16(%ebp)
	movl	%ecx, -32(%ebp)
	xorl	%eax, %eax
L17:
	cmpl	-28(%ebp), %eax
	jge	L43
	movl	$-1, 1049344(,%eax,4)
	incl	%eax
	jmp	L17
L43:
	xorl	%eax, %eax
L19:
	cmpl	-16(%ebp), %eax
	jge	L44
	movl	-32(%ebp), %edx
	movb	$0, (%edx,%eax)
	incl	%eax
	jmp	L19
L44:
	movl	-16(%ebp), %eax
	xorl	%ebx, %ebx
	movl	$0, -20(%ebp)
	incl	%eax
	movl	%eax, -24(%ebp)
	movl	%eax, -44(%ebp)
L21:
	movl	-20(%ebp), %ecx
	cmpl	%ecx, -28(%ebp)
	jle	L45
	xorl	%esi, %esi
L32:
	cmpl	%esi, -16(%ebp)
	jle	L22
	cmpb	$0, 1052672(%esi,%ebx)
	jne	L25
	incl	%esi
	jmp	L32
L22:
	je	L31
L25:
	movl	-20(%ebp), %eax
	movl	$255, %edx
	xorl	%edi, %edi
	movl	%esi, 1049344(,%eax,4)
	movzbl	1052672(%esi,%ebx), %eax
	movzbl	1049088(%eax), %eax
	subl	%eax, %edx
	movzbl	1048576(%edx), %eax
	movl	%eax, -36(%ebp)
	jmp	L24
L31:
	incl	-20(%ebp)
	addl	-24(%ebp), %ebx
	jmp	L21
L24:
	cmpl	%edi, -16(%ebp)
	jl	L46
	movzbl	1052672(%edi,%ebx), %eax
	movl	-36(%ebp), %edx
	incl	%edi
	call	_gf_mul
	movb	%al, 1052671(%edi,%ebx)
	jmp	L24
L46:
	movl	-20(%ebp), %eax
	incl	%eax
	movl	%eax, -36(%ebp)
	movl	-24(%ebp), %eax
	leal	(%ebx,%eax), %ecx
L27:
	movl	-36(%ebp), %edi
	cmpl	%edi, -28(%ebp)
	je	L31
	movzbl	1052672(%esi,%ecx), %eax
	xorl	%edi, %edi
	movl	%eax, -40(%ebp)
L28:
	cmpl	%edi, -16(%ebp)
	jl	L47
	movl	%ecx, -48(%ebp)
	movzbl	1052672(%edi,%ebx), %eax
	movl	-40(%ebp), %edx
	call	_gf_mul
	movl	-48(%ebp), %ecx
	xorb	%al, 1052672(%edi,%ecx)
	incl	%edi
	jmp	L28
L47:
	incl	-36(%ebp)
	addl	-44(%ebp), %ecx
	jmp	L27
L45:
	movl	-28(%ebp), %ebx
	movl	-24(%ebp), %esi
	movl	-16(%ebp), %eax
	decl	%ebx
	imull	%ebx, %esi
	notl	%eax
	movl	%eax, -28(%ebp)
L33:
	testl	%ebx, %ebx
	js	L48
	movl	1049344(,%ebx,4), %eax
	movl	%eax, -20(%ebp)
	incl	%eax
	je	L34
	xorl	%edi, %edi
	xorl	%ecx, %ecx
L35:
	cmpl	%ecx, -16(%ebp)
	jle	L49
	movl	-32(%ebp), %eax
	movzbl	(%eax,%ecx), %edx
	movzbl	1052672(%ecx,%esi), %eax
	movl	%ecx, -24(%ebp)
	call	_gf_mul
	movl	-24(%ebp), %ecx
	xorl	%eax, %edi
	incl	%ecx
	jmp	L35
L49:
	movl	-16(%ebp), %edx
	movl	%edi, %eax
	movl	-20(%ebp), %ecx
	movl	-32(%ebp), %edi
	xorb	1052672(%esi,%edx), %al
	movb	%al, (%edi,%ecx)
L34:
	decl	%ebx
	addl	-28(%ebp), %esi
	jmp	L33
L48:
	addl	$36, %esp
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret
	.globl	_grub_reed_solomon_recover
	.def	_grub_reed_solomon_recover;	.scl	2;	.type	32;	.endef
_grub_reed_solomon_recover:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$68, %esp
	testl	%ecx, %ecx
	movl	%edx, -28(%ebp)
	movl	%ecx, -40(%ebp)
	je	L50
	movb	$0, 1049088
	movb	$1, %dl
	xorl	%ebx, %ebx
L54:
	movzbl	%dl, %ecx
	movb	%dl, 1048576(%ebx)
	movb	%dl, 1048831(%ebx)
	leal	(%edx,%edx), %esi
	movb	%bl, 1049088(%ecx)
	addl	%ecx, %ecx
	xorl	$29, %ecx
	testb	%dl, %dl
	cmovns	%esi, %ecx
	incl	%ebx
	cmpl	$255, %ebx
	movb	%cl, %dl
	jne	L54
	movl	-28(%ebp), %edi
	movl	%eax, -52(%ebp)
	addl	%eax, %edi
	movl	%edi, -56(%ebp)
L55:
	cmpl	$0, -28(%ebp)
	je	L50
	movl	-28(%ebp), %ecx
	addl	-40(%ebp), %ecx
	cmpl	$102400, %ecx
	jbe	L86
	imull	$200, -28(%ebp), %eax
	xorl	%edx, %edx
	divl	%ecx
	xorl	%edx, %edx
	sall	$9, %eax
	movl	%eax, -24(%ebp)
	imull	$200, -40(%ebp), %eax
	divl	%ecx
	sall	$9, %eax
	movl	%eax, -44(%ebp)
	jmp	L56
L86:
	movl	-40(%ebp), %eax
	movl	%eax, -44(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, -24(%ebp)
L56:
	movl	-24(%ebp), %eax
	addl	$511, %eax
	movl	%eax, -64(%ebp)
	movl	-52(%ebp), %eax
	movl	%eax, -48(%ebp)
	movl	-24(%ebp), %eax
	decl	%eax
	movl	%eax, -72(%ebp)
	movl	-64(%ebp), %eax
	movl	%eax, -36(%ebp)
	movl	-44(%ebp), %eax
	subl	-24(%ebp), %eax
	movl	%eax, -76(%ebp)
L59:
	movl	-76(%ebp), %ebx
	addl	-36(%ebp), %ebx
	movl	%ebx, %eax
	shrl	$9, %eax
	movl	%eax, -16(%ebp)
	movl	-36(%ebp), %eax
	shrl	$9, %eax
	movl	%eax, -32(%ebp)
	je	L57
	xorl	%eax, %eax
	cmpl	$0, -16(%ebp)
	jne	L58
L57:
	decl	-36(%ebp)
	incl	-48(%ebp)
	movl	-36(%ebp), %edi
	cmpl	%edi, -72(%ebp)
	jne	L59
	movl	-24(%ebp), %edi
	movl	-44(%ebp), %esi
	addl	%edi, -52(%ebp)
	addl	%esi, -56(%ebp)
	subl	%edi, -28(%ebp)
	subl	%esi, -40(%ebp)
	jmp	L55
L58:
	cmpl	-32(%ebp), %eax
	jge	L96
	movl	-48(%ebp), %esi
	movl	%eax, %edx
	incl	%eax
	sall	$9, %edx
	movb	(%esi,%edx), %dl
	movb	%dl, 1052159(%eax)
	jmp	L58
L96:
	movl	-64(%ebp), %edx
	subl	-36(%ebp), %edx
	xorl	%eax, %eax
	addl	-56(%ebp), %edx
L62:
	cmpl	-16(%ebp), %eax
	jge	L97
	movl	%eax, %ecx
	movl	-32(%ebp), %esi
	incl	%eax
	sall	$9, %ecx
	movb	(%edx,%ecx), %cl
	movb	%cl, 1052159(%eax,%esi)
	jmp	L62
L97:
	shrl	$10, %ebx
	movl	-32(%ebp), %eax
	xorl	%esi, %esi
	movl	%ebx, -20(%ebp)
	movl	-16(%ebp), %ebx
	leal	-1(%eax,%ebx), %edi
L64:
	movl	%esi, %ecx
	movl	%edi, %edx
	movl	$1052160, %eax
	call	_pol_evaluate
	incl	%esi
	movb	%al, 1051903(%esi)
	cmpl	%esi, -16(%ebp)
	jg	L64
	movl	-32(%ebp), %eax
	addl	-16(%ebp), %eax
	movl	%eax, -60(%ebp)
	decl	%eax
	movl	%eax, -68(%ebp)
	xorl	%eax, %eax
L66:
	cmpb	$0, 1051904(%eax)
	jne	L65
	incl	%eax
	cmpl	%eax, -16(%ebp)
	jg	L66
L65:
	cmpl	%eax, -16(%ebp)
	je	L67
	movl	-20(%ebp), %eax
	xorl	%ecx, %ecx
	xorl	%edx, %edx
	leal	1(%eax), %esi
	jmp	L68
L67:
	xorl	%eax, %eax
	jmp	L69
L70:
	movb	1051904(%eax,%edx), %bl
	incl	%eax
	movb	%bl, 1052671(%eax,%ecx)
	cmpl	-20(%ebp), %eax
	jle	L70
	incl	%edx
	addl	%esi, %ecx
L68:
	xorl	%eax, %eax
	cmpl	-20(%ebp), %edx
	jl	L70
L71:
	cmpl	%eax, -20(%ebp)
	jle	L98
	movb	$0, 1050368(%eax)
	incl	%eax
	jmp	L71
L98:
	movl	-20(%ebp), %edx
	movl	$1050368, %ecx
	xorl	%esi, %esi
	xorl	%edi, %edi
	movl	%edx, %eax
	call	_gauss_solve.constprop.2
	movl	-20(%ebp), %ebx
	decl	%ebx
L73:
	cmpl	-60(%ebp), %esi
	jge	L99
	movl	$255, %ecx
	movl	%ebx, %edx
	movl	$1050368, %eax
	subl	%esi, %ecx
	call	_pol_evaluate
	cmpb	1048576(%esi), %al
	jne	L74
	movb	%al, 1050624(%edi)
	movl	-68(%ebp), %eax
	movl	%edi, %edx
	incl	%edi
	subl	%esi, %eax
	movl	%eax, 1050880(,%edx,4)
L74:
	incl	%esi
	jmp	L73
L99:
	xorl	%eax, %eax
L76:
	cmpl	%eax, %edi
	je	L100
	movb	$1, 1052672(%eax)
	incl	%eax
	jmp	L76
L100:
	movb	1051904, %al
	xorl	%ecx, %ecx
	movl	$1, %esi
	movb	%al, 1052672(%edi)
	leal	1(%edi), %eax
	movl	%eax, -68(%ebp)
	leal	(%edi,%edi), %eax
	movl	%eax, -60(%ebp)
L78:
	cmpl	%esi, -16(%ebp)
	jle	L80
	movl	-68(%ebp), %eax
	xorl	%ebx, %ebx
	addl	%ecx, %eax
	movl	%eax, -20(%ebp)
L81:
	cmpl	%ebx, %edi
	je	L101
	movzbl	1052672(%ebx,%ecx), %edx
	movl	%ecx, -80(%ebp)
	incl	%ebx
	movzbl	1050623(%ebx), %eax
	call	_gf_mul
	movl	-20(%ebp), %edx
	movb	%al, 1052671(%ebx,%edx)
	movl	-80(%ebp), %ecx
	jmp	L81
L101:
	movb	1051904(%esi), %al
	movl	-60(%ebp), %ebx
	incl	%esi
	movb	%al, 1052673(%ebx)
	movl	-68(%ebp), %ebx
	movl	-20(%ebp), %ecx
	addl	%ebx, -60(%ebp)
	jmp	L78
L80:
	movl	-16(%ebp), %eax
	movl	$1052416, %ecx
	movl	%edi, %edx
	call	_gauss_solve.constprop.2
	xorl	%eax, %eax
L82:
	cmpl	%eax, %edi
	je	L67
	movl	1050880(,%eax,4), %edx
	movb	1052416(%eax), %cl
	incl	%eax
	xorb	%cl, 1052160(%edx)
	jmp	L82
L69:
	movl	%eax, %edx
	movb	1052160(%eax), %cl
	incl	%eax
	sall	$9, %edx
	cmpl	%eax, -32(%ebp)
	movl	-48(%ebp), %edi
	movb	%cl, (%edi,%edx)
	jg	L69
	jmp	L57
L50:
	addl	$68, %esp
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret
	.ident	"GCC: (GNU) 6.4.0"
