/* SPDX-License-Identifier: MIT */
/* mw2shell 10012620 */
/* mw2shell 10012620: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008eb68;
extern undefined4 DAT_10098214;
extern undefined4 DAT_100a7248;
extern undefined4 DAT_100a724c;
undefined __stdcall FUN_10012270(void);
undefined __fastcall FUN_100133d0(int param_1);
int __cdecl FUN_1000e070(int param_1, int param_2, int param_3, int param_4);

void __fastcall FUN_10012620(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (*(int *)(param_1 + 0x82) < *(int *)(param_1 + 0x5a)) {
    *(int *)(param_1 + 0x82) = *(int *)(param_1 + 0x5a);
  }
  if (*(int *)(param_1 + 0x86) < *(int *)(param_1 + 0x5e)) {
    *(int *)(param_1 + 0x86) = *(int *)(param_1 + 0x5e);
  }
  if (*(int *)(param_1 + 0x62) < *(int *)(param_1 + 0x8a)) {
    *(int *)(param_1 + 0x8a) = *(int *)(param_1 + 0x62);
  }
  if (*(int *)(param_1 + 0x66) < *(int *)(param_1 + 0x8e)) {
    *(int *)(param_1 + 0x8e) = *(int *)(param_1 + 0x66);
  }
  if (*(int *)(param_1 + 0x1e) == 0) {
    if (*(int *)(param_1 + 0x82) <= *(int *)(param_1 + 0x8a)) {
      if (*(int *)(param_1 + 0x86) <= *(int *)(param_1 + 0x8e)) {
        if (DAT_10098214 == 0) {
          (**(code **)(DAT_100a724c + 0x1c))();
        }
        else {
          FUN_1000e070(*(int *)(param_1 + 0x82),*(int *)(param_1 + 0x86),*(int *)(param_1 + 0x8a),
                       *(int *)(param_1 + 0x8e));
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x22) == 0) {
      if (*(int *)(param_1 + 0x3aa) == 0) {
        ((void (*)(int, int, int, int))((**(code **)(DAT_100a7248 + 0x14))))(0,0x100,param_1 + 0x92,0);
        ((void (*)(undefined4, undefined4, undefined4, undefined4))((**(code **)(DAT_100a724c + 0x1c))))
                  (*(undefined4 *)(param_1 + 0x5a),*(undefined4 *)(param_1 + 0x5e),
                   *(undefined4 *)(param_1 + 0x62),*(undefined4 *)(param_1 + 0x66));
      }
      else {
        puVar2 = *(undefined1 **)(param_1 + 0x2e);
        puVar3 = *(undefined1 **)(param_1 + 0x42);
        for (iVar1 = *(int *)(param_1 + 0x392) * *(int *)(param_1 + 0x396); iVar1 != 0;
            iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        FUN_100133d0(param_1);
        ((void (*)(int, int, int, undefined4))((**(code **)(DAT_100a7248 + 0x14))))(0,0x100,param_1 + 0x92,*(undefined4 *)(param_1 + 0x22));
        puVar2 = *(undefined1 **)(param_1 + 0x42);
        puVar3 = *(undefined1 **)(param_1 + 0x2e);
        for (iVar1 = *(int *)(param_1 + 0x392) * *(int *)(param_1 + 0x396); iVar1 != 0;
            iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        (**(code **)(DAT_100a724c + 0x18))();
        *(undefined4 *)(param_1 + 0x3aa) = 0;
      }
    }
    else if (DAT_1008eb68 == 0) {
      FUN_100133d0(param_1);
      ((void (*)(int, int, int, undefined4))((**(code **)(DAT_100a7248 + 0x14))))(0,0x100,param_1 + 0x92,*(undefined4 *)(param_1 + 0x22));
      puVar2 = *(undefined1 **)(param_1 + 0x42);
      puVar3 = *(undefined1 **)(param_1 + 0x2e);
      for (iVar1 = *(int *)(param_1 + 0x392) * *(int *)(param_1 + 0x396); iVar1 != 0;
          iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      (**(code **)(DAT_100a724c + 0x18))();
    }
    else {
      FUN_10012270();
      (**(code **)(DAT_100a724c + 0x18))();
      ((void (*)(int, int, int, undefined4))((**(code **)(DAT_100a7248 + 0x14))))(0,0x100,param_1 + 0x92,*(undefined4 *)(param_1 + 0x22));
      (**(code **)(DAT_100a724c + 0x18))();
      DAT_1008eb68 = 0;
    }
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  *(undefined4 *)(param_1 + 0x82) = *(undefined4 *)(param_1 + 0x62);
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_1 + 0x66);
  *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(param_1 + 0x5a);
  *(undefined4 *)(param_1 + 0x8e) = *(undefined4 *)(param_1 + 0x5e);
  return;
}
