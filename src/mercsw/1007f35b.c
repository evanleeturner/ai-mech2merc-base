/* SPDX-License-Identifier: MIT */
/* mercsw 1007f35b */
/* mercsw 1007f35b: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100aa558;
extern undefined4 DAT_100aa55c;
extern undefined4 DAT_100aa560;
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_10080048(int * param_1);
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FixedMul16(int param_1, int param_2);

undefined4 __cdecl FUN_1007f35b(int * param_1, int * param_2, int * param_3, int * param_4, int * param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  int local_20;
  
  iVar6 = *(int *)(*param_1 + 4);
  iVar7 = param_1[0x107];
  local_20 = 0;
  do {
    if (DAT_100b38d8 <= local_20) {
      return 0;
    }
    iVar1 = DAT_100eef40[local_20];
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) != iVar6)) &&
        (piVar2 = *(int **)(iVar1 + 0x20), piVar2 != (int *)0x0)) &&
       (((*(ushort *)(piVar2 + 0x110) & 0x100) == 0 && ((*(ushort *)(*piVar2 + 0x14) & 0x4000) == 0)
        ))) {
      if ((*(int *)(iVar1 + 0x7c) == iVar6) && (local_20 < iVar6)) {
        if (piVar2[0xf5] == 4) {
          FUN_10080048(piVar2);
          return 0;
        }
        *param_5 = iVar1;
        uVar3 = *param_2 - *(int *)(iVar1 + 0x50);
        uVar4 = *param_3 - *(int *)(iVar1 + 0x54);
        uVar5 = *param_4 - *(int *)(iVar1 + 0x58);
        iVar6 = ApproxLength3_Likely(uVar3,uVar4,uVar5);
        if (iVar6 == 0) {
          DAT_100aa55c = 0;
          DAT_100aa558 = 0;
          DAT_100aa560 = 0x10000;
        }
        else {
          DAT_100aa558 = FUN_10002570(uVar3,iVar6);
          DAT_100aa55c = FUN_10002570(uVar4,iVar6);
          DAT_100aa560 = FUN_10002570(uVar5,iVar6);
        }
        iVar7 = piVar2[0x107] + iVar7;
        iVar6 = FixedMul16(DAT_100aa558,iVar7);
        *param_2 = *(int *)(iVar1 + 0x50) + iVar6;
        iVar6 = FixedMul16(DAT_100aa55c,iVar7);
        *param_3 = *(int *)(iVar1 + 0x54) + iVar6;
        iVar6 = FixedMul16(DAT_100aa560,iVar7);
        *param_4 = *(int *)(iVar1 + 0x58) + iVar6;
        param_1[0x10f] = piVar2[0x10f];
        local_38 = ApproxLength3_Likely(param_1[0x10d] - piVar2[0x10d],param_1[0x10e] - piVar2[0x10e],
                                param_1[0x10f]);
        if (local_38 < 0x20001) {
          local_38 = 0x10000;
        }
        else {
          local_38 = local_38 >> 1;
        }
        iVar6 = FixedMul16(DAT_100aa558,local_38);
        param_1[0x10a] = iVar6;
        iVar6 = FixedMul16(DAT_100aa55c,local_38);
        param_1[0x10b] = iVar6;
        iVar6 = FixedMul16(DAT_100aa560,local_38);
        param_1[0x10c] = iVar6;
        return 1;
      }
      uVar3 = *param_2 - *(int *)(iVar1 + 0x50);
      uVar4 = *param_3 - *(int *)(iVar1 + 0x54);
      uVar5 = *param_4 - *(int *)(iVar1 + 0x58);
      iVar8 = piVar2[0x107] + iVar7;
      iVar9 = ApproxLength3_Likely(uVar3,uVar4,uVar5);
      if (iVar9 < iVar8) {
        if (piVar2[0xf5] == 4) {
          FUN_10080048(piVar2);
          return 0;
        }
        *param_5 = iVar1;
        if (iVar9 == 0) {
          DAT_100aa55c = 0;
          DAT_100aa558 = 0;
          DAT_100aa560 = 0x10000;
        }
        else {
          DAT_100aa558 = FUN_10002570(uVar3,iVar9);
          DAT_100aa55c = FUN_10002570(uVar4,iVar9);
          DAT_100aa560 = FUN_10002570(uVar5,iVar9);
        }
        iVar6 = FixedMul16(DAT_100aa558,iVar8);
        *param_2 = *(int *)(iVar1 + 0x50) + iVar6;
        iVar6 = FixedMul16(DAT_100aa55c,iVar8);
        *param_3 = *(int *)(iVar1 + 0x54) + iVar6;
        iVar6 = FixedMul16(DAT_100aa560,iVar8);
        *param_4 = *(int *)(iVar1 + 0x58) + iVar6;
        param_1[0x10f] = piVar2[0x10f];
        local_38 = ApproxLength3_Likely(param_1[0x10d] - piVar2[0x10d],param_1[0x10e] - piVar2[0x10e],
                                param_1[0x10f]);
        if (local_38 < 0x20001) {
          local_38 = 0x10000;
        }
        else {
          local_38 = local_38 >> 1;
        }
        iVar6 = FixedMul16(DAT_100aa558,local_38);
        param_1[0x10a] = iVar6;
        iVar6 = FixedMul16(DAT_100aa55c,local_38);
        param_1[0x10b] = iVar6;
        iVar6 = FixedMul16(DAT_100aa560,local_38);
        param_1[0x10c] = iVar6;
        return 1;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}
