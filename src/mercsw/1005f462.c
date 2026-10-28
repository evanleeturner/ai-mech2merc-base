/* SPDX-License-Identifier: MIT */
/* mercsw 1005f462 */
/* mercsw 1005f462: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100b3518;
extern undefined4 DAT_100b3520;
extern undefined4 DAT_100b3524;
extern undefined4 DAT_100b3528;
extern undefined DAT_100f3170[];
undefined __stdcall FUN_1005f69e(void);

undefined4 __cdecl FUN_1005f462(int param_1, int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  bVar1 = false;
  if (DAT_100b3518 == (undefined4)(-2)) {
    FUN_1005f69e();
  }
  if (param_2 == -1) {
    if (DAT_100b3524 != 0) {
      DAT_100b3520 = DAT_100b3520 + 1;
      DAT_100b3524 = 0;
    }
    param_2 = DAT_100b3520;
  }
  if (((param_1 < 1) || (param_2 < 0)) || (0x1ff < param_2)) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*(short *)(DAT_100f3170 + param_2 * 0x100) < 1) {
      DAT_100b3528 = 0;
    }
    else {
      DAT_100b3528 = 1;
      while (!bVar1) {
        local_c = local_c + 1;
        if (0x1f < local_c) {
          DAT_100b3528 = 1;
          return 0xffffffff;
        }
        if (*(short *)(DAT_100f3170 + local_c * 8 + param_2 * 0x100) == -1) {
          bVar1 = true;
        }
      }
    }
    *(short *)(DAT_100f3170 + local_c * 8 + param_2 * 0x100) = (short)param_1;
    uVar2 = 0;
  }
  return uVar2;
}
