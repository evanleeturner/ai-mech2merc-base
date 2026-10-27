/* SPDX-License-Identifier: MIT */
/* mw2shell 1007e170 */
extern void (__stdcall *PTR_RtlUnwind_100d34e8)(void *, void *, void *, void *);

void __stdcall RtlUnwind(void *TargetFrame, void *TargetIp, void *ExceptionRecord, void *ReturnValue)
{
    PTR_RtlUnwind_100d34e8(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
    return;
}
