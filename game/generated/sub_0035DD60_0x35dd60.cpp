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

// Function: sub_0035DD60
// Address: 0x35dd60 - 0x35dda8
void sub_0035DD60_0x35dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DD60_0x35dd60");
#endif

    switch (ctx->pc) {
        case 0x35dd80u: goto label_35dd80;
        default: break;
    }

    ctx->pc = 0x35dd60u;

    // 0x35dd60: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35dd64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35dd68: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x35dd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x35dd6c: 0x24421378  addiu       $v0, $v0, 0x1378
    ctx->pc = 0x35dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
    // 0x35dd70: 0xaf80c7c8  sw          $zero, -0x3838($gp)
    ctx->pc = 0x35dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952904), GPR_U32(ctx, 0));
    // 0x35dd74: 0xff83c7d0  sd          $v1, -0x3830($gp)
    ctx->pc = 0x35dd74u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294952912), GPR_U64(ctx, 3));
    // 0x35dd78: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x35dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x35dd7c: 0x244213d5  addiu       $v0, $v0, 0x13D5
    ctx->pc = 0x35dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5077));
label_35dd80:
    // 0x35dd80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35dd84: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x35dd84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35dd88: 0x0  nop
    ctx->pc = 0x35dd88u;
    // NOP
    // 0x35dd8c: 0x0  nop
    ctx->pc = 0x35dd8cu;
    // NOP
    // 0x35dd90: 0x0  nop
    ctx->pc = 0x35dd90u;
    // NOP
    // 0x35dd94: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DD94u;
    {
        const bool branch_taken_0x35dd94 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x35DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD94u;
        // 0x35dd98: 0x2442ff94  addiu       $v0, $v0, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd94) {
            ctx->pc = 0x35DD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dd80;
        }
    }
    ctx->pc = 0x35DD9Cu;
    // 0x35dd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x35DD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DDA4u;
    // 0x35dda4: 0x0  nop
    ctx->pc = 0x35dda4u;
    // NOP
    ctx->pc = 0x35dda8u;
}
