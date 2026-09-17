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

// Function: sub_00308C50
// Address: 0x308c50 - 0x308c80
void sub_00308C50_0x308c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308C50_0x308c50");
#endif

    switch (ctx->pc) {
        case 0x308c70u: goto label_308c70;
        default: break;
    }

    ctx->pc = 0x308c50u;

    // 0x308c50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x308c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c54: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x308c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x308c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308c5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x308c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c60: 0x2484ece0  addiu       $a0, $a0, -0x1320
    ctx->pc = 0x308c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
    // 0x308c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308c68: 0xc0c22b4  jal         func_308AD0
    ctx->pc = 0x308C68u;
    SET_GPR_U32(ctx, 31, 0x308C70u);
    ctx->pc = 0x308C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C68u;
    // 0x308c6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308AD0u, 0x308C68u, 0x308C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C70u;
label_308c70:
    // 0x308c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308c74: 0x3e00008  jr          $ra
    ctx->pc = 0x308C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C74u;
        // 0x308c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308C7Cu;
    // 0x308c7c: 0x0  nop
    ctx->pc = 0x308c7cu;
    // NOP
    ctx->pc = 0x308c80u;
}
