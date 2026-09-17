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

// Function: sub_002B73C0
// Address: 0x2b73c0 - 0x2b7420
void sub_002B73C0_0x2b73c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B73C0_0x2b73c0");
#endif

    switch (ctx->pc) {
        case 0x2b73e0u: goto label_2b73e0;
        default: break;
    }

    ctx->pc = 0x2b73c0u;

    // 0x2b73c0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2b73c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b73c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b73c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b73c8: 0x1900000f  blez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B73C8u;
    {
        const bool branch_taken_0x2b73c8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2B73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73C8u;
        // 0x2b73cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b73c8) {
            ctx->pc = 0x2B7408u;
            goto label_2b7408;
        }
    }
    ctx->pc = 0x2B73D0u;
    // 0x2b73d0: 0x8cc90028  lw          $t1, 0x28($a2)
    ctx->pc = 0x2b73d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2b73d4: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2b73d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b73d8: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x2b73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2b73dc: 0x0  nop
    ctx->pc = 0x2b73dcu;
    // NOP
label_2b73e0:
    // 0x2b73e0: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x2b73e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b73e4: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x2b73e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2b73e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b73e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b73ec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2b73ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b73f0: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x2b73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x2b73f4: 0x4a1026  xor         $v0, $v0, $t2
    ctx->pc = 0x2b73f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x2b73f8: 0xa2380a  movz        $a3, $a1, $v0
    ctx->pc = 0x2b73f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x2b73fc: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x2b73fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2b7400: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B7400u;
    {
        const bool branch_taken_0x2b7400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7400) {
            ctx->pc = 0x2B7404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7400u;
            // 0x2b7404: 0x8cc30030  lw          $v1, 0x30($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B73E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b73e0;
        }
    }
    ctx->pc = 0x2B7408u;
label_2b7408:
    // 0x2b7408: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x2b7408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2b740c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2b740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2b7410: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2b7410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2b7414: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2b7414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b7418: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7418u;
        // 0x2b741c: 0xacc30030  sw          $v1, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7420u;
}
