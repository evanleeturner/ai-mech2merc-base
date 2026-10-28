/* SPDX-License-Identifier: MIT */
/* mercsw 10063818 */
/* mercsw 10063818: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7bc8[];
extern undefined DAT_100a7bcc[];
undefined __cdecl FUN_10044cc4(int param_1, int * param_2);

void __cdecl FUN_10063818(int * param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  if (param_1 != (int *)0x0) {
    iVar2 = param_1[0xf7];
    for (local_14 = 0; local_14 < iVar2; local_14 = local_14 + 1) {
      iVar3 = param_1[0x15] + local_14 * 0x40;
      iVar1 = *(int *)(iVar3 + 4) * 0x68;
      if (*(int *)(iVar3 + 8) == 1) {
        *(undefined4 *)(iVar3 + 8) = 2;
        *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(DAT_100a7bcc + iVar1);
        *(undefined4 *)(iVar3 + 0x10) = 0;
        FUN_10044cc4(iVar3,param_1);
        if ((*(int *)(DAT_100a7bc8 + iVar1) == 0) || ((*(ushort *)(param_1 + 0x110) & 0x80) == 0))
        {
          *(undefined4 *)(iVar3 + 0x1c) = 0;
          *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0x1c);
        }
        else {
          *(uint *)(iVar3 + 0x18) = *(uint *)(*param_1 + 0xdc) & 0xff;
          *(uint *)(iVar3 + 0x1c) = *(uint *)(*param_1 + 0xdc) & 0xf00;
        }
      }
    }
  }
  return;
}
