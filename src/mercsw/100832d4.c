/* SPDX-License-Identifier: MIT */
/* mercsw 100832d4 */
/* mercsw 100832d4: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b9f64;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef030[];
extern undefined DAT_100ef032[];
extern undefined DAT_100ef040[];
extern undefined DAT_10215680[];
extern undefined DAT_10215694[];
extern undefined DAT_10215696[];
undefined4 __cdecl FUN_10082d2f(int param_1, int param_2, uint param_3);
undefined4 __cdecl FUN_1008304a(int param_1, int param_2, uint param_3);
undefined4 __cdecl FUN_10082adc(uint param_1, int param_2, uint param_3);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_10083b74(int param_1, int param_2, int param_3);

undefined4 __cdecl FUN_100832d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  bVar6 = true;
  bVar5 = (undefined4)(*(int *)(param_1 + 4)) == DAT_100adf38;
  uVar1 = *(uint *)(param_1 + 0xdc) & 0xff;
  uVar2 = *(uint *)(param_1 + 0xdc) & 0xf00;
  if (uVar2 == 0x100) {
    iVar3 = FUN_10082adc(*(uint *)(param_1 + 4),uVar1,0);
    if ((((-1 < iVar3) &&
         (bVar6 = false, *(int *)(param_1 + 0xc0) < *(int *)(DAT_10215680 + uVar1 * 0x54))) &&
        (*(int *)(*(int *)(param_1 + 0x20) + 0x3f0) != 1)) &&
       ((undefined4)(*(int *)(param_1 + 4)) == DAT_100adf38)) {
      if ((*(ushort *)(DAT_10215694 + uVar1 * 0x54) & 0x20) == 0) {
        *(ushort *)(DAT_10215694 + uVar1 * 0x54) = *(ushort *)(DAT_10215694 + uVar1 * 0x54) | 0x20
        ;
        *(ushort *)(DAT_10215696 + uVar1 * 0x54) =
             *(ushort *)(DAT_10215696 + uVar1 * 0x54) |
             (ushort)((int)((unsigned int)(1) << ((*(byte *)(param_1 + 8) & 0x1f))));
        FUN_10003742(0xfc,100,0x40,5,0x50);
      }
      FUN_10083b74(param_1,1,0);
    }
  }
  else if (uVar2 == 0x200) {
    iVar3 = FUN_10082d2f(*(int *)(param_1 + 4),uVar1,0);
    bVar6 = iVar3 < 0;
  }
  else if (uVar2 == 0x400) {
    iVar3 = FUN_1008304a(*(int *)(param_1 + 4),uVar1,0);
    bVar6 = iVar3 < 0;
  }
  if (bVar6) {
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 0x1000;
    uVar4 = 0;
  }
  else {
    if (bVar5) {
      DAT_100b9f64 = 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x4c) + 0x3b) != '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x3b) = 0;
      if (uVar2 == 0x200) {
        if (((int)((unsigned int)(1) << ((*(byte *)(param_1 + 8) & 0x1f))) & (int)*(short *)(DAT_100eef40[uVar1] + 0x16))
            == 0) {
          if (*(int *)(param_1 + 0xc0) <
              *(int *)(*(int *)(DAT_100eef40[uVar1] + 0x20) + 0x41c) + 20000) {
            if (bVar5) {
              DAT_100b9f64 = 1;
            }
            *(ushort *)(DAT_100eef40[uVar1] + 0x14) =
                 *(ushort *)(DAT_100eef40[uVar1] + 0x14) | 0x20;
            *(ushort *)(DAT_100eef40[uVar1] + 0x16) =
                 *(ushort *)(DAT_100eef40[uVar1] + 0x16) |
                 (ushort)((int)((unsigned int)(1) << ((*(byte *)(param_1 + 8) & 0x1f))));
          }
          else if (bVar5) {
            DAT_100b9f64 = 2;
          }
        }
        else if (bVar5) {
          DAT_100b9f64 = 3;
        }
      }
      else if (uVar2 == 0x400) {
        if (((int)((unsigned int)(1) << ((*(byte *)(param_1 + 8) & 0x1f))) & (int)*(short *)(DAT_100ef032 + uVar1 * 0x40))
            == 0) {
          if (*(int *)(param_1 + 0xc0) < *(int *)(DAT_100ef040 + uVar1 * 0x40) + 20000) {
            if (bVar5) {
              DAT_100b9f64 = 1;
            }
            *(ushort *)(DAT_100ef030 + uVar1 * 0x40) =
                 *(ushort *)(DAT_100ef030 + uVar1 * 0x40) | 0x20;
            *(ushort *)(DAT_100ef032 + uVar1 * 0x40) =
                 *(ushort *)(DAT_100ef032 + uVar1 * 0x40) |
                 (ushort)((int)((unsigned int)(1) << ((*(byte *)(param_1 + 8) & 0x1f))));
          }
          else if (bVar5) {
            DAT_100b9f64 = 2;
          }
        }
        else if (bVar5) {
          DAT_100b9f64 = 3;
        }
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}
