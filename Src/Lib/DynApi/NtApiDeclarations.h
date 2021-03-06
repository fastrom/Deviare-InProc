/*
 * Copyright (C) 2010-2014 Nektra S.A., Buenos Aires, Argentina.
 * All rights reserved. Contact: http://www.nektra.com
 *
 *
 * This file is part of Deviare In-Proc
 *
 *
 * Commercial License Usage
 * ------------------------
 * Licensees holding valid commercial Deviare In-Proc licenses may use this
 * file in accordance with the commercial license agreement provided with the
 * Software or, alternatively, in accordance with the terms contained in
 * a written agreement between you and Nektra.  For licensing terms and
 * conditions see http://www.nektra.com/licensing/.  For further information
 * use the contact form at http://www.nektra.com/contact/.
 *
 *
 * GNU General Public License Usage
 * --------------------------------
 * Alternatively, this file may be used under the terms of the GNU
 * General Public License version 3.0 as published by the Free Software
 * Foundation and appearing in the file LICENSE.GPL included in the
 * packaging of this file.  Please review the following information to
 * ensure the GNU General Public License version 3.0 requirements will be
 * met: http://www.gnu.org/copyleft/gpl.html.
 *
 **/

NKT_PARSE_NTAPI_NTSTATUS(NtOpenProcess, (__out PHANDLE ProcessHandle, __in ACCESS_MASK DesiredAccess,
                                         __in POBJECT_ATTRIBUTES ObjectAttributes, __in_opt PVOID ClientId),
                  (ProcessHandle, DesiredAccess, ObjectAttributes, ClientId))

NKT_PARSE_NTAPI_NTSTATUS(NtOpenThread, (__out PHANDLE ThreadHandle, __in ACCESS_MASK DesiredAccess,
                                        __in POBJECT_ATTRIBUTES ObjectAttributes, __in_opt PVOID ClientId),
                  (ThreadHandle, DesiredAccess, ObjectAttributes, ClientId))

NKT_PARSE_NTAPI_NTSTATUS(NtOpenProcessToken, (__in HANDLE ProcessHandle, __in ACCESS_MASK DesiredAccess,
                                              __out PHANDLE TokenHandle),
                         (ProcessHandle, DesiredAccess, TokenHandle))
NKT_PARSE_NTAPI_NTSTATUS(NtOpenThreadToken, (__in HANDLE ThreadHandle, __in ACCESS_MASK DesiredAccess,
                                             __in BOOLEAN OpenAsSelf, __out PHANDLE TokenHandle),
                         (ThreadHandle, DesiredAccess, OpenAsSelf, TokenHandle))

//--------

NKT_PARSE_NTAPI_NTSTATUS(NtGetContextThread, (__in HANDLE ThreadHandle, __out PCONTEXT Context),
                         (ThreadHandle, Context))
NKT_PARSE_NTAPI_NTSTATUS(NtSetContextThread, (__in HANDLE ThreadHandle, __in PCONTEXT Context),
                         (ThreadHandle, Context))

//--------

NKT_PARSE_NTAPI_NTSTATUS(NtCreateEvent, (__out PHANDLE EventHandle, __in ACCESS_MASK DesiredAccess,
                                         __in_opt POBJECT_ATTRIBUTES ObjectAttributes, __in ULONG EventType,
                                         __in BOOLEAN InitialState),
                         (EventHandle, DesiredAccess, ObjectAttributes, EventType, InitialState))
NKT_PARSE_NTAPI_NTSTATUS(NtOpenEvent, (__out PHANDLE EventHandle, __in ACCESS_MASK DesiredAccess,
                                       __in POBJECT_ATTRIBUTES ObjectAttributes),
                         (EventHandle, DesiredAccess, ObjectAttributes))
NKT_PARSE_NTAPI_NTSTATUS(NtResetEvent, (__in HANDLE EventHandle, __out_opt PLONG NumberOfWaitingThreads),
                         (EventHandle, NumberOfWaitingThreads))
NKT_PARSE_NTAPI_NTSTATUS(NtSetEvent, (__in HANDLE EventHandle, __out_opt PLONG NumberOfWaitingThreads),
                         (EventHandle, NumberOfWaitingThreads))

//--------

NKT_PARSE_NTAPI_NTSTATUS(NtClose, (__in HANDLE Handle), (Handle))

//--------

NKT_PARSE_NTAPI_NTSTATUS(NtDelayExecution, (__in BOOLEAN Alertable, __in PLARGE_INTEGER DelayInterval),
                         (Alertable, DelayInterval))
NKT_PARSE_NTAPI_NTSTATUS(NtYieldExecution, (), ())

//--------

