/* SPDX-License-Identifier: MIT */
/* mercsw 10082d2f */
/* mercsw 10082d2f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100adf38;
extern int DAT_100b38d8;
extern undefined4 DAT_100b9f68;
extern undefined4 DAT_100eef40[];
undefined4 __cdecl FUN_1004d5e3(int param_1);
undefined4 __cdecl FUN_1002f28d(int param_1);
undefined __cdecl FUN_10083a59(uint param_1, undefined4 param_2, uint param_3, int * param_4, undefined4 * param_5, uint * param_6, int * param_7);

undefined4 __cdecl FUN_10082d2f(int param_1, int param_2, uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  if (param_2 < 0) {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < DAT_100b38d8) {
    if ((param_3 & 0x15) == 0) {
      local_1c = DAT_100eef40[param_1];
      local_14 = (int *)DAT_100eef40[param_2];
      if (((DAT_100b9f68 == 0) && ((*(ushort *)(local_14 + 5) & 0x10) != 0)) &&
         (param_1 == DAT_100adf38)) {
        uVar1 = 0xfffffffd;
      }
      else if ((*(ushort *)(local_14 + 5) & 6) == 0) {
        if (local_14[1] == param_1) {
          uVar1 = 0xfffffffd;
        }
        else if (((param_3 & 0x10000) == 0) || ((*(ushort *)(local_14 + 5) & 0x40) != 0)) {
          if (((param_3 & 0x20000) == 0) || (iVar2 = FUN_1004d5e3(param_2), iVar2 == 0)) {
            if (((param_3 & 0x40000) == 0) || (iVar2 = FUN_1004d5e3(param_2), iVar2 == 1)) {
              if ((DAT_100b9f68 == 0) &&
                 (((*(ushort *)(local_14 + 5) & 0x1400) == 0 && (param_1 == DAT_100adf38)))) {
                uVar1 = 0xfffffffb;
              }
              else if (((*(ushort *)(local_14 + 5) & 0x800) == 0) || (param_1 != DAT_100adf38)) {
                if (local_14[0x10] == 0) {
                  uVar1 = 0xfffffff8;
                }
                else {
                  iVar2 = FUN_1002f28d(local_14[0x10]);
                  if (iVar2 == 0) {
                    uVar1 = 0xfffffff8;
                  }
                  else {
                    iVar2 = local_14[0x14];
                    local_8 = local_14[0x15];
                    local_10 = local_14[0x16];
                    if ((*(int *)(local_1c + 0x1bc) == 1) && (*local_14 == 1)) {
                      local_8 = local_8 - *(int *)(local_14[8] + 0x400);
                    }
                    local_c = local_10 - *(int *)(local_1c + 0x58);
                    FUN_10083a59(iVar2 - *(int *)(local_1c + 0x50),
                                 local_8 - *(int *)(local_1c + 0x54),local_c,&local_24,(undefined4 *)(&local_28),
                                 &local_20,&local_18);
                    if ((((*(ushort *)(local_14 + 5) & 0x1000) == 0) && (0x2ab98 < local_28)) &&
                       (param_1 == DAT_100adf38)) {
                      uVar1 = 0xfffffff9;
                    }
                    else {
                      *(int *)(local_1c + 200) = iVar2;
                      *(int *)(local_1c + 0xcc) = local_8;
                      *(int *)(local_1c + 0xd0) = local_10;
                      *(int *)(local_1c + 0xd4) = local_24;
                      *(int *)(local_1c + 0xc4) = local_28;
                      *(uint *)(local_1c + 0xc0) = local_20;
                      *(int *)(local_1c + 0xd8) = local_18;
                      uVar1 = 1;
                    }
                  }
                }
              }
              else {
                uVar1 = 0xfffffffb;
              }
            }
            else {
              uVar1 = 0xfffffff7;
            }
          }
          else {
            uVar1 = 0xfffffff7;
          }
        }
        else {
          uVar1 = 0xfffffffc;
        }
      }
      else {
        uVar1 = 0xfffffffd;
      }
    }
    else {
      uVar1 = 0xfffffff7;
    }
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}
