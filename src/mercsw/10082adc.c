/* SPDX-License-Identifier: MIT */
/* mercsw 10082adc */
/* mercsw 10082adc: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b9f60;
extern undefined4 DAT_100eef40[];
extern undefined DAT_10215670[];
extern undefined DAT_10215674[];
extern undefined DAT_10215678[];
extern undefined DAT_1021567c[];
extern undefined DAT_10215688[];
extern undefined DAT_1021568c[];
extern undefined DAT_10215690[];
extern undefined DAT_10215694[];
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_10083a59(uint param_1, undefined4 param_2, uint param_3, int * param_4, undefined4 * param_5, uint * param_6, int * param_7);

undefined4 __cdecl FUN_10082adc(uint param_1, int param_2, uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int *local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (param_2 < 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 < DAT_100b9f60) {
    if ((param_3 & 0xe) == 0) {
      local_18 = DAT_100eef40[param_1];
      iVar1 = param_2 * 0x54;
      local_24 = (int *)(DAT_10215670 + iVar1);
      if (*local_24 == 0) {
        uVar2 = 0xfffffffd;
      }
      else if (((param_3 & 0x10000) == 0) || ((*(ushort *)(DAT_10215694 + iVar1) & 0x40) != 0)) {
        if ((*(ushort *)(DAT_10215694 + iVar1) & 1) == 0) {
          if ((param_3 & 0x100) != 0) {
            return 0xfffffffa;
          }
        }
        else if (*(uint *)(DAT_10215678 + iVar1) != (param_1 | 0x200)) {
          return 0xfffffffa;
        }
        if (*(int *)(local_18 + 8) == *(int *)(DAT_1021567c + iVar1)) {
          if (*(int *)(DAT_10215674 + iVar1) != 0) {
            FUN_1002f322(*(int *)(DAT_10215674 + iVar1),(undefined4 *)(DAT_10215688 + iVar1),
                         (undefined4 *)(DAT_1021568c + iVar1),(undefined4 *)(DAT_10215690 + iVar1)
                        );
          }
          iVar1 = local_24[6];
          local_8 = local_24[7];
          local_10 = local_24[8];
          local_c = local_10 - *(int *)(local_18 + 0x58);
          FUN_10083a59(iVar1 - *(int *)(local_18 + 0x50),local_8 - *(int *)(local_18 + 0x54),local_c
                       ,&local_20,&local_28,&local_1c,&local_14);
          *(int *)(local_18 + 200) = iVar1;
          *(int *)(local_18 + 0xcc) = local_8;
          *(int *)(local_18 + 0xd0) = local_10;
          *(int *)(local_18 + 0xd4) = local_20;
          *(undefined4 *)(local_18 + 0xc4) = local_28;
          *(uint *)(local_18 + 0xc0) = local_1c;
          *(int *)(local_18 + 0xd8) = local_14;
          *(int *)(local_18 + 0xf0) = iVar1;
          *(int *)(local_18 + 0xf4) = local_8;
          *(int *)(local_18 + 0xf8) = local_10;
          *(int *)(local_18 + 0xfc) = local_20;
          *(undefined4 *)(local_18 + 0xec) = local_28;
          *(uint *)(local_18 + 0xe8) = local_1c;
          *(int *)(local_18 + 0x100) = local_14;
          uVar2 = 1;
        }
        else {
          uVar2 = 0xfffffffa;
        }
      }
      else {
        uVar2 = 0xfffffffc;
      }
    }
    else {
      uVar2 = 0xfffffff7;
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}
