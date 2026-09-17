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

// Function: sub_002E31F0
// Address: 0x2e31f0 - 0x2e3238
void sub_002E31F0_0x2e31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E31F0_0x2e31f0");
#endif

    ctx->pc = 0x2e31f0u;

    // 0x2e31f0: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2e31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2e31f4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E31F4u;
    {
        const bool branch_taken_0x2e31f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e31f4) {
            ctx->pc = 0x2E3230u;
            goto label_2e3230;
        }
    }
    ctx->pc = 0x2E31FCu;
    // 0x2e31fc: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E31FCu;
    {
        const bool branch_taken_0x2e31fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e31fc) {
            ctx->pc = 0x2E3200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E31FCu;
            // 0x2e3200: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3210u;
            goto label_2e3210;
        }
    }
    ctx->pc = 0x2E3204u;
    // 0x2e3204: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3204u;
        // 0x2e3208: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E320Cu;
    // 0x2e320c: 0x0  nop
    ctx->pc = 0x2e320cu;
    // NOP
label_2e3210:
    // 0x2e3210: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x2e3210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2e3214: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3214u;
    {
        const bool branch_taken_0x2e3214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3214u;
        // 0x2e3218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3214) {
            ctx->pc = 0x2E3228u;
            goto label_2e3228;
        }
    }
    ctx->pc = 0x2E321Cu;
    // 0x2e321c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E321Cu;
    {
        const bool branch_taken_0x2e321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E321Cu;
        // 0x2e3220: 0xa4a00002  sh          $zero, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e321c) {
            ctx->pc = 0x2E322Cu;
            goto label_2e322c;
        }
    }
    ctx->pc = 0x2E3224u;
    // 0x2e3224: 0x0  nop
    ctx->pc = 0x2e3224u;
    // NOP
label_2e3228:
    // 0x2e3228: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x2e3228u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_2e322c:
    // 0x2e322c: 0xac850084  sw          $a1, 0x84($a0)
    ctx->pc = 0x2e322cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
label_2e3230:
    // 0x2e3230: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3238u;
}
