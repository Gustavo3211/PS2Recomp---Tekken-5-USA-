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

// Function: sub_00345370
// Address: 0x345370 - 0x3453a8
void sub_00345370_0x345370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345370_0x345370");
#endif

    switch (ctx->pc) {
        case 0x345398u: goto label_345398;
        default: break;
    }

    ctx->pc = 0x345370u;

    // 0x345370: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x345370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345374: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34537c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x345380: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x345380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x345384: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x345384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x345388: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x345388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x34538c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34538cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345390: 0xc0d2382  jal         func_348E08
    ctx->pc = 0x345390u;
    SET_GPR_U32(ctx, 31, 0x345398u);
    ctx->pc = 0x345394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345390u;
    // 0x345394: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348E08u, 0x345390u, 0x345398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345398u;
label_345398:
    // 0x345398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34539c: 0x3e00008  jr          $ra
    ctx->pc = 0x34539Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3453A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34539Cu;
        // 0x3453a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34539Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3453A4u;
    // 0x3453a4: 0x0  nop
    ctx->pc = 0x3453a4u;
    // NOP
    ctx->pc = 0x3453a8u;
}
