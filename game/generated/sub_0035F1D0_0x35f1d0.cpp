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

// Function: sub_0035F1D0
// Address: 0x35f1d0 - 0x35f208
void sub_0035F1D0_0x35f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F1D0_0x35f1d0");
#endif

    ctx->pc = 0x35f1d0u;

    // 0x35f1d0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35f1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35f1d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35f1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f1d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x35f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35f1dc: 0x2cc50002  sltiu       $a1, $a2, 0x2
    ctx->pc = 0x35f1dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35f1e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35f1e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35f1e8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F1E8u;
    {
        const bool branch_taken_0x35f1e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F1E8u;
        // 0x35f1ec: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f1e8) {
            ctx->pc = 0x35F200u;
            goto label_35f200;
        }
    }
    ctx->pc = 0x35F1F0u;
    // 0x35f1f0: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35f1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35f1f4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35f1f8: 0xac262ff0  sw          $a2, 0x2FF0($at)
    ctx->pc = 0x35f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12272), GPR_U32(ctx, 6));
    // 0x35f1fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f200:
    // 0x35f200: 0x3e00008  jr          $ra
    ctx->pc = 0x35F200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F208u;
}
