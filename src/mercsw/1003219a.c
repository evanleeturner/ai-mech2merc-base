/* SPDX-License-Identifier: MIT */
/* mercsw 1003219a */
/* mercsw 1003219a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b4e5c;
extern undefined DAT_100cfad0[];
extern undefined DAT_100cfb10[];
extern undefined DAT_100cfb14[];
extern undefined DAT_100cfb18[];
extern undefined DAT_100cfb1c[];
extern undefined DAT_100cfb20[];
extern undefined DAT_100cfb24[];
extern undefined DAT_100cfb28[];
extern undefined DAT_100cfb2c[];
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);

undefined4 __cdecl FUN_1003219a(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_c;
  
  iVar1 = DAT_100b4e5c;
  uVar2 = (*(int *)(param_1 + 4) - 0x48U) / 0x1c;
  if ((DAT_100b4e5c < 0x40) && (uVar2 < 0x41)) {
    DAT_100b4e5c = DAT_100b4e5c + 1;
    *(uint *)(DAT_100cfb10 + iVar1 * 0x744) = uVar2;
    _strncpy((char *)(DAT_100cfad0 + iVar1 * 0x744),(char *)(param_1 + 8),0x40);
    for (local_c = 0; local_c < (int)uVar2; local_c = local_c + 1) {
      *(undefined4 *)(DAT_100cfb14 + local_c * 0x1c + iVar1 * 0x744) =
           *(undefined4 *)(param_1 + 0x48 + local_c * 0x1c);
      *(undefined4 *)(DAT_100cfb18 + local_c * 0x1c + iVar1 * 0x744) =
           *(undefined4 *)(param_1 + 0x4c + local_c * 0x1c);
      *(undefined4 *)(DAT_100cfb1c + local_c * 0x1c + iVar1 * 0x744) =
           *(undefined4 *)(param_1 + 0x50 + local_c * 0x1c);
      *(int *)(DAT_100cfb20 + local_c * 0x1c + iVar1 * 0x744) =
           (int)((unsigned int)(*(int *)(param_1 + 0x54 + local_c * 0x1c)) << (0x10));
      *(int *)(DAT_100cfb24 + local_c * 0x1c + iVar1 * 0x744) =
           (int)((unsigned int)(*(int *)(param_1 + 0x58 + local_c * 0x1c)) << (0x10));
      *(int *)(DAT_100cfb28 + local_c * 0x1c + iVar1 * 0x744) =
           (int)((unsigned int)(*(int *)(param_1 + 0x5c + local_c * 0x1c)) << (0x10));
      *(undefined4 *)(DAT_100cfb2c + local_c * 0x1c + iVar1 * 0x744) =
           *(undefined4 *)(param_1 + 0x60 + local_c * 0x1c);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
