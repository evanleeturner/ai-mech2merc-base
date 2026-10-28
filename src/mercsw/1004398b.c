/* SPDX-License-Identifier: MIT */
/* mercsw 1004398b */
/* mercsw 1004398b: Ghidra's C, repaired by tools/ghidra_repair.py */
bool __cdecl FUN_1002950f(int param_1, short param_2);
int __cdecl FUN_1002a132(int param_1);
int __cdecl FUN_10022b70(int param_1, int param_2);
int __cdecl FUN_10044a2b(int param_1);
undefined __cdecl FUN_100449ef(int param_1, short param_2);
undefined __cdecl FUN_1004403d(int param_1, undefined1 param_2);
undefined4 __cdecl FUN_10044bba(int param_1, int param_2);

undefined4 __cdecl FUN_1004398b(int param_1, short param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 local_14;
  undefined4 local_c;
  
  FUN_1002950f(param_1,param_2);
  uVar1 = FUN_1002a132(param_1);
  FUN_10022b70(param_1,uVar1);
  if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(*(int *)(param_1 + 0x20) + 0x3d8) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  if (*(int *)(param_1 + 0x1d4) != 2) {
    iVar2 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f);
    if ((*(int *)(*(int *)(param_1 + 0x20) + 0x414) < iVar2) &&
       (iVar2 < *(int *)(*(int *)(param_1 + 0x20) + 0x414) * 3)) {
      local_14 = 1;
    }
    else {
      local_14 = 0;
    }
    if (*(int *)(param_1 + 0xc0) < 0x3e9) {
      if (*(char *)(*(int *)(param_1 + 0x4c) + 0x1d) != '\0') {
        *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
      }
      FUN_1004403d(param_1,0);
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x20) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x21) = 0;
    }
    else {
      iVar2 = FUN_10044a2b(param_1);
      if ((int)(((*(int *)(param_1 + 0xc0) < 0x1771) - 1 & 0x1b) + 9) < iVar2) {
        FUN_100449ef(param_1,local_14);
      }
      else {
        FUN_100449ef(param_1,(ushort)(local_14 == 0));
      }
      FUN_1004403d(param_1,1);
      iVar2 = FUN_10044bba(param_1,0x28);
      if (iVar2 == 0) {
        local_c = 1;
      }
    }
  }
  return local_c;
}
