/* SPDX-License-Identifier: MIT */
/* mercsw 10072e03 */
extern void *DAT_100adf74;
extern char s__f__f__d__d_100b4e8c[];

extern void *__stdcall HeapAlloc(void *hHeap, unsigned long dwFlags, unsigned long dwBytes);
extern int __cdecl FUN_1005d8e0(void);
extern int *__cdecl FUN_1005db1f(int param_1);
extern char *__cdecl _strchr(const char *param_1, int str);
extern int __cdecl _sscanf(const char *param_1, const char *str, ...);
extern int __cdecl _atoi(const char *param_1);
extern int __cdecl FUN_10032c10(int param_1);
extern int __cdecl FUN_1000c8ee(int param_1);
extern unsigned char *__cdecl FUN_1000c9e3(int param_1);
extern int __cdecl FUN_1001d5cb(int param_1);
extern int __cdecl FUN_10006b9a(int param_1);
extern int __cdecl FUN_10006b20(int param_1);
extern int __cdecl FUN_10002570(int param_1, int str);
extern int __cdecl FixedMul16(int param_1, int str);
extern void __cdecl FUN_1002f3a7(int param_1, int str, int param_3, int param_4);
extern void __cdecl FUN_1002fbc0(int *param_1);
extern void __cdecl FUN_1002f6a8(void *param_1, int str, int param_3, int param_4, int param_5);

unsigned int __cdecl FUN_10072e03(int param_1, char *str, int param_3)
{
    int *puVar1;
    unsigned char *puVar2;
    int iVar3;
    float local_34;
    int local_30;
    float local_2c;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    int *local_14;
    int local_10;
    int local_c;
    char *local_8;

    if (param_1 == 0) {
        local_14 = (int *)HeapAlloc(DAT_100adf74, 1, 0x1c);
        if (local_14 == (int *)0) {
            return 0;
        }
        iVar3 = FUN_1005d8e0();
        puVar1 = FUN_1005db1f(iVar3);
        *puVar1 = (int)local_14;
        local_14[5] = 0;
        local_14[1] = 0;
        local_8 = _strchr(str, 0x3b);
        if (local_8 != (char *)0) {
            *local_8 = '\0';
            local_8 = local_8 + 1;
            _sscanf(local_8, s__f__f__d__d_100b4e8c, &local_2c, &local_34, &local_18, &local_30);
            local_14[3] = (int)local_2c;
            local_14[4] = (int)local_34;
            local_14[5] = local_18;
            local_14[2] = 0;
        }
        local_14[6] = param_3;
        iVar3 = _atoi(str);
        iVar3 = FUN_10032c10(iVar3);
        local_24 = FUN_1000c8ee(iVar3);
        if (local_24 == -1) {
            return 0;
        }
        puVar2 = FUN_1000c9e3(local_24);
        *local_14 = (int)puVar2;
    }
    else if (param_1 == 1) {
        iVar3 = FUN_1005d8e0();
        local_14 = FUN_1005db1f(iVar3);
        local_14 = (int *)*local_14;
        if (local_14 == (int *)0) {
            return 0;
        }
        if ((*local_14 == 0) || (local_14[5] == 0)) {
            return 0;
        }
        if (*(int *)*local_14 == 0) {
            return 0;
        }
        iVar3 = FUN_1001d5cb(*(int *)*local_14);
        local_14[1] = iVar3;
        local_10 = FUN_10006b9a(local_14[2]);
        local_28 = FUN_10006b20(local_14[2]);
        local_1c = FUN_10002570((int)((unsigned int)param_3 - (unsigned int)local_14[6]), 0xb5);
        local_14[6] = param_3;
        local_20 = FixedMul16(local_14[4], local_1c);
        local_20 = local_20 >> 0x10;
        iVar3 = FixedMul16(local_10, local_20);
        local_c = FixedMul16((int)(0u - (unsigned int)local_28), local_20);
        local_c = local_c >> 0xd;
        FUN_1002f3a7(local_14[1], iVar3 >> 0xd, 0, local_c);
        FUN_1002fbc0((int *)local_14[1]);
        local_20 = FixedMul16(local_14[3], local_1c);
        FUN_1002f6a8((void *)local_14[1], 0, local_20, 0, 0);
        FUN_1002fbc0((int *)local_14[1]);
        local_14[2] = (int)((unsigned int)local_14[2] + (unsigned int)local_20);
        local_14[2] = local_14[2] % 0x1680000;
    }
    return 1;
}
