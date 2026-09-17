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

// Function: sub_0024A1F8
// Address: 0x24a1f8 - 0x24a228
void sub_0024A1F8_0x24a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A1F8_0x24a1f8");
#endif

    ctx->pc = 0x24a1f8u;

    // 0x24a1f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24a1fc: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A1FCu;
    {
        const bool branch_taken_0x24a1fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1FCu;
        // 0x24a200: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1fc) {
            ctx->pc = 0x24A220u;
            goto label_24a220;
        }
    }
    ctx->pc = 0x24A204u;
    // 0x24a204: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24a208: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A208u;
    {
        const bool branch_taken_0x24a208 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a208) {
            ctx->pc = 0x24A220u;
            goto label_24a220;
        }
    }
    ctx->pc = 0x24A210u;
    // 0x24a210: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24a210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24a214: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x24a214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x24a218: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x24a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x24a21c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x24a21cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24a220:
    // 0x24a220: 0x3e00008  jr          $ra
    ctx->pc = 0x24A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A220u;
        // 0x24a224: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A228u;
}
