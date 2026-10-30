/* SPDX-License-Identifier: MIT */
/* mercsw 1006f18a */
extern int DAT_100b38d8;
extern int DAT_100b38dc;
extern int DAT_100aa1ac;
extern int DAT_100b0710;
extern unsigned char DAT_101600f4[];
extern unsigned char DAT_100ef034[];
extern unsigned char DAT_100ef040[];

extern unsigned short _DAT_10165888;
extern unsigned short _DAT_1016588a;
extern unsigned short _DAT_1016588c;
extern unsigned short _DAT_1016588e;
extern unsigned short _DAT_10165890;
extern unsigned short _DAT_10165892;

/* Calling conventions and exact signatures are unresolved; assumed __cdecl, one int arg, int result. */
int __cdecl FUN_1004d5e3(int param_1);
int __cdecl FUN_1004d60d(int param_1);
int __cdecl FUN_1000dd4e(int param_1);

void __stdcall FUN_1006f18a(void)
{
    int iVar1;
    int local_c;

    for (local_c = 0; local_c < DAT_100b38d8; local_c = local_c + 1) {
        if (DAT_100aa1ac != 0) {
            if (DAT_100b0710 == local_c) {
                *(unsigned int *)(DAT_101600f4 + (unsigned int)local_c * 0x3cu) = 0;
            }
            else {
                *(unsigned int *)(DAT_101600f4 + (unsigned int)local_c * 0x3cu) = 1;
            }
        }
        iVar1 = FUN_1004d5e3(local_c);
        if (iVar1 == 0) {
            _DAT_10165888 = (unsigned short)(_DAT_10165888 + 1);
        }
        else if (iVar1 == 1) {
            _DAT_1016588c = (unsigned short)(_DAT_1016588c + 1);
        }
        else if (iVar1 == 2) {
            _DAT_1016588a = (unsigned short)(_DAT_1016588a + 1);
        }
    }
    for (local_c = 0; local_c < DAT_100b38dc; local_c = local_c + 1) {
        iVar1 = FUN_1004d60d(local_c);
        if (iVar1 == 0) {
            _DAT_1016588e = (unsigned short)(_DAT_1016588e + 1);
        }
        else if (iVar1 == 1) {
            _DAT_10165892 = (unsigned short)(_DAT_10165892 + 1);
        }
        else if (iVar1 == 2) {
            _DAT_10165890 = (unsigned short)(_DAT_10165890 + 1);
        }
        iVar1 = FUN_1000dd4e(*(int *)(DAT_100ef034 + (unsigned int)local_c * 0x40u));
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x6c) != 0)) {
            *(unsigned int *)(DAT_100ef040 + (unsigned int)local_c * 0x40u) =
                *(unsigned int *)(*(int *)(iVar1 + 0x6c) + 0x40);
        }
    }
    return;
}
