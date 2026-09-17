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

// Function: sub_002EBE58
// Address: 0x2ebe58 - 0x2ebea0
void sub_002EBE58_0x2ebe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBE58_0x2ebe58");
#endif

    switch (ctx->pc) {
        case 0x2ebe94u: goto label_2ebe94;
        default: break;
    }

    ctx->pc = 0x2ebe58u;

    // 0x2ebe58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebe5c: 0x24850110  addiu       $a1, $a0, 0x110
    ctx->pc = 0x2ebe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x2ebe60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebe64: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ebe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ebe68: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBE68u;
    {
        const bool branch_taken_0x2ebe68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe68) {
            ctx->pc = 0x2EBE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBE68u;
            // 0x2ebe6c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBE84u;
            goto label_2ebe84;
        }
    }
    ctx->pc = 0x2EBE70u;
    // 0x2ebe70: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ebe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ebe74: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ebe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ebe78: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBE78u;
    {
        const bool branch_taken_0x2ebe78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebe78) {
            ctx->pc = 0x2EBE8Cu;
            goto label_2ebe8c;
        }
    }
    ctx->pc = 0x2EBE80u;
    // 0x2ebe80: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ebe80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ebe84:
    // 0x2ebe84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ebe84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe88: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ebe88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ebe8c:
    // 0x2ebe8c: 0xc0b3c28  jal         func_2CF0A0
    ctx->pc = 0x2EBE8Cu;
    SET_GPR_U32(ctx, 31, 0x2EBE94u);
    ctx->pc = 0x2CF0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF0A0u, 0x2EBE8Cu, 0x2EBE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBE94u;
label_2ebe94:
    // 0x2ebe94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebe94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebe98: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBE98u;
        // 0x2ebe9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBEA0u;
}
