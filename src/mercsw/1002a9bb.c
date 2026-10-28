/* SPDX-License-Identifier: MIT */
/* mercsw 1002a9bb */
/* mercsw 1002a9bb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1f4;
extern int DAT_100adf38;
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100eef40[];
extern char s__6ld____2d_Mech__2d_has_attacked_100ad670[];
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined4 __cdecl FUN_1005dd5a(undefined4 param_1);

void __cdecl FUN_1002a9bb(int param_1, uint param_2)

{
  char local_58 [80];
  int local_8;
  
  if ((DAT_100adf38 == param_1) || (DAT_100aa1f4 != 0)) {
    local_8 = DAT_100eef40[param_1];
    if (((uint)*(ushort *)(local_8 + 0x178) != (param_2 | 0x200)) ||
       (*(short *)(local_8 + 0x176) != 3)) {
      _sprintf(local_58,s__6ld____2d_Mech__2d_has_attacked_100ad670,DAT_100b38fc,
               *(undefined4 *)(local_8 + 8),param_1,param_2);
      FUN_1005dd5a((undefined4)(local_58));
    }
    *(ushort *)(local_8 + 0x17a) = (ushort)param_2 | 0x200;
    *(undefined2 *)(local_8 + 0x176) = 3;
  }
  return;
}
