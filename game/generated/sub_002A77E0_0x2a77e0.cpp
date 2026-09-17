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

// Function: sub_002A77E0
// Address: 0x2a77e0 - 0x2a7818
void sub_002A77E0_0x2a77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A77E0_0x2a77e0");
#endif

    switch (ctx->pc) {
        case 0x2a77f0u: goto label_2a77f0;
        default: break;
    }

    ctx->pc = 0x2a77e0u;

    // 0x2a77e0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2a77e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77e4: 0x10c70009  beq         $a2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A77E4u;
    {
        const bool branch_taken_0x2a77e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2A77E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A77E4u;
        // 0x2a77e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77e4) {
            ctx->pc = 0x2A780Cu;
            goto label_2a780c;
        }
    }
    ctx->pc = 0x2A77ECu;
    // 0x2a77ec: 0x0  nop
    ctx->pc = 0x2a77ecu;
    // NOP
label_2a77f0:
    // 0x2a77f0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2a77f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a77f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a77f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a77f8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2a77f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a77fc: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x2a77fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2a7800: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a7800u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a7804: 0x14c7fffa  bne         $a2, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A7804u;
    {
        const bool branch_taken_0x2a7804 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x2A7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7804u;
        // 0x2a7808: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7804) {
            ctx->pc = 0x2A77F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a77f0;
        }
    }
    ctx->pc = 0x2A780Cu;
label_2a780c:
    // 0x2a780c: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x2a780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2a7810: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7810u;
        // 0x2a7814: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7818u;
}
