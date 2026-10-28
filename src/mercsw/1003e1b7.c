/* SPDX-License-Identifier: MIT */
/* mercsw 1003e1b7 */
/* mercsw 1003e1b7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
extern undefined * DAT_100af098;
extern undefined DAT_100c6d00[];
extern undefined * DAT_100c6d08;
extern undefined * DAT_100c6d20;
extern undefined * DAT_100c6d38;
extern undefined DAT_100c6d50[];
extern undefined * DAT_100c7ad0;
undefined __cdecl FUN_1003dce5(undefined * param_1);
undefined __cdecl FUN_1001c989(LPVOID param_1);

void __stdcall FUN_1003e1b7(void)

{
  LPVOID pvVar1;
  undefined *puVar2;
  int local_c;
  int local_8;
  
  if (DAT_100aefc0 == 0) {
    if (DAT_100af098 == DAT_100c6d00) {
      while (puVar2 = DAT_100c6d08, DAT_100c6d08 != (undefined *)0x0) {
        FUN_1003dce5(DAT_100c6d08);
        FUN_1001c989(puVar2);
      }
    }
  }
  else {
    for (local_8 = 0; local_8 < 0xc; local_8 = local_8 + 1) {
      for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
        while (*(int *)(DAT_100c6d50 + local_c * 0x18 + local_8 * 0x120) != 0) {
          pvVar1 = *(LPVOID *)(DAT_100c6d50 + local_c * 0x18 + local_8 * 0x120);
          FUN_1003dce5(*(undefined **)(DAT_100c6d50 + local_c * 0x18 + local_8 * 0x120));
          FUN_1001c989(pvVar1);
        }
      }
    }
    while (puVar2 = DAT_100c6d20, DAT_100c6d20 != (undefined *)0x0) {
      FUN_1003dce5(DAT_100c6d20);
      FUN_1001c989(puVar2);
    }
  }
  if (DAT_100af098 == DAT_100c6d00) {
    while (puVar2 = DAT_100c6d38, DAT_100c6d38 != (undefined *)0x0) {
      FUN_1003dce5(DAT_100c6d38);
      FUN_1001c989(puVar2);
    }
    while (puVar2 = DAT_100c7ad0, DAT_100c7ad0 != (undefined *)0x0) {
      FUN_1003dce5(DAT_100c7ad0);
      FUN_1001c989(puVar2);
    }
  }
  return;
}
