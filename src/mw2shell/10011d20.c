/* SPDX-License-Identifier: MIT */
/* mw2shell 10011d20 */
/* mw2shell 10011d20: Ghidra's C, repaired by tools/ghidra_repair.py */
extern void * DAT_1008eac4;
extern void * DAT_1008eac8;
extern void * DAT_1008eacc;
extern void * DAT_1008ead0;
extern void * DAT_1008ead4;
extern void * DAT_1008ead8;
extern undefined2 DAT_100c41e6;
extern undefined DAT_100c42a9;
undefined __thiscall FUN_1005f7d0(void * this, int param_1);

void __stdcall FUN_10011d20(void)

{
  void *this;
  
  this = DAT_1008eac4;
  if (((DAT_100c42a9 == '\x01') || (this = DAT_1008eac8, DAT_100c42a9 == '\x02')) ||
     (this = DAT_1008eacc, DAT_100c42a9 == '\x03')) {
    FUN_1005f7d0(this,1);
  }
  if (DAT_100c41e6 == 1) {
    FUN_1005f7d0(DAT_1008ead0,1);
    return;
  }
  if (DAT_100c41e6 == 2) {
    FUN_1005f7d0(DAT_1008ead4,1);
    return;
  }
  if (DAT_100c41e6 == 3) {
    FUN_1005f7d0(DAT_1008ead8,1);
    return;
  }
  return;
}
