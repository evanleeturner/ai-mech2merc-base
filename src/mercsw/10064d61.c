/* SPDX-License-Identifier: MIT */
/* mercsw 10064d61 */
/* mercsw 10064d61: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10064ea3(uint param_1);
undefined4 __cdecl FUN_10064e6a(byte param_1);

undefined4 __cdecl FUN_10064d61(uint * param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10064ea3(*param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_10064ea3(param_1[1]);
    if (iVar1 == 0) {
      iVar1 = FUN_10064e6a((int)((unsigned int)(((byte)param_1[2] >> 3 & 1)) << (3)) | ((byte)param_1[2] & 0x80) |
                           (int)((unsigned int)(((byte)param_1[2] >> 4 & 7)) << (4)) | ((byte)param_1[2] & 7));
      if (iVar1 == 0) {
        iVar1 = FUN_10064e6a(*(byte *)((int)param_1 + 9));
        if (iVar1 == 0) {
          iVar1 = FUN_10064e6a(*(byte *)((int)param_1 + 10));
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
  return uVar2;
}
