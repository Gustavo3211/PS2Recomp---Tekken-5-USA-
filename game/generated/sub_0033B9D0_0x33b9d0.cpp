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

// Function: sub_0033B9D0
// Address: 0x33b9d0 - 0x33ba08
void sub_0033B9D0_0x33b9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B9D0_0x33b9d0");
#endif

    ctx->pc = 0x33b9d0u;

    // 0x33b9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b9d4: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x33b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x33b9d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x33b9d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9dc: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x33b9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33b9e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x33b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x33b9e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33b9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9e8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x33b9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x33b9ec: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x33b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33b9f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33b9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9f4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33B9F4u;
    {
        const bool branch_taken_0x33b9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9F4u;
        // 0x33b9f8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b9f4) {
            ctx->pc = 0x33BA00u;
            goto label_33ba00;
        }
    }
    ctx->pc = 0x33B9FCu;
    // 0x33b9fc: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x33b9fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_33ba00:
    // 0x33ba00: 0x3e00008  jr          $ra
    ctx->pc = 0x33BA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA00u;
        // 0x33ba04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BA08u;
}
