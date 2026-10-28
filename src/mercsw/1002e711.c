/* SPDX-License-Identifier: MIT */
/* mercsw 1002e711 */
/* mercsw 1002e711: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100eef40[];
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b8;
extern char s_AUTOPILOT_100ad9b4[];
extern char s_AUTOPILOT_100ad9c0[];
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_1002e711(int param_1)

{
  int iVar1;
  ushort *puVar2;
  byte *local_8;
  
  if (*(short *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x3f0);
    if (iVar1 == 1) {
      local_8 = (byte *)s_AUTOPILOT_100ad9b4;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      local_8 = (byte *)s_AUTOPILOT_100ad9c0;
    }
    puVar2 = FUN_1008668b(DAT_100af17c,DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8);
    if (puVar2 != (ushort *)0x0) {
      if (*local_8 != 0) {
        FUN_1005acaa(*(int **)(param_1 + 0xa4),**(int **)(param_1 + 0xa8),
                     *(int *)(*(int *)(param_1 + 0xa8) + 4),(int)puVar2,local_8,0x100eebb0);
      }
      FUN_1008664f(DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8);
    }
  }
  return;
}
