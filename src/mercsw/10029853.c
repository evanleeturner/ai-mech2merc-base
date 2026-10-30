/* SPDX-License-Identifier: MIT */
/* mercsw 10029853 */
/* Signatures unresolved; all assumed __cdecl, arguments inferred from the call sites. */
int __cdecl FUN_1002a1e0(int param_1, int param_2);
void __cdecl FUN_10008156(int param_1, int param_2);
void __cdecl FUN_1002a5d4(int param_1);
void __cdecl FUN_10042d09(int param_1);

/* Offset +0x17e is not 4-aligned, so the dword there is accessed via memcpy.
   Unresolved: the high 16 bits of the first argument to FUN_1002a1e0.
   Ghidra shows CONCAT22(param_1 >> 16, *(short *)(param_1 + 0x17a)), but the P-code
   shows the upper half is a leftover EAX half. It is assumed zero here (the 16-bit
   value is zero-extended). */
void __cdecl FUN_10029853(int param_1)
{
    int iVar1;
    short local_8;
    unsigned int uVar3;
    unsigned char bVar4;

    local_8 = 0;
    *(unsigned char *)(*(int *)(param_1 + 0x4c) + 0x25) = 0;
    *(unsigned char *)(*(int *)(param_1 + 0x4c) + 0x27) = 0;
    switch (*(short *)(param_1 + 0x176)) {
    case 2:
        iVar1 = FUN_1002a1e0((int)*(unsigned short *)(param_1 + 0x17a), 2);
        if (iVar1 == 0) {
            __builtin_memcpy(&uVar3, (char *)(param_1 + 0x17e), 4);
            local_8 = (short)uVar3;
        }
        else {
            bVar4 = *(unsigned char *)(param_1 + 0x17e);
            if ((bVar4 & 0x10) != 0) {
                FUN_10008156(10, *(int *)(param_1 + 0xc));
            }
        }
        break;
    case 3:
        FUN_10042d09(param_1);
        *(unsigned int *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
        **(unsigned int **)(param_1 + 0x4c) = 0;
        *(unsigned int *)(*(int *)(param_1 + 0x4c) + 4) = 0;
        /* fall through */
    case 6:
        iVar1 = FUN_1002a1e0((int)*(unsigned short *)(param_1 + 0x17a), 8);
        if ((iVar1 != 0) && ((*(unsigned char *)(param_1 + 0x17e) & 0x10) != 0)) {
            FUN_10008156(10, *(int *)(param_1 + 0xc));
        }
        break;
    case 4:
        break;
    case 7:
        iVar1 = FUN_1002a1e0((int)*(unsigned short *)(param_1 + 0x17a), 4);
        if ((iVar1 != 0) && ((*(unsigned char *)(param_1 + 0x17e) & 0x10) != 0)) {
            FUN_10008156(10, *(int *)(param_1 + 0xc));
        }
        /* fall through */
    case 5:
        FUN_1002a5d4(param_1);
    }
    __builtin_memcpy(&uVar3, (char *)(param_1 + 0x17e), 4);
    uVar3 = uVar3 & 0xffffffefU;
    __builtin_memcpy((char *)(param_1 + 0x17e), &uVar3, 4);
    __builtin_memcpy(&uVar3, (char *)(param_1 + 0x17e), 4);
    uVar3 = uVar3 | (unsigned int)(int)local_8;
    __builtin_memcpy((char *)(param_1 + 0x17e), &uVar3, 4);
    return;
}
