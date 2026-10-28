/* SPDX-License-Identifier: MIT */
/* mercsw 10012a14 */
/* mercsw 10012a14: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1d8;
extern undefined2 * DAT_100aa1ec;
extern undefined2 DAT_100aa258;
extern int DAT_100adf38;
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_10006e00(undefined4 param_1, undefined4 param_2);
undefined4 __cdecl FUN_1004d5e3(int param_1);
undefined __cdecl FUN_10006f9a(undefined4 param_1, undefined4 param_2, undefined4 param_3);

undefined4 __cdecl FUN_10012a14(int param_1, char * param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  
  uVar5 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if (~uVar5 - 1 < 0x50) {
    iVar1 = ~uVar5 + 2;
    *DAT_100aa1ec = DAT_100aa258;
    uVar5 = 0xffffffff;
    do {
      pcVar7 = param_2;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = param_2 + 1;
      cVar2 = *param_2;
      param_2 = pcVar7;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar7 + -uVar5;
    pcVar8 = (char *)(DAT_100aa1ec + 1);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    if (param_1 == -3) {
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        if ((DAT_100eef40[local_8] != 0) && (iVar4 = FUN_1004d5e3(local_8), iVar4 == 1)) {
          FUN_10006f9a(*(undefined4 *)(*(int *)(DAT_100aa1d8 + 0x10) + local_8 * 4),(undefined4)(DAT_100aa1ec),
                       iVar1);
        }
      }
    }
    else if (param_1 == -2) {
      for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
        if (((DAT_100eef40[local_8] != 0) && (iVar4 = FUN_1004d5e3(local_8), iVar4 == 0)) &&
           (local_8 != DAT_100adf38)) {
          FUN_10006f9a(*(undefined4 *)(*(int *)(DAT_100aa1d8 + 0x10) + local_8 * 4),(undefined4)(DAT_100aa1ec),
                       iVar1);
        }
      }
    }
    else if (param_1 == -1) {
      FUN_10006e00((undefined4)(DAT_100aa1ec),iVar1);
    }
    else {
      FUN_10006f9a(*(undefined4 *)(*(int *)(DAT_100aa1d8 + 0x10) + param_1 * 4),(undefined4)(DAT_100aa1ec),iVar1);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
