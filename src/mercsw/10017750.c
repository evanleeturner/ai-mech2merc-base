/* SPDX-License-Identifier: MIT */
/* mercsw 10017750 */
/* mercsw 10017750: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef struct FILE FILE;
extern undefined4 DAT_100a7558;
extern undefined4 DAT_100aae48;
extern undefined4 DAT_100aae50;
extern undefined4 DAT_100aae58;
extern undefined4 DAT_100aae5c;
extern undefined4 DAT_100aae60;
extern undefined4 DAT_100aae64;
extern undefined4 DAT_100aae68;
extern undefined DAT_100aae6c[];
extern undefined4 DAT_100aae70;
extern undefined4 DAT_100aae74;
extern undefined4 DAT_100aae78;
extern undefined4 DAT_100aae7c;
extern undefined4 DAT_100aae80;
extern char DAT_100aafe4[];
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b351c;
extern ushort * DAT_100b352c;
extern undefined4 PTR_DAT_100af100;
extern char s_mission__4s_globalintensity__d_t_100aaff4[];
extern char s_skygnd_par_100aafe8[];
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1001767b(int param_1, char * param_2);
FILE * __cdecl _fopen(char * _Filename, char * _Mode);
uint __cdecl FUN_100175e7(FILE * param_1, int param_2, int param_3);
int __cdecl _sscanf(char * _Src, char * _Format, ...);
int __cdecl _strncmp(char * _Str1, char * _Str2, size_t _MaxCount);
undefined __cdecl FUN_1007d001(int param_1);
undefined __cdecl FUN_10031035(int param_1);

void __cdecl FUN_10017750(char * param_1)

{
  FILE *pFVar1;
  uint uVar2;
  int iVar3;
  int local_26c;
  int local_268;
  char local_264 [32];
  char local_244 [32];
  char local_224 [32];
  char local_204 [512];
  
  local_268 = 0x80;
  local_26c = 0;
  if (DAT_100b352c == (ushort *)0x0) {
    DAT_100b352c = FUN_1008668b(DAT_100af17c,DAT_100b351c,(int *)PTR_DAT_100af100);
  }
  DAT_100aae80 = (int)(char)*DAT_100b352c;
  FUN_1001767b((int)local_224,param_1);
  pFVar1 = _fopen(s_skygnd_par_100aafe8,DAT_100aafe4);
  if (pFVar1 == (FILE *)0x0) {
    DAT_100aae48 = 320000;
    DAT_100aae74 = 0;
    DAT_100aae78 = 320000;
    DAT_100aae7c = 0;
    DAT_100aae50 = 160000;
    DAT_100aae58 = 5000;
    DAT_100aae5c = 320000;
    DAT_100aae64 = 0;
    DAT_100aae68 = 0;
  }
  else {
    do {
      uVar2 = FUN_100175e7(pFVar1,(int)local_204,0x100);
      if (uVar2 == 0) {
        return;
      }
      _sscanf(local_204,s_mission__4s_globalintensity__d_t_100aaff4,local_244,&local_268,
              &DAT_100aae58,&DAT_100aae64,&DAT_100aae5c,&local_26c,&DAT_100aae68,DAT_100aae6c,
              &DAT_100aae70);
      FUN_1001767b((int)local_264,local_244);
      iVar3 = _strncmp(local_224,local_264,4);
    } while (iVar3 != 0);
    DAT_100aae74 = 0;
    DAT_100aae78 = DAT_100aae48;
    FUN_1007d001(local_268);
    FUN_10031035(local_26c);
    DAT_100aae60 = DAT_100aae5c;
    DAT_100aae5c = DAT_100aae5c << 1;
    DAT_100a7558 = DAT_100aae70;
  }
  return;
}
