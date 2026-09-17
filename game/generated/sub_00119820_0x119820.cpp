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

// Function: sub_00119820
// Address: 0x119820 - 0x119858
void sub_00119820_0x119820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119820_0x119820");
#endif

    ctx->pc = 0x119820u;

    // 0x119820: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x119820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x119824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119824u;
    {
        const bool branch_taken_0x119824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119824u;
        // 0x119828: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119824) {
            ctx->pc = 0x119834u;
            goto label_119834;
        }
    }
    ctx->pc = 0x11982Cu;
    // 0x11982c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11982Cu;
    {
        const bool branch_taken_0x11982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11982Cu;
        // 0x119830: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11982c) {
            ctx->pc = 0x11983Cu;
            goto label_11983c;
        }
    }
    ctx->pc = 0x119834u;
label_119834:
    // 0x119834: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x119834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x119838: 0xac432160  sw          $v1, 0x2160($v0)
    ctx->pc = 0x119838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x132160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x132160u, _value); } while (0);
label_11983c:
    // 0x11983c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11983Cu;
    {
        const bool branch_taken_0x11983c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11983c) {
            ctx->pc = 0x119840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11983Cu;
            // 0x119840: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119850u;
            goto label_119850;
        }
    }
    ctx->pc = 0x119844u;
    // 0x119844: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x119844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x119848: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x119848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x11984c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11984cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_119850:
    // 0x119850: 0x3e00008  jr          $ra
    ctx->pc = 0x119850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119850u;
        // 0x119854: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119858u;
}
