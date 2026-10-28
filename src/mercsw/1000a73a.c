/* SPDX-License-Identifier: MIT */
/* mercsw 1000a73a */
/* mercsw 1000a73a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7314;
extern undefined DAT_100a7b30[];
extern undefined4 DAT_10114db0;
extern undefined4 DAT_10215658;
undefined __stdcall FUN_1000a5b7(void);
int __cdecl FUN_10051f43(int param_1);
undefined __stdcall FUN_1000898c(void);
undefined __cdecl FUN_10010683(int * param_1, int param_2, int param_3, int param_4);

void __stdcall FUN_1000a73a(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  puVar1 = *(undefined4 **)(DAT_100a7b30 + DAT_10215658 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (DAT_10215658 == 4) {
      FUN_1000a5b7();
    }
    else {
      iVar2 = *(int *)(puVar1[0x1e] + 8);
      if (iVar2 == -1) {
        FUN_1000898c();
      }
      else {
        if (*(short *)(DAT_10114db0 + 6) == 1) {
          if (DAT_100a7314 == 0) {
            local_8 = 3;
          }
          else {
            local_8 = 7;
          }
          iVar4 = FUN_10051f43(10);
          DAT_100a7314 = (uint)(iVar4 < local_8);
        }
        else if (*(short *)(DAT_10114db0 + 6) == 2) {
          DAT_100a7314 = 1;
        }
        FUN_1000898c();
        if (DAT_100a7314 != 0) {
          piVar3 = (int *)*puVar1;
          FUN_10010683(piVar3,iVar2,0,0);
          if (puVar1[0x1f] != 0) {
            ((void (*)(int *, undefined4))((*(code *)puVar1[0x1f])))(piVar3,*(undefined4 *)(puVar1[0x1d] + 0x30));
          }
        }
      }
    }
  }
  return;
}
