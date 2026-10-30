/* SPDX-License-Identifier: MIT */
/* mercsw 1002e029 */
extern int DAT_100b0a20;
extern int DAT_100ad6e0;
extern int DAT_100af17c;
extern int DAT_101686f0;
extern int *PTR_DAT_100af0b8;
extern int DAT_100ab0a4;
extern int DAT_100adf34;
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern unsigned char DAT_100eebb0[];
extern unsigned char DAT_100eebbe;
extern unsigned char DAT_1016a600[];
extern char DAT_100ad814[];
extern char DAT_100ad9a4[];

extern char s__dead__100ad818[];
extern char s_Tracking___s__s_100ad820[];
extern char s_Press_SPACEBAR_to_regenerate__or_100ad830[];
extern char s_Waiting_for_remote_players____100ad864[];
extern char s_Communication_100ad88c[];
extern char s_Communication_100ad89c[];
extern char s__Enter__Send_to_all_100ad8ac[];
extern char s_CTRL_F_Send_to_friendly_mechs_100ad8c4[];
extern char s_CTRL_E_Send_to_enemy_mechs_100ad8e4[];
extern char s__Esc__to_abort_100ad900[];
extern char s__Enter__Send_to_all___Esc__to_ab_100ad910[];
extern char s_Communication_to__s_100ad93c[];
extern char s__Enter__to_send___ESC__to_abort_100ad950[];
extern char s_MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM_100ad978[];

extern unsigned short * __cdecl FUN_1008668b(int param_1, unsigned int param_2, int *param_3);
extern int __cdecl FUN_1005aae4(int param_1);
extern int __cdecl FUN_1004d5e3(int param_1);
extern int __cdecl _sprintf(char *param_1, const char *param_2, ...);
extern void __cdecl FUN_1005acaa(int *param_1, int param_2, int param_3, int param_4, unsigned char *param_5, int param_6);
extern void __cdecl FUN_1006670a(int *param_1, char *param_2, int param_3, int param_4, int param_5, int param_6);
extern void __cdecl FUN_100667a2(int *param_1, char *param_2, int param_3, int param_4, int param_5, int param_6);
extern int __cdecl FUN_1002d49d(char *param_1, int param_2);
extern void __cdecl FUN_1008664f(unsigned int param_1, int *param_2);

