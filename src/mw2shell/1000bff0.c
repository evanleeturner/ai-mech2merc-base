/* SPDX-License-Identifier: MIT */
/* mw2shell 1000bff0 */
/* mw2shell 1000bff0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1000a790(int param_1);
undefined __cdecl FUN_1000a800(int param_1);
undefined __cdecl FUN_1000a8c0(int param_1);
undefined __cdecl FUN_1000aa80(int param_1);
undefined __cdecl FUN_1000a890(int param_1);

void __cdecl FUN_1000bff0(int param_1, int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x28c);
    iVar2 = 0x19;
    puVar4 = (undefined4 *)(param_1 + 0x28c);
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = (undefined4 *)(param_2 + 0x2f0);
    puVar4 = (undefined4 *)(param_1 + 0x2f0);
    iVar2 = 0xe;
    do {
      uVar1 = puVar3[1];
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar4[1] = uVar1;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = (undefined4 *)(param_1 + 0x368);
    puVar4 = (undefined4 *)(param_2 + 0x368);
    iVar2 = 8;
    do {
      iVar5 = 0xc;
      do {
        uVar1 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 8;
    puVar3 = (undefined4 *)(param_2 + 0x760);
    puVar4 = (undefined4 *)(param_1 + 0x760);
    do {
      *puVar4 = *puVar3;
      iVar2 = iVar2 + -1;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(puVar3 + 4);
      puVar3 = (undefined4 *)((int)puVar3 + 0x12);
      puVar4 = (undefined4 *)((int)puVar4 + 0x12);
    } while (iVar2 != 0);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x224);
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x228);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x22c);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x238);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x23c);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_2 + 0x244);
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_2 + 0x240);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
    *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
    *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_2 + 0x274);
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
    *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(param_2 + 0x27c);
    FUN_1000a790(param_1);
    FUN_1000a800(param_1);
    FUN_1000a8c0(param_1);
    FUN_1000aa80(param_1);
    FUN_1000a890(param_1);
  }
  return;
}
