/* SPDX-License-Identifier: MIT */
/* mw2shell 1005a2d0 */
extern int DAT_100c6aa0;
extern int DAT_100c6aa6;
extern int DAT_100c6aca;

void *__cdecl FUN_10059e80(uint param_1);
uint __cdecl FUN_10059f10(int param_1, void *param_2, uint param_3);
void __cdecl FUN_10059ea0(void *param_1);
void __cdecl __write(int param_1, void *param_2, int param_3);

int __cdecl FUN_1005a2d0(int param_1)
{
    int iVar1;
    ushort uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    void *pvVar7;
    uint uVar8;
    ushort local_a;
    int temp_int;
    void *temp_ptr;

    iVar5 = param_1 * 0x14a;
    local_a = 0;
    __builtin_memcpy(&iVar3, (char *)&DAT_100c6aa6 + iVar5, 4);
    __builtin_memcpy(&uVar2, (char *)iVar3 + 0xc, 2);
    if (uVar2 != 0) {
        do {
            uVar6 = (uint)local_a;
            iVar1 = iVar3 + 0xe + uVar6 * 0x18;
            __builtin_memcpy(&temp_int, (char *)iVar3 + 0x12 + uVar6 * 0x18, 4);
            if (temp_int != 0) {
                __builtin_memcpy(&uVar4, (char *)iVar1 + 8, 4);
                pvVar7 = (void *)FUN_10059e80(uVar4);
                if (pvVar7 == (void *)0x0) {
                    return 0xffffffff;
                }
                __builtin_memcpy(&temp_int, (char *)&DAT_100c6aa0 + iVar5, 4);
                __builtin_memcpy(&temp_ptr, (char *)iVar1 + 4, 4);
                __write(temp_int, temp_ptr, 0);
                uVar8 = FUN_10059f10(temp_int, pvVar7, uVar4);
                if (uVar8 != uVar4) {
                    FUN_10059ea0(pvVar7);
                    return 0xffffffff;
                }
                __builtin_memcpy((char *)&DAT_100c6aca + uVar6 * 8 + iVar5, &pvVar7, 4);
            }
            local_a = local_a + 1;
        } while (local_a < uVar2);
    }
    return 0;
}
