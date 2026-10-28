/* SPDX-License-Identifier: MIT */
/* mercsw 10058681 */
/* mercsw 10058681: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

undefined4 __cdecl FUN_10058681(int param_1, int param_2, int param_3, int param_4, uint param_5, int * param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  iVar7 = *(int *)(param_2 * 8 + 8 + param_1) + param_1;
  iVar3 = *(int *)(iVar7 + 8) + param_3;
  iVar10 = *(int *)(iVar7 + 0xc);
  iVar4 = iVar10 + param_4;
  iVar5 = *(int *)(iVar7 + 0x14) + 1;
  iVar6 = iVar5 - iVar10;
  if (iVar6 != 0 && iVar10 <= iVar5) {
    pbVar8 = (byte *)(iVar7 + 0x18);
    local_1c = 0x7fffffff;
    local_20 = 0x7fffffff;
    local_24 = -0x80000000;
    local_28 = -0x80000000;
    do {
      bVar2 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      bVar11 = (bool)(bVar2 & 1);
      bVar2 = bVar2 >> 1;
      iVar10 = iVar3;
      if (!bVar11 && bVar2 != 0) goto LAB_10058739;
      if (bVar2 != 0) goto LAB_1005876c;
joined_r0x10058722:
      if (bVar11) {
        do {
          while( true ) {
            pbVar9 = pbVar8 + 1;
            iVar10 = iVar10 + (uint)*pbVar8;
            pbVar8 = pbVar8 + 2;
            bVar11 = (bool)(*pbVar9 & 1);
            bVar2 = *pbVar9 >> 1;
            if (!bVar11 && bVar2 != 0) goto LAB_10058739;
            if (bVar2 == 0) break;
LAB_1005876c:
            do {
              while( true ) {
                if (iVar10 <= local_1c) {
                  local_1c = iVar10;
                }
                iVar10 = iVar10 + (uint)bVar2;
                if (local_24 <= iVar10) {
                  local_24 = iVar10;
                }
                if (iVar4 <= local_20) {
                  local_20 = iVar4;
                }
                if (local_28 <= iVar4) {
                  local_28 = iVar4;
                }
                bVar1 = pbVar8[bVar2];
                pbVar8 = pbVar8 + bVar2 + 1;
                bVar11 = (bool)(bVar1 & 1);
                bVar2 = bVar1 >> 1;
                if (!bVar11 && bVar2 != 0) break;
                if (bVar2 == 0) goto joined_r0x10058722;
              }
LAB_10058739:
              do {
                pbVar9 = pbVar8 + 1;
                if (iVar10 <= local_1c) {
                  local_1c = iVar10;
                }
                iVar10 = iVar10 + (uint)bVar2;
                if (local_24 <= iVar10) {
                  local_24 = iVar10;
                }
                if (iVar4 <= local_20) {
                  local_20 = iVar4;
                }
                if (local_28 <= iVar4) {
                  local_28 = iVar4;
                }
                pbVar8 = pbVar8 + 2;
                bVar11 = (bool)(*pbVar9 & 1);
                bVar2 = *pbVar9 >> 1;
              } while (!bVar11 && bVar2 != 0);
              if (!bVar11) goto LAB_1005879e;
            } while (bVar2 != 0);
          }
        } while (bVar11);
      }
LAB_1005879e:
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((param_5 & 1) != 0) {
    iVar10 = param_3 * 2 - local_1c;
    local_1c = param_3 * 2 - local_24;
    local_24 = iVar10;
  }
  if ((param_5 & 2) != 0) {
    iVar10 = param_4 * 2 - local_20;
    local_20 = param_4 * 2 - local_28;
    local_28 = iVar10;
  }
  *param_6 = local_1c;
  param_6[1] = local_20;
  param_6[2] = local_24;
  param_6[3] = local_28;
  return 0;
}
