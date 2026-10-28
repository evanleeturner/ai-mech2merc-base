/* SPDX-License-Identifier: MIT */
/* mercsw 10054e09 */
/* mercsw 10054e09: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined __cdecl FUN_10054f6b(short * param_1, uint * param_2);
undefined __cdecl FUN_10019e33(int param_1, int * param_2, uint param_3);

void __cdecl FUN_10054e09(short * param_1)

{
  uint uVar1;
  uint uVar2;
  int local_108;
  uint *local_104;
  uint local_100 [60];
  int *local_10;
  int local_c;
  int local_8;
  
  local_c = (int)*param_1;
  local_10 = (int *)(param_1 + 6);
  local_104 = local_100;
  local_108 = local_c;
  do {
    if (local_108 == 0) {
LAB_10054f3f:
      if (0 < local_c) {
        FUN_10019e33(local_c,(int *)local_100,(uint)(ushort)param_1[1]);
      }
      return;
    }
    local_8 = *local_10;
    local_10 = local_10 + 1;
    uVar1 = *(uint *)(local_8 + 0xc);
    uVar2 = *(uint *)(local_8 + 0x10);
    if (((((int)uVar1 < -0x3fff) || (0x3ffe < (int)uVar1)) || ((int)uVar2 < -0x3fff)) ||
       (0x3ffe < (int)uVar2)) {
      local_c = FUN_10054f6b(param_1,local_100);
      goto LAB_10054f3f;
    }
    *local_104 = uVar1;
    local_104[1] = uVar2;
    local_104[3] = *(uint *)(local_8 + 0x14);
    local_104[4] = *(uint *)(local_8 + 0x18);
    local_104[2] = *(uint *)(local_8 + 0x2c);
    local_104[5] = *(uint *)(local_8 + 8);
    local_104 = local_104 + 6;
    local_108 = local_108 + -1;
  } while( true );
}
