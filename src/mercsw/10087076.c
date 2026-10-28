/* SPDX-License-Identifier: MIT */
/* mercsw 10087076 */
/* mercsw 10087076: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
typedef struct FILE FILE;
extern undefined4 DAT_100baa0c;
extern undefined4 DAT_100c2dec;
extern undefined4 PTR_DAT_100c2be0;
char * __cdecl _fgets(char * _Buf, int _MaxCount, FILE * _File);
int __cdecl __isctype(int _C, int _Type);

undefined4 __cdecl FUN_10087076(char * param_1, int param_2, FILE * param_3)

{
  bool bVar1;
  char *pcVar2;
  uint local_10;
  char *local_8;
  
  bVar1 = false;
  do {
    pcVar2 = _fgets(param_1,param_2,param_3);
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    DAT_100baa0c = DAT_100baa0c + 1;
    for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
      if ((*local_8 == '\n') || (*local_8 == '#')) {
        *local_8 = '\0';
        break;
      }
      if (DAT_100c2dec < 2) {
        local_10 = *(ushort *)(PTR_DAT_100c2be0 + *local_8 * 2) & 8;
      }
      else {
        local_10 = __isctype((int)*local_8,8);
      }
      if (local_10 == 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      return 1;
    }
  } while( true );
}
