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

// Function: sub_0026C870
// Address: 0x26c870 - 0x26c8c0
void sub_0026C870_0x26c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C870_0x26c870");
#endif

    ctx->pc = 0x26c870u;

    // 0x26c870: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26c870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c874: 0x94620026  lhu         $v0, 0x26($v1)
    ctx->pc = 0x26c874u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x26c878: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26C878u;
    {
        const bool branch_taken_0x26c878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C878u;
        // 0x26c87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c878) {
            ctx->pc = 0x26C8B8u;
            goto label_26c8b8;
        }
    }
    ctx->pc = 0x26C880u;
    // 0x26c880: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x26c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26c884: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26c884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26c888: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26c88c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26C88Cu;
    {
        const bool branch_taken_0x26c88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c88c) {
            ctx->pc = 0x26C8B8u;
            goto label_26c8b8;
        }
    }
    ctx->pc = 0x26C894u;
    // 0x26c894: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26c894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26c898: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26c898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26c89c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C89Cu;
    {
        const bool branch_taken_0x26c89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c89c) {
            ctx->pc = 0x26C8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C89Cu;
            // 0x26c8a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C8B8u;
            goto label_26c8b8;
        }
    }
    ctx->pc = 0x26C8A4u;
    // 0x26c8a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26c8a8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x26c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x26c8ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c8b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26C8B0u;
    {
        const bool branch_taken_0x26c8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c8b0) {
            ctx->pc = 0x26C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C8B0u;
            // 0x26c8b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C8B8u;
            goto label_26c8b8;
        }
    }
    ctx->pc = 0x26C8B8u;
label_26c8b8:
    // 0x26c8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x26C8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8B8u;
        // 0x26c8bc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C8C0u;
}
