/* SPDX-License-Identifier: MIT */
/* mercsw 10001e96 */
/* mercsw 10001e96: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_10123230;
extern undefined DAT_1012327a[];
extern undefined DAT_1012327c[];
extern undefined DAT_10123368[];
extern undefined DAT_10123369[];
extern undefined DAT_10168410[];
int __cdecl __strcmpi(char * _Str1, char * _Str2);
undefined4 __stdcall FUN_1004fee5(void);

void __cdecl FUN_10001e96(char * param_1, uint param_2, undefined2 param_3)

{
  byte bVar1;
  int iVar2;
  int local_14;
  int local_c;
  
  for (local_14 = 0; local_14 < DAT_10123230; local_14 = local_14 + 1) {
    if (*(int *)(DAT_10168410 + local_14 * 4) != 0) {
      for (local_c = 0; local_c < 0x30; local_c = local_c + 1) {
        if (DAT_1012327a[local_14 * 0x3c0a + local_c * 0x13f] == '\a') {
          iVar2 = __strcmpi(param_1,(char *)(*(int *)(DAT_10168410 + local_14 * 4) + local_c * 0x97
                                            + 0x70));
          if (((iVar2 == 0) &&
              ((param_2 & *(uint *)(DAT_1012327c + local_14 * 0x3c0a + local_c * 0x13f)) != 0)) &&
             ((byte)DAT_10123368[local_14 * 0x3c0a + local_c * 0x13f] < 0x28)) {
            bVar1 = DAT_10123368[local_14 * 0x3c0a + local_c * 0x13f];
            DAT_10123368[local_14 * 0x3c0a + local_c * 0x13f] =
                 DAT_10123368[local_14 * 0x3c0a + local_c * 0x13f] + '\x01';
            *(undefined2 *)(DAT_10123369 + local_14 * 0x3c0a + (uint)bVar1 * 2 + local_c * 0x13f) =
                 param_3;
            FUN_1004fee5();
          }
        }
      }
    }
  }
  return;
}
