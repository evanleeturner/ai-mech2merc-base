/* SPDX-License-Identifier: MIT */
/* mercsw 10007f49 */
/* mercsw 10007f49: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a502c[];
extern undefined4 DAT_100a5030;
extern undefined4 DAT_100a5034;
extern undefined4 DAT_100a5038;
extern undefined4 DAT_100a503c;
extern undefined4 PTR_DAT_100a4fa8[];
extern undefined4 PTR_DAT_100a5028[];
bool __cdecl FUN_10007440(int * param_1, int * param_2, int param_3);

void __cdecl FUN_10007f49(int param_1, int param_2)

{
  undefined *puVar1;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  if (((-1 < param_1) && (((param_1 < 3 || (param_1 == 4)) && (-1 < param_2)))) && (param_2 < 8)) {
    if (param_1 == 0) {
      if (-1 < DAT_100a5030) {
        if (param_2 == 0) {
          local_8 = (int *)(PTR_DAT_100a4fa8[DAT_100a5030] + DAT_100a5034 * 0xc);
          DAT_100a5034 = (uint)(DAT_100a5034 == 0);
        }
        else {
          local_8 = (int *)(PTR_DAT_100a4fa8[DAT_100a5030] + param_2 * 0xc);
        }
      }
      if (-1 < DAT_100a5038) {
        if (param_2 == 0) {
          local_c = (int *)(PTR_DAT_100a4fa8[DAT_100a5038] + DAT_100a503c * 0xc);
          DAT_100a503c = (uint)(DAT_100a503c == 0);
        }
        else {
          local_c = (int *)(PTR_DAT_100a4fa8[DAT_100a5038] + param_2 * 0xc);
        }
      }
    }
    else {
      puVar1 = (undefined *)(PTR_DAT_100a5028[param_1 * 2]);
      if (-1 < (int)puVar1) {
        if (param_2 == 0) {
          local_8 = (int *)(PTR_DAT_100a4fa8[(int)puVar1] +
                           *(int *)(DAT_100a502c + param_1 * 8) * 0xc);
          if (*(int *)(DAT_100a502c + param_1 * 8) == 0) {
            *(undefined4 *)(DAT_100a502c + param_1 * 8) = 1;
          }
          else {
            *(undefined4 *)(DAT_100a502c + param_1 * 8) = 0;
          }
        }
        else {
          local_8 = (int *)(PTR_DAT_100a4fa8[(int)puVar1] + param_2 * 0xc);
        }
      }
      local_c = (int *)0x0;
    }
    if ((local_8 != (int *)0x0) || (local_c != (int *)0x0)) {
      FUN_10007440(local_8,local_c,-1);
    }
  }
  return;
}
