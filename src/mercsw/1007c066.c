/* SPDX-License-Identifier: MIT */
/* mercsw 1007c066 */
/* mercsw 1007c066: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100b38fc;
extern undefined DAT_100cf0d0[];
extern undefined DAT_100cf0d4[];
extern undefined DAT_100cf0d8[];
extern undefined DAT_100cf0dc[];
extern undefined DAT_100cf0e0[];
undefined __cdecl FUN_1001ca37(int param_1, undefined2 param_2);
undefined __cdecl FUN_1002fcce(int * param_1);
undefined __cdecl FUN_1007c28e(int * param_1, undefined * param_2);
int __cdecl FUN_1007be21(int * param_1, undefined4 param_2);
undefined __cdecl FUN_1002fa2b(int param_1, undefined4 param_2);
undefined __cdecl FUN_1002f90b(int param_1, undefined4 param_2);
undefined __cdecl FUN_1002f969(int param_1, undefined4 param_2);
undefined __cdecl FUN_1007bf28(int param_1);

void __cdecl FUN_1007c066(int * param_1, undefined * param_2, int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int local_14;
  
  if ((param_1 != (int *)0x0) && (param_1[0x1b] != 0)) {
    bVar2 = false;
    if ((((byte)*(undefined2 *)(param_1[0x1b] + 2) & 0xf0) == 0x70) ||
       ((param_3 != 0 && (*(short *)(param_1[0x1b] + 0x16) == 0)))) {
      FUN_1001ca37(param_1[0x1b],0x50);
      bVar2 = true;
    }
    for (local_14 = 0; (local_14 < 0x80 && (*(int *)(DAT_100cf0d0 + local_14 * 0x14) != 0));
        local_14 = local_14 + 1) {
    }
    if ((local_14 == 0x80) || (bVar2)) {
      FUN_1002fcce(param_1);
      FUN_1007c28e(param_1,param_2);
    }
    else {
      iVar1 = local_14 * 0x14;
      iVar3 = FUN_1007be21(param_1,2);
      if (iVar3 < 0) {
        FUN_1007c28e(param_1,param_2);
      }
      else {
        *(undefined4 *)(DAT_100cf0d0 + iVar1) = 1;
        *(int **)(DAT_100cf0d4 + iVar1) = param_1;
        *(undefined **)(DAT_100cf0e0 + iVar1) = param_2;
        *(undefined4 *)(DAT_100cf0d8 + iVar1) = DAT_100b38fc;
        *(undefined4 *)(DAT_100cf0dc + iVar1) = 0x100000;
        FUN_1002fa2b((int)param_1,0x300);
        FUN_1002f90b((int)param_1,0x50);
        FUN_1002f969((int)param_1,local_14);
        FUN_1007bf28(iVar3);
      }
    }
  }
  return;
}
