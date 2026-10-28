/* SPDX-License-Identifier: MIT */
/* mw2shell 10012fe0 */
/* mw2shell 10012fe0: Ghidra's C, repaired by tools/ghidra_repair.py */
typedef DWORD SIZE_T;
extern undefined4 DAT_1008eb68;
extern undefined4 DAT_10098204;
extern HANDLE DAT_10098224;
extern void * DAT_100a6734;
extern undefined4 DAT_100a7248;
undefined4 __thiscall FUN_10054fe0(void * this, int param_1, undefined4 * param_2, SIZE_T * param_3);
undefined __cdecl FUN_10069c79(int param_1, int param_2, byte * param_3);
undefined4 __cdecl FUN_10069bf7(int * param_1, int param_2);
undefined __thiscall FUN_10012470(void * this, int param_1, int param_2, int param_3, int param_4);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);

void __thiscall FUN_10012fe0(void * this, int param_1)

{
  int iVar1;
  LPVOID local_8;
  SIZE_T local_4;
  
  iVar1 = FUN_10054fe0(DAT_100a6734,param_1,(undefined4 *)(&local_8),&local_4);
  if (iVar1 == 0) {
    FUN_10069c79((int)local_8,local_4,(byte *)((int)this + 0x92));
    iVar1 = -1;
    if (DAT_10098204 != 0) {
      iVar1 = ((int (*)(void))((void (*)(void))((**(code **)(DAT_100a7248 + 0x20)))))();
    }
    if (iVar1 == 0) {
      FUN_10069bf7((int *)((int)this + 0x56),(int)local_8);
    }
    FUN_10012470(this,*(int *)((int)this + 0x5a),*(int *)((int)this + 0x5e),
                 *(int *)((int)this + 0x62),*(int *)((int)this + 0x66));
    *(undefined4 *)((int)this + 0x1e) = 1;
    *(undefined4 *)((int)this + 0x22) = 1;
    DAT_1008eb68 = 1;
    HeapFree(DAT_10098224,1,local_8);
  }
  return;
}
