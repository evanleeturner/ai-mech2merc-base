/* SPDX-License-Identifier: MIT */
/* mw2shell 10069e35 */
extern undefined4 DAT_100aa2c4;
extern void __fastcall FUN_10069ccb(int param_1);
extern uint __fastcall FUN_10069d2c(undefined4 param_1, int param_2);
extern void __fastcall FUN_10069d72(int param_1);
extern void __stdcall FUN_10069db8(void);

undefined1 __cdecl FUN_10069e35(undefined4 param_1, int param_2, undefined4 *param_3)
{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int local_18;
  uint local_14;

  DAT_100aa2c4 = param_1;
  puVar11 = param_3;
  for (iVar5 = 2; iVar5 != 0; iVar5 = iVar5 - 1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  uVar1 = *(undefined1 *)(param_2 + 0xb);
  iVar5 = param_2 + 0xd;
  if ((*(byte *)(param_2 + 10) & 0x80) != 0) {
    iVar5 = iVar5 + (1 << ((*(byte *)(param_2 + 10) & 7) + 1)) * 3;
  }
  param_3[9] = (uint)*(ushort *)(iVar5 + 5);
  param_3[10] = (uint)*(ushort *)(iVar5 + 7);
  bVar2 = *(byte *)(iVar5 + 9);
  *(byte *)((char *)param_3 + 0xb) = bVar2;
  *(byte *)((char *)param_3 + 0xb) = *(byte *)((char *)param_3 + 0xb) & 0x40;
  pbVar8 = (byte *)(iVar5 + 10);
  if ((bVar2 & 0x80) != 0) {
    pbVar8 = pbVar8 + (1 << ((bVar2 & 7) + 1)) * 3;
  }
  param_3[4] = 0;
  pbVar10 = pbVar8 + 1;
  uVar6 = (uint)*pbVar8;
  uVar3 = 1 << (*pbVar8 & 0x1f);
  param_3[7] = uVar6 + 1;
  FUN_10069ccb(uVar3);
  local_14 = 0xffff;
  local_18 = 0;
  *(undefined1 *)((char *)param_3 + 0x2d) = 0;
  param_3[8] = param_3[9];
  param_3[2] = 0;
  param_3[3] = 0;
  do {
    iVar5 = param_3[7];
    if (iVar5 < 9) {
      uVar4 = FUN_10069d2c(uVar6, iVar5);
    }
    else {
      uVar4 = FUN_10069d2c(uVar6, 8);
      uVar7 = FUN_10069d2c(uVar6, iVar5 - 8);
      uVar4 = uVar7 << 8 | uVar4;
    }
    if (uVar4 == uVar3) {
      FUN_10069ccb(uVar3);
      param_3[7] = uVar6 + 1;
      local_14 = 0xffff;
    }
    else {
      pbVar8 = pbVar10;
      if (uVar4 == uVar3 + 1) {
        do {
          while (param_3[4] != 0) {
            param_3[4] = param_3[4] - 1;
            pbVar8 = pbVar8 + 1;
          }
          pbVar10 = pbVar8 + 1;
          param_3[4] = (uint)*pbVar8;
          pbVar8 = pbVar10;
        } while (param_3[4] != 0);
        local_18 = 0xffff;
      }
      else {
        if (*(short *)((char *)param_3 + uVar4 * 2 + 0x302e) == -2) {
          FUN_10069d72(local_14);
        }
        else if (local_14 != 0xffff) {
          FUN_10069d72(local_14);
        }
        iVar5 = 0;
        puVar9 = (undefined1 *)((char *)param_3 + 0x2e);
        uVar7 = uVar4;
        do {
          *puVar9 = *(undefined1 *)((char *)param_3 + uVar7 + 0x202e);
          puVar9 = puVar9 + 1;
          iVar5 = iVar5 + 1;
          uVar7 = (uint)*(ushort *)((char *)param_3 + uVar7 * 2 + 0x302e);
        } while (uVar7 != 0xffff);
        do {
          FUN_10069db8();
          iVar5 = iVar5 - 1;
          local_14 = uVar4;
        } while (iVar5 != 0);
      }
    }
  } while (local_18 == 0);
  return uVar1;
}
