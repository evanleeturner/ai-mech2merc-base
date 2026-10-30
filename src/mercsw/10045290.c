/* SPDX-License-Identifier: MIT */
/* mercsw 10045290 */
typedef void *HDC;

extern HDC DAT_100afbc0;
extern int *DAT_100b9a18;
extern int *PTR_DAT_100b99f8;
extern int DAT_100b03ec;
extern int DAT_100b9d4c;
extern HWND DAT_100adf6c;
extern HANDLE DAT_100adf74;
extern short DAT_100c9278[];
extern int DAT_100b9d30;
extern unsigned char g_bitmapHeader100c9250_Likely[];
extern int DAT_100affd8;

HDC __stdcall GetDC(HWND hWnd);
LPVOID __stdcall HeapAlloc(HANDLE hHeap, unsigned int dwFlags, unsigned int dwBytes);

void __cdecl FUN_10082279(int param_1);
void __cdecl InitBitmapHeader8Bit(int param_1, int param_2);
int __cdecl FUN_10045873(int param_1, int param_2, int param_3);
int __cdecl FUN_100455b7(void);
void __cdecl FUN_1004541e(void);

unsigned int __cdecl FUN_10045290(int *param_1, int param_2, int param_3)
{
    unsigned int uVar1;
    int iVar2;
    LPVOID pvVar3;
    unsigned int uVar4;
    unsigned int *puVar5;
    int local_c;

    if (DAT_100afbc0 == (HDC)0) {
        if (*DAT_100b9a18 != 2) {
            ((void (__cdecl *)(void))DAT_100b9a18[4])();
            if (DAT_100b03ec != DAT_100b9d4c) {
                FUN_10082279(0x100b03e8);
            }
            DAT_100b9a18 = PTR_DAT_100b99f8;
        }
        DAT_100afbc0 = GetDC(DAT_100adf6c);
        InitBitmapHeader8Bit(param_2, param_3);
        for (local_c = 0; local_c < 0x100; local_c = (int)((unsigned int)local_c + 1u)) {
            DAT_100c9278[local_c] = (short)local_c;
        }
        iVar2 = FUN_10045873(0, 0x100, 0x100b9a30);
        if (iVar2 == 0) {
            uVar1 = 0xffffffffu;
        }
        else {
            pvVar3 = HeapAlloc(DAT_100adf74, 9, (unsigned int)param_3 * (unsigned int)param_2);
            *param_1 = (int)pvVar3;
            if (*param_1 == 0) {
                uVar1 = 2;
            }
            else {
                DAT_100b9d30 = *param_1;
                param_1[1] = (int)((unsigned int)param_2 - 1u);
                param_1[2] = (int)((unsigned int)param_3 - 1u);
                param_1[4] = 0;
                param_1[3] = (int)g_bitmapHeader100c9250_Likely;
                puVar5 = (unsigned int *)*param_1;
                for (uVar4 = ((unsigned int)param_3 * (unsigned int)param_2) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *puVar5 = 0;
                    puVar5 = puVar5 + 1;
                }
                for (uVar4 = ((unsigned int)param_3 * (unsigned int)param_2) & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                    *(unsigned char *)puVar5 = 0;
                    puVar5 = (unsigned int *)((int)puVar5 + 1);
                }
                iVar2 = FUN_100455b7();
                if (iVar2 == 0) {
                    DAT_100affd8 = 1;
                    uVar1 = 0;
                }
                else {
                    FUN_1004541e();
                    uVar1 = 1;
                }
            }
        }
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}
