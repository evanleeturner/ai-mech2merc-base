/* SPDX-License-Identifier: MIT */
/* mw2shell 100115d0 */
/* mw2shell 100115d0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100a50f0;
extern void * DAT_100c61fc;
size_t __cdecl _fread(void * _DstBuf, size_t _ElementSize, size_t _Count, FILE * _File);

void __cdecl FUN_100115d0(FILE * param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)((int)DAT_100c61fc + 8);
  iVar1 = 8;
  do {
    if (*piVar2 != -1) {
      iVar3 = iVar3 + 1;
    }
    piVar2 = piVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(int *)((int)DAT_100c61fc + 4) = iVar3 * 0x20 + 0x28;
  iVar1 = *(int *)((int)DAT_100c61fc + 4);
  if (*(int *)((int)DAT_100c61fc + 4) <= (int)DAT_100a50f0) {
    iVar1 = DAT_100a50f0;
  }
  iVar3 = 0;
  DAT_100a50f0 = iVar1;
  _fread(DAT_100c61fc,8,1,param_1);
  do {
    if (*(int *)((int)DAT_100c61fc + iVar3 + 8) != -1) {
      _fread((void *)((int)DAT_100c61fc + iVar3 + 8),0x20,1,param_1);
    }
    iVar3 = iVar3 + 0x20;
  } while (iVar3 < 0x100);
  return;
}
