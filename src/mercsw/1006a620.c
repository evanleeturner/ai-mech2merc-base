/* SPDX-License-Identifier: MIT */
/* mercsw 1006a620 */
extern int DAT_100b3c4c;
extern int DAT_100b3c50;
extern int DAT_100b3c54;
extern int DAT_100b3c48;
extern int DAT_100b3c58;

void __cdecl FUN_1006ab7b(void);
int __cdecl FUN_10046fb4(void);
void __cdecl FUN_1006aa37(void);
void __cdecl FUN_1006abdb(void);
void __cdecl FUN_100470be(void);
void __cdecl FUN_1003c7ea(void);
void __cdecl FUN_10007c2b(void);
void __cdecl FUN_100035a8(void);

/* Unresolved: the globals at 0x100b3c48..0x100b3c58 are treated as plain ints.
   Ghidra notes that _DAT_100b3c58 overlaps smaller symbols. */
void __cdecl FUN_1006a620(int param_1, int param_2)
{
    int iVar1;
    int iVar2;
    int iVar3;
    void (__cdecl *local_8)(void);

    local_8 = (void (__cdecl *)(void))0;
    if ((-1 < param_1) && (param_1 < 5)) {
        if (param_1 != 2) {
            FUN_1006ab7b();
        }
        iVar2 = DAT_100b3c54;
        iVar1 = DAT_100b3c50;
        iVar3 = DAT_100b3c4c;
        switch (param_1) {
        case 0:
            DAT_100b3c4c = param_2;
            if (param_2 != iVar3) {
                local_8 = FUN_100035a8;
            }
            break;
        case 1:
            DAT_100b3c50 = param_2;
            if (param_2 == 0) {
                DAT_100b3c58 = (int)((unsigned int)DAT_100b3c58 & 0xfffffffdU);
            } else {
                DAT_100b3c58 = (int)((unsigned int)DAT_100b3c58 | 2U);
            }
            if (param_2 != iVar1) {
                local_8 = FUN_10007c2b;
            }
            break;
        case 2:
            DAT_100b3c54 = param_2;
            if (param_2 != iVar2) {
                iVar3 = FUN_10046fb4();
                if (iVar3 == 0) {
                    local_8 = FUN_1003c7ea;
                } else {
                    local_8 = FUN_100470be;
                }
                if (iVar2 == 0) {
                    FUN_1006aa37();
                }
            }
            FUN_1006abdb();
            break;
        case 3:
            DAT_100b3c48 = param_2;
            local_8 = (void (__cdecl *)(void))0;
            break;
        case 4:
            break;
        }
        if (local_8 != (void (__cdecl *)(void))0) {
            (*local_8)();
        }
    }
    return;
}
