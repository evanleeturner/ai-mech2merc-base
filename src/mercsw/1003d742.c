/* SPDX-License-Identifier: MIT */
/* mercsw 1003d742 */
extern unsigned char DAT_100c6d48[];
extern short DAT_100c6d18;
extern short DAT_100c6d30;

void __cdecl FUN_1002f322(int param_1, int *param_2, unsigned int *param_3, int *param_4);

unsigned char * __cdecl FUN_1003d742(unsigned short *param_1)
{
    int iVar1;
    int iVar2;
    unsigned int local_1c[3];
    int local_10;
    unsigned char *local_c;
    int local_8;

    if ((*param_1 & 0x1000) == 0) {
        FUN_1002f322(*(int *)(param_1 + 0xc), &local_10, local_1c, &local_8);
        iVar1 = (int)((unsigned int)local_10 + 150000u) / 25000;
        iVar2 = (int)((unsigned int)local_8 + 150000u) / 25000;
        *(int *)(param_1 + 0x22) = iVar1;
        *(int *)(param_1 + 0x24) = iVar2;
        if (((iVar1 < 0) || (0xb < iVar1)) || (iVar2 < 0) || (0xb < iVar2)) {
            local_c = (unsigned char *)&DAT_100c6d18;
        }
        else {
            local_c = DAT_100c6d48 + iVar1 * 0x120 + iVar2 * 0x18;
        }
    }
    else {
        local_c = (unsigned char *)&DAT_100c6d30;
    }
    return local_c;
}
