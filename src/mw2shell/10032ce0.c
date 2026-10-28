/* SPDX-License-Identifier: MIT */
/* mw2shell 10032ce0 */
/* mw2shell 10032ce0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10092000;
extern char s_Heat_sinks_have_been_downgraded__1009368c[];
extern char s_No_Heat_sinks_to_downgrade__Ok_1009366c[];
undefined __cdecl FUN_1005b1b0(char * param_1);

void __stdcall FUN_10032ce0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  do {
    local_14 = 0;
    do {
      iVar2 = *(int *)(DAT_10092000 + 0x368 + (local_10 + local_14) * 4);
      if (iVar2 / 100 == 0x50) {
        iVar5 = 0;
        iVar4 = 0;
        do {
          iVar3 = 0;
          do {
            if ((((local_c != iVar5) || (iVar3 != local_14)) &&
                (piVar1 = (int *)(DAT_10092000 + 0x368 + (iVar3 + iVar4) * 4), *piVar1 / 100 == 0x50
                )) && (*piVar1 % 100 == iVar2 % 100)) {
              *piVar1 = 0;
              local_8 = local_8 + 1;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0xc);
          iVar4 = iVar4 + 0xc;
          iVar5 = iVar5 + 1;
        } while (iVar4 < 0x60);
      }
      local_14 = local_14 + 1;
    } while (local_14 < 0xc);
    local_10 = local_10 + 0xc;
    local_c = local_c + 1;
  } while (local_10 < 0x60);
  if (local_8 == 0) {
    FUN_1005b1b0(s_No_Heat_sinks_to_downgrade__Ok_1009366c);
    return;
  }
  FUN_1005b1b0(s_Heat_sinks_have_been_downgraded__1009368c);
  *(undefined4 *)(DAT_10092000 + 0x228) = 0;
  return;
}
