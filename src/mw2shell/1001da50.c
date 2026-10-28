/* SPDX-License-Identifier: MIT */
/* mw2shell 1001da50 */
/* mw2shell 1001da50: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern undefined4 DAT_100a67a4;
extern undefined4 DAT_100a67a8;
extern char s_You_may_assign_a_max_of_2_starma_100902b4[];
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __cdecl FUN_1005b1b0(char * param_1);

int __stdcall FUN_1001da50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(DAT_100a67a4 + 4)) {
    do {
      iVar1 = FUN_10018060(DAT_100a67a4,iVar3);
      if ((*(int *)(iVar1 + 0x20) != -1) && (*(char *)(iVar1 + 0x2064) == '\0')) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_100a67a4 + 4));
  }
  if (iVar2 < 3) {
    iVar3 = 0;
    if (0 < *(int *)(DAT_100a67a8 + 4)) {
      do {
        iVar1 = FUN_10018060(DAT_100a67a8,iVar3);
        if (*(char *)(iVar1 + 0x2c) == '\x01') {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(DAT_100a67a8 + 4));
    }
    return iVar2;
  }
  FUN_1005b1b0(s_You_may_assign_a_max_of_2_starma_100902b4);
  return *(int *)(DAT_10083508 + 0x2df7) + 1;
}
