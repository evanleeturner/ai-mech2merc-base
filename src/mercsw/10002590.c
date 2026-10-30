/* SPDX-License-Identifier: MIT */
/* mercsw 10002590 */
extern int *DAT_100a40f8;
extern HANDLE DAT_100adf74;

LPVOID __stdcall HeapAlloc(HANDLE, DWORD, DWORD);
int __stdcall HeapFree(HANDLE, DWORD, LPVOID);
int __cdecl FUN_1006aec6(void);
int __stdcall _AIL_allocate_sample_handle_4(int param_1);

unsigned int __cdecl FUN_10002590(unsigned int param_1)
{
    unsigned int uVar1;
    LPVOID pvVar2;
    int iVar3;
    int *piVar4;
    unsigned int local_8;

    if (DAT_100a40f8 == (int *)0x0) {
        DAT_100a40f8 = (int *)HeapAlloc(DAT_100adf74, 1, 0x508);
        if (DAT_100a40f8 == (int *)0x0) {
            uVar1 = 0xfffffffd;
        }
        else {
            piVar4 = DAT_100a40f8;
            for (iVar3 = 0x142; iVar3 != 0; iVar3 = iVar3 + -1) {
                *piVar4 = 0;
                piVar4 = piVar4 + 1;
            }
            iVar3 = FUN_1006aec6();
            *DAT_100a40f8 = iVar3;
            if (*DAT_100a40f8 == 0) {
                HeapFree(DAT_100adf74, 1, DAT_100a40f8);
                DAT_100a40f8 = (int *)0x0;
                uVar1 = 0xfffffffc;
            }
            else {
                if (param_1 < 0x11) {
                    DAT_100a40f8[0x11] = (int)param_1;
                }
                else {
                    DAT_100a40f8[0x11] = 0x10;
                }
                for (local_8 = 0; local_8 < (unsigned int)DAT_100a40f8[0x11]; local_8 = local_8 + 1) {
                    iVar3 = _AIL_allocate_sample_handle_4(*DAT_100a40f8);
                    DAT_100a40f8[local_8 + 1] = iVar3;
                    if (DAT_100a40f8[local_8 + 1] == 0) {
                        DAT_100a40f8[0x11] = (int)local_8;
                        break;
                    }
                    pvVar2 = HeapAlloc(DAT_100adf74, 1, 0x4000);
                    DAT_100a40f8[local_8 * 2 + 0xaa] = (int)pvVar2;
                    if (DAT_100a40f8[local_8 * 2 + 0xaa] == 0) {
                        DAT_100a40f8[0x11] = (int)local_8;
                        break;
                    }
                }
                for (local_8 = 0; local_8 < (unsigned int)DAT_100a40f8[0x11]; local_8 = local_8 + 1) {
                    DAT_100a40f8[local_8 + 0x12] = 0;
                    DAT_100a40f8[local_8 + 0xea] = -1;
                    DAT_100a40f8[local_8 + 0xfa] = 0;
                    DAT_100a40f8[local_8 + 0x10a] = 0x40;
                }
                uVar1 = 1;
            }
        }
    }
    else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}
