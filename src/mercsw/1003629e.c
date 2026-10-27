/* SPDX-License-Identifier: MIT */
/* mercsw 1003629e */
extern uint DAT_100adcf8[];

uint __cdecl FUN_1003629e(int param_1)
{
    uint local_8;
    
    local_8 = 7;
    if (param_1 < 8) {
        local_8 = DAT_100adcf8[param_1];
    }
    return local_8;
}
