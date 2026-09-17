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

// Function: sub_003119E0
// Address: 0x3119e0 - 0x311a30
void sub_003119E0_0x3119e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003119E0_0x3119e0");
#endif

    switch (ctx->pc) {
        case 0x3119f8u: goto label_3119f8;
        default: break;
    }

    ctx->pc = 0x3119e0u;

    // 0x3119e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3119e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3119e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3119E4u;
    {
        const bool branch_taken_0x3119e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119E4u;
        // 0x3119e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119e4) {
            ctx->pc = 0x311A28u;
            goto label_311a28;
        }
    }
    ctx->pc = 0x3119ECu;
    // 0x3119ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3119ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3119f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3119F0u;
    {
        const bool branch_taken_0x3119f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3119F0u;
        // 0x3119f4: 0x8f82c53c  lw          $v0, -0x3AC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3119f0) {
            ctx->pc = 0x311A18u;
            goto label_311a18;
        }
    }
    ctx->pc = 0x3119F8u;
label_3119f8:
    // 0x3119f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3119f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3119fc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3119fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x311a00: 0x0  nop
    ctx->pc = 0x311a00u;
    // NOP
    // 0x311a04: 0x0  nop
    ctx->pc = 0x311a04u;
    // NOP
    // 0x311a08: 0x0  nop
    ctx->pc = 0x311a08u;
    // NOP
    // 0x311a0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x311A0Cu;
    {
        const bool branch_taken_0x311a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311A0Cu;
        // 0x311a10: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311a0c) {
            ctx->pc = 0x3119F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3119f8;
        }
    }
    ctx->pc = 0x311A14u;
    // 0x311a14: 0x8f82c53c  lw          $v0, -0x3AC4($gp)
    ctx->pc = 0x311a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952252)));
label_311a18:
    // 0x311a18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x311a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x311a1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x311a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x311a20: 0xaf83c53c  sw          $v1, -0x3AC4($gp)
    ctx->pc = 0x311a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952252), GPR_U32(ctx, 3));
    // 0x311a24: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x311a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_311a28:
    // 0x311a28: 0x3e00008  jr          $ra
    ctx->pc = 0x311A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311A30u;
}