void __cdecl FUN_1002e029(int param_1)
{
    unsigned short *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    char *local_4c;
    int local_40;
    unsigned char local_3c;
    int local_34;
    unsigned char local_2c[40];

    local_3c = 0xe;
    local_4c = DAT_100ad814;
    if ((*(short *)(param_1 + 4) != 0) &&
        ((DAT_100b0a20 != 0 || DAT_100ad6e0 != 0) &&
         ((puVar1 = FUN_1008668b(DAT_100af17c, (unsigned int)(DAT_101686f0 + 1), PTR_DAT_100af0b8)),
          puVar1 != (unsigned short *)0))) {
        iVar2 = FUN_1005aae4((int)puVar1);
        iVar3 = iVar2 / 2;
        iVar5 = **(int **)(param_1 + 0xa8);
        local_40 = (*(int **)(param_1 + 0xa8))[1];
        if (DAT_100b0a20 == 1) {
            iVar4 = FUN_1004d5e3(DAT_100ab0a4);
            if (iVar4 != 0) {
                local_3c = 0xb;
            }
            if ((*(unsigned short *)(DAT_100eef40[DAT_100ab0a4] + 0x14) & 6) != 0) {
                local_4c = s__dead__100ad818;
            }
            _sprintf((char *)local_2c, s_Tracking___s__s_100ad820,
                     DAT_100eef40[DAT_100ab0a4] + 0x110, local_4c);
            DAT_100eebbe = local_3c;
            FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1, local_2c,
                         (int)DAT_100eebb0);
            DAT_100eebbe = 0xe;
        }
        else if (DAT_100b0a20 == 2) {
            DAT_100eebbe = 6;
            FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                         (unsigned char *)s_Press_SPACEBAR_to_regenerate__or_100ad830,
                         (int)DAT_100eebb0);
            DAT_100eebbe = 0xe;
        }
        else if (DAT_100b0a20 == 3) {
            DAT_100eebbe = 0xe;
            FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                         (unsigned char *)s_Waiting_for_remote_players____100ad864,
                         (int)DAT_100eebb0);
            DAT_100eebbe = 0xe;
        }
        local_40 = (int)((unsigned int)local_40 + (unsigned int)iVar3 + (unsigned int)iVar2);
        if (DAT_100ad6e0 != 0) {
            if (DAT_100ad6e0 == -1) {
                DAT_100eebbe = 0xe;
                FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                             (unsigned char *)s_Communication_100ad88c, (int)DAT_100eebb0);
                DAT_100eebbe = 0xe;
                FUN_1006670a(*(int **)(param_1 + 0xa4), s_Communication_100ad89c, iVar5,
                             local_40, (int)puVar1, 2);
                local_40 = (int)((unsigned int)local_40 + (unsigned int)iVar3 + (unsigned int)iVar2);
                if (*(char *)(DAT_100adf34 + 10) == '\0') {
                    DAT_100eebbe = 0xe;
                    FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                                 (unsigned char *)s__Enter__Send_to_all___Esc__to_ab_100ad910,
                                 (int)DAT_100eebb0);
                }
                else {
                    DAT_100eebbe = 0xe;
                    FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                                 (unsigned char *)s__Enter__Send_to_all_100ad8ac,
                                 (int)DAT_100eebb0);
                    DAT_100eebbe = 0xe;
                    FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5,
                                 (int)((unsigned int)local_40 + (unsigned int)iVar2),
                                 (int)puVar1,
                                 (unsigned char *)s_CTRL_F_Send_to_friendly_mechs_100ad8c4,
                                 (int)DAT_100eebb0);
                    local_40 = (int)((unsigned int)local_40 + (unsigned int)iVar2 + (unsigned int)iVar2);
                    DAT_100eebbe = 0xe;
                    FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                                 (unsigned char *)s_CTRL_E_Send_to_enemy_mechs_100ad8e4,
                                 (int)DAT_100eebb0);
                    local_40 = (int)((unsigned int)local_40 + (unsigned int)iVar2);
                    DAT_100eebbe = 0xe;
                    FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                                 (unsigned char *)s__Esc__to_abort_100ad900,
                                 (int)DAT_100eebb0);
                }
                local_40 = (int)((unsigned int)local_40 + (unsigned int)iVar3 + (unsigned int)iVar2);
            }
            else if ((0 < DAT_100ad6e0) && (DAT_100ad6e0 < 8)) {
                if (DAT_100adf38 == DAT_100ad6e0) {
                    local_34 = 0;
                }
                else {
                    local_34 = DAT_100ad6e0;
                }
                if (DAT_100eef40[local_34] == 0) {
                    return;
                }
                if (*(int *)DAT_100eef40[local_34] != 1) {
                    return;
                }
                if ((*(unsigned short *)(DAT_100eef40[local_34] + 0x14) & 0x4800) != 0) {
                    return;
                }
                _sprintf((char *)local_2c, s_Communication_to__s_100ad93c,
                         DAT_100eef40[local_34] + 0x110);
                DAT_100eebbe = 0xe;
                FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1, local_2c,
                             (int)DAT_100eebb0);
                DAT_100eebbe = 0xe;
                FUN_1006670a(*(int **)(param_1 + 0xa4), (char *)local_2c, iVar5, local_40,
                             (int)puVar1, 2);
                local_40 = (int)((unsigned int)local_40 + (unsigned int)iVar3 + (unsigned int)iVar2);
                DAT_100eebbe = 0xe;
                FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                             (unsigned char *)s__Enter__to_send___ESC__to_abort_100ad950,
                             (int)DAT_100eebb0);
                local_40 = (int)((unsigned int)local_40 + (unsigned int)iVar3 + (unsigned int)iVar2);
            }
            DAT_100eebbe = 0xe;
            FUN_1005acaa(*(int **)(param_1 + 0xa4), iVar5, local_40, (int)puVar1,
                         DAT_1016a600, (int)DAT_100eebb0);
            DAT_100eebbe = 0xe;
            FUN_100667a2(*(int **)(param_1 + 0xa4), s_MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM_100ad978,
                         iVar5, local_40, (int)puVar1, 6);
            iVar5 = FUN_1002d49d((char *)DAT_1016a600, (int)puVar1);
            FUN_1006670a(*(int **)(param_1 + 0xa4), DAT_100ad9a4, iVar5, local_40, (int)puVar1, 0xe);
        }
        FUN_1008664f((unsigned int)(DAT_101686f0 + 1), PTR_DAT_100af0b8);
    }
    return;
}
