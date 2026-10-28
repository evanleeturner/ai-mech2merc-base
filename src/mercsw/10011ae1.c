/* SPDX-License-Identifier: MIT */
/* mercsw 10011ae1 */
/* mercsw 10011ae1: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a9f20;
extern undefined4 DAT_100a9f24;
extern undefined4 DAT_100a9f28;
extern undefined4 DAT_100a9f2c;
extern undefined4 DAT_100a9f30;
extern undefined4 DAT_100a9f34;
extern undefined4 DAT_100a9f38;
extern undefined4 DAT_100a9f40;
extern undefined DAT_100a9f48[];
extern undefined DAT_100a9f4c[];
extern undefined DAT_100a9f50[];
extern undefined DAT_100a9f54[];
extern undefined4 DAT_100af17c;
extern undefined DAT_100c6988[];
extern undefined DAT_100c698c[];
extern undefined DAT_100c69c8[];
extern undefined DAT_100c69cc[];
extern undefined4 DAT_100c6b08;
extern undefined4 DAT_100c6b0c;
extern undefined DAT_100eebbe;
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b8;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined4 __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
undefined __cdecl FUN_10016b61(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_10011ae1(int param_1, int * param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  DAT_100eebbe = 6;
  puVar2 = FUN_1008668b(DAT_100af17c,DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8);
  if (puVar2 != (ushort *)0x0) {
    FUN_1005acaa(param_2,DAT_100a9f20,DAT_100a9f24,(int)puVar2,DAT_100a9f48,0x100eebb0);
    FUN_1005acaa(param_2,DAT_100a9f28,DAT_100a9f2c,(int)puVar2,DAT_100a9f4c,0x100eebb0);
    FUN_1005acaa(param_2,DAT_100a9f30,DAT_100a9f34,(int)puVar2,DAT_100a9f50,0x100eebb0);
    FUN_1005acaa(param_2,DAT_100a9f38,DAT_100a9f2c,(int)puVar2,DAT_100a9f54,0x100eebb0);
    DAT_100eebbe = 0xe;
    FUN_1008664f(DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8);
  }
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    piVar1 = (int *)(*(int *)(param_1 + 0x58) + local_c * 0x28);
    local_1c = DAT_100c6b08;
    if ((0 < local_c) && (local_c < 4)) {
      local_1c = DAT_100c6b08 / 2;
    }
    if ((*(ushort *)((int)piVar1 + 0x26) & 0x2000) == 0) {
      if (*(int *)(DAT_100c69c8 + local_c * 8) >> 2 < *piVar1) {
        local_10 = 3;
      }
      else {
        local_10 = 0xb;
      }
      local_18 = FUN_10011e60(*piVar1,DAT_100c6b0c,DAT_100a9f40);
    }
    else {
      local_18 = 0;
      local_10 = 0xf3;
    }
    iVar3 = FUN_10011e60(*(int *)(DAT_100c69c8 + local_c * 8),DAT_100c6b0c,DAT_100a9f40);
    if (local_18 != 0) {
      FUN_10016b61(param_2,*(int *)(DAT_100c6988 + local_c * 8),
                   *(int *)(DAT_100c698c + local_c * 8) + local_18,local_1c,local_18,0xf);
    }
    if (local_18 < iVar3) {
      FUN_10016b61(param_2,*(int *)(DAT_100c6988 + local_c * 8),
                   *(int *)(DAT_100c698c + local_c * 8) + iVar3,local_1c,iVar3 - local_18,local_10)
      ;
    }
    if ((0 < local_c) && (local_c < 4)) {
      if ((*(ushort *)((int)piVar1 + 0x26) & 0x2000) == 0) {
        if (*(int *)(DAT_100c69cc + local_c * 8) >> 2 < piVar1[1]) {
          local_10 = 3;
        }
        else {
          local_10 = 0xb;
        }
        local_18 = FUN_10011e60(piVar1[1],DAT_100c6b0c,DAT_100a9f40);
      }
      else {
        local_18 = 0;
        local_10 = 0xf3;
      }
      iVar3 = FUN_10011e60(*(int *)(DAT_100c69cc + local_c * 8),DAT_100c6b0c,DAT_100a9f40);
      if (local_18 != 0) {
        FUN_10016b61(param_2,*(int *)(DAT_100c6988 + local_c * 8) + local_1c,
                     *(int *)(DAT_100c698c + local_c * 8) + local_18,local_1c,local_18,0xf);
      }
      if (local_18 < iVar3) {
        FUN_10016b61(param_2,*(int *)(DAT_100c6988 + local_c * 8) + local_1c,
                     *(int *)(DAT_100c698c + local_c * 8) + iVar3,local_1c,iVar3 - local_18,
                     local_10);
      }
    }
  }
  return;
}
