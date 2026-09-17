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

// Function: sub_0011B048
// Address: 0x11b048 - 0x11b128
void sub_0011B048_0x11b048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B048_0x11b048");
#endif

    switch (ctx->pc) {
        case 0x11b050u: goto label_11b050;
        case 0x11b058u: goto label_11b058;
        case 0x11b07cu: goto label_11b07c;
        case 0x11b090u: goto label_11b090;
        case 0x11b0a0u: goto label_11b0a0;
        case 0x11b0b0u: goto label_11b0b0;
        case 0x11b0c0u: goto label_11b0c0;
        case 0x11b0d0u: goto label_11b0d0;
        case 0x11b0e0u: goto label_11b0e0;
        case 0x11b0e8u: goto label_11b0e8;
        case 0x11b0f8u: goto label_11b0f8;
        case 0x11b10cu: goto label_11b10c;
        case 0x11b11cu: goto label_11b11c;
        default: break;
    }

    ctx->pc = 0x11b048u;

label_11b048:
    // 0x11b048: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x11b048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x11b04c: 0xc  syscall     0
    ctx->pc = 0x11b04cu;
    ctx->pc = 0x11B050u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b050:
    // 0x11b050: 0x3e00008  jr          $ra
    ctx->pc = 0x11B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B058u;
label_11b058:
    // 0x11b058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b05c: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x11b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x11b060: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x11b060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x11b064: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B064u;
    {
        const bool branch_taken_0x11b064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B064u;
        // 0x11b068: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b064) {
            ctx->pc = 0x11B074u;
            goto label_11b074;
        }
    }
    ctx->pc = 0x11B06Cu;
    // 0x11b06c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B06Cu;
    {
        const bool branch_taken_0x11b06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B06Cu;
        // 0x11b070: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b06c) {
            ctx->pc = 0x11B07Cu;
            goto label_11b07c;
        }
    }
    ctx->pc = 0x11B074u;
label_11b074:
    // 0x11b074: 0xc046c12  jal         func_11B048
    ctx->pc = 0x11B074u;
    SET_GPR_U32(ctx, 31, 0x11B07Cu);
    ctx->pc = 0x11B048u;
    goto label_11b048;
    ctx->pc = 0x11B07Cu;
label_11b07c:
    // 0x11b07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b080: 0x3e00008  jr          $ra
    ctx->pc = 0x11B080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B080u;
        // 0x11b084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B088u;
    // 0x11b088: 0x2403ffaa  addiu       $v1, $zero, -0x56
    ctx->pc = 0x11b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x11b08c: 0xc  syscall     0
    ctx->pc = 0x11b08cu;
    ctx->pc = 0x11B090u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b090:
    // 0x11b090: 0x3e00008  jr          $ra
    ctx->pc = 0x11B090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B098u;
    // 0x11b098: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x11b098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x11b09c: 0xc  syscall     0
    ctx->pc = 0x11b09cu;
    ctx->pc = 0x11B0A0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b0a0:
    // 0x11b0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B0A8u;
    // 0x11b0a8: 0x2403ffa9  addiu       $v1, $zero, -0x57
    ctx->pc = 0x11b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967209));
    // 0x11b0ac: 0xc  syscall     0
    ctx->pc = 0x11b0acu;
    ctx->pc = 0x11B0B0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b0b0:
    // 0x11b0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B0B8u;
    // 0x11b0b8: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x11b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x11b0bc: 0xc  syscall     0
    ctx->pc = 0x11b0bcu;
    ctx->pc = 0x11B0C0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b0c0:
    // 0x11b0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B0C8u;
    // 0x11b0c8: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x11b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x11b0cc: 0xc  syscall     0
    ctx->pc = 0x11b0ccu;
    ctx->pc = 0x11B0D0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b0d0:
    // 0x11b0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B0D8u;
    // 0x11b0d8: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x11b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x11b0dc: 0xc  syscall     0
    ctx->pc = 0x11b0dcu;
    ctx->pc = 0x11B0E0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_11b0e0:
    // 0x11b0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B0E8u;
label_11b0e8:
    // 0x11b0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b0ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b0f0: 0xc043e00  jal         func_10F800
    ctx->pc = 0x11B0F0u;
    SET_GPR_U32(ctx, 31, 0x11B0F8u);
    ctx->pc = 0x10F800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F800u, 0x11B0F0u, 0x11B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0F8u;
label_11b0f8:
    // 0x11b0f8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x11b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x11b0fc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B0FCu;
    {
        const bool branch_taken_0x11b0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11b0fc) {
            ctx->pc = 0x11B114u;
            goto label_11b114;
        }
    }
    ctx->pc = 0x11B104u;
    // 0x11b104: 0xc046c4a  jal         func_11B128
    ctx->pc = 0x11B104u;
    SET_GPR_U32(ctx, 31, 0x11B10Cu);
    ctx->pc = 0x11B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B128u, 0x11B104u, 0x11B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B10Cu;
label_11b10c:
    // 0x11b10c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11B10Cu;
    {
        const bool branch_taken_0x11b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B10Cu;
        // 0x11b110: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b10c) {
            ctx->pc = 0x11B120u;
            goto label_11b120;
        }
    }
    ctx->pc = 0x11B114u;
label_11b114:
    // 0x11b114: 0xc043e04  jal         func_10F810
    ctx->pc = 0x11B114u;
    SET_GPR_U32(ctx, 31, 0x11B11Cu);
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x11B114u, 0x11B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B11Cu;
label_11b11c:
    // 0x11b11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b120:
    // 0x11b120: 0x3e00008  jr          $ra
    ctx->pc = 0x11B120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B120u;
        // 0x11b124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B128u;
}
