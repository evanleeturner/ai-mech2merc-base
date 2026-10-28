/* SPDX-License-Identifier: MIT */
/* mercsw 1001e3ac */
/* mercsw 1001e3ac: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101e8540[];
extern undefined DAT_101e8544[];
extern undefined DAT_101e8546[];
extern undefined DAT_101e856a[];
extern undefined DAT_101e856e[];
undefined __cdecl FUN_1001dfab(undefined4 param_1);
char * __cdecl __strnset(char * _Dest, int _Val, size_t _Count);
int __cdecl __close(int _FileHandle);

void __cdecl FUN_1001e3ac(int param_1)

{
  ushort uVar1;
  
  FUN_1001dfab(*(undefined4 *)(DAT_101e8546 + param_1 * 0x14a));
  *(undefined4 *)(DAT_101e8546 + param_1 * 0x14a) = 0;
  for (uVar1 = 0; uVar1 < 0x20; uVar1 = uVar1 + 1) {
    if (*(int *)(DAT_101e856a + (uint)uVar1 * 8 + param_1 * 0x14a) != 0) {
      FUN_1001dfab(*(undefined4 *)(DAT_101e856a + (uint)uVar1 * 8 + param_1 * 0x14a));
      *(undefined4 *)(DAT_101e856a + (uint)uVar1 * 8 + param_1 * 0x14a) = 0;
    }
    if (*(int *)(DAT_101e856e + (uint)uVar1 * 8 + param_1 * 0x14a) != 0) {
      FUN_1001dfab(*(undefined4 *)(DAT_101e856e + (uint)uVar1 * 8 + param_1 * 0x14a));
      *(undefined4 *)(DAT_101e856e + (uint)uVar1 * 8 + param_1 * 0x14a) = 0;
    }
  }
  *(undefined2 *)(DAT_101e8544 + param_1 * 0x14a) = 0;
  __strnset((char *)(param_1 * 0x14a + 0x101e866a),0,0x20);
  __close(*(int *)(DAT_101e8540 + param_1 * 0x14a));
  return;
}
