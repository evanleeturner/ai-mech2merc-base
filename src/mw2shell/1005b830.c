/* SPDX-License-Identifier: MIT */
/* mw2shell 1005b830 */
/* mw2shell 1005b830: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a55d8[];
extern undefined4 DAT_100c40c0;
extern undefined4 DAT_100c40c4;
extern undefined DAT_100c6080[];
UINT __stdcall MapVirtualKeyA(UINT, UINT);
int __cdecl _tolower(int _C);
short __stdcall GetKeyState(int);

void __cdecl FUN_1005b830(UINT param_1)

{
  ushort uVar1;
  UINT UVar2;
  int iVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(DAT_100a55d8 + param_1 * 2);
  if (uVar4 == 0) {
    UVar2 = MapVirtualKeyA(param_1,2);
    iVar3 = _tolower((int)(char)UVar2);
    uVar4 = (ushort)iVar3;
    if (uVar4 == 0) {
      return;
    }
  }
  uVar1 = GetKeyState(0x11);
  if ((uVar1 & 0x1000) != 0) {
    uVar4 = uVar4 | 0x100;
  }
  uVar1 = GetKeyState(0x12);
  if ((uVar1 & 0x1000) != 0) {
    uVar4 = uVar4 | 0x400;
  }
  uVar1 = GetKeyState(0x10);
  if ((uVar1 & 0x1000) != 0) {
    uVar4 = uVar4 | 0x200;
  }
  *(ushort *)(DAT_100c6080 + DAT_100c40c4 * 2) = uVar4;
  DAT_100c40c4 = DAT_100c40c4 + 1;
  if (DAT_100c40c4 != 0x40) {
    if ((DAT_100c40c0 == DAT_100c40c4) && (DAT_100c40c0 = DAT_100c40c0 + 1, DAT_100c40c0 == 0x40)) {
      DAT_100c40c0 = 0;
    }
    return;
  }
  DAT_100c40c4 = 0;
  return;
}
