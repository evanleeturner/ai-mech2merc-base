/* SPDX-License-Identifier: MIT */
/* mercsw 1005f9f7 */
/* mercsw 1005f9f7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined DAT_100f3170[];
extern undefined DAT_100f3174[];
extern undefined DAT_10113170[];
extern undefined DAT_10113172[];
extern undefined DAT_10113176[];
extern undefined DAT_10113178[];
extern undefined4 PTR_DAT_100af0ac;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);

ushort * __cdecl FUN_1005f9f7(int param_1, ushort * param_2, ushort * param_3)

{
  int iVar1;
  ushort *local_c;
  
  if (param_1 < 0x200) {
    iVar1 = param_1 * 0xe;
    if ((*(short *)(DAT_10113176 + iVar1) == 0) || (*(short *)(DAT_10113178 + iVar1) < 0)) {
      local_c = (ushort *)0x0;
    }
    else {
      iVar1 = *(short *)(DAT_10113170 + iVar1) * 0x100 + *(short *)(DAT_10113172 + iVar1) * 8;
      if (*(short *)(DAT_100f3170 + iVar1) < 1) {
        local_c = (ushort *)0x0;
      }
      else {
        local_c = *(ushort **)(DAT_100f3174 + iVar1);
        if ((local_c == (ushort *)0x0) &&
           (local_c = FUN_1008668b(DAT_100af17c,(int)*(short *)(DAT_100f3170 + iVar1),
                                   (int *)PTR_DAT_100af0ac), local_c == (ushort *)0x0)) {
          return (ushort *)0x0;
        }
        *param_2 = *local_c;
        *param_3 = local_c[1];
        local_c = local_c + 2;
      }
    }
  }
  else {
    local_c = (ushort *)0x0;
  }
  return local_c;
}
