/* SPDX-License-Identifier: MIT */
/* mercsw 1007bf28 */
/* mercsw 1007bf28: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40ac;
extern undefined DAT_100cded4[];
extern undefined DAT_100cded8[];
extern undefined DAT_100cdedc[];
extern undefined DAT_100cdee0[];
extern undefined DAT_100cdee4[];
extern undefined DAT_100cdee8[];
extern undefined DAT_100cdeec[];
undefined4 __stdcall FUN_10051f89(void);
int __cdecl FUN_10003d60(int param_1, int param_2);

void __cdecl FUN_1007bf28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 * 0x24;
  if (*(int *)(DAT_100cded4 + iVar1) != 0) {
    iVar3 = 0x57e98;
    iVar2 = FUN_10051f89();
    iVar2 = FUN_10003d60(((int)((unsigned int)(iVar2) << (0x10))) / ((DAT_100a40ac << 10) >> 0x10),iVar3);
    *(int *)(DAT_100cded8 + iVar1) = iVar2;
    iVar3 = 0x57e98;
    iVar2 = FUN_10051f89();
    iVar2 = FUN_10003d60(((int)((unsigned int)(iVar2) << (0x10))) / ((DAT_100a40ac << 10) >> 0x10),iVar3);
    *(int *)(DAT_100cdee0 + iVar1) = iVar2;
    iVar3 = 0x57e98;
    iVar2 = FUN_10051f89();
    iVar2 = FUN_10003d60(((iVar2 + 0x400) * 0x10000) / ((DAT_100a40ac << 10) >> 0x10),iVar3);
    *(int *)(DAT_100cdedc + iVar1) = iVar2;
    iVar2 = FUN_10051f89();
    *(int *)(DAT_100cdee4 + iVar1) =
         (int)(iVar2 * 0x7e98 + ((int)((unsigned int)(iVar2) * (unsigned int)(0x7e98)) >> 0x1f & 0x3ffU)) >> 10;
    iVar2 = FUN_10051f89();
    *(int *)(DAT_100cdee8 + iVar1) =
         (int)(iVar2 * 0x7e98 + ((int)((unsigned int)(iVar2) * (unsigned int)(0x7e98)) >> 0x1f & 0x3ffU)) >> 10;
    iVar2 = FUN_10051f89();
    *(int *)(DAT_100cdeec + iVar1) =
         (int)(iVar2 * 0x7e98 + ((int)((unsigned int)(iVar2) * (unsigned int)(0x7e98)) >> 0x1f & 0x3ffU)) >> 10;
  }
  return;
}
