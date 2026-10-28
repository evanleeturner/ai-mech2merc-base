/* SPDX-License-Identifier: MIT */
/* mercsw 1006b24e */
/* mercsw 1006b24e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined DAT_100f3120[];
extern undefined4 PTR_DAT_100af0c8;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined __cdecl FUN_10060563(int param_1);

void __cdecl FUN_1006b24e(int param_1)

{
  ushort *puVar1;
  int local_8;
  
  if (param_1 == 0) {
    local_8 = 0x10;
  }
  else {
    local_8 = 0x11;
  }
  puVar1 = FUN_1008668b(DAT_100af17c,*(uint *)(DAT_100f3120 + local_8 * 4),(int *)PTR_DAT_100af0c8)
  ;
  if (puVar1 != (ushort *)0x0) {
    FUN_1008664f(*(uint *)(DAT_100f3120 + local_8 * 4),(int *)PTR_DAT_100af0c8);
    FUN_10060563(local_8);
  }
  return;
}
