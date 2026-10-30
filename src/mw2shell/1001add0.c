/* SPDX-License-Identifier: MIT */
/* mw2shell 1001add0 */
/* mw2shell 1001add0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined DAT_1008f988[];
extern undefined DAT_100c41c0[];
extern undefined4 PTR_DAT_10083d8c[];
undefined __cdecl FUN_100361e0(int param_1, int param_2, int param_3, int param_4, int param_5);
uint __cdecl FUN_10035f30(int param_1, char * param_2, char * param_3, char * param_4);
undefined __cdecl FUN_1001ace0(char * param_1);
undefined __cdecl MarkTableEntryUnset_Likely(int param_1);
undefined __stdcall FUN_10036260(void);
char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count);
undefined __stdcall FUN_10036280(void);

void __stdcall FUN_1001add0(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  char local_10 [16];
  
  iVar4 = 0;
  puVar3 = DAT_1008f988;
  do {
    switch(iVar4) {
    case 0:
    case 1:
    case 2:
      FUN_100361e0(0,-1,-1,-1,-1);
      if (*(int *)(puVar3 + 0x28) < 0) {
        MarkTableEntryUnset_Likely(*(int *)(puVar3 + 0x24));
      }
      else {
        FUN_10035f30(*(int *)(puVar3 + 0x24),(char *)(PTR_DAT_10083d8c[*(int *)(puVar3 + 0x28) * 10]),
                     (char *)0x0,(char *)0x0);
        if (*(int *)(puVar3 + 0x2c) == 1) {
          FUN_1001ace0((char *)(PTR_DAT_10083d8c[*(int *)(puVar3 + 0x28) * 10]));
        }
      }
      FUN_10036260();
      break;
    case 3:
    case 4:
    case 5:
      FUN_100361e0(1,-1,-1,-1,-1);
      iVar2 = *(int *)(puVar3 + 0x28);
      if (iVar2 < 0) {
        if (iVar2 != -1) {
          _strncpy(local_10,(char *)(DAT_100c41c0 + *(int *)(puVar3 + 0x24) * 0x10),3);
          iVar2 = -1;
          local_10[3] = 0;
          pcVar5 = local_10;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          if (iVar2 != -2) {
            FUN_10035f30(*(int *)(puVar3 + 0x24) + -3,local_10,(char *)0x0,(char *)0x0);
            goto LAB_1001aeff;
          }
        }
        MarkTableEntryUnset_Likely(*(int *)(puVar3 + 0x24) + -3);
      }
      else {
        FUN_10035f30(*(int *)(puVar3 + 0x24) + -3,(char *)(PTR_DAT_10083d8c[iVar2 * 10]),(char *)0x0,
                     (char *)0x0);
      }
LAB_1001aeff:
      FUN_10036280();
    }
    puVar3 = puVar3 + 0x38;
    iVar4 = iVar4 + 1;
    if ((undefined *)0x1008fad7 < puVar3) {
      return;
    }
  } while( true );
}
