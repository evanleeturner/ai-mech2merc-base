/* SPDX-License-Identifier: MIT */
/* mw2shell 1005a3c0 */
/* mw2shell 1005a3c0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100c6aa6[];
extern undefined DAT_100c6aca[];
ushort __cdecl FUN_1005a230(int param_1, char * param_2);
undefined4 __cdecl FUN_1005a2d0(int param_1);

int __cdecl FUN_1005a3c0(int param_1, char * param_2, ushort param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0) {
    return -1;
  }
  uVar1 = FUN_1005a230(param_1,param_2);
  if ((short)uVar1 < 0) {
    iVar3 = -1;
  }
  else {
    iVar4 = (int)(short)uVar1;
    iVar3 = param_1 * 0x14a;
    if (*(int *)(DAT_100c6aca + iVar4 * 8 + iVar3) == 0) {
      iVar2 = FUN_1005a2d0(param_1);
      if (iVar2 == -1) {
        return -1;
      }
    }
    iVar3 = *(int *)(*(int *)(DAT_100c6aca + iVar4 * 8 + iVar3) + 0x1a + (uint)param_3 * 8) -
            (uint)*(ushort *)(*(int *)(DAT_100c6aa6 + iVar3) + 0x22 + iVar4 * 0x18);
    if (iVar3 < 1) {
      return 0;
    }
  }
  return iVar3;
}
