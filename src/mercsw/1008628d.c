/* SPDX-License-Identifier: MIT */
/* mercsw 1008628d */
/* mercsw 1008628d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ba7bc;

ushort * __cdecl FUN_1008628d(uint param_1, int * param_2)

{
  ushort *local_8;
  
  if ((int)param_1 < 0) {
    local_8 = (ushort *)0x0;
  }
  else {
    for (local_8 = *(ushort **)
                    (DAT_100ba7bc +
                    ((int)((int)*(char *)((int)param_2 + 2) + (int)*(char *)((int)param_2 + 3) +
                           (int)(char)*param_2 + (int)*(char *)((int)param_2 + 1) + param_1) % 0x3f1
                    ) * 4);
        (local_8 != (ushort *)0x0 && ((*local_8 != param_1 || (*(int *)(local_8 + 2) != *param_2))))
        ; local_8 = *(ushort **)(local_8 + 4)) {
    }
  }
  return local_8;
}
