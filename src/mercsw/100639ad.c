/* SPDX-License-Identifier: MIT */
/* mercsw 100639ad */
/* mercsw 100639ad: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_100a7bc8[];
extern undefined DAT_100a7bec[];
extern undefined DAT_100a7bf0[];
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100eef40[];
undefined4 __cdecl IsWithinRadius3_Likely(int param_1, int param_2, int param_3, int param_4);

void __cdecl FUN_100639ad(int * param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  uint local_14;
  uint local_10;
  
  if (((*(int *)(*param_1 + 0x10) != 2) || (*(int *)(*param_1 + 0x1b4) == 0)) ||
     ((*(ushort *)(param_1 + 0x110) & 0x80) == 0)) {
    *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) & 0xff7f;
    iVar6 = *(int *)(param_1[0xf8] * 0x40 + 4 + param_1[0x15]) * 0x68;
    if (((param_1[0xf8] == -1) || (*(int *)(*param_1 + 0xdc) == 0)) ||
       (((*(byte *)(*param_1 + 0xdd) & 0x10) != 0 ||
        (((*(byte *)(*param_1 + 0xdd) & 1) != 0 || (*(int *)(DAT_100a7bc8 + iVar6) == 0)))))) {
      *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) & 0x7fff;
      *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) & 0xffbf;
    }
    else if (((*(byte *)(*param_1 + 0xdd) & 2) == 0) ||
            ((*(ushort *)
               (*(int *)(DAT_100eef40[*(uint *)(*param_1 + 0xdc) & 0xff] + 0x20) + 0x442) & 1) ==
             0)) {
      iVar2 = *(int *)(*param_1 + 0x50) - *(int *)(*param_1 + 200);
      iVar3 = *(int *)(*param_1 + 0x54) - *(int *)(*param_1 + 0xcc);
      iVar4 = *(int *)(*param_1 + 0x58) - *(int *)(*param_1 + 0xd0);
      iVar5 = IsWithinRadius3_Likely(iVar2,iVar3,iVar4,*(int *)(DAT_100a7bec + iVar6));
      if ((iVar5 == 0) &&
         (iVar6 = IsWithinRadius3_Likely(iVar2,iVar3,iVar4,*(int *)(DAT_100a7bf0 + iVar6)), iVar6 != 0)) {
        bVar1 = true;
        local_18 = *(int *)(*param_1 + 0xd4) -
                   (*(int *)(*param_1 + 0x60) % 0x1680000 + 0x1680000) % 0x1680000;
        if (local_18 < 0xb40001) {
          if (local_18 < -0xb40000) {
            local_18 = local_18 + 0x1680000;
          }
        }
        else {
          local_18 = local_18 + -0x1680000;
        }
        local_14 = local_18 - *(int *)(*param_1 + 0x6c) % 0x1680000;
        if ((int)local_14 < 0xb40001) {
          if ((int)local_14 < -0xb40000) {
            local_14 = local_14 + 0x1680000;
          }
        }
        else {
          local_14 = local_14 + 0xfe980000;
        }
        local_10 = (*(int *)(*param_1 + 0xd8) + param_1[7]) % 0x1680000;
      }
      else {
        bVar1 = false;
        local_14 = 0x100001;
        local_10 = 0x100001;
        *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) & 0x7fff;
      }
      if (((bVar1) &&
          ((int)((local_14 ^ (int)local_14 >> 0x1f) - ((int)local_14 >> 0x1f)) < 0x100000)) &&
         ((int)((local_10 ^ (int)local_10 >> 0x1f) - ((int)local_10 >> 0x1f)) < 0x100000)) {
        *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) | 0x8000;
        if ((*(ushort *)(param_1 + 0x110) & 0x40) == 0) {
          *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) | 0x40;
          param_1[0xef] = 0x16a;
        }
        else if (param_1[0xef] < 1) {
          param_1[0xef] = 0;
          *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) | 0x80;
        }
        else {
          param_1[0xef] = param_1[0xef] - DAT_100b3904;
        }
      }
      else {
        *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) & 0x7fff;
        if (((*(ushort *)(param_1 + 0x110) & 0x40) != 0) &&
           (param_1[0xef] = param_1[0xef] + DAT_100b3904, 0x169 < param_1[0xef])) {
          *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) & 0xffbf;
        }
      }
    }
    else {
      param_1[0xef] = 0;
      *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) | 0x40;
      *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) | 0x80;
      *(ushort *)(param_1 + 0x110) = *(ushort *)(param_1 + 0x110) | 0x8000;
    }
  }
  return;
}
