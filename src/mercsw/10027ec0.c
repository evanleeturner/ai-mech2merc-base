/* SPDX-License-Identifier: MIT */
/* mercsw 10027ec0 */
/* mercsw 10027ec0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100ab0a0;
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];
extern char s__c_2_2d__1_1d__1_1d__1_1d_67_10s_100ad464[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);

void __stdcall FUN_10027ec0(void)

{
  int local_70;
  char local_6c [100];
  int local_8;
  
  for (local_70 = 0; local_70 < DAT_100b38d8; local_70 = local_70 + 1) {
    local_8 = DAT_100eef40[local_70];
    _sprintf(local_6c,s__c_2_2d__1_1d__1_1d__1_1d_67_10s_100ad464,
             (-(uint)(local_8 == DAT_100ab0a0) & 0x1e) + 0x20,*(undefined4 *)(local_8 + 4),
             *(undefined4 *)(local_8 + 8),(int)*(char *)(local_8 + 0x187),
             (int)*(char *)(local_8 + 0x186),local_8 + 0x110);
  }
  return;
}
