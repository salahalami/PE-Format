%include 'dosheader.inc'
%include 'dosstub.inc'
%include 'ntheaders.inc'
%include 'sectionheader.inc'

data:
db 'Hello World!', 00Ah, 000h, 000h, 000h 
times 200h-$+data db 0

code:
db 68h, 00h, 10h, 40h, 00h, 0FFh, 15h, 80h, 30h, 40h, 00h, 6Ah, 00h, 0FFh, 15h, 60h, 30h, 40h, 00h
times 200h-$+code db 0

idata:
db 058h, 030h, 000h, 000h	;OriginalFirstThunk
db 000h, 000h, 000h, 000h	;TimeDateStamp
db 000h, 000h, 000h, 000h	;ForwarderChain
db 03Ch, 030h, 000h, 000h 	;Name
db 060h, 030h, 000h, 000h	;FirstThunk

db 078h, 030h, 000h, 000h	;OriginalFirstThunk
db 000h, 000h, 000h, 000h	;TimeDateStamp
db 000h, 000h, 000h, 000h 	;ForwarderChain
db 04Ah, 030h, 000h, 000h 	;Name
db 080h, 030h, 000h, 000h	;FirstThunk

db 000h, 000h, 000h, 000h
db 000h, 000h, 000h, 000h 
db 000h, 000h, 000h, 000h
db 000h, 000h, 000h, 000h
db 000h, 000h, 000h, 000h

db 'kernel32.dll', 0, 0
db 'msvcrt.dll', 0, 0, 0, 0
db 068h, 030h, 000h, 000h, 000h, 000h, 000h, 000h 
db 068h, 030h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 045h, 078h, 069h, 074h, 050h, 072h 
db 06Fh, 063h, 065h, 073h, 073h, 000h, 000h, 000h, 088h, 030h, 000h, 000h, 000h, 000h, 000h, 000h 
db 088h, 030h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 000h, 070h, 072h, 069h, 06Eh, 074h, 066h 
times 200h-$+idata db 0
