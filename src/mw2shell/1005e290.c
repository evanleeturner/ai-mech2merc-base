/* SPDX-License-Identifier: MIT */
/* mw2shell 1005e290 */
/* mw2shell 1005e290: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10095b00;
extern undefined4 DAT_100a50f0;
extern undefined4 DAT_100a62f4;
extern undefined4 DAT_100c6064;
extern undefined DAT_100c6068;
extern undefined4 * DAT_100c61b4;
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);

void __cdecl FUN_1005e290(int param_1, char * param_2, char * param_3, char * param_4, int param_5, char * param_6, int param_7, undefined2 param_8, undefined2 param_9, undefined2 param_10, int param_11, undefined2 param_12, undefined2 param_13)

{
  char *_Dest;
  undefined4 *puVar1;
  bool bVar2;
  
  puVar1 = DAT_100c61b4;
  bVar2 = DAT_100c6064 == 0;
  if (bVar2) {
    DAT_100c6064 = 1;
  }
  DAT_100a62f4 = (uint)bVar2;
  _Dest = (char *)(DAT_100c61b4 + 9);
  *(undefined2 *)((int)DAT_100c61b4 + 10) = 0xffff;
  _strncpy(_Dest,param_4,8);
  *(undefined2 *)(puVar1 + 2) = 0xfffe;
  if (param_5 == 0) {
    *(undefined2 *)(puVar1 + 2) = 0xffff;
  }
  _strncpy((char *)((int)puVar1 + 0x2d),param_6,8);
  *(undefined1 *)(puVar1 + 3) = DAT_100c6068;
  if ((param_1 == 0) && (DAT_100a62f4 == 0)) {
    *(undefined1 *)((int)puVar1 + 0xd) = 0;
  }
  else {
    *(undefined1 *)((int)puVar1 + 0xd) = 1;
  }
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  if (param_1 == 0) {
    *(undefined1 *)((int)puVar1 + 0xe) = 2;
  }
  *(undefined2 *)(puVar1 + 8) = 6;
  if ((param_7 < 1) || (5 < param_7)) {
    param_7 = 5;
  }
  *(short *)(puVar1 + 4) = (short)param_7;
  *(undefined2 *)((int)puVar1 + 0x12) = param_8;
  *(undefined2 *)(puVar1 + 5) = param_9;
  *(undefined2 *)((int)puVar1 + 0x16) = param_10;
  if ((param_11 < 1) || (5 < param_11)) {
    param_11 = 5;
  }
  *(short *)(puVar1 + 6) = (short)param_11;
  *(undefined2 *)((int)puVar1 + 0x1a) = param_12;
  *(undefined2 *)(puVar1 + 7) = param_13;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0;
  _strncpy((char *)((int)puVar1 + 0x36),param_2,0x15);
  _strncpy((char *)(puVar1 + 0x13),param_3,0x15);
  *(undefined2 *)((int)puVar1 + 0x22) = 0x1000;
  *puVar1 = DAT_10095b00;
  puVar1[1] = 100;
  if (DAT_100a50f0 < 0x65) {
    DAT_100a50f0 = 100;
  }
  DAT_100c61b4 = (undefined4 *)((int)DAT_100c61b4 + puVar1[1]);
  return;
}
