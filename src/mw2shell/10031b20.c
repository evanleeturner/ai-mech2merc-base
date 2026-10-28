/* SPDX-License-Identifier: MIT */
/* mw2shell 10031b20 */
/* mw2shell 10031b20: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10092000;
extern undefined DAT_100b5140[];
extern undefined4 DAT_100b51b0;
extern undefined4 DAT_100b51b4;
extern undefined4 DAT_100b51bc;
extern undefined4 DAT_100b51c0;
extern undefined4 DAT_100b51cc;
extern undefined4 DAT_100b51d0;
extern undefined4 DAT_100b51d4;
extern undefined4 DAT_100b51d8;
extern undefined4 DAT_100b51dc;
extern undefined4 DAT_100b51e0;
extern undefined4 DAT_100b51e4;
extern undefined4 DAT_100b5214;
extern undefined4 DAT_100b5218;
extern undefined4 DAT_100b521c;
extern undefined DAT_100b5220[];
extern undefined DAT_100b5284[];
extern undefined4 DAT_100b5288;
extern undefined4 DAT_100b528c;
extern undefined4 DAT_100b5294;

void __stdcall FUN_10031b20(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  DAT_100b5214 = *(undefined4 *)(DAT_10092000 + 0x7f0);
  puVar3 = (undefined4 *)(DAT_10092000 + 0x28c);
  puVar2 = (undefined4 *)(DAT_100b5220);
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined4 *)(DAT_100b5284));
  puVar3 = (undefined4 *)(DAT_100b5140);
  puVar2 = (undefined4 *)(DAT_10092000 + 0x2f0);
  do {
    uVar1 = puVar2[1];
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 2;
    puVar3[1] = uVar1;
    puVar3 = puVar3 + 2;
  } while (puVar3 < &DAT_100b51b0);
  DAT_100b51b0 = *(undefined4 *)(DAT_10092000 + 0x280);
  DAT_100b5294 = *(undefined4 *)(DAT_10092000 + 0x284);
  DAT_100b51dc = *(undefined4 *)(DAT_10092000 + 0x288);
  DAT_100b51e4 = *(undefined4 *)(DAT_10092000 + 0x234);
  DAT_100b5218 = *(undefined4 *)(DAT_10092000 + 0x238);
  DAT_100b5288 = *(undefined4 *)(DAT_10092000 + 0x23c);
  DAT_100b51d8 = *(undefined4 *)(DAT_10092000 + 0x228);
  DAT_100b51bc = *(undefined4 *)(DAT_10092000 + 0x22c);
  DAT_100b521c = *(undefined4 *)(DAT_10092000 + 0x230);
  DAT_100b528c = *(undefined4 *)(DAT_10092000 + 0x278);
  DAT_100b51d0 = *(undefined4 *)(DAT_10092000 + 0x27c);
  DAT_100b51d4 = *(undefined4 *)(DAT_10092000 + 0x20c);
  DAT_100b51b4 = *(undefined4 *)(DAT_10092000 + 0x210);
  DAT_100b51cc = *(undefined4 *)(DAT_10092000 + 0x214);
  DAT_100b51c0 = *(undefined4 *)(DAT_10092000 + 0x218);
  DAT_100b51e0 = *(undefined4 *)(DAT_10092000 + 0x21c);
  return;
}
