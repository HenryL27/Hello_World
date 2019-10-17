    .data
msg:    .asciiz "Hello world! -- MIPS32 Assembly --\n"

    .globl main
    .text

main:   li		$v0, 4 		# print
        la		$a0, msg	# msg
        syscall
        jr		$ra			# return
        
        
