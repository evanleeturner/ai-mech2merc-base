/* SPDX-License-Identifier: MIT */
/* mercsw 10071674 */
void * __stdcall HeapAlloc(void *hHeap, unsigned int dwFlags, unsigned int dwBytes);
void * __cdecl FUN_10071674(void *param_1);
void __cdecl FUN_1002f34e(int param_1, void *param_2, void *param_3, void *param_4);
void __cdecl FUN_1002f2fc(int param_1, void *param_2, void *param_3, void *param_4);
extern void *DAT_100adf74;

void * __cdecl FUN_10071674(void *param_1)
{
  void *puVar1;
  void *puVar2;

  if (param_1 == NULL) {
    puVar1 = NULL;
  }
  else {
    puVar1 = HeapAlloc(DAT_100adf74, 1, 0x28);
    if (puVar1 == NULL) {
      puVar1 = NULL;
    }
    else {
      ((void **)puVar1)[2] = param_1;
      ((void **)puVar1)[3] = *(void **)param_1;
      puVar2 = FUN_10071674(((void **)param_1)[1]);
      *(void **)puVar1 = puVar2;
      puVar2 = FUN_10071674(((void **)param_1)[2]);
      ((void **)puVar1)[1] = puVar2;
      FUN_1002f34e((int)param_1, (void **)puVar1 + 4, (void **)puVar1 + 5, (void **)puVar1 + 6);
      FUN_1002f2fc((int)param_1, (void **)puVar1 + 7, (void **)puVar1 + 8, (void **)puVar1 + 9);
    }
  }
  return puVar1;
}
