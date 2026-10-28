/* SPDX-License-Identifier: MIT */
/* mercsw 10032095 */
/* mercsw 10032095: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
extern HANDLE DAT_100adf74;
extern undefined DAT_10168410[];
extern undefined DAT_10168450[];
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
undefined __cdecl FUN_10086951(SIZE_T param_1);
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);
undefined __cdecl FUN_100013e0(int param_1);

undefined4 __cdecl FUN_10032095(undefined4 * param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = param_1[2];
  if (*(int *)(DAT_10168410 + iVar1 * 4) != 0) {
    HeapFree(DAT_100adf74,1,*(LPVOID *)(DAT_10168410 + iVar1 * 4));
  }
  *(undefined4 *)(DAT_10168410 + iVar1 * 4) = 0;
  *(undefined4 *)(DAT_10168450 + iVar1 * 4) = 0;
  uVar2 = FUN_10086951(param_1[1]);
  *(undefined4 *)(DAT_10168410 + iVar1 * 4) = uVar2;
  if (*(int *)(DAT_10168410 + iVar1 * 4) == 0) {
    FUN_100108a0(0x40,(char *)0x0);
  }
  else {
    local_8 = 1;
    uVar4 = param_1[1];
    puVar5 = *(undefined4 **)(DAT_10168410 + iVar1 * 4);
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_1;
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    *(uint *)(DAT_10168450 + iVar1 * 4) =
         (*(int *)(*(int *)(DAT_10168410 + iVar1 * 4) + 4) - 8U) / 0x97;
    FUN_100013e0(*(int *)(DAT_10168410 + iVar1 * 4));
  }
  return local_8;
}
