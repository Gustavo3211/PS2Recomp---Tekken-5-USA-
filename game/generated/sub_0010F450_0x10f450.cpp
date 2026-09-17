#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010F450
// Address: 0x10f450 - 0x10f620
void sub_0010F450_0x10f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F450_0x10f450");
#endif

    switch (ctx->pc) {
        case 0x10f458u: goto label_10f458;
        case 0x10f468u: goto label_10f468;
        case 0x10f478u: goto label_10f478;
        case 0x10f488u: goto label_10f488;
        case 0x10f498u: goto label_10f498;
        case 0x10f4a8u: goto label_10f4a8;
        case 0x10f4b8u: goto label_10f4b8;
        case 0x10f4c8u: goto label_10f4c8;
        case 0x10f4d8u: goto label_10f4d8;
        case 0x10f4e8u: goto label_10f4e8;
        case 0x10f4f8u: goto label_10f4f8;
        case 0x10f508u: goto label_10f508;
        case 0x10f518u: goto label_10f518;
        case 0x10f528u: goto label_10f528;
        case 0x10f538u: goto label_10f538;
        case 0x10f548u: goto label_10f548;
        case 0x10f558u: goto label_10f558;
        case 0x10f568u: goto label_10f568;
        case 0x10f578u: goto label_10f578;
        case 0x10f588u: goto label_10f588;
        case 0x10f598u: goto label_10f598;
        case 0x10f5a8u: goto label_10f5a8;
        case 0x10f5b8u: goto label_10f5b8;
        case 0x10f5c8u: goto label_10f5c8;
        case 0x10f5d8u: goto label_10f5d8;
        case 0x10f5e8u: goto label_10f5e8;
        case 0x10f5f8u: goto label_10f5f8;
        case 0x10f608u: goto label_10f608;
        case 0x10f618u: goto label_10f618;
        default: break;
    }

    ctx->pc = 0x10f450u;

    // 0x10f450: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x10f450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x10f454: 0xc  syscall     0
    ctx->pc = 0x10f454u;
    ctx->pc = 0x10F458u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f458:
    // 0x10f458: 0x3e00008  jr          $ra
    ctx->pc = 0x10F458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F460u;
    // 0x10f460: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x10f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x10f464: 0xc  syscall     0
    ctx->pc = 0x10f464u;
    ctx->pc = 0x10F468u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f468:
    // 0x10f468: 0x3e00008  jr          $ra
    ctx->pc = 0x10F468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F470u;
    // 0x10f470: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x10f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x10f474: 0xc  syscall     0
    ctx->pc = 0x10f474u;
    ctx->pc = 0x10F478u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f478:
    // 0x10f478: 0x3e00008  jr          $ra
    ctx->pc = 0x10F478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F480u;
    // 0x10f480: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x10f480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x10f484: 0xc  syscall     0
    ctx->pc = 0x10f484u;
    ctx->pc = 0x10F488u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f488:
    // 0x10f488: 0x3e00008  jr          $ra
    ctx->pc = 0x10F488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F490u;
    // 0x10f490: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x10f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x10f494: 0xc  syscall     0
    ctx->pc = 0x10f494u;
    ctx->pc = 0x10F498u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f498:
    // 0x10f498: 0x3e00008  jr          $ra
    ctx->pc = 0x10F498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4A0u;
    // 0x10f4a0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x10f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x10f4a4: 0xc  syscall     0
    ctx->pc = 0x10f4a4u;
    ctx->pc = 0x10F4A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f4a8:
    // 0x10f4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4B0u;
    // 0x10f4b0: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x10f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x10f4b4: 0xc  syscall     0
    ctx->pc = 0x10f4b4u;
    ctx->pc = 0x10F4B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f4b8:
    // 0x10f4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4C0u;
    // 0x10f4c0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x10f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x10f4c4: 0xc  syscall     0
    ctx->pc = 0x10f4c4u;
    ctx->pc = 0x10F4C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f4c8:
    // 0x10f4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4D0u;
    // 0x10f4d0: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x10f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x10f4d4: 0xc  syscall     0
    ctx->pc = 0x10f4d4u;
    ctx->pc = 0x10F4D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f4d8:
    // 0x10f4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4E0u;
    // 0x10f4e0: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x10f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x10f4e4: 0xc  syscall     0
    ctx->pc = 0x10f4e4u;
    ctx->pc = 0x10F4E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f4e8:
    // 0x10f4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F4F0u;
    // 0x10f4f0: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x10f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x10f4f4: 0xc  syscall     0
    ctx->pc = 0x10f4f4u;
    ctx->pc = 0x10F4F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f4f8:
    // 0x10f4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F500u;
    // 0x10f500: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x10f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x10f504: 0xc  syscall     0
    ctx->pc = 0x10f504u;
    ctx->pc = 0x10F508u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f508:
    // 0x10f508: 0x3e00008  jr          $ra
    ctx->pc = 0x10F508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F510u;
    // 0x10f510: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x10f510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x10f514: 0xc  syscall     0
    ctx->pc = 0x10f514u;
    ctx->pc = 0x10F518u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f518:
    // 0x10f518: 0x3e00008  jr          $ra
    ctx->pc = 0x10F518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F520u;
    // 0x10f520: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x10f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x10f524: 0xc  syscall     0
    ctx->pc = 0x10f524u;
    ctx->pc = 0x10F528u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f528:
    // 0x10f528: 0x3e00008  jr          $ra
    ctx->pc = 0x10F528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F530u;
    // 0x10f530: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x10f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x10f534: 0xc  syscall     0
    ctx->pc = 0x10f534u;
    ctx->pc = 0x10F538u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f538:
    // 0x10f538: 0x3e00008  jr          $ra
    ctx->pc = 0x10F538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F540u;
    // 0x10f540: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x10f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x10f544: 0xc  syscall     0
    ctx->pc = 0x10f544u;
    ctx->pc = 0x10F548u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f548:
    // 0x10f548: 0x3e00008  jr          $ra
    ctx->pc = 0x10F548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F550u;
    // 0x10f550: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x10f550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x10f554: 0xc  syscall     0
    ctx->pc = 0x10f554u;
    ctx->pc = 0x10F558u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f558:
    // 0x10f558: 0x3e00008  jr          $ra
    ctx->pc = 0x10F558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F560u;
    // 0x10f560: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x10f560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x10f564: 0xc  syscall     0
    ctx->pc = 0x10f564u;
    ctx->pc = 0x10F568u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f568:
    // 0x10f568: 0x3e00008  jr          $ra
    ctx->pc = 0x10F568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F570u;
    // 0x10f570: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x10f570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x10f574: 0xc  syscall     0
    ctx->pc = 0x10f574u;
    ctx->pc = 0x10F578u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f578:
    // 0x10f578: 0x3e00008  jr          $ra
    ctx->pc = 0x10F578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F580u;
    // 0x10f580: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x10f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x10f584: 0xc  syscall     0
    ctx->pc = 0x10f584u;
    ctx->pc = 0x10F588u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f588:
    // 0x10f588: 0x3e00008  jr          $ra
    ctx->pc = 0x10F588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F590u;
    // 0x10f590: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x10f590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x10f594: 0xc  syscall     0
    ctx->pc = 0x10f594u;
    ctx->pc = 0x10F598u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f598:
    // 0x10f598: 0x3e00008  jr          $ra
    ctx->pc = 0x10F598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5A0u;
    // 0x10f5a0: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x10f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x10f5a4: 0xc  syscall     0
    ctx->pc = 0x10f5a4u;
    ctx->pc = 0x10F5A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f5a8:
    // 0x10f5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5B0u;
    // 0x10f5b0: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x10f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x10f5b4: 0xc  syscall     0
    ctx->pc = 0x10f5b4u;
    ctx->pc = 0x10F5B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f5b8:
    // 0x10f5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5C0u;
    // 0x10f5c0: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x10f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x10f5c4: 0xc  syscall     0
    ctx->pc = 0x10f5c4u;
    ctx->pc = 0x10F5C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f5c8:
    // 0x10f5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5D0u;
    // 0x10f5d0: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x10f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x10f5d4: 0xc  syscall     0
    ctx->pc = 0x10f5d4u;
    ctx->pc = 0x10F5D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f5d8:
    // 0x10f5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5E0u;
    // 0x10f5e0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x10f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x10f5e4: 0xc  syscall     0
    ctx->pc = 0x10f5e4u;
    ctx->pc = 0x10F5E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f5e8:
    // 0x10f5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F5F0u;
    // 0x10f5f0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x10f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x10f5f4: 0xc  syscall     0
    ctx->pc = 0x10f5f4u;
    ctx->pc = 0x10F5F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f5f8:
    // 0x10f5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10F5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F600u;
    // 0x10f600: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x10f600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x10f604: 0xc  syscall     0
    ctx->pc = 0x10f604u;
    ctx->pc = 0x10F608u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f608:
    // 0x10f608: 0x3e00008  jr          $ra
    ctx->pc = 0x10F608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F610u;
    // 0x10f610: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x10f610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x10f614: 0xc  syscall     0
    ctx->pc = 0x10f614u;
    ctx->pc = 0x10F618u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10f618:
    // 0x10f618: 0x3e00008  jr          $ra
    ctx->pc = 0x10F618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F620u;
}
