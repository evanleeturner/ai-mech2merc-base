/* SPDX-License-Identifier: MIT */
/* mercsw 10046a29 */
/* mercsw 10046a29: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b04b8;
extern undefined4 DAT_100b04c0;
extern undefined4 DAT_100b04c4;
extern undefined4 DAT_100c7cf0;
extern undefined4 DAT_100c7cf4;
extern undefined4 DAT_100c7cf8;
undefined4 __stdcall FUN_10046563(void);
undefined __cdecl FUN_10046824(uint * param_1);
undefined __stdcall FUN_100463c4(void);
undefined __cdecl FUN_100463ee(undefined4 param_1, int param_2);

void __cdecl FUN_10046a29(int * param_1, int param_2)

{
  int iVar1;
  int iVar2;
  uint local_14 [4];
  
  if (DAT_100b04c4 != 0) {
    iVar1 = FUN_10046563();
    switch(iVar1) {
    case 1:
    case 2:
      break;
    case 3:
    case 4:
      FUN_10046824(local_14);
      iVar2 = local_14[0] + param_2;
      if ((*param_1 <= iVar2) && (iVar2 <= param_1[1])) {
        if (iVar1 == 3) {
          FUN_100463c4();
          FUN_100463ee(*(undefined4 *)(DAT_100b04c0 + (iVar2 - DAT_100b04b8) * 4),0);
        }
        else if (iVar1 == 4) {
          FUN_100463ee(*(undefined4 *)(DAT_100b04c0 + (iVar2 - DAT_100b04b8) * 4),0);
          FUN_100463c4();
          DAT_100c7cf4 = 0;
          DAT_100c7cf8 = 0;
          DAT_100c7cf0 = iVar2;
        }
      }
    }
  }
  return;
}
