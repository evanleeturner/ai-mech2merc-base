/* SPDX-License-Identifier: MIT */
/* mercsw 100396a4 */
extern unsigned char DAT_100aeb5c[];
extern unsigned char DAT_100aef5d[]; /* packed: address 0x100aef5d is not 4-aligned; int table accessed via memcpy */

extern void __cdecl FUN_1003993b(unsigned int param_1);
extern void __cdecl FUN_100398e3(unsigned int param_1);

unsigned char * __cdecl FUN_100396a4(unsigned char *param_1, unsigned char *param_2, int param_3, unsigned int param_4, int *param_5)
{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned char *puVar8;
  unsigned char *pbVar9;
  unsigned char *local_18;
  int local_8;
  unsigned int tmp;
  int tmpi;

  local_18 = param_2;
  do {
    bVar1 = (unsigned char)(*param_1 >> 6);
    if (bVar1 == 1) {
      uVar3 = param_4 >> 1;
    }
    else {
      uVar3 = param_4;
      if (bVar1 == 2) {
        uVar3 = param_4 >> 2;
      }
    }
    bVar2 = (unsigned char)(*param_1 & 0xf);
    pbVar9 = param_1 + 1;
    local_8 = *param_5;
    if (bVar2 == 0) {
      puVar8 = DAT_100aeb5c;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = 0x80;
        puVar8 = puVar8 + 1;
      }
      local_8 = 0;
    }
    else if (bVar2 != 1) {
      if (bVar2 == 2) {
        tmp = (unsigned int)*pbVar9 * 2u - 0x80u;
        __builtin_memcpy(DAT_100aef5d, &tmp, 4);
        pbVar9 = param_1 + 3;
        tmp = (unsigned int)param_1[2] * 2u - 0x80u;
        __builtin_memcpy(DAT_100aef5d + 4, &tmp, 4);
        uVar6 = 0;
        do {
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar4 = 8;
          do {
            uVar5 = (unsigned int)bVar2;
            bVar2 = (unsigned char)(bVar2 >> 1);
            __builtin_memcpy(&tmpi, DAT_100aef5d + (uVar5 & 1) * 4, 4);
            local_8 = (int)((unsigned int)tmpi + (unsigned int)local_8);
            if (local_8 < 0x80) {
              if (local_8 < -0x7f) {
                local_8 = -0x7f;
              }
            }
            else {
              local_8 = 0x7f;
            }
            DAT_100aeb5c[uVar6] = (unsigned char)((char)local_8 - 0x80);
            uVar6 = uVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        } while (uVar6 < uVar3);
      }
      else if (bVar2 == 3) {
        iVar4 = 4;
        iVar7 = 0;
        do {
          tmp = (unsigned int)*pbVar9 * 2u - 0x80u;
          __builtin_memcpy(DAT_100aef5d + iVar7, &tmp, 4);
          pbVar9 = pbVar9 + 1;
          iVar7 = iVar7 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar6 = 0;
        do {
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar4 = 4;
          do {
            uVar5 = (unsigned int)bVar2;
            bVar2 = (unsigned char)(bVar2 >> 2);
            __builtin_memcpy(&tmpi, DAT_100aef5d + (uVar5 & 3) * 4, 4);
            local_8 = (int)((unsigned int)tmpi + (unsigned int)local_8);
            if (local_8 < 0x80) {
              if (local_8 < -0x7f) {
                local_8 = -0x7f;
              }
            }
            else {
              local_8 = 0x7f;
            }
            DAT_100aeb5c[uVar6] = (unsigned char)((char)local_8 - 0x80);
            uVar6 = uVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        } while (uVar6 < uVar3);
      }
      else if (bVar2 == 4) {
        iVar4 = 0x10;
        iVar7 = 0;
        do {
          tmp = (unsigned int)*pbVar9 * 2u - 0x80u;
          __builtin_memcpy(DAT_100aef5d + iVar7, &tmp, 4);
          pbVar9 = pbVar9 + 1;
          iVar7 = iVar7 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar6 = 0;
        do {
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar4 = 2;
          do {
            uVar5 = (unsigned int)bVar2;
            bVar2 = (unsigned char)(bVar2 >> 4);
            __builtin_memcpy(&tmpi, DAT_100aef5d + (uVar5 & 0xf) * 4, 4);
            local_8 = (int)((unsigned int)tmpi + (unsigned int)local_8);
            if (local_8 < 0x80) {
              if (local_8 < -0x7f) {
                local_8 = -0x7f;
              }
            }
            else {
              local_8 = 0x7f;
            }
            DAT_100aeb5c[uVar6] = (unsigned char)((char)local_8 - 0x80);
            uVar6 = uVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        } while (uVar6 < uVar3);
      }
      else {
        if (bVar2 != 5) {
          return (unsigned char *)0;
        }
        iVar4 = 0;
        do {
          iVar7 = iVar4;
          DAT_100aeb5c[iVar7] = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar3 - 1;
          iVar4 = iVar7 + 1;
        } while (uVar3 != 0);
        local_8 = (int)DAT_100aeb5c[iVar7] - 0x80;
      }
    }
    if (bVar1 == 1) {
      FUN_1003993b(param_4);
    }
    else if (bVar1 == 2) {
      FUN_100398e3(param_4);
    }
    *param_5 = local_8;
    puVar8 = DAT_100aeb5c;
    for (uVar3 = param_4; uVar3 != 0; uVar3 = uVar3 - 1) {
      *local_18 = *puVar8;
      puVar8 = puVar8 + 1;
      local_18 = local_18 + 1;
    }
    param_3 = param_3 + -1;
    param_1 = pbVar9;
  } while (param_3 != 0);
  return pbVar9;
}
