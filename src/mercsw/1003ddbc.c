/* SPDX-License-Identifier: MIT */
/* mercsw 1003ddbc */
/* mercsw 1003ddbc: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
extern undefined4 DAT_100af098;
extern undefined DAT_100c6d5c[];

void __cdecl FUN_1003ddbc(ushort * param_1)

{
  if ((((param_1 != (ushort *)0x0) && ((*param_1 & 0x800) != 0)) && (*(int *)(param_1 + 0x12) != 4))
     && ((*param_1 = *param_1 & 0xf7ff, *(int *)(param_1 + 2) != 0 && (DAT_100af098 != 0)))) {
    if (DAT_100aefc0 == 0) {
      if (*(int *)(DAT_100af098 + 0x10) != 0) {
        *(ushort **)(*(int *)(DAT_100af098 + 0x10) + 0xc) = param_1;
      }
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(DAT_100af098 + 0x10);
      *(ushort **)(DAT_100af098 + 0x10) = param_1;
      *(int *)(param_1 + 6) = DAT_100af098;
    }
    else {
      if (*(int *)(*(int *)(DAT_100c6d5c +
                           *(int *)(param_1 + 0x24) * 0x18 + *(int *)(param_1 + 0x22) * 0x120) +
                  0x10) != 0) {
        *(ushort **)
         (*(int *)(*(int *)(DAT_100c6d5c +
                           *(int *)(param_1 + 0x24) * 0x18 + *(int *)(param_1 + 0x22) * 0x120) +
                  0x10) + 0xc) = param_1;
      }
      *(undefined4 *)(param_1 + 8) =
           *(undefined4 *)
            (*(int *)(DAT_100c6d5c +
                     *(int *)(param_1 + 0x24) * 0x18 + *(int *)(param_1 + 0x22) * 0x120) + 0x10);
      *(ushort **)
       (*(int *)(DAT_100c6d5c + *(int *)(param_1 + 0x24) * 0x18 + *(int *)(param_1 + 0x22) * 0x120)
       + 0x10) = param_1;
      *(undefined4 *)(param_1 + 6) =
           *(undefined4 *)
            (DAT_100c6d5c + *(int *)(param_1 + 0x24) * 0x18 + *(int *)(param_1 + 0x22) * 0x120);
    }
  }
  return;
}
