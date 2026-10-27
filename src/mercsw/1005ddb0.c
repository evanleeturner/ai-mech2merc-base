/* SPDX-License-Identifier: MIT */
/* mercsw 1005ddb0 */
extern int DAT_100ab238;

/* Parameter and return types of the two callees are inferred from the call site only. */
int __cdecl FUN_10002570(int a, int b);
void __cdecl FixedMul16(int a, int b);

void __stdcall FUN_1005ddb0(void)
{
    int iVar1;

    iVar1 = FUN_10002570(1, 0xf);
    FixedMul16((int)((unsigned int)DAT_100ab238 << 0x10), iVar1);
    return;
}
