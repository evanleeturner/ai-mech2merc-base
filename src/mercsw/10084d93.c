/* SPDX-License-Identifier: MIT */
/* mercsw 10084d93 */
extern int *DAT_100b9f7c;
extern int *DAT_100b9f74;
extern int *DAT_100b9f80;
extern int *DAT_100b9a2c;
extern int DAT_100b9f8c;
extern int DAT_100c9070;
extern int DAT_100c91f4;
extern int DAT_100c9060;
extern char s_DDRAW_StretchBlit320_Unlock______100ba430[];
extern char s_DDRAW_StretchBlit320_Restore______100ba454[];
extern char s_DDRAW_StretchBlit320_Blt_____d_100ba478[];
extern char s_DDRAW_Flip_Flip_____d_100ba498[];

void __cdecl FUN_10002168(const char *param_1, ...);

unsigned int __cdecl FUN_10084d93(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
    int iVar1;
    unsigned int uVar2;
    unsigned int local_14[4];

    if (DAT_100b9f8c == 0) {
        DAT_100c9070 = 0;
    } else {
        DAT_100c9070 = ((int (__stdcall *)(int *, int))*(int *)(*DAT_100b9f7c + 0x80))(DAT_100b9f7c, DAT_100c91f4);
        *DAT_100b9a2c = 0;
        DAT_100b9f8c = 0;
    }
    if (DAT_100c9070 != 0) {
        FUN_10002168(s_DDRAW_StretchBlit320_Unlock______100ba430, DAT_100c9070);
    }
    iVar1 = ((int (__stdcall *)(int *))*(int *)(*DAT_100b9f74 + 0x60))(DAT_100b9f74);
    if (iVar1 == -0x7789fe3e) {
        DAT_100c9070 = ((int (__stdcall *)(int *))*(int *)(*DAT_100b9f74 + 0x6c))(DAT_100b9f74);
        iVar1 = ((int (__stdcall *)(int *))*(int *)(*DAT_100b9f7c + 0x60))(DAT_100b9f7c);
        if (iVar1 == -0x7789fe3e) {
            DAT_100c9070 = ((int (__stdcall *)(int *))*(int *)(*DAT_100b9f7c + 0x6c))(DAT_100b9f7c);
        }
    } else {
        DAT_100c9070 = 0;
    }
    if (DAT_100c9070 != 0) {
        FUN_10002168(s_DDRAW_StretchBlit320_Restore______100ba454, DAT_100c9070);
    }
    local_14[0] = param_1;
    local_14[1] = param_2;
    local_14[2] = param_3;
    local_14[3] = param_4;
    DAT_100c9070 = ((int (__stdcall *)(int *, int *, int *, unsigned int *, int, int))*(int *)(*DAT_100b9f80 + 0x14))
                       (DAT_100b9f80, &DAT_100c9060, DAT_100b9f7c, local_14, 0x1000000, 0);
    if (DAT_100c9070 != 0) {
        FUN_10002168(s_DDRAW_StretchBlit320_Blt_____d_100ba478, DAT_100c9070);
    }
    DAT_100c9070 = ((int (__stdcall *)(int *, int *, int))*(int *)(*DAT_100b9f74 + 0x2c))(DAT_100b9f74, DAT_100b9f80, 1);
    if (DAT_100c9070 != 0) {
        FUN_10002168(s_DDRAW_Flip_Flip_____d_100ba498, DAT_100c9070);
    }
    if (DAT_100c9070 == 0) {
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffffu;
    }
    return uVar2;
}
