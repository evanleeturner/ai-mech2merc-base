/* SPDX-License-Identifier: MIT */
/* mercsw 10030a05 */
/* mercsw 10030a05: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ada50;
extern undefined4 * DAT_100ada58;
extern undefined4 DAT_100ada5c;
extern undefined4 DAT_100b3904;
extern undefined DAT_10168700[];
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_10030fd2(int param_1);

void __stdcall FUN_10030a05(void)

{
  uint uVar1;
  uint uVar2;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  int local_8;
  
  local_20 = 0;
  if (((DAT_100ada58 != (undefined4 *)0x0) && (DAT_100ada5c != 0)) && (DAT_100ada50 != 0)) {
    for (local_c = DAT_100ada58; local_c != (undefined4 *)0x0; local_c = (undefined4 *)local_c[4]) {
      switch(local_c[1]) {
      case 1:
        local_8 = local_c[2];
        local_c[5] = *(undefined4 *)(local_8 + 0x50);
        local_c[6] = *(undefined4 *)(local_8 + 0x74);
        local_c[7] = *(undefined4 *)(local_8 + 0x58);
        FUN_1002f37a(local_c[0xc],local_c[5],local_c[6],local_c[7]);
        FUN_1002fbc0((int *)local_c[0xc]);
        break;
      case 2:
        FUN_1002f322(*(int *)(local_c[2] + 0x30),&local_10,&local_18,&local_1c);
        local_c[5] = local_10;
        local_c[6] = 0;
        local_c[7] = local_1c;
        FUN_1002f37a(local_c[0xc],local_c[5],local_c[6],local_c[7]);
        FUN_1002fbc0((int *)local_c[0xc]);
        break;
      case 3:
      case 4:
      case 5:
        break;
      case 6:
        local_c[10] = local_c[10] + DAT_100b3904;
        if ((int)local_c[10] < (int)local_c[8]) {
          uVar1 = ((local_c[8] + local_c[10] * -2) * local_c[9]) / (int)local_c[8];
          uVar2 = (int)uVar1 >> 0x1f;
          local_c[0xb] = local_c[9] - ((uVar1 ^ uVar2) - uVar2);
        }
        else if (local_20 < 0x40) {
          *(undefined4 *)(DAT_10168700 + local_20 * 4) = *local_c;
          local_20 = local_20 + 1;
        }
      }
    }
    if (local_20 != 0) {
      for (local_14 = 0; local_14 < local_20; local_14 = local_14 + 1) {
        FUN_10030fd2(*(int *)(DAT_10168700 + local_14 * 4));
      }
    }
  }
  return;
}
