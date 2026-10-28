/* SPDX-License-Identifier: MIT */
/* mw2shell 1005a570 */
/* mw2shell 1005a570: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100c6aa0[];
extern undefined DAT_100c6aa6[];
extern undefined DAT_100c6aca[];
ushort __cdecl FUN_1005a230(int param_1, char * param_2);
undefined4 __cdecl FUN_1005a2d0(int param_1);
int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount);
uint __cdecl FUN_10059f10(int param_1, void * param_2, uint param_3);

int __cdecl FUN_1005a570(int param_1, char * param_2, uint param_3, void * param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = FUN_1005a230(param_1,param_2);
  if (uVar2 == 0xffff) {
    return -1;
  }
  iVar5 = (int)(short)uVar2;
  iVar1 = param_1 * 0x14a;
  if (*(int *)(DAT_100c6aca + iVar5 * 8 + iVar1) == 0) {
    iVar3 = FUN_1005a2d0(param_1);
    if (iVar3 == -1) {
      return -1;
    }
  }
  uVar4 = (uint)*(ushort *)(*(int *)(DAT_100c6aa6 + iVar1) + 0x22 + iVar5 * 0x18);
  uVar6 = *(int *)(*(int *)(DAT_100c6aca + iVar5 * 8 + iVar1) + 0x1a + (param_3 & 0xffff) * 8) -
          uVar4;
  iVar5 = __write(*(int *)(DAT_100c6aa0 + iVar1),
                  (void *)(*(int *)(*(int *)(DAT_100c6aca + iVar5 * 8 + iVar1) + 0x16 +
                                   (param_3 & 0xffff) * 8) + uVar4),0);
  if (iVar5 == -1) {
    return -1;
  }
  uVar4 = FUN_10059f10(*(int *)(DAT_100c6aa0 + iVar1),param_4,uVar6);
  return (uVar4 == uVar6) - 1;
}
