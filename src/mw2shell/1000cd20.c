/* SPDX-License-Identifier: MIT */
/* mw2shell 1000cd20 */
/* mw2shell 1000cd20: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int __cdecl FUN_1000cd20(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_4;
  
  local_4 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar4 = iVar1 + 1;
      iVar1 = FUN_10018060(param_1,iVar1);
      *(undefined1 *)(iVar1 + 9) = 0;
      iVar1 = iVar4;
    } while (iVar4 < *(int *)(param_1 + 4));
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)FUN_10018060(param_1,iVar1);
      if (*(char *)((int)piVar2 + 9) != '\x01') {
        iVar4 = iVar1 + 1;
        *(undefined1 *)((int)piVar2 + 9) = 1;
        local_4 = local_4 + 1;
        if (iVar4 < *(int *)(param_1 + 4)) {
          do {
            piVar3 = (int *)FUN_10018060(param_1,iVar4);
            if (*piVar3 == *piVar2) {
              *(undefined1 *)((int)piVar3 + 9) = 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 4));
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  return local_4;
}
