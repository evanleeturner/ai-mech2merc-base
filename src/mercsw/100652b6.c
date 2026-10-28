/* SPDX-License-Identifier: MIT */
/* mercsw 100652b6 */
/* mercsw 100652b6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100c7e88;
extern undefined4 DAT_100c7f98;
extern undefined4 DAT_100c7fa0;
undefined4 __cdecl FUN_10064e6a(byte param_1);
undefined4 __cdecl FUN_10064cd8(void * param_1, uint param_2);

undefined4 __stdcall FUN_100652b6(void)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = (DAT_100c7fa0 != 8) + (char)DAT_100c7f98;
  if (bVar1 != 0) {
    iVar2 = FUN_10064e6a(bVar1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_10064cd8(&DAT_100c7e88,(uint)bVar1);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    DAT_100c7f98 = 0;
    DAT_100c7e88 = 0;
    DAT_100c7fa0 = 8;
  }
  return 0;
}
