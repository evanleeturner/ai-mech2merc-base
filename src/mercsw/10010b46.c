/* SPDX-License-Identifier: MIT */
/* mercsw 10010b46 */
extern undefined4 __cdecl _sprintf(undefined *, undefined *, undefined4, undefined4);
extern void __cdecl FUN_1005dd5a(undefined *);
extern void __cdecl FUN_1006a38c(undefined *);
extern undefined DAT_100c6588[];
extern undefined s__s__s_100a9e8c[];

undefined * __cdecl FUN_10010b46(undefined4 param_1, undefined4 param_2)
{
    _sprintf(DAT_100c6588, s__s__s_100a9e8c, param_1, param_2);
    FUN_1005dd5a(DAT_100c6588);
    FUN_1006a38c(DAT_100c6588);
    return DAT_100c6588;
}
