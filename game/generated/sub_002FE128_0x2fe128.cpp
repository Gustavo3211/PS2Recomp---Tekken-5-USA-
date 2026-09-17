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

// Function: sub_002FE128
// Address: 0x2fe128 - 0x2fe150
void sub_002FE128_0x2fe128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE128_0x2fe128");
#endif

    ctx->pc = 0x2fe128u;

    // 0x2fe128: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FE128u;
    {
        const bool branch_taken_0x2fe128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE128u;
        // 0x2fe12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe128) {
            ctx->pc = 0x2FE148u;
            goto label_2fe148;
        }
    }
    ctx->pc = 0x2FE130u;
    // 0x2fe130: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x2fe130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x2fe134: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2fe134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2fe138: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FE138u;
    {
        const bool branch_taken_0x2fe138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fe138) {
            ctx->pc = 0x2FE13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE138u;
            // 0x2fe13c: 0xaca20024  sw          $v0, 0x24($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE140u;
            goto label_2fe140;
        }
    }
    ctx->pc = 0x2FE140u;
label_2fe140:
    // 0x2fe140: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x2fe140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x2fe144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fe144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fe148:
    // 0x2fe148: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE150u;
}
