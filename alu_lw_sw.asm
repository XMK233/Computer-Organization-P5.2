addi $1 $1 12
addi $2 $2 24
addi $3 $3 15
#testings of ALU instruments, they are very same, so gathered as one kind
subu $1 $2 $3
addu $4 $1 $2# r-m-rs mem, rs
subu $1 $2 $3
addu $4 $2 $1#r-m-rt, mem, rt
addu $1 $2 $3
addu $5 $3 $2
subu $6 $1 $2#r-w-rs
addu $1 $3 $4
ori $6 $2 20
subu $7 $5 $6#r-w-rt
addi $8 $6 20
addi $9 $8 0
beq $8 $9 kengdie
addu $1 $2 $1
addi $2 $3 1515462135
kengdie: ori $6 $6 1#ALU-beq, rt, mem
addu $2 $3 $4
addi $10 $2 0
beq $10 $2 heheda
nop
subu $2 $3 $1
heheda: lui $6 12#ALU-beq, rs, mem
sw $4 ($16)
addi $11 $0 12
lw $1 4($11)#alu-lw, mem, rt
lw $2 ($16)
subu $3 $2 $1
lw $4 ($16)
addu $5 $1 $4#lw-alu, mem, rt & rs
addu $9 $0 $12
nop
lw $1 4($11)#alu-lw wb rt
addu $8 $9 $2
addi $4 $0 28
sw $8 ($4)#alu-sw mem rt
addu $8 $9 $2
sw $8 ($4)#alu-sw mem, rs
addi $11 $0 12
sw $3 ($11)
lw $9 ($11)
addu $8 $9 $3#lw-alu mem rs








