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

// Function: sub_002A7400
// Address: 0x2a7400 - 0x2a7438
void sub_002A7400_0x2a7400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7400_0x2a7400");
#endif

    switch (ctx->pc) {
        case 0x2a7410u: goto label_2a7410;
        default: break;
    }

    ctx->pc = 0x2a7400u;

    // 0x2a7400: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2a7400u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a7404: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A7404u;
    {
        const bool branch_taken_0x2a7404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7404u;
        // 0x2a7408: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7404) {
            ctx->pc = 0x2A742Cu;
            goto label_2a742c;
        }
    }
    ctx->pc = 0x2A740Cu;
    // 0x2a740c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2a7410:
    // 0x2a7410: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x2a7410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a7414: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2a7414u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a7418: 0x0  nop
    ctx->pc = 0x2a7418u;
    // NOP
    // 0x2a741c: 0x0  nop
    ctx->pc = 0x2a741cu;
    // NOP
    // 0x2a7420: 0x0  nop
    ctx->pc = 0x2a7420u;
    // NOP
    // 0x2a7424: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A7424u;
    {
        const bool branch_taken_0x2a7424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7424) {
            ctx->pc = 0x2A7428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7424u;
            // 0x2a7428: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7410;
        }
    }
    ctx->pc = 0x2A742Cu;
label_2a742c:
    // 0x2a742c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A742Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A742Cu;
        // 0x2a7430: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A742Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7434u;
    // 0x2a7434: 0x0  nop
    ctx->pc = 0x2a7434u;
    // NOP
    ctx->pc = 0x2a7438u;
}
