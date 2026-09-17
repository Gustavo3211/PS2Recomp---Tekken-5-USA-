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

// Function: sub_0022E9E0
// Address: 0x22e9e0 - 0x22ea38
void sub_0022E9E0_0x22e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E9E0_0x22e9e0");
#endif

    switch (ctx->pc) {
        case 0x22ea10u: goto label_22ea10;
        default: break;
    }

    ctx->pc = 0x22e9e0u;

    // 0x22e9e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22e9e4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22E9E4u;
    {
        const bool branch_taken_0x22e9e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e9e4) {
            ctx->pc = 0x22EA2Cu;
            goto label_22ea2c;
        }
    }
    ctx->pc = 0x22E9ECu;
    // 0x22e9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e9f0: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22E9F0u;
    {
        const bool branch_taken_0x22e9f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x22e9f0) {
            ctx->pc = 0x22EA2Cu;
            goto label_22ea2c;
        }
    }
    ctx->pc = 0x22E9F8u;
    // 0x22e9f8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x22e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x22e9fc: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x22e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x22ea00: 0x24429338  addiu       $v0, $v0, -0x6CC8
    ctx->pc = 0x22ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939448));
    // 0x22ea04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22ea04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ea08: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ea0c: 0x0  nop
    ctx->pc = 0x22ea0cu;
    // NOP
label_22ea10:
    // 0x22ea10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ea14: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x22ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x22ea18: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x22ea18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x22ea1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ea20: 0x0  nop
    ctx->pc = 0x22ea20u;
    // NOP
    // 0x22ea24: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22EA24u;
    {
        const bool branch_taken_0x22ea24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA24u;
        // 0x22ea28: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea24) {
            ctx->pc = 0x22EA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ea10;
        }
    }
    ctx->pc = 0x22EA2Cu;
label_22ea2c:
    // 0x22ea2c: 0x3e00008  jr          $ra
    ctx->pc = 0x22EA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EA34u;
    // 0x22ea34: 0x0  nop
    ctx->pc = 0x22ea34u;
    // NOP
    ctx->pc = 0x22ea38u;
}
