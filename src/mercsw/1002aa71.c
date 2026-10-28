/* SPDX-License-Identifier: MIT */
/* mercsw 1002aa71 */
extern int _DAT_1016a6a0;
extern unsigned short **DAT_1016a6a4;
extern int DAT_100af17c;
extern int *PTR_DAT_100af0f8;

unsigned short * __cdecl FUN_1008668b(int, int, int *);

int __stdcall FUN_1002aa71(void)
{
    unsigned short *puVar1;
    int local_8;
    
    _DAT_1016a6a0 = 0;
    for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
        puVar1 = FUN_1008668b(DAT_100af17c, local_8 + 1, PTR_DAT_100af0f8);
        DAT_1016a6a4[local_8] = puVar1;
    }
    return 1;
}
