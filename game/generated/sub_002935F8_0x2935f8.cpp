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

// Function: sub_002935F8
// Address: 0x2935f8 - 0x293628
void sub_002935F8_0x2935f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002935F8_0x2935f8");
#endif

    ctx->pc = 0x2935f8u;

    // 0x2935f8: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x2935f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x2935fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2935FCu;
    {
        const bool branch_taken_0x2935fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935fc) {
            ctx->pc = 0x293620u;
            goto label_293620;
        }
    }
    ctx->pc = 0x293604u;
    // 0x293604: 0x8c840150  lw          $a0, 0x150($a0)
    ctx->pc = 0x293604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x293608: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293608u;
    {
        const bool branch_taken_0x293608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x293608) {
            ctx->pc = 0x293620u;
            goto label_293620;
        }
    }
    ctx->pc = 0x293610u;
    // 0x293610: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x293610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x293614: 0x3e00008  jr          $ra
    ctx->pc = 0x293614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293614u;
        // 0x293618: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29361Cu;
    // 0x29361c: 0x0  nop
    ctx->pc = 0x29361cu;
    // NOP
label_293620:
    // 0x293620: 0x3e00008  jr          $ra
    ctx->pc = 0x293620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293620u;
        // 0x293624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293628u;
}
