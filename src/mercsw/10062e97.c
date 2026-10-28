/* SPDX-License-Identifier: MIT */
/* mercsw 10062e97 */
/* mercsw 10062e97: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_100a7ba8[];
extern undefined4 DAT_100ab30c;
extern undefined4 DAT_100adf38;

void __cdecl FUN_10062e97(int * param_1)

{
  int iVar1;
  bool bVar2;
  int local_8;
  
  bVar2 = false;
  local_8 = 0;
  if (0 < param_1[0xf7]) {
    while (!bVar2) {
      param_1[0xf8] = param_1[0xf8] + 1;
      param_1[0xf8] = param_1[0xf8] % 0xe;
      iVar1 = *(int *)(param_1[0xf8] * 0x40 + 4 + param_1[0x15]);
      if (-1 < iVar1) {
        if ((DAT_100ab30c != 0) && ((undefined4)(*(int *)(*param_1 + 4)) == DAT_100adf38)) {
          return;
        }
        if (*(int *)(param_1[0xf8] * 0x40 + param_1[0x15]) == -1) {
          param_1[0xf8] = 0;
        }
        if (((*(int *)(param_1[0xf8] * 0x40 + 8 + param_1[0x15]) != -1) &&
            ((DAT_100a7ba8[iVar1 * 0x68] & 4) != 0)) || (local_8 = local_8 + 1, local_8 == 0xe))
        {
          bVar2 = true;
        }
      }
    }
  }
  return;
}
