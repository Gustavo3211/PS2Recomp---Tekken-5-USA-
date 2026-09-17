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

// Function: sub_002EEE18
// Address: 0x2eee18 - 0x2eee38
void sub_002EEE18_0x2eee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEE18_0x2eee18");
#endif

    switch (ctx->pc) {
        case 0x2eee28u: goto label_2eee28;
        default: break;
    }

    ctx->pc = 0x2eee18u;

    // 0x2eee18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eee18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eee1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eee20: 0xc092940  jal         func_24A500
    ctx->pc = 0x2EEE20u;
    SET_GPR_U32(ctx, 31, 0x2EEE28u);
    ctx->pc = 0x2EEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEE20u;
    // 0x2eee24: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2EEE20u, 0x2EEE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE28u;
label_2eee28:
    // 0x2eee28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE2Cu;
        // 0x2eee30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEE34u;
    // 0x2eee34: 0x0  nop
    ctx->pc = 0x2eee34u;
    // NOP
    ctx->pc = 0x2eee38u;
}
