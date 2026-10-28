/* SPDX-License-Identifier: MIT */
/* mercsw 1004e12e */
/* mercsw 1004e12e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0710;
extern char DAT_100b07fc[];
extern undefined DAT_10123170[];
extern undefined DAT_1012327a[];
extern undefined DAT_10123327[];
extern char s__s_failed_100b07f0[];
extern char s__s_successful_100b07e0[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __cdecl FUN_1001028b(char * param_1);
undefined __cdecl FUN_1004d6e0(char * param_1);
undefined __cdecl FUN_10008351(int * param_1);

undefined4 __cdecl FUN_1004e12e(int param_1, int param_2, int param_3)

{
  int iVar1;
  char local_78 [100];
  int local_14;
  char *local_10;
  undefined4 local_c;
  undefined *local_8;
  
  (void)local_c;
  iVar1 = param_1 * 0x3c0a + param_2 * 0x13f;
  local_8 = DAT_1012327a + iVar1;
  if ((param_1 == DAT_100b0710) && (*(int *)(DAT_10123170 + param_2 * 4) == 0)) {
    if (param_3 == 5) {
      _sprintf(local_78,s__s_successful_100b07e0,DAT_10123327 + iVar1);
      local_14 = *(int *)(local_8 + 0x81);
      local_c = FUN_1001028b((char *)(local_8 + 0x89));
    }
    else if (param_3 == 6) {
      _sprintf(local_78,s__s_failed_100b07f0,DAT_10123327 + iVar1);
      local_14 = *(int *)(local_8 + 0x85);
      local_c = FUN_1001028b((char *)(local_8 + 0x99));
    }
    if ((local_78[0] == ' ') || (local_8[0x74] == '\0')) {
      local_10 = DAT_100b07fc;
    }
    else {
      local_10 = local_78;
    }
    FUN_1004d6e0(local_10);
    FUN_10008351(&local_14);
    *(undefined4 *)(DAT_10123170 + param_2 * 4) = 1;
  }
  return 1;
}
