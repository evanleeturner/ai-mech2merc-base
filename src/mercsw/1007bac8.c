/* SPDX-License-Identifier: MIT */
/* mercsw 1007bac8 */
/* mercsw 1007bac8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b67f0[];
extern undefined * PTR_DAT_100af114;
extern undefined * PTR_DAT_100af11c;
extern undefined * PTR_DAT_100af120;
extern undefined * PTR_DAT_100af134;
extern undefined * PTR_DAT_100af13c;
extern undefined * PTR_DAT_100af144;
extern undefined * PTR_DAT_100af148;
extern undefined * PTR_DAT_100af14c;
extern undefined * PTR_DAT_100af150;
extern undefined * PTR_DAT_100af15c;
extern undefined * PTR_DAT_100af164;
extern undefined * PTR_DAT_100af168;
extern undefined * PTR_DAT_100af16c;
extern undefined * PTR_DAT_100af174;
extern undefined * PTR_DAT_100af178;

undefined * __cdecl FUN_1007bac8(undefined4 param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 1:
    puVar1 = PTR_DAT_100af15c;
    break;
  default:
    puVar1 = DAT_100b67f0;
    break;
  case 3:
    puVar1 = PTR_DAT_100af144;
    break;
  case 4:
    puVar1 = PTR_DAT_100af134;
    break;
  case 5:
    puVar1 = PTR_DAT_100af150;
    break;
  case 6:
    puVar1 = PTR_DAT_100af14c;
    break;
  case 7:
    puVar1 = PTR_DAT_100af148;
    break;
  case 8:
    puVar1 = PTR_DAT_100af164;
    break;
  case 10:
    puVar1 = PTR_DAT_100af114;
    break;
  case 0xb:
    puVar1 = PTR_DAT_100af168;
    break;
  case 0xc:
    puVar1 = PTR_DAT_100af120;
    break;
  case 0xd:
    puVar1 = PTR_DAT_100af13c;
    break;
  case 0xe:
    puVar1 = PTR_DAT_100af11c;
    break;
  case 0xf:
    puVar1 = PTR_DAT_100af16c;
    break;
  case 0x11:
    puVar1 = PTR_DAT_100af174;
    break;
  case 0x14:
    puVar1 = PTR_DAT_100af178;
  }
  return puVar1;
}
