/* SPDX-License-Identifier: MIT */
/* mercsw 1004726c */
extern void *DAT_100b0574;
extern void *DAT_100adf74;
extern int DAT_10160be8;

extern void __stdcall HeapFree(void *hHeap, unsigned long dwFlags, void *lpMem);

void __stdcall FUN_1004726c(void)
{
    void *pNode;
    void *pNext;

    pNode = DAT_100b0574;
    while (pNode != NULL) {
        pNext = *(void **)pNode;
        HeapFree(DAT_100adf74, 1, pNode);
        pNode = pNext;
    }
    DAT_100b0574 = NULL;
    DAT_10160be8 = 0;
    return;
}
