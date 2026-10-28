/* SPDX-License-Identifier: MIT */
/* mercsw 1001ed0b */
/* mercsw 1001ed0b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101e8540[];
extern undefined DAT_101e8546[];
extern undefined DAT_101e856a[];
ushort __cdecl FUN_1001e55a(int param_1, char * param_2);
undefined4 __cdecl FUN_1001e632(int param_1);

int __cdecl FUN_1001ed0b(int param_1, char * param_2, ushort param_3, undefined4 * param_4)

{
  ushort uVar1;
  int iVar2;
  uint local_18;
  
  uVar1 = FUN_1001e55a(param_1,param_2);
  if (uVar1 == 0xffff) {
    iVar2 = 0;
  }
  else {
    if ((*(int *)(DAT_101e856a + (short)uVar1 * 8 + param_1 * 0x14a) == 0) &&
       (iVar2 = FUN_1001e632(param_1), iVar2 == -1)) {
      return 0;
    }
    local_18 = (uint)param_3;
    iVar2 = (uint)*(ushort *)
                   (*(int *)(DAT_101e8546 + param_1 * 0x14a) + 0x22 + (short)uVar1 * 0x18) +
            *(int *)(*(int *)(DAT_101e856a + (short)uVar1 * 8 + param_1 * 0x14a) + 0x16 +
                    local_18 * 8);
    *param_4 = *(undefined4 *)(DAT_101e8540 + param_1 * 0x14a);
  }
  return iVar2;
}
