/* SPDX-License-Identifier: MIT */
/* mercsw 10025061 */
/* mercsw 10025061: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab374;
extern undefined4 DAT_100ab378;
extern undefined4 DAT_100b38fc;
undefined4 * __cdecl FUN_10024008(undefined4 param_1, undefined4 param_2, undefined4 param_3);
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);
bool __cdecl FUN_10024df7(int param_1);
undefined4 __cdecl FUN_10024eaa(int param_1);

void __cdecl FUN_10025061(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((DAT_100ab378 + 1 < DAT_100ab374) &&
     (puVar2 = FUN_10024008((undefined4)(FUN_10024df7),(undefined4)(FUN_10024eaa),0), puVar2 != (undefined4 *)0x0)) {
    *(undefined2 *)(puVar2 + 4) = 1;
    iVar1 = *(int *)(*(int *)((int)puVar2 + 0x1d2) + 0x6c);
    iVar3 = FUN_1000fc30(param_4 * 100,param_5 * 100,param_6 * 100);
    *(int *)(iVar1 + 0x40) = iVar3;
    *(undefined4 *)(iVar1 + 0x34) = param_1;
    *(undefined4 *)(iVar1 + 0x38) = param_2;
    *(undefined4 *)(iVar1 + 0x3c) = param_3;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(int *)((int)puVar2 + 0x1ea) = param_4 >> 4;
    *(int *)((int)puVar2 + 0x1ee) = param_5 >> 4;
    *(int *)((int)puVar2 + 0x1f2) = param_6 >> 4;
    FUN_1002f783(*(int *)((int)puVar2 + 0x1d2));
    FUN_1002f37a(*(int *)((int)puVar2 + 0x1d2),param_1,param_2,param_3);
    FUN_1002fbc0(*(int **)((int)puVar2 + 0x1d2));
    DAT_100ab378 = DAT_100ab378 + 1;
    *(undefined4 *)((int)puVar2 + 0x1de) = DAT_100b38fc;
    local_1c = param_6 / 10;
    local_18 = param_5 / 10;
    local_14 = param_4 / 10;
    for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
      *(undefined2 *)((int)puVar2 + local_20 * 0xe + 0x1e) = 1;
      local_14 = local_14 + param_4 / 10;
      local_18 = local_18 + param_5 / 10;
      local_1c = local_1c + param_6 / 10;
      *(int *)((int)puVar2 + local_20 * 0xe + 0x12) = local_14;
      *(int *)((int)puVar2 + local_20 * 0xe + 0x16) = local_18;
      *(int *)((int)puVar2 + local_20 * 0xe + 0x1a) = local_1c;
    }
    puVar2[3] = 3;
  }
  return;
}
