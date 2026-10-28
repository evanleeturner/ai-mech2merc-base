/* SPDX-License-Identifier: MIT */
/* mercsw 1007fecd */
/* mercsw 1007fecd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100adf34;
undefined __cdecl FUN_100065c4(int param_1, int * param_2, int param_3, uint param_4);
undefined __cdecl FUN_1004aa97(undefined4 param_1, uint param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8);
undefined __cdecl FUN_1004bbc3(uint param_1);
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
undefined __cdecl FUN_1007fcc3(int * param_1, int * param_2, int param_3);
undefined __cdecl FUN_1004bd53(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_1007fecd(int * param_1, int param_2)

{
  int iVar1;
  
  if (((DAT_100aa1ac == 0) || (param_2 == 0)) ||
     (((byte)*(undefined2 *)(param_2 + 2) & 0xf0) != 0xb0)) {
    iVar1 = FUN_1000fc30(param_1[0x10d],param_1[0x10e],param_1[0x10f]);
    if (200000 < iVar1) {
      iVar1 = FUN_10002570(iVar1 - 200000,1300000);
      if (*(char *)(DAT_100adf34 + 3) != '\0') {
        FUN_1007fcc3(param_1,(int *)0x0,iVar1 * 3);
      }
      if ((param_2 != 0) && ((*(ushort *)(param_2 + 2) & 0x200) != 0)) {
        FUN_1004bd53(*(undefined4 *)(*param_1 + 4),param_2,(int)((unsigned int)(iVar1) * (unsigned int)(3)) >> 0x10,
                     *(int *)(param_2 + 0x34),*(int *)(param_2 + 0x38),*(int *)(param_2 + 0x3c));
      }
    }
  }
  else {
    FUN_100065c4(-2,param_1,0x320000,7);
    FUN_100065c4(-2,param_1,0x320000,8);
    FUN_1004aa97(*(undefined4 *)(*param_1 + 4),0xd,*(int *)(param_2 + 0x34),*(int *)(param_2 + 0x38)
                 ,*(int *)(param_2 + 0x3c),*(int *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                 *(int *)(param_2 + 0x3c));
    FUN_1004bbc3((uint)*(ushort *)(param_2 + 0x14));
  }
  return;
}
