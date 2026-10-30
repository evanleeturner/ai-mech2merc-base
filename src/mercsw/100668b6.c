/* SPDX-License-Identifier: MIT */
/* mercsw 100668b6 */
/* mercsw 100668b6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined DAT_100b3940[];
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
int * __cdecl ScalePointBySize(int param_1, int * param_2, int * param_3);
undefined4 __cdecl FUN_1005aae4(int param_1);
undefined4 __cdecl FUN_1005aaf7(int param_1, int param_2);
undefined __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __cdecl FUN_100668b6(int * param_1, char * param_2, int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  int local_34;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  byte *local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  (void)local_1c;
  if (((param_1 != (int *)0x0) && (param_2 != (char *)0x0)) && (param_3 != 0)) {
    uVar3 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_20 = ~uVar3 - 1;
    if (local_20 != 0) {
      local_14 = HeapAlloc(DAT_100adf74,1,~uVar3);
      local_24 = local_14 + local_20;
      uVar3 = 0xffffffff;
      do {
        pcVar6 = param_2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = param_2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pbVar5 = (byte *)(pcVar6 + -uVar3);
      pbVar7 = local_14;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar5;
        pbVar5 = pbVar5 + 4;
        pbVar7 = pbVar7 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pbVar7 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        pbVar7 = pbVar7 + 1;
      }
      local_10 = local_14;
      ScalePointBySize((int)param_1,(int *)DAT_100b3940,&local_2c);
      local_c = param_1[3] - param_1[1];
      local_8 = param_1[4] - param_1[2];
      local_18 = FUN_1005aae4(param_3);
      for (; (pbVar5 = local_10, local_10 <= local_24 && (local_28 < local_8));
          local_28 = local_28 + local_18) {
        local_34 = local_2c;
        for (; (local_10 <= local_24 && (*local_10 != 10)); local_10 = local_10 + 1) {
          iVar2 = FUN_1005aaf7(param_3,(int)(char)*local_10);
          local_34 = local_34 + iVar2;
          if (local_c < local_34) break;
        }
        pbVar7 = local_10;
        local_10 = pbVar7;
        if (local_10 <= local_24) {
          if (*local_10 == 10) {
            *local_10 = 0;
          }
          else {
            local_1c = local_10;
            for (; ((pbVar5 <= local_10 && (*local_10 != 0x20)) && (*local_10 != 9));
                local_10 = local_10 + -1) {
            }
            if (local_10 < pbVar5) {
              *pbVar7 = 0;
              local_10 = pbVar7;
            }
            else {
              *local_10 = 0;
            }
          }
        }
        if (*pbVar5 != 0) {
          FUN_1005acaa(param_1,local_2c,local_28,param_3,pbVar5,0x100eebb0);
        }
        local_10 = local_10 + 1;
      }
      HeapFree(DAT_100adf74,1,local_14);
    }
  }
  return;
}
