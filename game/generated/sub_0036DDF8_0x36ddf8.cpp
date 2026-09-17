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

// Function: sub_0036DDF8
// Address: 0x36ddf8 - 0x36de18
void sub_0036DDF8_0x36ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DDF8_0x36ddf8");
#endif

    switch (ctx->pc) {
        case 0x36de0cu: goto label_36de0c;
        default: break;
    }

    ctx->pc = 0x36ddf8u;

    // 0x36ddf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ddf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ddfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ddfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36de00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36de04: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x36DE04u;
    SET_GPR_U32(ctx, 31, 0x36DE0Cu);
    ctx->pc = 0x36DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE04u;
    // 0x36de08: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x36DE04u, 0x36DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE0Cu;
label_36de0c:
    // 0x36de0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36de0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36de10: 0x3e00008  jr          $ra
    ctx->pc = 0x36DE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE10u;
        // 0x36de14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DE18u;
}
