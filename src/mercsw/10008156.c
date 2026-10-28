/* SPDX-License-Identifier: MIT */
/* mercsw 10008156 */
/* mercsw 10008156: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a5058[];
extern undefined DAT_100a5080[];
undefined __cdecl FUN_10007f49(int param_1, int param_2);
bool __cdecl FUN_10007440(int * param_1, int * param_2, int param_3);

void __cdecl FUN_10008156(int param_1, int param_2)

{
  int *local_8;
  
  if (((-1 < param_2) && (param_1 != -1)) && (param_1 < 0xb)) {
    if (param_2 == -1) {
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)(DAT_100a5058 + param_2 * 0xc);
    }
    switch(param_1) {
    case 1:
      FUN_10007f49(param_2,2);
      break;
    case 2:
      FUN_10007f49(param_2,4);
      break;
    case 3:
      FUN_10007f49(param_2,3);
      break;
    case 4:
      FUN_10007f49(param_2,5);
      break;
    case 5:
      FUN_10007f49(param_2,6);
      break;
    case 6:
      FUN_10007f49(param_2,7);
      break;
    default:
      FUN_10007440(local_8,(int *)(DAT_100a5080 + param_1 * 0xc),-1);
      break;
    case 9:
      FUN_10007f49(param_2,1);
      break;
    case 10: ;
    }
  }
  return;
}
