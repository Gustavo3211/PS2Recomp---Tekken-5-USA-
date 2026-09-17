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

// Function: sub_002F0600
// Address: 0x2f0600 - 0x2f0640
void sub_002F0600_0x2f0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0600_0x2f0600");
#endif

    switch (ctx->pc) {
        case 0x2f0620u: goto label_2f0620;
        case 0x2f0630u: goto label_2f0630;
        default: break;
    }

    ctx->pc = 0x2f0600u;

    // 0x2f0600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f060c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f060cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0610: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2f0610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2f0614: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f0618: 0xc04a151  jal         func_128544
    ctx->pc = 0x2F0618u;
    SET_GPR_U32(ctx, 31, 0x2F0620u);
    ctx->pc = 0x2F061Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0618u;
    // 0x2f061c: 0x24065780  addiu       $a2, $zero, 0x5780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2F0618u, 0x2F0620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0620u;
label_2f0620:
    // 0x2f0620: 0x260457a0  addiu       $a0, $s0, 0x57A0
    ctx->pc = 0x2f0620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22432));
    // 0x2f0624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0628: 0xc04a151  jal         func_128544
    ctx->pc = 0x2F0628u;
    SET_GPR_U32(ctx, 31, 0x2F0630u);
    ctx->pc = 0x2F062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0628u;
    // 0x2f062c: 0x24065780  addiu       $a2, $zero, 0x5780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2F0628u, 0x2F0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0630u;
label_2f0630:
    // 0x2f0630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0634: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f0634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0638: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0638u;
        // 0x2f063c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0640u;
}
