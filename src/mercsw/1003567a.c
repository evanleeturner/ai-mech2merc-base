/* SPDX-License-Identifier: MIT */
/* mercsw 1003567a */
/* mercsw 1003567a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101150f8;
extern undefined4 DAT_10115100[];
extern undefined4 DAT_1011515c;
extern undefined4 DAT_10115160;
extern undefined DAT_10115168;
extern undefined4 DAT_10160eb4;
extern undefined4 DAT_10160eb8;
extern undefined4 DAT_10160ec0;
extern undefined4 DAT_10160ec4;
extern undefined4 DAT_10160ed0;
extern undefined4 DAT_10160edc;
extern undefined4 DAT_10160ee0;
extern undefined4 DAT_10160ee8;
extern undefined4 DAT_10168398;
int __cdecl FUN_100359c0(uint param_1, int param_2, byte param_3, int param_4);

uint * __cdecl FUN_1003567a(uint * param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_c;
  
  local_c = 0;
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    uVar4 = param_1[1];
    uVar1 = FUN_100359c0(*param_1,DAT_10168398,(byte)DAT_10160eb4,DAT_10160ec4);
    iVar3 = DAT_10160ed0 - DAT_10160ee0;
    iVar2 = FUN_100359c0(uVar4,DAT_10168398,(byte)DAT_10160eb8,DAT_10160ee8);
    uVar4 = iVar3 - iVar2;
    local_c = (int)(uVar1 - DAT_10160ec0) < 0;
    if (0 < (int)(uVar1 - DAT_10160edc)) {
      local_c = local_c | 2;
    }
    if ((int)(uVar4 - DAT_10160ee0) < 0) {
      local_c = local_c | 4;
    }
    if (0 < (int)(uVar4 - DAT_10160ed0)) {
      local_c = local_c | 8;
    }
    param_1[3] = uVar1;
    param_1[4] = uVar4;
    *(byte *)(param_1 + 7) = local_c;
    *(undefined1 *)((int)param_1 + 0x1d) = 1;
  }
  DAT_101150f8 = DAT_101150f8 | local_c;
  DAT_10115168 = DAT_10115168 & local_c;
  if (DAT_10115160 < 0x14) {
    DAT_10115100[DAT_10115160] = (undefined4)(param_1);
    DAT_10115160 = DAT_10115160 + 1;
  }
  else {
    DAT_1011515c = 0;
  }
  return param_1;
}
