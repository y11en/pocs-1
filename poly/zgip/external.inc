; Don't modify by hand, regenerate with make.py

%macro EXT_DATA 0
db 0xF3, 0x48, 0xCD, 0xC9, 0xC9, 0x57, 0x08, 0xCF, 0x2F, 0xCA, 0x49, 0x51, 0xE4, 0xE5, 0x02, 0x00
%endmacro

EXT_ZCRC32 equ 0x85892ae0
EXT_GZCRC32 equ 0x85892ae0
EXT_USIZE equ 14
EXT_GSIZE equ 14
SKIP equ 0