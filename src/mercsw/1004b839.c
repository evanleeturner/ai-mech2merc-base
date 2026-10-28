/* SPDX-License-Identifier: MIT */
/* mercsw 1004b839 */
/* mercsw 1004b839: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1f4;
extern int DAT_100adf38;
extern undefined4 DAT_100b38d8;
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100eef40[];
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
undefined __cdecl FUN_100065c4(int param_1, int * param_2, int param_3, uint param_4);

void __cdecl FUN_1004b839(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_14;
  
  local_14 = DAT_100b38d8;
  while (iVar3 = local_14 + -1, local_14 != 0) {
    local_14 = iVar3;
    if ((DAT_100aa1f4 == 0) || (iVar3 == DAT_100adf38)) {
      iVar3 = DAT_100eef40[iVar3];
      piVar1 = *(int **)(iVar3 + 0x20);
      if (((*(ushort *)(piVar1 + 0x110) & 0x100) == 0) &&
         (iVar2 = piVar1[0x107],
         iVar3 = FUN_1000fc30(*(int *)(iVar3 + 0x50) - param_2,*(int *)(iVar3 + 0x54) - param_3,
                              *(int *)(iVar3 + 0x58) - param_4), iVar3 < iVar2 + param_5)) {
        local_24 = param_6 * DAT_100b3904;
        iVar3 = param_7 * DAT_100b3904;
        if (piVar1[0xf5] == 4) {
          local_24 = local_24 * 2;
        }
        FUN_100065c4(param_1,piVar1,local_24 >> 2,1);
        FUN_100065c4(param_1,piVar1,local_24,2);
        FUN_100065c4(param_1,piVar1,local_24,3);
        FUN_100065c4(param_1,piVar1,local_24,4);
        FUN_100065c4(param_1,piVar1,local_24,5);
        FUN_100065c4(param_1,piVar1,local_24,6);
        FUN_100065c4(param_1,piVar1,local_24,7);
        FUN_100065c4(param_1,piVar1,local_24,8);
        piVar1[0xf2] = piVar1[0xf2] + iVar3;
      }
    }
  }
  return;
}
