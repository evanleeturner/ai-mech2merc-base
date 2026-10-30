/* SPDX-License-Identifier: MIT */
/* mw2shell 1000c990 */
/* mw2shell 1000c990: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined LAB_1000bde0[];
extern int * DAT_100a67b4;
extern int * DAT_100a67bc;
extern int * DAT_100a67c0;
extern int * DAT_100a67c4;
extern int * DAT_100a67c8;
extern int * DAT_100a67cc;
extern int * DAT_100a67d4;
extern int * DAT_100a67d8;
extern int * DAT_100a67dc;
extern int * DAT_100a67e0;
undefined __cdecl FUN_100180f0(int * param_1, char param_2);
undefined4 __cdecl FUN_10017c90(undefined4 * param_1, int param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5);
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __cdecl FUN_1000c770(int * param_1, int param_2);

void __stdcall ResetListsAndProcessEntries_Likely(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  FUN_100180f0(DAT_100a67bc,'\x01');
  FUN_10017c90((undefined4 *)(&DAT_100a67bc),10,0,1,(undefined4)(LAB_1000bde0));
  FUN_100180f0(DAT_100a67c0,'\x01');
  FUN_10017c90((undefined4 *)(&DAT_100a67c0),10,0,1,(undefined4)(LAB_1000bde0));
  FUN_100180f0(DAT_100a67c4,'\x01');
  FUN_10017c90((undefined4 *)(&DAT_100a67c4),10,0,1,(undefined4)(LAB_1000bde0));
  FUN_100180f0(DAT_100a67c8,'\x01');
  FUN_10017c90((undefined4 *)(&DAT_100a67c8),10,0,1,(undefined4)(LAB_1000bde0));
  FUN_100180f0(DAT_100a67d4,'\x01');
  FUN_10017c90((undefined4 *)(&DAT_100a67d4),10,0,1,(undefined4)(LAB_1000bde0));
  FUN_100180f0(DAT_100a67d8,'\x01');
  FUN_10017c90((undefined4 *)(&DAT_100a67d8),10,0,1,(undefined4)(LAB_1000bde0));
  FUN_100180f0(DAT_100a67dc,'\x01');
  FUN_10017c90((undefined4 *)(&DAT_100a67dc),10,0,1,(undefined4)(LAB_1000bde0));
  FUN_100180f0(DAT_100a67e0,'\x01');
  FUN_10017c90((undefined4 *)(&DAT_100a67e0),10,0,1,(undefined4)(LAB_1000bde0));
  iVar3 = 0;
  if (0 < DAT_100a67b4[1]) {
    do {
      iVar2 = iVar3 + 1;
      piVar1 = (int *)FUN_10018060((int)DAT_100a67b4,iVar3);
      FUN_1000c770(piVar1,0);
      iVar3 = iVar2;
    } while (iVar2 < DAT_100a67b4[1]);
  }
  FUN_100180f0(DAT_100a67b4,'\0');
  if (DAT_100a67cc != (int *)0x0) {
    iVar3 = 0;
    if (0 < DAT_100a67cc[1]) {
      do {
        iVar2 = iVar3 + 1;
        piVar1 = (int *)FUN_10018060((int)DAT_100a67cc,iVar3);
        FUN_1000c770(piVar1,1);
        iVar3 = iVar2;
      } while (iVar2 < DAT_100a67cc[1]);
    }
    FUN_100180f0(DAT_100a67cc,'\0');
  }
  return;
}
