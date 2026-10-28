/* SPDX-License-Identifier: MIT */
/* mercsw 10071150 */
/* mercsw 10071150: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1ac;
extern undefined4 DAT_100ab318;
extern undefined4 DAT_100ab324;
extern undefined4 DAT_100ab330;
extern int DAT_100adf38;
extern undefined4 DAT_100b4838;
extern undefined DAT_100b4840[];
extern undefined DAT_100b4844[];
extern undefined DAT_100b484d[];
extern undefined DAT_100b4d68[];
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_100228e4(int param_1);
undefined4 __cdecl FUN_1000a970(int * param_1, char * param_2, uint param_3, char * param_4);
int * __cdecl FUN_100715a5(undefined4 * param_1);
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_1002fbc0(int * param_1);
undefined __cdecl FUN_1004fd60(int param_1);
undefined __cdecl FUN_10070b00(int param_1);
undefined __cdecl FUN_1001ee10(int param_1);
undefined __stdcall FUN_1005d029(void);

undefined4 __cdecl FUN_10071150(int param_1, int param_2, undefined4 param_3, undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *local_c;
  
  local_c = (int *)0x0;
  if ((-1 < param_1) && (param_1 < 0x3c)) {
    local_c = *(int **)(DAT_100eef40[param_1] + 0x20);
  }
  if (local_c == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(ushort *)(DAT_100eef40[param_1] + 0x14);
    if ((param_2 == 0) && (((uVar1 & 2) == 0 || ((uVar1 & 2) == 0)))) {
      uVar2 = 0;
    }
    else {
      local_c[0xb] = 0;
      local_c[10] = local_c[0xb];
      local_c[3] = 0;
      local_c[2] = local_c[3];
      local_c[0xf] = 0;
      local_c[0xe] = local_c[0xf];
      local_c[7] = 0;
      local_c[6] = local_c[7];
      *(undefined4 *)(*(int *)(*local_c + 0x4c) + 8) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x24) = 1;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x1c) = 1;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x18) = 1;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x1d) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x1e) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x1f) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x20) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x21) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x25) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x26) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x2e) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x2f) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x30) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x31) = 0;
      *(undefined1 *)(*(int *)(*local_c + 0x4c) + 0x43) = 0;
      local_c[0x100] = local_c[0x11a];
      DAT_100b4838 = param_1;
      FUN_100228e4((int)local_c);
      FUN_1000a970(local_c,(char *)(DAT_100b4844 + param_1 * 0x16),*(uint *)(DAT_100b4840 + param_1 * 0x16),
                   (char *)(DAT_100b484d + param_1 * 0x16));
      piVar3 = FUN_100715a5(*(undefined4 **)(DAT_100b4d68 + param_1 * 4));
      *(int **)(*local_c + 0x40) = piVar3;
      FUN_1002f783(*(int *)(*local_c + 0x40));
      FUN_1002fbc0(*(int **)(*local_c + 0x40));
      *(undefined4 *)(*local_c + 0x1c) = 0xffffffff;
      *(undefined4 *)(*local_c + 0xdc) = 0x1000;
      *(ushort *)(DAT_100eef40[param_1] + 0x14) = (uVar1 & 0xbff8) | 0x10;
      if (DAT_100aa1ac != 0) {
        FUN_1004fd60(param_1);
      }
      FUN_10070b00(*local_c);
      FUN_1001ee10(*local_c);
      *(undefined2 *)((int)local_c + 0x442) = 0;
      if (param_1 == DAT_100adf38) {
        FUN_1005d029();
        DAT_100ab318 = 0;
        DAT_100ab330 = 0;
        DAT_100ab324 = 0;
      }
      DAT_100b4838 = 0xffffffff;
      uVar2 = 1;
    }
  }
  return uVar2;
}
