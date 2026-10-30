/* SPDX-License-Identifier: MIT */
/* mercsw 1004ddbe */
extern int DAT_100aa1ac;
extern int DAT_100adf38;
extern int DAT_100b38d8;
extern char DAT_100ef030;
extern char DAT_100ef034;
extern char DAT_101600e0;
extern char DAT_10215670;
extern char DAT_10215680;
extern char DAT_10215688;
extern char DAT_1021568c;
extern char DAT_10215690;
extern char DAT_10215694;
extern char DAT_10215696;
extern char *DAT_100eef40[];

extern int __cdecl IsWithinRadius3_Likely(int, int, int, int);
extern void __cdecl FUN_1000dde1(int, int *, int *, int *);
extern void __cdecl FUN_10003742(int, int, int, int, int);

unsigned int __cdecl FUN_1004ddbe(unsigned char *param_1, int param_2)
{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  int local_10;

  uVar1 = (unsigned short)*param_1;
  uVar2 = ((unsigned int)param_1[1] << 8) & 0xffff;
  if ((-1 < *(int *)(&DAT_101600e0 + (unsigned int)param_2 * 0x3cu)) || (DAT_100aa1ac != 0)) {
    if (uVar2 == 0x100) {
      iVar3 = (int)((unsigned int)uVar1 * 0x54u);
      local_28 = *(int *)(&DAT_10215680 + iVar3);
      if (local_28 < 1) {
        local_28 = 20000;
      }
      for (local_10 = 0; local_10 < DAT_100b38d8; local_10 = local_10 + 1) {
        if ((*(int *)(DAT_100eef40[local_10] + 8) == param_2) &&
            (iVar4 = IsWithinRadius3_Likely((int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x50) -
                                        (unsigned int)*(int *)(&DAT_10215688 + iVar3)),
                                  (int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x54) -
                                        (unsigned int)*(int *)(&DAT_1021568c + iVar3)),
                                  (int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x58) -
                                        (unsigned int)*(int *)(&DAT_10215690 + iVar3)),
                                  local_28), iVar4 != 0)) {
          if ((DAT_100adf38 == local_10) &&
              ((((*(unsigned short *)(DAT_100eef40[local_10] + 0x14) & 0x2000) != 0 &&
                 ((*(unsigned short *)(&DAT_10215694 + iVar3) & 0x20) == 0)) &&
                (*(int *)(&DAT_10215670 + iVar3) != 0)))) {
            *(unsigned short *)(&DAT_10215694 + iVar3) =
                 *(unsigned short *)(&DAT_10215694 + iVar3) | 0x20;
            *(unsigned short *)(&DAT_10215696 + iVar3) =
                 *(unsigned short *)(&DAT_10215696 + iVar3) |
                 (unsigned short)(1u << ((unsigned char)param_2 & 0x1f));
            FUN_10003742(0xfc, 100, 0x40, 5, 0x50);
          }
          return 1;
        }
      }
    }
    else if (uVar2 == 0x200) {
      local_14 = DAT_100eef40[uVar1];
      for (local_10 = 0; local_10 < DAT_100b38d8; local_10 = local_10 + 1) {
        if (((*(int *)(DAT_100eef40[local_10] + 8) == param_2) &&
             ((*(unsigned short *)(DAT_100eef40[local_10] + 0x14) & 6) == 0)) &&
            (iVar3 = IsWithinRadius3_Likely((int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x50) -
                                        (unsigned int)*(int *)(local_14 + 0x50)),
                                  (int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x54) -
                                        (unsigned int)*(int *)(local_14 + 0x54)),
                                  (int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x58) -
                                        (unsigned int)*(int *)(local_14 + 0x58)),
                                  20000), iVar3 != 0)) {
          return 1;
        }
      }
    }
    else if (uVar2 == 0x400) {
      local_18 = &DAT_100ef030 + (unsigned int)uVar1 * 0x40u;
      (void)local_18;
      FUN_1000dde1(*(int *)(&DAT_100ef034 + (unsigned int)uVar1 * 0x40u),
                   &local_1c, &local_20, &local_24);
      for (local_10 = 0; local_10 < DAT_100b38d8; local_10 = local_10 + 1) {
        if ((*(int *)(DAT_100eef40[local_10] + 8) == param_2) &&
            (iVar3 = IsWithinRadius3_Likely((int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x50) -
                                        (unsigned int)local_1c),
                                  (int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x54) -
                                        (unsigned int)local_20),
                                  (int)((unsigned int)*(int *)(DAT_100eef40[local_10] + 0x58) -
                                        (unsigned int)local_24),
                                  20000),
             iVar3 != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}
