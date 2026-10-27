/* SPDX-License-Identifier: MIT */
/* mercsw 1002d233 */
extern short DAT_1016a638;
extern short DAT_1016a63c;
extern short DAT_1016a63e;
extern short DAT_1016a644;
extern short DAT_1016a646;
extern int DAT_1016a648;

extern int DAT_100ad6b8;
extern int DAT_100ad6bc;
extern int DAT_100ad6c0;
extern int DAT_100ad6dc;
extern char s_TLISADATANTKANFLOBJICID_100ad6c4[24];

extern int _DAT_1016a650;
extern int _DAT_1016a654;
extern int _DAT_1016a658;
extern int _DAT_1016a65c;
extern int _DAT_1016a660;
extern int _DAT_1016a664;
extern char DAT_1016a668[4];
extern int _DAT_1016a66c;
extern char DAT_1016a670[4];
extern int _DAT_1016a674;
extern char DAT_1016a678[4];
extern int _DAT_1016a67c;
extern char DAT_1016a680[4];
extern int _DAT_1016a684;
extern char DAT_1016a688[4];
extern int _DAT_1016a68c;
extern char DAT_1016a690[4];
extern int _DAT_1016a694;
extern int _DAT_1016a698;
extern int _DAT_1016a69c;

int __cdecl FUN_10022aaa(void);
int __cdecl FUN_10030398(void);
int __cdecl FUN_1005dbf1(void);

void * __stdcall FUN_1002d233(void)
{
    int iVar1;

    _DAT_1016a654 = (int)((unsigned int)(int)DAT_1016a638 * 0x250u);
    _DAT_1016a650 = DAT_100ad6b8;
    _DAT_1016a65c = FUN_10022aaa();
    _DAT_1016a65c = (int)((unsigned int)_DAT_1016a65c * (unsigned int)(int)DAT_1016a638);
    _DAT_1016a658 = DAT_100ad6bc;
    _DAT_1016a664 = FUN_10030398();
    _DAT_1016a664 = (int)((unsigned int)_DAT_1016a664 * (unsigned int)(int)DAT_1016a63c);
    _DAT_1016a660 = DAT_100ad6c0;
    iVar1 = FUN_1005dbf1();
    _DAT_1016a66c = (int)((unsigned int)iVar1 * (unsigned int)(int)DAT_1016a644);
    DAT_1016a668[0] = s_TLISADATANTKANFLOBJICID_100ad6c4[0];
    DAT_1016a668[1] = s_TLISADATANTKANFLOBJICID_100ad6c4[1];
    DAT_1016a668[2] = s_TLISADATANTKANFLOBJICID_100ad6c4[2];
    DAT_1016a668[3] = s_TLISADATANTKANFLOBJICID_100ad6c4[3];
    _DAT_1016a674 = (int)((unsigned int)(int)DAT_1016a644 * 0x2cu);
    DAT_1016a670[0] = s_TLISADATANTKANFLOBJICID_100ad6c4[4];
    DAT_1016a670[1] = s_TLISADATANTKANFLOBJICID_100ad6c4[5];
    DAT_1016a670[2] = s_TLISADATANTKANFLOBJICID_100ad6c4[6];
    DAT_1016a670[3] = s_TLISADATANTKANFLOBJICID_100ad6c4[7];
    _DAT_1016a67c = (int)((unsigned int)(int)DAT_1016a646 * 0x14u);
    DAT_1016a678[0] = s_TLISADATANTKANFLOBJICID_100ad6c4[8];
    DAT_1016a678[1] = s_TLISADATANTKANFLOBJICID_100ad6c4[9];
    DAT_1016a678[2] = s_TLISADATANTKANFLOBJICID_100ad6c4[10];
    DAT_1016a678[3] = s_TLISADATANTKANFLOBJICID_100ad6c4[0xb];
    _DAT_1016a684 = DAT_1016a648;
    DAT_1016a680[0] = s_TLISADATANTKANFLOBJICID_100ad6c4[0xc];
    DAT_1016a680[1] = s_TLISADATANTKANFLOBJICID_100ad6c4[0xd];
    DAT_1016a680[2] = s_TLISADATANTKANFLOBJICID_100ad6c4[0xe];
    DAT_1016a680[3] = s_TLISADATANTKANFLOBJICID_100ad6c4[0xf];
    _DAT_1016a68c = (int)((unsigned int)(int)DAT_1016a63e << 3);
    DAT_1016a688[0] = s_TLISADATANTKANFLOBJICID_100ad6c4[0x10];
    DAT_1016a688[1] = s_TLISADATANTKANFLOBJICID_100ad6c4[0x11];
    DAT_1016a688[2] = s_TLISADATANTKANFLOBJICID_100ad6c4[0x12];
    DAT_1016a688[3] = s_TLISADATANTKANFLOBJICID_100ad6c4[0x13];
    _DAT_1016a694 = (int)((unsigned int)(int)DAT_1016a63e << 2);
    DAT_1016a690[0] = s_TLISADATANTKANFLOBJICID_100ad6c4[0x14];
    DAT_1016a690[1] = s_TLISADATANTKANFLOBJICID_100ad6c4[0x15];
    DAT_1016a690[2] = s_TLISADATANTKANFLOBJICID_100ad6c4[0x16];
    DAT_1016a690[3] = s_TLISADATANTKANFLOBJICID_100ad6c4[0x17];
    _DAT_1016a69c = (int)((unsigned int)(int)DAT_1016a63e << 2);
    _DAT_1016a698 = DAT_100ad6dc;
    return (void *)&_DAT_1016a650;
}
