/* SPDX-License-Identifier: MIT */
/* mercsw 100117f2 */
/* mercsw 100117f2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a410c;
extern undefined DAT_100a9ee0[];
extern undefined4 DAT_100a9f44;
extern undefined4 DAT_100af17c;
extern undefined DAT_100c6a08[];
extern undefined DAT_100c6a0e;
extern undefined4 DAT_101686f0;
extern undefined DAT_101eb550[];
extern undefined DAT_101eb5f0[];
extern undefined DAT_101ec000[];
extern undefined DAT_101ec004[];
extern undefined4 DAT_101ec400;
extern undefined4 PTR_DAT_100af0b4;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __cdecl FUN_10056fc4(int * param_1, int param_2, int param_3, int param_4, int param_5);
undefined __cdecl FUN_10066609(int * param_1, int param_2);
undefined __cdecl FUN_1005748f(undefined4 * param_1);
undefined4 __cdecl FUN_100574ca(int * param_1, int param_2, int param_3, int param_4, int param_5);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_100117f2(int param_1, undefined4 param_2, int param_3)

{
  int *piVar1;
  char cVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  int local_30;
  int local_10;
  int local_8;
  
  if (((-1 < param_3) && (param_3 < 8)) &&
     (puVar3 = FUN_1008668b(DAT_100af17c,DAT_101ec400 + DAT_101686f0,(int *)PTR_DAT_100af0b4),
     puVar3 != (ushort *)0x0)) {
    FUN_10056fc4((int *)(DAT_101eb550 + param_3 * 0x14),(int)puVar3,0,0,0);
    for (local_30 = 0; local_30 < 0x10; local_30 = local_30 + 1) {
      local_8 = 0;
      local_10 = 0;
      iVar4 = *(int *)(DAT_101eb5f0 + local_30 * 0x14 + 0xc + param_3 * 0x140) -
              *(int *)(DAT_101eb5f0 + local_30 * 0x14 + 4 + param_3 * 0x140);
      if (iVar4 != -1 && -1 < iVar4 + 1) {
        if (DAT_100a9f44 != 0) {
          FUN_10066609((int *)(DAT_101eb5f0 + local_30 * 0x14 + param_3 * 0x140),0xe);
        }
        cVar2 = '\x06';
        piVar1 = (int *)(*(int *)(param_1 + 0x58) +
                        (*(int *)(DAT_100a9ee0 + local_30 * 4) + -1) * 0x28);
        uVar5 = ((int)*(short *)((int)piVar1 + 0x26) & 0xf0U) >> 4;
        if (uVar5 != 0) {
          local_10 = 0xf - ((piVar1[2] + piVar1[1] / DAT_100a410c) * 3) / (int)(uVar5 << 0x10);
        }
        if (local_10 < 1) {
          local_10 = 0;
        }
        else if (0xf < local_10) {
          local_10 = 0xf;
        }
        uVar5 = (int)*(short *)((int)piVar1 + 0x26) & 0xf;
        if (uVar5 != 0) {
          local_8 = 0xf - ((piVar1[2] + *piVar1 / DAT_100a410c) * 3) / (int)(uVar5 << 0x10);
        }
        if (local_8 < 1) {
          local_8 = 0;
        }
        else if (0xf < local_8) {
          local_8 = 0xf;
        }
        if (local_10 <= local_8) {
          local_10 = local_8;
        }
        if ((*(ushort *)((int)piVar1 + 0x26) & 0x2000) == 0) {
          if (local_10 < 0xc) {
            if (0 < local_10) {
              cVar2 = '\x03';
            }
          }
          else {
            cVar2 = '\v';
          }
        }
        else {
          cVar2 = '\0';
        }
        if (cVar2 != '\x06') {
          DAT_100c6a0e = cVar2;
          FUN_1005748f((undefined4 *)DAT_100c6a08);
          FUN_100574ca((int *)(DAT_101eb5f0 + local_30 * 0x14 + param_3 * 0x140),(int)puVar3,0,
                       *(int *)(DAT_101ec000 + local_30 * 8 + param_3 * 0x80),
                       *(int *)(DAT_101ec004 + local_30 * 8 + param_3 * 0x80));
        }
      }
    }
    FUN_1008664f(DAT_101ec400 + DAT_101686f0,(int *)PTR_DAT_100af0b4);
  }
  return;
}
