/* SPDX-License-Identifier: MIT */
/* mercsw 1001e55a */
/* mercsw 1001e55a: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_101e8546[];
int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount);

ushort __cdecl FUN_1001e55a(int param_1, char * str2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  
  bVar3 = false;
  uVar1 = *(ushort *)(*(int *)(DAT_101e8546 + param_1 * 0x14a) + 0xc);
  iVar2 = *(int *)(DAT_101e8546 + param_1 * 0x14a);
  uVar4 = 0;
  while (!bVar3 && uVar4 < uVar1) {
    iVar5 = _strncmp((char *)((uint)uVar4 * 0x18 + iVar2 + 0xe),str2,4);
    if (iVar5 == 0) {
      bVar3 = true;
    }
    else {
      uVar4 = uVar4 + 1;
    }
  }
  if (!bVar3) {
    uVar4 = 0xffff;
  }
  return uVar4;
}
