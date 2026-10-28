/* SPDX-License-Identifier: MIT */
/* mercsw 1007b890 */
/* mercsw 1007b890: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined4 PTR_DAT_100af0cc;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
int __cdecl __strcmpi(char * _Str1, char * _Str2);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

int __cdecl FUN_1007b890(uint param_1, char * param_2)

{
  int iVar1;
  char local_2c [12];
  int local_20;
  int local_1c;
  ushort *local_18;
  ushort *local_14;
  int local_10;
  ushort *local_c;
  int local_8;
  
  local_10 = -1;
  local_14 = FUN_1008668b(DAT_100af17c,param_1,(int *)PTR_DAT_100af0cc);
  if (local_14 != (ushort *)0x0) {
    local_18 = local_14 + 6;
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      local_20 = 0x100 - *(char *)(local_8 + (int)local_18);
      local_2c[local_8] = (char)local_20;
    }
    local_1c = 0;
    local_c = local_14;
    while ((local_1c < (short)local_c[4] && (iVar1 = __strcmpi(local_2c,param_2), iVar1 != 0))) {
      local_18 = local_18 + 6;
      local_1c = local_1c + 1;
      for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
        local_20 = 0x100 - *(char *)(local_8 + (int)local_18);
        local_2c[local_8] = (char)local_20;
      }
    }
    iVar1 = __strcmpi(local_2c,param_2);
    if (iVar1 == 0) {
      local_10 = (int)(short)local_18[5];
    }
    FUN_1008664f(param_1,(int *)PTR_DAT_100af0cc);
  }
  return local_10;
}
