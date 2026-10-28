/* SPDX-License-Identifier: MIT */
/* mw2shell 1001d130 */
/* mw2shell 1001d130: Ghidra's C, repaired by tools/ghidra_repair.py */
extern void * DAT_10090078;
extern char DAT_100901f4[];
extern undefined4 DAT_100a6798;
extern undefined4 DAT_100a67a4;
undefined __fastcall FUN_10010d80(void * param_1);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FUN_1000ad70(int param_1, int param_2);
undefined __cdecl FUN_1001d1b0(char * param_1);

void __cdecl FUN_1001d130(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + 0x24))) {
    FUN_10010d80(DAT_10090078);
    iVar1 = FUN_10018060(DAT_100a67a4,*(int *)(param_1 + 0x24));
    iVar1 = FUN_1000ad70(DAT_100a6798,*(int *)(iVar1 + 0x24));
    if (iVar1 == 0) {
      FUN_1001d1b0(DAT_100901f4);
      *(undefined4 *)(param_1 + 0x2c) = 2;
      return;
    }
    FUN_1001d1b0((char *)(iVar1 + 0x81c));
    *(undefined4 *)(param_1 + 0x2c) = 2;
  }
  return;
}
