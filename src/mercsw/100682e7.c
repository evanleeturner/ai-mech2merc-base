/* SPDX-License-Identifier: MIT */
/* mercsw 100682e7 */
/* mercsw 100682e7: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100aaf70[];
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b395c;
extern undefined4 DAT_100eeedc;
extern undefined4 DAT_100eef40[];
extern undefined4 DAT_10114ec8;
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_100689bf(int param_1);
undefined __cdecl FUN_1002ea87(int param_1);
undefined __cdecl FUN_1002ebd9(int param_1);
undefined __cdecl FUN_1002ed27(int param_1);
undefined __cdecl FUN_1002eded(int param_1);
undefined __cdecl FUN_1002e822(int param_1);
undefined __cdecl FUN_1006147f(int param_1);
undefined __cdecl FUN_10008c56(int * param_1);
undefined __cdecl FUN_10066609(int * param_1, int param_2);
undefined * __stdcall FUN_1004baf4(void);
undefined4 __stdcall FUN_1004bb42(void);
undefined4 __cdecl FUN_10058e74(int * param_1, undefined1 param_2);
undefined __cdecl FUN_10068905(undefined4 * param_1);
undefined __cdecl FUN_1006afdd(int param_1, undefined4 param_2, undefined4 * param_3, int param_4);
undefined __cdecl FUN_10068a11(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_1001a6ca(undefined4 * param_1, undefined4 * param_2);
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_10068962(undefined4 * param_1);
undefined __cdecl FUN_1001a8a3(int * param_1, int * param_2, int * param_3, int * param_4, int * param_5, int * param_6);
undefined __cdecl FUN_1006b002(int param_1, undefined4 param_2, undefined4 * param_3, int param_4, int * param_5);
undefined __cdecl FUN_10011ae1(int param_1, int * param_2);
undefined __cdecl FUN_100117f2(int param_1, undefined4 param_2, int param_3);

void __cdecl FUN_100682e7(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c [4];
  undefined4 local_6c [26];
  
  if ((*(short *)(param_1 + 4) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = DAT_10114ec8;
    if (((*(short *)(param_1 + 6) == 1) &&
        (((*(int *)(param_1 + 0x30) != 1 && (*(int *)(param_1 + 0x30) != 9)) &&
         (*(int *)(param_1 + 0x30) != 10)))) &&
       ((((*(int *)(param_1 + 0x30) != 0xc && (*(int *)(param_1 + 0x30) != 0xb)) &&
         (*(int *)(param_1 + 0x30) != 0xd)) && (*(int *)(param_1 + 0x30) != 2)))) {
      if (DAT_100b395c != 0) {
        iVar2 = FUN_10051f43(10);
        if (iVar2 < 7) {
          DAT_100b395c = 0;
        }
        FUN_100689bf(param_1);
        return;
      }
      iVar2 = FUN_10051f43(10);
      if (iVar2 < 3) {
        DAT_100b395c = 1;
      }
    }
    else if (((2 < *(short *)(param_1 + 6)) && (*(int *)(param_1 + 0x30) != 1)) &&
            ((*(int *)(param_1 + 0x30) != 9 &&
             ((((*(int *)(param_1 + 0x30) != 10 && (*(int *)(param_1 + 0x30) != 0xc)) &&
               (*(int *)(param_1 + 0x30) != 0xb)) &&
              ((*(int *)(param_1 + 0x30) != 0xd && (*(int *)(param_1 + 0x30) != 2)))))))) {
      FUN_100689bf(param_1);
      return;
    }
    piVar1 = *(int **)(DAT_100eef40[DAT_100adf38] + 0x20);
    switch(*(undefined4 *)(param_1 + 0x30)) {
    case 0:
      break;
    default:
      FUN_100117f2((int)piVar1,*(undefined4 *)(param_1 + 0xa4),*(int *)(param_1 + 0xc));
      break;
    case 2:
      FUN_10011ae1((int)piVar1,*(int **)(param_1 + 0xa4));
      break;
    case 3:
      FUN_1001a6ca((undefined4 *)PTR_DAT_100aaf68,(undefined4 *)(&local_88));
      FUN_10068905(local_6c);
      if (DAT_100eeedc == 0) {
        local_7c[0] = *(int *)(*piVar1 + 0x60) + 0xb40000;
      }
      else {
        local_7c[0] = *(int *)(*piVar1 + 0x60) + *(int *)(*piVar1 + 0x6c);
      }
      local_7c[1] = 0;
      FUN_1002f727(*(int *)(*piVar1 + 0x40));
      FUN_1006afdd(*(int *)(param_1 + 0xc),0x20000,(undefined4 *)(&local_88),0);
      FUN_1002f783(*(int *)(*piVar1 + 0x40));
      if (DAT_100eeedc == 0) {
        FUN_10068a11(param_1,6,0xd6);
      }
      else {
        FUN_10066609(*(int **)(param_1 + 0xa4),6);
      }
      puVar3 = local_6c;
      puVar4 = (undefined4 *)(DAT_100aaf70);
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      break;
    case 4:
      FUN_1001a6ca((undefined4 *)PTR_DAT_100aaf68,(undefined4 *)(&local_88));
      FUN_10068962(local_6c);
      FUN_1001a8a3(local_7c + 1,local_7c,local_7c + 2,&local_88,&local_84,&local_80);
      FUN_1002f727(*(int *)(*piVar1 + 0x40));
      FUN_1006b002(*(int *)(param_1 + 0xc),0x20000,(undefined4 *)(&local_88),0,piVar1);
      FUN_1002f783(*(int *)(*piVar1 + 0x40));
      FUN_10066609(*(int **)(param_1 + 0xa4),6);
      puVar3 = local_6c;
      puVar4 = (undefined4 *)(DAT_100aaf70);
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      break;
    case 5:
      FUN_1001a6ca((undefined4 *)PTR_DAT_100aaf68,(undefined4 *)(&local_88));
      FUN_10068905(local_6c);
      local_88 = *(int *)(*piVar1 + 0x50);
      local_84 = *(int *)(*piVar1 + 0x54);
      local_80 = *(int *)(*piVar1 + 0x58);
      local_7c[1] = 0x5a0000;
      local_7c[2] = 0;
      FUN_1002f727(*(int *)(*piVar1 + 0x40));
      FUN_1006afdd(*(int *)(param_1 + 0xc),0x20000,(undefined4 *)(&local_88),0);
      FUN_1002f783(*(int *)(*piVar1 + 0x40));
      FUN_10068a11(param_1,6,0xd3);
      puVar3 = local_6c;
      puVar4 = (undefined4 *)(DAT_100aaf70);
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      break;
    case 6:
      if (*(char *)(DAT_100adf34 + 9) != '\0') {
        FUN_10008c56(*(int **)(param_1 + 0xa4));
        FUN_10066609(*(int **)(param_1 + 0xa4),6);
      }
      break;
    case 7:
      local_90 = (undefined4 *)FUN_1004baf4();
      if (local_90 == (undefined4 *)0x0) {
        FUN_1004bb42();
        local_90 = (undefined4 *)FUN_1004baf4();
      }
      if (local_90 == (undefined4 *)0x0) {
        FUN_10058e74(*(int **)(param_1 + 0xa4),0);
      }
      else {
        FUN_10068905(local_6c);
        local_90[4] = 0;
        FUN_1006afdd(*(int *)(param_1 + 0xc),0x20000,local_90,0);
        puVar3 = local_6c;
        puVar4 = (undefined4 *)(DAT_100aaf70);
        for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      FUN_10068a11(param_1,6,0xd9);
      break;
    case 8:
      FUN_1006147f(param_1);
      break;
    case 9:
      FUN_1002e822(param_1);
      break;
    case 10:
      FUN_1002eded(param_1);
      break;
    case 0xb:
      FUN_1002ea87(param_1);
      break;
    case 0xc:
      FUN_1002ebd9(param_1);
      break;
    case 0xd:
      FUN_1002ed27(param_1);
    }
  }
  return;
}
