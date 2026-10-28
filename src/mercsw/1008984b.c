/* SPDX-License-Identifier: MIT */
/* mercsw 1008984b */
/* mercsw 1008984b: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef long long longlong;
typedef unsigned long long ulonglong;
undefined __cdecl FUN_1008975d(undefined4 * param_1);
undefined __cdecl FUN_10006b9a(int param_1);
int __cdecl FUN_10006b20(int param_1);
undefined __cdecl FUN_100891d0(int * param_1, int param_2);
undefined __cdecl FUN_10089643(undefined4 * param_1, undefined4 * param_2);

void __cdecl FUN_1008984b(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, uint param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      FUN_1008975d((undefined4 *)(param_1));
      if (param_4 != 0) {
        iVar2 = FUN_10006b9a(param_4);
        param_1[4] = iVar2;
        *param_1 = param_1[4];
        iVar2 = FUN_10006b20(param_4);
        param_1[3] = iVar2;
        param_1[1] = -param_1[3];
      }
      goto LAB_10089ca9;
    }
    if (param_4 == 0) {
      FUN_1008975d((undefined4 *)(param_1));
      iVar2 = FUN_10006b9a(param_3);
      param_1[8] = iVar2;
      *param_1 = param_1[8];
      iVar2 = FUN_10006b20(param_3);
      param_1[2] = iVar2;
      param_1[6] = -param_1[2];
      goto LAB_10089ca9;
    }
  }
  else if ((param_3 == 0) && (param_4 == 0)) {
    FUN_1008975d((undefined4 *)(param_1));
    iVar2 = FUN_10006b9a(param_2);
    param_1[8] = iVar2;
    param_1[4] = param_1[8];
    iVar2 = FUN_10006b20(param_2);
    param_1[7] = iVar2;
    param_1[5] = -param_1[7];
    goto LAB_10089ca9;
  }
  iVar2 = FUN_10006b9a(param_2);
  iVar3 = FUN_10006b9a(param_3);
  iVar4 = FUN_10006b9a(param_4);
  local_c = FUN_10006b20(param_2);
  local_10 = FUN_10006b20(param_3);
  local_14 = FUN_10006b20(param_4);
  if ((param_8 & 4) != 0) {
    local_c = -local_c;
    local_10 = -local_10;
    local_14 = -local_14;
  }
  uVar5 = param_8 & 3;
  if (uVar5 == 0) {
    uVar5 = (uint)((longlong)iVar4 * (longlong)iVar3);
    uVar6 = (uint)((longlong)local_14 * (longlong)local_c);
    lVar1 = (longlong)
            (int)((uVar6 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)local_14 * (longlong)local_c) >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0)) * (longlong)local_10;
    uVar6 = (uint)lVar1;
    *param_1 = (uVar5 >> 0x1d | (int)((unsigned int)((int)((ulonglong)((longlong)iVar4 * (longlong)iVar3) >> 0x20)) << (3)))
               + (uint)((uVar5 >> 0x1c & 1) != 0) +
               (uVar6 >> 0x1d | (int)((unsigned int)((int)((ulonglong)lVar1 >> 0x20)) << (3))) +
               (uint)((uVar6 >> 0x1c & 1) != 0);
    uVar5 = (uint)((longlong)iVar2 * (longlong)local_14);
    param_1[3] = (uVar5 >> 0x1d |
                 (int)((unsigned int)((int)((ulonglong)((longlong)iVar2 * (longlong)local_14) >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0);
    uVar5 = (uint)((longlong)iVar3 * (longlong)local_14);
    lVar1 = (longlong)
            (int)((uVar5 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)iVar3 * (longlong)local_14) >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0)) * (longlong)local_c;
    uVar5 = (uint)lVar1;
    uVar6 = (uint)((longlong)iVar4 * (longlong)local_10);
    param_1[6] = ((uVar5 >> 0x1d | (int)((unsigned int)((int)((ulonglong)lVar1 >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0)) -
                 ((uVar6 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)iVar4 * (longlong)local_10) >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0));
    uVar5 = (uint)((longlong)iVar2 * (longlong)local_10);
    param_1[2] = (uVar5 >> 0x1d |
                 (int)((unsigned int)((int)((ulonglong)((longlong)iVar2 * (longlong)local_10) >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0);
    param_1[5] = -local_c;
    uVar5 = (uint)((longlong)iVar2 * (longlong)iVar3);
    param_1[8] = (uVar5 >> 0x1d | (int)((unsigned int)((int)((ulonglong)((longlong)iVar2 * (longlong)iVar3) >> 0x20)) << (3))
                 ) + (uint)((uVar5 >> 0x1c & 1) != 0);
    FUN_100891d0(param_1,1);
  }
  else if (uVar5 == 1) {
    uVar5 = (uint)((longlong)iVar4 * (longlong)iVar3);
    *param_1 = (uVar5 >> 0x1d | (int)((unsigned int)((int)((ulonglong)((longlong)iVar4 * (longlong)iVar3) >> 0x20)) << (3)))
               + (uint)((uVar5 >> 0x1c & 1) != 0);
    uVar5 = (uint)((longlong)iVar2 * (longlong)local_14);
    uVar6 = (uint)((longlong)iVar4 * (longlong)local_c);
    lVar1 = (longlong)
            (int)((uVar6 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)iVar4 * (longlong)local_c) >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0)) * (longlong)local_10;
    uVar6 = (uint)lVar1;
    param_1[3] = (uVar5 >> 0x1d |
                 (int)((unsigned int)((int)((ulonglong)((longlong)iVar2 * (longlong)local_14) >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0) +
                 (uVar6 >> 0x1d | (int)((unsigned int)((int)((ulonglong)lVar1 >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0);
    uVar5 = (uint)((longlong)local_14 * (longlong)local_c);
    uVar6 = (uint)((longlong)iVar4 * (longlong)iVar2);
    lVar1 = (longlong)
            (int)((uVar6 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)iVar4 * (longlong)iVar2) >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0)) * (longlong)local_10;
    uVar6 = (uint)lVar1;
    param_1[6] = ((uVar5 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)local_14 * (longlong)local_c) >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0)) -
                 ((uVar6 >> 0x1d | (int)((unsigned int)((int)((ulonglong)lVar1 >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0));
    param_1[2] = local_10;
    uVar5 = (uint)((longlong)iVar3 * (longlong)local_c);
    param_1[5] = -((uVar5 >> 0x1d |
                   (int)((unsigned int)((int)((ulonglong)((longlong)iVar3 * (longlong)local_c) >> 0x20)) << (3))) +
                  (uint)((uVar5 >> 0x1c & 1) != 0));
    uVar5 = (uint)((longlong)iVar2 * (longlong)iVar3);
    param_1[8] = (uVar5 >> 0x1d | (int)((unsigned int)((int)((ulonglong)((longlong)iVar2 * (longlong)iVar3) >> 0x20)) << (3))
                 ) + (uint)((uVar5 >> 0x1c & 1) != 0);
    FUN_100891d0(param_1,1);
  }
  else if (uVar5 == 2) {
    uVar5 = (uint)((longlong)iVar4 * (longlong)iVar3);
    *param_1 = (uVar5 >> 0x1d | (int)((unsigned int)((int)((ulonglong)((longlong)iVar4 * (longlong)iVar3) >> 0x20)) << (3)))
               + (uint)((uVar5 >> 0x1c & 1) != 0);
    uVar5 = (uint)((longlong)local_c * (longlong)local_10);
    uVar6 = (uint)((longlong)iVar2 * (longlong)iVar3);
    lVar1 = (longlong)
            (int)((uVar6 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)iVar2 * (longlong)iVar3) >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0)) * (longlong)local_14;
    uVar6 = (uint)lVar1;
    param_1[3] = (uVar5 >> 0x1d |
                 (int)((unsigned int)((int)((ulonglong)((longlong)local_c * (longlong)local_10) >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0) +
                 (uVar6 >> 0x1d | (int)((unsigned int)((int)((ulonglong)lVar1 >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0);
    uVar5 = (uint)((longlong)iVar3 * (longlong)local_14);
    lVar1 = (longlong)
            (int)((uVar5 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)iVar3 * (longlong)local_14) >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0)) * (longlong)local_c;
    uVar5 = (uint)lVar1;
    uVar6 = (uint)((longlong)iVar2 * (longlong)local_10);
    param_1[6] = ((uVar5 >> 0x1d | (int)((unsigned int)((int)((ulonglong)lVar1 >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0)) -
                 ((uVar6 >> 0x1d |
                  (int)((unsigned int)((int)((ulonglong)((longlong)iVar2 * (longlong)local_10) >> 0x20)) << (3))) +
                 (uint)((uVar6 >> 0x1c & 1) != 0));
    param_1[1] = -local_14;
    uVar5 = (uint)((longlong)iVar4 * (longlong)iVar2);
    param_1[4] = (uVar5 >> 0x1d | (int)((unsigned int)((int)((ulonglong)((longlong)iVar4 * (longlong)iVar2) >> 0x20)) << (3))
                 ) + (uint)((uVar5 >> 0x1c & 1) != 0);
    uVar5 = (uint)((longlong)iVar4 * (longlong)local_c);
    param_1[7] = (uVar5 >> 0x1d |
                 (int)((unsigned int)((int)((ulonglong)((longlong)iVar4 * (longlong)local_c) >> 0x20)) << (3))) +
                 (uint)((uVar5 >> 0x1c & 1) != 0);
    FUN_100891d0(param_1,2);
  }
  if ((param_8 & 4) != 0) {
    FUN_10089643((undefined4 *)(param_1),(undefined4 *)(param_1));
  }
LAB_10089ca9:
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = param_7;
  return;
}
