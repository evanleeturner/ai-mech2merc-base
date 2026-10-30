/* SPDX-License-Identifier: MIT */
/* mercsw 1005f040 */
extern unsigned char DAT_10113170[];
extern unsigned char DAT_100f3170[];
extern unsigned char DAT_101f52e0[];
extern int DAT_100af17c;
extern int DAT_100b351c;
extern unsigned short *DAT_100b352c;
extern unsigned char *PTR_DAT_100af0ac;
extern unsigned char *PTR_DAT_100af100;
extern short DAT_10114d74;
extern short DAT_10114d78;
extern unsigned short *DAT_10114d70;

extern unsigned short * __cdecl FUN_1008668b(int param_1, int param_2, int *param_3);
extern void __cdecl FUN_1000c3a0(unsigned char *param_1, unsigned char *param_2, unsigned short param_3, unsigned short param_4, int param_5, unsigned int *param_6, int param_7, unsigned short *param_8, int param_9);
extern void __cdecl FUN_10040f45(unsigned int *param_1);
extern void __cdecl FUN_10040f65(int *param_1, int param_2, unsigned int *param_3, unsigned int *param_4, int param_5);

unsigned int __cdecl FUN_1005f040(int param_1, int param_2, unsigned int *param_3, int param_4, int param_5, int param_6, int param_7)
{
  int iVar1;
  int iVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  int local_24;
  int local_20;
  unsigned short *local_18;
  int local_8;

  local_8 = 2;
  if (param_2 < 3) {
    uVar5 = 0;
  }
  else {
    if (param_5 == 0) {
      param_1 = (int)((unsigned int)param_1 + 0x100u);
    }
    iVar2 = (int)((unsigned int)param_1 * 0xeu);
    if ((*(short *)(DAT_10113170 + 6 + iVar2) == 0) || (*(short *)(DAT_10113170 + 8 + iVar2) < 0)) {
      uVar5 = 0;
    }
    else {
      iVar1 = (int)((unsigned int)(int)*(short *)(DAT_10113170 + iVar2) * 0x100u
                    + (unsigned int)(int)*(short *)(DAT_10113170 + 2 + iVar2) * 8u);
      if (*(short *)(DAT_100f3170 + iVar1) < 1) {
        uVar5 = 0;
      }
      else {
        *(short *)(DAT_100f3170 + 2 + iVar1) = (short)(*(short *)(DAT_100f3170 + 2 + iVar1) + 1);
        local_18 = *(unsigned short **)(DAT_100f3170 + 4 + iVar1);
        if (local_18 == (unsigned short *)0) {
          local_18 = FUN_1008668b(DAT_100af17c, (int)*(short *)(DAT_100f3170 + iVar1),
                                  (int *)PTR_DAT_100af0ac);
          if (local_18 == (unsigned short *)0) {
            return 0;
          }
          *(unsigned short **)(DAT_100f3170 + 4 + iVar1) = local_18;
        }
        uVar3 = *local_18;
        uVar4 = local_18[1];
        local_18 = local_18 + 2;
        if (param_5 != 0) {
          for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
            param_3[local_24 * 6 + 3] = param_3[local_24 * 6 + 3] * (unsigned int)(int)(short)(uVar3 - 1);
            param_3[local_24 * 6 + 4] = param_3[local_24 * 6 + 4] * (unsigned int)(int)(short)(uVar4 - 1);
          }
        }
        if ((((*(unsigned short *)(DAT_10113170 + 8 + iVar2) & 4) == 0) && (-1 < param_4)) && (param_4 < 0xf)) {
          local_20 = 1;
        }
        else {
          local_20 = 0;
        }
        if (DAT_100b352c == (unsigned short *)0) {
          DAT_100b352c = FUN_1008668b(DAT_100af17c, DAT_100b351c, (int *)PTR_DAT_100af100);
        }
        if (param_6 == 0) {
          if (local_20 != 0) {
            FUN_10040f45((unsigned int *)(DAT_100b352c + (int)((unsigned int)param_4 * 0x80u)));
            local_8 = 3;
          }
          DAT_10114d74 = (short)((short)uVar3 + -1);
          DAT_10114d78 = (short)((short)uVar4 + -1);
          DAT_10114d70 = local_18;
          if (param_2 != 3) {
            FUN_10040f65((int *)DAT_101f52e0, param_2, param_3, (unsigned int *)&DAT_10114d70, local_8);
          }
        }
        else {
          FUN_1000c3a0(DAT_101f52e0, (unsigned char *)local_18, uVar3, uVar4, param_2, param_3, local_20,
                       DAT_100b352c + (int)((unsigned int)param_4 * 0x80u), param_7);
        }
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}
