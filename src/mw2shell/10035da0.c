/* SPDX-License-Identifier: MIT */
/* mw2shell 10035da0 */
/* mw2shell 10035da0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10092000;
extern char s_Selected_critical_can_not_be_rem_100938d4[];
undefined __cdecl FUN_1005b1b0(char * param_1);
undefined __cdecl FUN_100315b0(int param_1);

void __cdecl FUN_10035da0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < *(int *)(DAT_10092000 + 0x364)) &&
     (iVar1 = *(int *)(DAT_10092000 + 0x368 +
                      (*(int *)(param_1 + 0x24) + *(int *)(DAT_10092000 + 0x364) * 0xc) * 4),
     -1 < iVar1)) {
    iVar2 = (iVar1 / 100) * 100;
    if ((0x1c83 < iVar2) && (iVar2 < 8000)) {
      FUN_1005b1b0(s_Selected_critical_can_not_be_rem_100938d4);
      return;
    }
    FUN_100315b0(iVar1);
  }
  return;
}
