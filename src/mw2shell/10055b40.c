/* SPDX-License-Identifier: MIT */
/* mw2shell 10055b40 */
/* mw2shell 10055b40: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_100c32d8[];
extern char s___d__d__100a14c0[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined __thiscall FUN_10012f10(void * this, int param_1, int param_2, int param_3, int param_4);
int __thiscall FUN_10013180(void * this, int param_1, int param_2, int param_3, byte * param_4, undefined * param_5);

void __fastcall FUN_10055b40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x37) == 1) {
    _sprintf(DAT_100c32d8,s___d__d__100a14c0,*(undefined4 *)(param_1 + 0x2b),
             *(undefined4 *)(param_1 + 0x2f));
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_10012f10(*(void **)(param_1 + 4),0x230,0x14,*(int *)(param_1 + 0xc),
                   *(int *)(*(int *)(param_1 + 8) + 0x40c));
    }
    iVar1 = FUN_10013180(*(void **)(param_1 + 4),0x230,0x14,*(int *)(*(int *)(param_1 + 8) + 0x408),
                         (byte *)(DAT_100c32d8),(undefined *)0x0);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return;
}
