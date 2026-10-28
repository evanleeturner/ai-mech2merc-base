/* SPDX-License-Identifier: MIT */
/* mercsw 10060390 */
/* mercsw 10060390: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100f3040[];
extern undefined DAT_100f3120[];

void __cdecl FUN_10060390(undefined4 * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  for (local_8 = 0; local_8 < 0xb; local_8 = local_8 + 1) {
    puVar2 = param_1;
    puVar3 = (undefined4 *)(DAT_100f3040 + local_8 * 0x14);
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  for (local_8 = 0; local_8 < 0x14; local_8 = local_8 + 1) {
    *(undefined4 *)(DAT_100f3120 + local_8 * 4) = 0;
  }
  return;
}
