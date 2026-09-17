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

// Function: sub_00341CF0
// Address: 0x341cf0 - 0x341d50
void sub_00341CF0_0x341cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341CF0_0x341cf0");
#endif

    switch (ctx->pc) {
        case 0x341d20u: goto label_341d20;
        default: break;
    }

    ctx->pc = 0x341cf0u;

    // 0x341cf0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x341cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x341cf4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x341cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x341cf8: 0x24460ed8  addiu       $a2, $v0, 0xED8
    ctx->pc = 0x341cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3800));
    // 0x341cfc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x341cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341d00: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x341d00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x440ED8u));
    // 0x341d04: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x341D04u;
    {
        const bool branch_taken_0x341d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D04u;
        // 0x341d08: 0x24630f00  addiu       $v1, $v1, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d04) {
            ctx->pc = 0x341D48u;
            goto label_341d48;
        }
    }
    ctx->pc = 0x341D0Cu;
    // 0x341d0c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341D0Cu;
    {
        const bool branch_taken_0x341d0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x341d0c) {
            ctx->pc = 0x341D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341D0Cu;
            // 0x341d10: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D20u;
            goto label_341d20;
        }
    }
    ctx->pc = 0x341D14u;
    // 0x341d14: 0x3e00008  jr          $ra
    ctx->pc = 0x341D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D14u;
        // 0x341d18: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341D1Cu;
    // 0x341d1c: 0x0  nop
    ctx->pc = 0x341d1cu;
    // NOP
label_341d20:
    // 0x341d20: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x341d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x341d24: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x341D24u;
    {
        const bool branch_taken_0x341d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x341D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D24u;
        // 0x341d28: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d24) {
            ctx->pc = 0x341D48u;
            goto label_341d48;
        }
    }
    ctx->pc = 0x341D2Cu;
    // 0x341d2c: 0x0  nop
    ctx->pc = 0x341d2cu;
    // NOP
    // 0x341d30: 0x0  nop
    ctx->pc = 0x341d30u;
    // NOP
    // 0x341d34: 0x0  nop
    ctx->pc = 0x341d34u;
    // NOP
    // 0x341d38: 0x0  nop
    ctx->pc = 0x341d38u;
    // NOP
    // 0x341d3c: 0x5482fff8  bnel        $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x341D3Cu;
    {
        const bool branch_taken_0x341d3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x341d3c) {
            ctx->pc = 0x341D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341D3Cu;
            // 0x341d40: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341d20;
        }
    }
    ctx->pc = 0x341D44u;
    // 0x341d44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x341d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_341d48:
    // 0x341d48: 0x3e00008  jr          $ra
    ctx->pc = 0x341D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341D50u;
}
