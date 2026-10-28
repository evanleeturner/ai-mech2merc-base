/* SPDX-License-Identifier: MIT */
/* mercsw 10049704 */
/* mercsw 10049704: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_10160be0;

int __cdecl FUN_10049704(int param_1)

{
  int *local_c;
  int local_8;
  
  local_8 = 0;
  for (local_c = DAT_10160be0; (local_c != (int *)0x0 && (*local_c != param_1));
      local_c = (int *)local_c[5]) {
  }
  if (local_c != (int *)0x0) {
    local_8 = local_c[3];
  }
  return local_8;
}
