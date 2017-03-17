addi $1 $0 10#$1 = 10
addi $2 $0 20#$2 = 20
sw $2 6($1)#@16 = $12

addi $2 $0 25#$2 = 25
addi $1 $0 15#$1 = 15
sw $2 9($1)#@24 = $2

lw $3 9($1)#$3 = @24

beq $2 $3 TheWitcher3#beq
addu $4 $2 $2 #$4 = $2 + $2
addi $3 $2 3
addi $6 $1 12
TheWitcher3: addu $5 $4 $2#branch

subu $5 $2 $3#$5 = $2 - $3
jal MetalGearSolidV #j and l
addu $5 $3 $4#5 = $3 + 44

ori $2 $5 13
addi $31 $0 0
bgtz $2 FallOut4#bgtz is in ID but the $2 appea
addi $6 $1 8
addu $7 $6 $2 
FallOut4: lui $8 4
sw $8 32($0)#
MetalGearSolidV: ori $4 $5 20

addi $8 $3 30
lw $5 32($0)

jr $31
nop
 
addi $6 $0 12336
jr $6#
