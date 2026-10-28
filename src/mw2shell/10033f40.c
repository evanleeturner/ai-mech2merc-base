/* SPDX-License-Identifier: MIT */
/* mw2shell 10033f40 */
/* mw2shell 10033f40: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_10034390[];
extern undefined LAB_10034440[];
extern undefined LAB_10034540[];
extern undefined LAB_10034640[];
extern undefined LAB_10034690[];
extern undefined LAB_10034710[];
extern undefined LAB_10034780[];
extern undefined LAB_100347e0[];
extern undefined4 DAT_10083508;
extern HANDLE DAT_10098224;
extern undefined4 DAT_100a6744;
extern int DAT_100a67b8;
extern int DAT_100a67bc;
extern int DAT_100a67c0;
extern int DAT_100a67c4;
extern int DAT_100a67c8;
extern undefined DAT_100c49d0[];
undefined __cdecl FUN_10017ff0(int param_1);
int __cdecl FUN_1000cd20(int param_1);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined4 __cdecl FUN_10050490(int param_1);

undefined4 * __cdecl FUN_10033f40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  FUN_10017ff0(param_1);
  iVar2 = FUN_1000cd20(param_1);
  puVar3 = HeapAlloc(DAT_10098224,1,iVar2 * 0xa8 + 0x118);
  *puVar3 = 0x1cc;
  local_c = 1;
  puVar3[1] = 0x5c;
  puVar3[2] = 0xffffffff;
  puVar3[3] = 0xffffffff;
  puVar3[4] = 0;
  puVar3[5] = (undefined4)(DAT_100c49d0);
  puVar3[6] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0xffffffff;
  puVar3[10] = 0xffffffff;
  puVar3[0xb] = 0xffffffff;
  if (*(int *)(param_1 + 4) == 0) {
    puVar3[7] = (undefined4)(LAB_10034780);
  }
  else {
    puVar3[7] = (undefined4)(LAB_10034640);
    iVar2 = *(int *)(DAT_10083508 + 0x23bb);
    puVar3[0xe] = 0x231;
    if (iVar2 != 1) {
      puVar3[0xe] = 0x263;
    }
    puVar3[0xf] = 0x5c;
    puVar3[0x10] = 0xffffffff;
    puVar3[0x11] = 0xffffffff;
    puVar3[0x12] = 0;
    puVar3[0x13] = (undefined4)(DAT_100c49d0);
    puVar3[0x14] = 0;
    puVar3[0x16] = 0;
    local_c = 3;
    puVar3[0x17] = 0xffffffff;
    puVar3[0x18] = 0xffffffff;
    puVar3[0x19] = 0xffffffff;
    puVar3[0x15] = (undefined4)(LAB_10034710);
    puVar3[0x1c] = 0x263;
    puVar3[0x1d] = 0x5c;
    puVar3[0x1e] = 0xffffffff;
    puVar3[0x1f] = 0xffffffff;
    puVar3[0x20] = 0;
    puVar3[0x21] = (undefined4)(DAT_100c49d0);
    puVar3[0x22] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0xffffffff;
    puVar3[0x26] = 0xffffffff;
    puVar3[0x27] = 0xffffffff;
    puVar3[0x23] = (undefined4)(LAB_10034690);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar7 = iVar2 + 1;
      iVar2 = FUN_10018060(param_1,iVar2);
      *(undefined1 *)(iVar2 + 9) = 0;
      iVar2 = iVar7;
    } while (iVar7 < *(int *)(param_1 + 4));
  }
  local_10 = 0;
  local_4 = 0;
  local_8 = local_c + -1;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar4 = (int *)FUN_10018060(param_1,local_4);
      if (*(char *)((int)piVar4 + 9) != '\x01') {
        iVar2 = 1;
        *(undefined1 *)((int)piVar4 + 9) = 1;
        iVar7 = local_4 + 1;
        if (iVar7 < *(int *)(param_1 + 4)) {
          do {
            piVar5 = (int *)FUN_10018060(param_1,iVar7);
            if (*piVar5 == *piVar4) {
              *(undefined1 *)((int)piVar5 + 9) = 1;
              iVar2 = iVar2 + 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(param_1 + 4));
        }
        if (*(int *)(DAT_10083508 + 0x23bb) != 1) {
          iVar2 = 99999999;
        }
        puVar1 = puVar3 + (local_c + local_10) * 0xe;
        *puVar1 = 0x1cc;
        puVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + 0x5c;
        puVar1[2] = 0x9c;
        puVar1[3] = 0xffffffff;
        puVar1[4] = 0;
        puVar1[5] = (undefined4)(DAT_100c49d0);
        puVar1[6] = 0;
        puVar1[7] = (undefined4)(LAB_10034390);
        puVar1[9] = *piVar4;
        puVar1[10] = iVar2;
        puVar1[0xb] = 0xffffffff;
        uVar6 = FUN_10050490((int)piVar4);
        puVar1[0xc] = uVar6;
        puVar1[0xd] = 0xffffffff;
        puVar1[8] = (undefined4)(LAB_100347e0);
        if (((DAT_100a67c4 == param_1) || (param_1 == DAT_100a67bc)) || (DAT_100a67c0 == param_1)) {
          puVar1[0xd] = 0;
        }
        else if (param_1 == DAT_100a67b8) {
          puVar1[0xd] = 1;
        }
        else if (DAT_100a67c8 == param_1) {
          puVar1[0xd] = 2;
        }
        puVar1 = puVar3 + (local_c + local_10 + 1) * 0xe;
        iVar7 = *(int *)(DAT_10083508 + 0x23bb);
        *puVar1 = 0x231;
        if (iVar7 != 1) {
          *puVar1 = 0x263;
        }
        puVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + 0x5c;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1[4] = 0;
        puVar1[5] = (undefined4)(DAT_100c49d0);
        puVar1[6] = 0;
        puVar1[7] = (undefined4)(LAB_10034440);
        puVar1[9] = *piVar4;
        puVar1[10] = iVar2;
        puVar1[0xb] = 0xffffffff;
        uVar6 = FUN_10050490((int)piVar4);
        puVar1[0xc] = uVar6;
        puVar1[0xd] = 0xffffffff;
        puVar1[8] = 0;
        puVar1 = puVar3 + (local_c + local_10 + 2) * 0xe;
        *puVar1 = 0x263;
        puVar1[1] = *(int *)(DAT_100a6744 + 0x40c) * local_8 + 0x5c;
        puVar1[2] = 0xffffffff;
        puVar1[3] = 0xffffffff;
        puVar1[4] = 0;
        puVar1[5] = (undefined4)(DAT_100c49d0);
        puVar1[6] = 0;
        puVar1[7] = (undefined4)(LAB_10034540);
        puVar1[9] = *piVar4;
        puVar1[10] = iVar2;
        puVar1[0xb] = 0xffffffff;
        uVar6 = FUN_10050490((int)piVar4);
        local_10 = local_10 + 3;
        puVar1[0xc] = uVar6;
        puVar1[0xd] = 0xffffffff;
        puVar1[8] = 0;
        local_8 = local_8 + 1;
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 4));
  }
  puVar3[(local_c + local_10) * 0xe] = 0xffffffff;
  return puVar3;
}
