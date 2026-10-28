/* SPDX-License-Identifier: MIT */
/* mercsw 10031b85 */
/* mercsw 10031b85: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aae80;
extern int DAT_100ada50;
extern undefined4 DAT_100ada68;
extern undefined DAT_10168900[];
extern undefined DAT_10168904[];
extern undefined DAT_10168908[];
undefined __cdecl FUN_10031a97(int param_1, int param_2);
int __cdecl FUN_1007d0a4(int param_1);
undefined __cdecl FUN_100312ba(int param_1);

void __cdecl FUN_10031b85(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < DAT_100ada50)) {
    iVar1 = param_1 * 0x34;
    switch(*(undefined4 *)(DAT_10168904 + iVar1)) {
    case 1:
      if ((DAT_100ada68 != 0) && (DAT_100aae80 == 0)) {
        FUN_10031a97((int)(DAT_10168900 + iVar1),*(int *)(*(int *)(DAT_10168908 + iVar1) + 0x40));
      }
      break;
    case 2:
    case 6:
      iVar2 = FUN_1007d0a4(-1);
      if ((iVar2 != 0) && (DAT_100aae80 == 0)) {
        FUN_100312ba((int)(DAT_10168900 + iVar1));
      }
      break;
    case 3:
    case 4:
    case 5: ;
    }
  }
  return;
}
