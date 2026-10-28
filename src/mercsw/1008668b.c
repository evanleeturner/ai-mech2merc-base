/* SPDX-License-Identifier: MIT */
/* mercsw 1008668b */
/* mercsw 1008668b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100b0a08;
extern undefined4 DAT_100ba7bc;
extern undefined4 DAT_100c9050;
extern ushort * DAT_100c9054;
extern char s_CACHE_FULL____Nothing_to_purge___100ba8c8[];
extern char s_Memory_running_low__1_____strang_100ba920[];
extern char s_Memory_running_low__2_____strang_100ba8ec[];
ushort * __cdecl FUN_1008628d(uint param_1, int * param_2);
undefined __cdecl FUN_10085fb3(int param_1);
undefined __cdecl FUN_10086336(ushort * param_1);
undefined4 __cdecl FUN_1005be24(char * param_1, int param_2, int param_3, int param_4);
int __cdecl FUN_1001e8a8(int param_1, char * param_2, ushort param_3);
LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
undefined4 __cdecl FUN_1001ec56(int param_1, char * param_2, ushort param_3, void * param_4);

ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  
  if ((int)param_2 < 0) {
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = FUN_1008628d(param_2,param_3);
    if (puVar1 == (ushort *)0x0) {
      if (999 < DAT_100c9050) {
        if (DAT_100c9054 == (ushort *)0x0) {
          if (DAT_100b0a08 == 0) {
            FUN_1005be24(s_Memory_running_low__2_____strang_100ba8ec,1,0x712,100);
          }
          else {
            FUN_1005be24(s_CACHE_FULL____Nothing_to_purge___100ba8c8,1,0x712,100);
          }
          return (ushort *)0x0;
        }
        FUN_10086336(DAT_100c9054);
      }
      uVar3 = (ushort)param_2;
      iVar2 = FUN_1001e8a8(param_1,(char *)param_3,uVar3);
      if (iVar2 < 1) {
        puVar1 = (ushort *)0x0;
      }
      else {
        while (puVar1 = HeapAlloc(DAT_100adf74,1,iVar2 + 0x14), puVar1 == (ushort *)0x0) {
          if (DAT_100c9054 == (ushort *)0x0) {
            FUN_1005be24(s_Memory_running_low__1_____strang_100ba920,1,0x712,100);
            return (ushort *)0x0;
          }
          FUN_10086336(DAT_100c9054);
        }
        iVar2 = FUN_1001ec56(param_1,(char *)param_3,uVar3,puVar1 + 10);
        if (iVar2 == -1) {
          puVar1 = (ushort *)0x0;
        }
        else {
          iVar2 = (int)((int)(char)*param_3 + (int)*(char *)((int)param_3 + 1) +
                        (int)*(char *)((int)param_3 + 2) + (int)*(char *)((int)param_3 + 3) +
                       param_2) % 0x3f1;
          *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(DAT_100ba7bc + iVar2 * 4);
          *(ushort **)(DAT_100ba7bc + iVar2 * 4) = puVar1;
          puVar1[1] = 1;
          *puVar1 = uVar3;
          *(int *)(puVar1 + 2) = *param_3;
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puVar1[9] = 0;
          DAT_100c9050 = DAT_100c9050 + 1;
          puVar1 = puVar1 + 10;
        }
      }
    }
    else {
      FUN_10085fb3((int)puVar1);
      puVar1 = puVar1 + 10;
    }
  }
  return puVar1;
}
