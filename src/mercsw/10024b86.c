/* SPDX-License-Identifier: MIT */
/* mercsw 10024b86 */
/* mercsw 10024b86: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab374;
extern undefined4 DAT_100ab378;
extern undefined4 DAT_100b38fc;
extern undefined4 PTR_DAT_100aaf68;
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
undefined4 * __cdecl FUN_10024008(undefined4 param_1, undefined4 param_2, undefined4 param_3);
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);
int __cdecl FUN_10051f43(int param_1);
bool __cdecl FUN_100248f2(int param_1);
undefined4 __cdecl FUN_100249cf(int param_1);

void __cdecl FUN_10024b86(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (((DAT_100ab378 + 1 < DAT_100ab374) &&
      (iVar1 = ApproxLength3_Likely(param_1 - *(int *)PTR_DAT_100aaf68,
                            param_2 - *(int *)(PTR_DAT_100aaf68 + 4),
                            param_3 - *(int *)(PTR_DAT_100aaf68 + 8)),
      iVar1 <= *(int *)(PTR_DAT_100aaf68 + 0x40))) &&
     (puVar2 = FUN_10024008((undefined4)(FUN_100248f2),(undefined4)(FUN_100249cf),0), puVar2 != (undefined4 *)0x0)) {
    *(undefined2 *)(puVar2 + 4) = 1;
    iVar1 = *(int *)(*(int *)((int)puVar2 + 0x1d2) + 0x6c);
    iVar3 = ApproxLength3_Likely(param_4,param_5,param_6);
    *(int *)(iVar1 + 0x40) = iVar3;
    *(int *)(iVar1 + 0x34) = param_1;
    *(int *)(iVar1 + 0x38) = param_2;
    *(int *)(iVar1 + 0x3c) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(int *)((int)puVar2 + 0x1ea) = param_4 / 2;
    *(int *)((int)puVar2 + 0x1ee) = param_5 / 2;
    *(int *)((int)puVar2 + 0x1f2) = param_6 / 2;
    iVar1 = (int)(param_4 + (param_4 >> 0x1f & 0xfU)) >> 4;
    iVar3 = (int)(param_5 + (param_5 >> 0x1f & 0xfU)) >> 4;
    iVar4 = (int)(param_6 + (param_6 >> 0x1f & 0xfU)) >> 4;
    FUN_1002f783(*(int *)((int)puVar2 + 0x1d2));
    FUN_1002f37a(*(int *)((int)puVar2 + 0x1d2),param_1,param_2,param_3);
    FUN_1002fbc0(*(int **)((int)puVar2 + 0x1d2));
    DAT_100ab378 = DAT_100ab378 + 1;
    *(undefined4 *)((int)puVar2 + 0x1de) = DAT_100b38fc;
    local_1c = iVar4;
    local_18 = iVar3;
    local_14 = iVar1;
    for (local_20 = 0; local_20 < 0x10; local_20 = local_20 + 1) {
      *(undefined2 *)((int)puVar2 + local_20 * 0xe + 0x1e) = 1;
      local_14 = local_14 + iVar1;
      local_18 = local_18 + iVar3;
      local_1c = local_1c + iVar4;
      iVar5 = FUN_10051f43(4);
      *(int *)((int)puVar2 + local_20 * 0xe + 0x12) = local_14 + iVar5 + -2;
      iVar5 = FUN_10051f43(0x32);
      *(int *)((int)puVar2 + local_20 * 0xe + 0x16) = local_18 + iVar5 + -0x19;
      iVar5 = FUN_10051f43(4);
      *(int *)((int)puVar2 + local_20 * 0xe + 0x1a) = local_1c + iVar5 + -2;
    }
    puVar2[3] = 2;
  }
  return;
}
