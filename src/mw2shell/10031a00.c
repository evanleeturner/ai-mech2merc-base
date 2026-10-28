/* SPDX-License-Identifier: MIT */
/* mw2shell 10031a00 */
/* mw2shell 10031a00: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10092000;
extern undefined DAT_1009201c;
extern undefined4 DAT_100b51e8;
undefined __cdecl FUN_1000a890(int param_1);

void __cdecl FUN_10031a00(int param_1, int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  iVar1 = 0;
  if (DAT_1009201c != '\x01') {
    piVar3 = (int *)(param_1 + 0x368);
    local_4 = 8;
    do {
      iVar1 = 0xc;
      do {
        if (*piVar3 / 10 == param_2 / 10) {
          *piVar3 = 0;
        }
        piVar3 = piVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    if (param_2 == 9000) {
      *(undefined4 *)(param_1 + 0x240) = 0;
      FUN_1000a890(DAT_10092000);
      return;
    }
    if (param_2 == 0x251c) {
      *(undefined4 *)(param_1 + 0x24c) = 0;
      FUN_1000a890(DAT_10092000);
      return;
    }
    return;
  }
  iVar2 = 0;
  piVar3 = (int *)(*(int *)(param_1 + 0x364) * 0x30 + 0x368 + param_1);
  do {
    if (*piVar3 == param_2) {
      *(undefined4 *)(param_1 + 0x368 + (iVar2 + *(int *)(param_1 + 0x364) * 0xc) * 4) = 0;
      iVar1 = 1;
      break;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  DAT_100b51e8 = DAT_100b51e8 + iVar1;
  return;
}
