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

// Function: sub_0026C148
// Address: 0x26c148 - 0x26c180
void sub_0026C148_0x26c148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C148_0x26c148");
#endif

    ctx->pc = 0x26c148u;

    // 0x26c148: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26c148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c14c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26c150: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x26c150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26c154: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26c158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C158u;
    {
        const bool branch_taken_0x26c158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C158u;
        // 0x26c15c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c158) {
            ctx->pc = 0x26C178u;
            goto label_26c178;
        }
    }
    ctx->pc = 0x26C160u;
    // 0x26c160: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x26c160u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x26c164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C164u;
    {
        const bool branch_taken_0x26c164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c164) {
            ctx->pc = 0x26C178u;
            goto label_26c178;
        }
    }
    ctx->pc = 0x26C16Cu;
    // 0x26c16c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26c170: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26c174: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x26c174u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c178:
    // 0x26c178: 0x3e00008  jr          $ra
    ctx->pc = 0x26C178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C178u;
        // 0x26c17c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C180u;
}
