/* SPDX-License-Identifier: MIT */
/* mercsw 100463ee */
/* mercsw 100463ee: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD DWORD_PTR;
extern undefined4 DAT_100b04b0;
DWORD __stdcall mciSendCommandA(UINT, UINT, DWORD, DWORD);

void __cdecl PlayMciDeviceFromTo(undefined4 param_1, int param_2)

{
  undefined1 local_14 [4];
  undefined4 local_10;
  int local_c;
  DWORD_PTR local_8;
  
  (void)local_10;
  (void)local_c;
  local_8 = 4;
  local_10 = param_1;
  if (param_2 != 0) {
    local_8 = 0xc;
    local_c = param_2;
  }
  mciSendCommandA(DAT_100b04b0,0x806,local_8,(DWORD_PTR)local_14);
  return;
}
