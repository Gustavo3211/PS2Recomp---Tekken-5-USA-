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

// Function: sub_0024ADD0
// Address: 0x24add0 - 0x24ae00
void sub_0024ADD0_0x24add0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ADD0_0x24add0");
#endif

    ctx->pc = 0x24add0u;

    // 0x24add0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x24add0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24add4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24add4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24add8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24ADD8u;
    {
        const bool branch_taken_0x24add8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADD8u;
        // 0x24addc: 0x28830015  slti        $v1, $a0, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24add8) {
            ctx->pc = 0x24ADF8u;
            goto label_24adf8;
        }
    }
    ctx->pc = 0x24ADE0u;
    // 0x24ade0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24ADE0u;
    {
        const bool branch_taken_0x24ade0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADE0u;
        // 0x24ade4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ade0) {
            ctx->pc = 0x24ADF8u;
            goto label_24adf8;
        }
    }
    ctx->pc = 0x24ADE8u;
    // 0x24ade8: 0x28830017  slti        $v1, $a0, 0x17
    ctx->pc = 0x24ade8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x24adec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24adf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24adf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24adf4: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x24adf4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_24adf8:
    // 0x24adf8: 0x3e00008  jr          $ra
    ctx->pc = 0x24ADF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADF8u;
        // 0x24adfc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ADF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AE00u;
}
