/* SPDX-License-Identifier: MIT */
/* mercsw 100635ce */
/* mercsw 100635ce: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7bc8[];
extern undefined DAT_100a7bcc[];
extern undefined4 DAT_100aa1ac;
extern undefined DAT_100f2fb0[];

void __cdecl FUN_100635ce(int * param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xe; local_10 = local_10 + 1) {
    if (*(int *)(DAT_100f2fb0 + local_10 * 4) != 0) {
      *(undefined4 *)(DAT_100f2fb0 + local_10 * 4) = 0;
      iVar2 = param_1[0x15] + local_10 * 0x40;
      iVar1 = *(int *)(iVar2 + 4) * 0x68;
      if ((*(int *)(iVar2 + 8) != -1) || (DAT_100aa1ac != 0)) {
        *(undefined4 *)(iVar2 + 8) = 2;
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(DAT_100a7bcc + iVar1);
        *(undefined4 *)(iVar2 + 0x10) = 0;
        if ((*(int *)(DAT_100a7bc8 + iVar1) == 0) || ((*(ushort *)(param_1 + 0x110) & 0x80) == 0))
        {
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x1c);
        }
        else {
          *(uint *)(iVar2 + 0x18) = *(uint *)(*param_1 + 0xdc) & 0xff;
          *(uint *)(iVar2 + 0x1c) = *(uint *)(*param_1 + 0xdc) & 0xf00;
        }
      }
    }
  }
  return;
}
