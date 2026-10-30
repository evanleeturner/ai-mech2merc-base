/* SPDX-License-Identifier: MIT */
/* mercsw 10014991 */
extern int DAT_100af098;
extern int DAT_10160c00[];
extern int DAT_100aa540;
extern int DAT_100aa544;
extern int DAT_100aa548;
extern int DAT_100aa558;
extern int DAT_100aa55c;
extern int DAT_100aa560;

int __cdecl FUN_1002634e(int param_1);
int __cdecl FUN_100145d4(int param_1, int param_2, int param_3, int *param_4);
void __cdecl FUN_1003d2d3(int param_1, int param_2);
int __cdecl FUN_1001bc2d(int param_1, int *param_2);
void __cdecl FUN_100267fd(int *param_1, int *param_2);
int __cdecl FUN_10014b90(int param_1, int *param_2, int param_3);

int __cdecl FUN_10014991(int *param_1, int *param_2)
{
    int iVar1;
    int uVar2;
    int local_90;
    int local_8c;
    int local_88[14];
    int local_50;
    int local_4c;
    int local_48[14];
    int local_10;
    int local_c;
    unsigned short local_8;

    local_50 = 0;
    local_8c = 0;
    local_c = 0x7fffffff;
    iVar1 = FUN_1002634e((int)param_1);
    if (iVar1 < 1) {
        uVar2 = FUN_100145d4(*param_1, param_1[1], param_1[2], param_2);
    }
    else {
        local_10 = DAT_100af098;
        if (DAT_100af098 == 0) {
            uVar2 = 0;
        }
        else {
            FUN_1003d2d3(*param_1, param_1[2]);
            local_10 = DAT_10160c00[0];
            while (local_10 != 0) {
                local_8c = (int)((unsigned int)local_8c + 1u);
                for (local_90 = *(int *)(unsigned int)((unsigned int)local_10 + 0x10u);
                     local_90 != 0;
                     local_90 = *(int *)(unsigned int)((unsigned int)local_90 + 0x10u)) {
                    local_8 = *(unsigned short *)(unsigned int)((unsigned int)local_90 + 2u);
                    if ((((local_8 & 0x100) == 0) &&
                         (*(int *)(unsigned int)((unsigned int)local_90 + 0x24u) != 6)) &&
                        (local_4c = FUN_1001bc2d(local_90, param_1), local_4c < local_c)) {
                        FUN_100267fd(local_88, param_1);
                        iVar1 = FUN_10014b90(local_90, local_88, local_4c);
                        if (iVar1 != 0) {
                            local_c = FUN_1002634e((int)local_88);
                            FUN_100267fd(local_48, local_88);
                            local_50 = local_90;
                            DAT_100aa558 = DAT_100aa540;
                            DAT_100aa55c = DAT_100aa544;
                            DAT_100aa560 = DAT_100aa548;
                        }
                    }
                }
                local_10 = DAT_10160c00[local_8c];
            }
            *param_2 = local_50;
            if (local_50 == 0) {
                uVar2 = 0;
            }
            else {
                FUN_100267fd(param_1, local_48);
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}
