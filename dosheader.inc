;MS-DOS header
db 'MZ' 		;Magic number
db 080h, 000h	;Bytes on last page of file
db 001h, 000h	;Pages in file
db 000h, 000h	;Relocations
db 004h, 000h	;Size of header in paragraphs
db 010h, 000h	;Minimum extra paragraphs needed
db 0FFh, 0FFh	;Maximum extra paragraphs needed
db 000h, 000h 	;Initial (relative) SS value
db 040h, 001h	;Initial SP value
db 000h, 000h	;Checksum
db 000h, 000h	;Initial IP value
db 000h, 000h	;Initial (relative) CS value
db 040h, 000h	;File address of relocation table
db 000h, 000h	;Overlay number
db 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h ;Reserved words
db 000h, 000h	;OEM identifier (for e_oeminfo)
db 000h, 000h	;OEM information; e_oemid specific
db 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h
db 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h  ;Reserved words
db 080h, 000h, 000h, 000h ;File address of new exe header
