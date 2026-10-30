/* SPDX-License-Identifier: MIT */
/* mercsw 10046dbc */
extern int DAT_100b04c4;
extern unsigned int DAT_100b04b0;
extern void *DAT_100adf74;

unsigned long __stdcall mciSendCommandA(unsigned int, unsigned int, unsigned long, unsigned long);
void * __stdcall HeapAlloc(void *, unsigned long, unsigned long);
void __cdecl FUN_1004652f(void);

unsigned int __cdecl FUN_10046dbc(int *param_1)
{
    unsigned int uVar1;
    unsigned long MVar2;
    void *pvVar3;
    int local_18;
    int local_14[4]; /* [0]=local_14, [1]=local_10, [2]=local_c, [3]=local_8 */

    if (DAT_100b04c4 == 0) {
        uVar1 = 1;
    }
    else {
        local_14[2] = 3;
        MVar2 = mciSendCommandA(DAT_100b04b0, 0x814, 0x100, (unsigned long)local_14);
        if (MVar2 == 0) {
            *param_1 = 1;
            param_1[1] = local_14[1];
            pvVar3 = HeapAlloc(DAT_100adf74, 1, (unsigned int)local_14[1] * 4u + 4u);
            param_1[2] = (int)pvVar3;
            if (param_1[2] == 0) {
                DAT_100b04c4 = 0;
                uVar1 = 1;
            }
            else {
                for (local_18 = *param_1; local_18 <= param_1[1]; local_18 = (int)((unsigned int)local_18 + 1u)) {
                    local_14[2] = 2;
                    local_14[3] = local_18;
                    MVar2 = mciSendCommandA(DAT_100b04b0, 0x814, 0x110, (unsigned long)local_14);
                    if (MVar2 != 0) {
                        FUN_1004652f();
                        return 0;
                    }
                    *(int *)(param_1[2] + (int)(((unsigned int)local_18 - (unsigned int)*param_1) * 4u)) = local_14[1];
                }
                *(unsigned int *)(param_1[2] + (int)(((unsigned int)local_18 - (unsigned int)*param_1) * 4u)) =
                    (unsigned int)(unsigned char)(char)((unsigned int)(int)(char)param_1[1] + 1u);
                uVar1 = 0;
            }
        }
        else {
            FUN_1004652f();
            uVar1 = 0;
        }
    }
    return uVar1;
}
