/* SPDX-License-Identifier: MIT */
/* mw2shell 1004c460 */
/* mw2shell 1004c460: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern undefined4 DAT_100a67ac;
extern undefined4 DAT_100a67b0;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl _rand(void);

void __stdcall FUN_1004c460(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(DAT_10083508 + 0x23b7) != '\x01') {
    iVar3 = 0;
    if (0 < *(int *)(DAT_100a67ac + 4)) {
      do {
        iVar1 = FUN_10018060(DAT_100a67ac,iVar3);
        iVar2 = _rand();
        *(undefined1 *)(iVar1 + 9) = 1;
        if (*(int *)(iVar1 + 0x12) < iVar2 % 100) {
          *(undefined1 *)(iVar1 + 9) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(DAT_100a67ac + 4));
    }
    iVar3 = 0;
    if (0 < *(int *)(DAT_100a67b0 + 4)) {
      do {
        iVar1 = FUN_10018060(DAT_100a67b0,iVar3);
        iVar2 = _rand();
        *(undefined1 *)(iVar1 + 0x84e) = 1;
        if (*(int *)(iVar1 + 0x847) < iVar2 % 100) {
          *(undefined1 *)(iVar1 + 0x84e) = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(DAT_100a67b0 + 4));
    }
  }
  return;
}
