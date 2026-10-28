/* SPDX-License-Identifier: MIT */
/* mw2shell 10010a70 */
extern void __cdecl FUN_10010920(void);
extern long long __cdecl __ftol(void);
extern void __stdcall _AIL_set_sequence_volume_12(int, int, int);

void __thiscall FUN_10010a70(void *this, int param_1)
{
    int iVar1;
    long long lVar2;
    int uVar3;

    iVar1 = *(int *)((int)this + 4);
    *(int *)((int)this + 0x10) = param_1;
    if (iVar1 != 0) {
        uVar3 = 0;
        FUN_10010920();
        lVar2 = __ftol();
        _AIL_set_sequence_volume_12(iVar1, (int)lVar2, uVar3);
    }
    return;
}
