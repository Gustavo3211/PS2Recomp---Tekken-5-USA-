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

// Function: sub_00248D38
// Address: 0x248d38 - 0x248d80
void sub_00248D38_0x248d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248D38_0x248d38");
#endif

    switch (ctx->pc) {
        case 0x248d50u: goto label_248d50;
        default: break;
    }

    ctx->pc = 0x248d38u;

    // 0x248d38: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x248d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x248d3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x248d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d40: 0x24467000  addiu       $a2, $v0, 0x7000
    ctx->pc = 0x248d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x248d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248d48: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x167008u));
    // 0x248d4c: 0x0  nop
    ctx->pc = 0x248d4cu;
    // NOP
label_248d50:
    // 0x248d50: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x248d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x248d54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248D54u;
    {
        const bool branch_taken_0x248d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D54u;
        // 0x248d58: 0x24c6002c  addiu       $a2, $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248d54) {
            ctx->pc = 0x248D64u;
            goto label_248d64;
        }
    }
    ctx->pc = 0x248D5Cu;
    // 0x248d5c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x248d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x248d60: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x248d60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_248d64:
    // 0x248d64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x248d68: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x248d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x248d6c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x248D6Cu;
    {
        const bool branch_taken_0x248d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248d6c) {
            ctx->pc = 0x248D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248D6Cu;
            // 0x248d70: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248d50;
        }
    }
    ctx->pc = 0x248D74u;
    // 0x248d74: 0x3e00008  jr          $ra
    ctx->pc = 0x248D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248D74u;
        // 0x248d78: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248D7Cu;
    // 0x248d7c: 0x0  nop
    ctx->pc = 0x248d7cu;
    // NOP
    ctx->pc = 0x248d80u;
}
