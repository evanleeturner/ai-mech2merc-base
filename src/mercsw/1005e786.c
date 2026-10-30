/* SPDX-License-Identifier: MIT */
/* mercsw 1005e786 */
extern int DAT_10160be4;

extern void __cdecl FUN_1005acaa(int *, int, int, undefined4, byte *, int);

void __cdecl
FUN_1005e786(undefined4 *param_1, byte *param_2, int param_3, int param_4, int param_5,
             undefined4 *param_6)
{
  int *piVar1;
  int iVar2;
  int bVar3;
  undefined4 uVar4;
  int bVar5;
  unsigned int local_18;
  int local_c;

  local_18 = 0;
  bVar3 = 1;
  if (((param_1 != (undefined4 *)0) && (param_1[0xc] != 0)) && (param_6 != (undefined4 *)0)) {
    uVar4 = *param_6;
    piVar1 = (int *)*param_1;
    if (((piVar1 != (int *)0) && (param_2 != (byte *)0)) && (*(int *)(param_2 + 8) != 0)) {
      bVar5 = (int)((unsigned int)DAT_10160be4 - 0x31u) == param_3;
      if (((*param_2 & 1) == 0) || (*(int *)(param_2 + 0x14) == 0)) {
        local_c = *(int *)(param_2 + 4);
      }
      else {
        local_c = ((int (__cdecl *)(undefined4))*(void **)(param_2 + 0x14))(*(undefined4 *)(param_2 + 0xc));
      }
      iVar2 = (int)param_6[4];
      switch (uVar4) {
      case 1:
        if (*(int *)(param_2 + 0x10) != 0) {
          ((void (__cdecl *)(undefined4 *, byte *))*(void **)(param_2 + 0x10))(param_6, param_2);
        }
        if (*(int *)(param_2 + 0x14) == 0) {
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          local_c = *(int *)(param_2 + 4);
        }
        else {
          uVar4 = ((undefined4 (__cdecl *)(undefined4))*(void **)(param_2 + 0x14))(*(undefined4 *)(param_2 + 0xc));
          *(undefined4 *)(param_2 + 4) = uVar4;
          local_c = *(int *)(param_2 + 4);
        }
        break;
      case 2:
        if (iVar2 == param_3) {
          if ((DAT_10160be4 == 0x20) || (DAT_10160be4 == 200)) {
            local_18 = 1;
          }
          else if (DAT_10160be4 == 0xc9) {
            local_18 = 0xffffffffu;
          }
          else {
            local_18 = (unsigned int)bVar5;
          }
        }
        break;
      case 4:
        if (*(int *)(param_2 + 0x1c) != 0) {
          ((void (__cdecl *)(undefined4, int))*(void **)(param_2 + 0x1c))(*(undefined4 *)(param_2 + 0xc), local_c);
        }
        bVar3 = 0;
        break;
      case 5:
        if (*(int *)(param_2 + 0x20) != 0) {
          ((void (__cdecl *)(undefined4))*(void **)(param_2 + 0x20))(*(undefined4 *)(param_2 + 0xc));
        }
        bVar3 = 0;
        break;
      case 3:
        break;
      }
      if (0 < *(int *)(*(int *)(param_2 + 8) + 4)) {
        local_c = (int)((unsigned int)*(int *)(*(int *)(param_2 + 8) + 4) + local_18 + (unsigned int)local_c)
                  % *(int *)(*(int *)(param_2 + 8) + 4);
        FUN_1005acaa(piVar1, param_4, param_5, param_1[0xc],
                     *(byte **)(*(int *)(param_2 + 8) + 8 + (int)((unsigned int)local_c * 4u)),
                     0x100eebb0);
      }
      if (iVar2 == param_3) {
        if ((((local_18 != 0) && (param_6[(unsigned int)param_3 * 5u + 6u] == 4)) ||
             ((bVar5 && (param_6[(unsigned int)param_3 * 5u + 6u] == 5)))) &&
            (*(int *)(param_2 + 0x1c) != 0)) {
          ((void (__cdecl *)(undefined4, int))*(void **)(param_2 + 0x1c))(*(undefined4 *)(param_2 + 0xc), local_c);
        }
        if ((*(int *)(param_2 + 0x18) != 0) && (bVar3)) {
          ((void (__cdecl *)(undefined4, int))*(void **)(param_2 + 0x18))(*(undefined4 *)(param_2 + 0xc), local_c);
        }
      }
      *(int *)(param_2 + 4) = local_c;
    }
  }
  return;
}
