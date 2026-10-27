/* SPDX-License-Identifier: MIT */
/* mercsw 1000ffd0 */
unsigned int __cdecl FUN_1000ffd0(unsigned int param_1)
{
    short sVar1;
    int iVar2;
    unsigned int uVar3;

    iVar2 = 0x1f;
    if (param_1 != 0) {
        for (; param_1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
    }
    if ((unsigned int)iVar2 - 0xfU == 0 || iVar2 < 0xf) {
        sVar1 = 0xf;
        if ((unsigned short)param_1 != 0) {
            for (; (unsigned short)((unsigned short)param_1 >> sVar1) == 0; sVar1 = (short)(sVar1 + -1)) {
            }
        }
        uVar3 = param_1 << ((unsigned char)((unsigned short)(0x10U - (unsigned int)sVar1) >> 1) & 0x1f);
    }
    else {
        uVar3 = param_1 >> ((unsigned char)(((unsigned int)iVar2 - 0xfU) >> 1) & 0x1f);
    }
    return uVar3;
}
