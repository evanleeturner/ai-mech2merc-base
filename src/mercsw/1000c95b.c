/* SPDX-License-Identifier: MIT */
/* mercsw 1000c95b */
/* mercsw 1000c95b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7570;
extern undefined4 DAT_100a7574;
extern undefined4 DAT_100a7584;
extern undefined4 DAT_100a7588;
extern undefined4 DAT_101f5518;
extern undefined4 DAT_10215624;
undefined __stdcall FUN_1000d14a(void);

int __cdecl FUN_1000c95b(undefined4 param_1)

{
  undefined4 local_8;
  
  local_8 = -1;
  if (DAT_100a7588 == 0) {
    FUN_1000d14a();
  }
  if ((DAT_100a7584 < 0x402) && (DAT_101f5518 < DAT_10215624)) {
    local_8 = DAT_100a7584;
    *(int *)(DAT_100a7570 + DAT_101f5518 * 4) = DAT_100a7584;
    *(undefined4 *)(DAT_100a7574 + DAT_101f5518 * 4) = param_1;
    DAT_100a7584 = DAT_100a7584 + 1;
    DAT_101f5518 = DAT_101f5518 + 1;
  }
  return local_8;
}
