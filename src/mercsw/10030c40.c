/* SPDX-License-Identifier: MIT */
/* mercsw 10030c40 */
/* mercsw 10030c40: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined * __stdcall FUN_100305b5(void);
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);
int __cdecl FUN_1007d0a4(int param_1);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);

undefined4 __cdecl FUN_10030c40(int param_1, int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  (void)local_c;
  local_8 = 0xffffffff;
  if ((param_1 < 0x40) && (0 < param_1)) {
    switch(param_1) {
    case 1:
      if (param_2 == 0) {
        local_8 = 0xffffffff;
      }
      else {
        local_10 = (undefined4 *)FUN_100305b5();
        if (local_10 != (undefined4 *)0x0) {
          local_10[1] = param_1;
          local_10[2] = param_2;
          local_10[0xb] = 1000;
          local_8 = *local_10;
          local_c = param_2;
          piVar1 = (int *)local_10[0xc];
          iVar2 = piVar1[0x1b];
          local_10[5] = *(undefined4 *)(param_2 + 0x50);
          *(undefined4 *)(iVar2 + 0x34) = local_10[5];
          local_10[6] = *(undefined4 *)(param_2 + 0x74);
          *(undefined4 *)(iVar2 + 0x38) = local_10[6];
          local_10[7] = *(undefined4 *)(param_2 + 0x58);
          *(undefined4 *)(iVar2 + 0x3c) = local_10[7];
          *(undefined4 *)(iVar2 + 0x28) = 0;
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(iVar2 + 0x30) = 0;
          FUN_1002f783((int)piVar1);
          FUN_1002f37a((int)piVar1,local_10[5],local_10[6],local_10[7]);
          FUN_1002fbc0(piVar1);
        }
      }
      break;
    case 2:
      iVar2 = FUN_1007d0a4(-1);
      if ((iVar2 == 0) || (param_2 == 0)) {
        local_8 = 0xffffffff;
      }
      else {
        local_10 = (undefined4 *)FUN_100305b5();
        if (local_10 != (undefined4 *)0x0) {
          local_10[1] = param_1;
          local_10[2] = param_2;
          local_10[0xb] = 2000;
          local_8 = *local_10;
          FUN_1002f322(*(int *)(param_2 + 0x30),&local_14,&local_18,&local_1c);
          piVar1 = (int *)local_10[0xc];
          iVar2 = piVar1[0x1b];
          local_10[5] = local_14;
          *(undefined4 *)(iVar2 + 0x34) = local_10[5];
          local_10[6] = 0;
          *(undefined4 *)(iVar2 + 0x38) = local_10[6];
          local_10[7] = local_1c;
          *(undefined4 *)(iVar2 + 0x3c) = local_10[7];
          *(undefined4 *)(iVar2 + 0x28) = 0;
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(iVar2 + 0x30) = 0;
          FUN_1002f783((int)piVar1);
          FUN_1002f37a((int)piVar1,local_10[5],local_10[6],local_10[7]);
          FUN_1002fbc0(piVar1);
        }
      }
      break;
    case 3:
    case 4:
    case 5:
      break;
    case 6:
      iVar2 = FUN_1007d0a4(-1);
      if (iVar2 == 0) {
        local_8 = 0xffffffff;
      }
      else {
        local_10 = (undefined4 *)FUN_100305b5();
        if (local_10 != (undefined4 *)0x0) {
          local_10[1] = param_1;
          local_10[2] = 0;
          local_10[0xb] = 1;
          local_8 = *local_10;
          piVar1 = (int *)local_10[0xc];
          iVar2 = piVar1[0x1b];
          local_10[5] = 0;
          *(undefined4 *)(iVar2 + 0x34) = local_10[5];
          local_10[6] = 0;
          *(undefined4 *)(iVar2 + 0x38) = local_10[6];
          local_10[7] = 0;
          *(undefined4 *)(iVar2 + 0x3c) = local_10[7];
          *(undefined4 *)(iVar2 + 0x28) = 0;
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined4 *)(iVar2 + 0x30) = 0;
          FUN_1002f783((int)piVar1);
          FUN_1002fbc0(piVar1);
        }
      }
    }
  }
  else {
    local_8 = 0xffffffff;
  }
  return local_8;
}
