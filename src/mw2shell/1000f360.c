/* SPDX-License-Identifier: MIT */
/* mw2shell 1000f360 */
void CloseSmackerSlot(int);

void __stdcall ApplyToAll32Slots(void)
{
    int iVar1;
    
    iVar1 = 0;
    do {
        CloseSmackerSlot(iVar1);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
    return;
}
