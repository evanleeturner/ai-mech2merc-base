/* SPDX-License-Identifier: MIT */
/* mercsw 1000dec3 */
/* mercsw 1000dec3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100a758c;
extern HANDLE DAT_100adf74;
extern undefined DAT_101f5490[];
extern undefined4 DAT_101f5514;
extern undefined DAT_101f5520[];
extern undefined DAT_101f5524[];
extern undefined DAT_101f5528[];
extern undefined DAT_101f552c[];
extern undefined DAT_101f5530[];
extern undefined DAT_101f5534[];
extern undefined4 PTR_DAT_100af0d0;
extern char * PTR_DAT_100af13c;
extern char s_unitbox_100a75e8[];
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
ushort * __cdecl FUN_1007bbed(short * param_1, int * param_2, char * param_3, uint param_4, uint * param_5, int * param_6);
undefined __cdecl FUN_10068d4e(int param_1, int param_2, int param_3);
undefined __cdecl FUN_10068db6(undefined4 param_1);
ushort * __cdecl FUN_10068dc9(int param_1, int * param_2, int param_3, int param_4);
undefined __cdecl FUN_100141c0(ushort * param_1, int param_2);
undefined __cdecl FUN_10089cc9(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
undefined __cdecl FUN_100895ca(int * param_1, int * param_2, undefined4 * param_3);
undefined __cdecl FUN_1001b7cd(ushort * param_1, int * param_2);
undefined __cdecl FUN_1003da99(ushort * param_1);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined __cdecl FUN_1001d671(undefined * param_1);

undefined4 __stdcall FUN_1000dec3(void)

{
  int iVar1;
  ushort *lpMem;
  ushort *puVar2;
  uint uVar3;
  int local_78 [12];
  short local_48;
  char acStack_46 [14];
  int local_38;
  int *local_34;
  ushort *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  short *local_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_101f5514 == 0) {
    DAT_101f5514 = 1;
    local_10 = &local_48;
    local_48 = -1;
    _strncpy(acStack_46,s_unitbox_100a75e8,0xc);
    *(undefined1 *)(local_10 + 7) = 0;
    lpMem = FUN_1007bbed(local_10,(int *)PTR_DAT_100af0d0,PTR_DAT_100af13c,2,&local_c,(int *)0x0);
    if (lpMem != (ushort *)0x0) {
      for (local_38 = 0; local_38 < DAT_100a758c; local_38 = local_38 + 1) {
        iVar1 = local_38 * 0x7c;
        local_34 = (int *)(DAT_101f5520 + iVar1);
        if (*local_34 != *(int *)(DAT_101f552c + iVar1)) {
          uVar3 = ((int)((unsigned int)(*(int *)(DAT_101f552c + iVar1)) - (unsigned int)(*local_34))) >> 0x1f;
          local_1c = (*(int *)(DAT_101f552c + iVar1) - *local_34 ^ uVar3) - uVar3;
          uVar3 = ((int)((unsigned int)(*(int *)(DAT_101f5530 + iVar1)) - (unsigned int)(*(int *)(DAT_101f5524 + iVar1)))) >> 0x1f;
          local_18 = (*(int *)(DAT_101f5530 + iVar1) - *(int *)(DAT_101f5524 + iVar1) ^ uVar3) -
                     uVar3;
          uVar3 = ((int)((unsigned int)(*(int *)(DAT_101f5534 + iVar1)) - (unsigned int)(*(int *)(DAT_101f5528 + iVar1)))) >> 0x1f;
          local_14 = (*(int *)(DAT_101f5534 + iVar1) - *(int *)(DAT_101f5528 + iVar1) ^ uVar3) -
                     uVar3;
          local_28 = (local_1c + 9) / 10;
          local_24 = (local_18 + 9) / 10;
          local_20 = (local_14 + 9) / 10;
          FUN_10068d4e(local_28,local_24,local_20);
          FUN_10068db6(0);
          local_2c = 0;
          puVar2 = FUN_10068dc9((int)lpMem,&local_2c,local_c,0);
          *(ushort **)(DAT_101f5490 + local_38 * 4) = puVar2;
          local_30 = *(ushort **)(DAT_101f5490 + local_38 * 4);
          if (local_30 != (ushort *)0x0) {
            local_8 = 1;
            FUN_100141c0(local_30,4);
            FUN_10089cc9(local_78,0,0,0,local_34[6],local_34[7],local_34[8]);
            FUN_100895ca(local_34 + 0x12,local_78,(undefined4 *)(local_78));
            FUN_1001b7cd(local_30,local_78);
            FUN_1003da99(local_30);
          }
        }
      }
      if (*local_10 == -1) {
        HeapFree(DAT_100adf74,1,lpMem);
      }
      else {
        FUN_1008664f((int)*local_10,(int *)PTR_DAT_100af0d0);
      }
    }
  }
  else {
    DAT_101f5514 = 0;
    local_8 = 1;
    for (local_38 = 0; local_38 < DAT_100a758c; local_38 = local_38 + 1) {
      if (*(int *)(DAT_101f5490 + local_38 * 4) != 0) {
        FUN_1001d671(*(undefined **)(DAT_101f5490 + local_38 * 4));
        *(undefined4 *)(DAT_101f5490 + local_38 * 4) = 0;
      }
    }
  }
  return local_8;
}
