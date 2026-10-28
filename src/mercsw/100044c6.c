/* SPDX-License-Identifier: MIT */
/* mercsw 100044c6 */
/* mercsw 100044c6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab324;
extern undefined4 DAT_100adf38;
undefined __cdecl FUN_10005624(int param_1, int * param_2, uint param_3, int param_4, int param_5);
undefined __cdecl FUN_100082c4(int param_1, int param_2);
undefined __cdecl FUN_10004b19(int param_1, int * param_2);

void __cdecl FUN_100044c6(int param_1, int * param_2)

{
  int iVar1;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  
  if (DAT_100ab324 != 0) {
    if ((param_2[0x17] != 0) && (param_2[0x18] != 0)) {
      for (local_c = 0; local_c < 8; local_c = local_c + 1) {
        iVar1 = param_2[0x16] + local_c * 0x28;
        if ((*(ushort *)(iVar1 + 0x26) & 0x2000) == 0) {
          for (local_10 = 0; local_10 < *(short *)(iVar1 + 0x24); local_10 = local_10 + 1) {
            if (10000 < *(ushort *)(iVar1 + 0xc + local_10 * 2)) {
              local_1c = param_2[0x17];
              for (local_14 = 0; local_14 < param_2[0xff]; local_14 = local_14 + 1) {
                if ((((uint)*(ushort *)(iVar1 + 0xc + local_10 * 2) == (uint)((int)*(short *)(local_1c + 4))
                     ) && (*(int *)(local_1c + 0x12) < param_2[0x18])) &&
                   (0 < *(int *)((int)param_2 + *(int *)(local_1c + 0x12) * 0x3a + 0x66))) {
                  FUN_10005624(param_1,param_2,local_c + 1,local_10,0);
                  return;
                }
                local_1c = local_1c + 0x1e;
              }
            }
          }
        }
      }
    }
    if ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38) {
      FUN_100082c4(0,-1);
    }
    FUN_10004b19(param_1,param_2);
  }
  return;
}
