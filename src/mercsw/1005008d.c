/* SPDX-License-Identifier: MIT */
/* mercsw 1005008d */
/* mercsw 1005008d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b0864;
extern undefined4 DAT_100b0868;
extern undefined DAT_101155c0[];
extern undefined DAT_101155c4[];
extern undefined DAT_101155dc[];
extern undefined DAT_101155e0[];
extern undefined DAT_101155e4[];
extern undefined DAT_101155e8[];
extern undefined DAT_101155ec[];
extern undefined DAT_101155f0[];
extern undefined DAT_101155f4[];
extern undefined DAT_101155f8[];
extern undefined DAT_10115606[];
undefined __stdcall FUN_10050227(void);

int __cdecl FUN_1005008d(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, int param_6, int param_7, undefined2 param_8, undefined4 param_9)

{
  int iVar1;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  if (DAT_100b0868 == 0) {
    FUN_10050227();
  }
  if (DAT_100b0864 < 0x30c) {
    if (param_5 == -1) {
      param_5 = -2;
    }
    if (param_6 == 0) {
      iVar1 = DAT_100b0864 * 0x48;
      local_c = (undefined4 *)(DAT_101155c0 + iVar1);
      *local_c = 0xfffffffe;
      *(undefined4 *)(DAT_101155c4 + iVar1) = 0xffffffff;
      *(int *)(DAT_101155dc + iVar1) = param_5;
      *(undefined4 *)(DAT_101155f0 + iVar1) = param_2;
      *(undefined4 *)(DAT_101155f4 + iVar1) = param_3;
      *(undefined4 *)(DAT_101155f8 + iVar1) = param_4;
      *(undefined4 *)(iVar1 + 0x101155c8) = param_1;
      *(undefined4 *)(DAT_101155e4 + iVar1) = 0;
      *(undefined4 *)(DAT_101155e8 + iVar1) = 0;
      *(undefined4 *)(DAT_101155e0 + iVar1) = 0;
      *(undefined2 *)(DAT_10115606 + iVar1) = 0;
      *(undefined4 *)(DAT_101155ec + iVar1) = param_9;
      local_8 = DAT_100b0864;
      DAT_100b0864 = DAT_100b0864 + 1;
    }
    else {
      local_8 = param_7;
      if (param_7 < 0) {
        return -1;
      }
      local_c = (undefined4 *)(DAT_101155c0 + param_7 * 0x48);
    }
    local_c[param_6 + 2] = param_1;
    *(undefined2 *)((int)local_c + param_6 * 2 + 0x3c) = param_8;
    if (param_6 < 5) {
      while (iVar1 = param_6, local_10 = iVar1 + 1, local_10 < 5) {
        param_6 = local_10;
        if (local_c[iVar1 + 3] == (undefined4)(-1)) {
          local_c[iVar1 + 3] = param_1;
          *(undefined2 *)((int)local_c + local_10 * 2 + 0x3c) = param_8;
          param_6 = local_10;
        }
      }
    }
  }
  else {
    local_8 = -1;
  }
  return local_8;
}
