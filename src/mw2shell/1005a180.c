/* SPDX-License-Identifier: MIT */
/* mw2shell 1005a180 */
/* mw2shell 1005a180: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100c6aa0[];
extern undefined2 DAT_100c6aa4[];
extern undefined DAT_100c6aa6[];
extern undefined DAT_100c6aca[];
extern undefined DAT_100c6ace[];
extern undefined DAT_100c6bca[];
undefined __cdecl FUN_10059ea0(undefined4 param_1);
char * __cdecl __strnset(char * _Dest, int _Val, size_t _Count);
int __cdecl __close(int _FileHandle);

void __cdecl FUN_1005a180(int param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = param_1 * 0x14a;
  FUN_10059ea0(*(undefined4 *)(DAT_100c6aa6 + param_1 * 0x14a));
  *(undefined4 *)(DAT_100c6aa6 + iVar2) = 0;
  do {
    iVar1 = iVar2 + uVar4 * 8;
    if (*(int *)(DAT_100c6aca + uVar4 * 8 + iVar2) != 0) {
      FUN_10059ea0(*(int *)(DAT_100c6aca + uVar4 * 8 + iVar2));
      *(undefined4 *)(DAT_100c6aca + iVar1) = 0;
    }
    if (*(int *)(DAT_100c6ace + iVar1) != 0) {
      FUN_10059ea0(*(int *)(DAT_100c6ace + iVar1));
      *(undefined4 *)(DAT_100c6ace + iVar1) = 0;
    }
    uVar3 = (short)uVar4 + 1;
    uVar4 = (uint)uVar3;
  } while (uVar3 < 0x20);
  DAT_100c6aa4[param_1 * 0xa5] = 0;
  __strnset((char *)(DAT_100c6bca + iVar2),0,0x20);
  __close(*(int *)(DAT_100c6aa0 + iVar2));
  return;
}
