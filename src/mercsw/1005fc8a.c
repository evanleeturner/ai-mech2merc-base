/* SPDX-License-Identifier: MIT */
/* mercsw 1005fc8a */
extern int DAT_100b36cc;
extern int DAT_100aa540;
extern int DAT_100aa544;
extern int DAT_100aa548;

extern void __cdecl FUN_1001bdc6(unsigned short *param_1);
extern int __cdecl RaySlabInterval(int param_1, int param_2, int param_3, int param_4, int *param_5, int *param_6);
extern int __cdecl FUN_1002634e(int param_1);
extern void __cdecl FUN_1002650e(int *param_1, int param_2);

unsigned int __cdecl FUN_1005fc8a(unsigned short *param_1, int *param_2)
{
  unsigned int uVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;

  FUN_1001bdc6(param_1);
  local_14 = *(int **)(param_1 + 0x26);
  if (local_14 == (int *)0) {
    uVar1 = 0;
  }
  else {
    iVar2 = RaySlabInterval(*param_2, param_2[9], *local_14, local_14[1], &local_8, &local_18);
    if (iVar2 == 0) {
      local_c = 0;
      iVar2 = RaySlabInterval(param_2[1], param_2[10], local_14[2], local_14[3], &local_10, &local_1c);
      if (iVar2 == 0) {
        if (local_8 < local_10) {
          local_c = 1;
          local_8 = local_10;
        }
        if (local_1c < local_18) {
          local_18 = local_1c;
        }
        iVar2 = RaySlabInterval(param_2[2], param_2[0xb], local_14[4], local_14[5], &local_10, &local_1c);
        if (iVar2 == 0) {
          if (local_8 < local_10) {
            local_8 = local_10;
            local_c = 2;
          }
          if (local_1c < local_18) {
            local_18 = local_1c;
          }
          if (local_18 < local_8) {
            uVar1 = 0;
          }
          else {
            if (local_8 < 0) {
              DAT_100b36cc = local_8;
              local_8 = 0;
            }
            local_10 = FUN_1002634e((int)param_2);
            if (local_10 < local_18) {
              local_18 = local_10;
            }
            if (local_18 < local_8) {
              uVar1 = 0;
            }
            else {
              FUN_1002650e(param_2, local_8);
              if (local_c == 0) {
                DAT_100aa548 = 0;
                DAT_100aa544 = 0;
                if (param_2[6] < 1) {
                  DAT_100aa540 = 0x10000;
                }
                else {
                  DAT_100aa540 = (int)0xffff0000u;
                }
              }
              else if (local_c == 1) {
                DAT_100aa548 = 0;
                DAT_100aa540 = 0;
                if (param_2[7] < 1) {
                  DAT_100aa544 = 0x10000;
                }
                else {
                  DAT_100aa544 = (int)0xffff0000u;
                }
              }
              else if (local_c == 2) {
                DAT_100aa544 = 0;
                DAT_100aa540 = 0;
                if (param_2[8] < 1) {
                  DAT_100aa548 = 0x10000;
                }
                else {
                  DAT_100aa548 = (int)0xffff0000u;
                }
              }
              uVar1 = 1;
            }
          }
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
