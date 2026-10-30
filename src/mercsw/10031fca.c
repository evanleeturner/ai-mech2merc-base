/* SPDX-License-Identifier: MIT */
/* mercsw 10031fca */
extern unsigned int *DAT_100ada90;
extern unsigned int DAT_101686e8;
extern unsigned int DAT_100ada98;
extern void *DAT_100adf74;

int __stdcall HeapFree(void *, unsigned long, void *);
void * __cdecl FUN_10086951(unsigned int);
void __cdecl FUN_100108a0(unsigned int, char *);

unsigned int __cdecl FUN_10031fca(unsigned int *param_1)
{
    unsigned int uVar1;
    unsigned int uVar2;
    unsigned int *puVar3;
    unsigned int local_8;

    local_8 = 0;
    if (DAT_100ada90 != 0) {
        HeapFree(DAT_100adf74, 1, DAT_100ada90);
    }
    DAT_100ada90 = 0;
    DAT_101686e8 = 0;
    DAT_100ada98 = 0;
    DAT_100ada90 = (unsigned int *)FUN_10086951(param_1[1]);
    if (DAT_100ada90 == 0) {
        FUN_100108a0(0x3f, (char *)0);
    }
    else {
        uVar2 = param_1[1];
        puVar3 = DAT_100ada90;
        for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_1;
            param_1 = param_1 + 1;
            puVar3 = puVar3 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(unsigned char *)puVar3 = *(unsigned char *)param_1;
            param_1 = (unsigned int *)((int)param_1 + 1);
            puVar3 = (unsigned int *)((int)puVar3 + 1);
        }
        DAT_101686e8 = (DAT_100ada90[1] - 8) / 0xc;
        local_8 = 1;
    }
    return local_8;
}
