/* SPDX-License-Identifier: MIT */
/* mercsw 100323e1 */
/* mercsw 100323e1: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b0714;
extern undefined DAT_1015f2e0[];
extern undefined DAT_1015f2f0[];
extern undefined DAT_1015f310[];
extern undefined DAT_1015f330[];
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);

undefined4 __cdecl FUN_100323e1(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_10;
  
  iVar1 = DAT_100b0714;
  uVar2 = (*(int *)(param_1 + 4) - 0x18U) / 0xc;
  if ((DAT_100b0714 < 0x20) && (uVar2 < 9)) {
    DAT_100b0714 = DAT_100b0714 + 1;
    _strncpy((char *)(DAT_1015f2e0 + iVar1 * 0x1c),(char *)(param_1 + 8),0x10);
    for (local_10 = 0; local_10 < (int)uVar2; local_10 = local_10 + 1) {
      *(undefined4 *)(DAT_1015f2f0 + local_10 * 4 + iVar1 * 0x70) =
           *(undefined4 *)(param_1 + 0x18 + local_10 * 0xc);
      *(undefined4 *)(DAT_1015f310 + local_10 * 4 + iVar1 * 0x70) =
           *(undefined4 *)(param_1 + 0x1c + local_10 * 0xc);
      *(undefined4 *)(DAT_1015f330 + local_10 * 4 + iVar1 * 0x70) =
           *(undefined4 *)(param_1 + 0x20 + local_10 * 0xc);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
