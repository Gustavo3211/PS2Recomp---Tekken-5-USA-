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

// Function: sub_00364C28
// Address: 0x364c28 - 0x364c50
void sub_00364C28_0x364c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364C28_0x364c28");
#endif

    switch (ctx->pc) {
        case 0x364c3cu: goto label_364c3c;
        case 0x364c48u: goto label_364c48;
        default: break;
    }

    ctx->pc = 0x364c28u;

    // 0x364c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364c2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x364c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364c34: 0xc0d92f4  jal         func_364BD0
    ctx->pc = 0x364C34u;
    SET_GPR_U32(ctx, 31, 0x364C3Cu);
    ctx->pc = 0x364C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364C34u;
    // 0x364c38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x364BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364BD0u, 0x364C34u, 0x364C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C3Cu;
label_364c3c:
    // 0x364c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364c40: 0x3e00008  jr          $ra
    ctx->pc = 0x364C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C40u;
        // 0x364c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364C48u;
label_364c48:
    // 0x364c48: 0x3e00008  jr          $ra
    ctx->pc = 0x364C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364C50u;
}
