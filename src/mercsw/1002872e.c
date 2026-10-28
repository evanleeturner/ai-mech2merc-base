/* SPDX-License-Identifier: MIT */
/* mercsw 1002872e */
/* mercsw 1002872e: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_1002954c(ushort param_1);
undefined4 __cdecl FUN_1002883b(int param_1, ushort param_2, short param_3);
undefined __cdecl FUN_1002c354(int param_1);
undefined __cdecl FUN_1002a89b(int param_1, short param_2);

short __cdecl FUN_1002872e(int param_1, ushort param_2, short param_3)

{
  int iVar1;
  undefined4 uVar2;
  short local_8;
  
  if (param_3 == 0) {
    iVar1 = FUN_1002954c(param_2);
    uVar2 = FUN_1002883b(param_1,param_2,(short)(iVar1 / 100));
    local_8 = (short)uVar2;
    if ((local_8 != 0) && ((param_2 & 0x100) != 0)) {
      if (*(int *)(param_1 + 0x1a2) == (int)(short)param_2) {
        FUN_1002c354(param_1);
      }
      if (*(short *)(param_1 + 0x176) == 7) {
        FUN_1002a89b(param_1,param_2);
        *(short *)(param_1 + 0x178) = (short)*(undefined4 *)(param_1 + 0xdc);
        if ((*(byte *)(param_1 + 0xdd) & 0x10) != 0) {
          FUN_1002a89b(param_1,0x100);
        }
      }
      else {
        FUN_1002a89b(param_1,param_2);
      }
    }
  }
  else {
    uVar2 = FUN_1002883b(param_1,param_2,param_3);
    local_8 = (short)uVar2;
  }
  return local_8;
}
