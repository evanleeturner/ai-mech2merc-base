/* SPDX-License-Identifier: MIT */
/* mercsw 10052143 */
/* mercsw 10052143: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 PTR_DAT_100b0a2c[];
extern undefined4 PTR_DAT_100b0a30[];

void __stdcall FUN_10052143(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int local_14;
  int local_10;
  
  local_10 = 0;
  do {
    if (0xe < local_10) {
      return;
    }
    pcVar2 = (char *)(PTR_DAT_100b0a2c[local_10 * 3]);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar4 = pcVar2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      for (local_14 = 0; local_14 < (int)(~uVar3 - 1); local_14 = local_14 + 1) {
        pcVar2[local_14] = pcVar2[local_14] ^ 10;
      }
    }
    pcVar2 = (char *)(PTR_DAT_100b0a30[local_10 * 3]);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      pcVar4 = pcVar2;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      for (local_14 = 0; local_14 < (int)(~uVar3 - 1); local_14 = local_14 + 1) {
        pcVar2[local_14] = pcVar2[local_14] ^ 10;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
