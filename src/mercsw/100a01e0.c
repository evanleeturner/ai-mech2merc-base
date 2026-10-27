/* SPDX-License-Identifier: MIT */
/* mercsw 100a01e0 */
extern void (__stdcall *PTR_RtlUnwind_1021a498)(void *, void *, void *, void *);

void __stdcall RtlUnwind(void *TargetFrame, void *TargetIp, void *ExceptionRecord, void *ReturnValue)
{
  PTR_RtlUnwind_1021a498(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
  return;
}
