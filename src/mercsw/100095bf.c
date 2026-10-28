/* SPDX-License-Identifier: MIT */
/* mercsw 100095bf */
/* mercsw 100095bf: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a7310;
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b0710;
extern int DAT_100b9f60;
extern undefined4 DAT_101686f0;
extern undefined DAT_10215670[];
extern undefined DAT_10215674[];
extern undefined DAT_1021567c[];
extern undefined DAT_10215688[];
extern undefined DAT_1021568c[];
extern undefined DAT_10215690[];
extern undefined DAT_10215694[];
extern undefined4 PTR_DAT_100af0b4;
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined4 __cdecl FUN_100357e3(int * param_1);
undefined4 __cdecl FUN_100091ee(int param_1, byte param_2);
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __cdecl FUN_10056fc4(int * param_1, int param_2, int param_3, int param_4, int param_5);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_100095bf(int * param_1)

{
  int iVar1;
  ushort *puVar2;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_10 = (int *)*param_1;
  if (DAT_100a7310 != (int *)0x0) {
    local_10 = DAT_100a7310;
  }
  for (local_14 = 0; local_14 < DAT_100b9f60; local_14 = local_14 + 1) {
    iVar1 = local_14 * 0x54;
    if ((((undefined4)(*(int *)(DAT_1021567c + iVar1)) == DAT_100b0710) && (*(int *)(DAT_10215670 + iVar1) != 0)
        ) && ((*(ushort *)(DAT_10215694 + iVar1) & 1) == 0)) {
      if (*(int *)(DAT_10215674 + iVar1) == 0) {
        local_20 = *(int *)(DAT_10215688 + iVar1);
        local_1c = *(int *)(DAT_1021568c + iVar1);
        local_18 = *(undefined4 *)(DAT_10215690 + iVar1);
      }
      else {
        FUN_1002f322(*(int *)(DAT_10215674 + iVar1),(undefined4 *)(&local_20),(undefined4 *)(&local_1c),&local_18);
      }
      local_8 = FUN_100357e3(&local_20);
      if ((local_8 != 0) && (param_1[0x20] != 0)) {
        local_8 = ((int (*)(int *, int, int))((void (*)(void))((*(code *)param_1[0x20]))))(local_10,local_20,local_1c);
      }
      if (local_8 != 0) {
        iVar1 = FUN_100091ee((int)(DAT_10215670 + iVar1),(byte)DAT_100b0710);
        if (iVar1 == 0) {
          local_c = *(int *)(param_1[0x1c] + 0x30);
        }
        else {
          local_c = *(int *)(param_1[0x1c] + 0x34);
        }
        if (local_c != -1) {
          puVar2 = FUN_1008668b(DAT_100af17c,DAT_101686f0 + local_c,(int *)PTR_DAT_100af0b4);
          if (puVar2 != (ushort *)0x0) {
            FUN_10056fc4(local_10,(int)puVar2,0,local_20,local_1c);
            FUN_1008664f(DAT_101686f0 + local_c,(int *)PTR_DAT_100af0b4);
          }
        }
      }
    }
  }
  return;
}
