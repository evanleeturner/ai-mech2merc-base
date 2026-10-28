/* SPDX-License-Identifier: MIT */
/* mercsw 100240be */
/* mercsw 100240be: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab378;
extern undefined4 DAT_100ab37c;
extern undefined4 DAT_100ab384;
extern undefined4 DAT_1016acc0[];
extern char DAT_1016cc00[];
extern int DAT_1016cc50;
extern undefined DAT_1016cc68[];
extern undefined DAT_1016cc70[];
extern undefined DAT_1016ce32[];
extern char s_pe___x_100ab388[];
undefined __cdecl FUN_1002f727(int param_1);
int * __cdecl FUN_10023a8c(int param_1);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

int __cdecl FUN_100240be(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  iVar1 = DAT_100ab384;
  if (param_1 != -1) {
    if ((param_1 == 0) && (DAT_100ab37c != 0)) {
      DAT_1016cc50 = 0;
      for (local_c = DAT_100ab37c; local_c != 0; local_c = *(int *)(local_c + 4)) {
        DAT_1016acc0[DAT_1016cc50] = *(undefined4 *)(local_c + 8);
        DAT_1016cc50 = DAT_1016cc50 + 1;
      }
      for (local_8 = 0; local_8 < DAT_1016cc50; local_8 = local_8 + 1) {
        iVar1 = DAT_1016acc0[local_8] * 0x1fa;
        *(ushort *)(DAT_1016cc70 + iVar1) = *(ushort *)(DAT_1016cc70 + iVar1) & 0xfffe;
        FUN_1002f727(*(int *)(DAT_1016ce32 + iVar1));
        FUN_10023a8c(*(int *)(DAT_1016cc68 + iVar1));
      }
      DAT_100ab378 = 0;
    }
    DAT_100ab384 = param_1;
    _sprintf(DAT_1016cc00,s_pe___x_100ab388,param_1);
    iVar1 = param_1;
  }
  return iVar1;
}
