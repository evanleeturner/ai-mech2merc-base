/* SPDX-License-Identifier: MIT */
/* mercsw 100357e3 */
extern int _DAT_10160f48;
extern int _DAT_10160f44;
extern int _DAT_10160f4c;
extern int DAT_10160ef4;
extern int DAT_10160ef8;
extern int DAT_10160efc;
extern int DAT_10160f00;
extern int DAT_10160f04;
extern int DAT_10160f08;
extern int DAT_10160f0c;
extern int DAT_10160f10;
extern int DAT_10160f14;
extern int DAT_10168398;
extern int DAT_10160eb4;
extern int DAT_10160eb8;
extern int DAT_10160ec0;
extern int DAT_10160ec4;
extern int DAT_10160ed0;
extern int DAT_10160edc;
extern int DAT_10160ee0;
extern int DAT_10160ee8;

int __cdecl FixedDot3Shift27(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
int __cdecl FUN_100359c0(unsigned int param_1, int param_2, unsigned char param_3, int param_4);

unsigned int __cdecl FUN_100357e3(int *param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    unsigned int local_8;

    local_8 = 0;
    iVar1 = (int)((unsigned int)*param_1 - (unsigned int)_DAT_10160f48);
    iVar2 = (int)((unsigned int)param_1[1] - (unsigned int)_DAT_10160f44);
    iVar3 = (int)((unsigned int)param_1[2] - (unsigned int)_DAT_10160f4c);
    uVar4 = (unsigned int)FixedDot3Shift27(iVar1, DAT_10160ef4, iVar2, DAT_10160ef8, iVar3, DAT_10160efc);
    uVar5 = (unsigned int)FixedDot3Shift27(iVar1, DAT_10160f00, iVar2, DAT_10160f04, iVar3, DAT_10160f08);
    iVar1 = FixedDot3Shift27(iVar1, DAT_10160f0c, iVar2, DAT_10160f10, iVar3, DAT_10160f14);
    iVar2 = FUN_100359c0(uVar4, DAT_10168398, (unsigned char)DAT_10160eb4, DAT_10160ec4);
    *param_1 = iVar2;
    iVar3 = (int)((unsigned int)DAT_10160ed0 - (unsigned int)DAT_10160ee0);
    iVar2 = FUN_100359c0(uVar5, DAT_10168398, (unsigned char)DAT_10160eb8, DAT_10160ee8);
    param_1[1] = (int)((unsigned int)iVar3 - (unsigned int)iVar2);
    param_1[2] = iVar1;
    if (0 < iVar1) {
        if ((((*param_1 < DAT_10160ec0) || (DAT_10160edc < *param_1)) || (param_1[1] < DAT_10160ee0)) ||
            (DAT_10160ed0 < param_1[1])) {
            local_8 = 0;
        }
        else {
            local_8 = 1;
        }
    }
    return local_8;
}
