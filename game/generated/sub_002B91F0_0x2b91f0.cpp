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

// Function: sub_002B91F0
// Address: 0x2b91f0 - 0x2b9248
void sub_002B91F0_0x2b91f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B91F0_0x2b91f0");
#endif

    switch (ctx->pc) {
        case 0x2b9200u: goto label_2b9200;
        case 0x2b9218u: goto label_2b9218;
        default: break;
    }

    ctx->pc = 0x2b91f0u;

    // 0x2b91f0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B91F0u;
    {
        const bool branch_taken_0x2b91f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B91F0u;
        // 0x2b91f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91f0) {
            ctx->pc = 0x2B9208u;
            goto label_2b9208;
        }
    }
    ctx->pc = 0x2B91F8u;
    // 0x2b91f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B91F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B91F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9200u;
label_2b9200:
    // 0x2b9200: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9200u;
        // 0x2b9204: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9208u;
label_2b9208:
    // 0x2b9208: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2B9208u;
    {
        const bool branch_taken_0x2b9208 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2B920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9208u;
        // 0x2b920c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9208) {
            ctx->pc = 0x2B923Cu;
            goto label_2b923c;
        }
    }
    ctx->pc = 0x2B9210u;
    // 0x2b9210: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x2b9210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2b9214: 0x0  nop
    ctx->pc = 0x2b9214u;
    // NOP
label_2b9218:
    // 0x2b9218: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2b9218u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2b921c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b921cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b9220: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b9220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b9224: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b9224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b9228: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b9228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b922c: 0x1044fff4  beq         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B922Cu;
    {
        const bool branch_taken_0x2b922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B922Cu;
        // 0x2b9230: 0x106382a  slt         $a3, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b922c) {
            ctx->pc = 0x2B9200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9200;
        }
    }
    ctx->pc = 0x2B9234u;
    // 0x2b9234: 0x54e0fff8  bnel        $a3, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B9234u;
    {
        const bool branch_taken_0x2b9234 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9234) {
            ctx->pc = 0x2B9238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9234u;
            // 0x2b9238: 0x818c0  sll         $v1, $t0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9218;
        }
    }
    ctx->pc = 0x2B923Cu;
label_2b923c:
    // 0x2b923c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B923Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B923Cu;
        // 0x2b9240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B923Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9244u;
    // 0x2b9244: 0x0  nop
    ctx->pc = 0x2b9244u;
    // NOP
    ctx->pc = 0x2b9248u;
}
