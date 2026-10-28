/* SPDX-License-Identifier: MIT */
/* mw2shell 100107a0 */
/* mw2shell 100107a0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a676c;
undefined4 __stdcall _AIL_waveOutOpen_16(undefined4, undefined4, undefined4, undefined4);

int __fastcall FUN_100107a0(char * param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined4 local_8;
  undefined2 local_4;
  undefined2 local_2;
  
  (void)local_e;
  (void)local_c;
  (void)local_8;
  (void)local_4;
  (void)local_2;
  iVar2 = *(int *)(param_1 + 5);
  piVar1 = (int *)(param_1 + 5);
  if (iVar2 == 0) {
    if ((*param_1 != '\0') && (DAT_100a676c != 0)) {
      local_10 = 1;
      local_c = 0x2b11;
      local_e = 1;
      local_4 = 1;
      local_8 = 0x2b11;
      local_2 = 8;
      iVar2 = _AIL_waveOutOpen_16((undefined4)(piVar1),(undefined4)(param_1 + 9),0,(undefined4)(&local_10));
      if (iVar2 != 0) {
        *piVar1 = 0;
      }
      return *piVar1;
    }
    iVar2 = 0;
  }
  return iVar2;
}
