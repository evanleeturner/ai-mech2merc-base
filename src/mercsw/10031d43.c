/* SPDX-License-Identifier: MIT */
/* mercsw 10031d43 */
/* mercsw 10031d43: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7b60;
extern undefined4 DAT_100aafd8;
extern undefined DAT_100adca0[];
extern undefined DAT_100f3040[];
extern undefined DAT_101f5300[];
extern undefined PTR_DAT_100a71b0[];
extern undefined4 PTR_DAT_100a730c;
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_10066209(int param_1, int param_2);
int __cdecl FUN_10065e40(undefined4 param_1, int param_2, int param_3);
undefined4 * __cdecl FUN_100662fd(uint * param_1, undefined4 * param_2);
int * __cdecl FUN_10066004(undefined4 param_1, int * param_2, int * param_3);
undefined __cdecl FUN_100603ff(int param_1);
undefined __cdecl FUN_1003b59a(int param_1);
undefined __cdecl FUN_1003b954(int * param_1);
undefined __stdcall FUN_1005c952(void);
undefined __stdcall FUN_1005bcb0(void);
undefined __stdcall FUN_1006a46b(void);

void __stdcall FUN_10031d43(void)

{
  uint local_10 [3];
  
  for (local_10[2] = 0; (int)local_10[2] < 8; local_10[2] = local_10[2] + 1) {
    FUN_10066209((int)(DAT_100f3040 + local_10[2] * 0x14),(int)(DAT_100f3040 + local_10[2] * 0x14)
                );
    FUN_10065e40((undefined4)(DAT_101f5300),(int)(DAT_100f3040 + local_10[2] * 0x14),
                 (int)(DAT_100f3040 + local_10[2] * 0x14));
  }
  for (local_10[2] = 0; (int)local_10[2] < 5; local_10[2] = local_10[2] + 1) {
    FUN_10066209((int)(PTR_DAT_100a71b0 + local_10[2] * 5),
                 (int)(PTR_DAT_100a71b0 + local_10[2] * 5));
    FUN_10065e40((undefined4)(DAT_101f5300),(int)(PTR_DAT_100a71b0 + local_10[2] * 5),
                 (int)(PTR_DAT_100a71b0 + local_10[2] * 5));
  }
  FUN_100662fd((uint *)PTR_DAT_100a730c,(undefined4 *)PTR_DAT_100a730c);
  FUN_10066004((undefined4)(DAT_101f5300),(int *)PTR_DAT_100a730c,(int *)PTR_DAT_100a730c);
  for (local_10[2] = 0; (int)local_10[2] < 6; local_10[2] = local_10[2] + 1) {
    FUN_100662fd((uint *)(DAT_100adca0 + local_10[2] * 2),(undefined4 *)(DAT_100adca0 + local_10[2] * 2));
    FUN_10066004((undefined4)(DAT_101f5300),(int *)(DAT_100adca0 + local_10[2] * 2),(int *)(DAT_100adca0 + local_10[2] * 2));
  }
  FUN_100603ff(0);
  FUN_1003b59a((int)PTR_DAT_100aaf68);
  FUN_1003b954((int *)PTR_DAT_100aaf68);
  DAT_100a7b60 = 0;
  local_10[0] = DAT_100aafd8;
  local_10[1] = 0;
  FUN_100662fd(local_10,local_10);
  FUN_10066004((undefined4)(DAT_101f5300),(int *)local_10,(int *)local_10);
  DAT_100aafd8 = local_10[0];
  FUN_1005c952();
  FUN_1005bcb0();
  FUN_1006a46b();
  return;
}
