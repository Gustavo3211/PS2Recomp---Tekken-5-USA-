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

// Function: sub_002FD630
// Address: 0x2fd630 - 0x2fd660
void sub_002FD630_0x2fd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD630_0x2fd630");
#endif

    ctx->pc = 0x2fd630u;

    // 0x2fd630: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2fd630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd634: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD634u;
    {
        const bool branch_taken_0x2fd634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD634u;
        // 0x2fd638: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd634) {
            ctx->pc = 0x2FD654u;
            goto label_2fd654;
        }
    }
    ctx->pc = 0x2FD63Cu;
    // 0x2fd63c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2fd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2fd640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd644: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x2fd644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x2fd648: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2fd648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2fd64c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2fd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x2fd650: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x2fd650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_2fd654:
    // 0x2fd654: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD65Cu;
    // 0x2fd65c: 0x0  nop
    ctx->pc = 0x2fd65cu;
    // NOP
    ctx->pc = 0x2fd660u;
}