NKT_PARSE_NTAPI_NTSTATUS(RtlInitializeCriticalSection, (__in RTL_CRITICAL_SECTION* crit), (crit))
NKT_PARSE_NTAPI_NTSTATUS(RtlDeleteCriticalSection, (__in RTL_CRITICAL_SECTION* crit), (crit))
NKT_PARSE_NTAPI_NTSTATUS(RtlEnterCriticalSection, (__in RTL_CRITICAL_SECTION* crit), (crit))
NKT_PARSE_NTAPI_NTSTATUS(RtlLeaveCriticalSection, (__in RTL_CRITICAL_SECTION* crit), (crit))

//--------

NKT_PARSE_NTAPI_NTSTATUS(RtlGetNativeSystemInformation, (__in SYSTEM_INFORMATION_CLASS SystemInformationClass,
                                                    __inout PVOID SystemInformation, __in ULONG SystemInformationLength,
                                                    __out_opt PULONG ReturnLength),
                         (SystemInformationClass, SystemInformation, SystemInformationLength, ReturnLength))
NKT_PARSE_NTAPI_NTSTATUS(NtQuerySystemInformation, (__in SYSTEM_INFORMATION_CLASS SystemInformationClass,
                                                    __inout PVOID SystemInformation, __in ULONG SystemInformationLength,
                                                    __out_opt PULONG ReturnLength),
                         (SystemInformationClass, SystemInformation, SystemInformationLength, ReturnLength))

NKT_PARSE_NTAPI_NTSTATUS(NtQueryInformationProcess, (__in HANDLE Process, __in PROCESSINFOCLASS ProcessInfoClass,
                                                     __out_opt PVOID ProcessInfo, __in ULONG ProcessInfoLength,
                                                     __out_opt PULONG ReturnLength),
                         (Process, ProcessInfoClass, ProcessInfo, ProcessInfoLength, ReturnLength))

NKT_PARSE_NTAPI_NTSTATUS(NtQueryInformationThread, (__in HANDLE ThreadHandle, __in THREADINFOCLASS ThreadInfoClass,
                                                    __out_opt PVOID ThreadInfo, __in ULONG ThreadInfoLength,
                                                    __out_opt PULONG ReturnLength),
                         (ThreadHandle, ThreadInfoClass, ThreadInfo, ThreadInfoLength, ReturnLength))

//--------

NKT_PARSE_NTAPI_NTSTATUS(NtWaitForSingleObject, (__in HANDLE Handle, __in BOOLEAN Alertable,
                                                 __in_opt PLARGE_INTEGER Timeout),
                         (Handle, Alertable, Timeout))
NKT_PARSE_NTAPI_NTSTATUS(NtAllocateVirtualMemory, (__in HANDLE ProcessHandle, __inout PVOID *BaseAddress,
                                                   __in ULONG_PTR ZeroBits, __inout PSIZE_T RegionSize,
                                                   __in ULONG AllocationType, __in ULONG Protect),
                         (ProcessHandle, BaseAddress, ZeroBits, RegionSize, AllocationType, Protect))
NKT_PARSE_NTAPI_NTSTATUS(NtFreeVirtualMemory, (__in HANDLE ProcessHandle, __inout PVOID *BaseAddress,
                                               __inout PSIZE_T RegionSize, __in ULONG FreeType),
                         (ProcessHandle, BaseAddress, RegionSize, FreeType))
NKT_PARSE_NTAPI_NTSTATUS(NtFlushVirtualMemory, (__in HANDLE ProcessHandle, __inout PVOID *BaseAddress,
                                                __inout PSIZE_T RegionSize, __out PIO_STATUS_BLOCK IoStatus),
                         (ProcessHandle, BaseAddress, RegionSize, IoStatus))
NKT_PARSE_NTAPI_NTSTATUS(NtReadVirtualMemory, (__in HANDLE ProcessHandle, __in PVOID BaseAddress,
                                               __out PVOID Buffer, __in SIZE_T NumberOfBytesToRead,
                                               __out_opt PSIZE_T NumberOfBytesRead),
                         (ProcessHandle, BaseAddress, Buffer, NumberOfBytesToRead, NumberOfBytesRead))
NKT_PARSE_NTAPI_NTSTATUS(NtWriteVirtualMemory, (__in HANDLE ProcessHandle, __in PVOID BaseAddress,
                                                __out PVOID Buffer, __in SIZE_T NumberOfBytesToRead,
                                                __out_opt PSIZE_T NumberOfBytesRead),
                         (ProcessHandle, BaseAddress, Buffer, NumberOfBytesToRead, NumberOfBytesRead))
