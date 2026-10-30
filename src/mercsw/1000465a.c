/* SPDX-License-Identifier: MIT */
/* mercsw 1000465a */
extern int DAT_100aa1ac;
extern int DAT_100adf38;
extern int DAT_100adf34;
extern int DAT_100b3904;
extern int DAT_100b38fc;
extern double _DAT_100a1030;
extern double _DAT_100a1038;
extern double _DAT_100a1040;
extern int DAT_100a4118;
extern int _DAT_100c4c8c;

extern void __cdecl FUN_100082c4(int param_1, int param_2);
extern int __cdecl FUN_10051f43(int param_1);
extern void __cdecl FUN_100044c6(int param_1, int *param_2);
extern void __cdecl FUN_10004b19(int param_1, int *param_2);
extern void __cdecl FUN_10003742(int param_1, int param_2, int param_3, int param_4, int param_5);

void __cdecl FUN_1000465a(int *param_1)
{
  int iVar1;
  int iVar2;

  if ((((*(unsigned short *)(*param_1 + 0x14) & 2) == 0) && ((*(unsigned short *)(*param_1 + 0x14) & 4) == 0)) &&
     ((DAT_100aa1ac == 0 || (*(int *)(*param_1 + 4) == DAT_100adf38)))) {
    if ((*(char *)(DAT_100adf34 + 4) == '\0') && (*(int *)(*param_1 + 4) == DAT_100adf38)) {
      param_1[0xf3] = 0;
      param_1[0xf1] = 0;
    }
    else {
      iVar1 = (int)((unsigned int)param_1[0xf1] -
                    (((unsigned int)param_1[0xf4] * (unsigned int)DAT_100b3904) << (param_1[0xf5] == 3)));
      param_1[0xf3] = (int)((unsigned int)param_1[0xf3] + (unsigned int)iVar1);
      if (param_1[0xf3] < 0) {
        param_1[0xf3] = 0;
      }
      iVar2 = param_1[0xf3] >> 0x10;
      if (((((*(unsigned short *)(param_1 + 0x110) & 4) != 0) && ((*(unsigned short *)(param_1 + 0x110) & 8) == 0))
          && (param_1[0xf5] != 3)) &&
          (0x43e < (int)((unsigned int)DAT_100b38fc - (unsigned int)param_1[0xef]))) {
        param_1[0xf5] = 3;
        param_1[0xef] = DAT_100b38fc;
        if (*(int *)(*param_1 + 4) == DAT_100adf38) {
          FUN_100082c4(0xd, -1);
        }
      }
      if (iVar2 < 0x65) {
        if ((double)iVar2 <= _DAT_100a1030) {
          if ((double)iVar2 <= _DAT_100a1038) {
            if ((*(unsigned short *)(param_1 + 0x110) & 4) == 0) {
              if (((DAT_100a4118 != 0) &&
                   (0x2d4 < (int)((unsigned int)DAT_100b38fc - (unsigned int)_DAT_100c4c8c))) &&
                  ((*(int *)(*param_1 + 4) == DAT_100adf38 && ((double)iVar2 < _DAT_100a1040)))) {
                DAT_100a4118 = 0;
              }
              *(unsigned short *)(param_1 + 0x110) = *(unsigned short *)(param_1 + 0x110) & 0xefff;
            }
            else {
              if ((param_1[0xf5] == 3) &&
                  (0x2d4 < (int)((unsigned int)DAT_100b38fc - (unsigned int)param_1[0xef]))) {
                *(unsigned short *)(param_1 + 0x110) = *(unsigned short *)(param_1 + 0x110) & 0xfffb;
                param_1[0xf5] = 0;
              }
              if ((*(unsigned short *)(param_1 + 0x110) & 8) != 0) {
                *(unsigned short *)(param_1 + 0x110) = *(unsigned short *)(param_1 + 0x110) & 0xfff7;
                *(unsigned short *)(param_1 + 0x110) = *(unsigned short *)(param_1 + 0x110) & 0xfffb;
              }
            }
          }
          else if (((*(int *)(*param_1 + 4) == DAT_100adf38) && (DAT_100a4118 == 0)) && (0 < iVar1))
          {
            _DAT_100c4c8c = DAT_100b38fc;
            DAT_100a4118 = 1;
            FUN_100082c4(0, -1);
          }
        }
        else if ((*(unsigned short *)(param_1 + 0x110) & 4) == 0) {
          param_1[0xef] = DAT_100b38fc;
          *(unsigned short *)(param_1 + 0x110) = *(unsigned short *)(param_1 + 0x110) | 4;
          if (((*(unsigned short *)(param_1 + 0x110) & 0x1000) == 0) &&
              (*(int *)(*param_1 + 4) == DAT_100adf38)) {
            *(unsigned short *)(param_1 + 0x110) = *(unsigned short *)(param_1 + 0x110) | 0x1000;
            FUN_100082c4(3, -1);
            FUN_10003742(0xfe, 100, 0x40, 5, 0x50);
          }
        }
      }
      else if ((*(int *)(*param_1 + 4) != DAT_100adf38) || (*(char *)(DAT_100adf34 + 1) == '\0')) {
        if ((*(unsigned short *)(param_1 + 0x110) & 8) == 0) {
          if (0xe24 < (int)((unsigned int)DAT_100b38fc - (unsigned int)param_1[0xef])) {
            FUN_10004b19(*(int *)(*param_1 + 4), param_1);
          }
        }
        else if ((DAT_100b3904 != 0) &&
                 (iVar1 = FUN_10051f43((int)(4000 / (long long)DAT_100b3904)), iVar1 < 3)) {
          FUN_100044c6(*(int *)(*param_1 + 4), param_1);
        }
      }
    }
  }
  return;
}
