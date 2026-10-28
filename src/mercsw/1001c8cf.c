/* SPDX-License-Identifier: MIT */
/* mercsw 1001c8cf */
/* mercsw 1001c8cf: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1001c8a3(LPVOID param_1);

void __cdecl FUN_1001c8cf(int param_1)

{
  LPVOID pvVar1;
  int local_8;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x20);
  if ((pvVar1 != (LPVOID)0x0) && (*(int *)(param_1 + 0x1c) != 0)) {
    if (*(LPVOID *)(param_1 + 0x1c) == pvVar1) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)pvVar1 + 0xc);
    }
    else {
      for (local_8 = *(int *)(param_1 + 0x1c);
          (*(int *)(local_8 + 0xc) != 0 && (*(LPVOID *)(local_8 + 0xc) != pvVar1));
          local_8 = *(int *)(local_8 + 0xc)) {
      }
      if (*(int *)(local_8 + 0xc) == 0) {
        return;
      }
      *(undefined4 *)(local_8 + 0xc) = *(undefined4 *)((int)pvVar1 + 0xc);
    }
    FUN_1001c8a3(pvVar1);
  }
  return;
}
