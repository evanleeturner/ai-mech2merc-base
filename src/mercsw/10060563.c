/* SPDX-License-Identifier: MIT */
/* mercsw 10060563 */
/* mercsw 10060563: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b9a18;
extern undefined DAT_100f3120[];
extern undefined4 PTR_DAT_100af0c8;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_10060563(int param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar1 = (uint *)(DAT_100f3120 + param_1 * 4);
  if (0 < (int)*puVar1) {
    puVar2 = FUN_1008668b(DAT_100af17c,*puVar1,(int *)PTR_DAT_100af0c8);
    if (puVar2 != (ushort *)0x0) {
      ((void (*)(ushort *))((**(code **)(DAT_100b9a18 + 0x18))))(puVar2);
      FUN_1008664f(*puVar1,(int *)PTR_DAT_100af0c8);
    }
  }
  return;
}
