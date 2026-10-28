/* SPDX-License-Identifier: MIT */
/* mercsw 1004e5e3 */
/* mercsw 1004e5e3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_1012327a[];
extern undefined DAT_10123281[];
extern undefined DAT_10123285[];
extern undefined DAT_10123289[];

undefined4 __cdecl FUN_1004e5e3(int param_1, int param_2, int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_1 * 0x3c0a + param_2 * 0x13f;
  iVar2 = *(int *)(DAT_10123281 + param_3 * 0xc + iVar3);
  cVar1 = (DAT_1012327a)
          [(*(uint *)(DAT_10123289 + param_3 * 0xc + iVar3) & 0xf) * 0x3c0a +
           *(int *)(DAT_10123285 + param_3 * 0xc + iVar3) * 0x13f];
  if ((((iVar2 == 1) && ((cVar1 == '\x05' || (cVar1 == '\x06')))) ||
      ((iVar2 == 2 && (cVar1 == '\x05')))) || ((iVar2 == 3 && (cVar1 == '\x06')))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
