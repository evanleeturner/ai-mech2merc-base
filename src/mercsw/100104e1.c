/* SPDX-License-Identifier: MIT */
/* mercsw 100104e1 */
extern unsigned int DAT_100a9e10;
extern unsigned char DAT_101ec430[];
extern void *DAT_100adf74;

void * __stdcall HeapAlloc(void *hHeap, unsigned long dwFlags, unsigned long dwBytes);

unsigned int __cdecl FUN_100104e1(unsigned int param_1, unsigned int param_2, int param_3, short *param_4)
{
    unsigned int uVar1;
    unsigned int *puVar2;
    int iVar4;
    unsigned int *puVar5;

    if ((int)DAT_100a9e10 < 7) {
        if (param_3 == 1) {
            if (*param_4 < 1) {
                uVar1 = 0xffffU;
            }
            else {
                puVar2 = (unsigned int *)HeapAlloc(DAT_100adf74, 1, 0x1c);
                if (puVar2 == (unsigned int *)0) {
                    uVar1 = 0xffffU;
                }
                else {
                    puVar5 = puVar2;
                    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                        *puVar5 = 0;
                        puVar5 = puVar5 + 1;
                    }
                    *(unsigned int **)(&DAT_101ec430[0] + DAT_100a9e10 * 4U) = puVar2;
                    *puVar2 = 0;
                    puVar2[3] = 0;
                    puVar2[4] = param_1;
                    puVar2[2] = param_2;
                    puVar2[5] = (unsigned int)(int)*param_4;
                    uVar1 = DAT_100a9e10;
                    DAT_100a9e10 = DAT_100a9e10 + 1U;
                }
            }
        }
        else {
            uVar1 = 0xffffU;
        }
    }
    else {
        uVar1 = 0xffffU;
    }
    return uVar1;
}
