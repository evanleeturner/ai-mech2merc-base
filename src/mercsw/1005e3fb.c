/* SPDX-License-Identifier: MIT */
/* mercsw 1005e3fb */
extern int DAT_10160be4;

extern char * __cdecl _strncpy(char *, const char *, unsigned int);
extern char * __cdecl _strncat(char *, const char *, unsigned int);
extern void __cdecl FUN_1005acaa(int *, int, int, int, char *, int);

void __cdecl FUN_1005e3fb(int *param_1, unsigned char *param_2, int param_3, int param_4, int param_5, unsigned int *param_6)
{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  char local_a8[128];
  int local_28;
  int *local_24;
  int local_20;
  unsigned int local_1c;
  unsigned int local_18;
  unsigned int local_14;
  char *local_10;
  int local_c;
  unsigned int local_8;
  int *piVar5;

  local_20 = 0;
  local_28 = 1;
  if (((param_1 != (int *)0) && (param_1[0xc] != 0)) && (param_6 != (unsigned int *)0)) {
    local_18 = *param_6;
    local_24 = (int *)*param_1;
    if (((local_24 != (int *)0) && (param_2 != (unsigned char *)0)) && (*(int *)(param_2 + 8) != 0)) {
      local_8 = (unsigned int)((int)((unsigned int)DAT_10160be4 + 0xffffffcfu) == param_3);
      if (((*param_2 & 1) == 0) || (*(int *)(param_2 + 0x14) == 0)) {
        local_c = *(int *)(param_2 + 4);
      }
      else {
        local_c = (**(int (__cdecl **)(int))(param_2 + 0x14))(*(int *)(param_2 + 0xc));
      }
      local_14 = (unsigned int)(param_6[4] == (unsigned int)param_3);
      switch (local_18) {
      case 1:
        if (*(int *)(param_2 + 0x10) != 0) {
          (**(void (__cdecl **)(unsigned int *, unsigned char *))(param_2 + 0x10))(param_6, param_2);
        }
        if (*(int *)(param_2 + 0x14) == 0) {
          param_2[4] = 0;
          param_2[5] = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          local_c = *(int *)(param_2 + 4);
        }
        else {
          uVar2 = (**(unsigned int (__cdecl **)(int))(param_2 + 0x14))(*(int *)(param_2 + 0xc));
          *(unsigned int *)(param_2 + 4) = uVar2;
          local_c = *(int *)(param_2 + 4);
        }
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        if (*(int *)(param_2 + 0x1c) != 0) {
          (**(void (__cdecl **)(int, int))(param_2 + 0x1c))(*(int *)(param_2 + 0xc), local_c);
        }
        local_28 = 0;
        break;
      case 5:
        if (*(int *)(param_2 + 0x20) != 0) {
          (**(void (__cdecl **)(int))(param_2 + 0x20))(*(int *)(param_2 + 0xc));
        }
        local_28 = 0;
      }
      piVar5 = *(int **)(param_2 + 8);
      if (0 < piVar5[1]) {
        local_c = (int)((unsigned int)piVar5[1] + (unsigned int)local_20 + (unsigned int)local_c) % piVar5[1];
        _strncpy(local_a8, (char *)piVar5[2 + local_c], 0x7f);
        local_a8[127] = 0;
        if (**(int **)(param_2 + 8) != 0) {
          local_10 = (char *)(**(int (__cdecl **)(int *, unsigned char *, int, int, int, unsigned int *))*(int **)(param_2 + 8))
                                       (param_1, param_2, param_3, param_4, param_5, param_6);
          if (local_10 != (char *)0) {
            uVar3 = 0xffffffffu;
            pbVar4 = (unsigned char *)local_a8;
            do {
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              bVar1 = *pbVar4;
              pbVar4 = pbVar4 + 1;
            } while (bVar1 != 0);
            local_1c = 0x7fu - (~uVar3 - 1u);
            _strncat(local_a8, local_10, local_1c);
            local_a8[127] = 0;
          }
        }
        FUN_1005acaa(local_24, param_4, param_5, param_1[0xc], local_a8, (int)0x100eebb0);
      }
      if (local_14 != 0) {
        if (((local_8 != 0) && (param_6[(unsigned int)param_3 * 5u + 6u] == 5)) && (*(int *)(param_2 + 0x1c) != 0)) {
          (**(void (__cdecl **)(int, int))(param_2 + 0x1c))(*(int *)(param_2 + 0xc), local_c);
        }
        if ((*(int *)(param_2 + 0x18) != 0) && (local_28 != 0)) {
          (**(void (__cdecl **)(int, int))(param_2 + 0x18))(*(int *)(param_2 + 0xc), local_c);
        }
      }
      *(int *)(param_2 + 4) = local_c;
    }
  }
  return;
}
