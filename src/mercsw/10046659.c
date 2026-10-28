/* SPDX-License-Identifier: MIT */
/* mercsw 10046659 */
/* mercsw 10046659: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD DWORD_PTR;
typedef DWORD MCIERROR;
extern undefined4 DAT_100b04b0;
DWORD __stdcall mciSendCommandA(UINT, UINT, DWORD, DWORD);
undefined __stdcall FUN_1004652f(void);

void __stdcall FUN_10046659(void)

{
  MCIERROR MVar1;
  undefined1 local_10 [12];
  
  MVar1 = mciSendCommandA(DAT_100b04b0,0x80d,0x100,(DWORD_PTR)local_10);
  if (MVar1 != 0) {
    FUN_1004652f();
  }
  return;
}
