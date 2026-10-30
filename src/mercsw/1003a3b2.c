/* SPDX-License-Identifier: MIT */
/* mercsw 1003a3b2 */
extern int DAT_100aefa4;
extern int DAT_100aefa0;
extern float _DAT_100a11dc;
extern char DAT_10160fe0;
extern char DAT_10160ff8;
extern char DAT_1016108c;
extern char DAT_10161090;
extern char DAT_10161094;
extern char DAT_10161098;
extern char DAT_1016109c;
extern char DAT_101610a0;
extern char DAT_101610a4;
extern char DAT_101610a8;
extern char DAT_101610ac;
extern char DAT_101610b0;
extern char DAT_101610b4;
extern char DAT_101610d8;

extern void __cdecl FUN_1003a0e9(int, int);

void __cdecl FUN_1003a3b2(int *param_1)
{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_1c;
  int local_14;

  uVar1 = (unsigned int)param_1[1];
  if (*param_1 == 2) {
    DAT_100aefa4 = 2;
    local_14 = (int)0xffffec78u;
  }
  else {
    DAT_100aefa4 = 1;
    local_14 = (int)0xffffd8f0u;
  }
  DAT_100aefa0 = 1;
  for (local_1c = 0; local_1c < 9; local_1c = local_1c + 1) {
    iVar2 = local_1c * 0x80c;
    if (DAT_100aefa4 == 5) {
      *(int *)(&DAT_10160fe0 + iVar2) = 0;
    }
    else {
      *(int *)(&DAT_10160fe0 + iVar2) = DAT_100aefa4;
      if ((uVar1 & 1) != 0) {
        piVar4 = param_1 + 2;
        piVar5 = (int *)(&DAT_10160ff8 + iVar2);
        for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
      }
      if ((uVar1 & 2) == 0) {
        *(int *)(&DAT_1016109c + iVar2) = 0;
        *(int *)(&DAT_101610a0 + iVar2) = 0;
        *(int *)(&DAT_101610a4 + iVar2) = 0;
        *(int *)(&DAT_101610a8 + iVar2) = 0;
        *(int *)(&DAT_101610ac + iVar2) = 0;
        *(int *)(&DAT_101610b0 + iVar2) = 0;
        *(int *)(&DAT_101610b4 + iVar2) = 0;
      }
      else {
        *(int *)(&DAT_1016109c + iVar2) = param_1[0x22];
        *(int *)(&DAT_101610a0 + iVar2) = param_1[0x23];
        *(int *)(&DAT_101610a4 + iVar2) = param_1[0x24];
        *(int *)(&DAT_101610a8 + iVar2) = param_1[0x25];
        *(int *)(&DAT_101610ac + iVar2) = param_1[0x26];
        *(int *)(&DAT_101610b0 + iVar2) = param_1[0x27];
        *(int *)(&DAT_101610b4 + iVar2) = param_1[0x28];
      }
      if ((uVar1 & 4) == 0) {
        *(int *)(&DAT_10161098 + iVar2) = 0xe;
        *(float *)(&DAT_101610d8 + iVar2) = (float)*(int *)(&DAT_10161098 + iVar2) / _DAT_100a11dc;
      }
      else {
        *(int *)(&DAT_10161098 + iVar2) = param_1[0x2c];
        *(float *)(&DAT_101610d8 + iVar2) = (float)*(int *)(&DAT_10161098 + iVar2) / _DAT_100a11dc;
      }
      if ((uVar1 & 8) == 0) {
        *(int *)(&DAT_1016108c + iVar2) = 0;
        *(int *)(&DAT_10161090 + iVar2) = local_14;
        *(int *)(&DAT_10161094 + iVar2) = 0;
      }
      else {
        *(int *)(&DAT_1016108c + iVar2) = param_1[0x29];
        *(int *)(&DAT_10161090 + iVar2) = param_1[0x2a];
        *(int *)(&DAT_10161094 + iVar2) = param_1[0x2b];
      }
    }
  }
  if ((uVar1 & 0x10000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0x2d), 0);
  }
  if ((uVar1 & 0x20000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0x6a), 1);
  }
  if ((uVar1 & 0x40000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0xa7), 2);
  }
  if ((uVar1 & 0x80000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0xe4), 3);
  }
  if ((uVar1 & 0x100000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0x121), 4);
  }
  if ((uVar1 & 0x200000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0x15e), 5);
  }
  if ((uVar1 & 0x400000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0x19b), 6);
  }
  if ((uVar1 & 0x800000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0x1d8), 7);
  }
  if ((uVar1 & 0x1000000) != 0) {
    FUN_1003a0e9((int)(param_1 + 0x215), 8);
  }
  return;
}
