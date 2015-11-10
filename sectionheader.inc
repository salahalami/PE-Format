db '.data', 0, 0, 0		;Name
db 00Eh, 000h, 000h, 000h	;Misc 
db 000h, 010h, 000h, 000h	;VirtualAddress
db 000h, 002h, 000h, 000h	;SizeOfRawData
db 000h, 002h, 000h, 000h 	;PointerToRawData
db 000h, 000h, 000h, 000h	;PointerToRelocations
db 000h, 000h, 000h, 000h	;PointerToLinenumbers
db 000h, 000h	;NumberOfRelocations
db 000h, 000h	;NumberOfLinenumbers
db 040h, 000h, 000h, 0C0h 	;Characteristics

db '.code', 0, 0, 0		;Name
db 013h, 000h, 000h, 000h	;Misc 
db 000h, 020h, 000h, 000h 	;VirtualAddress
db 000h, 002h, 000h, 000h	;SizeOfRawData
db 000h, 004h, 000h, 000h 	;PointerToRawData
db 000h, 000h, 000h, 000h	;PointerToRelocations
db 000h, 000h, 000h, 000h	;PointerToLinenumbers
db 000h, 000h	;NumberOfRelocations
db 000h, 000h	;NumberOfLinenumbers
db 020h, 000h, 000h, 060h 	;Characteristics

db '.idata', 0, 0		;Name
db 092h, 000h, 000h, 000h	;Misc 
db 000h, 030h, 000h, 000h 	;VirtualAddress
db 000h, 002h, 000h, 000h	;SizeOfRawData
db 000h, 006h, 000h, 000h  	;PointerToRawData
db 000h, 000h, 000h, 000h	;PointerToRelocations
db 000h, 000h, 000h, 000h	;PointerToLinenumbers
db 000h, 000h	;NumberOfRelocations
db 000h, 000h	;NumberOfLinenumbers
db 040h, 000h, 000h, 040h 	;Characteristics

db 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h 
