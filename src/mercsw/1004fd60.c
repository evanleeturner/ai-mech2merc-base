/* SPDX-License-Identifier: MIT */
/* mercsw 1004fd60 */
/* mercsw 1004fd60: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_10123120;
extern undefined DAT_10123240[];
extern undefined DAT_10123244[];
extern undefined DAT_10123248[];
extern undefined DAT_10123278[];
extern undefined DAT_101232ee[];

void __cdecl FUN_1004fd60(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int local_c;
  
  DAT_10123120 = DAT_100b38fc / 0xb5;
  iVar1 = param_1 * 0x3c0a;
  piVar2 = (int *)(DAT_10123240 + iVar1);
  for (local_c = 0; local_c < *piVar2; local_c = local_c + 1) {
    pcVar3 = (char *)((int)piVar2 + local_c * 0x13f + 0x3a);
    if ((*(int *)((int)piVar2 + local_c * 0x13f + 0x3c) == 0x40000) && (*pcVar3 == '\x05')) {
      if ((DAT_101232ee)
          [*(short *)((int)piVar2 + local_c * 0x13f + 0xe3) * 0x3c0a +
           *(short *)((int)piVar2 + local_c * 0x13f + 0xe5) * 0x13f] == '\0') {
        (DAT_101232ee)
        [*(short *)((int)piVar2 + local_c * 0x13f + 0xe3) * 0x3c0a +
         *(short *)((int)piVar2 + local_c * 0x13f + 0xe5) * 0x13f] = 1;
      }
      else {
        (DAT_101232ee)
        [*(short *)((int)piVar2 + local_c * 0x13f + 0xe3) * 0x3c0a +
         *(short *)((int)piVar2 + local_c * 0x13f + 0xe5) * 0x13f] = 0;
      }
    }
    *pcVar3 = '\x03';
    *(undefined4 *)((int)piVar2 + local_c * 0x13f + 0xa1) = 0xffffffff;
    *(undefined4 *)((int)piVar2 + local_c * 0x13f + 0xa5) = 0xffffffff;
  }
  DAT_10123278[iVar1] = 0;
  *(int *)(DAT_10123244 + iVar1) = DAT_10123120;
  *(undefined4 *)(DAT_10123248 + iVar1) = 0xffffffff;
  return;
}
