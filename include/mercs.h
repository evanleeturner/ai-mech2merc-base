/*
 * mercs.h - the types every rebuilt Mercenaries function may use.
 *
 * The 1996 game was built against the Win32 SDK; a rebuilt function is
 * checked without it (tools/compile-check), so the base Win32 types it
 * needs are declared here at their i386 widths. Ghidra's decompiler type
 * names are declared too, so a function still carrying them compiles; a
 * rebuilt name replaces each one as the evidence allows.
 *
 * Declares no game structures and no functions: a rebuilt function
 * declares what it calls itself. Grows only when a rebuilt function needs
 * a type no single function should own.
 */
#ifndef MERCS_H
#define MERCS_H

#define NULL ((void *)0)
#define TRUE 1
#define FALSE 0

/* Win32 base types, i386 widths */
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;
typedef int BOOL;
typedef long LONG;
typedef unsigned int UINT;
typedef char CHAR;
typedef void *LPVOID;
typedef void *HANDLE;
typedef HANDLE HWND;
typedef HANDLE HINSTANCE;

/* Ghidra's decompiler types, by width */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned long ulong;
typedef unsigned char bool;
/* x87 80-bit in the binary; MSVC's long double is only 64-bit */
typedef long double float10;
/* Ghidra's code: a function of unknown parameters, called via (code *) */
typedef void code();

#endif /* MERCS_H */
