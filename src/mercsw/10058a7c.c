/* SPDX-License-Identifier: MIT */
/* mercsw 10058a7c */
/* mercsw 10058a7c: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_100b2b10[];

undefined4 __cdecl FUN_10058a7c(int param_1, int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar5 = *(int *)(param_2 * 8 + 8 + param_1) + param_1;
  iVar2 = *(int *)(iVar5 + 0x14) + 1;
  iVar3 = iVar2 - *(int *)(iVar5 + 0xc);
  if (iVar3 != 0 && *(int *)(iVar5 + 0xc) <= iVar2) {
    pbVar6 = (byte *)(iVar5 + 0x18);
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar8 = (bool)(bVar1 & 1);
      bVar1 = bVar1 >> 1;
      uVar4 = (uint)bVar1;
      if (!bVar8 && bVar1 != 0) goto LAB_10058ac5;
      if (bVar1 != 0) goto LAB_10058aeb;
joined_r0x10058ab0:
      if (bVar8) {
        do {
          while( true ) {
            pbVar7 = pbVar6 + 1;
            pbVar6 = pbVar6 + 2;
            bVar8 = (bool)(*pbVar7 & 1);
            bVar1 = *pbVar7 >> 1;
            uVar4 = (uint)bVar1;
            if (!bVar8 && bVar1 != 0) goto LAB_10058ac5;
            if (bVar1 == 0) break;
LAB_10058aeb:
            do {
              while( true ) {
                do {
                  pbVar7 = pbVar6;
                  *pbVar7 = *(byte *)((int)DAT_100b2b10 + (uint)*pbVar7);
                  uVar4 = uVar4 - 1;
                  pbVar6 = pbVar7 + 1;
                } while (uVar4 != 0);
                bVar1 = pbVar7[1];
                pbVar6 = pbVar7 + 2;
                bVar8 = (bool)(bVar1 & 1);
                bVar1 = bVar1 >> 1;
                uVar4 = (uint)bVar1;
                if (!bVar8 && bVar1 != 0) break;
                if (bVar1 == 0) goto joined_r0x10058ab0;
              }
LAB_10058ac5:
              do {
                *pbVar6 = *(byte *)((int)DAT_100b2b10 + (uint)*pbVar6);
                pbVar7 = pbVar6 + 1;
                pbVar6 = pbVar6 + 2;
                bVar8 = (bool)(*pbVar7 & 1);
                bVar1 = *pbVar7 >> 1;
                uVar4 = (uint)bVar1;
              } while (!bVar8 && bVar1 != 0);
              if (!bVar8) goto LAB_10058b03;
            } while (bVar1 != 0);
          }
        } while (bVar8);
      }
LAB_10058b03:
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}
