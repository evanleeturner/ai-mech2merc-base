/* SPDX-License-Identifier: MIT */
/* mw2shell 100328f0 */
/* mw2shell 100328f0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_10092000;

int __cdecl FUN_100328f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_10;
  int local_c;
  
  iVar1 = param_1 - param_1 % 100;
  iVar4 = 0;
LAB_1003291d:
  iVar4 = iVar4 + 1;
  local_c = 8;
  local_10 = (int *)(DAT_10092000 + 0x368);
  do {
    iVar3 = 0xc;
    piVar2 = local_10;
    do {
      if ((*piVar2 / -100 == iVar1 / -100) && (*piVar2 % 100 == iVar4)) goto LAB_1003291d;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_10 = local_10 + 0xc;
    local_c = local_c + -1;
    if (local_c == 0) {
      iVar3 = 0;
      iVar1 = iVar1 + iVar4;
      piVar2 = (int *)(DAT_10092000 + 0x2f0);
      do {
        if (*piVar2 == -1) {
          *(int *)(DAT_10092000 + 0x2f0 + iVar3 * 8) = iVar1;
          *(undefined4 *)(DAT_10092000 + 0x2f4 + iVar3 * 8) = 0xffffffff;
          return iVar1;
        }
        piVar2 = piVar2 + 2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xe);
      return 0;
    }
  } while( true );
}
