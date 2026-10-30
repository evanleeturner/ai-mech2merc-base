/* SPDX-License-Identifier: MIT */
/* mercsw 10030619 */
extern int DAT_100ada5c;
extern int DAT_100ada58;
extern int DAT_100ada64;
extern int DAT_100ada60;
extern int DAT_100ada54;
extern int DAT_100ada50;
extern int DAT_100ada4c;
extern unsigned char DAT_10168800[];
extern unsigned char DAT_10168900[];
extern unsigned char DAT_10169600[];

/* Calling conventions and exact signatures of the callees are not in the evidence.
   __cdecl is assumed here; verify against the callees' stack cleanup. */
extern unsigned short *__cdecl FUN_1001c5d1(int param_1, int param_2, int param_3, int *param_4);
extern void __cdecl FUN_1001c72d(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
extern unsigned short *__cdecl FUN_1001c7df(int param_1, unsigned int param_2, int param_3);
extern void __cdecl FUN_1001c85e(int param_1, int param_2, int param_3);
extern int *__cdecl FUN_1002f010(int param_1, int param_2);
extern void __cdecl FUN_1002f272(int param_1, unsigned short *param_2);
extern void __cdecl FUN_1001d5e1(int param_1, int *param_2);
extern void __cdecl FUN_1001ca37(int param_1, int param_2);
extern void __cdecl FUN_1001cc6a(int param_1);
extern void __cdecl FUN_1002f37a(int param_1, int param_2, int param_3, int param_4);
extern void __cdecl FUN_1002fb55(int *param_1);
extern void __cdecl FUN_1003da99(unsigned short *param_1);
extern void __cdecl FUN_1002f727(int param_1);
extern void __cdecl FUN_1002f7f7(int param_1);

void __stdcall FUN_10030619(void)
{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned short *puVar3;
  int *piVar4;
  unsigned int local_18;
  int local_c;
  int local_8;

  local_8 = 0;
  DAT_100ada5c = 0;
  DAT_100ada58 = 0;
  DAT_100ada64 = 0;
  DAT_100ada60 = 0;
  DAT_100ada54 = 0;
  uVar1 = 0;
  while ((uVar1 < 0x40) && (local_8 == 0)) {
    puVar2 = FUN_1001c5d1(4, 1, 0x10, &local_c);
    if (puVar2 == (unsigned short *)0) {
      local_8 = 1;
    }
    else {
      DAT_100ada50 = (int)((unsigned int)DAT_100ada50 + 1u);
      FUN_1001c72d((int)puVar2, -1000, 0, 1000, 0, 0);
      FUN_1001c72d((int)puVar2, -1000, 0, -1000, 0, 0);
      FUN_1001c72d((int)puVar2, 1000, 0, -1000, 0, 0);
      FUN_1001c72d((int)puVar2, 1000, 0, 1000, 0, 0);
      puVar3 = FUN_1001c7df((int)puVar2, (unsigned int)uVar1 | 0x9000u, local_c);
      FUN_1001c85e((int)puVar2, (int)puVar3, 0);
      FUN_1001c85e((int)puVar2, (int)puVar3, 1);
      FUN_1001c85e((int)puVar2, (int)puVar3, 2);
      FUN_1001c85e((int)puVar2, (int)puVar3, 3);
      piVar4 = FUN_1002f010(0, 0xc);
      FUN_1002f272((int)piVar4, puVar2);
      FUN_1001d5e1((int)puVar2, piVar4);
      FUN_1001ca37((int)puVar2, 0);
      FUN_1001cc6a((int)puVar2);
      FUN_1002f37a((int)piVar4, 0, 0, 0);
      FUN_1002fb55(piVar4);
      FUN_1003da99(puVar2);
      FUN_1002f727((int)piVar4);
      FUN_1002f7f7((int)piVar4);
      *(unsigned int *)(DAT_10168800 + (unsigned int)uVar1 * 4u) = (unsigned int)uVar1;
      *(unsigned int *)(DAT_10168900 + (unsigned int)uVar1 * 0x34u) = (unsigned int)uVar1;
      *(int **)(DAT_10168900 + 0x30 + (unsigned int)uVar1 * 0x34u) = piVar4;
      *(unsigned int *)(DAT_10168900 + 0xc + (unsigned int)uVar1 * 0x34u) = 0;
      *(unsigned int *)(DAT_10168900 + 0x10 + (unsigned int)uVar1 * 0x34u) = 0;
      *(unsigned int *)(DAT_10168900 + 0x8 + (unsigned int)uVar1 * 0x34u) = 0;
      *(unsigned int *)(DAT_10168900 + 0x4 + (unsigned int)uVar1 * 0x34u) = 0;
    }
    uVar1 = (unsigned short)(uVar1 + 1);
  }
  DAT_100ada4c = (int)((unsigned int)DAT_100ada50 - 1u);
  for (uVar1 = 0; uVar1 < 0x10; uVar1 = (unsigned short)(uVar1 + 1)) {
    local_18 = 0;
    while (local_18 < 0x100) {
      if ((local_18 < 0x30) || (uVar1 == 0)) {
        DAT_10169600[(unsigned int)uVar1 * 0x100u + local_18] = (unsigned char)local_18;
      }
      else if ((local_18 & 0xf) + (unsigned int)uVar1 < 0x10) {
        DAT_10169600[(unsigned int)uVar1 * 0x100u + local_18] =
            (unsigned char)((unsigned char)local_18 + (unsigned char)uVar1);
      }
      else {
        DAT_10169600[(unsigned int)uVar1 * 0x100u + local_18] = (unsigned char)((unsigned char)local_18 | 0xf);
      }
      local_18 = (unsigned int)(unsigned short)((short)local_18 + 1);
    }
  }
  return;
}
