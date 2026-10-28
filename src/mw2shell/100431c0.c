/* SPDX-License-Identifier: MIT */
/* mw2shell 100431c0 */
/* mw2shell 100431c0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a6798;
extern undefined4 DAT_100a67a4;
int __stdcall FUN_1000ce20(void);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FUN_1000adb0(int param_1, int param_2);

void __stdcall FUN_100431c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_1000ce20();
  if ((*(int *)(iVar1 + 0x20) == -1) && (*(int *)(DAT_100a6798 + 4) == 1)) {
    iVar2 = FUN_10018060(DAT_100a6798,0);
    if (*(int *)(iVar2 + 0x80c) != -1) {
      iVar3 = FUN_1000adb0(DAT_100a67a4,*(int *)(iVar2 + 0x80c));
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x80c) = 0xffffffff;
      }
    }
    *(undefined4 *)(iVar2 + 0x80c) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar2 + 0x810);
  }
  return;
}
