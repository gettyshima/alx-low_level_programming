section .text
	global_start

	_start:
	move edx,len
	move ecx,msg
	move ebx,1
	move eax,4
	int 0x80

	move eax,1
	int 0x80

	section .data
	msg db 'Hello Holberton', 0xa
	len equ $ -msg
