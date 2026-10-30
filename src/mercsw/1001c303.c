/* SPDX-License-Identifier: MIT */
/* mercsw 1001c303 */
extern void *DAT_100adf74;

void * __stdcall HeapAlloc(void *, DWORD, DWORD);
void __cdecl SetCurrentNode(int param_1, int param_2);

int * __cdecl FUN_1001c303(int param_1, int param_2, int param_3, int param_4, int param_5, unsigned int *param_6)
{
    int *piVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    int *piVar4;
    int *local_10;

    if (param_1 == 0) {
        piVar1 = (int *)0;
    }
    else {
        uVar2 = (unsigned int)param_3 * 0x44u + (unsigned int)param_4 * 0x24u + (unsigned int)param_5 + 0x18u;
        piVar1 = (int *)HeapAlloc(DAT_100adf74, 1, uVar2);
        if (piVar1 == (int *)0) {
            piVar1 = (int *)0;
        }
        else {
            piVar4 = piVar1;
            for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                *piVar4 = 0;
                piVar4 = piVar4 + 1;
            }
            for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
                *(unsigned char *)piVar4 = 0;
                piVar4 = (int *)((int)piVar4 + 1);
            }
            *piVar1 = param_2;
            *(unsigned short *)(piVar1 + 1) = 0;
            *(unsigned short *)((int)piVar1 + 6) = 0;
            piVar1[4] = 0;
            *(unsigned short *)(piVar1 + 5) = 0;
            piVar1[2] = (int)(((unsigned int)param_3 * 0x44u + 0x18u) & 0xffffu);
            *param_6 = (unsigned int)((int)piVar1 + (int)((unsigned int)param_4 * 0x24u) + piVar1[2]);
            SetCurrentNode(param_1, (int)piVar1);
            if (*(int *)(param_1 + 0x1c) == 0) {
                *(int **)(param_1 + 0x1c) = piVar1;
                piVar1[3] = 0;
            }
            else {
                local_10 = *(int **)(param_1 + 0x1c);
                if (param_2 < *local_10) {
                    piVar1[3] = (int)local_10;
                    *(int **)(param_1 + 0x1c) = piVar1;
                }
                else {
                    for (; (local_10[3] != 0 && (*(int *)local_10[3] <= param_2));
                         local_10 = (int *)local_10[3]) {
                    }
                    piVar1[3] = local_10[3];
                    local_10[3] = (int)piVar1;
                }
            }
        }
    }
    return piVar1;
}
