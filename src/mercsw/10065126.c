/* SPDX-License-Identifier: MIT */
/* mercsw 10065126 */
void __cdecl FUN_1006528b(void);
int __cdecl FUN_10065555(void);
void __cdecl FUN_10065786(unsigned char param_1);
void __cdecl FUN_10065350(unsigned int param_1, int param_2);
unsigned int __cdecl FUN_100656d3(unsigned int param_1, unsigned char param_2);
unsigned int __cdecl FUN_100655f6(unsigned int param_1, unsigned char param_2);
void __cdecl FUN_100652b6(void);
void __cdecl FUN_100654db(void);

int __cdecl FUN_10065126(int param_1, void *param_2)
{
    unsigned int uVar1;
    int iVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    unsigned int local_24;
    unsigned int local_18;
    int local_8;

    local_24 = 0xffff;
    FUN_1006528b();
    uVar1 = 1u << ((unsigned char)param_1 & 0x1f);
    local_8 = (int)((unsigned int)param_1 + 1u);
    local_18 = (1u << ((unsigned char)local_8 & 0x1f)) - 1u;
    iVar2 = FUN_10065555();
    if (iVar2 == 0) {
        FUN_10065786((unsigned char)param_1);
        FUN_10065350(uVar1, local_8);
        uVar4 = local_24;
        while (local_24 = uVar4, uVar3 = ((unsigned int (__cdecl *)(void))param_2)(), uVar3 != 0xffffffffu) {
            uVar4 = FUN_100656d3(local_24, (unsigned char)uVar3);
            if (uVar4 == 0xffff) {
                FUN_10065350(local_24, local_8);
                uVar5 = FUN_100655f6(local_24, (unsigned char)uVar3);
                uVar4 = uVar3;
                if (local_18 < uVar5) {
                    iVar2 = (int)((unsigned int)local_8 + 1u);
                    if (0xc < iVar2) {
                        FUN_10065350(uVar1, local_8);
                        FUN_10065786((unsigned char)param_1);
                        iVar2 = (int)((unsigned int)param_1 + 1u);
                    }
                    local_8 = iVar2;
                    local_18 = (1u << ((unsigned char)local_8 & 0x1f)) - 1u;
                }
            }
        }
        if (local_24 != 0xffff) {
            FUN_10065350(local_24, local_8);
        }
        FUN_10065350(uVar1 + 1u, local_8);
        FUN_100652b6();
        FUN_100654db();
        iVar2 = 0;
    }
    return iVar2;
}
