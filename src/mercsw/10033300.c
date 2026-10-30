/* SPDX-License-Identifier: MIT */
/* mercsw 10033300 */
extern int DAT_100aa1ac;
extern int DAT_100adb00;
extern int DAT_100adb04;
extern int DAT_100adb08;
extern int DAT_100adb0c;
extern int DAT_100adb10;
extern char *DAT_100adb14;
extern char DAT_100adb18;
extern char DAT_100adb4c;
extern char DAT_100adb9c;
extern char DAT_100adbc0;
extern char s_supanm_100adb50[];
extern char s_launch_100adb60[];
extern char s__c___s__s6__s_100adb68[];
extern char s_launch_100adba0[];
extern char s_launch_100adba8[];
extern char s__c___s__s6__s_100adbb0[];
extern char s_launch_100adbc4[];
extern char s__c___s__s6__s_100adbcc[];
extern char s_StartSupanim__LockDisplayBuffer_f_100adbdc[];
extern void *DAT_100adf74;
extern int DAT_100adf80;
extern undefined4 *DAT_100b9a18;
extern int DAT_100b9a1c;
extern int DAT_100c967c;
extern int DAT_100c9680;
extern undefined4 DAT_101f5300;
extern undefined4 DAT_100c6b58;
extern undefined4 DAT_100c6b5c;
extern undefined4 _DAT_100c6b60;
extern undefined4 _DAT_100c6b40;
extern undefined4 DAT_100c6b40;
extern undefined4 DAT_100c6b4c;
extern undefined4 DAT_100c6b50;
extern int DAT_100c6b3c;
extern int DAT_100c6b38;

extern unsigned long __stdcall GetCurrentDirectoryA(unsigned long, char *);
extern void *__stdcall HeapAlloc(void *, unsigned long, unsigned long);
extern int __stdcall HeapFree(void *, unsigned long, void *);
extern int __cdecl _sprintf(char *, const char *, ...);
extern int __stdcall _FILE_read_8(char *, int);
extern char __cdecl FUN_10081830(void);
extern void __cdecl FUN_10002168(char *);
extern void __cdecl FUN_10058e74(int *, int);
extern void __cdecl FUN_10056fc4(int *, int, int, int, int);
extern void __cdecl FUN_1005b5ea(int, int, int);
extern int __cdecl FUN_1005b6c7(int);
extern long long __cdecl __ftol(void);
extern void __cdecl FUN_100337fe(void);
extern int __stdcall _AIL_register_timer_4(void *);
extern void __stdcall _AIL_set_timer_period_8(int, int);
extern void __stdcall _AIL_start_timer_4(int);

void __cdecl FUN_10033300(int param_1)
{
  char cVar1;
  void *lpMem;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long long lVar5;
  int local_218;
  int local_214;
  char local_204[256];
  char local_104[256];

  GetCurrentDirectoryA(0x100, local_204);
  cVar1 = local_204[0];
  DAT_100adb10 = 0;
  DAT_100adb14 = (char *)0;
  _sprintf(local_204, s__c___s__s6__s_100adb68, (int)local_204[0], s_launch_100adb60,
           s_supanm_100adb50 + ((DAT_100aa1ac == 0) - 1 & 8), &DAT_100adb4c);
  if ((DAT_100adb14 == (char *)0) || (*DAT_100adb14 == '\0')) {
    _sprintf(local_104, s__c___s__s6__s_100adbb0, (int)cVar1, s_launch_100adba8, s_launch_100adba0,
             &DAT_100adb9c);
  }
  else {
    _sprintf(local_104, s__c___s__s6__s_100adbcc, (int)cVar1, s_launch_100adbc4, DAT_100adb14,
             &DAT_100adbc0);
  }
  DAT_100adb04 = _FILE_read_8(local_204, 0);
  if (((DAT_100adb04 != 0) ||
      ((local_204[0] = FUN_10081830(), local_204[0] != '\0' &&
       (local_104[0] = local_204[0], DAT_100adb04 = _FILE_read_8(local_204, 0), DAT_100adb04 != 0))))
     && (lpMem = HeapAlloc(DAT_100adf74, 9, 0x300), lpMem != (void *)0)) {
    ((void (__cdecl *)(int, int, void *, int))DAT_100b9a18[5])(0, 0x100, lpMem, 1);
    puVar3 = &DAT_101f5300;
    puVar4 = &DAT_100c6b58;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    DAT_100c6b5c = (undefined4)((unsigned int)DAT_100c967c - 1u);
    _DAT_100c6b60 = (undefined4)((unsigned int)DAT_100c9680 - 1u);
    _DAT_100c6b40 = (undefined4)&DAT_100c6b58;
    DAT_100c6b4c = (undefined4)((unsigned int)DAT_100c967c - 1u);
    DAT_100c6b50 = (undefined4)((unsigned int)DAT_100c9680 - 1u);
    if (DAT_100adf80 == 0) {
      local_214 = -1;
    }
    else {
      local_214 = ((int (__cdecl *)(void))DAT_100b9a18[8])();
    }
    if (local_214 == 0) {
      DAT_100c6b58 = DAT_101f5300;
      FUN_10058e74((int *)&DAT_100c6b40, 0);
      FUN_10056fc4((int *)&DAT_100c6b40, DAT_100adb04, 0, 0, 0);
      if (DAT_100adf80 != 0) {
        (**(void (__cdecl **)(void))(DAT_100b9a1c + 0x18))();
      }
      FUN_1005b5ea(DAT_100adb04, 0, (int)lpMem);
      if (param_1 == 0) {
        ((void (__cdecl *)(void *, int))DAT_100b9a18[7])(lpMem, 2);
      }
      else {
        ((void (__cdecl *)(void *, int))DAT_100b9a18[7])(lpMem, 0x3c);
      }
      if (DAT_100aa1ac == 0) {
        ((void (__cdecl *)(int, int, void *, int))DAT_100b9a18[5])(0, 0x10, &DAT_100adb18, 1);
      }
      HeapFree(DAT_100adf74, 1, lpMem);
      DAT_100adb08 = _FILE_read_8(local_104, 0);
      if (DAT_100adb08 != 0) {
        DAT_100adb0c = FUN_1005b6c7(DAT_100adb08);
        lVar5 = __ftol();
        DAT_100c6b3c = (int)lVar5;
        lVar5 = __ftol();
        DAT_100c6b38 = (int)lVar5;
        if ((DAT_100aa1ac == 0) && (*DAT_100b9a18 == 1)) {
          if (DAT_100adf80 == 0) {
            local_218 = -1;
          }
          else {
            local_218 = ((int (__cdecl *)(void))DAT_100b9a18[8])();
          }
          if (local_218 == 0) {
            FUN_10056fc4((int *)&DAT_100c6b40, DAT_100adb04, 0, 0, 0);
            FUN_10056fc4((int *)&DAT_100c6b40, DAT_100adb08, 0, DAT_100c6b3c, DAT_100c6b38);
            if (DAT_100adf80 != 0) {
              (**(void (__cdecl **)(void))(DAT_100b9a1c + 0x18))();
            }
          }
        }
        else if (DAT_100aa1ac == 0) {
          DAT_100adb00 = _AIL_register_timer_4((void *)FUN_100337fe);
          _AIL_set_timer_period_8(DAT_100adb00, 330000);
          _AIL_start_timer_4(DAT_100adb00);
        }
      }
    }
    else {
      FUN_10002168(s_StartSupanim__LockDisplayBuffer_f_100adbdc);
    }
  }
  return;
}
