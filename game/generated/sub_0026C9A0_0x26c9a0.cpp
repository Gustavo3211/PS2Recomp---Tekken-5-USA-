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

// Function: sub_0026C9A0
// Address: 0x26c9a0 - 0x26c9f0
void sub_0026C9A0_0x26c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C9A0_0x26c9a0");
#endif

    switch (ctx->pc) {
        case 0x26c9c0u: goto label_26c9c0;
        default: break;
    }

    ctx->pc = 0x26c9a0u;

    // 0x26c9a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x26c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26c9a4: 0x24030141  addiu       $v1, $zero, 0x141
    ctx->pc = 0x26c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x26c9a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26c9ac: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x26c9acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26c9b0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26C9B0u;
    {
        const bool branch_taken_0x26c9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9B0u;
        // 0x26c9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9b0) {
            ctx->pc = 0x26C9E4u;
            goto label_26c9e4;
        }
    }
    ctx->pc = 0x26C9B8u;
    // 0x26c9b8: 0x34068156  ori         $a2, $zero, 0x8156
    ctx->pc = 0x26c9b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33110);
    // 0x26c9bc: 0x0  nop
    ctx->pc = 0x26c9bcu;
    // NOP
label_26c9c0:
    // 0x26c9c0: 0x10860008  beq         $a0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C9C0u;
    {
        const bool branch_taken_0x26c9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x26C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9C0u;
        // 0x26c9c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9c0) {
            ctx->pc = 0x26C9E4u;
            goto label_26c9e4;
        }
    }
    ctx->pc = 0x26C9C8u;
    // 0x26c9c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x26c9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x26c9cc: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x26c9ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26c9d0: 0x0  nop
    ctx->pc = 0x26c9d0u;
    // NOP
    // 0x26c9d4: 0x0  nop
    ctx->pc = 0x26c9d4u;
    // NOP
    // 0x26c9d8: 0x0  nop
    ctx->pc = 0x26c9d8u;
    // NOP
    // 0x26c9dc: 0x1483fff8  bne         $a0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26C9DCu;
    {
        const bool branch_taken_0x26c9dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9DCu;
        // 0x26c9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9dc) {
            ctx->pc = 0x26C9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c9c0;
        }
    }
    ctx->pc = 0x26C9E4u;
label_26c9e4:
    // 0x26c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C9ECu;
    // 0x26c9ec: 0x0  nop
    ctx->pc = 0x26c9ecu;
    // NOP
    ctx->pc = 0x26c9f0u;
}
