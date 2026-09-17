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

// Function: sub_00498810
// Address: 0x498810 - 0x4988a0
void sub_00498810_0x498810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498810_0x498810");
#endif

    ctx->pc = 0x498810u;

    // 0x498810: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x498810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x498814: 0x24c50b30  addiu       $a1, $a2, 0xB30
    ctx->pc = 0x498814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2864));
    // 0x498818: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x498818u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0B30u));
    // 0x49881c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49881cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B30u));
    // 0x498820: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x498820u;
    {
        const bool branch_taken_0x498820 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x498824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498820u;
        // 0x498824: 0x2464002b  addiu       $a0, $v1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498820) {
            ctx->pc = 0x498848u;
            goto label_498848;
        }
    }
    ctx->pc = 0x498828u;
    // 0x498828: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x498828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49882c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x49882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x498830: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x498830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x498834: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x498834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x498838: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x498838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49883c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49883Cu;
    {
        const bool branch_taken_0x49883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49883Cu;
        // 0x498840: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49883c) {
            ctx->pc = 0x498870u;
            goto label_498870;
        }
    }
    ctx->pc = 0x498844u;
    // 0x498844: 0x0  nop
    ctx->pc = 0x498844u;
    // NOP
label_498848:
    // 0x498848: 0x2c42002b  sltiu       $v0, $v0, 0x2B
    ctx->pc = 0x498848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)43) ? 1 : 0);
    // 0x49884c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49884Cu;
    {
        const bool branch_taken_0x49884c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49884Cu;
        // 0x498850: 0x84c40b30  lh          $a0, 0xB30($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49884c) {
            ctx->pc = 0x498874u;
            goto label_498874;
        }
    }
    ctx->pc = 0x498854u;
    // 0x498854: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x498854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x498858: 0x2463ffd5  addiu       $v1, $v1, -0x2B
    ctx->pc = 0x498858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967253));
    // 0x49885c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49885cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x498860: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x498860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x498864: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498868: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x498868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49886c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49886cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_498870:
    // 0x498870: 0x84c40b30  lh          $a0, 0xB30($a2)
    ctx->pc = 0x498870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2864)));
label_498874:
    // 0x498874: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x498874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x498878: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x498878u;
    {
        const bool branch_taken_0x498878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498878u;
        // 0x49887c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498878) {
            ctx->pc = 0x498898u;
            goto label_498898;
        }
    }
    ctx->pc = 0x498880u;
    // 0x498880: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x498880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x498884: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x498884u;
    {
        const bool branch_taken_0x498884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x498888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498884u;
        // 0x498888: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498884) {
            ctx->pc = 0x498894u;
            goto label_498894;
        }
    }
    ctx->pc = 0x49888Cu;
    // 0x49888c: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x49888Cu;
    {
        const bool branch_taken_0x49888c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x498890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49888Cu;
        // 0x498890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49888c) {
            ctx->pc = 0x498898u;
            goto label_498898;
        }
    }
    ctx->pc = 0x498894u;
label_498894:
    // 0x498894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x498894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_498898:
    // 0x498898: 0x3e00008  jr          $ra
    ctx->pc = 0x498898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4988A0u;
}
