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

// Function: sub_00308C98
// Address: 0x308c98 - 0x308cd8
void sub_00308C98_0x308c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308C98_0x308c98");
#endif

    ctx->pc = 0x308c98u;

    // 0x308c98: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x308c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x308c9c: 0x2443ed2c  addiu       $v1, $v0, -0x12D4
    ctx->pc = 0x308c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962476));
    // 0x308ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x308ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1AED2Cu));
    // 0x308ca4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x308CA4u;
    {
        const bool branch_taken_0x308ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CA4u;
        // 0x308ca8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ca4) {
            ctx->pc = 0x308CC0u;
            goto label_308cc0;
        }
    }
    ctx->pc = 0x308CACu;
    // 0x308cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308cb0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x308cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x308cb4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x308cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308cb8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x308CB8u;
    {
        const bool branch_taken_0x308cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x308cb8) {
            ctx->pc = 0x308CCCu;
            goto label_308ccc;
        }
    }
    ctx->pc = 0x308CC0u;
label_308cc0:
    // 0x308cc0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x308cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x308cc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x308cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308cc8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x308cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_308ccc:
    // 0x308ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x308CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CCCu;
        // 0x308cd0: 0x8c82013c  lw          $v0, 0x13C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308CD4u;
    // 0x308cd4: 0x0  nop
    ctx->pc = 0x308cd4u;
    // NOP
    ctx->pc = 0x308cd8u;
}
