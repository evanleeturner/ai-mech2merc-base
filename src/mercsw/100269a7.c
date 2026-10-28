/* SPDX-License-Identifier: MIT */
/* mercsw 100269a7 */
/* mercsw 100269a7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern undefined DAT_1016a6d0[];
undefined __cdecl FUN_10026e24(undefined4 * param_1);
undefined4 __cdecl FUN_1004d47f(int param_1);
undefined __cdecl FUN_1002b4cf(undefined4 * param_1, short param_2, short param_3, short param_4);
undefined __cdecl FUN_10008371(int param_1, int param_2);
undefined __cdecl FUN_10026c76(int * param_1);
undefined __cdecl FUN_10042289(int * param_1);

void __cdecl FUN_100269a7(int * param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x51] = (int)(DAT_1016a6d0 + param_1[1] * 0x18);
  *(undefined2 *)((int)param_1 + 0x176) = 0;
  *(undefined4 *)((int)param_1 + 0x1a2) = 0x1000;
  *(undefined4 *)((int)param_1 + 0x192) = 0;
  FUN_10026e24((undefined4 *)(param_1));
  if (*(int *)(DAT_100eef40[DAT_100adf38] + 8) == param_1[2]) {
    *(undefined4 *)((int)param_1 + 0x182) = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x182) = 1;
  }
  if (param_1[4] == 2) {
    uVar2 = FUN_1004d47f(param_1[2]);
    FUN_1002b4cf((undefined4 *)(param_1),0,0,(short)uVar2);
    iVar1 = DAT_100eef40[DAT_100adf38];
    *(char *)((int)param_1 + 0x186) = (char)param_1[0x57];
    if (*(char *)((int)param_1 + 0x186) == '\0') {
      *(undefined1 *)((int)param_1 + 0x186) = 1;
    }
    *(uint *)((int)param_1 + 0x19e) = (uint)*(ushort *)((int)param_1 + 0x15e);
    if (*(int *)((int)param_1 + 0x19e) == 0) {
      *(undefined4 *)((int)param_1 + 0x19e) = 0xfa;
    }
    *(uint *)((int)param_1 + 0x196) = (uint)*(ushort *)(param_1 + 0x58);
    if (*(int *)((int)param_1 + 0x196) == 0) {
      *(undefined4 *)((int)param_1 + 0x196) = 0xfa;
    }
    *(uint *)((int)param_1 + 0x19a) = (uint)*(ushort *)((int)param_1 + 0x162);
    if (*(int *)((int)param_1 + 0x19a) == 0) {
      *(undefined4 *)((int)param_1 + 0x19a) = 0xfa;
    }
    *(char *)((int)param_1 + 0x187) = (char)param_1[0x59];
    if (*(char *)((int)param_1 + 0x187) == '\0') {
      *(undefined1 *)((int)param_1 + 0x187) = 1;
    }
    *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)((int)param_1 + 0x166);
    if ((char)param_1[0x62] == '\0') {
      *(undefined1 *)(param_1 + 0x62) = 0;
    }
    *(char *)((int)param_1 + 0x189) = (char)param_1[0x5a];
    if (*(char *)((int)param_1 + 0x189) == '\0') {
      *(undefined1 *)((int)param_1 + 0x189) = 0;
    }
    *(uint *)((int)param_1 + 0x18a) = (uint)*(ushort *)((int)param_1 + 0x16a);
    if (param_1[2] == *(int *)(iVar1 + 8)) {
      FUN_10008371(param_1[3],*(int *)((int)param_1 + 0x18a));
    }
    FUN_10026c76(param_1);
    *(char *)((int)param_1 + 0x186) = *(char *)((int)param_1 + 0x186) + '\x01';
    *(int *)((int)param_1 + 0x19e) = *(int *)((int)param_1 + 0x19e) * 100;
    *(int *)((int)param_1 + 0x196) = *(int *)((int)param_1 + 0x196) * 100;
    *(int *)((int)param_1 + 0x19a) = *(int *)((int)param_1 + 0x19a) * 100;
    FUN_10042289(param_1);
  }
  return;
}
