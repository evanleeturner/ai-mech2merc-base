/* SPDX-License-Identifier: MIT */
/* mercsw 1002cf43 */
extern int DAT_100ab4c4;
extern int DAT_100ab390;
extern char s_DTBLPLNTPALGTERRCLIMLITEVWSPVWST_100ab4c8[];
extern int DAT_100ab24c;
extern int DAT_100ab588;
extern int DAT_100ab590;
extern short DAT_1016a638;
extern short DAT_1016a63a;
extern short DAT_1016a63c;
extern short DAT_1016a63e;
extern short DAT_1016a640;
extern short DAT_1016a642;
extern short DAT_1016a644;
extern short DAT_1016a646;
extern int DAT_1016a648;

extern int *__cdecl FUN_1001dce2(int param_1);
extern void __cdecl FUN_100108a0(int param_1, char *param_2);
extern unsigned int *__cdecl FUN_1004718e(unsigned char *param_1);
extern void __cdecl FUN_100470e0(unsigned short *param_1);
extern void __cdecl FUN_1001deb6(int param_1);
extern unsigned int __cdecl FUN_10031fca(int *param_1);
extern unsigned int __cdecl FUN_100324f8(int param_1, unsigned int (__cdecl *param_2)(int));
extern unsigned int __cdecl FUN_100327f6(int param_1, unsigned int (__cdecl *param_2)(int));

unsigned int __cdecl FUN_1002cf43(int param_1)
{
    int iVar1;
    int *piVar2;
    unsigned int *puVar3;
    unsigned int uVar4;
    int *local_10;
    unsigned int local_8;
    int sig0;
    int sig36;
    unsigned int a;
    unsigned int b;

    local_8 = 1;
    piVar2 = FUN_1001dce2(param_1);
    if ((piVar2 == (int *)0) || (DAT_100ab4c4 != *piVar2)) {
        local_8 = 0;
        FUN_100108a0(0x48, (char *)0);
    }
    else {
        a = (unsigned int)piVar2[2];
        b = (unsigned int)DAT_100ab390;
        if ((((a & 0xff00U) << 8) | ((a >> 8) & 0xff00U) | (a >> 0x18) | (a << 0x18)) <
            (((b & 0xff00U) << 8) | ((b >> 8) & 0xff00U) | (b >> 0x18) | (b << 0x18))) {
            local_8 = 0;
            FUN_100108a0(0x49, (char *)0);
        }
        else {
            local_10 = FUN_1001dce2(param_1);
            __builtin_memcpy(&sig0, s_DTBLPLNTPALGTERRCLIMLITEVWSPVWST_100ab4c8, 4);
            if ((local_10 == (int *)0) || (sig0 != *local_10)) {
                local_8 = 0;
                FUN_100108a0(0x3e, (char *)0);
            }
            else {
                puVar3 = FUN_1004718e((unsigned char *)(param_1 + 4));
                if (puVar3 == (unsigned int *)0) {
                    FUN_100470e0((unsigned short *)(param_1 + 4));
                }
                DAT_1016a638 = (short)((short)local_10[2] + DAT_1016a638);
                DAT_1016a63a = (short)(*(short *)((char *)local_10 + 10) + DAT_1016a63a);
                DAT_1016a63c = (short)((short)local_10[3] + DAT_1016a63c);
                DAT_1016a63e = (short)(*(short *)((char *)local_10 + 0xe) + DAT_1016a63e);
                DAT_1016a640 = (short)((short)local_10[4] + DAT_1016a640);
                DAT_1016a642 = (short)(*(short *)((char *)local_10 + 0x12) + DAT_1016a642);
                DAT_1016a644 = (short)((short)local_10[5] + DAT_1016a644);
                if (puVar3 == (unsigned int *)0) {
                    DAT_1016a646 = (short)(*(short *)((char *)local_10 + 0x16) + DAT_1016a646);
                    DAT_1016a648 = (int)((unsigned int)DAT_1016a648 + (unsigned int)local_10[6]);
                }
                while (local_10 != (int *)0) {
                    iVar1 = *local_10;
                    if (DAT_100ab24c != 0) {
                        FUN_1001deb6(iVar1);
                    }
                    __builtin_memcpy(&sig36, s_DTBLPLNTPALGTERRCLIMLITEVWSPVWST_100ab4c8 + 36, 4);
                    if (sig36 == iVar1) {
                        uVar4 = FUN_10031fca(local_10);
                        local_8 = local_8 & uVar4;
                    }
                    else if (DAT_100ab588 == iVar1) {
                        uVar4 = FUN_100324f8((int)local_10, FUN_1002cf43);
                        local_8 = local_8 & uVar4;
                    }
                    else if (DAT_100ab590 == iVar1) {
                        uVar4 = FUN_100327f6((int)local_10, FUN_1002cf43);
                        local_8 = local_8 & uVar4;
                    }
                    local_10 = FUN_1001dce2(param_1);
                }
            }
        }
    }
    return local_8;
}
