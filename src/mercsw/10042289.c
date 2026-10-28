/* SPDX-License-Identifier: MIT */
/* mercsw 10042289 */
/* mercsw 10042289: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100afaf8[];
extern undefined DAT_100afb40[];

void __cdecl FUN_10042289(int * param_1)

{
  *(undefined2 *)(param_1 + 0x71) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x1c6) = 0xffff;
  param_1[0x72] = 0;
  param_1[0x77] = 0;
  *(undefined2 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((int)param_1 + 0x1e6) = 1;
  param_1[0x78] = 0;
  *(undefined4 *)((int)param_1 + 0x1f6) = 0;
  *(undefined4 *)((int)param_1 + 0x1fa) = 0;
  if (*(char *)((int)param_1 + 0x187) < '\x01') {
    *(undefined1 *)((int)param_1 + 0x187) = 1;
  }
  if ('\x06' < *(char *)((int)param_1 + 0x187)) {
    *(undefined1 *)((int)param_1 + 0x187) = 6;
  }
  if (*(char *)((int)param_1 + 0x187) < '\x04') {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) | 1;
  }
  else {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) & 0xfffffffe;
  }
  if (*(char *)((int)param_1 + 0x187) < '\x04') {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) | 2;
  }
  else {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) & 0xfffffffd;
  }
  if (*(char *)((int)param_1 + 0x187) < '\x03') {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) | 4;
  }
  else {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) & 0xfffffffb;
  }
  if ((*param_1 == 1) && (*(char *)((int)param_1 + 0x187) < '\x06')) {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) | 8;
  }
  else {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) & 0xfffffff7;
  }
  if (*(char *)((int)param_1 + 0x187) < '\x05') {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) | 0x10;
  }
  else {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) & 0xffffffef;
  }
  if ((*param_1 == 1) && (*(char *)((int)param_1 + 0x187) < '\x02')) {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) | 0x20;
  }
  else {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) & 0xffffffdf;
  }
  if (*(char *)((int)param_1 + 0x187) < '\x06') {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) | 0x40;
  }
  else {
    *(uint *)((int)param_1 + 0x1f2) = *(uint *)((int)param_1 + 0x1f2) & 0xffffffbf;
  }
  if ((*param_1 == 1) && ((*(uint *)((int)param_1 + 0x1f2) >> 3 & 1) == 0)) {
    *(undefined4 *)(param_1[8] + 0x414) = 0;
  }
  if ((*(int *)((int)param_1 + 0x202) == 0) &&
     (*(undefined **)((int)param_1 + 0x202) = DAT_100afaf8 + *param_1 * 8,
     *(int *)(param_1[8] + 0x418) == 1)) {
    *(undefined **)((int)param_1 + 0x202) = DAT_100afb40;
  }
  if (*(int *)((int)param_1 + 0x1fe) == 0) {
    *(undefined4 *)((int)param_1 + 0x1fe) = 15000;
  }
  return;
}
