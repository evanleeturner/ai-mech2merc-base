/* SPDX-License-Identifier: MIT */
/* mw2shell 1000e150 */
/* mw2shell 1000e150: Ghidra's C, repaired by tools/ghidra_repair.py */
extern void * DAT_1008d150;
extern void * DAT_1008d55c;
extern undefined4 DAT_100c6060;
extern undefined4 DAT_100d1540;
int __stdcall BitBlt(void *, int, int, int, int, void *, int, int, DWORD);

int __cdecl FUN_1000e150(int param_1, int param_2, int param_3)

{
  int cx;
  
  cx = (param_3 - param_1) + 1;
  DAT_100d1540 = BitBlt(DAT_1008d150,0xa0,0x8c,cx,cx,DAT_1008d55c,param_1,param_2,0xcc0020);
  return (DAT_100c6060 == DAT_100d1540) - 1;
}
