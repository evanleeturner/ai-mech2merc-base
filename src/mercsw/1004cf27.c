/* SPDX-License-Identifier: MIT */
/* mercsw 1004cf27 */
/* mercsw 1004cf27: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0714;
extern undefined DAT_1015f2e0[];
extern undefined DAT_101600f8[];
extern undefined DAT_101604c0[];
int __cdecl __strcmpi(char * _Str1, char * _Str2);

undefined4 __cdecl FUN_1004cf27(int param_1, char * str2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_c;
  
  if (param_1 < 0x10) {
    for (local_c = 0; local_c < DAT_100b0714; local_c = local_c + 1) {
      iVar1 = __strcmpi((char *)(DAT_1015f2e0 + local_c * 0x1c),str2);
      if (iVar1 == 0) {
        *(int *)(DAT_101600f8 + param_1 * 0x3c) = local_c;
        puVar2 = (undefined4 *)(DAT_1015f2e0 + local_c * 0x1c);
        puVar3 = (undefined4 *)(DAT_101604c0 + param_1 * 0x70);
        for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        return 1;
      }
    }
  }
  return 0;
}
