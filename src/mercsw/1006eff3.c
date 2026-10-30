/* SPDX-License-Identifier: MIT */
/* mercsw 1006eff3 */
extern unsigned int DAT_10168490[];
extern int DAT_100adaa8;
extern int DAT_100adaac;
extern int DAT_100c2dec;
extern unsigned char *PTR_DAT_100c2be0;
extern char DAT_100b3ddc[];

/* Signatures unresolved; all assumed __cdecl, arguments inferred from the call sites. */
void __cdecl FUN_1004cea0(void);
void __cdecl FUN_10068d2b(int param_1, int param_2, int param_3);
int __cdecl __isctype(int c, int mask);
int __cdecl _atoi(const char *s);
char *__cdecl _strncpy(char *dst, const char *src, unsigned int n);
void __cdecl FUN_10032c28(int param_1);
int *__cdecl FUN_1001d9b0(short *param_1, unsigned int *param_2);
int __cdecl FUN_1000c550(void);
unsigned int __cdecl FUN_1006c375(int param_1);
void __cdecl FUN_1001dd9f(int *param_1);
void __cdecl FUN_1003289f(void);
void __cdecl FUN_1000c73b(void);
unsigned char __cdecl FUN_1000d7f5(void);
void __cdecl FUN_100108a0(int param_1, char *param_2);

unsigned char __cdecl FUN_1006eff3(char *param_1)
{
    unsigned char bVar1;
    int iVar2;
    unsigned int local_48;
    unsigned int local_44[8];
    short local_24[8];
    int local_14;
    unsigned int local_10;
    short *local_c;
    int *local_8;

    local_10 = 0;
    FUN_1004cea0();
    for (local_14 = 0; local_14 < 0x96; local_14 = local_14 + 1) {
        DAT_10168490[local_14] = 0xffffffff;
    }
    DAT_100adaa8 = 0;
    DAT_100adaac = 0;
    FUN_10068d2b(0, 0, 0);
    local_c = local_24;
    if (DAT_100c2dec < 2) {
        local_48 = *(unsigned short *)(PTR_DAT_100c2be0 + *param_1 * 2) & 4;
    } else {
        local_48 = __isctype((int)*param_1, 4);
    }
    if (local_48 == 0) {
        *local_c = -1;
    } else {
        iVar2 = _atoi(param_1);
        *local_c = (short)iVar2;
    }
    _strncpy((char *)(local_c + 1), param_1, 0xc);
    *(unsigned char *)(local_c + 7) = 0;
    FUN_10032c28(0);
    local_8 = FUN_1001d9b0(local_c, local_44);
    if ((local_8 != (int *)0) && (iVar2 = FUN_1000c550(), iVar2 != 0)) {
        local_10 = FUN_1006c375((int)local_8);
        FUN_1001dd9f(local_8);
        FUN_1003289f();
        FUN_1000c73b();
        bVar1 = FUN_1000d7f5();
        if (bVar1 == 0) {
            FUN_100108a0(0x4b, (char *)0);
        }
    }
    bVar1 = (unsigned char)(local_10 != 0);
    if (!bVar1) {
        FUN_100108a0(0xb, DAT_100b3ddc);
    }
    return bVar1;
}
