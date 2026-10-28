/* SPDX-License-Identifier: MIT */
/* mercsw 10051cb0 */
extern undefined4 __cdecl FUN_10064ad0(char *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5);
extern undefined4 DAT_100b09dc;
extern undefined4 *DAT_101f52c8;

undefined4 __cdecl FUN_10051cb0(char *param_1)
{
    undefined4 local_8;
    
    local_8 = 1;
    if ((param_1 != (char *)0x0) && (DAT_100b09dc == 3)) {
        local_8 = FUN_10064ad0(param_1, *DAT_101f52c8, DAT_101f52c8[1], DAT_101f52c8[3], 6);
        DAT_100b09dc = 0;
    }
    return local_8;
}
