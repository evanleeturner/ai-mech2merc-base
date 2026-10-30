/* SPDX-License-Identifier: MIT */
/* mercsw 1007ee80 */
extern int DAT_100aa558;
extern int DAT_100aa55c;
extern int DAT_100aa560;

extern int __cdecl FUN_1007f35b(int *, int *, int *, int *, int *);
extern int __cdecl FUN_1007f876(int, int *, int *, int *, int *);
extern void __cdecl FUN_100261f0(int *, int, int, int, int, int, int);
extern int __cdecl FUN_1002634e(int);
extern int __cdecl FixedMul16(int, int);
extern void __cdecl FUN_1002650e(int *, int);
extern int __cdecl FUN_10014991(int *, int *);
extern int __cdecl EnsureSegmentDirection(int);
extern int __cdecl ApproxLength3_Likely(int, int, int);

int __cdecl
FUN_1007ee80(int *param_1, int *param_2, int *param_3, int param_4, int param_5, int param_6,
             int *param_7, int *param_8, int *param_9)
{
  int iVar1;
  int iVar2;
  int local_b4[12];
  int local_7c;
  int local_78;
  int local_74[12];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_18 = *(int *)(*param_1 + 0x50);
  local_20 = *(int *)(*param_1 + 0x54);
  local_28 = *(int *)(*param_1 + 0x58);
  local_30 = (int)((unsigned int)local_18 + (unsigned int)param_4);
  local_34 = (int)((unsigned int)local_20 + (unsigned int)param_5);
  local_3c = (int)((unsigned int)param_6 + (unsigned int)local_28);
  *param_7 = local_30;
  *param_8 = local_34;
  *param_9 = local_3c;
  local_2c = 0;
  local_24 = 0;
  if ((param_1[0xf5] == 2) || (param_1[0xf5] == 4)) {
    iVar1 = FUN_1007f35b(param_1, param_7, param_8, param_9, param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_1007f876((int)param_1, param_7, param_8, param_9, &local_2c);
      if (iVar1 == 0) {
        if (((param_4 == 0) && (param_5 == 0)) && (param_6 == 0)) {
          if (param_1[0xf6] != 0) {
            param_1[0xf6] = (int)((unsigned int)param_1[0xf6] + 1u);
            return param_1[0xf6];
          }
          return 0;
        }
        FUN_100261f0(local_74, local_18, local_20, local_28, local_30, local_34, local_3c);
        local_38 = FUN_1002634e((int)local_74);
        local_78 = local_74[10];
        if (local_74[10] < 0) {
          local_78 = (int)(0u - (unsigned int)local_74[10]);
        }
        iVar1 = FixedMul16(param_1[0x107], (int)(0x10000u - (unsigned int)local_78));
        local_78 = FixedMul16(param_1[0x100], local_78);
        local_78 = (int)((unsigned int)iVar1 + (unsigned int)local_78);
        FUN_1002650e(local_74, (int)((unsigned int)local_78 + (unsigned int)local_38));
        iVar1 = FUN_10014991(local_74, &local_2c);
        if (iVar1 != 0) {
          local_24 = 1;
          param_1[0xf6] = (int)((unsigned int)param_1[0xf6] + 1u);
          *param_2 = local_2c;
          if (((DAT_100aa558 == 0) && (DAT_100aa55c == 0)) &&
              ((DAT_100aa560 == 0 && (local_2c != 0)))) {
            FUN_100261f0(local_b4, *(int *)(local_2c + 0x34), *(int *)(local_2c + 0x38),
                         *(int *)(local_2c + 0x3c), local_74[3], local_74[4], local_74[5]);
            EnsureSegmentDirection((int)local_b4);
            DAT_100aa558 = local_b4[9];
            DAT_100aa55c = local_b4[10];
            DAT_100aa560 = local_b4[11];
          }
          iVar1 = FixedMul16((int)((unsigned int)DAT_100aa558 << 1), local_74[9]);
          iVar2 = FixedMul16((int)((unsigned int)DAT_100aa55c << 1), local_74[10]);
          local_7c = FixedMul16((int)((unsigned int)DAT_100aa560 << 1), local_74[11]);
          local_7c = (int)((unsigned int)iVar1 + (unsigned int)iVar2 + (unsigned int)local_7c);
          local_c = FixedMul16(local_7c, DAT_100aa558);
          local_c = (int)((unsigned int)local_74[9] - (unsigned int)local_c);
          local_10 = FixedMul16(local_7c, DAT_100aa55c);
          local_10 = (int)((unsigned int)local_74[10] - (unsigned int)local_10);
          local_14 = FixedMul16(local_7c, DAT_100aa560);
          local_14 = (int)((unsigned int)local_74[11] - (unsigned int)local_14);
          iVar1 = ApproxLength3_Likely(param_1[0x10d], param_1[0x10e], param_1[0x10f]);
          local_8 = (int)(0u - (unsigned int)iVar1) >> 2;
          iVar1 = FixedMul16(local_c, local_8);
          param_1[0x10a] = iVar1;
          iVar1 = FixedMul16(local_10, local_8);
          param_1[0x10b] = iVar1;
          iVar1 = FixedMul16(local_14, local_8);
          param_1[0x10c] = iVar1;
          iVar1 = FUN_1002634e((int)local_74);
          FUN_1002650e(local_74, (int)((unsigned int)iVar1 - (unsigned int)local_78));
          iVar1 = local_38;
          local_1c = FUN_1002634e((int)local_74);
          local_1c = (int)((unsigned int)iVar1 - (unsigned int)local_1c);
          if (local_1c < 1) {
            *param_7 = local_74[3];
            *param_8 = local_74[4];
            *param_9 = local_74[5];
          }
          else {
            local_c = FixedMul16(local_c, local_1c);
            local_c = local_c >> 2;
            local_10 = FixedMul16(local_10, local_1c);
            local_10 = local_10 >> 2;
            iVar1 = FixedMul16(local_14, local_1c);
            *param_7 = (int)((unsigned int)local_74[3] + (unsigned int)local_c);
            *param_8 = (int)((unsigned int)local_74[4] + (unsigned int)local_10);
            *param_9 = (int)((unsigned int)local_74[5] + (unsigned int)(iVar1 >> 2));
          }
        }
      }
      else {
        local_24 = 1;
        param_1[0xf6] = (int)((unsigned int)param_1[0xf6] + 1u);
        *param_2 = local_2c;
      }
    }
    else {
      *(int *)(*param_1 + 0x7c) = *(int *)(*param_3 + 4);
      local_24 = 1;
      param_1[0xf6] = (int)((unsigned int)param_1[0xf6] + 1u);
      *param_2 = 0;
    }
    if (local_24 == 0) {
      param_1[0xf6] = 0;
      *param_2 = 0;
    }
    iVar1 = param_1[0xf6];
  }
  else {
    param_1[0xf6] = 0;
    iVar1 = 0;
  }
  return iVar1;
}
