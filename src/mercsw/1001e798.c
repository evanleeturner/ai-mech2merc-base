/* SPDX-License-Identifier: MIT */
/* mercsw 1001e798 */
/* mercsw 1001e798: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101e8546[];
extern undefined DAT_101e856a[];
ushort __cdecl FUN_1001e55a(int param_1, char * param_2);
undefined4 __cdecl FUN_1001e632(int param_1);

int __cdecl FUN_1001e798(int param_1, char * param_2, ushort param_3)

{
  ushort uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = -1;
  }
  else {
    uVar1 = FUN_1001e55a(param_1,param_2);
    if ((short)uVar1 < 0) {
      iVar2 = -1;
    }
    else if ((*(int *)(DAT_101e856a + (short)uVar1 * 8 + param_1 * 0x14a) == 0) &&
            (iVar2 = FUN_1001e632(param_1), iVar2 == -1)) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(*(int *)(DAT_101e856a + (short)uVar1 * 8 + param_1 * 0x14a) + 0x1a +
                      (uint)param_3 * 8) -
              (uint)*(ushort *)
                     (*(int *)(DAT_101e8546 + param_1 * 0x14a) + 0x22 + (short)uVar1 * 0x18);
      if (iVar2 < 1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}
