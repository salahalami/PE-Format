db 00Bh, 001h	;Magic
db 001h			;MajorLinkerVersion
db 047h			;MinorLinkerVersion
db 000h, 002h, 000h, 000h 	;SizeOfCode
db 000h, 004h, 000h, 000h	;SizeOfInitializedData
db 000h, 000h, 000h, 000h	;SizeOfUninitializedData
db 000h, 020h, 000h, 000h	;AddressOfEntryPoint
db 000h, 020h, 000h, 000h 	;BaseOfCode
db 000h, 010h, 000h, 000h	;BaseOfData
db 000h, 000h, 040h, 000h	;ImageBase
db 000h, 010h, 000h, 000h	;SectionAlignment
db 000h, 002h, 000h, 000h 	;FileAlignment
db 001h, 000h	;MajorOperatingSystemVersion
db 000h, 000h	;MinorOperatingSystemVersion
db 000h, 000h	;MajorImageVersion
db 000h, 000h	;MinorImageVersion
db 003h, 000h	;MajorSubsystemVersion
db 00Ah, 000h	;MinorSubsystemVersion
db 000h, 000h, 000h, 000h 	;Win32VersionValue
db 000h, 040h, 000h, 000h	;SizeOfImage
db 000h, 002h, 000h, 000h	;SizeOfHeaders
db 0B4h, 0A5h, 000h, 000h	;CheckSum
db 003h, 000h	;Subsystem
db 000h, 000h 	;DllCharacteristics
db 000h, 010h, 000h, 000h	;SizeOfStackReserve
db 000h, 010h, 000h, 000h	;SizeOfStackCommit
db 000h, 000h, 001h, 000h	;SizeOfHeapReserve
db 000h, 000h, 000h, 000h 	;SizeOfHeapCommit
db 000h, 000h, 000h, 000h	;LoaderFlags
db 010h, 000h, 000h, 000h	;NumberOfRvaAndSizes
%include 'datadirectory.inc'
