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

// Function: sub_00232E80
// Address: 0x232e80 - 0x232ed0
void sub_00232E80_0x232e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232E80_0x232e80");
#endif

    ctx->pc = 0x232e80u;

    // 0x232e80: 0x84a20148  lh          $v0, 0x148($a1)
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x232e84: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x232e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x232e88: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x232e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x232e8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x232e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x232e90: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232E90u;
    {
        const bool branch_taken_0x232e90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x232E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E90u;
        // 0x232e94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e90) {
            ctx->pc = 0x232EACu;
            goto label_232eac;
        }
    }
    ctx->pc = 0x232E98u;
    // 0x232e98: 0x84c20148  lh          $v0, 0x148($a2)
    ctx->pc = 0x232e98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x232e9c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x232e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x232ea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x232ea4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x232EA4u;
    {
        const bool branch_taken_0x232ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x232ea4) {
            ctx->pc = 0x232EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232EA4u;
            // 0x232ea8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232EC8u;
            goto label_232ec8;
        }
    }
    ctx->pc = 0x232EACu;
label_232eac:
    // 0x232eac: 0x14a70006  bne         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x232EACu;
    {
        const bool branch_taken_0x232eac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x232eac) {
            ctx->pc = 0x232EC8u;
            goto label_232ec8;
        }
    }
    ctx->pc = 0x232EB4u;
    // 0x232eb4: 0x84c20148  lh          $v0, 0x148($a2)
    ctx->pc = 0x232eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 328)));
    // 0x232eb8: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x232eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x232ebc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x232ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x232ec0: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x232EC0u;
    {
        const bool branch_taken_0x232ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x232ec0) {
            ctx->pc = 0x232EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232EC0u;
            // 0x232ec4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232EC8u;
            goto label_232ec8;
        }
    }
    ctx->pc = 0x232EC8u;
label_232ec8:
    // 0x232ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x232EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EC8u;
        // 0x232ecc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232ED0u;
}
