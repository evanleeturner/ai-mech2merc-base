/* SPDX-License-Identifier: MIT */
/* mercsw 1000cb75 */
/* mercsw 1000cb75: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7570;
extern undefined4 DAT_100a758c;
extern undefined4 DAT_100a7590;
extern undefined4 DAT_100a7594;
extern undefined DAT_100a7598[];
extern undefined DAT_100a75c0[];
extern undefined4 DAT_101f5518;
extern undefined DAT_101f5520[];
extern undefined DAT_101f5524[];
extern undefined DAT_101f5528[];
extern undefined DAT_101f552c[];
extern undefined DAT_101f5530[];
extern undefined DAT_101f5534[];
extern undefined DAT_101f5538[];
extern undefined DAT_101f553c[];
extern undefined DAT_101f5540[];
extern undefined DAT_101f5544[];
extern undefined DAT_101f5548[];
extern undefined DAT_101f554c[];
extern undefined DAT_101f5550[];
extern undefined DAT_101f5554[];
extern undefined DAT_101f5558[];
extern undefined DAT_101f555c[];
extern undefined DAT_101f5560[];
extern undefined DAT_101f5564[];
extern undefined DAT_101f5598[];
extern undefined DAT_1021559c[];
extern undefined DAT_102155a0[];
extern int DAT_10215624;
undefined __cdecl FUN_1008975d(undefined4 * param_1);
undefined __cdecl FUN_10089cc9(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
undefined __cdecl FUN_100895ca(int * param_1, int * param_2, undefined4 * param_3);

void __cdecl FUN_1000cb75(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_9c [12];
  int local_6c;
  int *local_68;
  int local_64 [12];
  int local_34 [4];
  int local_24;
  int local_14;
  
  (void)local_24;
  (void)local_14;
  if (DAT_100a7594 == 0) {
    DAT_101f5518 = 0;
    for (local_6c = 0; local_6c < DAT_10215624; local_6c = local_6c + 1) {
      *(undefined4 *)(DAT_100a7570 + local_6c * 4) = 0xffffffff;
    }
    *(undefined4 *)(DAT_102155a0 + DAT_100a7594 * 4) = 0xffffffff;
  }
  if ((DAT_100a758c < 0x20) && (-1 < DAT_100a758c)) {
    DAT_100a7594 = DAT_100a7594 + 1;
    *(int *)(DAT_102155a0 + DAT_100a7594 * 4) = DAT_100a758c;
    iVar4 = DAT_100a758c * 0x7c;
    piVar1 = (int *)(DAT_101f5520 + iVar4);
    *piVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(DAT_101f5524 + iVar4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(DAT_101f5528 + iVar4) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(DAT_101f552c + iVar4) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(DAT_101f5530 + iVar4) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(DAT_101f5534 + iVar4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(DAT_101f5598 + iVar4) = *(undefined4 *)(DAT_1021559c + DAT_100a7594 * 4);
    puVar5 = (undefined4 *)(DAT_100a7598);
    puVar6 = (undefined4 *)(DAT_101f5544 + iVar4);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (*(int *)(DAT_101f552c + iVar4) < 0) {
      *piVar1 = *piVar1 + *(int *)(DAT_101f552c + iVar4);
      *(int *)(DAT_101f552c + iVar4) = -*(int *)(DAT_101f552c + iVar4);
    }
    *(int *)(DAT_101f552c + iVar4) = *(int *)(DAT_101f552c + iVar4) + *piVar1;
    if (*(int *)(DAT_101f5530 + iVar4) < 0) {
      *(int *)(DAT_101f5524 + iVar4) =
           *(int *)(DAT_101f5524 + iVar4) + *(int *)(DAT_101f5530 + iVar4);
      *(int *)(DAT_101f5530 + iVar4) = -*(int *)(DAT_101f5530 + iVar4);
    }
    *(int *)(DAT_101f5530 + iVar4) =
         *(int *)(DAT_101f5530 + iVar4) + *(int *)(DAT_101f5524 + iVar4);
    if (*(int *)(DAT_101f5534 + iVar4) < 0) {
      *(int *)(DAT_101f5528 + iVar4) =
           *(int *)(DAT_101f5528 + iVar4) + *(int *)(DAT_101f5534 + iVar4);
      *(int *)(DAT_101f5534 + iVar4) = -*(int *)(DAT_101f5534 + iVar4);
    }
    *(int *)(DAT_101f5534 + iVar4) =
         *(int *)(DAT_101f5534 + iVar4) + *(int *)(DAT_101f5528 + iVar4);
    *(int *)(DAT_101f5538 + iVar4) = (*(int *)(DAT_101f552c + iVar4) + *piVar1) / 2;
    *(int *)(DAT_101f553c + iVar4) =
         (*(int *)(DAT_101f5524 + iVar4) + *(int *)(DAT_101f5530 + iVar4)) / 2;
    *(int *)(DAT_101f5540 + iVar4) =
         (*(int *)(DAT_101f5534 + iVar4) + *(int *)(DAT_101f5528 + iVar4)) / 2;
    piVar2 = (int *)(iVar4 + 0x101f5568);
    FUN_1008975d((undefined4 *)(local_34));
    local_34[0] = (int)((unsigned int)(*(int *)(DAT_101f5544 + iVar4)) << (0x1d));
    local_24 = (int)((unsigned int)(*(int *)(DAT_101f5548 + iVar4)) << (0x1d));
    local_14 = (int)((unsigned int)(*(int *)(DAT_101f554c + iVar4)) << (0x1d));
    FUN_10089cc9(local_64,0,0,0,-*(int *)(DAT_101f5538 + iVar4),-*(int *)(DAT_101f553c + iVar4),
                 -*(int *)(DAT_101f5540 + iVar4));
    FUN_10089cc9(local_9c,*(int *)(DAT_101f5550 + iVar4),*(int *)(DAT_101f5554 + iVar4),
                 *(int *)(DAT_101f5558 + iVar4),0,0,0);
    FUN_100895ca(local_9c,local_64,(undefined4 *)(piVar2));
    FUN_10089cc9(local_64,0,0,0,*(int *)(DAT_101f555c + iVar4),*(int *)(DAT_101f5560 + iVar4),
                 *(int *)(DAT_101f5564 + iVar4));
    FUN_100895ca(local_64,piVar2,(undefined4 *)(piVar2));
    FUN_10089cc9(local_64,0,0,0,*(int *)(DAT_101f5538 + iVar4),*(int *)(DAT_101f553c + iVar4),
                 *(int *)(DAT_101f5540 + iVar4));
    FUN_100895ca(local_64,piVar2,(undefined4 *)(piVar2));
    local_68 = piVar1;
    while (local_68[0x1e] != -1) {
      piVar1 = local_68 + 0x1e;
      local_68 = (int *)(DAT_101f5520 + *piVar1 * 0x7c);
      FUN_100895ca((int *)(*piVar1 * 0x7c + 0x101f5568),piVar2,(undefined4 *)(piVar2));
    }
    puVar5 = (undefined4 *)(DAT_100a75c0);
    puVar6 = (undefined4 *)(DAT_100a7598);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    DAT_100a7590 = DAT_100a758c;
    DAT_100a758c = DAT_100a758c + 1;
  }
  return;
}
