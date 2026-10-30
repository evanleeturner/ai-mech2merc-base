/* SPDX-License-Identifier: MIT */
/* mercsw 1006ae47 */
/* mercsw 1006ae47: Ghidra's C, repaired by tools/ghidra_repair.py */
extern HANDLE DAT_100adf74;
extern undefined4 DAT_100b3c9c;
extern char s_mw2snd_cfg_100b3cb8[];
undefined __stdcall FUN_1006ac3b(void);
undefined __stdcall FUN_1004652f(void);
undefined __stdcall FUN_1003c67c(void);
undefined __stdcall StopAndFreeAllSamples(void);
undefined4 __cdecl FUN_10047fde(char * param_1, void * param_2);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __stdcall FUN_1006ae47(void)

{
  FUN_1006ac3b();
  FUN_1004652f();
  FUN_1003c67c();
  StopAndFreeAllSamples();
  FUN_10047fde(s_mw2snd_cfg_100b3cb8,(void *)(DAT_100b3c9c));
  HeapFree(DAT_100adf74,1,(LPVOID)(DAT_100b3c9c));
  return;
}
