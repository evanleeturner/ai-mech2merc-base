/* SPDX-License-Identifier: MIT */
/* mercsw 100133f8 */
/* mercsw 100133f8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined2 * DAT_100aa1e4;
extern undefined2 DAT_100aa2b0;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100f2ff0[];
undefined __cdecl FUN_10006e00(undefined4 param_1, undefined4 param_2);

void __stdcall FUN_100133f8(void)

{
  int local_10;
  
  *DAT_100aa1e4 = DAT_100aa2b0;
  *(undefined1 *)(DAT_100aa1e4 + 1) = *(undefined1 *)(DAT_100eef40[DAT_100adf38] + 4);
  *(undefined2 *)((int)DAT_100aa1e4 + 3) = 0;
  for (local_10 = 0; local_10 < 0xe; local_10 = local_10 + 1) {
    if (*(int *)(DAT_100f2ff0 + local_10 * 4) != 0) {
      *(ushort *)((int)DAT_100aa1e4 + 3) =
           *(ushort *)((int)DAT_100aa1e4 + 3) | (ushort)((int)((unsigned int)(1) << (((byte)local_10 & 0x1f))));
      *(undefined4 *)(DAT_100f2ff0 + local_10 * 4) = 0;
    }
  }
  if (*(short *)((int)DAT_100aa1e4 + 3) != 0) {
    FUN_10006e00((undefined4)(DAT_100aa1e4),5);
  }
  return;
}
