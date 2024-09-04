/*
*****************************************************************************
**

**  Abstract    : Linker script for STM32L476 Device with
**                512KB Flash and 96KB SRAM, 32KByte CCMRAM
**

/* Specify the memory areas */
MEMORY
{
RAM_CODE (rx)   : ORIGIN = 0x20000000, LENGTH = 1K
RAM_DATA (xrw)  : ORIGIN = 0x20000000 + LENGTH(RAM_CODE), LENGTH = 96K - LENGTH(RAM_CODE)
CCMRAM (rw)     : ORIGIN = 0x10000000, LENGTH = 32K
FLASH (rx)      : ORIGIN = 0x8004000, LENGTH = 512K - 0x4000
}

INCLUDE "variants/ldscript_gen.ld"
