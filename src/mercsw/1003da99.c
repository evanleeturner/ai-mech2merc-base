/* SPDX-License-Identifier: MIT */
/* mercsw 1003da99 */
/* mercsw 1003da99: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
extern undefined4 DAT_100aefc4;
extern undefined * DAT_100af098;
extern undefined DAT_100c6d00[];
extern ushort * DAT_100c6d10;
extern undefined DAT_100c6d30[];
extern undefined DAT_100c6d48[];
extern undefined DAT_100c6d58[];
undefined * __cdecl FUN_1003d742(ushort * param_1);
undefined __cdecl FUN_1003e3e3(int param_1, int param_2);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);

void __cdecl FUN_1003da99(ushort * param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  int local_18;
  int local_14 [3];
  undefined *local_8;
  
  if ((DAT_100af098 == DAT_100c6d00) && (param_1 != (ushort *)0x0)) {
    param_1[0x22] = 9999;
    param_1[0x23] = 0;
    param_1[0x24] = 9999;
    param_1[0x25] = 0;
    if (DAT_100aefc0 == 0) {
      if ((*param_1 & 0x1000) == 0) {
        local_8 = DAT_100c6d00;
      }
      else {
        local_8 = DAT_100c6d30;
      }
    }
    else {
      local_8 = FUN_1003d742(param_1);
    }
    FUN_1003e3e3((int)param_1,(int)local_8);
    if (*(int *)(param_1 + 0x12) == 4) {
      *param_1 = *param_1 | 0x800;
    }
    if ((*param_1 & 0x800) == 0) {
      if (DAT_100aefc0 == 0) {
        if (DAT_100c6d10 != (ushort *)0x0) {
          *(ushort **)(DAT_100c6d10 + 6) = param_1;
        }
        *(ushort **)(param_1 + 8) = DAT_100c6d10;
        DAT_100c6d10 = param_1;
        *(undefined **)(param_1 + 6) = DAT_100c6d00;
      }
      else {
        FUN_1002f322(*(int *)(param_1 + 0xc),(undefined4 *)(&local_18),&local_1c,(undefined4 *)(local_14));
        iVar1 = (local_18 + 150000) / 25000;
        iVar2 = (local_14[0] + 150000) / 25000;
        if ((((iVar1 < 0) || (0xb < iVar1)) || (iVar2 < 0)) || (0xb < iVar2)) {
          if (*(int *)(DAT_100aefc4 + 0x10) != 0) {
            *(ushort **)(*(int *)(DAT_100aefc4 + 0x10) + 0xc) = param_1;
          }
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_100aefc4 + 0x10);
          *(ushort **)(DAT_100aefc4 + 0x10) = param_1;
          *(int *)(param_1 + 6) = DAT_100aefc4;
        }
        else {
          if (*(int *)(DAT_100c6d58 + iVar2 * 0x18 + iVar1 * 0x120) != 0) {
            *(ushort **)(*(int *)(DAT_100c6d58 + iVar2 * 0x18 + iVar1 * 0x120) + 0xc) = param_1;
          }
          *(undefined4 *)(param_1 + 8) =
               *(undefined4 *)(DAT_100c6d58 + iVar2 * 0x18 + iVar1 * 0x120);
          *(ushort **)(DAT_100c6d58 + iVar2 * 0x18 + iVar1 * 0x120) = param_1;
          *(undefined **)(param_1 + 6) = DAT_100c6d48 + iVar1 * 0x120 + iVar2 * 0x18;
        }
      }
    }
  }
  return;
}
