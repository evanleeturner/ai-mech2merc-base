/* SPDX-License-Identifier: MIT */
/* mercsw 10002ba7 */
extern int DAT_100a40f8;
extern int DAT_100a40e4;
extern int DAT_100b38fc;
extern int DAT_100b3904;
extern unsigned char DAT_101e8db0[];
extern unsigned char DAT_101e8db4[];

unsigned int __cdecl FUN_10002d8f(unsigned int param_1, void *param_2, unsigned short param_3, int param_4, int param_5);
int __cdecl FixedMul16(int param_1, int param_2);
void __stdcall _AIL_set_sample_type_12(unsigned int param_1, unsigned int param_2, unsigned int param_3);
void __stdcall _AIL_set_sample_playback_rate_8(unsigned int param_1, int param_2);

unsigned int __cdecl FUN_10002ba7(int param_1, unsigned int param_2, unsigned int param_3, void *param_4, int param_5, int param_6, unsigned int param_7, int param_8, int param_9, unsigned short param_10)
{
    int *piVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    int iVar4;

    if (DAT_100a40f8 == 0) {
        uVar3 = 0xfffffffe;
    }
    else if (param_5 == 0) {
        uVar3 = 0xfffffff5;
    }
    else {
        if ((int)param_3 < 1) {
            if (param_4 == (void *)0) {
                return 0xfffffffa;
            }
            param_10 = (unsigned short)((param_10 & 0xff00) | 0x32);
        }
        else if (*(short *)(DAT_101e8db0 + param_3 * 8) == -1) {
            param_10 = (unsigned short)((param_10 & 0xff00) | 0x32);
        }
        else {
            param_10 = (unsigned short)(*(short *)(DAT_101e8db0 + param_3 * 8) | (param_10 & 0xff00));
        }
        uVar3 = FUN_10002d8f(param_3, param_4, param_10, -1, param_9);
        if (-1 < (int)uVar3) {
            uVar2 = *(unsigned int *)(DAT_100a40f8 + 4 + uVar3 * 4);
            _AIL_set_sample_type_12(uVar2, 0, 0);
            if (((int)param_3 < 1) || (*(short *)(DAT_101e8db4 + param_3 * 8) == -1)) {
                param_8 = DAT_100a40e4;
            }
            else {
                param_8 = (int)*(short *)(DAT_101e8db4 + param_3 * 8);
            }
            _AIL_set_sample_playback_rate_8(uVar2, param_8);
            *(int *)(DAT_100a40f8 + 0x3a8 + uVar3 * 4) = DAT_100b38fc;
            if (DAT_100b3904 < param_1) {
                piVar1 = (int *)(DAT_100a40f8 + 0x3a8 + uVar3 * 4);
                *piVar1 = (int)((unsigned int)*piVar1 + (unsigned int)param_1);
            }
            *(unsigned int *)(DAT_100a40f8 + 0x428 + uVar3 * 4) = param_7;
            *(unsigned int *)(DAT_100a40f8 + 1000 + uVar3 * 4) = param_2;
            iVar4 = FixedMul16(param_5, param_6);
            *(int *)(DAT_100a40f8 + 0x468 + uVar3 * 4) = iVar4;
            *(unsigned int *)(DAT_100a40f8 + 0x48 + uVar3 * 4) = 1;
        }
    }
    return uVar3;
}
