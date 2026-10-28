/* SPDX-License-Identifier: MIT */
/* mercsw 10013763 */
/* mercsw 10013763: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined2 DAT_100aa1d0;
extern undefined4 DAT_100aa1f4;
extern undefined4 DAT_100aa210;
extern int DAT_100adf38;
extern undefined4 DAT_100adf98;
extern undefined DAT_101eb510[];
extern int DAT_101eb518;
undefined __stdcall FUN_10013716(void);
int __cdecl FUN_10011e80(int param_1);

void __cdecl FUN_10013763(undefined4 param_1, int param_2)

{
  int iVar1;
  int local_8;
  
  if (DAT_100adf38 != param_2) {
    if (DAT_100aa1f4 == 1) {
      DAT_101eb510[param_2] = 1;
      for (local_8 = 0; (local_8 < DAT_101eb518 && (DAT_101eb510[local_8] == '\x01'));
          local_8 = local_8 + 1) {
      }
      if (DAT_101eb518 == local_8) {
        FUN_10013716();
      }
    }
    else {
      iVar1 = FUN_10011e80(DAT_100aa210);
      if (iVar1 == param_2) {
        DAT_100adf98 = DAT_100adf98 | 1;
        DAT_100aa1d0 = 1;
      }
    }
  }
  return;
}
