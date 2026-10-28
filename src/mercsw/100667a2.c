/* SPDX-License-Identifier: MIT */
/* mercsw 100667a2 */
/* mercsw 100667a2: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined4 __cdecl FUN_1005aae4(int param_1);
undefined4 __cdecl FUN_1005aaf7(int param_1, int param_2);
uint __cdecl FUN_10056489(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __cdecl FUN_100667a2(int * param_1, char * param_2, int param_3, int param_4, int param_5, int param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint local_18;
  int local_c;
  
  local_c = 0;
  iVar2 = FUN_1005aae4(param_5);
  local_18 = 0;
  do {
    uVar4 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 <= local_18) {
      iVar3 = param_4 + -1;
      local_c = param_3 + local_c;
      iVar2 = param_4 + iVar2 + 1;
      FUN_10056489(param_1,param_3,iVar3,local_c,iVar3,0,param_6);
      FUN_10056489(param_1,param_3,iVar2,local_c,iVar2,0,param_6);
      FUN_10056489(param_1,param_3,iVar3,param_3,iVar2,0,param_6);
      FUN_10056489(param_1,local_c,iVar3,local_c,iVar2,0,param_6);
      return;
    }
    iVar3 = FUN_1005aaf7(param_5,(int)param_2[local_18]);
    local_c = local_c + iVar3;
    local_18 = local_18 + 1;
  } while( true );
}
