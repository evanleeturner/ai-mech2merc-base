/* SPDX-License-Identifier: MIT */
/* mw2shell 1000b7f0 */
/* mw2shell 1000b7f0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

int __cdecl FUN_1000b7f0(int param_1, int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_10;
  int local_c;
  
  iVar1 = param_2 - param_2 % 100;
  iVar4 = 0;
LAB_1000b81c:
  iVar4 = iVar4 + 1;
  local_c = 8;
  local_10 = (int *)(param_1 + 0x368);
  do {
    iVar3 = 0xc;
    piVar2 = local_10;
    do {
      if (((10000 - *piVar2) / 100 == (10000 - iVar1) / 100) && (*piVar2 % 100 == iVar4))
      goto LAB_1000b81c;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_10 = local_10 + 0xc;
    local_c = local_c + -1;
    if (local_c == 0) {
      iVar1 = iVar1 + iVar4;
      iVar4 = 0;
      piVar2 = (int *)(param_1 + 0x28c);
      do {
        if (*piVar2 == -1) {
          if (0x14 < iVar1 % 100) {
            return 0;
          }
          *(int *)(param_1 + 0x28c + iVar4 * 4) = iVar1;
          return iVar1;
        }
        piVar2 = piVar2 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x19);
      return 0;
    }
  } while( true );
}
