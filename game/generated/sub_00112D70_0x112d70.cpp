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

// Function: sub_00112D70
// Address: 0x112d70 - 0x112dc0
void sub_00112D70_0x112d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112D70_0x112d70");
#endif

    switch (ctx->pc) {
        case 0x112d80u: goto label_112d80;
        case 0x112d90u: goto label_112d90;
        default: break;
    }

    ctx->pc = 0x112d70u;

    // 0x112d70: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x112d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x112d74: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x112D74u;
    {
        const bool branch_taken_0x112d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d74) {
            ctx->pc = 0x112DB4u;
            goto label_112db4;
        }
    }
    ctx->pc = 0x112D7Cu;
    // 0x112d7c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x112d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_112d80:
    // 0x112d80: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x112D80u;
    {
        const bool branch_taken_0x112d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d80) {
            ctx->pc = 0x112D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112D80u;
            // 0x112d84: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112DACu;
            goto label_112dac;
        }
    }
    ctx->pc = 0x112D88u;
    // 0x112d88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x112d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112d8c: 0x0  nop
    ctx->pc = 0x112d8cu;
    // NOP
label_112d90:
    // 0x112d90: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112D90u;
    {
        const bool branch_taken_0x112d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x112d90) {
            ctx->pc = 0x112D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112D90u;
            // 0x112d94: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112DA0u;
            goto label_112da0;
        }
    }
    ctx->pc = 0x112D98u;
    // 0x112d98: 0x3e00008  jr          $ra
    ctx->pc = 0x112D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D98u;
        // 0x112d9c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112DA0u;
label_112da0:
    // 0x112da0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x112DA0u;
    {
        const bool branch_taken_0x112da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112da0) {
            ctx->pc = 0x112DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112DA0u;
            // 0x112da4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112d90;
        }
    }
    ctx->pc = 0x112DA8u;
    // 0x112da8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x112da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_112dac:
    // 0x112dac: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x112DACu;
    {
        const bool branch_taken_0x112dac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x112dac) {
            ctx->pc = 0x112DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112DACu;
            // 0x112db0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112d80;
        }
    }
    ctx->pc = 0x112DB4u;
label_112db4:
    // 0x112db4: 0x3e00008  jr          $ra
    ctx->pc = 0x112DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DB4u;
        // 0x112db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112DBCu;
    // 0x112dbc: 0x0  nop
    ctx->pc = 0x112dbcu;
    // NOP
    ctx->pc = 0x112dc0u;
}
