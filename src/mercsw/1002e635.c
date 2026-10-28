/* SPDX-License-Identifier: MIT */
/* mercsw 1002e635 */
/* mercsw 1002e635: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a4114;
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100ab318;
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b0a20;
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b8;
extern char s_Kills___i_100ad9a8[];
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_1002e635(int param_1)

{
  ushort *puVar1;
  byte local_2c [40];
  
  if ((*(short *)(param_1 + 4) != 0) &&
     (puVar1 = FUN_1008668b(DAT_100af17c,DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8),
     puVar1 != (ushort *)0x0)) {
    if ((DAT_100aa1ac != 0) && ((DAT_100b0a20 == 0 && (DAT_100ab318 == 0)))) {
      _sprintf((char *)local_2c,s_Kills___i_100ad9a8,DAT_100a4114);
      FUN_1005acaa(*(int **)(param_1 + 0xa4),**(int **)(param_1 + 0xa8),
                   *(int *)(*(int *)(param_1 + 0xa8) + 4),(int)puVar1,local_2c,0x100eebb0);
    }
    FUN_1008664f(DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8);
  }
  return;
}
