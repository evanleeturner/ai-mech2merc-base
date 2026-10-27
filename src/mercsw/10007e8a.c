/* SPDX-License-Identifier: MIT */
/* mercsw 10007e8a */
int __cdecl FixedMul16(int, int);
int __stdcall _AIL_sample_user_data_8(int, int);
void __stdcall _AIL_set_sample_volume_8(int, int);
void __stdcall _AIL_resume_sample_4(int);

extern int DAT_100a5538;
extern int DAT_100b3c50;
extern int DAT_100a40f8;

void __stdcall FUN_10007e8a(void)
{
    int iVar1;
    int iVar2;

    if (DAT_100a5538 != 0) {
        iVar1 = FixedMul16(DAT_100b3c50, 100);
        iVar2 = _AIL_sample_user_data_8(DAT_100a5538, 2);
        if (-1 < iVar2) {
            *(int *)((unsigned int)DAT_100a40f8 + 0x468u + (unsigned int)iVar2 * 4u) = iVar1;
        }
        _AIL_set_sample_volume_8(DAT_100a5538, iVar1);
        _AIL_resume_sample_4(DAT_100a5538);
    }
    return;
}
