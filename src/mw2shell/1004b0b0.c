/* SPDX-License-Identifier: MIT */
/* mw2shell 1004b0b0 */
/* mw2shell 1004b0b0: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

void __cdecl FUN_1004b0b0(char * param_1, char * param_2)

{
  char *pcVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*param_2 != '\0') {
    do {
      if (*param_2 < '!') {
        if (!bVar2) {
          *param_1 = ' ';
          param_1 = param_1 + 1;
          bVar2 = true;
        }
      }
      else {
        *param_1 = *param_2;
        bVar2 = false;
        param_1 = param_1 + 1;
      }
      pcVar1 = param_2 + 1;
      param_2 = param_2 + 1;
    } while (*pcVar1 != '\0');
    *param_1 = '\0';
    return;
  }
  *param_1 = '\0';
  return;
}
