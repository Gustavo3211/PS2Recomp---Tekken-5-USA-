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

// Function: sub_0035F778
// Address: 0x35f778 - 0x35f7a8
void sub_0035F778_0x35f778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F778_0x35f778");
#endif

    ctx->pc = 0x35f778u;

    // 0x35f778: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f77c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f77cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f780: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35f780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35f784: 0x2c850040  sltiu       $a1, $a0, 0x40
    ctx->pc = 0x35f784u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x35f788: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F788u;
    {
        const bool branch_taken_0x35f788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F788u;
        // 0x35f78c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f788) {
            ctx->pc = 0x35F7A0u;
            goto label_35f7a0;
        }
    }
    ctx->pc = 0x35F790u;
    // 0x35f790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35f790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35f794: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35f794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35f798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f79c: 0x8c422fe8  lw          $v0, 0x2FE8($v0)
    ctx->pc = 0x35f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12264)));
label_35f7a0:
    // 0x35f7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x35F7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F7A8u;
}
