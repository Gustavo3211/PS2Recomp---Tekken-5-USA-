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

// Function: sub_002B86B0
// Address: 0x2b86b0 - 0x2b8700
void sub_002B86B0_0x2b86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B86B0_0x2b86b0");
#endif

    switch (ctx->pc) {
        case 0x2b86d8u: goto label_2b86d8;
        default: break;
    }

    ctx->pc = 0x2b86b0u;

    // 0x2b86b0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b86b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B86B4u;
    {
        const bool branch_taken_0x2b86b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b86b4) {
            ctx->pc = 0x2B86F4u;
            goto label_2b86f4;
        }
    }
    ctx->pc = 0x2B86BCu;
    // 0x2b86bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b86c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b86c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b86c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b86c8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2b86c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b86cc: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B86CCu;
    {
        const bool branch_taken_0x2b86cc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86CCu;
        // 0x2b86d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86cc) {
            ctx->pc = 0x2B86F4u;
            goto label_2b86f4;
        }
    }
    ctx->pc = 0x2B86D4u;
    // 0x2b86d4: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x2b86d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2b86d8:
    // 0x2b86d8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b86dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b86dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b86e0: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x2b86e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b86e4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2b86e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2b86e8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2b86e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2b86ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B86ECu;
    {
        const bool branch_taken_0x2b86ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86ECu;
        // 0x2b86f0: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b86ec) {
            ctx->pc = 0x2B86D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b86d8;
        }
    }
    ctx->pc = 0x2B86F4u;
label_2b86f4:
    // 0x2b86f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B86F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B86F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B86FCu;
    // 0x2b86fc: 0x0  nop
    ctx->pc = 0x2b86fcu;
    // NOP
    ctx->pc = 0x2b8700u;
}
