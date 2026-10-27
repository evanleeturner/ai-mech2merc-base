/* SPDX-License-Identifier: MIT */
/* mercswin 00405ac0 */
extern void *PTR_RtlUnwind_0040b1f0;

void __stdcall RtlUnwind(void *TargetFrame, void *TargetIp, void *ExceptionRecord, void *ReturnValue)
{
    ((void (__stdcall *)(void *, void *, void *, void *))PTR_RtlUnwind_0040b1f0)(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
    return;
}
