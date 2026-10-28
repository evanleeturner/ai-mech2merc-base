/* SPDX-License-Identifier: MIT */
/* mercsw 10023b76 */
/* mercsw 10023b76: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab374;
extern undefined4 DAT_100ab378;
extern undefined4 DAT_100ab37c;
extern undefined4 DAT_100ab380;
extern undefined DAT_1016aca0;
extern undefined DAT_1016aca1;
extern undefined DAT_1016aca2[];
extern undefined DAT_1016aca3[];
extern undefined4 DAT_1016acb4;
extern undefined DAT_1016acb8[];
extern undefined DAT_1016bc60[];
extern undefined DAT_1016cc60[];
extern undefined DAT_1016cc64[];
extern undefined DAT_1016cc68[];
extern undefined DAT_1016cc6c[];
extern undefined DAT_1016cc72[];
extern undefined DAT_1016cc76[];
extern undefined DAT_1016cc7a[];
extern undefined DAT_1016cc7e[];
extern undefined DAT_1016ce32[];
extern undefined DAT_1016ce36[];
extern undefined DAT_1016ce3a[];
extern undefined DAT_1016ce56[];
ushort * __cdecl FUN_1001c5d1(int param_1, int param_2, int param_3, undefined4 * param_4);
undefined __cdecl FUN_1001c72d(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6);
undefined2 * __cdecl FUN_1001c7df(int param_1, undefined2 param_2, int param_3);
undefined __cdecl FUN_1001c85e(int param_1, int param_2, undefined1 param_3);
int * __cdecl FUN_1002f010(int param_1, byte param_2);
undefined __cdecl FUN_1002f272(int param_1, undefined4 param_2);
undefined __cdecl FUN_1001d5e1(int param_1, undefined4 param_2);
undefined __cdecl FUN_1001ca37(int param_1, undefined2 param_2);
undefined __cdecl FUN_1001cc6a(int param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002fb55(int * param_1);
undefined __cdecl FUN_1003da99(ushort * param_1);
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_1002f7f7(int param_1);

void __stdcall FUN_10023b76(void)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  int local_c;
  int local_8;
  
  local_8 = 0;
  DAT_100ab380 = 0;
  DAT_100ab37c = 0;
  DAT_100ab378 = 0;
  uVar1 = 0;
  while ((uVar1 < 1000 && (local_8 == 0))) {
    puVar4 = FUN_1001c5d1(3,1,0xc,(undefined4 *)(&local_c));
    if (puVar4 == (ushort *)0x0) {
      local_8 = 1;
    }
    else {
      DAT_100ab374 = DAT_100ab374 + 1;
      FUN_1001c72d((int)puVar4,0,0,0,0,0);
      FUN_1001c72d((int)puVar4,0,100,0,100,0);
      FUN_1001c72d((int)puVar4,100,0,0,0,100);
      puVar5 = FUN_1001c7df((int)puVar4,uVar1 | 0x8000,local_c);
      FUN_1001c85e((int)puVar4,(int)puVar5,0);
      FUN_1001c85e((int)puVar4,(int)puVar5,1);
      FUN_1001c85e((int)puVar4,(int)puVar5,2);
      piVar6 = FUN_1002f010(0,0xc);
      FUN_1002f272((int)piVar6,(undefined4)(puVar4));
      FUN_1001d5e1((int)puVar4,(undefined4)(piVar6));
      FUN_1001ca37((int)puVar4,0x60);
      FUN_1001cc6a((int)puVar4);
      FUN_1002f37a((int)piVar6,0,0,0);
      FUN_1002fb55(piVar6);
      FUN_1003da99(puVar4);
      FUN_1002f727((int)piVar6);
      FUN_1002f7f7((int)piVar6);
      *(uint *)(DAT_1016bc60 + (uint)uVar1 * 4) = (uint)uVar1;
      *(uint *)(DAT_1016cc68 + (uint)uVar1 * 0x1fa) = (uint)uVar1;
      *(undefined4 *)(DAT_1016cc6c + (uint)uVar1 * 0x1fa) = 0;
      *(int **)(DAT_1016ce32 + (uint)uVar1 * 0x1fa) = piVar6;
      *(undefined4 *)(DAT_1016ce36 + (uint)uVar1 * 0x1fa) = 0;
      *(undefined4 *)(DAT_1016ce3a + (uint)uVar1 * 0x1fa) = 0;
      *(undefined4 *)(DAT_1016cc60 + (uint)uVar1 * 0x1fa) = 0;
      *(undefined4 *)(DAT_1016cc64 + (uint)uVar1 * 0x1fa) = 0;
      *(undefined4 *)(DAT_1016ce56 + (uint)uVar1 * 0x1fa) = 0;
      for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 1) {
        *(undefined4 *)(DAT_1016cc7a + (uint)uVar1 * 0x1fa + (uint)uVar2 * 0xe) = 0;
        *(undefined4 *)(DAT_1016cc76 + (uint)uVar1 * 0x1fa + (uint)uVar2 * 0xe) =
             *(undefined4 *)(DAT_1016cc7a + (uint)uVar1 * 0x1fa + (uint)uVar2 * 0xe);
        *(undefined4 *)(DAT_1016cc72 + (uint)uVar1 * 0x1fa + (uint)uVar2 * 0xe) =
             *(undefined4 *)(DAT_1016cc76 + (uint)uVar1 * 0x1fa + (uint)uVar2 * 0xe);
        *(undefined2 *)(DAT_1016cc7e + (uint)uVar1 * 0x1fa + (uint)uVar2 * 0xe) = 0;
      }
    }
    uVar1 = uVar1 + 1;
  }
  DAT_1016acb4 = DAT_100ab374 + -1;
  DAT_1016aca0 = 0x15;
  DAT_1016aca1 = 0x15;
  for (uVar1 = 0; uVar1 < 8; uVar1 = uVar1 + 1) {
    cVar3 = (char)uVar1;
    DAT_1016aca2[(uint)uVar1 * 2] = '?' - cVar3;
    DAT_1016aca3[(uint)uVar1 * 2] = '?' - cVar3;
    DAT_1016acb8[uVar1] = -0x22 - cVar3;
  }
  return;
}
