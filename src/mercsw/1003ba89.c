/* SPDX-License-Identifier: MIT */
/* mercsw 1003ba89 */
extern int DAT_10160f48;
extern int DAT_10160f44;
extern int DAT_10160f4c;
extern int DAT_10160ef4;
extern int DAT_10160ef8;
extern int DAT_10160efc;
extern int DAT_10160f00;
extern int DAT_10160f04;
extern int DAT_10160f08;
extern int DAT_10160f0c;
extern int DAT_10160f10;
extern int DAT_10160f14;
extern int DAT_10160eb0;
extern int DAT_10160eb4;
extern int DAT_10160eb8;
extern int DAT_10160ec0;
extern int DAT_10160ec4;
extern int DAT_10160ed0;
extern int DAT_10160edc;
extern int DAT_10160ee0;
extern int DAT_10160ee8;

unsigned int __cdecl FixedDot3Shift27(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
int __cdecl FUN_100359c0(unsigned int param_1, int param_2, unsigned char param_3, int param_4);

unsigned int __cdecl FUN_1003ba89(int *param_1, int *param_2, int *param_3)
{
    int tooNear;
    int iVar2;
    int iVar3;
    int iVar4;
    unsigned int uVar5;
    unsigned int uVar6;
    unsigned int uVar7;
    int depth;

    iVar2 = (int)((unsigned int)*param_1 - (unsigned int)DAT_10160f48);
    iVar3 = (int)((unsigned int)*param_2 - (unsigned int)DAT_10160f44);
    iVar4 = (int)((unsigned int)*param_3 - (unsigned int)DAT_10160f4c);
    uVar5 = FixedDot3Shift27(iVar2, DAT_10160ef4, iVar3, DAT_10160ef8, iVar4, DAT_10160efc);
    uVar6 = FixedDot3Shift27(iVar2, DAT_10160f00, iVar3, DAT_10160f04, iVar4, DAT_10160f08);
    depth = (int)FixedDot3Shift27(iVar2, DAT_10160f0c, iVar3, DAT_10160f10, iVar4, DAT_10160f14);
    *param_3 = depth;
    if (DAT_10160eb0 < depth) {
        tooNear = 0;
    }
    else {
        tooNear = 1;
        if (depth < 0) {
            depth = (int)(0U - (unsigned int)depth);
        }
        else if (depth == 0) {
            depth = 1;
        }
    }
    iVar2 = FUN_100359c0(uVar5, depth, (unsigned char)DAT_10160eb4, DAT_10160ec4);
    *param_1 = iVar2;
    iVar3 = (int)((unsigned int)DAT_10160ed0 - (unsigned int)DAT_10160ee0);
    iVar2 = FUN_100359c0(uVar6, depth, (unsigned char)DAT_10160eb8, DAT_10160ee8);
    *param_2 = (int)((unsigned int)iVar3 - (unsigned int)iVar2);
    if (tooNear) {
        uVar7 = 0;
    }
    else if ((((*param_1 < DAT_10160ec0) || (DAT_10160edc < *param_1)) || (*param_2 < DAT_10160ee0))
             || (DAT_10160ed0 < *param_2)) {
        uVar7 = 0;
    }
    else {
        uVar7 = 1;
    }
    return uVar7;
}
