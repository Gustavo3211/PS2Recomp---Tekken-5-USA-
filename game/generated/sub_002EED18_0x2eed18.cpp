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

// Function: sub_002EED18
// Address: 0x2eed18 - 0x2eed38
void sub_002EED18_0x2eed18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EED18_0x2eed18");
#endif

    switch (ctx->pc) {
        case 0x2eed28u: goto label_2eed28;
        default: break;
    }

    ctx->pc = 0x2eed18u;

    // 0x2eed18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eed18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eed1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eed20: 0xc092940  jal         func_24A500
    ctx->pc = 0x2EED20u;
    SET_GPR_U32(ctx, 31, 0x2EED28u);
    ctx->pc = 0x2EED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED20u;
    // 0x2eed24: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2EED20u, 0x2EED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED28u;
label_2eed28:
    // 0x2eed28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eed28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eed2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EED2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED2Cu;
        // 0x2eed30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EED2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EED34u;
    // 0x2eed34: 0x0  nop
    ctx->pc = 0x2eed34u;
    // NOP
    ctx->pc = 0x2eed38u;
}
