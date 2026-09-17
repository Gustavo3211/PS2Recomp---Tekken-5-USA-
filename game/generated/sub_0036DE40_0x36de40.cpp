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

// Function: sub_0036DE40
// Address: 0x36de40 - 0x36de60
void sub_0036DE40_0x36de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DE40_0x36de40");
#endif

    switch (ctx->pc) {
        case 0x36de54u: goto label_36de54;
        default: break;
    }

    ctx->pc = 0x36de40u;

    // 0x36de40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36de44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36de44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36de4c: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x36DE4Cu;
    SET_GPR_U32(ctx, 31, 0x36DE54u);
    ctx->pc = 0x36DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE4Cu;
    // 0x36de50: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x36DE4Cu, 0x36DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE54u;
label_36de54:
    // 0x36de54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36de54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36de58: 0x3e00008  jr          $ra
    ctx->pc = 0x36DE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE58u;
        // 0x36de5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DE60u;
}
