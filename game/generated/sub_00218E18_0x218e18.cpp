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

// Function: sub_00218E18
// Address: 0x218e18 - 0x218e38
void sub_00218E18_0x218e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218E18_0x218e18");
#endif

    switch (ctx->pc) {
        case 0x218e28u: goto label_218e28;
        default: break;
    }

    ctx->pc = 0x218e18u;

    // 0x218e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218e20: 0xc0862b2  jal         func_218AC8
    ctx->pc = 0x218E20u;
    SET_GPR_U32(ctx, 31, 0x218E28u);
    ctx->pc = 0x218AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218AC8u, 0x218E20u, 0x218E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218E28u;
label_218e28:
    // 0x218e28: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x218e28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x218e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218e30: 0x3e00008  jr          $ra
    ctx->pc = 0x218E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218E30u;
        // 0x218e34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218E38u;
}
