/* SPDX-License-Identifier: MIT */
/* mercsw 1004718e */
/* mercsw 1004718e: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 * DAT_100b0574;

undefined4 * __cdecl FUN_1004718e(byte * param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = DAT_100b0574;
  local_8 = (undefined4 *)0x0;
  do {
    if ((local_c == (undefined4 *)0x0) || (local_8 != (undefined4 *)0x0)) {
      return local_8;
    }
    if ((*(short *)(local_c + 1) == -2) || (*(short *)(local_c + 1) == -1)) {
      pbVar4 = (byte *)((int)local_c + 6);
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar4;
        bVar2 = pbVar3[2];
        bVar6 = bVar1 < bVar2;
        if (bVar1 != bVar2) {
LAB_10047219:
          iVar5 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_1004721e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar6 = bVar1 < pbVar3[3];
        if (bVar1 != pbVar3[3]) goto LAB_10047219;
        pbVar4 = pbVar4 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_1004721e:
      if (iVar5 == 0) {
        local_8 = local_c + 1;
      }
    }
    else if (*(short *)(local_c + 1) == *(short *)param_1) {
      local_8 = local_c + 1;
    }
    local_c = (undefined4 *)*local_c;
  } while( true );
}
