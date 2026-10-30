/* SPDX-License-Identifier: MIT */
/* mercsw 10086336 */
extern int DAT_100ba7bc;
extern void *DAT_100adf74;
extern unsigned short *DAT_100c9054;
extern int DAT_100b0a08;
extern int DAT_100c9050;
extern char s_Freeing_bad_item__type___s_id____100ba7c4[];
extern char s_Freeing_bad_item__type___s_id____100ba7ec[];

void __cdecl FUN_10085fb3(int);
void __cdecl FUN_100108a0(unsigned int, char *);
void __cdecl FUN_1008607d(void);
int __cdecl _sprintf(char *, const char *, ...);
unsigned int __cdecl FUN_1005be24(char *, int, int, int);
int __stdcall HeapFree(void *, unsigned long, void *);

void __cdecl FUN_10086336(unsigned short *mem)
{
    unsigned int uVar1;
    char local_78[100];
    int local_14;
    char local_10[5]; /* 4 name bytes + terminator (local_c) */
    int local_8;

    local_8 = 0;
    if (mem != (unsigned short *)0) {
        mem[1] = 0;
        FUN_10085fb3((int)mem);
        local_10[4] = 0;
        uVar1 = *(unsigned int *)(mem + 2);
        local_10[2] = (char)(uVar1 >> 0x10);
        local_10[3] = (char)(uVar1 >> 0x18);
        local_10[0] = (char)uVar1;
        local_10[1] = (char)(uVar1 >> 8);
        local_14 = (int)((unsigned int)(int)local_10[2] + (unsigned int)(int)local_10[3] +
                         (unsigned int)(int)local_10[0] + (unsigned int)(int)local_10[1] +
                         (unsigned int)*mem) % 0x3f1;
        __builtin_memcpy(local_10, &uVar1, 4);
        if (*(unsigned short **)(DAT_100ba7bc + local_14 * 4) == mem) {
            *(unsigned int *)(DAT_100ba7bc + local_14 * 4) = *(unsigned int *)(mem + 4);
        }
        else {
            for (local_8 = *(int *)(DAT_100ba7bc + local_14 * 4);
                 ((local_8 != 0 && (*(int *)(local_8 + 8) != 0)) &&
                  (*(unsigned short **)(local_8 + 8) != mem));
                 local_8 = *(int *)(local_8 + 8)) {
            }
            if ((local_8 == 0) || (*(int *)(local_8 + 8) == 0)) {
                FUN_100108a0(0x20, s_Freeing_bad_item__type___s_id____100ba7c4);
                if (mem == DAT_100c9054) {
                    FUN_1008607d();
                }
                if (DAT_100b0a08 == 0) {
                    return;
                }
                _sprintf(local_78, s_Freeing_bad_item__type___s_id____100ba7ec, local_10,
                         (unsigned int)*mem);
                FUN_1005be24(local_78, 1, 0x712, 100);
                return;
            }
            *(unsigned int *)(local_8 + 8) = *(unsigned int *)(*(int *)(local_8 + 8) + 8);
        }
        HeapFree(DAT_100adf74, 1, mem);
        DAT_100c9050 = (int)((unsigned int)DAT_100c9050 - 1u);
    }
    return;
}
