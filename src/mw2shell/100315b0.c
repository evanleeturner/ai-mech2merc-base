/* SPDX-License-Identifier: MIT */
/* mw2shell 100315b0 */
extern int __cdecl FUN_1000d230(int param_1);
extern int __cdecl FUN_1000d260(int param_1, int param_2);
extern int __cdecl FUN_10031890(int param_1);
extern void __cdecl FUN_10031a00(int param_1, int param_2);
extern void __cdecl FUN_10031910(int param_1);
extern void __cdecl FUN_1000a8c0(int param_1);
extern void __cdecl FUN_1000aa80(int param_1);
extern void __cdecl FUN_1000a890(int param_1);
extern void *__cdecl HeapAlloc(int param_1, unsigned int param_2, unsigned int param_3);
extern void __cdecl FUN_10050390(int *param_1);
extern void __cdecl FUN_1000c770(int *param_1, int param_2);
extern void __cdecl AppendToCollection(int param_1, int *param_2);
extern void __cdecl FUN_100318e0(int param_1);
extern void __cdecl FUN_100503d0(int *param_1);
extern void __cdecl FUN_10031980(int param_1);
extern void __cdecl FUN_10031950(int param_1);
extern void __cdecl FUN_100319b0(int param_1);
extern void __cdecl FUN_10050400(int *param_1);

extern int DAT_10082be8;
extern int DAT_10092000;
extern int DAT_10098224;
extern int DAT_10092010;
extern int DAT_100a67b8;
extern int DAT_10082bf0;
extern int DAT_10082c38;
extern int DAT_10082c2c;

void __cdecl FUN_100315b0(int param_1)
{
  int cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  if (0 < param_1) {
    cVar1 = FUN_1000d230(param_1);
    iVar2 = FUN_1000d260(cVar1, param_1);
    if (cVar1 == 2) {
      if (*(int *)(&DAT_10082be8 + iVar2 * 0xc) == 9000) {
        FUN_10031a00(DAT_10092000, 9000);
        return;
      }
      if (*(int *)(&DAT_10082be8 + iVar2 * 0xc) == 0x251c) {
        FUN_10031a00(DAT_10092000, 0x251c);
        return;
      }
    }
    iVar2 = FUN_10031890(param_1);
    if ((-1 < param_1) && (iVar2 != 0)) {
      cVar1 = FUN_1000d230(param_1);
      iVar2 = cVar1;
      iVar3 = FUN_1000d260(iVar2, param_1);
      if (iVar2 == 0) {
        FUN_10031910(param_1);
        FUN_1000a8c0(DAT_10092000);
        FUN_1000aa80(DAT_10092000);
        FUN_1000a890(DAT_10092000);
        piVar4 = HeapAlloc(DAT_10098224, 1, 0x1a);
        *piVar4 = iVar3;
        *(char *)(piVar4 + 2) = 0;
        *(int *)((int)piVar4 + 10) = 0xffffffff;
        *(int *)((int)piVar4 + 0xe) = 0xffffffff;
        *(int *)((int)piVar4 + 0x12) = 100;
        FUN_10050390(piVar4);
        FUN_1000c770(piVar4, 0);
        AppendToCollection(DAT_10092010, piVar4);
        return;
      }
      if (iVar2 == 1) {
        FUN_100318e0(param_1);
        FUN_1000a8c0(DAT_10092000);
        FUN_1000aa80(DAT_10092000);
        FUN_1000a890(DAT_10092000);
        piVar4 = HeapAlloc(DAT_10098224, 1, 0x1a);
        *piVar4 = iVar3;
        *(char *)(piVar4 + 2) = 1;
        *(int *)((int)piVar4 + 0xe) = 1;
        *(int *)((int)piVar4 + 0x12) = 0xffffffff;
        *(int *)((int)piVar4 + 0x16) = 100;
        FUN_100503d0(piVar4);
        AppendToCollection(DAT_100a67b8, piVar4);
        AppendToCollection(DAT_10092010, piVar4);
        return;
      }
      if (iVar2 != 2) {
        return;
      }
      iVar2 = *(int *)(&DAT_10082be8 + iVar3 * 0xc);
      piVar4 = HeapAlloc(DAT_10098224, 1, 0x16);
      if (iVar2 < 0x1f41) {
        if (iVar2 == 8000) {
          iVar2 = *(int *)(DAT_10092000 + 0x228);
          *piVar4 = 1;
          if (iVar2 != 0) {
            *piVar4 = 2;
          }
          piVar4[1] = *(int *)(&DAT_10082bf0 + *piVar4 * 0xc);
          FUN_10031980(DAT_10092000);
        }
        else {
          if (iVar2 != 7000) {
            return;
          }
          *piVar4 = 10;
        }
      }
      else if (iVar2 == 0x2134) {
        *piVar4 = 6;
        piVar4[1] = DAT_10082c38;
        FUN_10031950(DAT_10092000);
      }
      else {
        if (iVar2 != 0x254e) {
          return;
        }
        *piVar4 = 5;
        piVar4[1] = DAT_10082c2c;
        FUN_100319b0(DAT_10092000);
      }
      *(char *)(piVar4 + 2) = 2;
      piVar4[1] = 0;
      *(int *)((int)piVar4 + 10) = 0xffffffff;
      *(int *)((int)piVar4 + 0xe) = 0xffffffff;
      *(int *)((int)piVar4 + 0x12) = 0xffffffff;
      FUN_1000c770(piVar4, 0);
      FUN_10050400(piVar4);
      AppendToCollection(DAT_10092010, piVar4);
    }
  }
  return;
}
