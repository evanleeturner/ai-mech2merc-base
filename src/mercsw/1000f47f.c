/* SPDX-License-Identifier: MIT */
/* mercsw 1000f47f */
/* mercsw 1000f47f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100eef40[];
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b8;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_1000f47f(int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = DAT_100b38fc;
  if ((((*(short *)(param_1 + 4) != 0) && (-1 < *(int *)(param_1 + 0xc))) &&
      (-1 < *(int *)(*(int *)(param_1 + 0xc) * 0x40 +
                     *(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x54) + 4))) &&
     (puVar2 = FUN_1008668b(DAT_100af17c,DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8),
     puVar2 != (ushort *)0x0)) {
    if ((*(short *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) < iVar1)) {
      FUN_1005acaa(*(int **)(param_1 + 0xa4),0,0,(int)puVar2,(byte *)(param_1 + 0x10),0x100eebb0);
    }
    FUN_1008664f(DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8);
  }
  return;
}
