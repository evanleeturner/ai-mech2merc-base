/* SPDX-License-Identifier: MIT */
/* mercsw 1002db2d */
extern int DAT_100ad6e4;
extern int DAT_100b0710;
extern int DAT_100af17c;
extern int DAT_101686f0;
extern unsigned char *PTR_DAT_100af0b8;
extern unsigned char DAT_100eebbe;
extern int DAT_100b38fc;
extern int DAT_100b38d8;
extern int DAT_100eef40[];
extern short DAT_101eb4b0[];
extern unsigned char DAT_10123244[];
extern unsigned char DAT_10123248[];
extern unsigned char DAT_1012324c[];
extern unsigned char DAT_10123278[];

extern char s_MISSION_OBJECTIVES_100ad784[];
extern char s_MISSION_OBJECTIVES_100ad798[];
extern char s_Time_Remaining___s_100ad7ac[];
extern char s_Elapsed_Time___s_100ad7c0[];
extern char s_Completed_at__s_100ad7d4[];
extern char s_Out_of_time_at__s_100ad7e4[];
extern char s_Incompleted_at__s_100ad7f8[];
extern char s__s___i_100ad80c[];

extern unsigned short *__cdecl FUN_1008668b(int param_1, int param_2, int *param_3);
extern int __cdecl FUN_1005aae4(int param_1);
extern void __cdecl FUN_1005acaa(int *param_1, int param_2, int param_3, int param_4, unsigned char *param_5, int param_6);
extern void __cdecl FUN_1006670a(int *param_1, char *param_2, int param_3, int param_4, int param_5, int param_6);
extern void __cdecl FUN_1002d4f1(int param_1, int *param_2, int param_3, char param_4);
extern unsigned char *__cdecl FUN_1002d360(int param_1);
extern unsigned char *__cdecl FUN_1002d415(int param_1);
extern void __cdecl FUN_1008664f(int param_1, int *param_2);
extern int __cdecl _sprintf(char *, const char *, ...);

void __cdecl FUN_1002db2d(int param_1)
{
  int iVar1;
  unsigned short *puVar2;
  unsigned char *puVar3;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  unsigned char local_108[256];
  int local_8;
  short sTmp;
  int a;
  int b;

  sTmp = *(short *)(param_1 + 4);
  if ((sTmp != 0) && (DAT_100ad6e4 != 0)) {
    iVar1 = (int)((unsigned int)DAT_100b0710 * 0x3c0aU);
    puVar2 = FUN_1008668b(DAT_100af17c, (int)((unsigned int)DAT_101686f0 + 1U), (int *)PTR_DAT_100af0b8);
    if (puVar2 != (unsigned short *)0) {
      local_10c = FUN_1005aae4((int)puVar2);
      local_8 = local_10c / 2;
      local_118 = **(int **)(param_1 + 0xa8);
      local_114 = (*(int **)(param_1 + 0xa8))[1];
      if (DAT_100ad6e4 == 1) {
        DAT_100eebbe = 6;
        FUN_1005acaa(*(int **)(param_1 + 0xa4), local_118, local_114, (int)puVar2,
                     (unsigned char *)s_MISSION_OBJECTIVES_100ad784, 0x100eebb0);
        DAT_100eebbe = 0xe;
        FUN_1006670a(*(int **)(param_1 + 0xa4), s_MISSION_OBJECTIVES_100ad798, local_118, local_114,
                     (int)puVar2, 6);
        local_114 = (int)((unsigned int)local_114 + (unsigned int)local_8 + (unsigned int)local_10c);
        FUN_1002d4f1(param_1, &local_118, (int)puVar2, '\x01');
        local_114 = (int)((unsigned int)local_114 + (unsigned int)local_8);
        FUN_1002d4f1(param_1, &local_118, (int)puVar2, '\x02');
        local_114 = (int)((unsigned int)local_114 + (unsigned int)local_8);
        FUN_1002d4f1(param_1, &local_118, (int)puVar2, '\x04');
        FUN_1002d4f1(param_1, &local_118, (int)puVar2, '\0');
        local_114 = (int)((unsigned int)local_114 + (unsigned int)local_8);
        FUN_1002d4f1(param_1, &local_118, (int)puVar2, '\b');
        local_118 = **(int **)(param_1 + 0xa8);
        local_114 = (int)((unsigned int)local_114 + (unsigned int)local_8 + (unsigned int)local_10c);
        switch (DAT_10123278[iVar1]) {
        case 0:
          __builtin_memcpy(&b, DAT_1012324c + iVar1, 4);
          if (b < 1) {
            __builtin_memcpy(&a, DAT_10123244 + iVar1, 4);
            local_110 = (int)((unsigned int)DAT_100b38fc + (unsigned int)a * (unsigned int)-0xb5);
            puVar3 = FUN_1002d360(local_110);
            _sprintf((char *)local_108, s_Elapsed_Time___s_100ad7c0, puVar3);
          }
          else {
            __builtin_memcpy(&a, DAT_10123244 + iVar1, 4);
            __builtin_memcpy(&b, DAT_1012324c + iVar1, 4);
            local_110 = (int)(((unsigned int)a + (unsigned int)b) * 0xb5U - (unsigned int)DAT_100b38fc);
            puVar3 = FUN_1002d360(local_110);
            _sprintf((char *)local_108, s_Time_Remaining___s_100ad7ac, puVar3);
          }
          break;
        case 2:
          __builtin_memcpy(&a, DAT_10123248 + iVar1, 4);
          puVar3 = FUN_1002d415(a);
          _sprintf((char *)local_108, s_Completed_at__s_100ad7d4, puVar3);
          break;
        case 3:
          __builtin_memcpy(&a, DAT_10123248 + iVar1, 4);
          puVar3 = FUN_1002d415(a);
          _sprintf((char *)local_108, s_Incompleted_at__s_100ad7f8, puVar3);
          break;
        case 4:
          __builtin_memcpy(&a, DAT_10123248 + iVar1, 4);
          puVar3 = FUN_1002d415(a);
          _sprintf((char *)local_108, s_Out_of_time_at__s_100ad7e4, puVar3);
        }
        DAT_100eebbe = 6;
        FUN_1005acaa(*(int **)(param_1 + 0xa4), local_118, local_114, (int)puVar2, local_108, 0x100eebb0);
        DAT_100eebbe = 0xe;
      }
      else {
        for (local_11c = 0; (local_11c < DAT_100b38d8 && (DAT_100eef40[local_11c] != 0));
             local_11c = local_11c + 1) {
          if ((*(unsigned short *)(DAT_100eef40[local_11c] + 0x14) & 0x4800) == 0) {
            _sprintf((char *)local_108, s__s___i_100ad80c,
                     (char *)(DAT_100eef40[local_11c] + 0x110),
                     (int)DAT_101eb4b0[local_11c]);
            local_114 = (int)((unsigned int)local_114 + (unsigned int)local_10c);
            DAT_100eebbe = 0xe;
            FUN_1005acaa(*(int **)(param_1 + 0xa4), local_118, local_114, (int)puVar2, local_108,
                         0x100eebb0);
            DAT_100eebbe = 0xe;
          }
        }
      }
      FUN_1008664f((int)((unsigned int)DAT_101686f0 + 1U), (int *)PTR_DAT_100af0b8);
    }
  }
  return;
}
