nop
addi $5 $5 12328
j start
addi $1 $1 1#$1 = 1
addi $2 $2 2#$2 = 2
jal second
addi $3 $3 3#$3 = 3
lui $4  4#$4 = 262144
j third
addu $5 $2 $1#$5 = 3
subu $6 $4 $3#$6 = 262141
addu $7 $2 $4#$7 = 262146
subu $8 $4 $5#$8 = 262141
ori $9 $8 9#$9 = 262141
j fourth
sw $1 ($0)#@0 = 1
sw $2 4($0)#@4 = 2 

sw $3 8($0)#@8 = 3
sw $4 12($0)#@12 = 262144
sw $5 16($0)#@16 = 3 
j end
sw $7 20($0)#@20 = 262146
sw $8 24($0)#@24 = 262141

#testing jr
start: addi $1 $0 12304#$1 = 12304
jr $1#to line 5
second: nop
jr $31#to line 8
sw $5 8($0)#save $5 to @8
third: lw $2 8($0)
jr $2#load instruction and jr
fourth: addi $1 $0 50#$1 = 50
addu $5 $5 $1#$5 = 12356
jr $5#to line 19
end: nop
