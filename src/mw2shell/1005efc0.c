/* SPDX-License-Identifier: MIT */
/* mw2shell 1005efc0 */
unsigned char __fastcall FUN_1005f8c0(void *param_1, int unused_edx, unsigned int param_2);
int __stdcall _SmackDoFrame(int param_1);
void __fastcall FUN_10012f10(void *param_1, int unused_edx, int param_2, int param_3, int param_4, int param_5);

/* __thiscall callees emulated with __fastcall: ECX = this, EDX unused */
unsigned char __fastcall FUN_1005efc0(void *param_1)
{
    char *base = (char *)param_1;
    unsigned char bVar1;

    bVar1 = FUN_1005f8c0(param_1, 0, 0x40000000);
    if (bVar1) {
        return 1;
    }
    if (*(int *)(base + 0x100) != 0) {
        if ((*(int *)(base + 0x12c) == 0) && (bVar1 = FUN_1005f8c0(param_1, 0, 1), !bVar1)) {
            _SmackDoFrame(*(int *)(base + 0x100));
            bVar1 = FUN_1005f8c0(param_1, 0, 2);
            if (bVar1) {
                *(unsigned int *)(base + 0x10c) = *(unsigned int *)(base + 0x10c) | 0x10;
            }
            *(int *)(base + 0x12c) = 1;
        }
        if ((*(int *)(base + 0x100) != 0) && (bVar1 = FUN_1005f8c0(param_1, 0, 2), !bVar1)) {
            *(int *)(base + 0x128) = *(int *)(base + 0x12c);
        }
    }
    if ((((*(int *)(base + 0x120) == *(int *)(base + 0x110)) &&
          (*(int *)(base + 0x114) == *(int *)(base + 0x124))) &&
         (*(int *)(base + 0x128) == *(int *)(base + 0x12c))) &&
        (bVar1 = FUN_1005f8c0(param_1, 0, 0x40000020), !bVar1)) {
        return 0;
    }
    bVar1 = FUN_1005f8c0(param_1, 0, 0x10);
    if (bVar1) {
        FUN_10012f10(*(void **)(base + 0x140), 0, *(int *)(base + 0x120),
                     *(int *)(base + 0x124), *(int *)(base + 0x118),
                     *(int *)(base + 0x11c));
        *(unsigned int *)(base + 0x10c) = *(unsigned int *)(base + 0x10c) | 0x100;
    }
    *(int *)(base + 0x120) = *(int *)(base + 0x110);
    *(int *)(base + 0x124) = *(int *)(base + 0x114);
    *(int *)(base + 0x128) = *(int *)(base + 0x12c);
    *(unsigned int *)(base + 0x10c) = *(unsigned int *)(base + 0x10c) & 0xffffffef;
    bVar1 = FUN_1005f8c0(param_1, 0, 0x40000000);
    return bVar1;
}
