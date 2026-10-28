/* SPDX-License-Identifier: MIT */
/* mercsw 10055c40 */
/* mercsw 10055c40: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a4104;
extern undefined4 DAT_100aafa4;
extern undefined4 DAT_100adcd0;
extern undefined4 DAT_100b09f8;
undefined4 __stdcall FUN_10002415(void);

uint __cdecl FUN_10055c40(undefined4 param_1)

{
  uint local_8;
  
  switch(param_1) {
  case 0x2a:
    local_8 = DAT_100adcd0;
    break;
  default:
    local_8 = 0;
    break;
  case 0x53:
    local_8 = DAT_100a4104;
    break;
  case 0x57:
    local_8 = DAT_100b09f8;
    break;
  case 0xbf:
    local_8 = FUN_10002415();
    break;
  case 0xc0:
    local_8 = (uint)(DAT_100aafa4 == 1);
  }
  return local_8;
}
