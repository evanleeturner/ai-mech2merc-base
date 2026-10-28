/* SPDX-License-Identifier: MIT */
/* mercsw 1002b4cf */
/* mercsw 1002b4cf: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100ad1c0[];
extern undefined DAT_100ad200[];
extern undefined DAT_100ad240[];
extern undefined DAT_100ad280[];
extern undefined DAT_100ad2c0[];
extern undefined DAT_100ad300[];
extern undefined DAT_1016a6a0[];

void __cdecl FUN_1002b4cf(undefined4 * param_1, short param_2, short param_3, short param_4)

{
  ushort local_8;
  
  if (param_3 == -1) {
    param_1[param_2 + 0x52] = 0;
  }
  else {
    local_8 = (ushort)(param_1[1] != (undefined4)((int)param_4));
    switch(*param_1) {
    case 1:
      param_1[param_2 + 0x52] =
           *(undefined4 *)
            (DAT_1016a6a0 + *(short *)(DAT_100ad1c0 + param_3 * 4 + (short)local_8 * 2) * 4);
      break;
    case 2:
      param_1[param_2 + 0x52] =
           *(undefined4 *)
            (DAT_1016a6a0 + *(short *)(DAT_100ad280 + param_3 * 4 + (short)local_8 * 2) * 4);
      break;
    case 3:
      param_1[param_2 + 0x52] =
           *(undefined4 *)
            (DAT_1016a6a0 + *(short *)(DAT_100ad200 + param_3 * 4 + (short)local_8 * 2) * 4);
      break;
    case 4:
      param_1[param_2 + 0x52] =
           *(undefined4 *)
            (DAT_1016a6a0 + *(short *)(DAT_100ad2c0 + param_3 * 4 + (short)local_8 * 2) * 4);
      break;
    case 5:
      param_1[param_2 + 0x52] =
           *(undefined4 *)
            (DAT_1016a6a0 + *(short *)(DAT_100ad300 + param_3 * 4 + (short)local_8 * 2) * 4);
      break;
    case 6:
      param_1[param_2 + 0x52] =
           *(undefined4 *)
            (DAT_1016a6a0 + *(short *)(DAT_100ad240 + param_3 * 4 + (short)local_8 * 2) * 4);
      break;
    case 7:
      break;
    case 8:
      param_1[param_2 + 0x52] =
           *(undefined4 *)
            (DAT_1016a6a0 + *(short *)(DAT_100ad300 + param_3 * 4 + (short)local_8 * 2) * 4);
    }
  }
  return;
}
