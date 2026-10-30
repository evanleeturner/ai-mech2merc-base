/* SPDX-License-Identifier: MIT */
/* mercsw 10070381 */
/* mercsw 10070381: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b4438[];
extern undefined4 DAT_100c7fd8;
extern undefined4 DAT_100c7fdc;
extern undefined DAT_100eedb0[];
UINT __stdcall MapVirtualKeyA(UINT, UINT);
int __cdecl _tolower(int _C);
short __stdcall GetKeyState(int);

void __cdecl FUN_10070381(UINT code)

{
  ushort uVar1;
  UINT UVar2;
  int iVar3;
  ushort local_8;
  
  local_8 = *(ushort *)(DAT_100b4438 + code * 2);
  if (local_8 == 0) {
    UVar2 = MapVirtualKeyA(code,2);
    iVar3 = _tolower((int)(short)(char)UVar2);
    local_8 = (ushort)iVar3;
  }
  if (local_8 != 0) {
    uVar1 = GetKeyState(0x11);
    if ((uVar1 & 0x1000) != 0) {
      local_8 = local_8 | 0x100;
    }
    uVar1 = GetKeyState(0x12);
    if ((uVar1 & 0x1000) != 0) {
      local_8 = local_8 | 0x400;
    }
    uVar1 = GetKeyState(0x10);
    if ((uVar1 & 0x1000) != 0) {
      local_8 = local_8 | 0x200;
    }
    *(ushort *)(DAT_100eedb0 + DAT_100c7fdc * 2) = local_8;
    DAT_100c7fdc = DAT_100c7fdc + 1;
    if (DAT_100c7fdc == 0x40) {
      DAT_100c7fdc = 0;
    }
    else if ((DAT_100c7fd8 == DAT_100c7fdc) &&
            (DAT_100c7fd8 = DAT_100c7fd8 + 1, DAT_100c7fd8 == 0x40)) {
      DAT_100c7fd8 = 0;
    }
  }
  return;
}
