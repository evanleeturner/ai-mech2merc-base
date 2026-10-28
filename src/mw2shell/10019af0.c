/* SPDX-License-Identifier: MIT */
/* mw2shell 10019af0 */
/* mw2shell 10019af0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_10019f40[];
extern undefined LAB_10019ff0[];
extern undefined LAB_1001a0b0[];
extern undefined LAB_1001a100[];
extern undefined LAB_1001a150[];
extern undefined LAB_1001a1a0[];
extern undefined LAB_1001a200[];
extern undefined LAB_1001a260[];
extern undefined LAB_1001a2c0[];
extern undefined LAB_1001a320[];
extern undefined LAB_1001a3d0[];
extern undefined LAB_1001a430[];
extern undefined DAT_1008f624;
extern undefined DAT_1008f628;
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern undefined DAT_100c49d0[];
undefined __cdecl FUN_10017ff0(int param_1);
int __cdecl FUN_1000cd20(int param_1);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined4 __cdecl FUN_10050490(int param_1);

undefined4 * __cdecl FUN_10019af0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int local_14;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  FUN_10017ff0(param_1);
  iVar3 = FUN_1000cd20(param_1);
  puVar4 = HeapAlloc(DAT_10098224,1,iVar3 * 0xa8 + 0x118);
  *puVar4 = 0x213;
  puVar4[7] = (undefined4)(LAB_1001a3d0);
  puVar4[1] = 0x5a;
  puVar4[2] = 0xffffffff;
  puVar4[3] = 0xffffffff;
  puVar4[4] = 0;
  local_c = 2;
  puVar4[5] = (undefined4)(DAT_100c49d0);
  puVar4[6] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0xffffffff;
  puVar4[10] = 0xffffffff;
  puVar4[0xb] = 0xffffffff;
  iVar3 = *(int *)(DAT_100a6744 + 0x40c);
  puVar4[0xe] = 0x52;
  iVar3 = iVar3 * 2 + 0x5a;
  puVar4[0xf] = iVar3;
  puVar4[0x10] = 0xffffffff;
  puVar4[0x11] = 0xffffffff;
  puVar4[0x12] = 0;
  puVar4[0x13] = (undefined4)(DAT_100c49d0);
  puVar4[0x14] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0xffffffff;
  puVar4[0x18] = 0xffffffff;
  puVar4[0x19] = 0xffffffff;
  cVar2 = DAT_1008f624;
  if (*(int *)(param_1 + 4) == 0) {
    puVar4[0x15] = (undefined4)(LAB_1001a430);
  }
  else {
    if (DAT_1008f628 == '\x01') {
      puVar4[0x15] = (undefined4)(LAB_1001a0b0);
    }
    else {
      puVar4[0x15] = (undefined4)(LAB_1001a150);
      if (cVar2 != '\x01') {
        puVar4[0x15] = (undefined4)(LAB_1001a100);
      }
    }
    puVar4[0x1c] = 0xb6;
    puVar4[0x1d] = iVar3;
    puVar4[0x1e] = 0xffffffff;
    puVar4[0x1f] = 0xffffffff;
    puVar4[0x20] = 0;
    puVar4[0x21] = (undefined4)(DAT_100c49d0);
    puVar4[0x22] = 0;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0xffffffff;
    puVar4[0x26] = 0xffffffff;
    puVar4[0x27] = 0xffffffff;
    cVar2 = DAT_1008f628;
    puVar4[0x23] = (undefined4)(LAB_1001a1a0);
    if (cVar2 != '\x01') {
      puVar4[0x23] = (undefined4)(LAB_1001a200);
    }
    local_c = 4;
    puVar4[0x2a] = 0xf2;
    puVar4[0x2b] = iVar3;
    puVar4[0x2c] = 0xffffffff;
    puVar4[0x2d] = 0xffffffff;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = (undefined4)(DAT_100c49d0);
    puVar4[0x30] = 0;
    puVar4[0x32] = 0;
    puVar4[0x33] = 0xffffffff;
    puVar4[0x34] = 0xffffffff;
    puVar4[0x35] = 0xffffffff;
    cVar2 = DAT_1008f628;
    puVar4[0x31] = (undefined4)(LAB_1001a260);
    if (cVar2 != '\x01') {
      puVar4[0x31] = (undefined4)(LAB_1001a2c0);
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar9 = iVar5 + 1;
      iVar5 = FUN_10018060(param_1,iVar5);
      *(undefined1 *)(iVar5 + 9) = 0;
      iVar5 = iVar9;
    } while (iVar9 < *(int *)(param_1 + 4));
  }
  local_14 = 0;
  local_4 = 0;
  local_8 = local_c + -1;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar6 = (int *)FUN_10018060(param_1,local_4);
      if (*(char *)((int)piVar6 + 9) != '\x01') {
        iVar5 = 1;
        *(undefined1 *)((int)piVar6 + 9) = 1;
        iVar9 = local_4 + 1;
        if (iVar9 < *(int *)(param_1 + 4)) {
          do {
            piVar7 = (int *)FUN_10018060(param_1,iVar9);
            if (*piVar7 == *piVar6) {
              *(undefined1 *)((int)piVar7 + 9) = 1;
              iVar5 = iVar5 + 1;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(param_1 + 4));
        }
        puVar1 = puVar4 + (local_c + local_14) * 0xe;
        *puVar1 = 0x52;
        puVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + iVar3;
        puVar1[2] = 0xd2;
        puVar1[3] = 0xffffffff;
        puVar1[4] = 0;
        puVar1[5] = (undefined4)(DAT_100c49d0);
        puVar1[6] = 0;
        puVar1[7] = (undefined4)(LAB_1001a320);
        puVar1[9] = *piVar6;
        puVar1[10] = iVar5;
        puVar1[0xb] = 0xffffffff;
        puVar1[8] = 0;
        uVar8 = FUN_10050490((int)piVar6);
        puVar1[0xc] = uVar8;
        puVar1 = puVar4 + (local_c + local_14 + 1) * 0xe;
        *puVar1 = 0xb6;
        puVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + iVar3;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1[4] = 0;
        puVar1[5] = (undefined4)(DAT_100c49d0);
        puVar1[6] = 0;
        puVar1[7] = (undefined4)(LAB_10019f40);
        puVar1[9] = 0xffffffff;
        puVar1[10] = iVar5;
        puVar1[0xb] = 0xffffffff;
        puVar1[0xd] = 0xffffffff;
        puVar1[8] = 0;
        uVar8 = FUN_10050490((int)piVar6);
        puVar1[0xc] = uVar8;
        puVar1 = puVar4 + (local_c + local_14 + 2) * 0xe;
        *puVar1 = 0xf2;
        puVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + iVar3;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1[4] = 0;
        puVar1[5] = (undefined4)(DAT_100c49d0);
        puVar1[6] = 0;
        puVar1[7] = (undefined4)(LAB_10019ff0);
        puVar1[9] = 0xffffffff;
        puVar1[10] = 0xffffffff;
        puVar1[0xb] = 0xffffffff;
        puVar1[0xd] = 0xffffffff;
        puVar1[8] = 0;
        uVar8 = FUN_10050490((int)piVar6);
        local_14 = local_14 + 3;
        local_8 = local_8 + 1;
        puVar1[0xc] = uVar8;
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 4));
  }
  puVar4[(local_c + local_14) * 0xe] = 0xffffffff;
  return puVar4;
}
