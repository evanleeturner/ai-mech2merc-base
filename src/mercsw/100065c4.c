/* SPDX-License-Identifier: MIT */
/* mercsw 100065c4 */
/* mercsw 100065c4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a4108;
extern undefined4 DAT_100a410c;
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100ab324;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b3218;
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_10005207(int param_1, int * param_2, uint param_3);
undefined __cdecl FUN_10005624(int param_1, int * param_2, uint param_3, int param_4, int param_5);
undefined __cdecl FUN_100300e2(int param_1, int param_2, uint param_3);

void __cdecl FUN_100065c4(int param_1, int * param_2, int param_3, uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  int local_14;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_18 = 0;
  if ((((((undefined4)(*(int *)(*param_2 + 4)) != DAT_100adf38) || (*(char *)(DAT_100adf34 + 1) == '\0')) &&
       (DAT_100ab324 != 0)) && ((DAT_100aa1ac == 0 || ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38)))) &&
     (0 < param_3)) {
    bVar5 = (param_4 & 0x8000) != 0;
    if (bVar5) {
      param_4 = param_4 & 0xffff7fff;
    }
    if ((0 < (int)param_4) && ((int)param_4 < 9)) {
      if (param_4 == 3) {
        param_4 = FUN_10051f43(3);
        if (param_4 == 0) {
          param_4 = 2;
        }
        else if (param_4 == 1) {
          param_4 = 3;
        }
        else if (param_4 == 2) {
          param_4 = 4;
        }
      }
      iVar1 = param_2[0x16] + param_4 * 0x28;
      iVar3 = iVar1 + -0x28;
      if ((bVar5) && (((param_4 == 2 || (param_4 == 4)) || (param_4 == 3)))) {
        local_8 = 1;
        local_c = ((int)*(short *)(iVar1 + -2) & 0xf0U) >> 4;
      }
      else {
        local_c = (int)*(short *)(iVar1 + -2) & 0xf;
      }
      piVar2 = (int *)(iVar3 + local_8 * 4);
      *piVar2 = *piVar2 - param_3;
      *(ushort *)(iVar1 + -2) = *(ushort *)(iVar1 + -2) | 0x8000;
      if (*(int *)(iVar3 + local_8 * 4) < 1) {
        if ((((*(ushort *)(iVar1 + -2) & 0x4000) == 0) && ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38))
           && (param_2[0xf5] == 2)) {
          FUN_10003742(0x101,100,0x40,5,0x50);
        }
        *(ushort *)(iVar1 + -2) = *(ushort *)(iVar1 + -2) | 0x4000;
        *(int *)(iVar1 + -0x20) = *(int *)(iVar1 + -0x20) + *(int *)(iVar3 + local_8 * 4);
        *(undefined4 *)(iVar3 + local_8 * 4) = 0;
        if (((((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38) && ((param_4 == 1 || (param_4 == 3)))) &&
            (param_2[0xf5] != 4)) && (0x20000 < param_3)) {
          DAT_100b3218 = 1;
        }
        if (*(int *)(iVar1 + -0x20) < 1) {
          FUN_10005207(param_1,param_2,param_4);
          return;
        }
        for (local_14 = 0; iVar4 = FUN_10051f43(5), local_14 < iVar4; local_14 = local_14 + 1) {
          iVar4 = FUN_10051f43(100);
          if ((iVar4 < 0x14) && (0 < *(short *)(iVar1 + -4))) {
            if (iVar4 == 0xc) {
              FUN_10005207(param_1,param_2,param_4);
              return;
            }
            iVar6 = 0;
            iVar4 = FUN_10051f43((int)*(short *)(iVar1 + -4));
            FUN_10005624(param_1,param_2,param_4,iVar4,iVar6);
          }
        }
      }
      if (local_c != 0) {
        if ((undefined4)(*(int *)(*param_2 + 4)) == DAT_100adf38) {
          local_18 = 0xf - ((*(int *)(iVar1 + -0x20) + *(int *)(iVar3 + local_8 * 4) / DAT_100a410c)
                           * 3) / (int)(local_c << 0x10);
        }
        else {
          local_18 = 0xf - ((*(int *)(iVar1 + -0x20) + *(int *)(iVar3 + local_8 * 4) / DAT_100a4108)
                           * 3) / (int)(local_c << 0x10);
        }
      }
      FUN_100300e2(*(int *)(*param_2 + 0x40),local_18,param_4);
    }
  }
  return;
}
