/* SPDX-License-Identifier: MIT */
/* mercsw 1003b049 */
/* mercsw 1003b049: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
int __cdecl FUN_10039980(int param_1);
undefined4 * __cdecl FUN_10024008(undefined4 param_1, undefined4 param_2, undefined4 param_3);
undefined __cdecl FUN_100399ec(int param_1, int param_2);
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);
bool __cdecl FUN_1003ad1e(int param_1);
undefined4 __cdecl FUN_1003ae65(int param_1);

void __cdecl FUN_1003b049(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar1 = FUN_1000fc30(param_1 - *(int *)PTR_DAT_100aaf68,param_2 - *(int *)(PTR_DAT_100aaf68 + 4),
                       param_3 - *(int *)(PTR_DAT_100aaf68 + 8));
  if ((iVar1 <= *(int *)(PTR_DAT_100aaf68 + 0x40)) &&
     (piVar2 = (int *)FUN_10039980(param_7), piVar2 != (int *)0x0)) {
    puVar3 = FUN_10024008((undefined4)(FUN_1003ad1e),(undefined4)(FUN_1003ae65),(undefined4)(piVar2));
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100399ec(param_7,*piVar2);
    }
    else {
      piVar2[1] = puVar3[2];
      iVar1 = FUN_10051f43(500);
      piVar2[5] = iVar1 + -0xfa;
      piVar2[6] = 0;
      iVar1 = FUN_10051f43(500);
      piVar2[7] = iVar1 + -0xfa;
      *(undefined2 *)(puVar3 + 4) = 1;
      iVar1 = *(int *)(*(int *)((int)puVar3 + 0x1d2) + 0x6c);
      iVar4 = FUN_1000fc30(param_4,param_5,param_6);
      *(int *)(iVar1 + 0x40) = iVar4;
      *(int *)(iVar1 + 0x34) = param_1;
      *(int *)(iVar1 + 0x38) = param_2;
      *(int *)(iVar1 + 0x3c) = param_3;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      *(int *)((int)puVar3 + 0x1ea) = param_4;
      *(int *)((int)puVar3 + 0x1ee) = param_5;
      *(int *)((int)puVar3 + 0x1f2) = param_6;
      FUN_1002f783(*(int *)((int)puVar3 + 0x1d2));
      FUN_1002f37a(*(int *)((int)puVar3 + 0x1d2),param_1,param_2,param_3);
      FUN_1002fbc0(*(int **)((int)puVar3 + 0x1d2));
      *(undefined4 *)((int)puVar3 + 0x1de) = DAT_100b38fc;
      local_20 = param_6 >> 4;
      local_1c = param_5 >> 4;
      local_18 = param_4 >> 4;
      for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
        *(undefined2 *)((int)puVar3 + local_24 * 0xe + 0x1e) = 1;
        local_18 = local_18 + (param_4 >> 4);
        local_1c = local_1c + (param_5 >> 4);
        local_20 = local_20 + (param_6 >> 4);
        iVar1 = FUN_10051f43(10);
        *(int *)((int)puVar3 + local_24 * 0xe + 0x12) = local_18 + iVar1 + -5;
        iVar1 = FUN_10051f43(0x32);
        *(int *)((int)puVar3 + local_24 * 0xe + 0x16) = local_1c + iVar1 + -0x19;
        iVar1 = FUN_10051f43(10);
        *(int *)((int)puVar3 + local_24 * 0xe + 0x1a) = local_20 + iVar1 + -5;
      }
    }
  }
  return;
}
