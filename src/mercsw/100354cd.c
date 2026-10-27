/* SPDX-License-Identifier: MIT */
/* mercsw 100354cd */
extern int DAT_10115154;
extern int DAT_10160ef0;
extern int DAT_10160f20;
extern int DAT_10160f24;
extern int DAT_10160f28;
extern int DAT_10160f2c;
extern int DAT_10160f30;
extern int DAT_10160f34;
extern int DAT_10160f38;
extern int DAT_10160f3c;
extern int DAT_10160f40;
extern int _DAT_10160f44;
extern int _DAT_10160f48;
extern int _DAT_10160f4c;
extern int DAT_10160f54;
extern int DAT_10168380;
extern int _DAT_10168384;
extern int DAT_10168388;
extern int DAT_1016838c;

int __cdecl FixedDot3Shift29(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

unsigned int __cdecl FUN_100354cd(unsigned short *param_1)
{
    int iVar1;
    unsigned int uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int local_14;

    if ((*param_1 & 0x1000) == 0) {
        iVar1 = *(int *)(param_1 + 0x20);
        iVar3 = (int)((unsigned int)*(int *)(param_1 + 0x1a) - (unsigned int)_DAT_10160f48);
        iVar4 = (int)((unsigned int)*(int *)(param_1 + 0x1c) - (unsigned int)_DAT_10160f44);
        iVar5 = (int)((unsigned int)*(int *)(param_1 + 0x1e) - (unsigned int)_DAT_10160f4c);
        DAT_10115154 = FixedDot3Shift29(iVar3, DAT_10160f38, iVar4, DAT_10160f3c, iVar5, DAT_10160f40);
        if ((int)((unsigned int)DAT_10115154 + (unsigned int)iVar1) < DAT_10160f54) {
            uVar2 = 4;
        }
        else if (DAT_10160ef0 < (int)((unsigned int)DAT_10115154 - (unsigned int)iVar1)) {
            uVar2 = 5;
        }
        else {
            local_14 = FixedDot3Shift29(iVar3, DAT_10160f20, iVar4, DAT_10160f24, iVar5, DAT_10160f28);
            if (local_14 < 1) {
                local_14 = (int)((unsigned int)DAT_10168380 - (unsigned int)local_14);
            }
            else {
                local_14 = (int)((unsigned int)local_14 - (unsigned int)_DAT_10168384);
            }
            if (iVar1 < local_14) {
                uVar2 = 6;
            }
            else {
                local_14 = FixedDot3Shift29(iVar3, DAT_10160f2c, iVar4, DAT_10160f30, iVar5, DAT_10160f34);
                if (local_14 < 1) {
                    local_14 = (int)((unsigned int)DAT_1016838c - (unsigned int)local_14);
                }
                else {
                    local_14 = (int)((unsigned int)local_14 - (unsigned int)DAT_10168388);
                }
                if (iVar1 < local_14) {
                    uVar2 = 7;
                }
                else {
                    uVar2 = 0;
                }
            }
        }
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}
