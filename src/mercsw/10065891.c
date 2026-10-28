/* SPDX-License-Identifier: MIT */
/* mercsw 10065891 */
/* mercsw 10065891: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10064e6a(byte param_1);
undefined4 __cdecl FUN_10064ea3(uint param_1);

undefined4 __cdecl FUN_10065891(byte * param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10064e6a(*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10064ea3(*(uint *)(param_1 + 1));
    if (iVar1 == 0) {
      iVar1 = FUN_10064ea3(*(uint *)(param_1 + 5));
      if (iVar1 == 0) {
        iVar1 = FUN_10064ea3(*(uint *)(param_1 + 9));
        if (iVar1 == 0) {
          iVar1 = FUN_10064ea3(*(uint *)(param_1 + 0xd));
          if (iVar1 == 0) {
            iVar1 = FUN_10064e6a((int)((unsigned int)((param_1[0x11] >> 3 & 3)) << (3)) | (int)((unsigned int)((param_1[0x11] >> 5 & 1)) << (5)) |
                                 (int)((unsigned int)((param_1[0x11] >> 6 & 1)) << (6)) | (param_1[0x11] & 0x80) |
                                 (param_1[0x11] & 7));
            if (iVar1 == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = 2;
            }
          }
          else {
            uVar2 = 2;
          }
        }
        else {
          uVar2 = 2;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}
