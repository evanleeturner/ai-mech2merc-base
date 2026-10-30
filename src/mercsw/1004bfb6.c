/* SPDX-License-Identifier: MIT */
/* mercsw 1004bfb6 */
extern int DAT_100af098;
extern int DAT_10160c00[];
extern int DAT_100aa1f4;
extern int DAT_100adf38;
extern int DAT_100b38d8;
extern int DAT_100b3904;
extern int DAT_100eef40[];

void __cdecl FUN_1003cc75(void);
int __cdecl FUN_1001cac9(int param_1, int *param_2, int *param_3, int *param_4);
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

void __stdcall FUN_1004bfb6(void)
{
    int *piVar1;
    int iVar2;
    int local_40;
    int local_38;
    int local_30;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;

    local_38 = 0;
    local_8 = DAT_100af098;
    if (DAT_100af098 != 0) {
        FUN_1003cc75();
        local_8 = DAT_10160c00[0];
        while (local_8 != 0) {
            local_38 = (int)((unsigned int)local_38 + 1u);
            for (local_40 = *(int *)(local_8 + 8); local_40 != 0; local_40 = *(int *)(local_40 + 8)) {
                if ((((unsigned char)*(unsigned short *)(local_40 + 2)) & 0xf0) == 0x10) {
                    local_18 = FUN_1001cac9(local_40, &local_20, &local_24, &local_28);
                    local_18 = (int)((unsigned int)local_18 * 2u);
                    local_30 = DAT_100b38d8;
                    while (iVar2 = (int)((unsigned int)local_30 - 1u), local_30 != 0) {
                        local_30 = iVar2;
                        if ((((DAT_100aa1f4 == 0) || (iVar2 == DAT_100adf38)) &&
                             (local_10 = DAT_100eef40[iVar2], (*(unsigned short *)(local_10 + 0x14) & 2) == 0)) &&
                            ((*(unsigned short *)(local_10 + 0x14) & 4) == 0)) {
                            int prod;
                            int quot;
                            iVar2 = *(int *)(local_10 + 0x20);
                            local_14 = (int)((unsigned int)*(int *)(iVar2 + 0x41c) + (unsigned int)local_18);
                            local_1c = ApproxLength3_Likely(
                                (int)((unsigned int)*(int *)(local_10 + 0x50) - (unsigned int)local_20),
                                (int)((unsigned int)*(int *)(local_10 + 0x54) - (unsigned int)local_24),
                                (int)((unsigned int)*(int *)(local_10 + 0x58) - (unsigned int)local_28));
                            if (local_1c < local_14) {
                                prod = (int)((unsigned int)local_18 * (unsigned int)local_1c);
                                if (local_14 == 0 || (local_14 == -1 && prod == (int)0x80000000)) {
                                    RaiseException(0xC0000094UL, 0, 0, NULL);
                                }
                                quot = prod / local_14;
                                local_c = (int)((unsigned int)local_18 - (unsigned int)quot) >> 3;
                                piVar1 = (int *)(iVar2 + 0x3c4);
                                *piVar1 = (int)((unsigned int)*piVar1 +
                                                (unsigned int)local_c * (unsigned int)DAT_100b3904);
                            }
                        }
                    }
                }
            }
            local_8 = DAT_10160c00[local_38];
        }
    }
    return;
}
