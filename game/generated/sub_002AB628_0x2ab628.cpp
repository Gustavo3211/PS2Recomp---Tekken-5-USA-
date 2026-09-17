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

// Function: sub_002AB628
// Address: 0x2ab628 - 0x2ab650
void sub_002AB628_0x2ab628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB628_0x2ab628");
#endif

    switch (ctx->pc) {
        case 0x2ab640u: goto label_2ab640;
        default: break;
    }

    ctx->pc = 0x2ab628u;

    // 0x2ab628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab62c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ab62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab634: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2ab634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2ab638: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x2AB638u;
    SET_GPR_U32(ctx, 31, 0x2AB640u);
    ctx->pc = 0x2AB63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB638u;
    // 0x2ab63c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236D0u, 0x2AB638u, 0x2AB640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB640u;
label_2ab640:
    // 0x2ab640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab644: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB644u;
        // 0x2ab648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB64Cu;
    // 0x2ab64c: 0x0  nop
    ctx->pc = 0x2ab64cu;
    // NOP
    ctx->pc = 0x2ab650u;
}
