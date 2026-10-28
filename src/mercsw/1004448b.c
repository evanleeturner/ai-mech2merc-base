/* SPDX-License-Identifier: MIT */
/* mercsw 1004448b */
extern int __cdecl FUN_100145a1(int param_1);
extern int DAT_100aa55c;

bool __cdecl FUN_1004448b(int param_1)
{
    bool bVar1;
    int iVar1;
    
    iVar1 = FUN_100145a1(param_1);
    if ((iVar1 == 0) || (DAT_100aa55c < 0xc41b)) {
        bVar1 = (*(unsigned char *)(param_1 + 2) & 0xf0) == 0x50;
    }
    else {
        bVar1 = 1;
    }
    return bVar1;
}
