/* SPDX-License-Identifier: MIT */
/* mw2shell 1005a230 */
/* mw2shell 1005a230: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_100c6aa6[];
int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount);

ushort __cdecl FUN_1005a230(int param_1, char * param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  bVar3 = false;
  uVar6 = 0;
  uVar5 = 0;
  iVar2 = *(int *)(DAT_100c6aa6 + param_1 * 0x14a);
  uVar1 = *(ushort *)(iVar2 + 0xc);
  if (uVar1 != 0) {
    do {
      iVar4 = _strncmp((char *)(iVar2 + 0xe + uVar6 * 0x18),param_2,4);
      if (iVar4 == 0) {
        bVar3 = true;
      }
      else {
        uVar6 = (uint)(ushort)((short)uVar6 + 1);
      }
      uVar5 = (ushort)uVar6;
    } while (!bVar3 && uVar5 < uVar1);
  }
  if (!bVar3) {
    return 0xffff;
  }
  return uVar5;
}
