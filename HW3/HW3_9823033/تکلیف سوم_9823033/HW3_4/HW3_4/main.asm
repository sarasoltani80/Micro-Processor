
.MACRO ADDOPERAND
	
	IN R16, @0
	IN R17, @1
	ADD R16, R17
	OUT @2, R16

.ENDMACRO

ADDOPERAND 0x16, 0x19, 0x15

NOP