NKT_PARSE_NTAPI_NTSTATUS(NtQueryVirtualMemory, (__in HANDLE ProcessHandle, __in PVOID Address,
                                                __in NKT_HK_VIRTUALMEMORYINFORMATIONCLASS VirtualMemoryInformationClass,
                                                __out PVOID VirtualMemoryInformation, __in SIZE_T Length,
                                                __out_opt PSIZE_T ResultLength),
                         (ProcessHandle, Address, VirtualMemoryInformationClass, VirtualMemoryInformation, Length,
                          ResultLength))
NKT_PARSE_NTAPI_NTSTATUS(NtProtectVirtualMemory, (__in HANDLE ProcessHandle, __inout PVOID *UnsafeBaseAddress,
                                                  __inout SIZE_T *UnsafeNumberOfBytesToProtect,
                                                  __in ULONG NewAccessProtection,
                                                  __out PULONG UnsafeOldAccessProtection),
                         (ProcessHandle, UnsafeBaseAddress, UnsafeNumberOfBytesToProtect, NewAccessProtection,
                          UnsafeOldAccessProtection))

//--------

NKT_PARSE_NTAPI_NTSTATUS(NtSuspendThread, (__in HANDLE ThreadHandle, __out_opt PULONG PreviousSuspendCount),
                         (ThreadHandle, PreviousSuspendCount))
NKT_PARSE_NTAPI_NTSTATUS(NtResumeThread, (__in HANDLE ThreadHandle, __out_opt PULONG SuspendCount),
                         (ThreadHandle, SuspendCount))

//--------

NKT_PARSE_NTAPI_NTSTATUS(NtSetInformationThread, (__in HANDLE ThreadHandle, __in THREADINFOCLASS ThreadInformationClass,
                                                  __in PVOID ThreadInformation, __in ULONG ThreadInformationLength),
                         (ThreadHandle, ThreadInformationClass, ThreadInformation, ThreadInformationLength))

NKT_PARSE_NTAPI_NTSTATUS(RtlImpersonateSelf, (__in SECURITY_IMPERSONATION_LEVEL ImpersonationLevel),
                         (ImpersonationLevel))

NKT_PARSE_NTAPI_NTSTATUS(NtAdjustPrivilegesToken, (__in HANDLE TokenHandle, __in BOOLEAN DisableAllPrivileges,
                                                   __in_opt PTOKEN_PRIVILEGES NewState, __in ULONG BufferLength,
                                                   __out PTOKEN_PRIVILEGES PreviousState,
                                                   __out_opt PULONG ReturnLength),
                         (TokenHandle, DisableAllPrivileges, NewState, BufferLength, PreviousState, ReturnLength))

NKT_PARSE_NTAPI_VOID(RtlRaiseException, (__in PEXCEPTION_RECORD ExceptionRecord), (ExceptionRecord))

NKT_PARSE_NTAPI_ULONG(RtlNtStatusToDosError, (__in NTSTATUS Status), (Status))

NKT_PARSE_NTAPI_NTSTATUS(NtFlushInstructionCache, (__in HANDLE ProcessHandle, __in PVOID BaseAddress,
                                                   __in ULONG NumberOfBytesToFlush),
                         (ProcessHandle, BaseAddress, NumberOfBytesToFlush))

//--------

NKT_PARSE_NTAPI_PVOID(RtlAllocateHeap, (__in PVOID HeapHandle, __in_opt ULONG Flags, __in SIZE_T Size),
                      (HeapHandle, Flags, Size))
NKT_PARSE_NTAPI_BOOLEAN(RtlFreeHeap, (__in PVOID HeapHandle, __in_opt ULONG Flags, __in PVOID HeapBase),
                        (HeapHandle, Flags, HeapBase))

//--------

NKT_PARSE_NTAPI_VOID(RtlUnwind, (__in_opt PVOID TargetFrame, __in_opt PVOID TargetIp,
                                 __in_opt PEXCEPTION_RECORD ExceptionRecord, __in PVOID ReturnValue),
                     (TargetFrame, TargetIp, ExceptionRecord, ReturnValue))
NKT_PARSE_NTAPI_VOID(RtlUnwindEx, (__in ULONGLONG TargetFrame, __in ULONGLONG TargetIp,
                                   __in_opt PEXCEPTION_RECORD ExceptionRecord, __in PVOID ReturnValue,
                                   __in PCONTEXT OriginalContext, __in_opt PVOID HistoryTable),
                     (TargetFrame, TargetIp, ExceptionRecord, ReturnValue, OriginalContext, HistoryTable))

//--------

NKT_PARSE_NTAPI_NTSTATUS(RtlGetVersion, (__inout PRTL_OSVERSIONINFOW lpVersionInformation), (lpVersionInformation))
