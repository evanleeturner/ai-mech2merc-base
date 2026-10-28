/* SPDX-License-Identifier: MIT */
/* mercsw 1005ab17 */
/* mercsw 1005ab17: Ghidra's C, repaired by tools/ghidra_repair.py */
#define SCARRY4(a, b) ((int)(((((unsigned int)(a) + (unsigned int)(b)) ^ (unsigned int)(a)) & (((unsigned int)(a) + (unsigned int)(b)) ^ (unsigned int)(b))) >> 31))

int __cdecl FUN_1005ab17(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  bool bVar17;
  uint local_c;
  uint local_8;
  
  piVar1 = (int *)*param_1;
  iVar10 = piVar1[1];
  iVar5 = iVar10 + 1;
  if ((iVar5 == 0 || iVar10 < -1) || (iVar9 = piVar1[2], iVar9 < 0)) {
    return -1;
  }
  iVar2 = param_1[1];
  iVar6 = iVar2;
  if (iVar2 < 1) {
    iVar6 = 0;
  }
  iVar3 = param_1[2];
  iVar7 = iVar3;
  if (iVar3 < 1) {
    iVar7 = 0;
  }
  iVar8 = param_1[3];
  if (iVar10 <= param_1[3]) {
    iVar8 = iVar10;
  }
  iVar10 = param_1[4];
  if (iVar9 <= param_1[4]) {
    iVar10 = iVar9;
  }
  if ((iVar8 < iVar6) || (iVar10 < iVar7)) {
    return -2;
  }
  param_2 = param_2 + iVar2;
  param_3 = param_3 + iVar3;
  uVar15 = *(uint *)(param_4 + 8);
  puVar16 = (uint *)(*(int *)(param_5 * 4 + param_4 + 0x10) + param_4);
  local_c = 0;
  local_8 = *puVar16;
  if (local_8 != 0) {
    puVar16 = puVar16 + 1;
    iVar9 = ((iVar8 + 1) - local_8) - param_2;
    uVar12 = local_8;
    if ((-1 < iVar9) ||
       (uVar12 = local_8 + iVar9, uVar12 != 0 && SCARRY4(local_8,iVar9) == (int)uVar12 < 0)) {
      iVar6 = param_2 - iVar6;
      if (iVar6 < 0) {
        bVar17 = SCARRY4(uVar12,iVar6);
        uVar12 = uVar12 + iVar6;
        if (uVar12 == 0 || bVar17 != (int)uVar12 < 0) goto LAB_1005ac9e;
        puVar16 = (uint *)((int)puVar16 - iVar6);
        param_2 = param_2 - iVar6;
      }
      iVar10 = ((iVar10 + 1) - uVar15) - param_3;
      if ((-1 < iVar10) ||
         (bVar17 = SCARRY4(uVar15,iVar10), uVar15 = uVar15 + iVar10,
         uVar15 != 0 && bVar17 == (int)uVar15 < 0)) {
        iVar7 = param_3 - iVar7;
        if (iVar7 < 0) {
          bVar17 = SCARRY4(uVar15,iVar7);
          uVar15 = uVar15 + iVar7;
          if (uVar15 == 0 || bVar17 != (int)uVar15 < 0) goto LAB_1005ac9e;
          param_3 = param_3 - iVar7;
          puVar16 = (uint *)((int)puVar16 - iVar7 * local_8);
        }
        pbVar11 = (byte *)(param_3 * iVar5 + *piVar1 + param_2);
        local_8 = local_8 - uVar12;
        uVar13 = uVar12;
        if (param_6 == 0) {
          do {
            for (uVar13 = uVar12 >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
              *(short *)pbVar11 = (short)*puVar16;
              puVar16 = (uint *)((int)puVar16 + 2);
              pbVar11 = pbVar11 + 2;
            }
            for (uVar13 = (uint)((uVar12 & 1) != 0); uVar13 != 0; uVar13 = uVar13 - 1) {
              *pbVar11 = (byte)*puVar16;
              puVar16 = (uint *)((int)puVar16 + 1);
              pbVar11 = pbVar11 + 1;
            }
            puVar16 = (uint *)((int)puVar16 + local_8);
            pbVar11 = pbVar11 + (iVar5 - uVar12);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
          return local_8 + uVar12;
        }
        while (uVar14 = uVar12, local_c = uVar12, uVar13 != 0) {
          do {
            bVar4 = *(byte *)(param_6 + (uint)(byte)*puVar16);
            if (bVar4 != 0xff) {
              *pbVar11 = bVar4;
            }
            puVar16 = (uint *)((int)puVar16 + 1);
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
          puVar16 = (uint *)((int)puVar16 + local_8);
          pbVar11 = pbVar11 + (iVar5 - uVar12);
          uVar15 = uVar15 - 1;
          uVar13 = uVar15;
        }
      }
    }
  }
LAB_1005ac9e:
  return local_8 + local_c;
}
