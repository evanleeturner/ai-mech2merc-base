/* SPDX-License-Identifier: MIT */
/* mercsw 100108a0 */
extern char DAT_100a9e4c[];
extern char s_SystemError_100a9e54[];
extern char s___02X___s_100a9e60[];
extern short DAT_100a9e6c;
extern char DAT_100a9e6e;
extern unsigned int DAT_100a9e1c;
extern char DAT_100c6188[];

extern int __cdecl _sprintf(char *, const char *, ...);
extern int __cdecl _vsprintf(char *, const char *, __builtin_va_list);
extern void __cdecl FUN_10001000(char *param_1);
extern char *__cdecl FUN_1000115d(char *param_1, int format);
extern void __cdecl FUN_10010b8f(char *param_1);
extern void __cdecl FUN_10010a8e(void);
extern void __cdecl FUN_10010ac1(char *param_1);

void __cdecl FUN_100108a0(unsigned int param_1, char *format, ...)
{
    char cVar1;
    char *pcVar2;
    int iVar3;
    unsigned int uVar4;
    char *pcVar5;
    char local_10[12];
    __builtin_va_list args;

    _sprintf(local_10, DAT_100a9e4c, param_1);
    FUN_10001000(s_SystemError_100a9e54);
    pcVar2 = FUN_1000115d(local_10, 1);
    _sprintf(DAT_100c6188, s___02X___s_100a9e60, param_1, pcVar2);
    if (format != (char *)0) {
        iVar3 = -1;
        pcVar2 = DAT_100c6188;
        do {
            pcVar5 = pcVar2;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar5 = pcVar2 + 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar5;
        } while (cVar1 != '\0');
        __builtin_memcpy(pcVar5 + -1, &DAT_100a9e6c, 2);
        pcVar5[1] = DAT_100a9e6e;
        uVar4 = 0xffffffff;
        pcVar2 = DAT_100c6188;
        do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        __builtin_va_start(args, format);
        _vsprintf(DAT_100c6188 + (~uVar4 - 1), format, args);
        __builtin_va_end(args);
    }
    DAT_100a9e1c = param_1;
    switch (param_1) {
    case 1:
    case 8:
    case 10:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x25:
    case 0x27:
    case 0x28:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x3d:
    case 0x46:
    case 0x47:
    case 0x4b:
        FUN_10010b8f(DAT_100c6188);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 9:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x26:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x35:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
        FUN_10010a8e();
        /* fall through */
    case 0x10:
    case 0x11:
    case 0x44:
    case 0x45:
    case 0x4c:
    case 0x54:
        FUN_10010ac1(DAT_100c6188);
        break;
    case 7:
    case 0xc:
    case 0x24:
        break;
    }
    return;
}
