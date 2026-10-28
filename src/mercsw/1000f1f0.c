/* SPDX-License-Identifier: MIT */
/* mercsw 1000f1f0 */
/* mercsw 1000f1f0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char DAT_100a9d6c[];
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100af17c;
extern undefined4 DAT_100b2ce8;
extern undefined DAT_100eebbe;
extern undefined4 DAT_100eef40[];
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b8;
extern char s__s__d_100a9d70[];
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
int __cdecl _sprintf(char * _Dest, char * _Format, ...);
undefined __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);
undefined __cdecl FUN_10066609(int * param_1, int param_2);

void __cdecl FUN_1000f1f0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int local_50;
  byte local_48 [64];
  int local_8;
  
  if ((-1 < *(int *)(param_1 + 0xc)) && (DAT_100b2ce8 != 0)) {
    iVar1 = *(int *)(DAT_100eef40[DAT_100adf38] + 0x20);
    local_8 = *(int *)(param_1 + 0xc) * 0x40 + *(int *)(iVar1 + 0x54);
    if (-1 < *(int *)(local_8 + 4)) {
      switch(*(undefined4 *)(local_8 + 8)) {
      case 0:
        local_50 = 0xb;
        break;
      case 1:
        switch(*(undefined4 *)(local_8 + 0xc)) {
        case 0:
          local_50 = 0xe;
          break;
        case 1:
          local_50 = 0xfe;
          break;
        case 2:
          local_50 = 3;
          break;
        case 3:
          local_50 = 5;
          break;
        case 4:
          local_50 = 7;
        }
        break;
      case 2:
        local_50 = 0xe;
        break;
      case 0xffffffff:
        local_50 = 8;
        break;
      default:
        local_50 = 0xb;
      }
      puVar2 = FUN_1008668b(DAT_100af17c,DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8);
      if (puVar2 != (ushort *)0x0) {
        DAT_100eebbe = (undefined1)local_50;
        if (*(int *)(local_8 + 0x20) == 9999) {
          _sprintf((char *)local_48,DAT_100a9d6c,param_1 + 0x10);
          FUN_1005acaa(*(int **)(param_1 + 0xa4),**(int **)(param_1 + 0xa8),
                       *(int *)(*(int *)(param_1 + 0xa8) + 4),(int)puVar2,local_48,0x100eebb0);
        }
        else {
          _sprintf((char *)local_48,s__s__d_100a9d70,param_1 + 0x10,
                   *(undefined4 *)(iVar1 + 0x66 + *(int *)(local_8 + 0x20) * 0x3a));
          FUN_1005acaa(*(int **)(param_1 + 0xa4),**(int **)(param_1 + 0xa8),
                       *(int *)(*(int *)(param_1 + 0xa8) + 4),(int)puVar2,local_48,0x100eebb0);
        }
        DAT_100eebbe = 0xe;
        FUN_1008664f(DAT_101686f0 + 1,(int *)PTR_DAT_100af0b8);
      }
      if (*(int *)(param_1 + 0xc) == *(int *)(iVar1 + 0x3e0)) {
        FUN_10066609(*(int **)(param_1 + 0xa4),local_50);
      }
    }
  }
  return;
}
