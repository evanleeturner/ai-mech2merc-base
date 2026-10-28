/* SPDX-License-Identifier: MIT */
/* mercsw 1001261d */
/* mercsw 1001261d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined2 * DAT_100aa1dc;
extern undefined4 DAT_100aa1e0;
extern undefined2 DAT_100aa254;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef030[];
extern undefined DAT_100ef032[];
undefined __cdecl FUN_10006e00(undefined4 param_1, undefined4 param_2);

void __stdcall FUN_1001261d(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int local_14;
  
  *DAT_100aa1dc = DAT_100aa254;
  iVar2 = DAT_100eef40[DAT_100adf38];
  piVar3 = *(int **)(iVar2 + 0x20);
  *(undefined2 *)((int)DAT_100aa1dc + 7) = 0;
  *(undefined1 *)(DAT_100aa1dc + 1) = *(undefined1 *)(iVar2 + 4);
  *(short *)((int)DAT_100aa1dc + 3) = (short)*(undefined4 *)(iVar2 + 0xdc);
  if (((((byte)((uint)*(undefined4 *)(iVar2 + 0xdc) >> 8) & 0xf) == 4) &&
      (uVar4 = *(uint *)(iVar2 + 0xdc) & 0xff,
      (*(ushort *)(DAT_100ef030 + uVar4 * 0x40) & 0x20) != 0)) &&
     (((int)((unsigned int)(1) << ((*(byte *)(iVar2 + 8) & 0x1f))) & (int)*(short *)(DAT_100ef032 + uVar4 * 0x40)) != 0)) {
    *(ushort *)((int)DAT_100aa1dc + 7) = *(ushort *)((int)DAT_100aa1dc + 7) | 0x400;
  }
  *(short *)((int)DAT_100aa1dc + 5) = (short)*(undefined4 *)(iVar2 + 0x13c);
  *(undefined4 *)((int)DAT_100aa1dc + 0x59) = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)((int)DAT_100aa1dc + 0x5d) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)((int)DAT_100aa1dc + 0x61) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)((int)DAT_100aa1dc + 0x65) = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)((int)DAT_100aa1dc + 0x69) = *(undefined4 *)(iVar2 + 0x60);
  *(undefined4 *)((int)DAT_100aa1dc + 0x6d) = *(undefined4 *)(iVar2 + 100);
  *(int *)((int)DAT_100aa1dc + 0x71) = piVar3[0xb];
  *(int *)((int)DAT_100aa1dc + 0x75) = piVar3[0x13];
  *(int *)((int)DAT_100aa1dc + 0x79) = piVar3[0xe];
  *(int *)((int)DAT_100aa1dc + 0x7d) = piVar3[2];
  *(int *)((int)DAT_100aa1dc + 0x81) = piVar3[6];
  *(ushort *)((int)DAT_100aa1dc + 7) =
       ((ushort)piVar3[0xf5] & 0xf) | *(ushort *)((int)DAT_100aa1dc + 7);
  if ((*(ushort *)(piVar3 + 0x110) & 0x80) != 0) {
    *(ushort *)((int)DAT_100aa1dc + 7) = *(ushort *)((int)DAT_100aa1dc + 7) | 0x800;
  }
  if (*(char *)(*(int *)(*piVar3 + 0x4c) + 0x30) != '\0') {
    *(ushort *)((int)DAT_100aa1dc + 7) = *(ushort *)((int)DAT_100aa1dc + 7) | 0x10;
  }
  if ((0 < piVar3[0xfd]) && (piVar3[0xf5] == 2)) {
    iVar2 = *(int *)(*piVar3 + 0x4c);
    if (*(char *)(iVar2 + 0x1d) != '\0') {
      *(ushort *)((int)DAT_100aa1dc + 7) = *(ushort *)((int)DAT_100aa1dc + 7) | 0x20;
    }
    if (*(char *)(iVar2 + 0x1e) != '\0') {
      *(ushort *)((int)DAT_100aa1dc + 7) = *(ushort *)((int)DAT_100aa1dc + 7) | 0x40;
    }
    if (*(char *)(iVar2 + 0x1f) != '\0') {
      *(ushort *)((int)DAT_100aa1dc + 7) = *(ushort *)((int)DAT_100aa1dc + 7) | 0x80;
    }
    if (*(char *)(iVar2 + 0x20) != '\0') {
      *(ushort *)((int)DAT_100aa1dc + 7) = *(ushort *)((int)DAT_100aa1dc + 7) | 0x100;
    }
    if (*(char *)(iVar2 + 0x21) != '\0') {
      *(ushort *)((int)DAT_100aa1dc + 7) = *(ushort *)((int)DAT_100aa1dc + 7) | 0x200;
    }
  }
  *(undefined4 *)((int)DAT_100aa1dc + 0x55) = DAT_100b38fc;
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    puVar1 = (undefined4 *)(piVar3[0x16] + local_14 * 0x28);
    if (local_14 == 1) {
      *(undefined4 *)((int)DAT_100aa1dc + 0x11) = puVar1[1];
    }
    else if (local_14 == 2) {
      *(undefined4 *)((int)DAT_100aa1dc + 0xd) = puVar1[1];
    }
    else if (local_14 == 3) {
      *(undefined4 *)((int)DAT_100aa1dc + 9) = puVar1[1];
    }
    *(undefined4 *)((int)DAT_100aa1dc + local_14 * 4 + 0x15) = *puVar1;
    *(undefined4 *)((int)DAT_100aa1dc + local_14 * 4 + 0x35) = puVar1[2];
  }
  FUN_10006e00((undefined4)(DAT_100aa1dc),DAT_100aa1e0);
  return;
}
