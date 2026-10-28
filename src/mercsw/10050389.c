/* SPDX-License-Identifier: MIT */
/* mercsw 10050389 */
/* mercsw 10050389: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0864;
extern undefined4 DAT_100eeed0;
extern undefined4 DAT_100eeed4;
extern undefined4 DAT_100eeed8;
extern undefined4 DAT_100eef40[];
extern undefined DAT_101155c0[];
extern undefined DAT_101155e0[];
extern undefined DAT_101155e4[];
undefined __cdecl FUN_1003dfde(ushort * param_1);
undefined4 __cdecl FUN_100504ef(int param_1, int param_2, int * param_3);
undefined __cdecl FUN_1003df3a(ushort * param_1);

undefined4 __cdecl FUN_10050389(int param_1, int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  int local_8;
  
  local_10 = 1;
  if (param_2 == -1) {
    local_10 = 1;
  }
  else {
    DAT_100eeed0 = 1;
    DAT_100eeed4 = 0x100;
    DAT_100eeed8 = param_1;
    for (local_8 = 0; local_8 < DAT_100b0864; local_8 = local_8 + 1) {
      iVar1 = local_8 * 0x48;
      if (*(int *)(DAT_101155c0 + iVar1) == param_1) {
        if (((*(ushort *)(DAT_100eef40[*(int *)(DAT_101155c0 + iVar1)] + 0x14) & 2) == 0) ||
           (*(int *)(DAT_101155e0 + iVar1) != 0)) {
          iVar2 = FUN_100504ef(local_8,param_2,(int *)0x0);
          if (iVar2 == 0) {
            local_10 = 0;
          }
        }
        else {
          FUN_1003dfde(*(ushort **)(DAT_101155e4 + iVar1));
        }
        if (*(int *)(DAT_101155e0 + iVar1) == 0) {
          FUN_1003df3a(*(ushort **)(DAT_101155e4 + iVar1));
        }
      }
    }
    DAT_100eeed0 = 0;
  }
  return local_10;
}
